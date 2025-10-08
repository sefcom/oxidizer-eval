long long just::parser::Parser::parse_interpreter(void* a0, unsigned long long a1)
{
    int v0;  // [bp-0x118], Other Possible Types: char
    int v1;  // [bp-0x110]
    void* v2;  // [bp-0x108]
    char v3;  // [bp-0x107]
    int v4;  // [bp-0x100]
    char v5;  // [bp-0xf8]
    char v6;  // [bp-0xf7]
    int v7;  // [bp-0xf0]
    char v8;  // [bp-0xe8]
    char v9;  // [bp-0xe7]
    char v10;  // [bp-0xe0], Other Possible Types: unsigned long
    char v11;  // [bp-0xd8]
    char v12;  // [bp-0xd7]
    unsigned int v13;  // [bp-0xd4]
    char v14;  // [bp-0xd0]
    char v15;  // [bp-0xcf]
    unsigned int v16;  // [bp-0xcc]
    int v17;  // [bp-0xc8], Other Possible Types: unsigned int
    unsigned int v18;  // [bp-0xc5]
    int v19;  // [bp-0xb8]
    int v20;  // [bp-0xa8]
    int v21;  // [bp-0x98], Other Possible Types: char
    unsigned long long v22;  // [bp-0x88]
    void* v23;  // [bp-0x80]
    unsigned long long v24;  // [bp-0x78]
    void* v25;  // [bp-0x70]
    int v26;  // [bp-0x68], Other Possible Types: char
    int v27;  // [bp-0x58], Other Possible Types: char
    char v28;  // [bp-0x48]
    unsigned long v30;  // rax
    unsigned long v31;  // rax
    char v32;  // al
    char v33;  // al
    int v34;  // xmm0
    int v35;  // xmm0
    unsigned long long v36;  // rax
    unsigned long long v37;  // rcx
    int v38;  // xmm0
    int v39;  // xmm1
    int v40;  // xmm2
    unsigned int v41;  // edi
    int v42;  // xmm0
    int v43;  // xmm1
    int v44;  // xmm2
    int v45;  // xmm0
    unsigned long long v46;  // rcx
    int v47;  // xmm0
    int v48;  // xmm1
    int v49;  // xmm2
    unsigned int v50;  // edi

    v0.expect(a1, 9);
    v30 = v14;
    if ((char)v30 != 37)
    {
        v46 = (long long)v0;
        v47 = (int128_t)v1;
        v17 = *((int *)&v12);
        v18 = v13;
        *((unsigned int *)&a0[76]) = v16;
        *((int *)&a0[73]) = *((int *)&v15);
        v48 = (int128_t)v4;
        v49 = (int128_t)v7;
        v50 = v17;
        *((unsigned int *)&a0[68]) = v18;
        *((unsigned int *)&a0[65]) = v50;
        *((unsigned long long *)a0) = v46;
        a0[8] = v47;
        a0[24] = v48;
        a0[40] = v49;
        *((unsigned long *)&a0[56]) = v10;
        *((char *)&a0[64]) = v11;
        *((char *)&a0[72]) = v30;
        return v30;
    }
    v0.parse_string_literal(a1);
    v31 = v14;
    if ((char)v31 != 37)
    {
        v22 = *((long long *)&v11);
        memcpy(&v21, &v8, 16);
        memcpy(&v20, &v5, 16);
        memcpy(&v19, &v2, 16);
        *((int128_t *)&v17) = (int128_t)v0;
        *((unsigned int *)&a0[76]) = v16;
        *((int *)&a0[73]) = *((int *)&v15);
        *((unsigned long long *)&a0[64]) = v22;
        v45 = (int128_t)v17;
        a0[48] = v21;
        a0[32] = v20;
        a0[16] = v19;
        *(a0) = v45;
        *((char *)&a0[72]) = v31;
        return v31;
    }
    memcpy(&v26, &v0, 16);
    memcpy(&v27, &v2, 16);
    memcpy(&v28, &v5, 16);
    v23 = 0;
    v24 = 8;
    v25 = 0;
    v0.accepted(a1, 15);
    v32 = v0;
    if (v14 != 37)
    {
        *((long long *)&a0[64]) = *((long long *)&v11);
        v42 = *((int128_t *)&(&v0)[1]);
        v43 = *((int128_t *)&v3);
        v44 = *((int128_t *)&v6);
        *((int128_t *)&a0[49]) = *((int128_t *)&v9);
        a0[33] = v44;
        a0[17] = v43;
        a0[1] = v42;
        *((int *)&a0[73]) = *((int *)&v15);
        *((unsigned int *)&a0[76]) = v16;
        *((char *)a0) = v32;
        *((char *)&a0[72]) = v14;
        core::ptr::drop_in_place<alloc::vec::Vec<just::string_literal::StringLiteral>>(&v23);
        return core::ptr::drop_in_place<just::string_literal::StringLiteral>(&v26);
    }
    if ((v0 & 1))
    {
        while (!a1.next_is(10))
        {
            v0.parse_string_literal(a1);
            v33 = v14;
            if (v14 != 37)
            {
                v22 = *((long long *)&v11);
                memcpy(&v21, &v8, 16);
                memcpy(&v20, &v5, 16);
                memcpy(&v19, &v2, 16);
                *((int128_t *)&v17) = *((int128_t *)&v0);
                *((unsigned int *)&a0[76]) = v16;
                *((int *)&a0[73]) = *((int *)&v15);
                *((unsigned long long *)&a0[64]) = v22;
                v34 = (int128_t)v17;
                a0[48] = v21;
                a0[32] = v20;
                a0[16] = v19;
                *(a0) = v34;
                *((char *)&a0[72]) = v33;
                core::ptr::drop_in_place<alloc::vec::Vec<just::string_literal::StringLiteral>>(&v23);
                return core::ptr::drop_in_place<just::string_literal::StringLiteral>(&v26);
            }
            memcpy(&v20, &v5, 16);
            memcpy(&v19, &v2, 16);
            *((int128_t *)&v17) = *((int128_t *)&v0);
            v23.push(&(char)v17, &g_8309b8);
            v0.accepted(a1, 15);
            v32 = v0;
            if (v14 != 37)
            {
                *((long long *)&a0[64]) = *((long long *)&v11);
                v42 = *((int128_t *)&(&v0)[1]);
                v43 = *((int128_t *)&v3);
                v44 = *((int128_t *)&v6);
                *((int128_t *)&a0[49]) = *((int128_t *)&v9);
                a0[33] = v44;
                a0[17] = v43;
                a0[1] = v42;
                *((int *)&a0[73]) = *((int *)&v15);
                *((unsigned int *)&a0[76]) = v16;
                *((char *)a0) = v32;
                *((char *)&a0[72]) = v14;
                core::ptr::drop_in_place<alloc::vec::Vec<just::string_literal::StringLiteral>>(&v23);
                return core::ptr::drop_in_place<just::string_literal::StringLiteral>(&v26);
            }
            if (!(v0 & 1))
                break;
        }
    }
    v0.expect(a1, 10);
    if (v14 != 37)
    {
        v37 = *((long long *)&v0);
        v38 = (int128_t)v1;
        v17 = *((int *)&v12);
        v18 = v13;
        *((unsigned int *)&a0[76]) = v16;
        *((int *)&a0[73]) = *((int *)&v15);
        v39 = (int128_t)v4;
        v40 = (int128_t)v7;
        v41 = v17;
        *((unsigned int *)&a0[68]) = v18;
        *((unsigned int *)&a0[65]) = v41;
        *((unsigned long long *)a0) = v37;
        a0[8] = v38;
        a0[24] = v39;
        a0[40] = v40;
        *((unsigned long *)&a0[56]) = v10;
        *((char *)&a0[64]) = v11;
        *((char *)&a0[72]) = v14;
        core::ptr::drop_in_place<alloc::vec::Vec<just::string_literal::StringLiteral>>(&v23);
        return core::ptr::drop_in_place<just::string_literal::StringLiteral>(&v26);
    }
    v2 = 0;
    v35 = *((int128_t *)&v23);
    v0 = v35;
    memcpy(&v10, &v28, 16);
    v7 = v27;
    v4 = v26;
    *(a0) = v35;
    *((long long *)&a0[64]) = *((long long *)&v11);
    *((int128_t *)&a0[48]) = *((int128_t *)&v8);
    *((int128_t *)&a0[32]) = (int128_t)(&v4)[8];
    *((void* *)&a0[16]) = v2;
    v36 = (long long)v4;
    *((unsigned long long *)&a0[24]) = v36;
    *((char *)&a0[72]) = 37;
    return v36;
}
