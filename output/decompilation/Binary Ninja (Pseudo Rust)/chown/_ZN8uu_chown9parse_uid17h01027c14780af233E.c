
  fn uu_chown::parse_uid::h01027c14780af233(arg1: *mut i64, arg2: *mut i8, arg3: u64, arg4: *mut i8, arg5: *mut c_void, arg6: i32)

{
    if arg3 == 0
    {
        arg1[1] = 0;
        *arg1 = 0;
        return;
    }
    
    let mut var_b0: i64;
    _$LT$uucore..features..entries..Passwd$u20$as$u20$uucore..features..entries..Locate$LT$$RF$str$GT$$GT$::locate::h4bb3a5c7c498e57d(&var_b0, arg2, arg3);
    
    if !(0 + -(var_b0))
    {
        arg1[1] = 1;
        let var_38: i32;
        *arg1.byte_offset(0xc) = var_38;
        *arg1 = 0;
        core::ptr::drop_in_place$LT$uucore..features..entries..Passwd$GT$::h9d92376eadf8fa93(
            &var_b0);
        return;
    }
    
    let rax_1: i8 =
        _$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h822e1c3c690e59b6(
        0x2e, arg4, arg5);
    let mut rcx: bool;
    
    if rax_1 != 0
    {
        rcx = arg6 != 0x3a | _$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h822e1c3c690e59b6(0x3a, arg4, arg5);
    }
    
    let mut var_128: *mut *mut c_void;
    
    if rax_1 != 0 && rcx == 0
    {
        uu_chown::parse_spec::h35c2058a4fb20997(&var_128, arg4, arg5, 0x2e);
        let mut rax_8: i64;
        
        if var_128 != 1
        {
            arg1[1] = var_128;
            rax_8 = 0;
        }
        else
        {
            let var_120: i64;
            rax_8 = var_120;
            let var_118: i64;
            arg1[1] = var_118;
        }
        
        *arg1 = rax_8;
    }
    else
    {
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
            let mut var_e8: i64 = 0;
            let var_e0_1: *mut i8 = arg4;
            let var_d8_1: *mut c_void = arg5;
            let var_d0_1: i8 = 1;
            let mut var_f8: *mut i64 = &var_e8;
            let var_f0_1: fn(arg1: *mut i32, arg2: *mut i64) -> i64 =
                _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
            var_128 = &data_4f5f08;
            let var_120_1: i64 = 1;
            let var_108_1: i64 = 0;
            let var_118_1: *mut *mut i64 = &var_f8;
            let mut var_110_1: i64 = 1;
            let mut var_c8: i128;
            core::option::Option$LT$T$GT$::map_or_else::h4bc4c2e4ba7ee2f5(&var_c8, &var_128);
            var_110_1 = 1;
            var_128 = var_c8;
            let var_b8: i64;
            let var_118_2: i64 = var_b8;
            *arg1 = alloc::boxed::Box$LT$T$GT$::new::hb4f3be129963c03f(&var_128);
            arg1[1] = &data_4f5f38;
        }
    }
    core::ptr::drop_in_place$LT$core..result..Result$LT$uucore..features..entries..Passwd$C$std..io..error..Error$GT$$GT$::h7476ebf99eb029b9(&var_b0);
}
