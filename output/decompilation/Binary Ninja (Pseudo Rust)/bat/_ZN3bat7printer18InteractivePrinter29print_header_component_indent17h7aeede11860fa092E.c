
  fn bat::printer::InteractivePrinter::print_header_component_indent::h7aeede11860fa092(arg1: *mut i8, arg2: *mut c_void, arg3: *mut i32) -> i64

{
    let mut rdi_4: *mut c_void;
    let mut var_e0: *mut c_void;
    let mut var_c0: *const i8;
    let mut var_78: *mut c_void;
    
    if bat::style::StyleComponents::grid::h47e585e5c9942068(0xc0 + *arg2.byte_offset(0x200)) == 0
    {
        alloc::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::repeat::h069f359f14668369(&var_78, 
            " \s +Failed to load one or more …", 1, *arg2.byte_offset(0x210));
        var_e0 = &var_78;
        let var_d8_1: fn(arg1: *mut c_void, arg2: i64) -> i64 =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
        var_c0 = &data_47f780;
        let var_b8_1: i64 = 1;
        let var_a0_1: i64 = 0;
        let var_b0_1: *mut *mut c_void = &var_e0;
        let var_a8_1: i64 = 1;
        bat::output::OutputHandle::write_fmt::hec1e6f03d02f41b4(arg1, arg3, &var_c0);
        rdi_4 = &var_78;
    }
    else
    {
        let r13_1: u64 = *arg2.byte_offset(0x210);
        let mut var_48: ();
        alloc::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::repeat::h069f359f14668369(&var_48, 
            " \s +Failed to load one or more …", 1, r13_1);
        let mut rax_1: i32;
        rax_1 = r13_1 != 0;
        let var_90_1: i128 = *arg2.byte_offset(0x220);
        let var_80_1: i8 = *arg2.byte_offset(0x230);
        let mut rcx_2: *mut c_void = &data_480ea4;
        
        if r13_1 == 0
        {
            rcx_2 = 1;
        }
        
        var_c0 = -0x8000000000000000;
        let var_b8: *mut c_void = rcx_2;
        let var_b0: u64 = rax_1 << 2;
        let var_a8: i64 = -0x7ffffffffffffffe;
        var_e0 = &var_48;
        let var_d8: fn(arg1: *mut c_void, arg2: i64) -> i64 =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
        let var_d0_1: *mut i64 = &var_c0;
        let var_c8_1: fn(arg1: *mut i64, arg2: i64) -> u64 = _$LT$nu_ansi_term..display..AnsiGenericString$LT$str$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hc730c7572ee14c54;
        var_78 = &data_485820;
        let var_70_1: i64 = 2;
        let var_58_1: i64 = 0;
        let var_68_1: *mut *mut c_void = &var_e0;
        let var_60_1: i64 = 2;
        bat::output::OutputHandle::write_fmt::hec1e6f03d02f41b4(arg1, arg3, &var_78);
        core::ptr::drop_in_place$LT$nu_ansi_term..display..AnsiGenericString$LT$str$GT$$GT$::hde6d3ec6e19234d6(&var_c0);
        rdi_4 = &var_48;
    }
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h2ec3c51b3420dbb5(rdi_4)
}
