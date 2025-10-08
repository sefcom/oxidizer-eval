long long just::recipe::Recipe<D>::run(unsigned long long a0, struct_2 *a1, struct_1 *a2, unsigned long long a3, unsigned long long a4, unsigned long long a5, char a6)
{
    void* v0;  // [bp-0xf8]
    char v1;  // [bp-0xf8]
    unsigned int v2;  // [bp-0xf7]
    unsigned int v3;  // [bp-0xf4]
    unsigned int v4;  // [bp-0xf0], Other Possible Types: unsigned long long
    unsigned int v5;  // [bp-0xec]
    char v6;  // [bp-0xe8]
    unsigned int v7;  // [bp-0xe7]
    unsigned int v8;  // [bp-0xe4]
    unsigned int v9;  // [bp-0xe0]
    unsigned int v10;  // [bp-0xdc]
    char *v11;  // [bp-0xc8]
    int v12;  // [bp-0xc8], Other Possible Types: struct_0 *
    char *v13;  // [bp-0xc8]
    unsigned long long v14;  // [bp-0xc0]
    int v15;  // [bp-0xb8], Other Possible Types: unsigned short
    unsigned long v16;  // [bp-0xb8]
    unsigned long long v17;  // [bp-0xb0]
    char *v18;  // [bp-0xa8], Other Possible Types: int
    unsigned long long v19;  // [bp-0xa0]
    void* v20;  // [bp-0x90]
    unsigned long long v21;  // [bp-0x88]
    char v22;  // [bp-0x80]
    char v23;  // [bp-0x70], Other Possible Types: unsigned long long
    unsigned long long v24;  // [bp-0x68]
    char *v25;  // [bp-0x60]
    char v26;  // [bp-0x5f]
    unsigned long long v27;  // [bp-0x58]
    void* v28;  // [bp-0x50]
    unsigned long long v29;  // [bp-0x40]
    unsigned long long v30;  // [bp-0x38]
    struct_0 *v31;  // r14
    unsigned int v32;  // eax
    unsigned int v33;  // eax
    char v34;  // cl
    unsigned long long v35;  // rax
    unsigned long long v36;  // rdx
    struct_0 *v37;  // xmm0
    struct_0 *v38;  // xmm0

    v31 = a2->field_0;
    v15 = *((short *)((char *)&v31->field_184 + 4));
    *((int128_t *)&v12) = *((int128_t *)&(&v31->padding_0)[1]);
    v23.stderr(&(char)v12);
    v32 = v26;
    if (v32)
    {
        if (v32 == 1)
        {
            v1 = v23;
            v2 = 0;
            v3 = 0;
            v4 = (v1 ^ 1) * 4 + 6;
            v5 = 10;
            if (v1)
                goto LABEL_683b1c;
        }
        else
        {
            v0 = 0;
            v4 = 42949672970;
        }
        v33 = 10;
    }
    else
    {
        v1 = 1;
        v2 = 0;
        v3 = 0;
        v4 = 42949672966;
LABEL_683b1c:
        v33 = 6;
        v34 = 1;
    }
    v6 = v34;
    v7 = 0;
    v8 = 0;
    v9 = v33;
    v10 = 10;
    if (v31->padding_19b[0] >= 2)
    {
        v11 = &v1;
        v14 = <ansi_term::ansi::Prefix as core::fmt::Display>::fmt;
        v16 = &a1->padding_0[144];
        v17 = <just::name::Name as core::fmt::Display>::fmt;
        v18 = &v6;
        v19 = <ansi_term::ansi::Suffix as core::fmt::Display>::fmt;
        v23 = &g_830b70;
        v24 = 4;
        v28 = 0;
        v25 = &v11;
        v27 = 3;
        std::io::stdio::_eprint(&v23);
    }
    if (*((char *)&v31->field_184 + 10))
    {
        v35 = a1.doc();
        if (v35)
        {
            v29 = v35;
            v30 = v36;
            v13 = &v1;
            v14 = <ansi_term::ansi::Prefix as core::fmt::Display>::fmt;
            v16 = &v29;
            v17 = <&T as core::fmt::Display>::fmt;
            v18 = &v6;
            v19 = <ansi_term::ansi::Suffix as core::fmt::Display>::fmt;
            v23 = &g_830bb0;
            v24 = 4;
            v28 = 0;
            v25 = &v13;
            v27 = 3;
            std::io::stdio::_eprint(&v23);
        }
    }
    if (!a1->field_fe)
    {
        v38 = *((int128_t *)&a2->field_0);
        *((uint128_t *)&v15) = a2->field_10;
        v12 = v38;
        v20 = 0;
        *((uint128_t *)&v18) = 0;
        v21 = a3;
        v22 = a6;
        return a0.run_linewise(a1, a2, a3, a4, a5, &(char)v12);
    }
    v37 = *((int128_t *)&a2->field_0);
    *((uint128_t *)&v15) = a2->field_10;
    v12 = v37;
    v20 = 0;
    *((uint128_t *)&v18) = 0;
    v21 = a3;
    v22 = a6;
    return a0.run_script(a1, a2, a3, a4, a5, &(char)v12);
}
