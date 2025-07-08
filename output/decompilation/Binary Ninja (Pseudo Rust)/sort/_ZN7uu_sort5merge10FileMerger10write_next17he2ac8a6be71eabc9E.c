
  fn uu_sort::merge::FileMerger::write_next::he2ac8a6be71eabc9(arg1: *mut i64) -> i64

{
    if arg1[4] == 0
    {
        return 0;
    }
    
    let r14_1: *mut i64 = arg1[3];
    let r12_1: *mut i64 = r14_1[2];
    alloc::rc::RcInnerPtr::inc_strong::h8fe141990fba5bf1(r12_1);
    let zmm1: i128 = *r14_1.byte_offset(0x18);
    let rax: *mut i64 = arg1[0xb];
    let mut var_168: i128 = *arg1.byte_offset(0x48);
    arg1[9] = r12_1;
    let var_48_1: i64 = zmm1;
    *arg1.byte_offset(0x50) = zmm1;
    let mut var_148: *mut i64 = r14_1;
    let rsi: i64;
    let mut var_140_1: i64 = rsi;
    let var_138_1: *mut i128 = &var_168;
    let rdx: i64;
    let mut var_130_1: i64 = rdx;
    let rax_1: *mut c_void = r12_1[2];
    uu_sort::merge::FileMerger::write_next::_$u7b$$u7b$closure$u7d$$u7d$::hbda58f71ec655e68(
        &var_148, *rax_1.byte_offset(0x20), *rax_1.byte_offset(0x28));
    let mut var_178: i64;
    let mut var_c8: *mut c_void;
    let mut var_c0: i8;
    
    if *(r12_1[2] + 0x28) != var_48_1 + 1
    {
        if arg1[4] == 0
        {
            core::option::unwrap_failed::h0e11329e76906eaa();
            /* no return */
        }
        
        var_148 = &arg1[2];
        var_140_1 = 1;
        let rax_7: *mut c_void = arg1[3];
        *rax_7.byte_offset(0x18) += 1;
        core::ptr::drop_in_place$LT$binary_heap_plus..binary_heap..PeekMut$LT$uu_sort..merge..MergeableFile$C$uu_sort..merge..FileComparator$GT$$GT$::hf0db7d8e5ea22ad1(&var_148);
    }
    else
    {
        let rax_3: i64 = std::sync::mpmc::Receiver$LT$T$GT$::recv::h9149d09d652eba4a(r14_1);
        let mut var_180: i64 = rax_3;
        
        if rax_3 == 0
        {
            binary_heap_plus::binary_heap::BinaryHeap$LT$T$C$C$GT$::pop::h1b5dad5285ed3f15(
                &var_148, &arg1[2]);
            core::ptr::drop_in_place$LT$core..option..Option$LT$uu_sort..merge..MergeableFile$GT$$GT$::h316dd26c56c05b22(&var_148);
            
            if var_180 != 0
            {
                core::ptr::drop_in_place$LT$uu_sort..chunks..Chunk$GT$::h110e2935f03a115d(&var_180);
            }
        }
        else
        {
            var_178 = rax_3;
            
            if arg1[4] == 0
            {
                core::option::unwrap_failed::h0e11329e76906eaa();
                /* no return */
            }
            
            var_c8 = &arg1[2];
            let var_c0_1: i8 = 0;
            var_148 = 1;
            var_140_1 = 1;
            let var_138_2: i64 = rax_3;
            let rax_4: u64 = alloc::boxed::Box$LT$T$GT$::new::h36e8c18cbcced5da(&var_148);
            let var_c0_2: i8 = 1;
            let r15_4: *mut u64 = arg1[3] + 0x10;
            core::ptr::drop_in_place$LT$alloc..rc..Rc$LT$uu_sort..chunks..Chunk$GT$$GT$::h7ede764e698186a0(r15_4);
            *r15_4 = rax_4;
            var_c0 = 1;
            *(*var_c8.byte_offset(8)).byte_offset(0x18) = 0;
            core::ptr::drop_in_place$LT$binary_heap_plus..binary_heap..PeekMut$LT$uu_sort..merge..MergeableFile$C$uu_sort..merge..FileComparator$GT$$GT$::hf0db7d8e5ea22ad1(&var_c8);
        }
    }
    
    let rdi_7: *mut i64 = var_168;
    
    if rdi_7 != 0
    {
        let mut rbp_2: i64;
        rbp_2 = 1;
        let mut rax_8: i64;
        let mut rdx_2: *mut i128;
        rax_8 = alloc::rc::Rc$LT$T$C$A$GT$::try_unwrap::h35cd3ab5a059c06f(rdi_7);
        var_178 = rax_8;
        let var_170_1: *mut i128 = rdx_2;
        
        if rax_8 == 0
        {
            let rcx_3: i64 = uu_sort::chunks::Chunk::recycle::h5f1e538d67d10031(&var_c8, rdx_2);
            var_148 = rax;
            var_140_1 = var_c8;
            let var_b8: i128;
            var_130_1 = var_b8;
            let var_a8: i128;
            let var_120_1: i128 = var_a8;
            let var_98: i128;
            let var_110_1: i128 = var_98;
            let var_88: i128;
            let var_100_1: i128 = var_88;
            let var_78: i128;
            let var_f0_1: i128 = var_78;
            let var_68: i128;
            let var_e0_1: i128 = var_68;
            let var_58: i64;
            let var_d0_1: i64 = var_58;
            std::sync::mpmc::Sender$LT$T$GT$::send::h182581e942b1a4b7(&var_c8, arg1, &var_148, 
                rcx_3);
            
            if var_c0 != -0x8000000000000000
            {
                core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..sync..mpsc..SendError$LT$$LP$usize$C$uu_sort..chunks..RecycledChunk$RP$$GT$$GT$$GT$::h16ae8ac4e9019932(&var_c8);
            }
        }
        
        if rax_8 != 0 || var_178 != 0
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$uu_sort..chunks..Chunk$C$alloc..rc..Rc$LT$uu_sort..chunks..Chunk$GT$$GT$$GT$::hd45d81f964b4d346(&var_178);
        }
    }
    
    let mut result: i64;
    result = arg1[4] != 0;
    result
}
