long long uu_numfmt::handle_buffer::h6a673e27a6160865(unsigned long a0, struct_0 *a1, unsigned long long a2)
{
    unsigned long v0;  // [sp-0xc0], Other Possible Types: unsigned long long
    unsigned long long v1;  // [sp-0xb8]
    unsigned long v2;  // [sp-0xb0], Other Possible Types: unsigned long long
    unsigned long long v3;  // [sp-0xa8]
    unsigned long long v4;  // [sp-0xa0]
    void* v5;  // [sp-0x98], Other Possible Types: unsigned long long
    int v6;  // [sp-0x90], Other Possible Types: unsigned long long
    unsigned long long v7;  // [sp-0x88]
    unsigned long long v8;  // [sp-0x80]
    void* v9;  // [sp-0x78]
    unsigned long v10;  // [sp-0x68], Other Possible Types: unsigned long long
    unsigned long v11;  // [sp-0x60], Other Possible Types: unsigned long long
    void* v12;  // [sp-0x58]
    char v13;  // [bp-0x50]
    char v14;  // [bp-0x48]
    char v15;  // [bp-0x40]
    unsigned long long v17;  // rax
    unsigned long long v18;  // r12
    unsigned long long v19;  // rdx
    unsigned long long v20;  // rdi
    void* v21;  // rbp
    unsigned long long v22;  // rdx

    v10 = a0;
    v11 = &v10;
    v12 = 0;
    _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hdf7e87358013fdc0(&v13, &v11, a2);
    v17 = *((long long *)&v14);
    if (v17 == 9223372036854775809)
        return 0;
    v18 = a1->field_c0;
    do
    {
        v20 = *((long long *)&v15);
        if (v17 == 0x8000000000000000)
        {
            v0 = v20;
            _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h7f90be6e735fc179(&v2, &v0);
            v8 = v4;
            *((int128_t *)&v6) = *((int128_t *)&v2);
            v5 = 0;
            v21 = alloc::boxed::Box$LT$T$GT$::new::h73c5bd4602d86c04(&v5);
            ::0x4704f0::core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h6625874007d93a00(&v0);
            return v21;
        }
        if (*((long long *)&v13) < v18)
        {
            v2 = v17;
            v3 = v20;
            v4 = v7;
            v0 = &v2;
            v1 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            v5 = &g_533428;
            v6 = 2;
            v9 = 0;
            v7 = &v0;
            v8 = 1;
            std::io::stdio::_print::he918bceb0c89db46(&v5, v4, v19);
            ::0x4704e0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb2b1a3d1959de05c(&v2);
            v4 = v4;
        }
        else
        {
            v5 = v17;
            v6 = v20;
            v7 = v4;
            v21 = uu_numfmt::format_and_handle_validation::h40c8759e0500c3c3(v20);
            ::0x4704e0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb2b1a3d1959de05c(&v5);
            v4 = v4;
            if (v21)
                return v21;
        }
        v4 = v4;
        _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hdf7e87358013fdc0(&v13, &v11, v22);
        v17 = *((long long *)&v14);
    } while (v17 != 9223372036854775809);
}
