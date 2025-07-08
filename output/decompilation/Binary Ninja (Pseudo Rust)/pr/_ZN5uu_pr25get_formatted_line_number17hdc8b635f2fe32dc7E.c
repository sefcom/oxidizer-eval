
  fn uu_pr::get_formatted_line_number::hdc8b635f2fe32dc7(arg1: *mut i64, arg2: *mut c_void, arg3: i64, arg4: i64)

{
    let mut var_f8: i64 = arg3;
    
    if *arg2.byte_offset(0xd8) == -0x8000000000000000
    {
        'label_5c85b8:
        *arg1 = 0;
        arg1[1] = 1;
        arg1[2] = 0;
        return;
    }
    
    if *arg2.byte_offset(0x10) == 0
    {
        if arg3 == 0
        {
            goto 'label_5c85b8;
        }
    }
    else if arg3 == 0 || arg4 != 0
    {
        goto 'label_5c85b8;
    }
    
    let mut var_80: ();
    _$LT$T$u20$as$u20$alloc..string..ToString$GT$::to_string::h465f4145a69c72a5(&var_80, &var_f8);
    let r13_1: i64 = *arg2.byte_offset(0xf0);
    let mut var_160: *mut c_void = arg2.byte_offset(0xd8);
    let var_70: *mut c_void;
    let r14_3: *mut c_void = var_70.byte_offset(-r13_1);
    let mut rbx_3: *mut c_void;
    let mut var_158: *mut c_void;
    let mut var_128: *mut c_void;
    let mut var_f0: i64;
    
    if var_70 >= r13_1
    {
        let var_78: *mut i8;
        let mut rax_1: *mut c_void;
        let mut rdx_1: i64;
        rax_1 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::hccefea64a1916a27(r14_3, var_78, var_70);
        
        if rax_1 == 0
        {
            core::str::slice_error_fail::h5dbb61534404fe7e(var_78, var_70, r14_3, var_70);
            /* no return */
        }
        
        let mut var_68: *mut c_void = rax_1;
        let var_60_1: i64 = rdx_1;
        var_128 = &var_68;
        let var_120_2: fn(arg1: *mut i64, arg2: i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h50d13b2eb6feaccb;
        let var_118_2: *mut *mut c_void = &var_160;
        let var_110_2: fn(arg1: *mut i64, arg2: i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc92107804a18d2f9;
        let var_108_2: i64 = r13_1;
        let var_100_2: i64 = 0;
        var_f0 = 2;
        let var_e0_2: i64 = 1;
        let var_d8_2: i64 = 2;
        let var_d0_2: i64 = 0;
        let var_c8_2: i64 = 0x20;
        let var_c0_2: i8 = 1;
        let var_b8_2: i64 = 2;
        let var_a8_2: i64 = 2;
        let var_98_2: i64 = 1;
        let var_90_2: i64 = 0x20;
        let var_88_2: i8 = 3;
        var_158 = &data_46bf10;
        let var_150_2: i64 = 2;
        let var_138_2: *mut i64 = &var_f0;
        let var_130_2: i64 = 2;
        let var_148_2: *mut *mut c_void = &var_128;
        let var_140_2: i64 = 3;
        let mut var_58: ();
        rbx_3 = &var_58;
        core::option::Option$LT$T$GT$::map_or_else::h4ea8d69383c77fdd(&var_58, &var_158);
    }
    else
    {
        var_128 = &var_80;
        let var_120_1: fn(arg1: *mut c_void, arg2: i64) -> i64 =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        let var_118_1: *mut *mut c_void = &var_160;
        let var_110_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hc92107804a18d2f9;
        let var_108_1: i64 = r13_1;
        let var_100_1: i64 = 0;
        var_f0 = 2;
        let var_e0_1: i64 = 1;
        let var_d8_1: i64 = 2;
        let var_d0_1: i64 = 0;
        let var_c8_1: i64 = 0x20;
        let var_c0_1: i8 = 1;
        let var_b8_1: i64 = 2;
        let var_a8_1: i64 = 2;
        let var_98_1: i64 = 1;
        let var_90_1: i64 = 0x20;
        let var_88_1: i8 = 3;
        var_158 = &data_46bf10;
        let var_150_1: i64 = 2;
        let var_138_1: *mut i64 = &var_f0;
        let var_130_1: i64 = 2;
        let var_148_1: *mut *mut c_void = &var_128;
        let var_140_1: i64 = 3;
        let mut var_40: ();
        rbx_3 = &var_40;
        core::option::Option$LT$T$GT$::map_or_else::h4ea8d69383c77fdd(&var_40, &var_158);
    }
    arg1[2] = *rbx_3.byte_offset(0x10);
    *arg1 = *rbx_3;
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h93d342cc5e2da10e(&var_80);
}
