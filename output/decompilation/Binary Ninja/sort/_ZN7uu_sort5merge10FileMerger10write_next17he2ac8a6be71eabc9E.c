
  int64_t uu_sort::merge::FileMerger::write_next::he2ac8a6be71eabc9(int64_t* arg1)

{
    if (!arg1[4])
        return 0;
    
    int64_t* r14_1 = arg1[3];
    int64_t* r12_1 = r14_1[2];
    alloc::rc::RcInnerPtr::inc_strong::h8fe141990fba5bf1(r12_1);
    int128_t zmm1 = *(r14_1 + 0x18);
    int64_t* rax = arg1[0xb];
    int128_t var_168 = *(arg1 + 0x48);
    arg1[9] = r12_1;
    int64_t var_48_1 = zmm1;
    *(arg1 + 0x50) = zmm1;
    int64_t* var_148 = r14_1;
    int64_t rsi;
    int64_t var_140_1 = rsi;
    int128_t* var_138_1 = &var_168;
    int64_t rdx;
    int64_t var_130_1 = rdx;
    void* rax_1 = r12_1[2];
    uu_sort::merge::FileMerger::write_next::_$u7b$$u7b$closure$u7d$$u7d$::hbda58f71ec655e68(
        &var_148, *(rax_1 + 0x20), *(rax_1 + 0x28));
    int64_t var_178;
    void* var_c8;
    char var_c0;
    
    if (*(r12_1[2] + 0x28) != var_48_1 + 1)
    {
        if (!arg1[4])
        {
            core::option::unwrap_failed::h0e11329e76906eaa();
            /* no return */
        }
        
        var_148 = &arg1[2];
        var_140_1 = 1;
        void* rax_7 = arg1[3];
        *(rax_7 + 0x18) += 1;
        core::ptr::drop_in_place$LT$binary_heap_plus..binary_heap..PeekMut$LT$uu_sort..merge..MergeableFile$C$uu_sort..merge..FileComparator$GT$$GT$::hf0db7d8e5ea22ad1(&var_148);
    }
    else
    {
        int64_t rax_3 = std::sync::mpmc::Receiver$LT$T$GT$::recv::h9149d09d652eba4a(r14_1);
        int64_t var_180 = rax_3;
        
        if (!rax_3)
        {
            binary_heap_plus::binary_heap::BinaryHeap$LT$T$C$C$GT$::pop::h1b5dad5285ed3f15(
                &var_148, &arg1[2]);
            core::ptr::drop_in_place$LT$core..option..Option$LT$uu_sort..merge..MergeableFile$GT$$GT$::h316dd26c56c05b22(&var_148);
            
            if (var_180)
                core::ptr::drop_in_place$LT$uu_sort..chunks..Chunk$GT$::h110e2935f03a115d(&var_180);
        }
        else
        {
            var_178 = rax_3;
            
            if (!arg1[4])
            {
                core::option::unwrap_failed::h0e11329e76906eaa();
                /* no return */
            }
            
            var_c8 = &arg1[2];
            char var_c0_1 = 0;
            var_148 = 1;
            var_140_1 = 1;
            int64_t var_138_2 = rax_3;
            uint64_t rax_4 = alloc::boxed::Box$LT$T$GT$::new::h36e8c18cbcced5da(&var_148);
            char var_c0_2 = 1;
            uint64_t* r15_4 = arg1[3] + 0x10;
            core::ptr::drop_in_place$LT$alloc..rc..Rc$LT$uu_sort..chunks..Chunk$GT$$GT$::h7ede764e698186a0(r15_4);
            *r15_4 = rax_4;
            var_c0 = 1;
            *(*(var_c8 + 8) + 0x18) = 0;
            core::ptr::drop_in_place$LT$binary_heap_plus..binary_heap..PeekMut$LT$uu_sort..merge..MergeableFile$C$uu_sort..merge..FileComparator$GT$$GT$::hf0db7d8e5ea22ad1(&var_c8);
        }
    }
    
    int64_t* rdi_7 = var_168;
    
    if (rdi_7)
    {
        int64_t rbp_2;
        rbp_2 = 1;
        int64_t rax_8;
        int128_t* rdx_2;
        rax_8 = alloc::rc::Rc$LT$T$C$A$GT$::try_unwrap::h35cd3ab5a059c06f(rdi_7);
        var_178 = rax_8;
        int128_t* var_170_1 = rdx_2;
        
        if (!rax_8)
        {
            int64_t rcx_3 = uu_sort::chunks::Chunk::recycle::h5f1e538d67d10031(&var_c8, rdx_2);
            var_148 = rax;
            var_140_1 = var_c8;
            int128_t var_b8;
            var_130_1 = var_b8;
            int128_t var_a8;
            int128_t var_120_1 = var_a8;
            int128_t var_98;
            int128_t var_110_1 = var_98;
            int128_t var_88;
            int128_t var_100_1 = var_88;
            int128_t var_78;
            int128_t var_f0_1 = var_78;
            int128_t var_68;
            int128_t var_e0_1 = var_68;
            int64_t var_58;
            int64_t var_d0_1 = var_58;
            std::sync::mpmc::Sender$LT$T$GT$::send::h182581e942b1a4b7(&var_c8, arg1, &var_148, 
                rcx_3);
            
            if (var_c0 != -0x8000000000000000)
                core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..sync..mpsc..SendError$LT$$LP$usize$C$uu_sort..chunks..RecycledChunk$RP$$GT$$GT$$GT$::h16ae8ac4e9019932(&var_c8);
        }
        
        if (rax_8 || var_178)
            core::ptr::drop_in_place$LT$core..result..Result$LT$uu_sort..chunks..Chunk$C$alloc..rc..Rc$LT$uu_sort..chunks..Chunk$GT$$GT$$GT$::hd45d81f964b4d346(&var_178);
    }
    
    int64_t result;
    result = arg1[4];
    return result;
}
