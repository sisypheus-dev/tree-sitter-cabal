module.exports = {
    sec_executable: $ => seq(
        'executable', $.sec_exe_name,
        $.indent,
        repeat1($.sec_exe_field),
        $.dedent,
    ),

    sec_exe_name: $ => /\d*[a-zA-Z]\w*(-\d*[a-zA-Z]\w*)*/,

    sec_exe_field: $ => seq(
        $.sec_exe_field_name, ':', $.sec_exe_field_value,
        optional(seq(
            $.indent,
            $.sec_exe_field_value,
            repeat(seq($.indented, $.sec_exe_field_value)),
            $.dedent
        )),
    ),

    sec_exe_field_name: $ => /\w(\w|-)+/,

    sec_exe_field_value: $ => /.+/,
}
