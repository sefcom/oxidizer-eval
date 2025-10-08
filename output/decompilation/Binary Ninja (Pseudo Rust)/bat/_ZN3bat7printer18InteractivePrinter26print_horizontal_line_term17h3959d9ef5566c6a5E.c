
  fn bat::printer::InteractivePrinter::print_horizontal_line_term::h3959d9ef5566c6a5(arg1: *mut i8, arg2: *mut c_void, arg3: *mut i32, arg4: *mut i128) -> i64

{
    let mut var_b8: ();
    alloc::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::repeat::h069f359f14668369(&var_b8, &data_5a2c43, 
        3, *arg2.byte_offset(0x100));
    let var_78: i8 = arg4[1];
    let var_88: i128 = *arg4;
    let var_a0: i64 = -0x7ffffffffffffffe;
    let mut var_f8: *mut c_void = &var_b8;
    let var_f0: fn(arg1: *mut i64, arg2: i64) -> u64 = _$LT$nu_ansi_term..display..AnsiGenericString$LT$str$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hc730c7572ee14c54;
    let mut var_e8: *mut c_void = &data_acea80;
    let var_e0: i64 = 2;
    let var_c8: i64 = 0;
    let var_d8: *mut *mut c_void = &var_f8;
    let var_d0: i64 = 1;
    let mut var_70: i8;
    bat::output::OutputHandle::write_fmt::hec1e6f03d02f41b4(&var_70, arg3, &var_e8);
    
    if var_70 == 0xd
    {
        let result: i64 = core::ptr::drop_in_place$LT$nu_ansi_term..display..AnsiGenericString$LT$str$GT$$GT$::hde6d3ec6e19234d6(&var_b8);
        *arg1 = 0xd;
        return result;
    }
    
    let var_30: i128;
    *arg1.byte_offset(0x40) = var_30;
    let zmm0_1: i128 = var_70;
    let var_40: i128;
    *arg1.byte_offset(0x30) = var_40;
    let var_50: i128;
    *arg1.byte_offset(0x20) = var_50;
    let var_60: i128;
    *arg1.byte_offset(0x10) = var_60;
    *arg1 = zmm0_1;
    core::ptr::drop_in_place$LT$nu_ansi_term..display..AnsiGenericString$LT$str$GT$$GT$::hde6d3ec6e19234d6(&var_b8)
}
