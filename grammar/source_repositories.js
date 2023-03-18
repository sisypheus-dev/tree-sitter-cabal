module.exports = {
    sec_source_repository: $ => seq(
        'source-repository', $.sec_src_name,
        $.indent,
        repeat1($.sec_src_field),
        $.dedent,
    ),

    sec_src_name: $ => /\d*[a-zA-Z]\w*(-\d*[a-zA-Z]\w*)*/,

    sec_src_field: $ => seq(
        $.sec_src_field_name, ':', $.sec_src_field_value,
        optional(seq(
            $.indent,
            $.sec_src_field_value,
            repeat(seq($.indented, $.sec_src_field_value)),
            $.dedent
        )),
    ),

    sec_src_field_name: $ => /\w(\w|-)+/,

    sec_src_field_value: $ => /.+/,
}
