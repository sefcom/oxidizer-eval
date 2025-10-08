
  fn uu_chown::parse_gid::h180219f2ead778f4(arg1: *mut u64, arg2: *mut i8, arg3: u64)

{
    if arg3 == 0
    {
        arg1[1] = 0;
        *arg1 = 0;
        return;
    }
    
    let mut var_90: i64;
    _$LT$uucore..features..entries..Group$u20$as$u20$uucore..features..entries..Locate$LT$$RF$str$GT$$GT$::locate::h2c7d885aadff2e1b(&var_90, arg2, arg3);
    let rdi_1: i64 = var_90;
    let var_88: i64;
    
    if -(rdi_1) != -0x8000000000000000
    {
        arg1[1] = 1;
        let var_78: i32;
        *arg1.byte_offset(0xc) = var_78;
        *arg1 = 0;
        core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h64edeac6d8c4e76c(rdi_1, 
            var_88);
        return;
    }
    
    let rax_3: i64 =
        core::num::_$LT$impl$u20$u32$GT$::from_ascii_radix::h825576ac29f90020(arg2, arg3);
    
    if (rax_3 & 1) == 0
    {
        arg1[1] = 1;
        *arg1.byte_offset(0xc) = rax_3 >> 0x20;
        *arg1 = 0;
    }
    else
    {
        let mut var_60: i64 = 0;
        let rcx: i64;
        let var_58_1: i64 = rcx;
        let r8: i64;
        let var_50_1: i64 = r8;
        let var_48_1: i8 = 1;
        let mut var_70: *mut i64 = &var_60;
        let var_68_1: fn(arg1: *mut i32, arg2: *mut i64) -> i64 =
            _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
        let mut var_c8: *mut *mut c_void = &data_4f5fa0;
        let var_c0_1: i64 = 1;
        let var_a8_1: i64 = 0;
        let var_b8_1: *mut *mut i64 = &var_70;
        let mut var_b0_1: i64 = 1;
        let mut var_40: i128;
        core::option::Option$LT$T$GT$::map_or_else::h4bc4c2e4ba7ee2f5(&var_40, &var_c8);
        var_b0_1 = 1;
        var_c8 = var_40;
        let var_30: i64;
        let var_b8_2: i64 = var_30;
        *arg1 = alloc::boxed::Box$LT$T$GT$::new::hb4f3be129963c03f(&var_c8);
        arg1[1] = &data_4f5f38;
    }
    
    core::ptr::drop_in_place$LT$core..result..Result$LT$uucore..features..entries..Group$C$std..io..error..Error$GT$$GT$::h84fc9f312db1c2ce(-0x8000000000000000, var_88);
}
