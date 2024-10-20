long long uu_shuf::read_input_file::hf54e1e8c3217fb30(unsigned long long a0[3], char *a1, unsigned long long a2)
{
    void* v0;  // [sp-0xa0], Other Possible Types: unsigned long long
    char v1;  // [bp-0x98], Other Possible Types: unsigned int, unsigned long long
    unsigned short v2;  // [sp-0x94]
    void* v3;  // [sp-0x90]
    unsigned long v4;  // [sp-0x88], Other Possible Types: unsigned long long
    unsigned long long v5;  // [sp-0x80]
    int v6;  // [sp-0x78]
    void* v7;  // [sp-0x68]
    unsigned int *v8;  // [sp-0x60]
    struct_1 *v9;  // [sp-0x58]
    char v10;  // [bp-0x50]
    char v11;  // [bp-0x48]
    char v12;  // [bp-0x40]
    char v13;  // [bp-0x38]
    unsigned int *v16;  // rax
    unsigned long long v17;  // rax
    struct_1 *v18;  // r13
    unsigned long long v19;  // rcx
    unsigned long long v21;  // rax
    unsigned long long v22;  // rdx
    unsigned long long v23;  // rax
    unsigned long long v24;  // rcx
    unsigned int *v25;  // r14
    struct_1 *v26;  // r15
    struct struct_0 **v27;  // rax
    struct struct_0 **v28;  // rax

    if (a2 != 1 || *(a1) != 45)
    {
        v0 = 0x1b600000000;
        v1 = 0;
        v2 = 0;
        v1 = 1;
        std::fs::OpenOptions::_open::h7e99c13f64b1d4fc(&v12, &v0, a1, a2);
        _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::hc7751ae100002d1a(&v10, &v12, a1, a2);
        v17 = *((long long *)&v10);
        if (v17)
        {
            v19 = *((long long *)&v11);
            a0[1] = v17;
            a0[2] = v19;
            a0[0] = 0x8000000000000000;
            return a0;
        }
        v16 = __rust_alloc(4, 4);
        if (!v16)
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
        *(v16) = *((int *)&v11);
        v18 = &g_4f23c0.field_0;
    }
    else
    {
        v16 = __rust_alloc(8, 8);
        if (!v16)
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
        *((long long *)&v16) = std::io::stdio::stdin::h7215cc131abb55d8();
        v18 = &g_4f2418.field_0;
    }
    v21 = __rust_alloc(0x2000, 1);
    if (!v21)
        alloc::raw_vec::handle_error::h2372476369f9b8ac(); /* do not return */
    v4 = v21;
    v5 = 0x2000;
    *((int128_t *)&v6) = 0;
    v7 = 0;
    v8 = v16;
    v9 = v18;
    v0 = 0;
    v1 = 1;
    v3 = 0;
    _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::hf64e8b35f3dc390a(&v12, _$LT$std..io..buffered..bufreader..BufReader$LT$R$GT$$u20$as$u20$std..io..Read$GT$::read_to_end::h8d0ff388c5e23865(&v4, &v0), v22, a1, a2);
    v23 = *((long long *)&v12);
    if (!v23)
    {
        a0[2] = v3;
        *((int128_t *)&a0[0]) = *((int128_t *)&v0);
        if (v5)
            __rust_dealloc(v4);
        v25 = v8;
        v26 = v9;
        v27 = v26->field_0;
        if (v27)
            v27(v25);
    }
    else
    {
        v24 = *((long long *)&v13);
        a0[1] = v23;
        a0[2] = v24;
        a0[0] = 0x8000000000000000;
        if (v0)
            __rust_dealloc(v1);
        if (v5)
            __rust_dealloc(v4);
        v25 = v8;
        v26 = v9;
        v28 = v26->field_0;
        if (v28)
            v28(v25);
    }
    if (!v26->field_8)
        return a0;
    __rust_dealloc(v25);
}
