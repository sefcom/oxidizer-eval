
  fn uu_csplit::split_name::SplitName::new::he14f8b59b0de5c0b(arg1: *mut i64, arg2: *mut i64, arg3: *mut i64, arg4: *mut i64) -> i64

{
    let mut rbx: *mut *mut c_void = *arg2;
    let mut var_128: *mut *mut c_void;
    let mut var_120: i64;
    let mut var_118: *mut *mut i64;
    let mut rax_2: *mut *mut i64;
    let mut r14: i64;
    
    if -(rbx) != -0x8000000000000000
    {
        r14 = arg2[1];
        rax_2 = arg2[2];
    }
    else
    {
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h846ff10640ee36ac(&var_128, "xx%0usrc/uu/csplit/src/split_nam…", 2);
        rbx = var_128;
        r14 = var_120;
        rax_2 = var_118;
    }
    
    let rcx: *mut i64 = *arg4;
    let mut rax_3: i64 = 2;
    let mut var_110: i128;
    let mut var_b0: *mut i64;
    let mut var_a8: i128;
    let mut var_68: i128;
    
    if rcx != -0x8000000000000000
    {
        var_a8 = *arg4.byte_offset(8);
        var_b0 = rcx;
        uu_csplit::split_name::SplitName::new::_$u7b$$u7b$closure$u7d$$u7d$::h7abf8b2bb822c868(
            &var_128, &var_b0);
        let rcx_1: *mut *mut c_void = var_128;
        rax_3 = var_120;
        var_68 = var_110;
        
        if rcx_1 != 0xd
        {
            *arg1.byte_offset(0x20) = var_68;
            arg1[1] = rcx_1;
            *arg1.byte_offset(0x10) = var_120;
            *arg1 = -0x8000000000000000;
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hdddb8adee62be837(rbx, r14);
            /* tailcall */
            return core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h1bdf49e9c9d1531d(
                *arg3, arg3[1]);
        }
    }
    
    let mut var_b8: i64 = rax_3;
    let rax_4: i64 = *arg3;
    let mut var_48: i64;
    
    if rax_4 != -0x8000000000000000
    {
        let var_40_1: i128 = *arg3.byte_offset(8);
        var_48 = rax_4;
    }
    else
    {
        var_b0 = &var_b8;
        var_a8 = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h3bef13756113ac7b;
        var_128 = &data_642c28;
        var_120 = 2;
        *var_110[8] = 0;
        var_118 = &var_b0;
        var_110 = 1;
        core::option::Option$LT$T$GT$::map_or_else::h09e258efb3ef0577(&var_48, &var_128);
    }
    
    uucore::features::format::Format$LT$F$C$T$GT$::parse::hef3b2fee7286e903(&var_128, &var_48);
    let rcx_2: *mut *mut c_void = var_128;
    
    if rcx_2 != -0x8000000000000000
    {
        var_a8 = var_118;
        var_b0 = rcx_2;
        var_a8 = var_120;
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h846ff10640ee36ac(&var_68, r14, rax_2);
        let var_100_1: i128 = var_a8;
        let var_110_1: i128 = var_b0;
        let zmm0_2: i128 = var_68;
        var_128 = zmm0_2;
        let var_f8: i128;
        arg1[0xa] = *var_f8[8];
        let var_e8: i64;
        arg1[0xb] = var_e8;
        *arg1.byte_offset(0x40) = var_e8;
        *arg1.byte_offset(0x30) = var_110;
        *arg1.byte_offset(0x20) = var_110_1;
        let var_58: i64;
        arg1[2] = var_58;
        arg1[3] = var_110_1;
        *arg1 = zmm0_2;
    }
    else
    {
        let mut rcx_3: i64;
        rcx_3 = var_120 == -0x7ffffffffffffff1;
        arg1[1] = rcx_3 + 9;
        *arg1 = -0x8000000000000000;
        core::ptr::drop_in_place$LT$core..result..Result$LT$uucore..features..format..Format$LT$uucore..features..format..num_format..UnsignedInt$C$u64$GT$$C$uucore..features..format..FormatError$GT$$GT$::hdf651402bb2e546b(&var_128);
    }
    
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hdddb8adee62be837(rbx, r14)
}
