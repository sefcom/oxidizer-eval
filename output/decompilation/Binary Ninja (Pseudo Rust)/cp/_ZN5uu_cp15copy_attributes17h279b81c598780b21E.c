
  fn uu_cp::copy_attributes::h279b81c598780b21(arg1: *mut *mut c_void, arg2: *mut *mut i64, arg3: i64, arg4: *mut i64, arg5: i64, arg6: *mut i8) -> i64

{
    let mut var_200: *mut i64 = arg4;
    let var_1f8: i64 = arg5;
    let mut var_220: *mut *mut i64 = 1;
    let var_218: *mut *mut i64 = arg2;
    let var_210: i64 = arg3;
    let var_208: i8 = 1;
    let mut var_e0: *mut i64 = 1;
    let var_d8: *mut i64 = arg4;
    let mut var_d0: i64 = arg5;
    let var_c8: i8 = 1;
    let mut var_1f0: *mut i64 = &var_220;
    let var_1e8: fn(arg1: *mut i32, arg2: *mut i64) -> i64 =
        _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
    let var_1e0: *mut i64 = &var_e0;
    let var_1d8: fn(arg1: *mut i32, arg2: *mut i64) -> i64 =
        _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
    let mut var_1c0: *mut c_void = &data_55eb98;
    let var_1b8: i64 = 2;
    let mut var_1a0: i64 = 0;
    let var_1b0: *mut *mut i64 = &var_1f0;
    let var_1a8: i64 = 2;
    let mut var_110: ();
    core::option::Option$LT$T$GT$::map_or_else::ha891a5b84284deb4(&var_110, &var_1c0);
    let var_108: *mut i64;
    var_1f0 = var_108;
    let var_100: i64;
    let var_1e8_1: i64 = var_100;
    std::fs::symlink_metadata::h814bc3976f7d40c5(&var_1c0, arg2);
    let r15_1: *mut c_void = var_1c0;
    
    if r15_1 != 2
    {
        let mut var_c0: ();
        memcpy(&var_c0, &var_1a0, 0x90);
        var_e0 = r15_1;
        let var_d8_2: i64 = var_1b8;
        var_d0 = var_1b0;
        var_220 = &var_e0;
        let var_218_1: *mut *mut i64 = &var_200;
        let var_210_1: *mut *mut i64 = &var_1f0;
        uu_cp::handle_preserve::h7e8f09b2424e003f(&var_1c0, *arg6, arg6[1], &var_220);
        
        if var_1c0 != -0x7ffffffffffffff4
        {
            goto 'label_4a2062;
        }
        
        var_220 = &var_200;
        let var_218_2: *mut *mut i64 = &var_e0;
        let mut var_210_2: *mut *mut i64 = &var_1f0;
        uu_cp::handle_preserve::h1718f5dcce087862(&var_1c0, arg6[2], arg6[3], &var_220);
        
        if var_1c0 != -0x7ffffffffffffff4
        {
            goto 'label_4a2062;
        }
        
        uu_cp::handle_preserve::h6d79f9ad03cfc15e(&var_1c0, arg6[4], arg6[5], &var_e0, &var_200);
        let mut rax: *mut c_void = var_1c0;
        
        if rax != -0x7ffffffffffffff4
        {
            'label_4a20b7:
            let var_198: i128;
            *arg1.byte_offset(0x28) = var_198;
            *arg1.byte_offset(0x18) = var_1a8;
            *arg1.byte_offset(8) = var_1b8;
            *arg1 = rax;
        }
        else
        {
            var_220 = arg2;
            let var_218_3: i64 = arg3;
            var_210_2 = var_200;
            uu_cp::handle_preserve::hc7f5bea15cd6c8bb(&var_1c0, arg6[0xa], arg6[0xb], &var_220);
            rax = var_1c0;
            
            if rax != -0x7ffffffffffffff4
            {
                goto 'label_4a20b7;
            }
            
            *arg1 = -0x800000000000000c;
        }
    }
    else
    {
        var_e0 = var_108;
        let var_d8_1: i64 = var_100;
        let var_d0_1: i64 = var_1b8;
        _$LT$uu_cp..Error$u20$as$u20$core..convert..From$LT$quick_error..Context$LT$$RF$str$C$std..io..error..Error$GT$$GT$$GT$::from::hda2d8848c156368b(&var_1c0, &var_e0);
        'label_4a2062:
        let var_190: i64;
        arg1[6] = var_190;
        let zmm0_2: i128 = var_1c0;
        *arg1.byte_offset(0x20) = var_1a0;
        *arg1.byte_offset(0x10) = var_1b0;
        *arg1 = zmm0_2;
    }
    
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h1c03d16396ad1b8d(&var_110)
}
