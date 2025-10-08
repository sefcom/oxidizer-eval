
  fn firecracker::seccomp::filter_thread_categories::ha917c4cd8472310f(arg1: *mut i128, arg2: *mut i64) -> i64

{
    let mut var_78: i128;
    _$LT$hashbrown..map..HashMap$LT$K$C$V$C$S$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h51daf4a5599e18c5(&var_78, arg2);
    let mut var_108: [i8; 0x10];
    core::iter::traits::iterator::Iterator::partition::h60b7fa662bb28ef4(&var_108, &var_78);
    let mut var_a8: [i8; 0x10] = var_108;
    let var_b8: [i8; 0x10];
    let var_58: [i8; 0x10] = var_b8;
    let var_d8: i128;
    var_78 = var_d8;
    let var_c8: [i8; 0x10];
    let mut rdi_15: *mut i128;
    let mut var_128: [i8; 0x10];
    let mut var_f8: i128;
    
    if var_c8[8] == 0
    {
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hadcf0352ee3104f1(&var_108, "vmmsignalsinstance_info_countmac…", 3);
        let mut var_118_1: i64 = var_f8;
        var_128 = var_108;
        
        if hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::hee1127579eaf9e61(&var_a8, 
            &var_128) == 0
        {
            'label_55958d:
            *var_f8[7] = var_118_1;
            var_108 = var_128;
            *arg1.byte_offset(8) = 0x13;
            goto 'label_5595a4;
        }
        
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h1017b1af1d0852d4(&var_128);
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hadcf0352ee3104f1(&var_108, "apiMissing seccomp filter for AP…", 3);
        var_118_1 = var_f8;
        var_128 = var_108;
        
        if hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::hee1127579eaf9e61(&var_a8, 
            &var_128) == 0
        {
            goto 'label_55958d;
        }
        
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h1017b1af1d0852d4(&var_128);
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hadcf0352ee3104f1(&var_108, "vcpuT2CLLoadPCNT    COPY us.data…", 4);
        var_118_1 = var_f8;
        var_128 = var_108;
        
        if hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::hee1127579eaf9e61(&var_a8, 
            &var_128) == 0
        {
            goto 'label_55958d;
        }
        
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h1017b1af1d0852d4(&var_128);
        let zmm0_5: [i8; 0x10] = var_a8;
        let var_e8: i128;
        arg1[2] = var_e8;
        arg1[1] = var_f8;
        *arg1 = zmm0_5;
        rdi_15 = &var_78;
    }
    else
    {
        hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::iter::hba7113752b3ad296(&var_108, &var_78);
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hadcf0352ee3104f1(&var_128, 1, 0);
        let mut var_38: [i8; 0x10];
        _$LT$std..collections..hash..map..Keys$LT$K$C$V$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::hc1b79df2db1cacb2(&var_38, &var_108, &var_128);
        alloc::string::String::pop::h86cb5b5bb86d0e70(&var_38);
        let var_28: i64;
        *var_f8[7] = var_28;
        var_108 = var_38;
        *arg1.byte_offset(8) = 0x12;
        'label_5595a4:
        let rax_8: i64 = var_108[0xf];
        *arg1.byte_offset(9) = var_108;
        *arg1.byte_offset(0x18) = rax_8;
        arg1[2] = *var_f8[7];
        *arg1 = 0;
        core::ptr::drop_in_place$LT$std..collections..hash..map..HashMap$LT$alloc..string..String$C$alloc..sync..Arc$LT$alloc..vec..Vec$LT$u64$GT$$GT$$GT$$GT$::h19ec4151a8c22d65(&var_78);
        rdi_15 = &var_a8;
    }
    core::ptr::drop_in_place$LT$std..collections..hash..map..HashMap$LT$alloc..string..String$C$alloc..sync..Arc$LT$alloc..vec..Vec$LT$u64$GT$$GT$$GT$$GT$::h19ec4151a8c22d65(rdi_15)
}
