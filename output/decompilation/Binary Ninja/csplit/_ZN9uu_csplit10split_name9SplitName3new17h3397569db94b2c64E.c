
  int64_t* uu_csplit::split_name::SplitName::new::h3397569db94b2c64(int64_t* arg1, int64_t* arg2, int64_t* arg3, int64_t* arg4)

{
    int64_t rbp;
    int64_t var_8 = rbp;
    int64_t** var_138;
    int128_t var_128;
    int64_t** var_118;
    int128_t zmm0;
    
    if (*arg2 != -0x8000000000000000)
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
    
    int128_t var_148 = zmm0;
    int64_t* rax_2 = *arg4;
    int128_t var_110;
    int64_t* var_c0;
    int128_t var_b8;
    int128_t var_78;
    int64_t rax_3;
    
    if (rax_2 != -0x8000000000000000)
    {
        var_b8 = *(arg4 + 8);
        var_c0 = rax_2;
        rbp = 1;
        uu_csplit::split_name::SplitName::new::_$u7b$$u7b$closure$u7d$$u7d$::ha06daa8d9c661eb9(
            &var_128, &var_c0);
        int64_t rax_4 = var_128;
        zmm0 = var_128;
        var_78 = var_110;
        
        if (rax_4 == 0xc)
        {
            rax_3 = zmm0;
            goto label_5ba823;
        }
        
        *(arg1 + 0x20) = var_78;
        arg1[1] = rax_4;
        *(arg1 + 0x10) = zmm0;
        *arg1 = -0x8000000000000000;
        rbp = 1;
        label_5baa2f:
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h2471fa5080cb6618(&var_148);
        
        if (rbp && *arg3 != -0x8000000000000000)
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h2471fa5080cb6618(arg3);
    }
    else
    {
        rax_3 = 2;
        label_5ba823:
        int64_t var_c8 = rax_3;
        void* r15_1;
        
        if (*arg3 != -0x8000000000000000)
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
            void var_40;
            r15_1 = &var_40;
            core::option::Option$LT$T$GT$::map_or_else::h81a1a3b547a1f055(&var_40, &var_128);
            rbp = 1;
        }
        
        int64_t var_48_1 = *(r15_1 + 0x10);
        int128_t var_58 = *r15_1;
        uucore::features::format::Format$LT$F$GT$::parse::h75087b964e14f528(&var_128, &var_58);
        int64_t* rax_6 = var_128;
        
        if (rax_6 == -0x8000000000000000)
        {
            int64_t rax_7;
            rax_7 = *var_128[8] == 0xa;
            arg1[1] = rax_7 + 9;
            *arg1 = -0x8000000000000000;
            core::ptr::drop_in_place$LT$core..result..Result$LT$uucore..features..format..Format$LT$uucore..features..format..num_format..UnsignedInt$GT$$C$uucore..features..format..FormatError$GT$$GT$::hb5740be8a44ce43e(&var_128);
            goto label_5baa2f;
        }
        
        int64_t rcx = *var_128[8];
        var_b8 = var_118;
        var_c0 = rax_6;
        var_b8 = rcx;
        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h9e14181950c07716(&var_78, 
            *var_148[8], var_138);
        int128_t var_100_1 = var_b8;
        int128_t var_110_1 = var_c0;
        int128_t zmm0_2 = var_78;
        var_128 = zmm0_2;
        int128_t var_f8;
        arg1[0xa] = *var_f8[8];
        int64_t var_e8;
        arg1[0xb] = var_e8;
        *(arg1 + 0x40) = var_e8;
        *(arg1 + 0x30) = var_110;
        *(arg1 + 0x20) = var_110_1;
        int64_t var_68;
        arg1[2] = var_68;
        arg1[3] = var_110_1;
        *arg1 = zmm0_2;
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h2471fa5080cb6618(&var_148);
    }
    return arg1;
}
