module.exports = {
    sec_test_suite: $ => seq(
        'test-suite', $.sec_test_name,
        $.indent,
        repeat1($.sec_test_field),
        $.dedent,
    ),

    sec_test_name: $ => /\d*[a-zA-Z]\w*(-\d*[a-zA-Z]\w*)*/,

    sec_test_field: $ => seq(
        $.sec_test_field_name, ':', $.sec_test_field_value,
        optional(seq(
            $.indent,
            $.sec_test_field_value,
            repeat(seq($.indented, $.sec_test_field_value)),
            $.dedent
        )),
    ),

    sec_test_field_name: $ => /\w(\w|-)+/,

    sec_test_field_value: $ => /.+/,
}
