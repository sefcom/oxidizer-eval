long long uu_kill::table()
{
    unsigned long long v0;  // [bp-0xa8]
    unsigned long long v1;  // [bp-0xa0]
    unsigned long long v2;  // [bp-0x98]
    unsigned long long v3;  // [bp-0x90]
    void* v4;  // [bp-0x88]
    char *v5;  // [bp-0x80]
    unsigned long long v6;  // [bp-0x78]
    char *v7;  // [bp-0x70]
    unsigned long long v8;  // [bp-0x68]
    unsigned long long v9;  // [bp-0x60]
    unsigned long long v10;  // [bp-0x58]
    char *v11;  // [bp-0x50]
    unsigned long long v12;  // [bp-0x48]
    unsigned long long v13;  // [bp-0x40]
    unsigned long long v14;  // [bp-0x38]
    unsigned long long v16;  // rax
    unsigned long long v17;  // rdx
    unsigned long long v18;  // rdx

    v2 = &_ZN6uucore8features7signals11ALL_SIGNALS17hb6c41a286543a4a8E;
    v3 = &g_4e8200;
    v4 = 0;
    v16 = v2.next();
    if (!v17)
        return v16;
    do
    {
        v0 = v16;
        v1 = v18;
        v5 = &v0;
        v6 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
        v7 = &v1;
        v8 = <&T as core::fmt::Display>::fmt;
        v9 = &g_4e7610;
        v10 = 3;
        v13 = &g_419078;
        v14 = 2;
        v11 = &v5;
        v12 = 2;
        std::io::stdio::_print(&v9);
        v16 = v2.next();
        v18 = v17;
    } while (v18);
    return v16;
}
