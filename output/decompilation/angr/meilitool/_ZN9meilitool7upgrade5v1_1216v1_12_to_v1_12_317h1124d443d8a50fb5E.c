long long meilitool::upgrade::v1_12::v1_12_to_v1_12_3(unsigned long long a0, unsigned long long a1, unsigned int a2, unsigned int a3, unsigned int a4)
{
    unsigned int v0;  // [bp-0x8c]
    unsigned int v1;  // [bp-0x88]
    unsigned int v2;  // [bp-0x84]
    char *v3;  // [sp-0x80], Other Possible Types: unsigned long long
    unsigned long long v4;  // [bp-0x78]
    char *v5;  // [bp-0x70], Other Possible Types: unsigned long long
    int v6;  // [bp-0x68], Other Possible Types: unsigned long long
    char *v7;  // [bp-0x60]
    unsigned long long v8;  // [bp-0x58]
    unsigned long long v9;  // [bp-0x50]
    unsigned long long v10;  // [bp-0x48]
    char *v11;  // [bp-0x40]
    unsigned long long v12;  // [bp-0x38]
    void* v13;  // [bp-0x30]
    unsigned long long v15;  // rax

    v0 = a2;
    v1 = a3;
    v2 = a4;
    v3 = &g_926318;
    v4 = 1;
    v5 = 8;
    *((uint128_t *)&v6) = 0;
    std::io::stdio::_print(&v3);
    if (a3 == 12)
    {
        v15 = meilitool::upgrade::v1_12::rebuild_field_distribution(a0, a1);
        if (v15)
            return v15;
    }
    else
    {
        v3 = &v0;
        v4 = core::fmt::num::imp::<impl core::fmt::Display for u32>::fmt;
        v5 = &v1;
        v6 = core::fmt::num::imp::<impl core::fmt::Display for u32>::fmt;
        v7 = &v2;
        v8 = core::fmt::num::imp::<impl core::fmt::Display for u32>::fmt;
        v9 = &g_926328;
        v10 = 4;
        v13 = 0;
        v11 = &v3;
        v12 = 3;
        std::io::stdio::_print(&v9);
    }
    return 0;
}
