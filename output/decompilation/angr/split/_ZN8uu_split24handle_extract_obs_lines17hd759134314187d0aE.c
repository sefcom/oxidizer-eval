long long uu_split::handle_extract_obs_lines::hd759134314187d0a(unsigned long long a0[3], unsigned long long a1, unsigned long long a2, struct_0 *a3)
{
    char v0;  // [sp-0xb9]
    void* v1;  // [sp-0xb8]
    unsigned long long v2;  // [sp-0xb0]
    void* v3;  // [sp-0xa8]
    char v4;  // [bp-0xa0]
    char v5;  // [bp-0x98]
    char v6;  // [bp-0x90]
    char v7;  // [bp-0x88]
    char v8;  // [bp-0x78]
    unsigned long v9;  // [sp-0x70], Other Possible Types: unsigned long long
    unsigned long long v10;  // [sp-0x68]
    char *v11;  // [sp-0x60]
    char *v12;  // [sp-0x58]
    char v13;  // [bp-0x50]
    char v14;  // [bp-0x40]
    char v15;  // [bp-0x38]
    char v16;  // [bp-0x28]
    unsigned long long v18;  // rax
    int v19;  // xmm0
    unsigned long long v20;  // rax

    v1 = 0;
    v2 = 4;
    v3 = 0;
    v0 = 0;
    v9 = a1;
    v10 = a1 + a2;
    v11 = &v0;
    v12 = &v1;
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::hcbe47f8a54903219(&v4, &v9);
    v18 = v3;
    if (!v18)
    {
        std::sys::os_str::bytes::Slice::to_owned::h2d9ba69626881113(&v15, a1, a2);
        a0[2] = *((long long *)&v16);
        v19 = *((int128_t *)&v15);
        goto LABEL_4c9e7a;
    }
    else
    {
        _$LT$alloc..string..String$u20$as$u20$core..iter..traits..collect..FromIterator$LT$$RF$char$GT$$GT$::from_iter::hcf3bda9dc0bd03f6(&v7, v2, v2 + v18 * 4);
        ::0x4c9110::core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::h9a0a0458ef52dcc0(a3);
        a3->field_10 = *((long long *)&v8);
        a3->field_0 = *((int128_t *)&v7);
        v20 = *((long long *)&v6);
        if (v20 < 2)
        {
            a0[0] = 0x8000000000000000;
        }
        else
        {
            _$LT$alloc..string..String$u20$as$u20$core..iter..traits..collect..FromIterator$LT$$RF$char$GT$$GT$::from_iter::hcf3bda9dc0bd03f6(&v13, *((long long *)&v5), *((long long *)&v5) + v20 * 4);
            a0[2] = *((long long *)&v14);
LABEL_4c9e7a:
            *((void*)&a0[0]) = v19;
        }
    }
    ::0x4c88e0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$char$GT$$GT$::hd7f863a59b4c66da(&v4);
    return ::0x4c88e0::core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$char$GT$$GT$::hd7f863a59b4c66da(&v1);
}
