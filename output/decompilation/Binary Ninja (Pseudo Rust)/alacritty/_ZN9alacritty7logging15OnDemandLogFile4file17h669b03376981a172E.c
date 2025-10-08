
  fn alacritty::logging::OnDemandLogFile::file::h669b03376981a172(arg1: *mut c_void) -> i64

{
    let mut var_d8: *mut *mut c_void;
    
    if !(0 + -(*arg1.byte_offset(0x18)))
    {
        *arg1.byte_offset(0x10);
        std::fs::metadata::h8f40e5ed4fcd8161(&var_d8, *arg1.byte_offset(8));
        let rbp_1: i32 = var_d8;
        core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::h672bb05c96f66e9c(&var_d8);
        
        if rbp_1 == 2
        {
            core::ptr::drop_in_place$LT$core..option..Option$LT$std..io..buffered..linewriter..LineWriter$LT$std..fs..File$GT$$GT$$GT$::h609f5e131c2b2621(arg1.byte_offset(0x18));
            *arg1.byte_offset(0x18) = -0x8000000000000000;
        }
        else if *arg1.byte_offset(0x18) != -0x8000000000000000
        {
            return 0;
        }
    }
    
    var_d8 = 0x1b600000000;
    let mut var_d0_1: i32 = 0;
    let mut var_cc_1: i16 = 0;
    *var_d0_1[2] = 1;
    *var_cc_1[1] = 1;
    let mut var_e8: i8;
    std::fs::OpenOptions::open::h630e6aeca6c875f5(&var_e8, &var_d8, arg1);
    let mut var_118: *mut c_void;
    let mut var_110: *mut i64;
    let mut var_108: *mut i64;
    let mut var_f8: i128;
    let mut var_c8: i128;
    
    if (var_e8 & 1) != 0
    {
        let var_e0: *mut c_void;
        var_118 = var_e0;
        std::io::stdio::stdout::hb6a8e10bcccf3287();
        var_108 = &std::io::stdio::STDOUT::h411b213c5c9add46;
        var_f8 = &var_118;
        *var_f8[8] =
            _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::ha4645305e3b6a355;
        var_d8 = &data_c83200;
        var_d0_1 = 2;
        let var_b8_1: i64 = 0;
        var_c8 = &var_f8;
        *var_c8[8] = 1;
        var_110 =
            _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::write_fmt::h3907d576e608aa2a(
            &var_108, &var_d8);
        core::ptr::drop_in_place$LT$core..option..Option$LT$std..io..error..Error$GT$$GT$::h1de10a50e8d7f33d(&var_110);
        return 1;
    }
    
    let var_e4: i32;
    std::io::buffered::bufwriter::BufWriter$LT$W$GT$::with_capacity::ha3a2e60bf0682ee4(&var_d8, 
        var_e4);
    core::ptr::drop_in_place$LT$core..option..Option$LT$std..io..buffered..linewriter..LineWriter$LT$std..fs..File$GT$$GT$$GT$::h609f5e131c2b2621(arg1.byte_offset(0x18));
    let zmm0_1: i128 = var_d8;
    *arg1.byte_offset(0x28) = var_c8;
    *arg1.byte_offset(0x18) = zmm0_1;
    core::sync::atomic::atomic_store::hb8dc95fd2f3c591f(
        (*arg1.byte_offset(0x38)).byte_offset(0x10), 1, 0);
    std::io::stdio::stdout::hb6a8e10bcccf3287();
    var_110 = &std::io::stdio::STDOUT::h411b213c5c9add46;
    var_f8 = *arg1.byte_offset(8);
    var_108 = &var_f8;
    let var_100_1: fn(arg1: *mut i64, arg2: i64) -> u64 =
        _$LT$std..path..Display$u20$as$u20$core..fmt..Display$GT$::fmt::hdc1404ac42f64ec9;
    var_d8 = &data_c831e0;
    var_d0_1 = 2;
    let var_b8_2: i64 = 0;
    var_c8 = &var_108;
    *var_c8[8] = 1;
    var_118 =
        _$LT$std..io..stdio..Stdout$u20$as$u20$std..io..Write$GT$::write_fmt::h3907d576e608aa2a(
        &var_110, &var_d8);
    core::ptr::drop_in_place$LT$core..option..Option$LT$std..io..error..Error$GT$$GT$::h1de10a50e8d7f33d(&var_118);
    
    if *arg1.byte_offset(0x18) != -0x8000000000000000
    {
        return 0;
    }
    
    core::option::unwrap_failed::h893f57cb7db71cb7();
    /* no return */
}
