long long uu_dd::uu_app(unsigned long long a0)
{
    char v0;  // [bp-0x838]
    unsigned long long v1;  // [bp-0x830]
    unsigned long long v2;  // [bp-0x828]
    char v3;  // [bp-0x820]
    unsigned long long v4;  // [bp-0x564]
    unsigned int v5;  // [bp-0x55c]
    char v6;  // [bp-0x558]
    unsigned long v7;  // [bp-0x29c]
    unsigned int v8;  // [bp-0x294]
    char v9;  // [bp-0x290]
    unsigned long long v12;  // rdx

    v6.new(uucore::util_name(), v12);
    v3.version(&v6, "(uutils coreutils) 0.1.0dd-after-help", 24);
    uucore::mods::locale::get_message(&v9, "dd-about", 8);
    v6.about(&v3, &v9);
    uucore::mods::locale::get_message(&v0, "dd-usage", 8);
    uucore::format_usage(&v9, v1, v2);
    v3.override_usage(&v6, &v9);
    uucore::mods::locale::get_message(&v9, "dd-after-help", 13);
    v6.after_help(&v3, &v9);
    memcpy(&v3, &v6, 700);
    v4 = 549755814016 | v7;
    v5 = v8;
    v6.new("operandsESTRPIPE", 8);
    v9.num_args(&v6);
    a0.arg(&v3, &v9);
    ::0x4cbd30::core::ptr::drop_in_place<alloc::string::String>(&v0);
    return a0;
}
