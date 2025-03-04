long long uu_du::StatPrinter::print_stat::hc47c0332c6a0985f(struct_1 *a0, unsigned long long a1, unsigned long long a2)
{
    struct struct_0 **v0;  // [bp-0xe0], Other Possible Types: unsigned long
    unsigned long v1;  // [sp-0xd8], Other Possible Types: unsigned long long
    struct struct_0 **v2;  // [bp-0xd0], Other Possible Types: char, unsigned long long
    void* v3;  // [sp-0xc8], Other Possible Types: unsigned long long
    unsigned long v4;  // [sp-0xc0]
    unsigned long long v5;  // [sp-0xb8]
    int v6;  // [bp-0xb0], Other Possible Types: struct struct_0 **
    unsigned long long v7;  // [sp-0xa8]
    void* v8;  // [sp-0xa0]
    struct struct_0 **v9;  // [bp-0x70]
    unsigned long long v10;  // [sp-0x68]
    char v11;  // [bp-0x58]
    char v12;  // [bp-0x40]
    unsigned long long v14;  // rax
    struct struct_0 **v15;  // rdi

    v14 = a0->field_4c;
    if ((char)v14 == 3)
    {
        uu_du::StatPrinter::convert_size::he529e362fc7c1e00(&v0, a0, a2);
        v9 = &v0;
        v10 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        v4 = &g_584660;
        v5 = 2;
        v8 = 0;
        v6 = &v9;
        v7 = 1;
        std::io::stdio::_print::he918bceb0c89db46(&v4);
        v15 = &v0;
    }
    else
    {
        uu_du::get_time_secs::h1feb665887cb0159(&v0, v14 & 4294967295, a1);
        if (v4 != 5)
        {
            *((int128_t *)&v6) = *((int128_t *)&v2);
            v4 = v0;
            v5 = v1;
            return alloc::boxed::Box$LT$T$GT$::new::h19aedf1648b3dc3b(&v4);
        }
        _$LT$chrono..datetime..DateTime$LT$chrono..offset..local..Local$GT$$u20$as$u20$core..convert..From$LT$std..time..SystemTime$GT$$GT$::from::h8f61e1a3c0275b73(&v12, _$LT$std..time..SystemTime$u20$as$u20$core..ops..arith..Add$LT$core..time..Duration$GT$$GT$::add::hf5ff61e43d92dd3e(0, 0, v5, 0), a2);
        *((int128_t *)&v0) = *((int128_t *)&a0->field_38);
        v2 = 8;
        v3 = 0;
        chrono::datetime::DateTime$LT$Tz$GT$::format_with_items::h1f9d15a4e22c3131(&v4, &v12, &v0);
        _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::he1f38f7d4828621b(&v11, &v4);
        core::ptr::drop_in_place$LT$chrono..format..formatting..DelayedFormat$LT$chrono..format..strftime..StrftimeItems$GT$$GT$::h095f0f1eaac5abb6(&v4);
        uu_du::StatPrinter::convert_size::he529e362fc7c1e00(&v9, a0, a2);
        v0 = &v9;
        v1 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        v2 = &v11;
        v3 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        v4 = &g_584630;
        v5 = 3;
        v8 = 0;
        v6 = &v0;
        v7 = 2;
        std::io::stdio::_print::he918bceb0c89db46(&v4);
        ::0x4ef6e0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h5d86c71ca1632ad3(&v9);
        v15 = &v11;
    }
    ::0x4ef6e0::core::ptr::drop_in_place$LT$alloc..string..String$GT$::h5d86c71ca1632ad3(v15);
    core::result::Result$LT$T$C$E$GT$::unwrap::h0c3ea2d92ca0fe71(uucore::mods::display::print_verbatim::h5a0f023c7a40e453(a1 + 64));
    v0 = &a0[1].padding_0[0];
    v1 = _$LT$uucore..mods..line_ending..LineEnding$u20$as$u20$core..fmt..Display$GT$::fmt::h6643b2132dca5a5b;
    v4 = &g_40f000;
    v5 = 1;
    v8 = 0;
    v6 = &v0;
    v7 = 1;
    std::io::stdio::_print::he918bceb0c89db46(&v4);
    return 0;
}
