const properties = require('./grammar/properties.js')
const libraries = require('./grammar/libraries.js')
const exectuables = require('./grammar/executables.js')
const source_repositories = require('./grammar/source_repositories.js')

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
            $.pkg_props,
            repeat1($.pkg_sections)
        ),

        cabal_version: $ => seq(
            'cabal-version', ':',
            $.spec_version
        ),

        spec_version: $ => /\d+\.\d+(\.\d+)?/,

        pkg_sections: $ => choice(
            // $.sec_benchmark,
            $.sec_executable,
            // $.sec_flag,
            $.sec_library,
            $.sec_source_repository,
            // $.sec_test_suite,
        ),

        comment: $ => token(seq('--', /.*/)),

        ...exectuables,
        ...libraries,
        ...properties,
        ...source_repositories
    }
});
