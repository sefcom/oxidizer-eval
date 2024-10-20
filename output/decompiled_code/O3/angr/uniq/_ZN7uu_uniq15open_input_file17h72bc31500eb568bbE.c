long long uu_uniq::open_input_file::h72bc31500eb568bb(unsigned long long a0[3], char *a1, unsigned long long a2)
{
    unsigned long v0;  // [bp-0x60], Other Possible Types: unsigned long long
    char v1;  // [bp-0x5c]
    char v2;  // [bp-0x58]
    unsigned long v3;  // [sp-0x50], Other Possible Types: unsigned long long
    unsigned int v4;  // [bp-0x48], Other Possible Types: unsigned long long, char
    unsigned short v5;  // [sp-0x44]
    int v6;  // [sp-0x40]
    void* v7;  // [sp-0x30]
    unsigned int v8;  // [sp-0x28]
    unsigned long long v10;  // rax
    char v11;  // dl
    struct_0 *v12;  // rax
    unsigned int v13;  // ebp
    unsigned long long v14;  // rax
    unsigned long long v16;  // rcx
    int v17;  // xmm0

    if (!a1 || a2 == 1 && *(a1) == 45)
    {
        v0 = std::io::stdio::stdin::h7215cc131abb55d8();
        v10 = std::io::stdio::Stdin::lock::h161a36d857331d7f(&v0);
        v3 = v10;
        v4 = v11 & 1;
        v12 = __rust_alloc(16, 8);
        if (!v12)
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
        v12->field_0 = v10;
        v12->padding_8[0] = v11 & 1;
        v16 = &g_4f2db8;
    }
    else
    {
        v3 = 0x1b600000000;
        v4 = 0;
        v5 = 0;
        v4 = 1;
        std::fs::OpenOptions::_open::h7e99c13f64b1d4fc(&v0, &v3, a1, a2);
        if ((int)v0)
        {
            v12 = _$LT$std..io..error..Error$u20$as$u20$uucore..mods..error..FromIo$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$$GT$::map_err_context::h85d56159adfcf10b(*((long long *)&v2), a1, a2);
            a0[1] = v12;
            a0[2] = &anon.91813ef2801f4d1d4cad4af8ef82e3d6.9.llvm.14928124353916811356;
            a0[0] = 1;
            return a0;
        }
        v13 = *((int *)&v1);
        v14 = __rust_alloc(0x2000, 1);
        if (!v14)
            alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
        v3 = v14;
        v4 = 0x2000;
        *((int128_t *)&v6) = 0;
        v7 = 0;
        v8 = v13;
        v12 = __rust_alloc(48, 8);
        if (!v12)
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
        v17 = *((int128_t *)&v3);
        v12->field_20 = *((int128_t *)&v7);
        *((void*)&v12->field_10) = v6;
        *((void*)&v12->field_0) = v17;
        v16 = &g_4f2d30;
    }
    a0[1] = v12;
    a0[2] = v16;
    a0[0] = 0;
    return a0;
}
