
  int64_t uu_ptx::get_output_chunks::h0c2bb66b7373631a(int128_t* arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5, int64_t arg6, void* arg7)

{
    int64_t rax = *(arg7 + 0x50);
    uint64_t rbp_1 = *(arg7 + 0x48) >> 1;
    int64_t rax_1 = core::cmp::Ord::max::hecb99a5fb0c577c5(rbp_1 - rax);
    int64_t rax_2 = *(arg7 + 0x28);
    int64_t rax_3 = core::cmp::Ord::max::hecb99a5fb0c577c5(~((rax_2 << 1) + arg4) + rbp_1);
    int64_t rax_4;
    int64_t rdx;
    rax_4 = alloc::raw_vec::RawVecInner$LT$A$GT$::with_capacity_in::h41210ac9edb33abe(rbp_1, 1, 1);
    int64_t var_198 = rax_4;
    int64_t var_190 = rdx;
    int64_t var_188 = 0;
    int64_t rax_5;
    int64_t rdx_1;
    rax_5 = alloc::raw_vec::RawVecInner$LT$A$GT$::with_capacity_in::h41210ac9edb33abe(rbp_1, 1, 1);
    int64_t var_1b8 = rax_5;
    int64_t var_1b0 = rdx_1;
    int64_t var_1a8 = 0;
    int64_t rax_6;
    int64_t rdx_2;
    rax_6 = alloc::raw_vec::RawVecInner$LT$A$GT$::with_capacity_in::h41210ac9edb33abe(rbp_1, 1, 1);
    int64_t var_158 = rax_6;
    int64_t var_150 = rdx_2;
    int64_t var_148 = 0;
    int64_t rax_7;
    int64_t rdx_3;
    rax_7 = alloc::raw_vec::RawVecInner$LT$A$GT$::with_capacity_in::h41210ac9edb33abe(rbp_1, 1, 1);
    int64_t var_140 = rax_7;
    int64_t var_138 = rdx_3;
    int64_t var_130 = 0;
    int64_t rdx_4 = uu_ptx::trim_idx::h946357e36774701b(arg2, arg3, 0, arg3);
    int64_t rax_10;
    int64_t rdx_7;
    rax_10 = uu_ptx::trim_idx::h946357e36774701b(arg2, arg3, 
        uu_ptx::trim_broken_word_left::hd74c554aea0eb997(arg2, arg3, 
            core::cmp::Ord::max::hecb99a5fb0c577c5(rdx_4 - rax_1), rdx_4), 
        rdx_4);
    int64_t rax_11;
    int64_t rdx_9;
    rax_11 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h599a73c91ae99f33(rax_10, rdx_7, arg2, arg3);
    void var_c0;
    core::iter::traits::iterator::Iterator::collect::h271c5ff291e66d45(&var_c0, rax_11);
    int64_t var_b8;
    int64_t var_b0;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::hf791cfea2baa4756(&var_1b8, var_b8, var_b0 + var_b8);
    
    if (rax_1 < var_1a8)
    {
        core::panicking::panic::h85d6dd562679980c("assertion failed: max_before_siz…");
        /* no return */
    }
    
    int64_t rdx_13 = uu_ptx::trim_idx::h946357e36774701b(arg5, arg6, 0, 
        uu_ptx::trim_broken_word_right::h89ebaf4ee7dd174e(arg5, arg6, 0, 
            core::cmp::Ord::min::hd46f433d625ea8eb(rax_3, arg6)));
    int64_t rax_15;
    int64_t rdx_15;
    rax_15 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h599a73c91ae99f33(0, rdx_13, arg5, arg6);
    void var_a8;
    core::iter::traits::iterator::Iterator::collect::h271c5ff291e66d45(&var_a8, rax_15);
    int64_t* var_180 = &var_158;
    int64_t var_a0;
    int64_t var_98;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::hf791cfea2baa4756(&var_158, var_a0, var_98 + var_a0);
    
    if (rax_3 < var_148)
    {
        core::panicking::panic::h85d6dd562679980c("assertion failed: max_after_size…");
        /* no return */
    }
    
    int64_t rax_17 = uu_ptx::trim_idx::h946357e36774701b(arg5, arg6, rdx_13, arg6);
    int64_t rax_21;
    int64_t rdx_22;
    rax_21 = uu_ptx::trim_idx::h946357e36774701b(arg5, arg6, rax_17, 
        uu_ptx::trim_broken_word_right::h89ebaf4ee7dd174e(arg5, arg6, rax_17, 
            core::cmp::Ord::min::hd46f433d625ea8eb(arg6, 
                rax_17 + core::cmp::Ord::max::hecb99a5fb0c577c5(rax_1 - (var_1a8 + rax)))));
    int64_t rax_22;
    int64_t rdx_24;
    rax_22 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h599a73c91ae99f33(rax_21, rdx_22, arg5, arg6);
    void var_90;
    core::iter::traits::iterator::Iterator::collect::h271c5ff291e66d45(&var_90, rax_22);
    int64_t var_88;
    int64_t var_80;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::hf791cfea2baa4756(&var_140, var_88, var_80 + var_88);
    int64_t rdx_28 = uu_ptx::trim_idx::h946357e36774701b(arg2, arg3, 0, rax_10);
    int64_t rax_28;
    int64_t rdx_31;
    rax_28 = uu_ptx::trim_idx::h946357e36774701b(arg2, arg3, 
        uu_ptx::trim_broken_word_left::hd74c554aea0eb997(arg2, arg3, 
            core::cmp::Ord::max::hecb99a5fb0c577c5(rdx_28
                - core::cmp::Ord::max::hecb99a5fb0c577c5(rax_3 - (rax + var_148))), 
            rdx_28), 
        rdx_28);
    int64_t rax_29;
    int64_t rdx_33;
    rax_29 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h599a73c91ae99f33(rax_28, rdx_31, arg2, arg3);
    void var_78;
    core::iter::traits::iterator::Iterator::collect::h271c5ff291e66d45(&var_78, rax_29);
    int64_t var_70;
    int64_t var_68;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::hf791cfea2baa4756(&var_198, var_70, var_68 + var_70);
    
    if (rdx_13 != arg6)
    {
        if (rax_21 != rdx_22)
            var_180 = &var_140;
        
        if (rax_21 == rdx_22 || rdx_22 != arg6)
        {
            int64_t rsi_26 = *(arg7 + 0x20);
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::hf791cfea2baa4756(var_180, rsi_26, rax_2 + rsi_26);
        }
    }
    
    if (rax_10)
    {
        void* var_128;
        char const* const var_f0;
        
        if (rax_28 == rdx_31)
        {
            var_128 = arg7 + 0x18;
            int64_t (* var_120_1)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
            int64_t* var_118_1 = &var_1b8;
            int64_t (* var_110_1)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
            var_f0 = &data_455170;
            int64_t var_e8_1 = 2;
            int64_t var_d0_1 = 0;
            void** var_e0_1 = &var_128;
            int64_t var_d8_1 = 2;
            int128_t var_60;
            core::option::Option$LT$T$GT$::map_or_else::h4a28e95acdffaeae(&var_60, &var_f0);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hdf1f386795eaa8a5(&var_1b8);
            int64_t var_50;
            var_1a8 = var_50;
            var_1b8 = var_60;
        }
        else if (rax_28)
        {
            var_128 = arg7 + 0x18;
            int64_t (* var_120_2)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
            int64_t* var_118_2 = &var_198;
            int64_t (* var_110_2)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
            var_f0 = &data_455170;
            int64_t var_e8_2 = 2;
            int64_t var_d0_2 = 0;
            void** var_e0_2 = &var_128;
            int64_t var_d8_2 = 2;
            int128_t var_48;
            core::option::Option$LT$T$GT$::map_or_else::h4a28e95acdffaeae(&var_48, &var_f0);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hdf1f386795eaa8a5(&var_198);
            int64_t var_38;
            var_188 = var_38;
            var_198 = var_48;
        }
    }
    
    arg1[1] = var_130;
    *arg1 = var_140;
    *(arg1 + 0x28) = var_1a8;
    *(arg1 + 0x18) = var_1b8;
    arg1[3] = var_158;
    arg1[4] = var_148;
    *(arg1 + 0x48) = var_198;
    *(arg1 + 0x58) = var_188;
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hdf1f386795eaa8a5(&var_78);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hdf1f386795eaa8a5(&var_90);
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hdf1f386795eaa8a5(&var_a8);
    return core::ptr::drop_in_place$LT$alloc..string..String$GT$::hdf1f386795eaa8a5(&var_c0);
}
