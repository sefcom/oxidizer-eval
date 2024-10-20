int uu_test::parser::Parser::expect::hd7ae05f526935145()
{
    void* v0;  // [sp-0x98]
    unsigned long long v1;  // [sp-0x90]
    void* v2;  // [sp-0x88]
    unsigned long long v3[5];  // [bp-0x80]
    char v4;  // [bp-0x78]
    char v5;  // [bp-0x70]
    char v6;  // [bp-0x68]
    int v7;  // [sp-0x58], Other Possible Types: void*, unsigned long long (64 bits)[3], unsigned long long
    int v8;  // [bp-0x50]
    void* v9;  // [sp-0x48], Other Possible Types: unsigned long long
    unsigned long long v10;  // [sp-0x38]
    unsigned long long v11;  // [sp-0x30]
    unsigned long long v12;  // [sp-0x28]
    char v13;  // [sp-0x20]
    struct_1 *v15;  // rsi
    unsigned long long v16;  // rcx
    struct_0 *v17;  // rcx
    unsigned long long v18;  // r14
    unsigned long long v19;  // rdi
    unsigned long long v20;  // rsi
    unsigned long long *v21;  // rdi
    unsigned long long v23;  // rdi
    unsigned long long v24;  // rax

    v16 = v15->field_18;
    v15->field_18 = 9223372036854775809;
    if (v7 != 9223372036854775809)
    {
        *((uint128_t *)&v8) = v15->field_20;
        v7 = v16;
    }
    else
    {
        v17 = v15->field_38;
        if (v17 == v15->field_48)
        {
            v7 = 0x8000000000000000;
        }
        else
        {
            v15->field_38 = &v17[1];
            v9 = v17->field_10;
            *((uint128_t *)&v7) = v17->field_0;
        }
    }
    uu_test::parser::Symbol::new::h6625985994e45cab(v3, v7);
    v18 = v3[0];
    if (v18 == 3 && *((long long *)&v6) == 1 && (v19 = *((long long *)&v5), *((char *)*((long long *)&v5)) == 41))
    {
        v20 = *((long long *)&v4);
        *(v21) = 7;
        if (v20)
        {
            __rust_dealloc(v19);
            return;
        }
    }
    else
    {
        v0 = 0;
        v1 = 1;
        v2 = 0;
        v12 = 32;
        v13 = 3;
        v7 = 0;
        v9 = 0;
        v10 = &v0;
        v11 = &g_4e1e70;
        if ((char)_ZN10os_display4unix5write17hdefd8f6d04dd5fe6E.llvm.2548367946977071697(v7, ")", 1, 1))
            core::result::unwrap_failed::h39784290e544308e(); /* do not return */
        v21[3] = v2;
        *((int128_t *)&v21[1]) = *((int128_t *)&v0);
        *(v21) = 1;
        if ((unsigned int)v18 == 3)
        {
            if (!*((long long *)&v4))
                return;
            v23 = *((long long *)&v5);
LABEL_4829a2:
            __rust_dealloc(v23);
        }
        else if (v18 - 2 <= 3 && (v24 = *((long long *)&(&g_4102c0)[16 + 8 * v18]), *((long long *)(v3 + v24))))
        {
            v23 = *((long long *)&(&v4)[v24]);
            goto LABEL_4829a2;
        }
    }
    return;
}
