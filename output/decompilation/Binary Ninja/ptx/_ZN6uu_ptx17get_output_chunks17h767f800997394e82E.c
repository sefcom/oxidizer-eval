
  int64_t uu_ptx::get_output_chunks::h767f800997394e82(int128_t* arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5, int64_t arg6, void* arg7)

{
    int64_t rax = *(arg7 + 0x50);
    uint64_t r15_1 = *(arg7 + 0x48) >> 1;
    int64_t rax_1 = core::cmp::max_by::hbbe48af9e9e1ea74(r15_1 - rax);
    int64_t rax_2 = *(arg7 + 0x28);
    int64_t rax_3 = core::cmp::max_by::hbbe48af9e9e1ea74(~((rax_2 << 1) + arg4) + r15_1);
    char const* const var_1b8;
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::hbb163462bfbc6d30(&var_1b8, r15_1, 0);
    int64_t var_1b0;
    
    if (var_1b8)
    {
        alloc::raw_vec::handle_error::h2372476369f9b8ac(var_1b0);
        /* no return */
    }
    
    int64_t var_168 = var_1b0;
    int64_t var_1a8;
    int64_t var_160 = var_1a8;
    int64_t var_158 = 0;
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::hbb163462bfbc6d30(&var_1b8, r15_1, 0);
    
    if (var_1b8)
    {
        alloc::raw_vec::handle_error::h2372476369f9b8ac(var_1b0);
        /* no return */
    }
    
    int64_t var_188 = var_1b0;
    int64_t var_180 = var_1a8;
    int64_t var_178 = 0;
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::hbb163462bfbc6d30(&var_1b8, r15_1, 0);
    
    if (var_1b8)
    {
        alloc::raw_vec::handle_error::h2372476369f9b8ac(var_1b0);
        /* no return */
    }
    
    int64_t var_128 = var_1b0;
    int64_t var_120 = var_1a8;
    int64_t var_118 = 0;
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::hbb163462bfbc6d30(&var_1b8, r15_1, 0);
    
    if (var_1b8)
    {
        alloc::raw_vec::handle_error::h2372476369f9b8ac(var_1b0);
        /* no return */
    }
    
    int64_t var_110 = var_1b0;
    int64_t var_108 = var_1a8;
    int64_t var_100 = 0;
    void* rbx;
    rbx = 1;
    int64_t rdx = uu_ptx::trim_idx::hb7cdb8e465fc0246(arg2, arg3, 0, arg3);
    int64_t rax_10;
    int64_t rdx_3;
    rax_10 = uu_ptx::trim_idx::hb7cdb8e465fc0246(arg2, arg3, 
        uu_ptx::trim_broken_word_left::hd50f7f90ebb3c8c6(arg2, arg3, 
            core::cmp::max_by::hbbe48af9e9e1ea74(rdx - rax_1), rdx), 
        rdx);
    int64_t rax_11;
    int64_t rdx_5;
    rax_11 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h9dd60db5726c3817(rax_10, rdx_3, arg2, arg3);
    void var_c0;
    _$LT$alloc..string..String$u20$as$u20$core..iter..traits..collect..FromIterator$LT$$RF$char$GT$$GT$::from_iter::ha7897a8cad1cbef8(&var_c0, rax_11);
    int64_t var_b8;
    int64_t var_b0;
    int64_t rax_12;
    uint64_t rdx_7;
    rax_12 =
        core::slice::iter::Iter$LT$T$GT$::make_slice::hd2a6d42d8182f9eb(var_b8, var_b0 + var_b8);
    int32_t rcx_4;
    rcx_4 = 1;
    int32_t var_1c8 = rcx_4;
    alloc::vec::Vec$LT$T$C$A$GT$::append_elements::h3f74110675a0c169(&var_188, rax_12, rdx_7);
    
    if (rax_1 < var_178)
    {
        core::panicking::panic::h8c3a660c3523e4a4("assertion failed: max_before_siz…");
        /* no return */
    }
    
    int64_t rdx_8 = uu_ptx::trim_idx::hb7cdb8e465fc0246(arg5, arg6, 0, 
        uu_ptx::trim_broken_word_right::hfe7aac5c1f353599(arg5, arg6, 0, 
            core::cmp::min_by::hf83f431a39c20930(rax_3, arg6)));
    int64_t rax_16;
    int64_t rdx_10;
    rax_16 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h9dd60db5726c3817(0, rdx_8, arg5, arg6);
    void var_a8;
    _$LT$alloc..string..String$u20$as$u20$core..iter..traits..collect..FromIterator$LT$$RF$char$GT$$GT$::from_iter::ha7897a8cad1cbef8(&var_a8, rax_16);
    int64_t var_a0;
    int64_t var_98;
    int64_t rax_17;
    uint64_t rdx_12;
    rax_17 =
        core::slice::iter::Iter$LT$T$GT$::make_slice::hd2a6d42d8182f9eb(var_a0, var_98 + var_a0);
    int32_t rcx_8;
    rcx_8 = 1;
    int32_t var_1c8_1 = rcx_8;
    int64_t* var_140 = &var_128;
    alloc::vec::Vec$LT$T$C$A$GT$::append_elements::h3f74110675a0c169(&var_128, rax_17, rdx_12);
    
    if (rax_3 < var_118)
    {
        core::panicking::panic::h8c3a660c3523e4a4("assertion failed: max_after_size…");
        /* no return */
    }
    
    int64_t rax_19 = uu_ptx::trim_idx::hb7cdb8e465fc0246(arg5, arg6, rdx_8, arg6);
    int64_t rax_23;
    int64_t rdx_16;
    rax_23 = uu_ptx::trim_idx::hb7cdb8e465fc0246(arg5, arg6, rax_19, 
        uu_ptx::trim_broken_word_right::hfe7aac5c1f353599(arg5, arg6, rax_19, 
            core::cmp::min_by::hf83f431a39c20930(arg6, 
                rax_19 + core::cmp::max_by::hbbe48af9e9e1ea74(rax_1 - (var_178 + rax)))));
    int64_t rax_24;
    int64_t rdx_18;
    rax_24 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h9dd60db5726c3817(rax_23, rdx_16, arg5, arg6);
    void var_90;
    _$LT$alloc..string..String$u20$as$u20$core..iter..traits..collect..FromIterator$LT$$RF$char$GT$$GT$::from_iter::ha7897a8cad1cbef8(&var_90, rax_24);
    var_1c8_1 = rdx_16;
    int64_t var_88;
    int64_t var_80;
    int64_t rax_25;
    uint64_t rdx_20;
    rax_25 =
        core::slice::iter::Iter$LT$T$GT$::make_slice::hd2a6d42d8182f9eb(var_88, var_80 + var_88);
    int64_t r13_4;
    r13_4 = 1;
    alloc::vec::Vec$LT$T$C$A$GT$::append_elements::h3f74110675a0c169(&var_110, rax_25, rdx_20);
    int64_t rdx_21 = uu_ptx::trim_idx::hb7cdb8e465fc0246(arg2, arg3, 0, rax_10);
    int64_t rax_31;
    int64_t rdx_24;
    rax_31 = uu_ptx::trim_idx::hb7cdb8e465fc0246(arg2, arg3, 
        uu_ptx::trim_broken_word_left::hd50f7f90ebb3c8c6(arg2, arg3, 
            core::cmp::max_by::hbbe48af9e9e1ea74(rdx_21
                - core::cmp::max_by::hbbe48af9e9e1ea74(rax_3 - (rax + var_118))), 
            rdx_21), 
        rdx_21);
    int64_t rax_32;
    int64_t rdx_26;
    rax_32 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h9dd60db5726c3817(rax_31, rdx_24, arg2, arg3);
    void var_78;
    _$LT$alloc..string..String$u20$as$u20$core..iter..traits..collect..FromIterator$LT$$RF$char$GT$$GT$::from_iter::ha7897a8cad1cbef8(&var_78, rax_32);
    int64_t var_70;
    int64_t var_68;
    int64_t rax_33;
    uint64_t rdx_28;
    rax_33 =
        core::slice::iter::Iter$LT$T$GT$::make_slice::hd2a6d42d8182f9eb(var_70, var_68 + var_70);
    alloc::vec::Vec$LT$T$C$A$GT$::append_elements::h3f74110675a0c169(&var_168, rax_33, rdx_28);
    
    if (rdx_8 != arg6)
    {
        if (rax_23 != var_1c8_1)
            var_140 = &var_110;
        
        if (rax_23 == var_1c8_1 || var_1c8_1 != arg6)
        {
            int64_t rdi_50 = *(arg7 + 0x20);
            int64_t rax_35;
            uint64_t rdx_29;
            rax_35 = core::slice::iter::Iter$LT$T$GT$::make_slice::hd2a6d42d8182f9eb(rdi_50, 
                rax_2 + rdi_50);
            alloc::vec::Vec$LT$T$C$A$GT$::append_elements::h3f74110675a0c169(var_140, rax_35, 
                rdx_29);
        }
    }
    
    if (rax_10)
    {
        void* var_f8;
        
        if (rax_31 == rdx_24)
        {
            var_f8 = arg7 + 0x18;
            int64_t (* var_f0_1)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            int64_t* var_e8_1 = &var_188;
            int64_t (* var_e0_1)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            var_1b8 = &data_4562c0;
            int64_t var_1b0_1 = 2;
            int64_t var_198_1 = 0;
            void** var_1a8_1 = &var_f8;
            int64_t var_1a0_1 = 2;
            int128_t var_60;
            core::option::Option$LT$T$GT$::map_or_else::hb716a3158a91a555(&var_60, &var_1b8);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hbabe7cf62dac4e15(&var_188);
            int64_t var_50;
            var_178 = var_50;
            var_188 = var_60;
        }
        else if (rax_31)
        {
            var_f8 = arg7 + 0x18;
            int64_t (* var_f0_2)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            int64_t* var_e8_2 = &var_168;
            int64_t (* var_e0_2)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
            var_1b8 = &data_4562c0;
            int64_t var_1b0_2 = 2;
            int64_t var_198_2 = 0;
            void** var_1a8_2 = &var_f8;
            int64_t var_1a0_2 = 2;
            int128_t var_48;
            core::option::Option$LT$T$GT$::map_or_else::hb716a3158a91a555(&var_48, &var_1b8);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hbabe7cf62dac4e15(&var_168);
            int64_t var_38;
            var_158 = var_38;
            var_168 = var_48;
        }
    }
    
    arg1[1] = var_100;
    *arg1 = var_110;
    *(arg1 + 0x28) = var_178;
    *(arg1 + 0x18) = var_188;
    arg1[3] = var_128;
    arg1[4] = var_118;
    *(arg1 + 0x48) = var_168;
    *(arg1 + 0x58) = var_158;
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hbabe7cf62dac4e15(&var_78);
    int32_t var_1c8_2 = 0;
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hbabe7cf62dac4e15(&var_90);
    int32_t var_1c8_3 = 0;
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hbabe7cf62dac4e15(&var_a8);
    return core::ptr::drop_in_place$LT$alloc..string..String$GT$::hbabe7cf62dac4e15(&var_c0);
}
