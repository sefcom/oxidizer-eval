long long uu_paste::InputSource::read_until::hff607f156ec9bc3a(unsigned long long a0[2], struct_2 *a1, unsigned int a2, unsigned long long a3, unsigned long long a4, unsigned long long a5)
{
    char v0;  // [bp-0xa8]
    char v1;  // [bp-0xa1]
    struct_0 *v2;  // [sp-0xa0]
    char v3;  // [sp-0x98]
    unsigned long v4;  // [sp-0x90], Other Possible Types: unsigned long long
    unsigned long long v5;  // [sp-0x88]
    unsigned long v6;  // [sp-0x80], Other Possible Types: unsigned long long
    unsigned long long v7;  // [sp-0x78]
    void* v8;  // [sp-0x70]
    unsigned long v9;  // [sp-0x60], Other Possible Types: unsigned long long
    unsigned long long v10;  // [sp-0x58]
    char v11;  // [bp-0x50]
    char v12;  // [bp-0x40]
    unsigned int v13;  // [sp-0x38]
    unsigned long long v15;  // rax
    struct_1 *v16;  // r12
    unsigned long long v17;  // rax
    unsigned long v18;  // rdx
    uint128_t v19[2];  // rax
    char v20;  // dl
    uint128_t v21[2];  // rax
    int v22;  // xmm0
    int v26;  // xmm0

    if (a1->field_0)
    {
        v15 = std::io::read_until::h1c1aec7f68fe5adf(a1, a2, a3, a3, a4, a5, *((long long *)&v0));
        v4 = 0x8000000000000000;
        v7 = v18;
        v19 = __rust_alloc(32, 8);
        if (!v19)
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
        v22 = *((int128_t *)&v4);
        v19[1] = *((int128_t *)&v6);
        *((void*)&v19[0]) = v22;
        a0[0] = v19;
        v15 = &anon.9b9ba72dabd212696498d24b7f543cb0.73.llvm.3928628070634382108;
LABEL_47fdc4:
        a0[1] = v15;
        return v15;
    }
    v16 = a1->field_8;
    v17 = v16->field_10;
    if (v17 >= 9223372036854775807)
    {
        v9 = &v1;
        v10 = _$LT$core..cell..BorrowError$u20$as$u20$core..fmt..Display$GT$::fmt::h3b6a3a9df4a57cbc;
        v4 = &anon.a15cc2d3895659decb08e547ee58be7a.73.llvm.5555830998822834654;
        v5 = 1;
        v8 = 0;
        v6 = &v9;
        v7 = 1;
        alloc::fmt::format::format_inner::h2dfa5a8c95ac4923(&v11, &v4);
        v13 = 1;
        v21 = __rust_alloc(32, 8);
        if (!v21)
            alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1(); /* do not return */
        v26 = *((int128_t *)&v11);
        v21[1] = *((int128_t *)&v12);
        *((void*)&v21[0]) = v26;
        a0[0] = v21;
        v15 = &g_4dd300;
        goto LABEL_47fdc4;
        goto LABEL_47fdc4;
    }
    v16->field_10 = v17 + 1;
    v2 = std::io::stdio::Stdin::lock::h161a36d857331d7f(v16 + 1);
    v3 = v20 & 1;
    if (!_$LT$std..io..stdio..StdinLock$u20$as$u20$std..io..BufRead$GT$::read_until::h22767f011618eb41(&v2))
        goto LABEL_0x47fdca;
    else
        goto LABEL_0x47fcab;
}
