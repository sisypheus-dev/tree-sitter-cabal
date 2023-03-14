module.exports = grammar({
    name: 'cabal',

    rules: {
        cabal: $ => seq(
            optional($.cabal_version),
            $.pkg_props
        ),

        cabal_version: $ => seq(
            'cabal-version', ':',
            $.spec_version
        ),

        spec_version: $ => /\d+\.\d+(\.\d+)?/,

        pkg_props: $ => repeat1($.prop),

        prop: $ => choice(
            $.prop_version,
            $.prop_build_type
        ),

        prop_version: $ => seq(
            'version', ':',
            $.pkg_version
        ),

        pkg_version: $ => /\d+(\.\d+)*/,

        prop_build_type: $ => seq(
            'build-type', ':',
            $.build_type_val
        ),

        build_type_val: $ => choice('Custom', 'Simple')
    }
});
