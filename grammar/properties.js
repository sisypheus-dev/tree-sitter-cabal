module.exports = {

    pkg_props: $ => repeat1($.prop),

    prop: $ => choice(
        $.prop_name,
        $.prop_version,
        $.prop_build_type,
        $.prop_property,
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

    prop_property: $ => seq(
        $.prop_field, ':', $.prop_value,
        optional(seq(
            $.indent,
            $.prop_value,
            repeat(seq($.indented, $.prop_value)),
            $.dedent,
        )),
    ),

    prop_field: $ => /\w(\w|-)+/,

    prop_value: $ => /.+/,
}