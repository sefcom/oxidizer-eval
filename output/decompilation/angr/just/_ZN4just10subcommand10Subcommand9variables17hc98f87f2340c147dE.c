long long just::subcommand::Subcommand::variables(unsigned long long a0[83])
{
    char v0;  // [bp-0xd8]
    unsigned long long v1;  // [bp-0xd8]
    unsigned long v2;  // [bp-0xd0]
    unsigned long long v3;  // [bp-0xc8]
    unsigned long long v4;  // [bp-0xc0]
    void* v5;  // [bp-0xb8], Other Possible Types: unsigned long long
    unsigned long v6;  // [bp-0xb0], Other Possible Types: unsigned long long
    int v7;  // [bp-0xa8], Other Possible Types: unsigned long
    unsigned long long v8;  // [bp-0xa0]
    void* v9;  // [bp-0x98]
    unsigned long v10;  // [bp-0x90]
    unsigned long v11;  // [bp-0x88]
    unsigned long v12;  // [bp-0x80]
    void* v13;  // [bp-0x78]
    unsigned long long v14;  // [bp-0x70]
    unsigned long long v15;  // [bp-0x68]
    char *v16;  // [bp-0x60], Other Possible Types: unsigned long long
    unsigned long long v17;  // [bp-0x58]
    int v18;  // [bp-0x58]
    void* v19;  // [bp-0x50]
    unsigned long v20;  // [bp-0x40]
    unsigned long long v21;  // [bp-0x38]
    unsigned long long v22;  // [bp-0x30]
    unsigned long long v23;  // [bp-0x28]
    unsigned long long v24;  // [bp-0x20]
    unsigned long long v25;  // [bp-0x18]
    unsigned long long v26;  // [bp-0x10]
    unsigned long v28;  // rax
    unsigned long v29;  // rdx
    unsigned long v30;  // rax
    unsigned long long v32;  // r15
    unsigned long long v33;  // r14
    unsigned long long v34;  // r13
    unsigned long long v35;  // r12
    unsigned long long v36;  // rbx

    v28 = a0[80];
    v29 = v28;
    v30 = v28;
    if (v30)
        v30 = a0[82];
    v26 = v32;
    v25 = v33;
    v24 = v34;
    v23 = v35;
    v22 = v36;
    v4 = v28;
    v5 = 0;
    v6 = v28;
    v7 = a0[81];
    v8 = v4;
    v9 = 0;
    v10 = v28;
    v11 = a0[81];
    v12 = v30;
    v13 = 0;
    v0.next(&v4);
    if (v2)
    {
        do
        {
            if (v1)
            {
                v14 = &g_82f150;
                v15 = 1;
                v16 = 8;
                *((uint128_t *)&v18) = 0;
                std::io::stdio::_print(&v14);
            }
            v20 = v3 + 128;
            v21 = <just::name::Name as core::fmt::Display>::fmt;
            v14 = &g_465db0;
            v15 = 1;
            v19 = 0;
            v16 = &v20;
            v17 = 1;
            std::io::stdio::_print(&v14);
            v0.next(&v4);
        } while (v2);
    }
    v4 = &g_82dbf8;
    v5 = 1;
    v6 = 8;
    *((uint128_t *)&v7) = 0;
    return std::io::stdio::_print(&v4);
}
