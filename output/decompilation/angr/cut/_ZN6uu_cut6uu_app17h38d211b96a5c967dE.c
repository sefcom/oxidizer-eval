long long uu_cut::uu_app(unsigned long long a0)
{
    unsigned long long v0;  // [bp-0xac8]
    char v1;  // [bp-0xab0]
    unsigned int v2;  // [bp-0x838]
    unsigned int v3;  // [bp-0x834]
    char v4;  // [bp-0x830]
    unsigned int v5;  // [bp-0x5b8]
    unsigned int v6;  // [bp-0x5b4]
    unsigned long v7;  // [bp-0x574]
    unsigned int v8;  // [bp-0x56c]
    char v9;  // [bp-0x568]
    unsigned int v10;  // [bp-0x2f0]
    unsigned int v11;  // [bp-0x2ec]
    unsigned long long v12;  // [bp-0x2ac]
    unsigned int v13;  // [bp-0x2a4]
    char v14;  // [bp-0x2a0]
    unsigned long long v17;  // rdx

    v4.new(uucore::util_name(), v17);
    v9.version(&v4);
    uucore::format_usage(&v1, "{} OPTION... [FILE]...Prints specified byte or field columns from each line of stdin or the input filesEach call must specify a mode (what to use for columns),\na sequence (which columns to print), and provide a data source\n\n### Specifying a mode\n\nUse --byt", 22);
    v4.override_usage(&v9, &v1);
    v9.about(&v4);
    v4.after_help(&v9);
    memcpy(&v9, &v4, 700);
    v12 = 584115552392 | v7;
    v13 = v8;
    v4.new("bytesfilter byte columns from the input sourcecharactersalias for character modespecify the delimiter character that separates fields in the input source. Defaults to Tab.DELIMUse any number of whitespace (Space, Tab) to separate fields in the input source", 5);
    v1.short(&v4, 98);
    v4.long(&v1, "bytesfilter byte columns from the input sourcecharactersalias for character modespecify the delimiter character that separates fields in the input source. Defaults to Tab.DELIMUse any number of whitespace (Space, Tab) to separate fields in the input source", 5);
    v1.help(&v4, "filter byte columns from the input sourcecharactersalias for character modespecify the delimiter character that separates fields in the input source. Defaults to Tab.DELIMUse any number of whitespace (Space, Tab) to separate fields in the input source (Fre", 41);
    memcpy(&v4, &v1, 632);
    v5 = v2 | 32;
    v6 = v3;
    v1.value_name(&v4, "LISTkindAuto/", 4);
    v14.action(&v1, 1);
    v4.arg(&v9, &v14);
    v9.new("charactersalias for character modespecify the delimiter character that separates fields in the input source. Defaults to Tab.DELIMUse any number of whitespace (Space, Tab) to separate fields in the input source (FreeBSD extension).WHITESPACEfieldsfilter fi", 10);
    v1.short(&v9, 99);
    v9.long(&v1, "charactersalias for character modespecify the delimiter character that separates fields in the input source. Defaults to Tab.DELIMUse any number of whitespace (Space, Tab) to separate fields in the input source (FreeBSD extension).WHITESPACEfieldsfilter fi", 10);
    v1.help(&v9, "alias for character modespecify the delimiter character that separates fields in the input source. Defaults to Tab.DELIMUse any number of whitespace (Space, Tab) to separate fields in the input source (FreeBSD extension).WHITESPACEfieldsfilter field column", 24);
    memcpy(&v9, &v1, 632);
    v10 = v2 | 32;
    v11 = v3;
    v1.value_name(&v9, "LISTkindAuto/", 4);
    v14.action(&v1, 1);
    v9.arg(&v4, &v14);
    v4.new("delimiter''", 9);
    v1.short(&v4, 100);
    v4.long(&v1, "delimiter''", 9);
    v0 = 2;
    v1.value_parser(&v4, &v0);
    v4.help(&v1, "specify the delimiter character that separates fields in the input source. Defaults to Tab.DELIMUse any number of whitespace (Space, Tab) to separate fields in the input source (FreeBSD extension).WHITESPACEfieldsfilter field columns from the input sourcec", 91);
    v1.value_name(&v4, "DELIMUse any number of whitespace (Space, Tab) to separate fields in the input source (FreeBSD extension).WHITESPACEfieldsfilter field columns from the input sourcecomplementinvert the filter - instead of displaying only the filtered columns, display all b", 5);
    v4.arg(&v9, &v1);
    v9.new("whitespace-delimiteddelimiter''", 20);
    v1.short(&v9, 119);
    v9.help(&v1, "Use any number of whitespace (Space, Tab) to separate fields in the input source (FreeBSD extension).WHITESPACEfieldsfilter field columns from the input sourcecomplementinvert the filter - instead of displaying only the filtered columns, display all but th", 101);
    v1.value_name(&v9, "WHITESPACEfieldsfilter field columns from the input sourcecomplementinvert the filter - instead of displaying only the filtered columns, display all but those columnsonly-delimitedin field mode, only print lines which contain the delimiterzero-terminatedin", 10);
    v14.action(&v1, 2);
    v9.arg(&v4, &v14);
    v4.new("fieldsfilter field columns from the input sourcecomplementinvert the filter - instead of displaying only the filtered columns, display all but those columnsonly-delimitedin field mode, only print lines which contain the delimiterzero-terminatedinstead of f", 6);
    v1.short(&v4, 102);
    v4.long(&v1, "fieldsfilter field columns from the input sourcecomplementinvert the filter - instead of displaying only the filtered columns, display all but those columnsonly-delimitedin field mode, only print lines which contain the delimiterzero-terminatedinstead of f", 6);
    v1.help(&v4, "filter field columns from the input sourcecomplementinvert the filter - instead of displaying only the filtered columns, display all but those columnsonly-delimitedin field mode, only print lines which contain the delimiterzero-terminatedinstead of filteri", 42);
    memcpy(&v4, &v1, 632);
    v5 = v2 | 32;
    v6 = v3;
    v1.value_name(&v4, "LISTkindAuto/", 4);
    v14.action(&v1, 1);
    v4.arg(&v9, &v14);
    v9.new("complementinvert the filter - instead of displaying only the filtered columns, display all but those columnsonly-delimitedin field mode, only print lines which contain the delimiterzero-terminatedinstead of filtering columns based on line, filter columns b", 10);
    v1.long(&v9, "complementinvert the filter - instead of displaying only the filtered columns, display all but those columnsonly-delimitedin field mode, only print lines which contain the delimiterzero-terminatedinstead of filtering columns based on line, filter columns b", 10);
    v9.help(&v1, "invert the filter - instead of displaying only the filtered columns, display all but those columnsonly-delimitedin field mode, only print lines which contain the delimiterzero-terminatedinstead of filtering columns based on line, filter columns based on \\0", 98);
    v1.action(&v9, 2);
    v9.arg(&v4, &v1);
    v4.new("only-delimitedin field mode, only print lines which contain the delimiterzero-terminatedinstead of filtering columns based on line, filter columns based on \\0 (NULL character)in field mode, replace the delimiter in output lines with this option's argumentN", 14);
    v1.short(&v4, 115);
    v4.long(&v1, "only-delimitedin field mode, only print lines which contain the delimiterzero-terminatedinstead of filtering columns based on line, filter columns based on \\0 (NULL character)in field mode, replace the delimiter in output lines with this option's argumentN", 14);
    v1.help(&v4, "in field mode, only print lines which contain the delimiterzero-terminatedinstead of filtering columns based on line, filter columns based on \\0 (NULL character)in field mode, replace the delimiter in output lines with this option's argumentNEW_DELIMwrite ", 59);
    v14.action(&v1, 2);
    v4.arg(&v9, &v14);
    v9.new("zero-terminatedinstead of filtering columns based on line, filter columns based on \\0 (NULL character)in field mode, replace the delimiter in output lines with this option's argumentNEW_DELIMwrite error/home/34r7hm4n/.cargo/registry/src/index.crates.io-194", 15);
    v1.short(&v9, 122);
    v9.long(&v1, "zero-terminatedinstead of filtering columns based on line, filter columns based on \\0 (NULL character)in field mode, replace the delimiter in output lines with this option's argumentNEW_DELIMwrite error/home/34r7hm4n/.cargo/registry/src/index.crates.io-194", 15);
    v1.help(&v9, "instead of filtering columns based on line, filter columns based on \\0 (NULL character)in field mode, replace the delimiter in output lines with this option's argumentNEW_DELIMwrite error/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/b", 87);
    v14.action(&v1, 2);
    v9.arg(&v4, &v14);
    v4.new("output-delimiterClapErrorWrapperPermissionDeniedStripPrefixError", 16);
    v1.long(&v4, "output-delimiterClapErrorWrapperPermissionDeniedStripPrefixError", 16);
    v4.value_parser(&v1, &v0);
    v1.help(&v4, "in field mode, replace the delimiter in output lines with this option's argumentNEW_DELIMwrite error/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/bstr-1.12.0/src/io.rs", 80);
    v14.value_name(&v1, "NEW_DELIMwrite error/home/34r7hm4n/.cargo/registry/src/index.crates.io-1949cf8c6b5b557f/bstr-1.12.0/src/io.rs", 9);
    v4.arg(&v9, &v14);
    v9.new("filei128 as dyn ERANGEEDEADLKENAMETOOLONGENOLCKENOSYSENOTEMPTYELOOPENOMSGEIDRMECHRNG", 4);
    memcpy(&v1, &v9, 632);
    v2 = v10 | 4;
    v3 = v11;
    v9.action(&v1, 1);
    v1.value_hint(&v9);
    a0.arg(&v4, &v1);
    return a0;
}
