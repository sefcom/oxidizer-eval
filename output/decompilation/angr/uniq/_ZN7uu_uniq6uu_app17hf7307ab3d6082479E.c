long long uu_uniq::uu_app(unsigned long long a0)
{
    void* v0;  // [bp-0xaf8]
    unsigned long long v1;  // [bp-0xaf0]
    char v2;  // [bp-0xae8]
    char v3;  // [bp-0xae0]
    unsigned long long v4;  // [bp-0xad8]
    unsigned long long v5;  // [bp-0xad0]
    char v6;  // [bp-0xac8], Other Possible Types: unsigned long long
    unsigned long long v7;  // [bp-0xac0]
    unsigned long long v8;  // [bp-0xab8]
    unsigned long long v9;  // [bp-0xab0]
    unsigned long long v10;  // [bp-0xaa8]
    unsigned long long v11;  // [bp-0xaa0]
    unsigned int v12;  // [bp-0x850]
    unsigned int v13;  // [bp-0x84c]
    char v14;  // [bp-0x848]
    int v15;  // [bp-0x848]
    unsigned long long v16;  // [bp-0x840]
    int v17;  // [bp-0x838], Other Possible Types: unsigned long long
    unsigned long long v18;  // [bp-0x830]
    int v19;  // [bp-0x828], Other Possible Types: unsigned long long
    unsigned long long v20;  // [bp-0x820]
    int v21;  // [bp-0x818], Other Possible Types: unsigned long long
    unsigned long long v22;  // [bp-0x810]
    unsigned int v23;  // [bp-0x5d0]
    char v24;  // [bp-0x5cc]
    unsigned long v25;  // [bp-0x58c]
    unsigned int v26;  // [bp-0x584]
    char v27;  // [bp-0x580]
    unsigned int v28;  // [bp-0x308]
    unsigned int v29;  // [bp-0x304]
    unsigned long long v30;  // [bp-0x2c4]
    unsigned int v31;  // [bp-0x2bc]
    void* v32;  // [bp-0x2b8], Other Possible Types: char, unsigned long long
    unsigned long long v33;  // [bp-0x2b0]
    char v34;  // [bp-0x2a8], Other Possible Types: unsigned long long
    unsigned int v35;  // [bp-0x40]
    unsigned int v36;  // [bp-0x3c]
    unsigned long long v39;  // rdx

    v27.new(uucore::util_name(), v39);
    v14.version(&v27, "(uutils coreutils) 0.1.0uniq-aboutuniq-usageuniq-after-helpprependuniq-help-all-repeateddelimit-methodappenduniq-help-groupgroup-methoduniq-help-check-charsNuniq-help-countuniq-help-ignore-caseuniq-help-repeateduniq-help-skip-charsuniq-help-skip-fieldsuniq", 24);
    uucore::mods::locale::get_message(&v6, "uniq-aboutuniq-usageuniq-after-helpprependuniq-help-all-repeateddelimit-methodappenduniq-help-groupgroup-methoduniq-help-check-charsNuniq-help-countuniq-help-ignore-caseuniq-help-repeateduniq-help-skip-charsuniq-help-skip-fieldsuniq-help-zero-terminatedint", 10);
    v27.about(&v14, &v6);
    uucore::mods::locale::get_message(&v3, "uniq-usageuniq-after-helpprependuniq-help-all-repeateddelimit-methodappenduniq-help-groupgroup-methoduniq-help-check-charsNuniq-help-countuniq-help-ignore-caseuniq-help-repeateduniq-help-skip-charsuniq-help-skip-fieldsuniq-help-zero-terminatedinternal erro", 10);
    uucore::format_usage(&v6, v4, v5);
    v14.override_usage(&v27, &v6);
    memcpy(&v27, &v14, 700);
    v30 = 549755814016 | v25;
    v31 = v26;
    uucore::mods::locale::get_message(&v6, "uniq-after-helpprependuniq-help-all-repeateddelimit-methodappenduniq-help-groupgroup-methoduniq-help-check-charsNuniq-help-countuniq-help-ignore-caseuniq-help-repeateduniq-help-skip-charsuniq-help-skip-fieldsuniq-help-zero-terminatedinternal error: entered", 15);
    v14.after_help(&v27, &v6);
    v27.new(*((long long *)&_ZN7uu_uniq7options12ALL_REPEATED17hcf39646f1fef1878E), g_58c500);
    v6.short(&v27, 68);
    v27.long(&v6, *((long long *)&_ZN7uu_uniq7options12ALL_REPEATED17hcf39646f1fef1878E), g_58c500);
    v6 = "nonehelpNoneshimbothname";
    v7 = 4;
    v8 = "prependuniq-help-all-repeateddelimit-methodappenduniq-help-groupgroup-methoduniq-help-check-charsNuniq-help-countuniq-help-ignore-caseuniq-help-repeateduniq-help-skip-charsuniq-help-skip-fieldsuniq-help-zero-terminatedinternal error: entered unreachable co";
    v9 = 7;
    v10 = "separate";
    v11 = 8;
    v32.from(&v6);
    v6.value_parser(&v27, &v32);
    uucore::mods::locale::get_message(&v32, "uniq-help-all-repeateddelimit-methodappenduniq-help-groupgroup-methoduniq-help-check-charsNuniq-help-countuniq-help-ignore-caseuniq-help-repeateduniq-help-skip-charsuniq-help-skip-fieldsuniq-help-zero-terminatedinternal error: entered unreachable code: Sho", 22);
    v27.help(&v6, &v32);
    v6.value_name(&v27, "delimit-methodappenduniq-help-groupgroup-methoduniq-help-check-charsNuniq-help-countuniq-help-ignore-caseuniq-help-repeateduniq-help-skip-charsuniq-help-skip-fieldsuniq-help-zero-terminatedinternal error: entered unreachable code: Should have been caught b", 14);
    v0 = 0;
    v1 = 1;
    v2 = 0;
    v34 = *((long long *)&v2);
    v32 = v0;
    v33 = 1;
    v27.num_args(&v6, &v32);
    v6.default_missing_value(&v27, "nonehelpNoneshimbothname", 4);
    memcpy(&v32, &v6, 632);
    v35 = 128 | v12;
    v36 = v13;
    v27.arg(&v14, &v32);
    v14.new(_ZN7uu_uniq7options5GROUP17hb84543885041a53aE, g_58c590);
    v6.long(&v14, _ZN7uu_uniq7options5GROUP17hb84543885041a53aE, g_58c590);
    *((char **)&v15) = "separate";
    v16 = 8;
    v17 = "prependuniq-help-all-repeateddelimit-methodappenduniq-help-groupgroup-methoduniq-help-check-charsNuniq-help-countuniq-help-ignore-caseuniq-help-repeateduniq-help-skip-charsuniq-help-skip-fieldsuniq-help-zero-terminatedinternal error: entered unreachable co";
    v18 = 7;
    v19 = "appenduniq-help-groupgroup-methoduniq-help-check-charsNuniq-help-countuniq-help-ignore-caseuniq-help-repeateduniq-help-skip-charsuniq-help-skip-fieldsuniq-help-zero-terminatedinternal error: entered unreachable code: Should have been caught by possible val";
    v20 = 6;
    v21 = "bothname";
    v22 = 4;
    v32.from(&(unsigned long long)v15);
    (unsigned long long)v15.value_parser(&v6, &v32);
    uucore::mods::locale::get_message(&v32, "uniq-help-groupgroup-methoduniq-help-check-charsNuniq-help-countuniq-help-ignore-caseuniq-help-repeateduniq-help-skip-charsuniq-help-skip-fieldsuniq-help-zero-terminatedinternal error: entered unreachable code: Should have been caught by possible values in", 15);
    v6.help(&(unsigned long long)v15, &v32);
    (unsigned long long)v15.value_name(&v6, "group-methoduniq-help-check-charsNuniq-help-countuniq-help-ignore-caseuniq-help-repeateduniq-help-skip-charsuniq-help-skip-fieldsuniq-help-zero-terminatedinternal error: entered unreachable code: Should have been caught by possible values in clap", 12);
    v6.num_args(&(unsigned long long)v15, &v0);
    (unsigned long long)v15.default_missing_value(&v6, "separate", 8);
    memcpy(&v6, &(unsigned long long)v15, 632);
    v12 = 128 | v23;
    v13 = *((int *)&v24);
    *((int128_t *)&v15) = *((int128_t *)&_ZN7uu_uniq7options8REPEATED17h35965832d783769eE);
    *((int128_t *)&v17) = *((int128_t *)&_ZN7uu_uniq7options12ALL_REPEATED17hcf39646f1fef1878E);
    *((int128_t *)&v19) = *((int128_t *)&_ZN7uu_uniq7options6UNIQUE17h6963093fe3050939E);
    *((int128_t *)&v21) = *((int128_t *)&_ZN7uu_uniq7options5COUNT17hfdb54eb62c4501a6E);
    v32.conflicts_with_all(&v6, &(unsigned long long)v15);
    (unsigned long long)v15.arg(&v27, &v32);
    v27.new(_ZN7uu_uniq7options11CHECK_CHARS17he6a6d54814012578E, g_58c510);
    v6.short(&v27, 119);
    v27.long(&v6, _ZN7uu_uniq7options11CHECK_CHARS17he6a6d54814012578E, g_58c510);
    uucore::mods::locale::get_message(&v32, "uniq-help-check-charsNuniq-help-countuniq-help-ignore-caseuniq-help-repeateduniq-help-skip-charsuniq-help-skip-fieldsuniq-help-zero-terminatedinternal error: entered unreachable code: Should have been caught by possible values in clap", 21);
    v6.help(&v27, &v32);
    v32.value_name(&v6, "Nuniq-help-countuniq-help-ignore-caseuniq-help-repeateduniq-help-skip-charsuniq-help-skip-fieldsuniq-help-zero-terminatedinternal error: entered unreachable code: Should have been caught by possible values in clap", 1);
    v27.arg(&(unsigned long long)v15, &v32);
    (unsigned long long)v15.new(*((long long *)&_ZN7uu_uniq7options5COUNT17hfdb54eb62c4501a6E), g_58c520);
    v6.short(&(unsigned long long)v15, 99);
    (unsigned long long)v15.long(&v6, *((long long *)&_ZN7uu_uniq7options5COUNT17hfdb54eb62c4501a6E), g_58c520);
    uucore::mods::locale::get_message(&v32, "uniq-help-countuniq-help-ignore-caseuniq-help-repeateduniq-help-skip-charsuniq-help-skip-fieldsuniq-help-zero-terminatedinternal error: entered unreachable code: Should have been caught by possible values in clap", 15);
    v6.help(&(unsigned long long)v15, &v32);
    v32.action(&v6, 2);
    (unsigned long long)v15.arg(&v27, &v32);
    v27.new(_ZN7uu_uniq7options11IGNORE_CASE17h92139d62e74c348bE, g_58c530);
    v6.short(&v27, 105);
    v27.long(&v6, _ZN7uu_uniq7options11IGNORE_CASE17h92139d62e74c348bE, g_58c530);
    uucore::mods::locale::get_message(&v32, "uniq-help-ignore-caseuniq-help-repeateduniq-help-skip-charsuniq-help-skip-fieldsuniq-help-zero-terminatedinternal error: entered unreachable code: Should have been caught by possible values in clap", 21);
    v6.help(&v27, &v32);
    v32.action(&v6, 2);
    v27.arg(&(unsigned long long)v15, &v32);
    (unsigned long long)v15.new(*((long long *)&_ZN7uu_uniq7options8REPEATED17h35965832d783769eE), g_58c540);
    v6.short(&(unsigned long long)v15, 100);
    (unsigned long long)v15.long(&v6, *((long long *)&_ZN7uu_uniq7options8REPEATED17h35965832d783769eE), g_58c540);
    uucore::mods::locale::get_message(&v32, "uniq-help-repeateduniq-help-skip-charsuniq-help-skip-fieldsuniq-help-zero-terminatedinternal error: entered unreachable code: Should have been caught by possible values in clap", 18);
    v6.help(&(unsigned long long)v15, &v32);
    v32.action(&v6, 2);
    (unsigned long long)v15.arg(&v27, &v32);
    v27.new(_ZN7uu_uniq7options10SKIP_CHARS17hc7963560e8db47ceE, g_58c560);
    v6.short(&v27, 115);
    v27.long(&v6, _ZN7uu_uniq7options10SKIP_CHARS17hc7963560e8db47ceE, g_58c560);
    uucore::mods::locale::get_message(&v32, "uniq-help-skip-charsuniq-help-skip-fieldsuniq-help-zero-terminatedinternal error: entered unreachable code: Should have been caught by possible values in clap", 20);
    v6.help(&v27, &v32);
    v32.value_name(&v6, "Nuniq-help-countuniq-help-ignore-caseuniq-help-repeateduniq-help-skip-charsuniq-help-skip-fieldsuniq-help-zero-terminatedinternal error: entered unreachable code: Should have been caught by possible values in clap", 1);
    v27.arg(&(unsigned long long)v15, &v32);
    (unsigned long long)v15.new(_ZN7uu_uniq7options11SKIP_FIELDS17h9bdd8e0819f91776E, g_58c550);
    v6.short(&(unsigned long long)v15, 102);
    (unsigned long long)v15.long(&v6, _ZN7uu_uniq7options11SKIP_FIELDS17h9bdd8e0819f91776E, g_58c550);
    uucore::mods::locale::get_message(&v32, "uniq-help-skip-fieldsuniq-help-zero-terminatedinternal error: entered unreachable code: Should have been caught by possible values in clap", 21);
    v6.help(&(unsigned long long)v15, &v32);
    v32.value_name(&v6, "Nuniq-help-countuniq-help-ignore-caseuniq-help-repeateduniq-help-skip-charsuniq-help-skip-fieldsuniq-help-zero-terminatedinternal error: entered unreachable code: Should have been caught by possible values in clap", 1);
    (unsigned long long)v15.arg(&v27, &v32);
    v27.new(*((long long *)&_ZN7uu_uniq7options6UNIQUE17h6963093fe3050939E), g_58c570);
    v6.short(&v27, 117);
    v27.long(&v6, *((long long *)&_ZN7uu_uniq7options6UNIQUE17h6963093fe3050939E), g_58c570);
    uucore::mods::locale::get_message(&v32, "uniq-help-unique", 16);
    v6.help(&v27, &v32);
    v32.action(&v6, 2);
    v27.arg(&(unsigned long long)v15, &v32);
    (unsigned long long)v15.new(_ZN7uu_uniq7options15ZERO_TERMINATED17h38aced8be2edf1e2E, g_58c580);
    v6.short(&(unsigned long long)v15, 122);
    (unsigned long long)v15.long(&v6, _ZN7uu_uniq7options15ZERO_TERMINATED17h38aced8be2edf1e2E, g_58c580);
    uucore::mods::locale::get_message(&v32, "uniq-help-zero-terminatedinternal error: entered unreachable code: Should have been caught by possible values in clap", 25);
    v6.help(&(unsigned long long)v15, &v32);
    v32.action(&v6, 2);
    (unsigned long long)v15.arg(&v27, &v32);
    v27.new("filessrc/uu/uniq/src/uniq.rs", 5);
    v6.action(&v27, 1);
    v32 = 2;
    v27.value_parser(&v6, &v32);
    v32 = 0;
    v33 = 2;
    v34 = 0;
    v6.num_args(&v27, &v32);
    memcpy(&v27, &v6, 632);
    v28 = v12 | 4;
    v29 = v13;
    v6.value_hint(&v27, 3);
    a0.arg(&(unsigned long long)v15, &v6);
    ::0x4a7c00::core::ptr::drop_in_place<alloc::string::String>(&v3);
    return a0;
}
