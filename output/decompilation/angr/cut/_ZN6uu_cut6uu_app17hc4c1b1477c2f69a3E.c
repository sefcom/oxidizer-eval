long long uu_cut::uu_app(unsigned long long a0)
{
    char v0;  // [bp-0xad8]
    unsigned long long v1;  // [bp-0xad0]
    unsigned long long v2;  // [bp-0xac8]
    unsigned long long v3;  // [bp-0xac0]
    unsigned long long v4;  // [bp-0xab8]
    unsigned long long v5;  // [bp-0xab0]
    char v6;  // [bp-0xaa8]
    unsigned int v7;  // [bp-0x830]
    unsigned int v8;  // [bp-0x82c]
    char v9;  // [bp-0x828]
    unsigned int v10;  // [bp-0x5b0]
    unsigned int v11;  // [bp-0x5ac]
    unsigned long v12;  // [bp-0x56c]
    unsigned int v13;  // [bp-0x564]
    char v14;  // [bp-0x560]
    unsigned int v15;  // [bp-0x2e8]
    unsigned int v16;  // [bp-0x2e4]
    unsigned long long v17;  // [bp-0x2a4]
    unsigned int v18;  // [bp-0x29c]
    char v19;  // [bp-0x298], Other Possible Types: unsigned long long
    unsigned long long v20;  // [bp-0x290]
    unsigned long long v21;  // [bp-0x288]
    unsigned long long v24;  // rdx

    v9.new(uucore::util_name(), v24);
    v14.version(&v9, "(uutils coreutils) 0.1.0cut-usagecut-aboutcut-after-helpbytescut-help-bytescharacterscut-help-characterscut-help-delimiterDELIMcut-help-whitespace-delimitedWHITESPACEfieldscut-help-fieldscomplementcut-help-complementonly-delimitedcut-help-only-delimitedzer", 24);
    uucore::mods::locale::get_message(&v0, "cut-usagecut-aboutcut-after-helpbytescut-help-bytescharacterscut-help-characterscut-help-delimiterDELIMcut-help-whitespace-delimitedWHITESPACEfieldscut-help-fieldscomplementcut-help-complementonly-delimitedcut-help-only-delimitedzero-terminatedcut-help-zer", 9);
    uucore::format_usage(&v6, v1, v2);
    v9.override_usage(&v14, &v6);
    uucore::mods::locale::get_message(&v6, "cut-aboutcut-after-helpbytescut-help-bytescharacterscut-help-characterscut-help-delimiterDELIMcut-help-whitespace-delimitedWHITESPACEfieldscut-help-fieldscomplementcut-help-complementonly-delimitedcut-help-only-delimitedzero-terminatedcut-help-zero-termina", 9);
    v14.about(&v9, &v6);
    uucore::mods::locale::get_message(&v6, "cut-after-helpbytescut-help-bytescharacterscut-help-characterscut-help-delimiterDELIMcut-help-whitespace-delimitedWHITESPACEfieldscut-help-fieldscomplementcut-help-complementonly-delimitedcut-help-only-delimitedzero-terminatedcut-help-zero-terminatedcut-he", 14);
    v9.after_help(&v14, &v6);
    memcpy(&v14, &v9, 700);
    v17 = 584115552392 | v12;
    v18 = v13;
    v9.new("bytescut-help-bytescharacterscut-help-characterscut-help-delimiterDELIMcut-help-whitespace-delimitedWHITESPACEfieldscut-help-fieldscomplementcut-help-complementonly-delimitedcut-help-only-delimitedzero-terminatedcut-help-zero-terminatedcut-help-output-deli", 5);
    v6.short(&v9, 98);
    v9.long(&v6, "bytescut-help-bytescharacterscut-help-characterscut-help-delimiterDELIMcut-help-whitespace-delimitedWHITESPACEfieldscut-help-fieldscomplementcut-help-complementonly-delimitedcut-help-only-delimitedzero-terminatedcut-help-zero-terminatedcut-help-output-deli", 5);
    uucore::mods::locale::get_message(&v19, "cut-help-bytescharacterscut-help-characterscut-help-delimiterDELIMcut-help-whitespace-delimitedWHITESPACEfieldscut-help-fieldscomplementcut-help-complementonly-delimitedcut-help-only-delimitedzero-terminatedcut-help-zero-terminatedcut-help-output-delimiterNEW_DELIM", 14);
    v6.help(&v9, &v19);
    memcpy(&v9, &v6, 632);
    v10 = v7 | 32;
    v11 = v8;
    v6.value_name(&v9, "LISTkindAuto/", 4);
    v19.action(&v6, 1);
    v9.arg(&v14, &v19);
    v14.new("characterscut-help-characterscut-help-delimiterDELIMcut-help-whitespace-delimitedWHITESPACEfieldscut-help-fieldscomplementcut-help-complementonly-delimitedcut-help-only-delimitedzero-terminatedcut-help-zero-terminatedcut-help-output-delimiterNEW_DELIM", 10);
    v6.short(&v14, 99);
    v14.long(&v6, "characterscut-help-characterscut-help-delimiterDELIMcut-help-whitespace-delimitedWHITESPACEfieldscut-help-fieldscomplementcut-help-complementonly-delimitedcut-help-only-delimitedzero-terminatedcut-help-zero-terminatedcut-help-output-delimiterNEW_DELIM", 10);
    uucore::mods::locale::get_message(&v19, "cut-help-characterscut-help-delimiterDELIMcut-help-whitespace-delimitedWHITESPACEfieldscut-help-fieldscomplementcut-help-complementonly-delimitedcut-help-only-delimitedzero-terminatedcut-help-zero-terminatedcut-help-output-delimiterNEW_DELIM", 19);
    v6.help(&v14, &v19);
    memcpy(&v14, &v6, 632);
    v15 = v7 | 32;
    v16 = v8;
    v6.value_name(&v14, "LISTkindAuto/", 4);
    v19.action(&v6, 1);
    v14.arg(&v9, &v19);
    v9.new("delimiter''cut-error-delimiter-must-be-single-character", 9);
    v6.short(&v9, 100);
    v9.long(&v6, "delimiter''cut-error-delimiter-must-be-single-character", 9);
    v3 = 2;
    v21 = v5;
    v19 = v3;
    v20 = v4;
    v6.value_parser(&v9, &v19);
    uucore::mods::locale::get_message(&v19, "cut-help-delimiterDELIMcut-help-whitespace-delimitedWHITESPACEfieldscut-help-fieldscomplementcut-help-complementonly-delimitedcut-help-only-delimitedzero-terminatedcut-help-zero-terminatedcut-help-output-delimiterNEW_DELIM", 18);
    v9.help(&v6, &v19);
    v6.value_name(&v9, "DELIMcut-help-whitespace-delimitedWHITESPACEfieldscut-help-fieldscomplementcut-help-complementonly-delimitedcut-help-only-delimitedzero-terminatedcut-help-zero-terminatedcut-help-output-delimiterNEW_DELIM", 5);
    v9.arg(&v14, &v6);
    v14.new("whitespace-delimiteddelimiter''cut-error-delimiter-must-be-single-character", 20);
    v6.short(&v14, 119);
    uucore::mods::locale::get_message(&v19, "cut-help-whitespace-delimitedWHITESPACEfieldscut-help-fieldscomplementcut-help-complementonly-delimitedcut-help-only-delimitedzero-terminatedcut-help-zero-terminatedcut-help-output-delimiterNEW_DELIM", 29);
    v14.help(&v6, &v19);
    v6.value_name(&v14, "WHITESPACEfieldscut-help-fieldscomplementcut-help-complementonly-delimitedcut-help-only-delimitedzero-terminatedcut-help-zero-terminatedcut-help-output-delimiterNEW_DELIM", 10);
    v19.action(&v6, 2);
    v14.arg(&v9, &v19);
    v9.new("fieldscut-help-fieldscomplementcut-help-complementonly-delimitedcut-help-only-delimitedzero-terminatedcut-help-zero-terminatedcut-help-output-delimiterNEW_DELIM", 6);
    v6.short(&v9, 102);
    v9.long(&v6, "fieldscut-help-fieldscomplementcut-help-complementonly-delimitedcut-help-only-delimitedzero-terminatedcut-help-zero-terminatedcut-help-output-delimiterNEW_DELIM", 6);
    uucore::mods::locale::get_message(&v19, "cut-help-fieldscomplementcut-help-complementonly-delimitedcut-help-only-delimitedzero-terminatedcut-help-zero-terminatedcut-help-output-delimiterNEW_DELIM", 15);
    v6.help(&v9, &v19);
    memcpy(&v9, &v6, 632);
    v10 = v7 | 32;
    v11 = v8;
    v6.value_name(&v9, "LISTkindAuto/", 4);
    v19.action(&v6, 1);
    v9.arg(&v14, &v19);
    v14.new("complementcut-help-complementonly-delimitedcut-help-only-delimitedzero-terminatedcut-help-zero-terminatedcut-help-output-delimiterNEW_DELIM", 10);
    v6.long(&v14, "complementcut-help-complementonly-delimitedcut-help-only-delimitedzero-terminatedcut-help-zero-terminatedcut-help-output-delimiterNEW_DELIM", 10);
    uucore::mods::locale::get_message(&v19, "cut-help-complementonly-delimitedcut-help-only-delimitedzero-terminatedcut-help-zero-terminatedcut-help-output-delimiterNEW_DELIM", 19);
    v14.help(&v6, &v19);
    v6.action(&v14, 2);
    v14.arg(&v9, &v6);
    v9.new("only-delimitedcut-help-only-delimitedzero-terminatedcut-help-zero-terminatedcut-help-output-delimiterNEW_DELIM", 14);
    v6.short(&v9, 115);
    v9.long(&v6, "only-delimitedcut-help-only-delimitedzero-terminatedcut-help-zero-terminatedcut-help-output-delimiterNEW_DELIM", 14);
    uucore::mods::locale::get_message(&v19, "cut-help-only-delimitedzero-terminatedcut-help-zero-terminatedcut-help-output-delimiterNEW_DELIM", 23);
    v6.help(&v9, &v19);
    v19.action(&v6, 2);
    v9.arg(&v14, &v19);
    v14.new("zero-terminatedcut-help-zero-terminatedcut-help-output-delimiterNEW_DELIM", 15);
    v6.short(&v14, 122);
    v14.long(&v6, "zero-terminatedcut-help-zero-terminatedcut-help-output-delimiterNEW_DELIM", 15);
    uucore::mods::locale::get_message(&v19, "cut-help-zero-terminatedcut-help-output-delimiterNEW_DELIM", 24);
    v6.help(&v14, &v19);
    v19.action(&v6, 2);
    v14.arg(&v9, &v19);
    v9.new("output-delimiterClapErrorWrapperPermissionDeniedStripPrefixError", 16);
    v6.long(&v9, "output-delimiterClapErrorWrapperPermissionDeniedStripPrefixError", 16);
    v9.value_parser(&v6, &v3);
    uucore::mods::locale::get_message(&v19, "cut-help-output-delimiterNEW_DELIM", 25);
    v6.help(&v9, &v19);
    v19.value_name(&v6, "NEW_DELIM", 9);
    v9.arg(&v14, &v19);
    v14.new("filesizei128", 4);
    memcpy(&v6, &v14, 632);
    v7 = v15 | 4;
    v8 = v16;
    v14.action(&v6, 1);
    v6.value_hint(&v14, 3);
    a0.arg(&v9, &v6);
    ::0x4ab750::core::ptr::drop_in_place<alloc::string::String>(&v0);
    return a0;
}
