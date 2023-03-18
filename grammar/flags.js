module.exports = {
    sec_flag: $ => seq(
        'flag', $.sec_fl_name,
        $.indent,
        repeat1($.sec_fl_field),
        $.dedent,
    ),

    sec_fl_name: $ => /\d*[a-zA-Z]\w*(-\d*[a-zA-Z]\w*)*/,

    sec_fl_field: $ => seq(
        $.sec_fl_field_name, ':', $.sec_fl_field_value,
        optional(seq(
            $.indent,
            $.sec_fl_field_value,
            repeat(seq($.indented, $.sec_fl_field_value)),
            $.dedent
        )),
    ),

    sec_fl_field_name: $ => /\w(\w|-)+/,

    sec_fl_field_value: $ => /.+/,
}
