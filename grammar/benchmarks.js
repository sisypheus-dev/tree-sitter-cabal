module.exports = {
    sec_benchmark: $ => seq(
        'benchmark', $.sec_bench_name,
        $.indent,
        repeat1($.sec_bench_field),
        $.dedent,
    ),

    sec_bench_name: $ => /\d*[a-zA-Z]\w*(-\d*[a-zA-Z]\w*)*/,

    sec_bench_field: $ => seq(
        $.sec_bench_field_name, ':', $.sec_bench_field_value,
        optional(seq(
            $.indent,
            $.sec_bench_field_value,
            repeat(seq($.indented, $.sec_bench_field_value)),
            $.dedent
        )),
    ),

    sec_bench_field_name: $ => /\w(\w|-)+/,

    sec_bench_field_value: $ => /.+/,
}
