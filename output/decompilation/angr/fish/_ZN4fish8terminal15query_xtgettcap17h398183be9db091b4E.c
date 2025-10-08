long long fish::terminal::query_xtgettcap(unsigned long long a0, unsigned long long a1, unsigned long long a2)
{
    char *v0;  // [bp-0x50]
    unsigned long long v1;  // [bp-0x48]
    unsigned long long v2;  // [bp-0x40]
    unsigned long long v3;  // [bp-0x38]
    unsigned long long v4;  // [bp-0x30]
    unsigned long long v5;  // [bp-0x28]
    char *v6;  // [bp-0x20]
    unsigned long long v7;  // [bp-0x18]
    void* v8;  // [bp-0x10]

    v2 = a1;
    v3 = a2;
    v0 = &v2;
    v1 = <fish::terminal::DisplayAsHex as core::fmt::Display>::fmt;
    v4 = &g_14e2a08;
    v5 = 2;
    v8 = 0;
    v6 = &v0;
    v7 = 1;
    return fish::common::do_write_to_output(a0, &v4);
}
