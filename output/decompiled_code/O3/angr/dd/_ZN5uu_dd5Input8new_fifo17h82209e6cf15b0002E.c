long long uu_dd::Input::new_fifo::h82209e6cf15b0002(struct_0 *a0, unsigned long long a1, unsigned long long a2, struct_1 *a3)
{
    unsigned int v0;  // [sp-0x48]
    unsigned int v1;  // [sp-0x44]
    char v2;  // [bp-0x40], Other Possible Types: unsigned long long
    char v3;  // [bp-0x3c]
    char v4;  // [bp-0x38]
    char v5;  // [bp-0x30]
    unsigned long long v6;  // [sp-0x28]
    unsigned int v7;  // [sp-0x20]
    unsigned long long v8;  // [bp-0x1c]
    char v9;  // [sp-0x18]
    unsigned short v10;  // [sp-0x14]
    unsigned int v12;  // eax
    unsigned int v13;  // eax
    unsigned int v14;  // eax
    unsigned int v15;  // esi
    uint128_t v16[2];  // rax
    int v18;  // xmm0
    unsigned long v19;  // rdx
    uint128_t v20[2];  // rax
    int v21;  // xmm0

    v8 = 438;
    v12 = a3->field_41 * 0x4000;
    v10 = 0;
    if ((char)vvar_216)
        v12 |= 0x10000;
    v13 = (!a3->field_43 ? v12 : v12 + 0x1000);
    if (a3->field_47)
        v13 |= 0x40000;
    if (a3->field_48)
        v14 = v13 | 0x100;
    if (a3->field_49)
        v14 |= 0x20000;
    if (a3->field_46)
        v14 |= 0x800;
    v9 = 1;
    if ((char)vvar_218)
        v15 = v14 | 0x101000;
    v7 = v15;
    std::fs::OpenOptions::_open::h7e99c13f64b1d4fc(&v2, &v7, a1, a2);
    if (*((int *)&v2))
    {
        v2 = 0x8000000000000000;
        v6 = *((long long *)&v4);
        v16 = __rust_alloc(32, 8);
        if (v16)
        {
            v18 = *((int128_t *)&v2);
            v16[1] = *((int128_t *)&v5);
            *((void*)&v16[0]) = v18;
            *((uint128_t *[2])&a0->field_8) = v16;
            a0->field_10 = &anon.9b9ba72dabd212696498d24b7f543cb0.73.llvm.3928628070634382108;
            a0->field_0 = 1;
            return a0;
        }
        alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
    }
    else
    {
        v1 = *((int *)&v3);
        v0 = 2;
        if (a3->field_80 && uu_dd::Source::skip::h85c7505f843bd54c(&v0, a3->field_80))
        {
            v2 = 0x8000000000000000;
            v6 = v19;
            v20 = __rust_alloc(32, 8);
            if (v20)
            {
                v21 = *((int128_t *)&v2);
                v20[1] = *((int128_t *)&v5);
                *((void*)&v20[0]) = v21;
                *((uint128_t *[2])&a0->field_8) = v20;
                a0->field_10 = &anon.9b9ba72dabd212696498d24b7f543cb0.73.llvm.3928628070634382108;
                a0->field_0 = 1;
                close(v1);
                return a0;
            }
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
        }
        a0->field_8 = 2;
        *((unsigned int *)&a0->padding_c[0]) = v1;
        a0->field_10 = a3;
        a0->field_0 = 0;
        return a0;
    }
}
