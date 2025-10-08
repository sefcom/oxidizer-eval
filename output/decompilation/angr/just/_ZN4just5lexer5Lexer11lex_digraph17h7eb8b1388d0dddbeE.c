long long just::lexer::Lexer::lex_digraph(void* a0, void* a1, unsigned int a2, unsigned int a3, char a4)
{
    char v0;  // [bp-0x88], Other Possible Types: unsigned long long
    char v1;  // [bp-0x87]
    unsigned long long v2;  // [sp-0x80]
    unsigned int *v3;  // [sp-0x78]
    char v4;  // [bp-0x77]
    unsigned long long v5;  // [sp-0x70]
    char v6;  // [bp-0x68]
    char v7;  // [bp-0x67]
    char v8;  // [bp-0x58]
    char v9;  // [bp-0x57]
    unsigned long v10;  // [bp-0x48]
    char v11;  // [bp-0x40]
    char v12;  // [bp-0x3f]
    char v13;  // [bp-0x3c]
    unsigned long long v15;  // rax
    unsigned long v16;  // rax
    unsigned long long v17;  // rax
    unsigned int *v18;  // rax
    unsigned long long v19;  // rax
    unsigned int *v20;  // rax
    int v21;  // xmm0
    int v22;  // xmm1
    int v23;  // xmm2
    unsigned int v24;  // esi
    int v25;  // xmm0
    int v26;  // xmm1
    int v27;  // xmm2

    v15 = (char)v0.presume(a1, a2);
    if (v11 != 37)
    {
        *((int128_t *)&a0[64]) = *((int128_t *)&v10);
        v25 = *((int128_t *)&v0);
        v26 = *((int128_t *)&v3);
        v27 = *((int128_t *)&v6);
        *((int128_t *)&a0[48]) = *((int128_t *)&v8);
        a0[32] = v27;
        a0[16] = v26;
        *(a0) = v25;
        return v15;
    }
    (char)v0.accepted(a1, a3);
    v16 = v0;
    if (v11 != 37)
    {
        *((unsigned long *)&a0[64]) = v10;
        v21 = *((int128_t *)&v1);
        v22 = *((int128_t *)&v4);
        v23 = *((int128_t *)&v7);
        *((int128_t *)&a0[49]) = *((int128_t *)&v9);
        a0[33] = v23;
        a0[17] = v22;
        a0[1] = v21;
        v24 = *((int *)&v13);
        *((int *)&a0[73]) = *((int *)&v12);
        *((unsigned int *)&a0[76]) = v24;
        *((char *)a0) = v16;
        *((char *)&a0[72]) = v11;
        return v16;
    }
    else if (((char)v16 & 1))
    {
        v17 = a1.token(a4);
        *((char *)&a0[72]) = 37;
        return v17;
    }
    else
    {
        a1.token(35);
        if (a1.at_eof())
        {
            v18 = 4.alloc_impl(4);
            if (!v18)
                alloc::alloc::handle_alloc_error(4, 4); /* do not return */
            *(v18) = a3;
            v2 = 1;
            v3 = v18;
            v5 = 1;
            v19 = 9223372036854775863;
        }
        else
        {
            v15 = (char)v0.advance(a1);
            if (v11 != 37)
            {
                *((int128_t *)&a0[64]) = *((int128_t *)&v10);
                v25 = *((int128_t *)&v0);
                v26 = *((int128_t *)&v3);
                v27 = *((int128_t *)&v6);
                *((int128_t *)&a0[48]) = *((int128_t *)&v8);
                a0[32] = v27;
                a0[16] = v26;
                *(a0) = v25;
                return v15;
            }
            v20 = 4.alloc_impl(4);
            if (!v20)
                alloc::alloc::handle_alloc_error(4, 4); /* do not return */
            *(v20) = a3;
            v2 = 1;
            v3 = v20;
            v5 = 1;
            v19 = 9223372036854775861;
        }
        v0 = v19;
        return a0.error(a1, &(char)v0);
    }
}
