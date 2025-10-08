long long just::lexer::Lexer::lex_choices(void* a0, void* a1, unsigned int a2, unsigned int a3[3], char a4)
{
    char v0;  // [bp-0xa8], Other Possible Types: unsigned long long
    unsigned long long v1;  // [bp-0xa0]
    unsigned long long v2;  // [bp-0x98]
    char v3;  // [bp-0x90], Other Possible Types: unsigned long long
    char v4;  // [bp-0x8f]
    int v5;  // [bp-0x88]
    char v6;  // [bp-0x80]
    char v7;  // [bp-0x7f]
    unsigned long long v8;  // [sp-0x78]
    char v9;  // [bp-0x70]
    char v10;  // [bp-0x6f]
    char v11;  // [bp-0x60]
    char v12;  // [bp-0x5f]
    char v13;  // [bp-0x50], Other Possible Types: unsigned long
    char v14;  // [bp-0x48]
    char v15;  // [bp-0x47]
    char v16;  // [bp-0x44]
    char v18;  // bpl
    unsigned long long v19;  // rax
    unsigned long v20;  // rax
    unsigned long long v21;  // rax
    int v22;  // xmm0
    int v23;  // xmm1
    int v24;  // xmm2
    unsigned long long v25;  // rax
    char v26;  // cl
    unsigned int v27;  // esi
    int v28;  // xmm0
    int v29;  // xmm1
    int v30;  // xmm2

    v18 = a4;
    v19 = v3.presume(a1, a2);
    if (v14 != 37)
    {
        *((int128_t *)&a0[64]) = *((int128_t *)&v13);
        v28 = *((int128_t *)&v3);
        v29 = *((int128_t *)&v6);
        v30 = *((int128_t *)&v9);
        *((int128_t *)&a0[48]) = *((int128_t *)&v11);
        a0[32] = v30;
        a0[16] = v29;
        *(a0) = v28;
        return v19;
    }
    v3.accepted(a1, a3[0]);
    v20 = v14;
    if ((char)v20 != 37)
    {
        v26 = v3;
        *((unsigned long *)&a0[64]) = v13;
        *((int128_t *)&a0[49]) = *((int128_t *)&v12);
        *((int128_t *)&a0[33]) = *((int128_t *)&v10);
        *((int128_t *)&a0[17]) = *((int128_t *)&v7);
        *((int128_t *)&a0[1]) = *((int128_t *)&v4);
        v27 = *((int *)&v16);
        *((int *)&a0[73]) = *((int *)&v15);
        *((unsigned int *)&a0[76]) = v27;
        *((char *)a0) = v26;
        *((char *)&a0[72]) = v20;
        return v20;
    }
    if (!v3)
    {
        v3.accepted(a1, a3[2]);
        v20 = v14;
        if ((char)v20 != 37)
        {
            v26 = v3;
            *((unsigned long *)&a0[64]) = v13;
            *((int128_t *)&a0[49]) = *((int128_t *)&v12);
            *((int128_t *)&a0[33]) = *((int128_t *)&v10);
            *((int128_t *)&a0[17]) = *((int128_t *)&v7);
            *((int128_t *)&a0[1]) = *((int128_t *)&v4);
            v27 = *((int *)&v16);
            *((int *)&a0[73]) = *((int *)&v15);
            *((unsigned int *)&a0[76]) = v27;
            *((char *)a0) = v26;
            *((char *)&a0[72]) = v20;
            return v20;
        }
        else if (v3)
        {
            a3 = &a3[2];
        }
        else if (v18 == 37)
        {
            a1.token(35);
            v0.collect(a3, &a3[1 + 1]);
            if (a1.at_eof())
            {
                v8 = v2;
                *((int128_t *)&v5) = *((int128_t *)&v0);
                v21 = 9223372036854775863;
            }
            else
            {
                v3.advance(a1);
                if (v14 != 37)
                {
                    *((int128_t *)&a0[64]) = *((int128_t *)&v13);
                    v22 = *((int128_t *)&v3);
                    v23 = *((int128_t *)&v6);
                    v24 = *((int128_t *)&v9);
                    *((int128_t *)&a0[48]) = *((int128_t *)&v11);
                    a0[32] = v24;
                    a0[16] = v23;
                    *(a0) = v22;
                    return core::ptr::drop_in_place<alloc::vec::Vec<u32>>(v0, v1);
                }
                v8 = v2;
                *((int128_t *)&v5) = *((int128_t *)&v0);
                v21 = 9223372036854775861;
            }
            v3 = v21;
            return a0.error(a1, &v3);
        }
        else
        {
            v25 = a1.token(v18);
            *((char *)&a0[72]) = 37;
            return v25;
        }
    }
    v25 = a1.token(a3[1]);
    *((char *)&a0[72]) = 37;
    return v25;
}
