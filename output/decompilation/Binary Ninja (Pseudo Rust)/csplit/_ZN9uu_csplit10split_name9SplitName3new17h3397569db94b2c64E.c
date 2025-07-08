
  fn uu_csplit::split_name::SplitName::new::h3397569db94b2c64(arg1: *mut i64, arg2: *mut i64, arg3: *mut i64, arg4: *mut i64) -> *mut i64

{
    let mut rbp: i64;
    let var_8: i64 = rbp;
    let mut var_138: *mut *mut i64;
    let mut var_128: i128;
    let mut var_118: *mut *mut i64;
    let mut zmm0: i128;
    
    if *arg2 != -0x8000000000000000
    {
        var_138 = arg2[2];
        zmm0 = *arg2;
    }
    else
    {
        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h9e14181950c07716(&var_128, 
            "xx%0usrc/uu/csplit/src/split_nam…", 2);
        var_138 = var_118;
        zmm0 = var_128;
    }
    
    let mut var_148: i128 = zmm0;
    let rax_2: *mut i64 = *arg4;
    let mut var_110: i128;
    let mut var_c0: *mut i64;
    let mut var_b8: i128;
    let mut var_78: i128;
    let mut rax_3: i64;
    
    if rax_2 != -0x8000000000000000
    {
        var_b8 = *arg4.byte_offset(8);
        var_c0 = rax_2;
        rbp = 1;
        uu_csplit::split_name::SplitName::new::_$u7b$$u7b$closure$u7d$$u7d$::ha06daa8d9c661eb9(
            &var_128, &var_c0);
        let rax_4: i64 = var_128;
        zmm0 = var_128;
        var_78 = var_110;
        
        if rax_4 == 0xc
        {
            rax_3 = zmm0;
            goto 'label_5ba823;
        }
        
        *arg1.byte_offset(0x20) = var_78;
        arg1[1] = rax_4;
        *arg1.byte_offset(0x10) = zmm0;
        *arg1 = -0x8000000000000000;
        rbp = 1;
        'label_5baa2f:
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h2471fa5080cb6618(&var_148);
        
        if rbp != 0 && *arg3 != -0x8000000000000000
        {
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h2471fa5080cb6618(arg3);
        }
    }
    else
    {
        rax_3 = 2;
        'label_5ba823:
        let mut var_c8: i64 = rax_3;
        let mut r15_1: *mut c_void;
        
        if *arg3 != -0x8000000000000000
        {
            rbp = 0;
            r15_1 = arg3;
        }
        else
        {
            var_c0 = &var_c8;
            var_b8 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::he829b250bc010c8b;
            var_128 = &data_6e1d08;
            *var_128[8] = 2;
            *var_110[8] = 0;
            var_118 = &var_c0;
            var_110 = 1;
            rbp = 1;
            let mut var_40: ();
            r15_1 = &var_40;
            core::option::Option$LT$T$GT$::map_or_else::h81a1a3b547a1f055(&var_40, &var_128);
            rbp = 1;
        }
        
        let var_48_1: i64 = *r15_1.byte_offset(0x10);
        let mut var_58: i128 = *r15_1;
        uucore::features::format::Format$LT$F$GT$::parse::h75087b964e14f528(&var_128, &var_58);
        let rax_6: *mut i64 = var_128;
        
        if rax_6 == -0x8000000000000000
        {
            let mut rax_7: i64;
            rax_7 = *var_128[8] == 0xa;
            arg1[1] = rax_7 + 9;
            *arg1 = -0x8000000000000000;
            core::ptr::drop_in_place$LT$core..result..Result$LT$uucore..features..format..Format$LT$uucore..features..format..num_format..UnsignedInt$GT$$C$uucore..features..format..FormatError$GT$$GT$::hb5740be8a44ce43e(&var_128);
            goto 'label_5baa2f;
        }
        
        let rcx: i64 = *var_128[8];
        var_b8 = var_118;
        var_c0 = rax_6;
        var_b8 = rcx;
        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h9e14181950c07716(&var_78, 
            *var_148[8], var_138);
        let var_100_1: i128 = var_b8;
        let var_110_1: i128 = var_c0;
        let zmm0_2: i128 = var_78;
        var_128 = zmm0_2;
        let var_f8: i128;
        arg1[0xa] = *var_f8[8];
        let var_e8: i64;
        arg1[0xb] = var_e8;
        *arg1.byte_offset(0x40) = var_e8;
        *arg1.byte_offset(0x30) = var_110;
        *arg1.byte_offset(0x20) = var_110_1;
        let var_68: i64;
        arg1[2] = var_68;
        arg1[3] = var_110_1;
        *arg1 = zmm0_2;
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h2471fa5080cb6618(&var_148);
    }
    arg1
}
