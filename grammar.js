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
            $.sections,
        ),

        cabal_version: $ => seq(
            'cabal-version', ':',
            $.spec_version
        ),

        spec_version: $ => /\d+\.\d+(\.\d+)?/,

        properties: $ => repeat1($.field),

        sections: $ => repeat1(choice(
            $.benchmark,
            $.common,
            $.executable,
            $.flag,
            $.library,
            $.source_repository,
            $.test_suite,
        )),

        benchmark: $ => seq(
            'benchmark', $.section_name,
            $.property_block,
        ),

        common: $ => seq(
            'common', $.section_name,
            $.property_block,
        ),

        executable: $ => seq(
            'executable', $.section_name,
            $.property_block,
        ),

        flag: $ => seq(
            'flag', $.section_name,
            $.property_block,
        ),

        library: $ => seq(
            'library', optional($.section_name),
            $.property_block,
        ),

        source_repository: $ => seq(
            'source-repository', $.section_name,
            $.property_block,
        ),

        test_suite: $ => seq(
            'test-suite', $.section_name,
            $.property_block,
        ),

        section_name: $ => /\d*[a-zA-Z]\w*(-\d*[a-zA-Z]\w*)*/,

        comment: $ => token(seq('--', /.*/)),

        property_block: $ => seq(
            $.indent,
            repeat1($.field),
            $.dedent,
        ),

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
    }
});
