const exectuables = require('./grammar/executables.js')
const source_repositories = require('./grammar/source_repositories.js')
const test_suites = require('./grammar/test_suites.js')
const benchmarks = require('./grammar/benchmarks.js')
const flags = require('./grammar/flags.js')

module.exports = grammar({
    name: 'cabal',

    extras: $ => [
        $.comment,
        /\s|\n/,
    ],

    externals: $ => [
        $.comment,
        $.indent,
        $.dedent,
        $.indented,
    ],

    rules: {
        cabal: $ => seq(
            optional($.cabal_version),
            $.properties,
            repeat1($.sections)
        ),

        cabal_version: $ => seq(
            'cabal-version', ':',
            $.spec_version
        ),

        spec_version: $ => /\d+\.\d+(\.\d+)?/,

        properties: $ => repeat1($.field),

        sections: $ => choice(
            $.sec_benchmark,
            $.sec_executable,
            $.sec_flag,
            $.library,
            $.sec_source_repository,
            $.sec_test_suite,
        ),

        library: $ => seq(
            'library', optional($.section_name),
            $.indent,
            repeat1($.field),
            $.dedent,
        ),

        section_name: $ => /\d*[a-zA-Z]\w*(-\d*[a-zA-Z]\w*)*/,

        comment: $ => token(seq('--', /.*/)),

        field: $ => seq(
            $.field_name, ':', $.field_value,
            optional(seq(
                $.indent,
                $.field_value,
                repeat(seq($.indented, $.field_value)),
                $.dedent,
            )),
        ),

        field_name: $ => /\w(\w|-)+/,

        field_value: $ => /.+/,

        ...benchmarks,
        ...exectuables,
        ...flags,
        ...source_repositories,
        ...test_suites,
    }
});
