long long uu_tac::uu_app(unsigned long long a0)
{
    char v0;  // [bp-0xac0]
    unsigned long long v1;  // [bp-0xab8]
    unsigned long long v2;  // [bp-0xab0]
    char v3;  // [bp-0xaa8]
    unsigned long v4;  // [bp-0x7ec]
    unsigned int v5;  // [bp-0x7e4]
    char v6;  // [bp-0x7e0]
    unsigned int v7;  // [bp-0x568]
    char v8;  // [bp-0x564]
    unsigned long long v9;  // [bp-0x524]
    unsigned int v10;  // [bp-0x51c]
    char v11;  // [bp-0x518]
    unsigned int v12;  // [bp-0x2a0]
    unsigned int v13;  // [bp-0x29c]
    char v14;  // [bp-0x298]
    unsigned long long v17;  // rdx

    v6.new(uucore::util_name(), v17);
    v3.version(&v6, "(uutils coreutils) 0.1.0tac-usagetac-abouttac-help-beforetac-help-regextac-help-separatorSTRINGsrc/uu/tac/src/tac.rs", 24);
    uucore::mods::locale::get_message(&v0, "tac-usagetac-abouttac-help-beforetac-help-regextac-help-separatorSTRINGsrc/uu/tac/src/tac.rs", 9);
    uucore::format_usage(&v11, v1, v2);
    v6.override_usage(&v3, &v11);
    uucore::mods::locale::get_message(&v11, "tac-abouttac-help-beforetac-help-regextac-help-separatorSTRINGsrc/uu/tac/src/tac.rs", 9);
    v3.about(&v6, &v11);
    memcpy(&v6, &v3, 700);
    v9 = 549755814016 | v4;
    v10 = v5;
    v3.new(_ZN6uu_tac7options6BEFORE17h8e39d1d3b67b2fd3E, g_714458);
    v11.short(&v3, 98);
    v3.long(&v11, _ZN6uu_tac7options6BEFORE17h8e39d1d3b67b2fd3E, g_714458);
    uucore::mods::locale::get_message(&v14, "tac-help-beforetac-help-regextac-help-separatorSTRINGsrc/uu/tac/src/tac.rs", 15);
    v11.help(&v3, &v14);
    v14.action(&v11, 2);
    v3.arg(&v6, &v14);
    v6.new(_ZN6uu_tac7options5REGEX17hffb6879362b8a9fbE, g_714468);
    v11.short(&v6, 114);
    v6.long(&v11, _ZN6uu_tac7options5REGEX17hffb6879362b8a9fbE, g_714468);
    uucore::mods::locale::get_message(&v14, "tac-help-regextac-help-separatorSTRINGsrc/uu/tac/src/tac.rs", 14);
    v11.help(&v6, &v14);
    v14.action(&v11, 2);
    v6.arg(&v3, &v14);
    v3.new(_ZN6uu_tac7options9SEPARATOR17h8b50e049519d40cdE, g_714478);
    v11.short(&v3, 115);
    v3.long(&v11, _ZN6uu_tac7options9SEPARATOR17h8b50e049519d40cdE, g_714478);
    uucore::mods::locale::get_message(&v14, "tac-help-separatorSTRINGsrc/uu/tac/src/tac.rs", 18);
    v11.help(&v3, &v14);
    v14.value_name(&v11);
    v3.arg(&v6, &v14);
    v6.new(_ZN6uu_tac7options4FILE17h510b18896a11475dE, g_714488);
    memcpy(&v11, &v6, 632);
    v12 = v7 | 4;
    v13 = *((int *)&v8);
    v6.action(&v11, 1);
    v11.value_hint(&v6, 3);
    a0.arg(&v3, &v11);
    ::0x5875e0::core::ptr::drop_in_place<alloc::string::String>(&v0);
    return a0;
}
