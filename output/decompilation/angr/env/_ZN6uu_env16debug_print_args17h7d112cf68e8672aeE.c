long long uu_env::debug_print_args(unsigned long long a0, unsigned long a1)
{
    unsigned long long v0;  // [bp-0xc0]
    unsigned long long v1;  // [bp-0xb8]
    unsigned long long v2;  // [bp-0xb0]
    char *v3;  // [bp-0xa8], Other Possible Types: unsigned long long
    int v4;  // [bp-0xa0], Other Possible Types: unsigned long long
    void* v5;  // [bp-0x98]
    unsigned long long v6;  // [bp-0x88]
    unsigned long long v7;  // [bp-0x80]
    void* v8;  // [bp-0x78]
    char *v9;  // [bp-0x70]
    unsigned long long v10;  // [bp-0x68]
    char *v11;  // [bp-0x60]
    unsigned long long v12;  // [bp-0x58]
    unsigned long long v13;  // [bp-0x50]
    unsigned long v14;  // [bp-0x48]
    unsigned long v15;  // [bp-0x40]
    char v16;  // [bp-0x38]
    unsigned long long v18;  // rax
    unsigned long long v19[3];  // rdx
    unsigned long long v20[3];  // rdx

    v1 = &g_5a9a78;
    v2 = 1;
    v3 = 8;
    *((uint128_t *)&v4) = 0;
    std::io::stdio::_eprint(&v1);
    v6 = a0;
    v7 = a0 + a1 * 24;
    v8 = 0;
    v18 = v6.next();
    if (!v19)
        return v18;
    do
    {
        v0 = v18;
        v13 = 1;
        v14 = v20[1];
        v15 = v20[2];
        v16 = 1;
        v9 = &v0;
        v10 = core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt;
        v11 = &v13;
        v12 = <os_display::Quoted as core::fmt::Display>::fmt;
        v1 = &g_5a9a88;
        v2 = 3;
        v5 = 0;
        v3 = &v9;
        v4 = 2;
        std::io::stdio::_eprint(&v1);
        v18 = v6.next();
        v20 = v19;
    } while (v20);
    return v18;
}
