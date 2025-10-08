
  int64_t firecracker::seccomp::filter_thread_categories::ha917c4cd8472310f(int128_t* arg1, int64_t* arg2)

{
    int128_t var_78;
    _$LT$hashbrown..map..HashMap$LT$K$C$V$C$S$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h51daf4a5599e18c5(&var_78, arg2);
    char var_108[0x10];
    core::iter::traits::iterator::Iterator::partition::h60b7fa662bb28ef4(&var_108, &var_78);
    char var_a8[0x10] = var_108;
    char var_b8[0x10];
    char var_58[0x10] = var_b8;
    int128_t var_d8;
    var_78 = var_d8;
    char var_c8[0x10];
    int128_t* rdi_15;
    char var_128[0x10];
    int128_t var_f8;
    
    if (!var_c8[8])
    {
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hadcf0352ee3104f1(&var_108, "vmmsignalsinstance_info_countmac…", 3);
        int64_t var_118_1 = var_f8;
        var_128 = var_108;
        
        if (!hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::hee1127579eaf9e61(&var_a8, 
            &var_128))
        {
            label_55958d:
            *var_f8[7] = var_118_1;
            var_108 = var_128;
            *(arg1 + 8) = 0x13;
            goto label_5595a4;
        }
        
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h1017b1af1d0852d4(&var_128);
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hadcf0352ee3104f1(&var_108, "apiMissing seccomp filter for AP…", 3);
        var_118_1 = var_f8;
        var_128 = var_108;
        
        if (!hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::hee1127579eaf9e61(&var_a8, 
                &var_128))
            goto label_55958d;
        
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h1017b1af1d0852d4(&var_128);
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hadcf0352ee3104f1(&var_108, "vcpuT2CLLoadPCNT    COPY us.data…", 4);
        var_118_1 = var_f8;
        var_128 = var_108;
        
        if (!hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::hee1127579eaf9e61(&var_a8, 
                &var_128))
            goto label_55958d;
        
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h1017b1af1d0852d4(&var_128);
        char zmm0_5[0x10] = var_a8;
        int128_t var_e8;
        arg1[2] = var_e8;
        arg1[1] = var_f8;
        *arg1 = zmm0_5;
        rdi_15 = &var_78;
    }
    else
    {
        hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::iter::hba7113752b3ad296(&var_108, &var_78);
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hadcf0352ee3104f1(&var_128, 1, 0);
        char var_38[0x10];
        _$LT$std..collections..hash..map..Keys$LT$K$C$V$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::hc1b79df2db1cacb2(&var_38, &var_108, &var_128);
        alloc::string::String::pop::h86cb5b5bb86d0e70(&var_38);
        int64_t var_28;
        *var_f8[7] = var_28;
        var_108 = var_38;
        *(arg1 + 8) = 0x12;
        label_5595a4:
        int64_t rax_8 = var_108[0xf];
        *(arg1 + 9) = var_108;
        *(arg1 + 0x18) = rax_8;
        arg1[2] = *var_f8[7];
        *arg1 = 0;
        core::ptr::drop_in_place$LT$std..collections..hash..map..HashMap$LT$alloc..string..String$C$alloc..sync..Arc$LT$alloc..vec..Vec$LT$u64$GT$$GT$$GT$$GT$::h19ec4151a8c22d65(&var_78);
        rdi_15 = &var_a8;
    }
    return core::ptr::drop_in_place$LT$std..collections..hash..map..HashMap$LT$alloc..string..String$C$alloc..sync..Arc$LT$alloc..vec..Vec$LT$u64$GT$$GT$$GT$$GT$::h19ec4151a8c22d65(rdi_15);
}
