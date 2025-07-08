
  fn uu_du::StatPrinter::print_stat::hc47c0332c6a0985f(arg1: *mut c_void, arg2: *mut c_void, arg3: i64) -> *mut i128

{
    let rax: i8 = *arg1.byte_offset(0x4c);
    let mut var_e0: *mut c_void;
    let mut var_c0: *mut c_void;
    let mut rdi_2: *mut i64;
    let mut var_70: *mut i64;
    
    if rax != 3
    {
        uu_du::get_time_secs::h1feb665887cb0159(&var_e0, rax, arg2);
        let rax_1: *mut c_void = var_e0;
        let var_d8: i64;
        let mut var_d0: i128;
        
        if rax_1 != 5
        {
            let mut var_b0: i64;
            var_b0 = var_d0;
            var_c0 = rax_1;
            let var_b8_3: i64 = var_d8;
            return alloc::boxed::Box$LT$T$GT$::new::h19aedf1648b3dc3b(&var_c0);
        }
        
        let mut var_40: ();
        _$LT$chrono..datetime..DateTime$LT$chrono..offset..local..Local$GT$$u20$as$u20$core..convert..From$LT$std..time..SystemTime$GT$$GT$::from::h8f61e1a3c0275b73(&var_40, 
            _$LT$std..time..SystemTime$u20$as$u20$core..ops..arith..Add$LT$core..time..Duration$GT$$GT$::add::hf5ff61e43d92dd3e(0, 0, var_d8, 0));
        var_e0 = *arg1.byte_offset(0x38);
        var_d0 = 8;
        *var_d0[8] = 0;
        chrono::datetime::DateTime$LT$Tz$GT$::format_with_items::h1f9d15a4e22c3131(&var_c0, 
            &var_40, &var_e0);
        let mut var_58: ();
        _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::he1f38f7d4828621b(&var_58, 
            &var_c0);
        core::ptr::drop_in_place$LT$chrono..format..formatting..DelayedFormat$LT$chrono..format..strftime..StrftimeItems$GT$$GT$::h095f0f1eaac5abb6(&var_c0);
        uu_du::StatPrinter::convert_size::he529e362fc7c1e00(&var_70, arg1, arg3);
        var_e0 = &var_70;
        let var_d8_1: fn(arg1: *mut c_void, arg2: i64) -> i64 =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        var_d0 = &var_58;
        *var_d0[8] =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        var_c0 = &data_584630;
        let var_b8_1: i64 = 3;
        let var_a0_2: i64 = 0;
        let var_b0_2: *mut *mut c_void = &var_e0;
        let var_a8_2: i64 = 2;
        std::io::stdio::_print::he918bceb0c89db46(&var_c0);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h5d86c71ca1632ad3(&var_70);
        rdi_2 = &var_58;
    }
    else
    {
        uu_du::StatPrinter::convert_size::he529e362fc7c1e00(&var_e0, arg1, arg3);
        var_70 = &var_e0;
        let var_68_1: fn(arg1: *mut c_void, arg2: i64) -> i64 =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        var_c0 = &data_584660;
        let var_b8: i64 = 2;
        let var_a0_1: i64 = 0;
        let var_b0_1: *mut *mut i64 = &var_70;
        let var_a8_1: i64 = 1;
        std::io::stdio::_print::he918bceb0c89db46(&var_c0);
        rdi_2 = &var_e0;
    }
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h5d86c71ca1632ad3(rdi_2);
    core::result::Result$LT$T$C$E$GT$::unwrap::h0c3ea2d92ca0fe71(
        uucore::mods::display::print_verbatim::h5a0f023c7a40e453(arg2.byte_offset(0x40)));
    var_e0 = arg1.byte_offset(0x4d);
    let var_d8_2: fn(arg1: *mut i8, arg2: *mut c_void) -> i64 = _$LT$uucore..mods..line_ending..LineEnding$u20$as$u20$core..fmt..Display$GT$::fmt::h6643b2132dca5a5b;
    var_c0 = &data_40f000;
    let var_b8_2: i64 = 1;
    let var_a0_3: i64 = 0;
    let var_b0_3: *mut *mut c_void = &var_e0;
    let var_a8_3: i64 = 1;
    std::io::stdio::_print::he918bceb0c89db46(&var_c0);
    nullptr
}
