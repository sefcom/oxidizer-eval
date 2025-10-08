long long uu_kill::print_signals()
{
    unsigned long long v0;  // [bp-0x290]
    unsigned long long v1;  // [bp-0x288]
    char *v2;  // [bp-0x280]
    unsigned long long v3;  // [bp-0x278]
    unsigned long long v4;  // [bp-0x270]
    unsigned long long v5;  // [bp-0x268]
    char *v6;  // [bp-0x260]
    unsigned long long v7;  // [bp-0x258]
    void* v8;  // [bp-0x250]
    void* v9;  // [bp-0x240]
    unsigned long long v10;  // [bp-0x238]
    char v11;  // [bp-0x230]
    unsigned long long v13;  // rax
    unsigned long long v14;  // rdx

    memcpy(&v11, &_ZN6uucore8features7signals11ALL_SIGNALS17hb6c41a286543a4a8E, 0x200);
    v9 = 0;
    v10 = 32;
    v13 = v9.next();
    if (!v13)
        return v13;
    do
    {
        v0 = v13;
        v1 = v14;
        v2 = &v0;
        v3 = <&T as core::fmt::Display>::fmt;
        v4 = &g_4e7650;
        v5 = 2;
        v8 = 0;
        v6 = &v2;
        v7 = 1;
        std::io::stdio::_print(&v4);
        v13 = v9.next();
    } while (v13);
    return v13;
}
