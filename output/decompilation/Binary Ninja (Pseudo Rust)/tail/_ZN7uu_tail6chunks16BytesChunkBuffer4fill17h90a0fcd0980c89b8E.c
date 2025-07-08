
  fn uu_tail::chunks::BytesChunkBuffer::fill::h90a0fcd0980c89b8(arg1: *mut i64, arg2: *mut i64) -> i64

{
    let var_1030: i64 = 0;
    let mut var_2030: i64 = 0;
    let var_3030: i64 = 0;
    let result: i64 = 0;
    let rax: i64;
    let mut var_4038: i64 = rax;
    memset(&var_2030, 0, 0x2000);
    memset(&var_4038, 0, 0x2008);
    let mut r14: *mut i8 = alloc::boxed::Box$LT$T$GT$::new::h5d3de1da27eb11e8(&var_4038);
    
    loop
    {
        uu_tail::chunks::BytesChunk::fill::h4a717c5d739984d3(&var_4038, r14, arg2);
        
        if var_4038 != 0
        {
            core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$uu_tail..chunks..BytesChunk$GT$$GT$::h186d7d501d28deee(r14);
            return result;
        }
        
        if result == 0
        {
            if arg1[3] != 0
            {
                let rax_9: *mut i64 = alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::pop_front::hf015bc98e843c630(arg1);
                
                if rax_9 == 0
                {
                    core::option::unwrap_failed::h0e11329e76906eaa();
                    /* no return */
                }
                
                let rax_10: i64 = arg1[5];
                let mut rdx_5: i64 = 0;
                
                if rax_10 >= arg1[4]
                {
                    rdx_5 = rax_10 - arg1[4];
                }
                
                uu_tail::chunks::BytesChunk::from_chunk::hb6067992a01f279a(&var_4038, rax_9, rdx_5);
                alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::push_front::hc9231dd819dfa519(
                    arg1, alloc::boxed::Box$LT$T$GT$::new::h5d3de1da27eb11e8(&var_4038));
                core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$uu_tail..chunks..BytesChunk$GT$$GT$::h186d7d501d28deee(rax_9);
            }
            
            core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$uu_tail..chunks..BytesChunk$GT$$GT$::h186d7d501d28deee(r14);
            return 0;
        }
        
        arg1[5] += *r14.byte_offset(0x2000);
        alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::push_back::h04022e2c2745389e(arg1, 
            r14);
        
        if arg1[3] == 0
        {
            core::option::expect_failed::h9e03a1f6ff88dbcf("Out of bounds access");
            /* no return */
        }
        
        let rax_4: i64 = arg1[2];
        let rcx_1: i64 = *arg1;
        let mut rdx_2: i64 = 0;
        
        if rax_4 >= rcx_1
        {
            rdx_2 = rcx_1;
        }
        
        if arg1[5] - *(*(arg1[1] + ((rax_4 - rdx_2) << 3))).byte_offset(0x2000) <= arg1[4]
        {
            memcpy(&var_4038, &var_2030, 0x2000);
            let var_2038_1: i64 = 0;
            r14 = alloc::boxed::Box$LT$T$GT$::new::h5d3de1da27eb11e8(&var_4038);
        }
        else
        {
            let rax_7: *mut i8 =
                alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::pop_front::hf015bc98e843c630(
                arg1);
            
            if rax_7 == 0
            {
                break;
            }
            
            r14 = rax_7;
            arg1[5] -= *rax_7.byte_offset(0x2000);
        }
    }
    
    core::option::unwrap_failed::h0e11329e76906eaa();
    /* no return */
}
