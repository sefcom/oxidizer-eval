
  uint64_t uu_du::StatPrinter::print_stat::h55862af7f00f1efd(void* arg1, void* arg2, uint64_t arg3)

{
    char rax = *(arg1 + 0x4c);
    void* var_f0;
    void* const var_c8;
    int64_t* rdi_2;
    int64_t* var_70;
    
    if (rax != 3)
    {
        uu_du::get_time_secs::h49debf4b9f55f9aa(&var_f0, rax, arg2);
        void* rax_1 = var_f0;
        int64_t var_e8;
        int128_t var_e0;
        
        if (rax_1 != 5)
        {
            int64_t var_b8;
            var_b8 = var_e0;
            var_c8 = rax_1;
            int64_t var_c0_3 = var_e8;
            return alloc::boxed::Box$LT$T$GT$::new::h8a707cc2bcbdfcb0(&var_c8);
        }
        
        void var_40;
        _$LT$chrono..datetime..DateTime$LT$chrono..offset..local..Local$GT$$u20$as$u20$core..convert..From$LT$std..time..SystemTime$GT$$GT$::from::h7e660df65a8958b4(&var_40, 
            _$LT$std..time..SystemTime$u20$as$u20$core..ops..arith..Add$LT$core..time..Duration$GT$$GT$::add::ha7d73b33c4ccffeb(0, 0, var_e8, 0));
        var_f0 = *(arg1 + 0x38);
        var_e0 = 8;
        *var_e0[8] = 0;
        char var_d0_1 = 0;
        chrono::datetime::DateTime$LT$Tz$GT$::format_with_items::ha2a2de2446b63721(&var_c8, 
            &var_40, &var_f0);
        void var_58;
        _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h1aa12dd3d2a22d67(
            &var_58, &var_c8);
        core::ptr::drop_in_place$LT$chrono..format..formatting..DelayedFormat$LT$chrono..format..strftime..StrftimeItems$GT$$GT$::h21a470369439eb5e(&var_c8);
        uu_du::StatPrinter::convert_size::hd9a65cfff278d727(&var_70, arg1, arg3);
        var_f0 = &var_70;
        int64_t (* var_e8_1)(void* arg1, int64_t arg2) =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
        var_e0 = &var_58;
        *var_e0[8] =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
        var_c8 = &data_545e60;
        int64_t var_c0_1 = 3;
        int64_t var_a8_2 = 0;
        void** var_b8_2 = &var_f0;
        int64_t var_b0_2 = 2;
        std::io::stdio::_print::h5e446ff973c02de6(&var_c8);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h4aad5465963d35b9(&var_70);
        rdi_2 = &var_58;
    }
    else
    {
        uu_du::StatPrinter::convert_size::hd9a65cfff278d727(&var_f0, arg1, arg3);
        var_70 = &var_f0;
        int64_t (* var_68_1)(void* arg1, int64_t arg2) =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
        var_c8 = &data_545e90;
        int64_t var_c0 = 2;
        int64_t var_a8_1 = 0;
        int64_t** var_b8_1 = &var_70;
        int64_t var_b0_1 = 1;
        std::io::stdio::_print::h5e446ff973c02de6(&var_c8);
        rdi_2 = &var_f0;
    }
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h4aad5465963d35b9(rdi_2);
    core::result::Result$LT$T$C$E$GT$::unwrap::h15000bb1c5a0492f(
        uucore::mods::display::print_verbatim::h2c436cba54ab5682(arg2 + 0x40));
    var_f0 = arg1 + 0x4d;
    int64_t (* var_e8_2)(char* arg1, int64_t* arg2) = _$LT$uucore..mods..line_ending..LineEnding$u20$as$u20$core..fmt..Display$GT$::fmt::hd41883bc456718a9;
    var_c8 = &data_41d7a0;
    int64_t var_c0_2 = 1;
    int64_t var_a8_3 = 0;
    void** var_b8_3 = &var_f0;
    int64_t var_b0_3 = 1;
    std::io::stdio::_print::h5e446ff973c02de6(&var_c8);
    return 0;
}
