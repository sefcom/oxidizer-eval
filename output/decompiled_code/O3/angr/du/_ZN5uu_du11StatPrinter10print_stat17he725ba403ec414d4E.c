long long uu_du::StatPrinter::print_stat::he725ba403ec414d4(struct_0 *a0, unsigned long long a1, unsigned long long a2, unsigned long a3, unsigned long a4, unsigned long a5)
{
    int v0;  // [bp-0xe0], Other Possible Types: char, unsigned long, unsigned long long
    unsigned long v1;  // [sp-0xd8], Other Possible Types: unsigned long long
    char v2;  // [bp-0xd0], Other Possible Types: unsigned long long
    void* v3;  // [sp-0xc8], Other Possible Types: unsigned long long
    unsigned long v4;  // [sp-0xc0], Other Possible Types: unsigned long long
    unsigned long long v5;  // [sp-0xb8]
    int v6;  // [sp-0xb0], Other Possible Types: unsigned long long
    unsigned long long v7;  // [sp-0xa8]
    void* v8;  // [sp-0xa0]
    unsigned long v9;  // [sp-0x70], Other Possible Types: unsigned long long
    unsigned long long v10;  // [sp-0x68]
    char v11;  // [bp-0x58]
    char v12;  // [bp-0x40]
    unsigned long long v14;  // rax
    unsigned long long v15;  // rsi
    unsigned long long v16;  // rdi
    unsigned long long v18;  // rcx
    unsigned long long v19;  // r8
    unsigned long long v20;  // r9
    unsigned long long v21;  // rdx

    v14 = *((char *)&a0->field_38 + 12);
    if ((char)v14 == 3)
    {
        uu_du::StatPrinter::convert_size::h6461a3964a5e9338(&v0, a0, a2);
        v9 = &v0;
        v10 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        v4 = &g_584100;
        v5 = 2;
        v8 = 0;
        v6 = &v9;
        v7 = 1;
        std::io::stdio::_print::he918bceb0c89db46(&v4, v15, v21);
        v16 = &v0;
    }
    else
    {
        uu_du::get_time_secs::hf4c880f04c683cdc(&v0, v14 & 4294967295, a1);
        if (v4 != 5)
        {
            *((int128_t *)&v6) = *((int128_t *)&v2);
            v4 = v0;
            v5 = v1;
            return alloc::boxed::Box$LT$T$GT$::new::h65b741b2d8b6c1fe(&v4);
        }
        _$LT$chrono..datetime..DateTime$LT$chrono..offset..local..Local$GT$$u20$as$u20$core..convert..From$LT$std..time..SystemTime$GT$$GT$::from::hd0ca294de4047ea7(&v12, _$LT$std..time..SystemTime$u20$as$u20$core..ops..arith..Add$LT$core..time..Duration$GT$$GT$::add::hf5ff61e43d92dd3e(0, 0, v5, 0), v21);
        *((int128_t *)&v0) = *((int128_t *)&(&a0->padding_0)[1]);
        v2 = 8;
        v3 = 0;
        chrono::datetime::DateTime$LT$Tz$GT$::format_with_items::h1e789703b26d5049(&v4, &v12, &v0);
        _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h274b0f095507ad73(&v11, &v4, v21, v18, v19, v20);
        core::ptr::drop_in_place$LT$chrono..format..formatting..DelayedFormat$LT$chrono..format..strftime..StrftimeItems$GT$$GT$::h8abf7cbb61a9b721(&v4);
        uu_du::StatPrinter::convert_size::h6461a3964a5e9338(&v9, a0, a2);
        v0 = &v9;
        v1 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        v2 = &v11;
        v3 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        v4 = &g_5840d0;
        v5 = 3;
        v8 = 0;
        v6 = &v0;
        v7 = 2;
        std::io::stdio::_print::he918bceb0c89db46(&v4, v15, v21);
        ::0x4ef310::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hda92597faca30260(&v9);
        v16 = &v11;
    }
    ::0x4ef310::core::ptr::drop_in_place$LT$alloc..string..String$GT$::hda92597faca30260(v16);
    core::result::Result$LT$T$C$E$GT$::unwrap::hba1399fb7dc2d9e2(uucore::mods::display::print_verbatim::hb36a152e0f9603fd(a1 + 64, v15, v21));
    v0 = (char *)&a0->field_38 + 13;
    v1 = _$LT$uucore..mods..line_ending..LineEnding$u20$as$u20$core..fmt..Display$GT$::fmt::h1cda345fbd5bfac0;
    v4 = &g_40ee80;
    v5 = 1;
    v8 = 0;
    v6 = &v0;
    v7 = 1;
    std::io::stdio::_print::he918bceb0c89db46(&v4, v15, v21);
    return 0;
}
