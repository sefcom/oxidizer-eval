long long uu_unexpand::uu_app(unsigned long long a0)
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
    unsigned long long v9;  // [bp-0x524]
    unsigned int v10;  // [bp-0x51c]
    char v11;  // [bp-0x518]
    unsigned int v12;  // [bp-0x2a0]
    unsigned int v13;  // [bp-0x29c]
    char v14;  // [bp-0x298]
    unsigned long long v17;  // rdx

    v8.new(uucore::util_name(), v17);
    v3.version(&v8, "(uutils coreutils) 0.1.0unexpand-usageunexpand-aboutunexpand-help-allunexpand-help-first-onlyunexpand-help-tabsN, LISTunexpand-help-no-utf8unexpand-error-is-directory\t : \n", 24);
    uucore::mods::locale::get_message(&v0, "unexpand-usageunexpand-aboutunexpand-help-allunexpand-help-first-onlyunexpand-help-tabsN, LISTunexpand-help-no-utf8unexpand-error-is-directory\t : \n", 14);
    uucore::format_usage(&v11, v1, v2);
    v8.override_usage(&v3, &v11);
    uucore::mods::locale::get_message(&v11, "unexpand-aboutunexpand-help-allunexpand-help-first-onlyunexpand-help-tabsN, LISTunexpand-help-no-utf8unexpand-error-is-directory\t : \n", 14);
    v3.about(&v8, &v11);
    memcpy(&v8, &v3, 700);
    v9 = 549755814016 | v6;
    v10 = v7;
    v3.new("filesizei128", 4);
    memcpy(&v11, &v3, 632);
    v12 = v4 | 4;
    v13 = *((int *)&v5);
    v3.action(&v11, 1);
    v11.value_hint(&v3, 3);
    v3.arg(&v8, &v11);
    v8.new("allfirst-onlyno-utf8--first-only--all-a--tabs=", 3);
    v11.short(&v8, 97);
    v8.long(&v11, "allfirst-onlyno-utf8--first-only--all-a--tabs=", 3);
    uucore::mods::locale::get_message(&v14, "unexpand-help-allunexpand-help-first-onlyunexpand-help-tabsN, LISTunexpand-help-no-utf8unexpand-error-is-directory\t : \n", 17);
    v11.help(&v8, &v14);
    v14.action(&v11, 2);
    v8.arg(&v3, &v14);
    v3.new("first-onlyno-utf8--first-only--all-a--tabs=", 10);
    v11.short(&v3, 102);
    v3.long(&v11, "first-onlyno-utf8--first-only--all-a--tabs=", 10);
    uucore::mods::locale::get_message(&v14, "unexpand-help-first-onlyunexpand-help-tabsN, LISTunexpand-help-no-utf8unexpand-error-is-directory\t : \n", 24);
    v11.help(&v3, &v14);
    v14.action(&v11, 2);
    v3.arg(&v8, &v14);
    v8.new("tabskindAuto/", 4);
    v11.short(&v8, 116);
    v8.long(&v11, "tabskindAuto/", 4);
    uucore::mods::locale::get_message(&v14, "unexpand-help-tabsN, LISTunexpand-help-no-utf8unexpand-error-is-directory\t : \n", 18);
    v11.help(&v8, &v14);
    v8.action(&v11, 1);
    v11.value_name(&v8);
    v8.arg(&v3, &v11);
    v3.new("no-utf8--first-only--all-a--tabs=", 7);
    v11.short(&v3, 85);
    v3.long(&v11, "no-utf8--first-only--all-a--tabs=", 7);
    uucore::mods::locale::get_message(&v14, "unexpand-help-no-utf8unexpand-error-is-directory\t : \n", 21);
    v11.help(&v3, &v14);
    v3.action(&v11, 2);
    a0.arg(&v8, &v3);
    ::0x49d580::core::ptr::drop_in_place<alloc::string::String>(&v0);
    return a0;
}
