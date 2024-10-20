long long uu_dd::Input::new_file::h6e4aec957b26c885(struct_0 *a0, unsigned long long a1, unsigned long long a2, struct_1 *a3)
{
    unsigned long v0;  // [bp-0x50], Other Possible Types: unsigned long long, unsigned int
    unsigned int v1;  // [sp-0x4c]
    char v2;  // [bp-0x48], Other Possible Types: unsigned int
    unsigned short v3;  // [sp-0x44]
    char v4;  // [bp-0x40], Other Possible Types: unsigned long long
    char v5;  // [bp-0x3c]
    char v6;  // [bp-0x38]
    char v7;  // [bp-0x30]
    unsigned long long v8;  // [sp-0x28]
    unsigned int v10;  // eax
    unsigned int v11;  // eax
    unsigned int v12;  // eax
    unsigned int v13;  // eax
    unsigned long v15;  // rdx
    uint128_t v16[2];  // rax
    int v17;  // xmm0

    v0 = 0x1b600000000;
    v2 = 0;
    v10 = a3->field_41 * 0x4000;
    v3 = 0;
    if (vvar_221)
        v10 |= 0x10000;
    v11 = (!a3->field_43 ? v10 : v10 + 0x1000);
    if (a3->field_47)
        v11 |= 0x40000;
    if (a3->field_48)
        v12 = v11 | 0x100;
    if (a3->field_49)
        v12 |= 0x20000;
    if (a3->field_46)
        v12 |= 0x800;
    v2 = 1;
    if ((char)vvar_223)
        v13 = v12 | 0x101000;
    if (v0)
        v0 = v13;
    std::fs::OpenOptions::_open::h7e99c13f64b1d4fc(&v4, &v0, a1, a2);
    if (*((int *)&v4))
    {
        *((double *)&a0->field_8) = _$LT$std..io..error..Error$u20$as$u20$uucore..mods..error..FromIo$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$$GT$::map_err_context::ha254c564932a3626(*((long long *)&v6), a1, a2);
        a0->field_10 = &anon.47fcc33835ba2501a8fd1dfb926be52d.4.llvm.7315772993864627227;
        a0->field_0 = 1;
        return a0;
    }
    v1 = *((int *)&v5);
    v0 = 0;
    if (a3->field_80 && uu_dd::Source::skip::h85c7505f843bd54c(&v0, a3->field_80))
    {
        v4 = 0x8000000000000000;
        v8 = v15;
        v16 = __rust_alloc(32, 8);
        if (v16)
        {
            v17 = *((int128_t *)&v4);
            v16[1] = *((int128_t *)&v7);
            *((void*)&v16[0]) = v17;
            *((uint128_t *[2])&a0->field_8) = v16;
            a0->field_10 = &anon.9b9ba72dabd212696498d24b7f543cb0.73.llvm.3928628070634382108;
            a0->field_0 = 1;
            close(v1);
            return a0;
        }
        alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
    }
    a0->field_8 = 0;
    *((unsigned int *)&a0->padding_c[0]) = v1;
    a0->field_10 = a3;
    a0->field_0 = 0;
    return a0;
}
