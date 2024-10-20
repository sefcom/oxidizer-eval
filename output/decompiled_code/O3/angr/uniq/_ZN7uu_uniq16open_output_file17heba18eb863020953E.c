long long uu_uniq::open_output_file::heba18eb863020953(unsigned long long a0[3], char *a1, unsigned long long a2)
{
    unsigned long long v0;  // [sp-0x50]
    unsigned int v1;  // [bp-0x48], Other Possible Types: unsigned long
    char v2;  // [sp-0x47]
    char v3;  // [sp-0x45]
    char v4;  // [bp-0x44], Other Possible Types: unsigned short
    void* v5;  // [sp-0x40]
    char v6;  // [sp-0x38]
    unsigned int v7;  // [sp-0x34]
    unsigned long v8;  // [bp-0x30], Other Possible Types: unsigned long long
    char v9;  // [bp-0x2c]
    char v10;  // [bp-0x28]
    unsigned long long v12;  // rsi
    unsigned long long v13;  // rdx
    unsigned long long v14;  // rax
    struct_0 *v15;  // rax
    unsigned int v16;  // ebp
    unsigned long long v17;  // rax
    unsigned long long v19;  // rcx
    int v20;  // xmm0

    if (!a1 || a2 == 1 && *(a1) == 45)
    {
        v8 = std::io::stdio::stdout::h077da66234850927();
        v14 = std::io::stdio::Stderr::lock::h890f7962a170fc90(&v8, v12, v13);
        v0 = v14;
        v15 = __rust_alloc(8, 8);
        if (!v15)
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
        v15->field_0 = v14;
        v19 = &g_4f2e90;
    }
    else
    {
        v0 = 0x1b600000000;
        v1 = 0;
        v4 = 0;
        v2 = 1;
        v4 = 1;
        v3 = 1;
        std::fs::OpenOptions::_open::h7e99c13f64b1d4fc(&v8, &v0, a1, a2);
        if ((int)v8)
        {
            v15 = _$LT$std..io..error..Error$u20$as$u20$uucore..mods..error..FromIo$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$$GT$::map_err_context::h262aa7a64b657955(*((long long *)&v10), a1, a2);
            a0[1] = v15;
            a0[2] = &anon.91813ef2801f4d1d4cad4af8ef82e3d6.9.llvm.14928124353916811356;
            a0[0] = 1;
            return a0;
        }
        v16 = *((int *)&v9);
        v17 = __rust_alloc(0x2000, 1);
        if (!v17)
            alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
        v0 = 0x2000;
        v1 = v17;
        v5 = 0;
        v6 = 0;
        v7 = v16;
        v15 = __rust_alloc(32, 8);
        if (!v15)
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
        v20 = *((int128_t *)&v0);
        v15->field_10 = *((int128_t *)&v5);
        *((void*)&v15->field_0) = v20;
        v19 = &g_4f2e40;
    }
    a0[1] = v15;
    a0[2] = v19;
    a0[0] = 0;
    return a0;
}
