
  fn uu_cp::copy_attributes::h0ca124c6c7245f78(arg1: *mut *mut c_void, arg2: i64, arg3: i64, arg4: *mut c_void, arg5: i64, arg6: *mut i8) -> *mut *mut c_void

{
    let mut var_138: i64 = arg2;
    let var_130: i64 = arg3;
    let mut var_210: *mut c_void = arg4;
    let var_208: i64 = arg5;
    let mut var_230: *const *mut c_void = 1;
    let var_228: i64 = arg2;
    let var_220: i64 = arg3;
    let var_218: i8 = 1;
    let mut var_e0: *mut c_void = 1;
    let var_d8: *mut c_void = arg4;
    let mut var_d0: i64 = arg5;
    let var_c8: i8 = 1;
    let mut var_118: *mut i64 = &var_230;
    let var_110: fn(arg1: *mut c_void, arg2: *mut c_void) -> i64 =
        _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
    let var_108: *mut i64 = &var_e0;
    let var_100: fn(arg1: *mut c_void, arg2: *mut c_void) -> i64 =
        _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
    let mut var_1e8: *mut c_void = &data_5b5e68;
    let var_1e0: i64 = 2;
    let mut var_1c8: i64 = 0;
    let var_1d8: *mut *mut i64 = &var_118;
    let var_1d0: i64 = 2;
    let mut var_200: ();
    core::option::Option$LT$T$GT$::map_or_else::h805a87bba4bea7c2(&var_200, &var_1e8);
    let var_1f8: *mut *mut c_void;
    let mut var_128: *mut *mut c_void = var_1f8;
    let var_1f0: i64;
    let var_120: i64 = var_1f0;
    std::fs::symlink_metadata::h8589e79b0a107dee(&var_1e8, arg2);
    let r12_1: *mut c_void = var_1e8;
    let var_1b8: i128;
    
    if r12_1 != 2
    {
        let mut var_c0: ();
        memcpy(&var_c0, &var_1c8, 0x90);
        var_e0 = r12_1;
        let var_d8_1: i64 = var_1e0;
        var_d0 = var_1d8;
        var_230 = &var_e0;
        let var_228_2: *mut *mut c_void = &var_210;
        let var_220_2: *mut *mut *mut c_void = &var_128;
        uu_cp::handle_preserve::h88839891003e3dd9(&var_1e8, *arg6, arg6[1], &var_230);
        
        if var_1e8 != 0xd
        {
            goto 'label_505203;
        }
        
        var_230 = &var_210;
        let var_228_3: *const *mut c_void = &var_e0;
        let var_220_3: *mut *mut *mut c_void = &var_128;
        uu_cp::handle_preserve::h61971e46c5a3aa58(&var_1e8, arg6[2], arg6[3], &var_230);
        let mut rax_1: *mut c_void = var_1e8;
        
        if rax_1 != 0xd
        {
            'label_505233:
            arg1[7] = *var_1b8[8];
            let var_1c0: i128;
            *arg1.byte_offset(0x28) = var_1c0;
            *arg1.byte_offset(0x18) = var_1d0;
            *arg1.byte_offset(8) = var_1e0;
            *arg1 = rax_1;
        }
        else
        {
            uu_cp::handle_preserve::hdf8d6c66ba5c03ed(&var_1e8, arg6[4], arg6[5], &var_e0, 
                &var_210);
            rax_1 = var_1e8;
            
            if rax_1 != 0xd
            {
                goto 'label_505233;
            }
            
            uu_cp::handle_preserve::h1b7507cebf9b4fa2(&var_1e8, arg6[0xa], arg6[0xb], &var_138, 
                &var_210);
            rax_1 = var_1e8;
            
            if rax_1 != 0xd
            {
                goto 'label_505233;
            }
            
            *arg1 = 0xd;
        }
    }
    else
    {
        var_230 = var_1f8;
        let var_228_1: i64 = var_1f0;
        let var_220_1: i64 = var_1e0;
        _$LT$uu_cp..Error$u20$as$u20$core..convert..From$LT$quick_error..Context$LT$$RF$str$C$std..io..error..Error$GT$$GT$$GT$::from::h54c083f413b93682(&var_1e8, &var_230);
        'label_505203:
        let zmm0_2: i128 = var_1e8;
        let zmm2_1: i128 = var_1c8;
        *arg1.byte_offset(0x30) = var_1b8;
        *arg1.byte_offset(0x20) = zmm2_1;
        *arg1.byte_offset(0x10) = var_1d8;
        *arg1 = zmm0_2;
    }
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h5bdd96f6f34778b9(&var_200);
    arg1
}
