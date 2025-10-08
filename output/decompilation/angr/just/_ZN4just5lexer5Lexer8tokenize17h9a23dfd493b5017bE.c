char just::lexer::Lexer::tokenize(void* a0, struct_0 *a1)
{
    void* v0;  // [bp-0x118], Other Possible Types: unsigned long long
    int v1;  // [bp-0x108]
    int v2;  // [bp-0xf8]
    int v3;  // [bp-0xe8]
    char v4;  // [bp-0xd8]
    unsigned long long v5;  // [bp-0xd0]
    unsigned long v6;  // [bp-0xc8]
    unsigned long v7;  // [bp-0xc0]
    int v8;  // [bp-0xb8]
    int v9;  // [bp-0xa8]
    int v10;  // [bp-0x98]
    int v11;  // [bp-0x88]
    unsigned long v12;  // [bp-0x78]
    int v13;  // [bp-0x68]
    int v14;  // [bp-0x58]
    int v15;  // [bp-0x48]
    int v16;  // [bp-0x38]
    unsigned long v17;  // [bp-0x28]
    unsigned int v19;  // ecx
    unsigned long v20;  // rdx
    unsigned long long v21;  // rax
    unsigned long v22;  // rcx
    unsigned long long v23;  // rax
    unsigned long v24;  // rsi
    unsigned long long v25;  // r8
    char *v26;  // rdx
    int v27;  // xmm0

    while (true)
    {
        if (!a1->field_a0)
        {
            v0.lex_line_start(a1);
            if ((char)v5 != 37)
            {
                *((int128_t *)&a0[64]) = *((int128_t *)&v4);
                v27 = *((int128_t *)&v0);
                a0[48] = v3;
                a0[32] = v2;
                a0[16] = v1;
                *(a0) = v27;
                return core::ptr::drop_in_place<just::lexer::Lexer>(a1);
            }
        }
        v19 = a1->field_b8;
        if (v19 == 0x110000)
            break;
        if (a1->field_28)
        {
            v20 = a1->field_20;
            v21 = a1->field_28 * 9;
            v12 = *((long long *)(v20 + v21 * 8 - 8));
            *((int128_t *)&v11) = *((int128_t *)(v20 + v21 * 8 - 24));
            *((int128_t *)&v10) = *((int128_t *)(v20 + v21 * 8 - 40));
            *((int128_t *)&v9) = *((int128_t *)(v20 + v21 * 8 - 56));
            *((int128_t *)&v8) = *((int128_t *)(v20 + v21 * 8 - 72));
            v0.lex_interpolation(a1, &v8, v19);
        }
        else if (*((char *)&a1->field_b8 + 4))
        {
            v0.lex_body(a1);
        }
        else
        {
            v0.lex_normal(a1, v19);
        }
        if ((char)v5 != 37)
        {
            *((int128_t *)&a0[64]) = *((int128_t *)&v4);
            v27 = *((int128_t *)&v0);
            a0[48] = v3;
            a0[32] = v2;
            a0[16] = v1;
            *(a0) = v27;
            return core::ptr::drop_in_place<just::lexer::Lexer>(a1);
        }
    }
    if (a1->field_28)
    {
        v22 = a1->field_20;
        v23 = a1->field_28 * 9;
        v17 = *((long long *)(v22 + v23 * 8 - 8));
        *((int128_t *)&v16) = *((int128_t *)(v22 + v23 * 8 - 24));
        *((int128_t *)&v15) = *((int128_t *)(v22 + v23 * 8 - 40));
        *((int128_t *)&v14) = *((int128_t *)(v22 + v23 * 8 - 56));
        *((int128_t *)&v13) = *((int128_t *)(v22 + v23 * 8 - 72));
        v0.unterminated_interpolation_error(&v13);
        *((int128_t *)&a0[64]) = *((int128_t *)&v4);
        v27 = *((int128_t *)&v0);
        a0[48] = v3;
        a0[32] = v2;
        a0[16] = v1;
        *(a0) = v27;
        return core::ptr::drop_in_place<just::lexer::Lexer>(a1);
    }
    while (a1->field_8.indented(a1->field_10))
    {
        a1.lex_dedent();
    }
    a1.token(19);
    v24 = &a1->padding_b0;
    if (a1->padding_b0 == *((long long *)&a1->padding_90[8]))
    {
        v6 = *((long long *)&a1->padding_60[32]);
        if (a1->padding_b0 == *((long long *)&a1->padding_60[32]))
        {
            v7 = a1->field_10;
            if (a1->field_10 == 1)
            {
                *((long long *)&a0[16]) = *((long long *)((char *)&a1->field_48 + 8));
                *((int128_t *)a0) = *((int128_t *)&(&a1->padding_40)[1]);
                *((char *)&a0[72]) = 37;
                core::ptr::drop_in_place<alloc::vec::Vec<similar::algorithms::utils::UniqueItem<similar::algorithms::utils::OffsetLookup<u32>>>>(a1->field_0, a1->field_8);
                core::ptr::drop_in_place<alloc::vec::Vec<just::name::Name>>(a1->field_18, a1->field_20);
                return core::ptr::drop_in_place<alloc::vec::Vec<similar::algorithms::utils::UniqueItem<similar::algorithms::utils::OffsetLookup<u32>>>>(a1->field_30, a1->field_38);
            }
            v25 = &g_830440;
            v26 = &g_469270;
            v24 = &v7;
        }
        else
        {
            v25 = &g_830428;
            v26 = &v6;
        }
    }
    else
    {
        v26 = &a1->padding_90[8];
        v25 = &g_830410;
    }
    v0 = 0;
    core::panicking::assert_failed(0, v24, v26, &v0, v25); /* do not return */
}
