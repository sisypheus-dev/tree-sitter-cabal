module.exports = {
    sec_library: $ => seq(
        'library', optional($.sec_library_name),
        $.indent,
        repeat1($.sec_library_field),
        $.dedent,
    ),

    sec_library_name: $ => /\d*[a-zA-Z]\w*(-\d*[a-zA-Z]\w*)*/,

    sec_library_field: $ => seq(/\w(\w|-)+/, ':', /.+/),
}
