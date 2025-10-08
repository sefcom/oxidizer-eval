long long uu_tty::uu_app(unsigned long long a0)
{
    char v0;  // [bp-0x828]
    unsigned long v1;  // [bp-0x56c]
    unsigned int v2;  // [bp-0x564]
    char v3;  // [bp-0x560]
    unsigned long long v4;  // [bp-0x2a4]
    unsigned int v5;  // [bp-0x29c]
    char v6;  // [bp-0x298]
    unsigned long long v9;  // rdx

    v3.new(uucore::util_name(), v9);
    v0.version(&v3);
    v3.about(&v0);
    uucore::format_usage(&v6, "{} [OPTION]...silentquietprint nothing, only return an exit status", 14);
    v0.override_usage(&v3, &v6);
    memcpy(&v3, &v0, 700);
    v4 = 549755814016 | v1;
    v5 = v2;
    v0.new();
    v6.long(&v0);
    v0.visible_alias(&v6);
    v6.short(&v0);
    v0.help(&v6);
    v6.action(&v0);
    a0.arg(&v3, &v6);
    return a0;
}
