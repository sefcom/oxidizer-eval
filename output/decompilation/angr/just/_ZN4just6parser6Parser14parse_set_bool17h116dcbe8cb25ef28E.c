long long just::parser::Parser::parse_set_bool(void* a0, unsigned long long a1)
{
    char v0;  // [bp-0x170], Other Possible Types: unsigned long long, unsigned long
    char v1;  // [bp-0x16f]
    unsigned long long v2;  // [bp-0x168]
    unsigned short *v3;  // [bp-0x160], Other Possible Types: char
    char v4;  // [bp-0x15f]
    unsigned long long v5;  // [bp-0x158]
    char v6;  // [bp-0x150]
    char v7;  // [bp-0x14f]
    int v8;  // [bp-0x140], Other Possible Types: char
    char v9;  // [bp-0x13f]
    int v10;  // [bp-0x130], Other Possible Types: char
    char v11;  // [bp-0x128]
    char v12;  // [bp-0x127]
    unsigned int v13;  // [bp-0x124]
    int v14;  // [bp-0x120]
    unsigned long long v15;  // [bp-0x110]
    int v16;  // [bp-0x108], Other Possible Types: char
    int v17;  // [bp-0xf8], Other Possible Types: char
    int v18;  // [bp-0xe8], Other Possible Types: char
    int v19;  // [bp-0xd8], Other Possible Types: char
    unsigned long long v20;  // [bp-0xc8]
    int v21;  // [bp-0xb8]
    int v22;  // [bp-0xa8]
    int v23;  // [bp-0x98]
    int v24;  // [bp-0x88]
    unsigned long long v25;  // [bp-0x78]
    int v26;  // [bp-0x68]
    int v27;  // [bp-0x58]
    int v28;  // [bp-0x48]
    int v29;  // [bp-0x38]
    unsigned long long v30;  // [bp-0x28]
    unsigned long long v32;  // rax
    unsigned long v33;  // rax
    unsigned long long v34;  // rdx
    unsigned long long v35;  // rax
    unsigned long long v36;  // rax
    unsigned short *v38;  // rax
    unsigned int v39;  // ecx
    int v40;  // xmm0
    int v41;  // xmm1
    int v42;  // xmm2

    (char)v0.accepted(a1, 14);
    v32 = v0;
    if (v11 != 37)
    {
        *((long long *)&a0[64]) = (long long)v10;
        v40 = *((int128_t *)&v1);
        v41 = *((int128_t *)&v4);
        v42 = *((int128_t *)&v7);
        *((int128_t *)&a0[49]) = *((int128_t *)&v9);
        a0[33] = v42;
        a0[17] = v41;
        a0[1] = v40;
        *((int *)&a0[73]) = *((int *)&v12);
        *((unsigned int *)&a0[76]) = v13;
        *((char *)a0) = v32;
        *((char *)&a0[72]) = v11;
        return v32;
    }
    if (((char)v32 & 1))
    {
        (char)v0.expect(a1, 24);
        v33 = v11;
        memcpy(&v16, &(char)v0, 16);
        memcpy(&v17, &v3, 16);
        memcpy(&v18, &v6, 16);
        memcpy(&v19, &v8, 16);
        v20 = *((long long *)&v10);
        if ((char)v33 != 37)
        {
            v39 = *((int *)&v12);
            *((unsigned int *)&a0[76]) = v13;
            *((unsigned int *)&a0[73]) = v39;
            *((unsigned long long *)&a0[64]) = v20;
            a0[48] = v19;
            a0[32] = v18;
            a0[16] = v17;
            *(a0) = v16;
            *((char *)&a0[72]) = v33;
            return v33;
        }
        v21 = v16;
        v22 = v17;
        v23 = v18;
        v24 = v19;
        v25 = v20;
        v26 = v21;
        v27 = v22;
        v28 = v23;
        v29 = v24;
        v30 = v25;
        v0 = v26.lexeme();
        v2 = v34;
        v35 = g_46e88e.eq(&(char)v0);
        v36 = v35;
        if (!(char)v36)
        {
            v0 = v26.lexeme();
            v2 = v34;
            v36 = g_46e311.eq(&(char)v0);
            if (!(char)v36)
            {
                v38 = 1.alloc_impl(2);
                if (!v38)
                    alloc::alloc::handle_alloc_error(1, 2); /* do not return */
                *(v38) = 3096;
                v2 = 2;
                v3 = v38;
                v5 = 2;
                memcpy(&v6, &v21, 16);
                v8 = v22;
                v10 = v23;
                v14 = v24;
                v15 = v25;
                v0 = 9223372036854775841;
                return a0.error(&v26, &(char)v0);
            }
        }
        v32 = v36;
        *((char *)a0) = v35;
    }
    else
    {
        *((char *)a0) = 1;
    }
    *((char *)&a0[72]) = 37;
    return v32;
}
