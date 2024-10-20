long long uu_test::parser::Parser::expr::h5e5770957878cc20(struct_2 *a0, struct_1 *a1)
{
    int v0;  // [sp-0x78], Other Possible Types: unsigned long long (64 bits)[5]
    char v1;  // [bp-0x68]
    unsigned long long v2[3];  // [sp-0x48], Other Possible Types: unsigned long long
    void* v3;  // [sp-0x40]
    unsigned long long v4;  // [sp-0x38]
    unsigned long long v6;  // rcx
    struct_0 *v7;  // rdx
    unsigned long v9;  // r15
    unsigned long long v10;  // r13
    unsigned long long v11;  // r15
    unsigned long long *v12;  // rax
    unsigned long long v13;  // rax

    v6 = a1->field_18;
    if (v6 == 9223372036854775809)
    {
        v7 = a1->field_38;
        v6 = 0x8000000000000000;
        if (v7 != a1->field_48)
        {
            a1->field_38 = (char *)&v7->field_8 + 8;
            v6 = v7->field_0;
            *((int128_t *)&v0) = *((int128_t *)&(&v7->field_0)[1]);
        }
        a1->field_18 = v6;
        *((void*)&a1->field_20) = v0;
    }
    if (v6 == 0x8000000000000000)
    {
        v2 = 0x8000000000000000;
        goto LABEL_482b06;
    }
    v9 = *((long long *)&a1->padding_28[0]);
    if (!v9)
    {
        v10 = 1;
        goto LABEL_482ae8;
    }
    else
    {
        if (v9 < 0)
            alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
        v10 = __rust_alloc(v9, 1);
        if (v10)
        {
LABEL_482ae8:
            memcpy(v3, a1->field_20, v9);
            v2 = v9;
            v3 = v10;
            v4 = v9;
LABEL_482b06:
            uu_test::parser::Symbol::new::h6625985994e45cab(v0, v2);
            v11 = v0[0];
            if (v11 - 2 <= 3)
            {
                v12 = *((long long *)&(&g_4102c0)[16 + 8 * v11]);
                if (*((long long *)(v0 + (char *)v12)))
                    __rust_dealloc(*((long long *)(v0 + (char *)v12)));
            }
            if ((unsigned int)v11 == 2 || (v13 = uu_test::parser::Parser::term::h6d50acb9adbf5b34(v0, a1), (int)v0[0] == 7))
            {
                v13 = uu_test::parser::Parser::maybe_boolop::heb78df6e4061fabf(v0, a1);
                if ((int)v0[0] == 7)
                {
                    a0->field_0 = 7;
                    return v13;
                }
            }
            a0->field_10 = *((int128_t *)&v1);
            *((void*)&a0->field_0) = v0;
            return v13;
        }
    }
}
