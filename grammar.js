const properties = require('./grammar/properties.js')
const libraries = require('./grammar/libraries.js')

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
            $.sec_library,
            // $.sec_executable,
            // $.sec_test_suite,
            // $.sec_benchmark,
            // $.sec_foreign_library,
        ),

        comment: $ => token(seq('--', /.*/)),

        ...properties,
        ...libraries,
    }
});
