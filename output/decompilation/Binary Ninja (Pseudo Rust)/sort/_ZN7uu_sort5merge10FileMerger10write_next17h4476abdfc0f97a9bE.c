
  fn uu_sort::merge::FileMerger::write_next::h4476abdfc0f97a9b(arg1: *mut i8, arg2: *mut i64, arg3: i64) -> i64

{
    let mut result: i64;
    
    if arg2[4] == 0
    {
        result = 0;
    }
    else
    {
        let r13_1: *mut i64 = arg2[3];
        alloc::rc::RcInnerPtr::inc_strong::h7130636f556f7f46(r13_1[2]);
        let rax: *mut c_void = r13_1[2];
        let zmm0: i128 = *r13_1.byte_offset(0x18);
        let rcx_1: *mut i64 = arg2[0xb];
        let mut var_178: i128 = *arg2.byte_offset(0x48);
        arg2[9] = rax;
        *arg2.byte_offset(0x50) = zmm0;
        let mut var_160: *mut i64 = r13_1;
        let mut var_158: i64 = arg3;
        let var_150_1: *mut i128 = &var_178;
        let rcx: i64;
        let var_148_1: i64 = rcx;
        let rax_1: *mut c_void = *rax.byte_offset(0x10);
        let rax_2: i64 =
            uu_sort::merge::FileMerger::write_next::_$u7b$$u7b$closure$u7d$$u7d$::h3fb3b0a5b3f3e85c(
            &var_160, *rax_1.byte_offset(0x20), *rax_1.byte_offset(0x28));
        
        if rax_2 != 0
        {
            *arg1.byte_offset(8) = rax_2;
            *arg1 = 1;
            return core::ptr::drop_in_place$LT$core..option..Option$LT$uu_sort..merge..PreviousLine$GT$$GT$::h58bd2c79d674c36d(&var_178);
        }
        
        let mut var_188: i64;
        let mut var_c8: i64;
        
        if *(*(r13_1[2] + 0x10)).byte_offset(0x28) != r13_1[3] + 1
        {
            if arg2[4] == 0
            {
                core::option::unwrap_failed::h893f57cb7db71cb7();
                /* no return */
            }
            
            let rax_8: *mut c_void = arg2[3];
            *rax_8.byte_offset(0x18) += 1;
            core::ptr::drop_in_place$LT$binary_heap_plus..binary_heap..PeekMut$LT$uu_sort..merge..MergeableFile$C$uu_sort..merge..FileComparator$GT$$GT$::hccd454b3c68f6b80(&arg2[2], 1);
        }
        else
        {
            r13_1[1];
            let rax_5: i64 = std::sync::mpmc::Receiver$LT$T$GT$::recv::h60814cb01a26dc76(*r13_1);
            var_188 = rax_5;
            
            if rax_5 == 0
            {
                core::ptr::drop_in_place$LT$core..result..Result$LT$uu_sort..chunks..Chunk$C$std..sync..mpsc..RecvError$GT$$GT$::h7ff86e8d0d3ee6b2(&var_188);
                binary_heap_plus::binary_heap::BinaryHeap$LT$T$C$C$GT$::pop::h873c7241d42d9a89(
                    &var_160, &arg2[2]);
                core::ptr::drop_in_place$LT$core..option..Option$LT$uu_sort..merge..MergeableFile$GT$$GT$::h297930a2d84fae45(&var_160);
            }
            else
            {
                var_c8 = rax_5;
                
                if arg2[4] == 0
                {
                    core::option::unwrap_failed::h893f57cb7db71cb7();
                    /* no return */
                }
                
                var_160 = 1;
                var_158 = 1;
                let var_150_2: i64 = rax_5;
                let rax_6: u64 = alloc::boxed::Box$LT$T$GT$::new::h380512f813d0cda3(&var_160);
                let r13_3: *mut u64 = arg2[3] + 0x10;
                core::ptr::drop_in_place$LT$alloc..rc..Rc$LT$uu_sort..chunks..Chunk$GT$$GT$::h55706b2d7e48326d(r13_3);
                *r13_3 = rax_6;
                *(arg2[3] + 0x18) = 0;
                core::ptr::drop_in_place$LT$binary_heap_plus..binary_heap..PeekMut$LT$uu_sort..merge..MergeableFile$C$uu_sort..merge..FileComparator$GT$$GT$::hccd454b3c68f6b80(&arg2[2], 1);
            }
        }
        
        let rdi_11: *mut i64 = var_178;
        
        if rdi_11 != 0
        {
            let mut rax_9: i64;
            let mut rdx_1: *mut i128;
            rax_9 = alloc::rc::Rc$LT$T$C$A$GT$::try_unwrap::hc6e69539fca139c0(rdi_11);
            var_188 = rax_9;
            let var_180_1: *mut i128 = rdx_1;
            
            if (rax_9 & 1) == 0
            {
                uu_sort::chunks::Chunk::recycle::h028cbe8b563e97c5(&var_158, rdx_1);
                var_160 = rcx_1;
                std::sync::mpmc::Sender$LT$T$GT$::send::h3b2f74fb04f1ee0c(&var_c8, *arg2, arg2[1], 
                    &var_160);
                let var_c0: i64;
                
                if !(0 + -(var_c0))
                {
                    core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..sync..mpsc..SendError$LT$$LP$usize$C$uu_sort..chunks..RecycledChunk$RP$$GT$$GT$$GT$::h365d1a9066ded07e(&var_c8);
                }
            }
            
            if (rax_9 & 1) != 0 || (var_188 & 1) != 0
            {
                let mut rbp_2: i64;
                rbp_2 = 1;
                core::ptr::drop_in_place$LT$core..result..Result$LT$uu_sort..chunks..Chunk$C$alloc..rc..Rc$LT$uu_sort..chunks..Chunk$GT$$GT$$GT$::hce4b32ee674dd580(&var_188);
            }
        }
        
        result = arg2[4];
    }
    
    arg1[1] = result != 0;
    *arg1 = 0;
    result
}
