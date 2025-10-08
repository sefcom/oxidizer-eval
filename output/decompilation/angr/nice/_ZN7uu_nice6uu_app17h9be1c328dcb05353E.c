long long uu_nice::uu_app(unsigned long long a0)
{
    char v0;  // [bp-0xaa8]
    unsigned long long v1;  // [bp-0x7ec]
    unsigned int v2;  // [bp-0x7e4]
    char v3;  // [bp-0x7e0]
    unsigned int v4;  // [bp-0x568]
    unsigned int v5;  // [bp-0x564]
    char v6;  // [bp-0x560]
    unsigned long v7;  // [bp-0x2a4]
    unsigned int v8;  // [bp-0x29c]
    char v9;  // [bp-0x298]
    unsigned int v10;  // [bp-0x20]
    unsigned int v11;  // [bp-0x1c]
    unsigned long long v14;  // rdx

    v6.new(uucore::util_name(), v14);
    v0.about(&v6);
    uucore::format_usage(&v3, "{} [OPTIONS] [COMMAND [ARGS]](uutils coreutils) 0.0.30add N to the niceness (default is 10)", 29);
    v6.override_usage(&v0, &v3);
    memcpy(&v0, &v6, 700);
    v1 = 549755814048 | v7;
    v2 = v8;
    v6.version(&v0);
    v0.new("adjustmentCOMMANDsrc/uu/nice/src/nice.rs", 10);
    v3.short(&v0);
    v0.long(&v3);
    v3.help(&v0);
    v0.action(&v3, 0);
    v3.overrides_with(&v0);
    memcpy(&v9, &v3, 632);
    v10 = v4 | 32;
    v11 = v5;
    v0.arg(&v6, &v9);
    v6.new("COMMANDsrc/uu/nice/src/nice.rs", 7);
    v3.action(&v6, 1);
    v6.value_hint(&v3);
    a0.arg(&v0, &v6);
    return a0;
}
