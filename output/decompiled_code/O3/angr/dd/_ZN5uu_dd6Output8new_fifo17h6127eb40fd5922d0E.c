long long uu_dd::Output::new_fifo::h6127eb40fd5922d0(struct_0 *a0, unsigned long long a1, unsigned long long a2, struct_1 *a3)
{
    unsigned long v0;  // [sp-0x68], Other Possible Types: unsigned long long
    char v1;  // [bp-0x60], Other Possible Types: unsigned int
    unsigned short v2;  // [sp-0x5c]
    char v3;  // [bp-0x58]
    unsigned long long v4;  // [sp-0x50]
    char v5;  // [bp-0x48], Other Possible Types: unsigned int
    char v6;  // [bp-0x44], Other Possible Types: unsigned long long
    char v7;  // [bp-0x40]
    char v8;  // [sp-0x3e]
    char v9;  // [sp-0x3c]
    char v10;  // [sp-0x3b]
    char v11;  // [sp-0x38]
    unsigned int v12;  // [sp-0x34]
    unsigned long v14;  // r13
    uint128_t v15[2];  // rax
    unsigned long v16;  // rdx
    uint128_t v17[2];  // rax
    int v18;  // xmm0
    unsigned int v20;  // eax
    unsigned int v21;  // eax
    int v22;  // xmm0

    v14 = a3->field_88;
    if (v14)
    {
        v0 = 0x1b600000000;
        v1 = 0;
        v2 = 0;
        v1 = 1;
        std::fs::OpenOptions::_open::h7e99c13f64b1d4fc(&v5, &v0, a1, a2);
        if (!v5)
        {
            v12 = *((int *)&v6);
            v11 = 2;
            if (uu_dd::Dest::seek::h4ce26b2e627880d6(&v11, v14))
            {
                v0 = 0x8000000000000000;
                v4 = v16;
                v17 = __rust_alloc(32, 8);
                if (!v17)
                    alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
                v18 = *((int128_t *)&v0);
                v17[1] = *((int128_t *)&v3);
                *((void*)&v17[0]) = v18;
                a0->field_8 = v17;
                a0->field_10 = &anon.9b9ba72dabd212696498d24b7f543cb0.73.llvm.3928628070634382108;
                a0->field_0 = 4;
                if (v11 - 1 <= 1)
                {
                    close(v12);
                    return a0;
                }
                return a0;
            }
            else if (v11 - 1 <= 1)
            {
                close(v12);
            }
        }
        else
        {
            v0 = 0x8000000000000000;
            v4 = *((long long *)&v7);
            v15 = __rust_alloc(32, 8);
            if (!v15)
                alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
LABEL_49a624:
            v22 = *((int128_t *)&v0);
            v15[1] = *((int128_t *)&v3);
            *((void*)&v15[0]) = v22;
            a0->field_8 = v15;
            a0->field_10 = &anon.9b9ba72dabd212696498d24b7f543cb0.73.llvm.3928628070634382108;
            a0->field_0 = 4;
            return a0;
        }
    }
    if ((!a3->field_0 || (unsigned int)a3->field_0 == 1) && !a3->field_8)
    {
        a0->field_0 = 3;
        a0->field_10 = a3;
        return a0;
    }
    v6 = 1099511628214;
    v9 = a3->field_92 ^ 1;
    v10 = a3->field_91;
    v8 = a3->field_96;
    v20 = v8 * 0x400;
    if (a3->field_98)
        v20 |= 0x4000;
    if (a3->field_99)
        v20 |= 0x10000;
    if (a3->field_9a)
        v20 |= 0x1000;
    if (a3->field_9e)
        v20 |= 0x40000;
    if (a3->field_9f)
        v20 |= 0x100;
    if (a3->field_a0)
        v20 |= 0x20000;
    if (a3->field_9d)
        v20 |= 0x800;
    if (a3->field_9b)
        v20 |= 0x101000;
    v5 = v20;
    std::fs::OpenOptions::_open::h7e99c13f64b1d4fc(&v0, &v5, a1, a2);
    if (!(int)v0)
    {
        v21 = *((int *)((char *)&v0 + 4));
        a0->field_0 = 2;
        a0->field_4 = v21;
        a0->field_10 = a3;
        return a0;
    }
    v0 = 0x8000000000000000;
    v4 = *((long long *)&v1);
    v15 = __rust_alloc(32, 8);
    if (!v15)
        alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
    goto LABEL_49a624;
}
