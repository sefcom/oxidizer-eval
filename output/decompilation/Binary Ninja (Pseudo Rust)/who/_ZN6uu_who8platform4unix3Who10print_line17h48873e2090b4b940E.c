
  fn uu_who::platform::unix::Who::print_line::h48873e2090b4b940(arg1: *mut c_void, arg2: i64, arg3: i64, arg4: i32, arg5: i64, arg6: i128, arg7: i128, arg8: i128, arg9: i128, arg10: i128) -> i64

{
    let mut var_b0: i64 = arg2;
    let var_a8: i64 = arg3;
    let mut var_a0: i64 = arg5;
    let r9: i64;
    let var_98: i64 = r9;
    let mut var_80: i128 = arg6;
    let mut var_70: i128 = arg7;
    let mut var_60: i128 = arg8;
    let mut var_50: i128 = arg9;
    let mut var_40: i128 = arg10;
    let mut rax: i64;
    let mut rdx: i64;
    rax = alloc::raw_vec::RawVecInner$LT$A$GT$::with_capacity_in::hd2c3980597d571d0(0x40, 1, 1);
    let mut var_e0: i64 = rax;
    let var_d0: i64 = 0;
    let rax_1: u64 = alloc::alloc::Global::alloc_impl::h6fb1b6049873c120(4, 8);
    
    if rax_1 == 0
    {
        alloc::alloc::handle_alloc_error::h88aa4f4f9d19c4f9();
        /* no return */
    }
    
    *rax_1 = 0x20;
    *(rax_1 + 4) = arg4;
    let mut var_100: *mut i64 = 2;
    let var_f8: u64 = rax_1;
    let var_f0: i64 = 2;
    let mut var_130: *mut c_void;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h9cfa5ba45bb02dbb(&var_130, &var_100);
    let mut var_c8: ();
    core::iter::traits::iterator::Iterator::collect::h8e6e7805f5dc53bc(&var_c8, &var_130);
    var_100 = &var_b0;
    let var_f8_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h559836fb4f8d37c6;
    var_130 = &data_418a60;
    let var_128: i64 = 1;
    let var_110: *mut c_void = &data_41ab98;
    let var_108: i64 = 1;
    let var_120: *mut *mut i64 = &var_100;
    let var_118: i64 = 1;
    core::result::Result$LT$T$C$E$GT$::unwrap::h4436c0d0a7afa284(_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::h131ce87c39c65b68(&var_e0, &var_130));
    let var_c0: i64;
    let var_b8: i64;
    
    if *arg1.byte_offset(0x1d) != 0
    {
        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::hf242f9bddfdf5341(&var_e0, var_c0, var_b8 + var_c0);
    }
    var_100 = &var_a0;
    let var_f8_2: fn(arg1: *mut i64, arg2: i64) -> i64 =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h559836fb4f8d37c6;
    var_130 = &data_4ff008;
    let var_128_1: i64 = 1;
    let var_110_1: *mut c_void = &data_41abc8;
    let var_108_1: i64 = 1;
    let var_120_1: *mut *mut i64 = &var_100;
    let var_118_1: i64 = 1;
    core::result::Result$LT$T$C$E$GT$::unwrap::h4436c0d0a7afa284(_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::h131ce87c39c65b68(&var_e0, &var_130));
    var_100 = &var_80;
    let var_f8_3: fn(arg1: *mut i64, arg2: i64) -> i64 =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h559836fb4f8d37c6;
    let var_f0_1: i64 = 0;
    let var_e8: i16 = 0xa;
    var_130 = &data_4ff008;
    let var_128_2: i64 = 1;
    let var_110_2: *mut c_void = &data_41abf8;
    let var_108_2: i64 = 1;
    let var_120_2: *mut *mut i64 = &var_100;
    let var_118_2: i64 = 2;
    core::result::Result$LT$T$C$E$GT$::unwrap::h4436c0d0a7afa284(_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::h131ce87c39c65b68(&var_e0, &var_130));
    
    if *arg1.byte_offset(0x1a) == 0
    {
        if *arg1.byte_offset(0x1b) != 0
        {
            var_100 = &var_70;
            let var_f8_4: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h559836fb4f8d37c6;
            var_130 = &data_4ff008;
            let var_128_3: i64 = 1;
            let var_110_3: *mut c_void = &data_41ac28;
            let var_108_3: i64 = 1;
            let var_120_3: *mut *mut i64 = &var_100;
            let var_118_3: i64 = 1;
            core::result::Result$LT$T$C$E$GT$::unwrap::h4436c0d0a7afa284(_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::h131ce87c39c65b68(&var_e0, &var_130));
        }
        
        var_100 = &var_60;
        let var_f8_5: fn(arg1: *mut i64, arg2: i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h559836fb4f8d37c6;
        var_130 = &data_4ff008;
        let var_128_4: i64 = 1;
        let var_110_4: *mut c_void = &data_41ac58;
        let var_108_4: i64 = 1;
        let var_120_4: *mut *mut i64 = &var_100;
        let var_118_4: i64 = 1;
        core::result::Result$LT$T$C$E$GT$::unwrap::h4436c0d0a7afa284(_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::h131ce87c39c65b68(&var_e0, &var_130));
    }
    
    var_100 = &var_50;
    let var_f8_6: fn(arg1: *mut i64, arg2: i64) -> i64 =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h559836fb4f8d37c6;
    var_130 = &data_4ff008;
    let var_128_5: i64 = 1;
    let var_110_5: *mut c_void = &data_41ab98;
    let var_108_5: i64 = 1;
    let var_120_5: *mut *mut i64 = &var_100;
    let var_118_5: i64 = 1;
    core::result::Result$LT$T$C$E$GT$::unwrap::h4436c0d0a7afa284(_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::h131ce87c39c65b68(&var_e0, &var_130));
    
    if *arg1.byte_offset(0x1e) != 0
    {
        var_100 = &var_40;
        let var_f8_7: fn(arg1: *mut i64, arg2: i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h559836fb4f8d37c6;
        var_130 = &data_4ff008;
        let var_128_6: i64 = 1;
        let var_110_6: *mut c_void = &data_41abc8;
        let var_108_6: i64 = 1;
        let var_120_6: *mut *mut i64 = &var_100;
        let var_118_6: i64 = 1;
        core::result::Result$LT$T$C$E$GT$::unwrap::h4436c0d0a7afa284(_$LT$$RF$mut$u20$W$u20$as$u20$core..fmt..Write..write_fmt..SpecWriteFmt$GT$::spec_write_fmt::h131ce87c39c65b68(&var_e0, &var_130));
    }
    
    let mut rax_9: *mut i64;
    let mut rdx_3: i64;
    rax_9 = core::str::_$LT$impl$u20$str$GT$::trim_end_matches::hc48b43e4f71ddf49(rdx, var_d0);
    var_100 = rax_9;
    let var_f8_8: i64 = rdx_3;
    let mut var_90: *mut *mut i64 = &var_100;
    let var_88: fn(arg1: *mut i64, arg2: i64) -> i64 =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h559836fb4f8d37c6;
    var_130 = &data_4fef18;
    let var_128_7: i64 = 2;
    let var_110_7: i64 = 0;
    let var_120_7: *mut *mut *mut i64 = &var_90;
    let var_118_7: i64 = 1;
    std::io::stdio::_print::h5e446ff973c02de6(&var_130);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h636c6997ec3ef9f1(&var_c8);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h636c6997ec3ef9f1(&var_e0)
}
