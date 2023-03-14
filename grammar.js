module.exports = grammar({
    name: 'cabal',

    rules: {
        cabal: $ => seq(
            optional($.cabal_version),
            $.pkg_props
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
            $.prop_build_type
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

        build_type_val: $ => choice('Custom', 'Simple')

  	// Package properties	
	//     name	
	//     version	
	//     cabal-version	
	//     build-type	
	//     license	
	//     license-file	
	//     license-files (since version: 1.20)	
	//     copyright	
	//     author	
	//     maintainer	
	//     stability	
	//     homepage	
	//     bug-reports	
	//     package-url	
	//     synopsis	
	//     description	
	//     category	
	//     tested-with	
	//     data-files	
	//     data-dir	
	//     extra-source-files	
	//     extra-doc-files (since version: 1.18)	
	//     extra-tmp-files

    }
});
