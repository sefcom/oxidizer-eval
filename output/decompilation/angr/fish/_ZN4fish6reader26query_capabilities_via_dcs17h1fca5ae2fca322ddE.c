long long fish::reader::query_capabilities_via_dcs(unsigned long long a0, unsigned long long a1, struct_0 **a2)
{
    char v0;  // [bp-0x58]
    char v1;  // [bp-0x40]
    unsigned long long v3;  // rax
    unsigned long long v4;  // rax

    a2(&v0);
    v3 = core::ptr::drop_in_place<core::option::Option<fish::env::var::EnvVar>>(&v0);
    if (*((long long *)&v0))
        return v3;
    a2(&v1, a1, "T", 4);
    if (*((long long *)&v1))
    {
        v4 = fish::reader::query_capabilities_via_dcs::{{closure}}(&v1);
        if ((char)v4)
            return v4;
    }
    v0 = 24;
    a0.write_command(&v0);
    fish::reader::send_xtgettcap_query(a0);
    v0 = 25;
    return a0.write_command(&v0);
}
