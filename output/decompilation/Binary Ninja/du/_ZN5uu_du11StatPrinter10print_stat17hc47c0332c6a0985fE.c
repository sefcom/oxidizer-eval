
  int128_t* uu_du::StatPrinter::print_stat::hc47c0332c6a0985f(void* arg1, void* arg2, int64_t arg3)

{
    char rax = *(arg1 + 0x4c);
    void* var_e0;
    void* const var_c0;
    int64_t* rdi_2;
    int64_t* var_70;
    
    if (rax != 3)
    {
        uu_du::get_time_secs::h1feb665887cb0159(&var_e0, rax, arg2);
        void* rax_1 = var_e0;
        int64_t var_d8;
        int128_t var_d0;
        
        if (rax_1 != 5)
        {
            int64_t var_b0;
            var_b0 = var_d0;
            var_c0 = rax_1;
            int64_t var_b8_3 = var_d8;
            return alloc::boxed::Box$LT$T$GT$::new::h19aedf1648b3dc3b(&var_c0);
        }
        
        void var_40;
        _$LT$chrono..datetime..DateTime$LT$chrono..offset..local..Local$GT$$u20$as$u20$core..convert..From$LT$std..time..SystemTime$GT$$GT$::from::h8f61e1a3c0275b73(&var_40, 
            _$LT$std..time..SystemTime$u20$as$u20$core..ops..arith..Add$LT$core..time..Duration$GT$$GT$::add::hf5ff61e43d92dd3e(0, 0, var_d8, 0));
        var_e0 = *(arg1 + 0x38);
        var_d0 = 8;
        *var_d0[8] = 0;
        chrono::datetime::DateTime$LT$Tz$GT$::format_with_items::h1f9d15a4e22c3131(&var_c0, 
            &var_40, &var_e0);
        void var_58;
        _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::he1f38f7d4828621b(&var_58, 
            &var_c0);
        core::ptr::drop_in_place$LT$chrono..format..formatting..DelayedFormat$LT$chrono..format..strftime..StrftimeItems$GT$$GT$::h095f0f1eaac5abb6(&var_c0);
        uu_du::StatPrinter::convert_size::he529e362fc7c1e00(&var_70, arg1, arg3);
        var_e0 = &var_70;
        int64_t (* var_d8_1)(void* arg1, int64_t arg2) =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        var_d0 = &var_58;
        *var_d0[8] =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        var_c0 = &data_584630;
        int64_t var_b8_1 = 3;
        int64_t var_a0_2 = 0;
        void** var_b0_2 = &var_e0;
        int64_t var_a8_2 = 2;
        std::io::stdio::_print::he918bceb0c89db46(&var_c0);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h5d86c71ca1632ad3(&var_70);
        rdi_2 = &var_58;
    }
    else
    {
        uu_du::StatPrinter::convert_size::he529e362fc7c1e00(&var_e0, arg1, arg3);
        var_70 = &var_e0;
        int64_t (* var_68_1)(void* arg1, int64_t arg2) =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        var_c0 = &data_584660;
        int64_t var_b8 = 2;
        int64_t var_a0_1 = 0;
        int64_t** var_b0_1 = &var_70;
        int64_t var_a8_1 = 1;
        std::io::stdio::_print::he918bceb0c89db46(&var_c0);
        rdi_2 = &var_e0;
    }
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h5d86c71ca1632ad3(rdi_2);
    core::result::Result$LT$T$C$E$GT$::unwrap::h0c3ea2d92ca0fe71(
        uucore::mods::display::print_verbatim::h5a0f023c7a40e453(arg2 + 0x40));
    var_e0 = arg1 + 0x4d;
    int64_t (* var_d8_2)(char* arg1, void* arg2) = _$LT$uucore..mods..line_ending..LineEnding$u20$as$u20$core..fmt..Display$GT$::fmt::h6643b2132dca5a5b;
    var_c0 = &data_40f000;
    int64_t var_b8_2 = 1;
    int64_t var_a0_3 = 0;
    void** var_b0_3 = &var_e0;
    int64_t var_a8_3 = 1;
    std::io::stdio::_print::he918bceb0c89db46(&var_c0);
    return nullptr;
}
