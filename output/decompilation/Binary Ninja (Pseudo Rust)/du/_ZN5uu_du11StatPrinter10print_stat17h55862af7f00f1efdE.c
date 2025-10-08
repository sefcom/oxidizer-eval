
  fn uu_du::StatPrinter::print_stat::h55862af7f00f1efd(arg1: *mut c_void, arg2: *mut c_void, arg3: u64) -> u64

{
    let rax: i8 = *arg1.byte_offset(0x4c);
    let mut var_f0: *mut c_void;
    let mut var_c8: *mut c_void;
    let mut rdi_2: *mut i64;
    let mut var_70: *mut i64;
    
    if rax != 3
    {
        uu_du::get_time_secs::h49debf4b9f55f9aa(&var_f0, rax, arg2);
        let rax_1: *mut c_void = var_f0;
        let var_e8: i64;
        let mut var_e0: i128;
        
        if rax_1 != 5
        {
            let mut var_b8: i64;
            var_b8 = var_e0;
            var_c8 = rax_1;
            let var_c0_3: i64 = var_e8;
            return alloc::boxed::Box$LT$T$GT$::new::h8a707cc2bcbdfcb0(&var_c8);
        }
        
        let mut var_40: ();
        _$LT$chrono..datetime..DateTime$LT$chrono..offset..local..Local$GT$$u20$as$u20$core..convert..From$LT$std..time..SystemTime$GT$$GT$::from::h7e660df65a8958b4(&var_40, 
            _$LT$std..time..SystemTime$u20$as$u20$core..ops..arith..Add$LT$core..time..Duration$GT$$GT$::add::ha7d73b33c4ccffeb(0, 0, var_e8, 0));
        var_f0 = *arg1.byte_offset(0x38);
        var_e0 = 8;
        *var_e0[8] = 0;
        let var_d0_1: i8 = 0;
        chrono::datetime::DateTime$LT$Tz$GT$::format_with_items::ha2a2de2446b63721(&var_c8, 
            &var_40, &var_f0);
        let mut var_58: ();
        _$LT$T$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h1aa12dd3d2a22d67(
            &var_58, &var_c8);
        core::ptr::drop_in_place$LT$chrono..format..formatting..DelayedFormat$LT$chrono..format..strftime..StrftimeItems$GT$$GT$::h21a470369439eb5e(&var_c8);
        uu_du::StatPrinter::convert_size::hd9a65cfff278d727(&var_70, arg1, arg3);
        var_f0 = &var_70;
        let var_e8_1: fn(arg1: *mut c_void, arg2: i64) -> i64 =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
        var_e0 = &var_58;
        *var_e0[8] =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
        var_c8 = &data_545e60;
        let var_c0_1: i64 = 3;
        let var_a8_2: i64 = 0;
        let var_b8_2: *mut *mut c_void = &var_f0;
        let var_b0_2: i64 = 2;
        std::io::stdio::_print::h5e446ff973c02de6(&var_c8);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h4aad5465963d35b9(&var_70);
        rdi_2 = &var_58;
    }
    else
    {
        uu_du::StatPrinter::convert_size::hd9a65cfff278d727(&var_f0, arg1, arg3);
        var_70 = &var_f0;
        let var_68_1: fn(arg1: *mut c_void, arg2: i64) -> i64 =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
        var_c8 = &data_545e90;
        let var_c0: i64 = 2;
        let var_a8_1: i64 = 0;
        let var_b8_1: *mut *mut i64 = &var_70;
        let var_b0_1: i64 = 1;
        std::io::stdio::_print::h5e446ff973c02de6(&var_c8);
        rdi_2 = &var_f0;
    }
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h4aad5465963d35b9(rdi_2);
    core::result::Result$LT$T$C$E$GT$::unwrap::h15000bb1c5a0492f(
        uucore::mods::display::print_verbatim::h2c436cba54ab5682(arg2.byte_offset(0x40)));
    var_f0 = arg1.byte_offset(0x4d);
    let var_e8_2: fn(arg1: *mut i8, arg2: *mut i64) -> i64 = _$LT$uucore..mods..line_ending..LineEnding$u20$as$u20$core..fmt..Display$GT$::fmt::hd41883bc456718a9;
    var_c8 = &data_41d7a0;
    let var_c0_2: i64 = 1;
    let var_a8_3: i64 = 0;
    let var_b8_3: *mut *mut c_void = &var_f0;
    let var_b0_3: i64 = 1;
    std::io::stdio::_print::h5e446ff973c02de6(&var_c8);
    0
}
