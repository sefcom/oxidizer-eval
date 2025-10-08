
  fn bat::printer::InteractivePrinter::print_horizontal_line::hcf3e7a07a3456b38(arg1: *mut i8, arg2: *mut c_void, arg3: *mut i32, arg4: i32) -> i64

{
    let mut var_144: i32 = arg4;
    let rbp: u64 = *arg2.byte_offset(0x210);
    let mut result: i64;
    let mut var_140: i8;
    let var_130: i64;
    let var_110: i128;
    let var_100: i128;
    
    if rbp == 0
    {
        result = bat::printer::InteractivePrinter::print_horizontal_line_term::h3959d9ef5566c6a5(
            &var_140, *arg2.byte_offset(0x200), arg3, arg2.byte_offset(0x220));
        
        if var_140 != 0xd
        {
            *arg1.byte_offset(0x40) = var_100;
            let zmm0_4: i128 = var_140;
            *arg1.byte_offset(0x30) = var_110;
            let var_120: i64;
            *arg1.byte_offset(0x20) = var_120;
            *arg1.byte_offset(0x10) = var_130;
            *arg1 = zmm0_4;
        }
        else
        {
            *arg1 = 0xd;
        }
    }
    else
    {
        let mut var_60: ();
        alloc::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::repeat::h069f359f14668369(&var_60, 
            &data_5a2c43, 3, !rbp + *(*arg2.byte_offset(0x200) + 0x100));
        let rdx: u64 = alloc::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::repeat::h069f359f14668369(
            &var_140, &data_5a2c43, 3, rbp);
        let var_d8_1: i64 = var_130;
        let mut var_e8: i128 = var_140;
        var_140 = &var_e8;
        let var_138_1: fn(arg1: *mut c_void, arg2: i64) -> i64 =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
        let var_130_1: *mut i32 = &var_144;
        let var_128_1: fn(arg1: *mut i32, arg2: *mut i64) -> i64 =
            _$LT$char$u20$as$u20$core..fmt..Display$GT$::fmt::h0215b7857ad55b0c;
        let var_120_1: *mut c_void = &var_60;
        let var_118_1: fn(arg1: *mut c_void, arg2: i64) -> i64 =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
        let mut var_b8: *const i8 = &data_5a2cd0;
        let var_b0_1: i64 = 3;
        let var_98_1: i64 = 0;
        let var_a8_1: *mut i8 = &var_140;
        let var_a0_1: i64 = 3;
        let mut var_48: i128;
        core::option::Option$LT$T$GT$::map_or_else::hec96efa742f30dcc(&var_48, 0, rdx, &var_b8);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h2ec3c51b3420dbb5(&var_e8);
        let var_78_1: i8 = *arg2.byte_offset(0x230);
        let var_88_1: i128 = *arg2.byte_offset(0x220);
        var_b8 = var_48;
        let var_38: i64;
        let var_a8_2: i64 = var_38;
        let var_a0_2: i64 = -0x7ffffffffffffffe;
        let mut var_70: *const *const i8 = &var_b8;
        let var_68_1: fn(arg1: *mut i64, arg2: i64) -> u64 = _$LT$nu_ansi_term..display..AnsiGenericString$LT$str$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hc730c7572ee14c54;
        var_e8 = &data_acea80;
        *var_e8[8] = 2;
        let var_c8_1: i64 = 0;
        let var_d8_2: *mut *const *const i8 = &var_70;
        let var_d0_1: i64 = 1;
        bat::output::OutputHandle::write_fmt::hec1e6f03d02f41b4(&var_140, arg3, &var_e8);
        
        if var_140 != 0xd
        {
            *arg1.byte_offset(0x40) = var_100;
            let zmm0_3: i128 = var_140;
            *arg1.byte_offset(0x30) = var_110;
            *arg1.byte_offset(0x20) = var_120_1;
            *arg1.byte_offset(0x10) = var_130_1;
            *arg1 = zmm0_3;
            core::ptr::drop_in_place$LT$nu_ansi_term..display..AnsiGenericString$LT$str$GT$$GT$::hde6d3ec6e19234d6(&var_b8);
            return core::ptr::drop_in_place$LT$alloc..string..String$GT$::h2ec3c51b3420dbb5(
                &var_60);
        }
        
        core::ptr::drop_in_place$LT$nu_ansi_term..display..AnsiGenericString$LT$str$GT$$GT$::hde6d3ec6e19234d6(&var_b8);
        result = core::ptr::drop_in_place$LT$alloc..string..String$GT$::h2ec3c51b3420dbb5(&var_60);
        *arg1 = 0xd;
    }
    result
}
