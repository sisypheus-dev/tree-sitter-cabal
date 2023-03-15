module.exports = grammar({
    name: 'cabal',

    extras: $ => [
        $.comment,
        /\s|\n/,
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

        pkg_props: $ => repeat1($.prop),

        prop: $ => choice(
            $.prop_name,
            $.prop_version,
            $.prop_build_type,
            $.prop_property
        ),

        prop_name: $ => seq(
            'name', ':',
            $.pkg_name
        ),

        pkg_name: $ => /\d*[a-zA-Z]\w*(-\d*[a-zA-Z]\w*)*/,

        prop_version: $ => seq(
            'version', ':',
            $.pkg_version
        ),

        pkg_version: $ => /\d+(\.\d+)*/,

        prop_build_type: $ => seq(
            'build-type', ':',
            $.build_type_val
        ),

        build_type_val: $ => choice('Custom', 'Simple'),

        prop_property: $ => seq(/\w+/, ':', /.+/),

        pkg_sections: $ => choice(
            $.sec_library,
            // $.sec_executable,
            // $.sec_test_suite,
            // $.sec_benchmark,
            // $.sec_foreign_library,
        ),

        sec_library: $ => seq(
            'library', optional($.sec_library_name),
            // repeat($sec_library_field)
        ),

        sec_library_name: $ => /\d*[a-zA-Z]\w*(-\d*[a-zA-Z]\w*)*/,

        comment: $ => token(seq('--', /.*/)),
    }
});
