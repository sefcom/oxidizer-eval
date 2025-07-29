long long uu_fold::uu_app(unsigned long long a0)
{
    char v0;  // [bp-0xac0]
    unsigned long long v1;  // [bp-0xab8]
    unsigned long long v2;  // [bp-0xab0]
    char v3;  // [bp-0xaa8]
    unsigned int v4;  // [bp-0x830]
    char v5;  // [bp-0x82c]
    unsigned long v6;  // [bp-0x7ec]
    unsigned int v7;  // [bp-0x7e4]
    char v8;  // [bp-0x7e0]
    unsigned int v9;  // [bp-0x568]
    unsigned int v10;  // [bp-0x564]
    char v11;  // [bp-0x560]
    unsigned int v12;  // [bp-0x2e8]
    char v13;  // [bp-0x2e4]
    unsigned long long v14;  // [bp-0x2a4]
    unsigned int v15;  // [bp-0x29c]
    char v16;  // [bp-0x298]
    unsigned long long v19;  // rdx

    v11.new(uucore::util_name(), v19);
    v3.version(&v11, "(uutils coreutils) 0.1.0fold-usagefold-aboutbytesfold-bytes-helpspaceswidthfold-width-helpWIDTHsrc/uu/fold/src/fold.rs", 24);
    uucore::mods::locale::get_message(&v0, "fold-usagefold-aboutbytesfold-bytes-helpspaceswidthfold-width-helpWIDTHsrc/uu/fold/src/fold.rs", 10);
    uucore::format_usage(&v8, v1, v2);
    v11.override_usage(&v3, &v8);
    uucore::mods::locale::get_message(&v8, "fold-aboutbytesfold-bytes-helpspaceswidthfold-width-helpWIDTHsrc/uu/fold/src/fold.rs", 10);
    v3.about(&v11, &v8);
    memcpy(&v11, &v3, 700);
    v14 = 549755814016 | v6;
    v15 = v7;
    v3.new("bytesfold-bytes-helpspaceswidthfold-width-helpWIDTHsrc/uu/fold/src/fold.rs", 5);
    v8.long(&v3, "bytesfold-bytes-helpspaceswidthfold-width-helpWIDTHsrc/uu/fold/src/fold.rs", 5);
    v3.short(&v8, 98);
    uucore::mods::locale::get_message(&v16, "fold-bytes-helpspaceswidthfold-width-helpWIDTHsrc/uu/fold/src/fold.rs", 15);
    v8.help(&v3, &v16);
    v16.action(&v8, 2);
    v3.arg(&v11, &v16);
    v11.new("spaceswidthfold-width-helpWIDTHsrc/uu/fold/src/fold.rs", 6);
    v8.long(&v11, "spaceswidthfold-width-helpWIDTHsrc/uu/fold/src/fold.rs", 6);
    v11.short(&v8, 115);
    uucore::mods::locale::get_message(&v16, "fold-spaces-helpthe subcommand 'invalid filenameArgumentConflict", 16);
    v8.help(&v11, &v16);
    v16.action(&v8, 2);
    v11.arg(&v3, &v16);
    v3.new("widthfold-width-helpWIDTHsrc/uu/fold/src/fold.rs", 5);
    v8.long(&v3, "widthfold-width-helpWIDTHsrc/uu/fold/src/fold.rs", 5);
    v3.short(&v8, 119);
    uucore::mods::locale::get_message(&v16, "fold-width-helpWIDTHsrc/uu/fold/src/fold.rs", 15);
    v8.help(&v3, &v16);
    v3.value_name(&v8);
    memcpy(&v8, &v3, 632);
    v9 = v4 | 32;
    v10 = *((int *)&v5);
    v3.arg(&v11, &v8);
    v11.new("filesizei128", 4);
    memcpy(&v8, &v11, 632);
    v9 = v12 | 4;
    v10 = *((int *)&v13);
    v11.action(&v8, 1);
    v8.value_hint(&v11, 3);
    a0.arg(&v3, &v8);
    ::0x49f1a0::core::ptr::drop_in_place<alloc::string::String>(&v0);
    return a0;
}
