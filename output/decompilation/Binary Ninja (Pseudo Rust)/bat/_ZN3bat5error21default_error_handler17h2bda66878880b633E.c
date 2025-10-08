
  fn bat::error::default_error_handler::h2bda66878880b633(arg1: *mut i8, arg2: i64, arg3: i64) -> i64

{
    let mut var_b0: *mut i8 = arg1;
    let rax: u32 = *arg1;
    let mut var_b8: *mut c_void;
    let mut var_a8: *mut i64;
    let mut var_88: i64;
    let mut var_38: *mut c_void;
    
    if rax == 0
    {
        if std::io::error::Error::kind::h135fe00c4e7365f3(*arg1.byte_offset(8)) == 0xb
        {
            std::process::exit::hcda678ff272dfed1(0);
            /* no return */
        }
    }
    else if rax == 6
    {
        let var_50: i8 = 0;
        let var_58: i64 = 0;
        let var_4f: i64 = 0x1500000002;
        var_88 = -0x8000000000000000;
        let var_80: *const i8 = "[bat error]: Error while parsing…";
        let var_78: i64 = 0xb;
        let var_70: i64 = -0x7ffffffffffffffe;
        var_a8 = &var_88;
        let var_a0: fn(arg1: *mut i64, arg2: i64) -> u64 = _$LT$nu_ansi_term..display..AnsiGenericString$LT$str$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hc730c7572ee14c54;
        let var_98: *mut *mut i8 = &var_b0;
        let var_90: fn(arg1: *mut i64, arg2: *mut i64, arg3: i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5e3b3851b5941a74;
        var_38 = &data_ace428;
        let var_30: i64 = 3;
        let var_18: i64 = 0;
        let var_28: *mut *mut i64 = &var_a8;
        let var_20: i64 = 2;
        let rax_1: *mut c_void = (*(arg3 + 0x48))(arg2, &var_38);
        var_b8 = rax_1;
        
        if rax_1 != 0
        {
            core::ptr::drop_in_place$LT$core..option..Option$LT$std..io..error..Error$GT$$GT$::hd82f0dd660d43339(&var_b8);
        }
        
        return core::ptr::drop_in_place$LT$nu_ansi_term..display..AnsiGenericString$LT$str$GT$$GT$::hde6d3ec6e19234d6(&var_88);
    }
    
    var_b8 = &std::io::stdio::stderr::INSTANCE::h8cff5a7d41eb89e3;
    let mut var_c0: *mut i64 = std::io::stdio::Stderr::lock::h0a4e4370fd1671bb(&var_b8);
    let var_50_1: i8 = 0;
    let var_58_1: i64 = 0;
    let var_4f_1: i64 = 0x1500000002;
    var_88 = -0x8000000000000000;
    let var_80_1: *const i8 = "[bat error]: Error while parsing…";
    let var_78_1: i64 = 0xb;
    let var_70_1: i64 = -0x7ffffffffffffffe;
    var_a8 = &var_88;
    let var_a0_1: fn(arg1: *mut i64, arg2: i64) -> u64 = _$LT$nu_ansi_term..display..AnsiGenericString$LT$str$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hc730c7572ee14c54;
    let var_98_1: *mut *mut i8 = &var_b0;
    let var_90_1: fn(arg1: *mut i64, arg2: *mut i64, arg3: i64) -> i64 =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5e3b3851b5941a74;
    var_38 = &data_ace198;
    let var_30_1: i64 = 3;
    let var_18_1: i64 = 0;
    let var_28_1: *mut *mut i64 = &var_a8;
    let var_20_1: i64 = 2;
    let rax_5: i64 = std::io::Write::write_fmt::hd735acb8b0f88d2c(&var_c0, &var_38);
    let mut var_40: i64 = rax_5;
    
    if rax_5 != 0
    {
        core::ptr::drop_in_place$LT$core..option..Option$LT$std..io..error..Error$GT$$GT$::hd82f0dd660d43339(&var_40);
    }
    
    core::ptr::drop_in_place$LT$nu_ansi_term..display..AnsiGenericString$LT$str$GT$$GT$::hde6d3ec6e19234d6(&var_88);
    core::ptr::drop_in_place$LT$std..io..stdio..StderrLock$GT$::hc6778b24ef661503(&var_c0)
}
