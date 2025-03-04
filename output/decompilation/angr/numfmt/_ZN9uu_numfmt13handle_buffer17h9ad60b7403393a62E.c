long long uu_numfmt::handle_buffer::h9ad60b7403393a62(unsigned long a0, struct_1 *a1)
{
    char *v0;  // [sp-0xc0]
    unsigned long long v1;  // [sp-0xb8]
    unsigned long v2;  // [sp-0xb0]
    char *v3;  // [sp-0xa8]
    unsigned long long v4;  // [sp-0xa0]
    void* v5;  // [sp-0x98], Other Possible Types: unsigned long
    int v6;  // [sp-0x90], Other Possible Types: char *, unsigned long long
    struct struct_0 **v7;  // [sp-0x88], Other Possible Types: unsigned long long
    unsigned long long v8;  // [sp-0x80]
    void* v9;  // [sp-0x78]
    unsigned long v10;  // [sp-0x68]
    char *v11;  // [sp-0x60]
    void* v12;  // [sp-0x58]
    char v13;  // [bp-0x50]
    char v14;  // [bp-0x48]
    char v15;  // [bp-0x40]
    char v16;  // [bp-0x38]
    unsigned long long v18;  // rax
    unsigned long long v19;  // r12
    char *v20;  // rdi
    unsigned long long v21;  // rsi
    void* v22;  // rbp

    v10 = a0;
    v11 = &v10;
    v12 = 0;
    _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0cf431a8968d0747(&v13, &v11);
    v18 = *((long long *)&v14);
    if (v18 == 9223372036854775809)
        return 0;
    v19 = a1->field_c0;
    do
    {
        v20 = *((long long *)&v15);
        if (v18 == 0x8000000000000000)
        {
            v0 = v20;
            _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h4cabc1d81ea85127(&v2, &v0);
            v8 = v4;
            *((int128_t *)&v6) = *((int128_t *)&v2);
            v5 = 0;
            v22 = alloc::boxed::Box$LT$T$GT$::new::hb050645051cd6aca(&v5);
            ::0x470030::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hf7266ee2a8c411ce(&v0);
            return v22;
        }
        v21 = *((long long *)&v16);
        if (*((long long *)&v13) < v19)
        {
            v2 = v18;
            v3 = v20;
            v4 = v21;
            v0 = &v2;
            v1 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            v5 = &g_532968;
            v6 = 2;
            v9 = 0;
            v7 = &v0;
            v8 = 1;
            std::io::stdio::_print::he918bceb0c89db46(&v5);
            ::0x470020::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h8713d35d56fb5a34(&v2);
        }
        else
        {
            v5 = v18;
            v6 = v20;
            v7 = v21;
            v22 = uu_numfmt::format_and_handle_validation::he0ebc98d5f24d5da(v20, v21, a1);
            ::0x470020::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h8713d35d56fb5a34(&v5);
            if (v22)
                return v22;
        }
        _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h0cf431a8968d0747(&v13, &v11);
        v18 = *((long long *)&v14);
    } while (v18 != 9223372036854775809);
}
