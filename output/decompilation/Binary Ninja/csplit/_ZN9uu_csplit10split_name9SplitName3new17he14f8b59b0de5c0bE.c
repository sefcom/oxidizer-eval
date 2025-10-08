
  int64_t uu_csplit::split_name::SplitName::new::he14f8b59b0de5c0b(int64_t* arg1, int64_t* arg2, int64_t* arg3, int64_t* arg4)

{
    void** const rbx = *arg2;
    void** const var_128;
    int64_t var_120;
    int64_t** var_118;
    int64_t** rax_2;
    int64_t r14;
    
    if (-(rbx) != -0x8000000000000000)
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
    
    int64_t* rcx = *arg4;
    int64_t rax_3 = 2;
    int128_t var_110;
    int64_t* var_b0;
    int128_t var_a8;
    int128_t var_68;
    
    if (rcx != -0x8000000000000000)
    {
        var_a8 = *(arg4 + 8);
        var_b0 = rcx;
        uu_csplit::split_name::SplitName::new::_$u7b$$u7b$closure$u7d$$u7d$::h7abf8b2bb822c868(
            &var_128, &var_b0);
        void** const rcx_1 = var_128;
        rax_3 = var_120;
        var_68 = var_110;
        
        if (rcx_1 != 0xd)
        {
            *(arg1 + 0x20) = var_68;
            arg1[1] = rcx_1;
            *(arg1 + 0x10) = var_120;
            *arg1 = -0x8000000000000000;
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hdddb8adee62be837(rbx, r14);
            /* tailcall */
            return core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h1bdf49e9c9d1531d(
                *arg3, arg3[1]);
        }
    }
    
    int64_t var_b8 = rax_3;
    int64_t rax_4 = *arg3;
    int64_t var_48;
    
    if (rax_4 != -0x8000000000000000)
    {
        int128_t var_40_1 = *(arg3 + 8);
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
    void** const rcx_2 = var_128;
    
    if (rcx_2 != -0x8000000000000000)
    {
        var_a8 = var_118;
        var_b0 = rcx_2;
        var_a8 = var_120;
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h846ff10640ee36ac(&var_68, r14, rax_2);
        int128_t var_100_1 = var_a8;
        int128_t var_110_1 = var_b0;
        int128_t zmm0_2 = var_68;
        var_128 = zmm0_2;
        int128_t var_f8;
        arg1[0xa] = *var_f8[8];
        int64_t var_e8;
        arg1[0xb] = var_e8;
        *(arg1 + 0x40) = var_e8;
        *(arg1 + 0x30) = var_110;
        *(arg1 + 0x20) = var_110_1;
        int64_t var_58;
        arg1[2] = var_58;
        arg1[3] = var_110_1;
        *arg1 = zmm0_2;
    }
    else
    {
        int64_t rcx_3;
        rcx_3 = var_120 == -0x7ffffffffffffff1;
        arg1[1] = rcx_3 + 9;
        *arg1 = -0x8000000000000000;
        core::ptr::drop_in_place$LT$core..result..Result$LT$uucore..features..format..Format$LT$uucore..features..format..num_format..UnsignedInt$C$u64$GT$$C$uucore..features..format..FormatError$GT$$GT$::hdf651402bb2e546b(&var_128);
    }
    
    return core::ptr::drop_in_place$LT$alloc..string..String$GT$::hdddb8adee62be837(rbx, r14);
}
