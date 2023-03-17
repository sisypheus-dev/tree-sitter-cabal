module.exports = {
    sec_library: $ => seq(
        'library', optional($.sec_lib_name),
        $.indent,
        repeat1($.sec_lib_field),
        $.dedent,
    ),

    sec_lib_name: $ => /\d*[a-zA-Z]\w*(-\d*[a-zA-Z]\w*)*/,

    sec_lib_field: $ => seq($.sec_lib_field_name, ':', $.sec_lib_field_value),

    sec_lib_field_name: $ => /\w(\w|-)+/,

    sec_lib_field_value: $ => /.+/,
}
