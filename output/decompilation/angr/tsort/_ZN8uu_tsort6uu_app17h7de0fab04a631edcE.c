long long uu_tsort::uu_app(unsigned long long a0)
{
    char v0;  // [bp-0x838]
    unsigned long long v1;  // [bp-0x830]
    unsigned long long v2;  // [bp-0x828]
    char v3;  // [bp-0x820]
    unsigned int v4;  // [bp-0x5a8]
    unsigned int v5;  // [bp-0x5a4]
    unsigned long v6;  // [bp-0x564]
    unsigned int v7;  // [bp-0x55c]
    char v8;  // [bp-0x558]
    unsigned int v9;  // [bp-0x2e0]
    unsigned int v10;  // [bp-0x2dc]
    char v11;  // [bp-0x2d8]
    unsigned long long v12;  // [bp-0x1c]
    unsigned int v13;  // [bp-0x14]
    unsigned long long v16;  // rdx

    v11.new(uucore::util_name(), v16);
    v3.version(&v11, "(uutils coreutils) 0.1.0tsort-usagetsort-about-src/uu/tsort/src/tsort.rs", 24);
    uucore::mods::locale::get_message(&v0, "tsort-usagetsort-about-src/uu/tsort/src/tsort.rs", 11);
    uucore::format_usage(&v8, v1, v2);
    v11.override_usage(&v3, &v8);
    uucore::mods::locale::get_message(&v8, "tsort-about-src/uu/tsort/src/tsort.rs", 11);
    v3.about(&v11, &v8);
    memcpy(&v11, &v3, 700);
    v12 = 549755814016 | v6;
    v13 = v7;
    v3.new("filesizei128", 4);
    v8.default_value(&v3);
    memcpy(&v3, &v8, 632);
    v4 = v9 | 4;
    v5 = v10;
    v8.value_hint(&v3, 3);
    a0.arg(&v11, &v8);
    ::0x49bd80::core::ptr::drop_in_place<alloc::string::String>(&v0);
    return a0;
}
