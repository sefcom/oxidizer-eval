long long uu_join::State::new::hb469f5a65d31a5d7(struct_0 *a0, char a1, char *a2, unsigned long long a3, unsigned long long a4, unsigned long a5)
{
    unsigned long long v0;  // [sp-0x88]
    unsigned long v1;  // [sp-0x80], Other Possible Types: unsigned long long
    unsigned int v2;  // [bp-0x78], Other Possible Types: unsigned long long, char
    unsigned short v3;  // [sp-0x74]
    int v4;  // [sp-0x70]
    void* v5;  // [sp-0x60]
    unsigned int v6;  // [sp-0x58]
    char v7;  // [bp-0x50]
    char v8;  // [bp-0x48]
    char v9;  // [bp-0x40]
    unsigned long v10;  // [bp+0x8]
    char v11;  // [bp+0x10]
    unsigned long long v12;  // rax
    char v13;  // dl
    struct_1 *v14;  // rax
    unsigned long long v15;  // rax
    unsigned long long v16;  // rcx
    unsigned long long v17;  // rcx
    unsigned int v18;  // r13d
    unsigned long long v19;  // rax
    int v20;  // xmm0
    char v21;  // dl
    char v22;  // sil

    if (a3 != 1 || *(a2) != 45)
    {
        v1 = 0x1b600000000;
        v2 = 0;
        v3 = 0;
        v2 = 1;
        std::fs::OpenOptions::_open::h7e99c13f64b1d4fc(&v9, &v1, a2, a3);
        _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h45dbb5829ed2ddeb(&v7, &v9, a2, a3);
        v15 = *((long long *)&v7);
        if (v15)
        {
            v17 = *((long long *)&v8);
            a0->field_8 = v15;
            a0->field_10 = v17;
            a0->field_0 = 0x8000000000000000;
            return a0;
        }
        v0 = a5;
        v18 = *((int *)&v8);
        v19 = __rust_alloc(0x2000, 1);
        if (!v19)
            alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
        v1 = v19;
        v2 = 0x2000;
        *((int128_t *)&v4) = 0;
        v5 = 0;
        v6 = v18;
        v14 = __rust_alloc(48, 8);
        if (!v14)
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
        v20 = *((int128_t *)&v1);
        v14->field_20 = *((int128_t *)&v5);
        *((void*)&v14->field_10) = v4;
        *((void*)&v14->field_0) = v20;
        v16 = &g_4fdc20;
    }
    else
    {
        v0 = a5;
        v12 = std::io::stdio::Stdin::lock::h161a36d857331d7f(a4);
        v1 = v12;
        v2 = v13 & 1;
        v14 = __rust_alloc(16, 8);
        if (!v14)
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
        v14->field_0 = v12;
        v14->padding_8[0] = v13 & 1;
        v16 = &g_4fdca8;
    }
    v21 = v11;
    v22 = v10;
    a0->field_0 = 0;
    a0->field_8 = 8;
    a0->field_10 = 0;
    a0->field_18 = a2;
    a0->field_20 = a3;
    a0->field_28 = v14;
    a0->field_30 = v16;
    a0->field_38 = v22;
    a0->field_40 = v0;
    a0->field_48 = 1;
    a0->field_50 = 0;
    a0->field_58 = a1;
    a0->field_59 = v21;
    a0->field_5a = 0;
    return a0;
}
