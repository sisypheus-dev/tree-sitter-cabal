const libraries = require('./grammar/libraries.js')
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

        properties: $ => repeat1($.prop),

        prop: $ => seq(
            $.field_name, ':', $.field_value,
            optional(seq(
                $.indent,
                $.field_value,
                repeat(seq($.indented, $.field_value)),
                $.dedent,
            )),
        ),

        sections: $ => choice(
            $.sec_benchmark,
            $.sec_executable,
            $.sec_flag,
            $.sec_library,
            $.sec_source_repository,
            $.sec_test_suite,
        ),

        comment: $ => token(seq('--', /.*/)),

        field_name: $ => /\w(\w|-)+/,

        field_value: $ => /.+/,

        ...benchmarks,
        ...exectuables,
        ...flags,
        ...libraries,
        ...source_repositories,
        ...test_suites,
    }
});
