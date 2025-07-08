
  int64_t uu_tail::chunks::BytesChunkBuffer::fill::h90a0fcd0980c89b8(int64_t* arg1, int64_t* arg2)

{
    int64_t var_1030 = 0;
    int64_t var_2030 = 0;
    int64_t var_3030 = 0;
    int64_t result = 0;
    int64_t rax;
    int64_t var_4038 = rax;
    memset(&var_2030, 0, 0x2000);
    memset(&var_4038, 0, 0x2008);
    char* r14 = alloc::boxed::Box$LT$T$GT$::new::h5d3de1da27eb11e8(&var_4038);
    
    while (true)
    {
        uu_tail::chunks::BytesChunk::fill::h4a717c5d739984d3(&var_4038, r14, arg2);
        
        if (var_4038)
        {
            core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$uu_tail..chunks..BytesChunk$GT$$GT$::h186d7d501d28deee(r14);
            return result;
        }
        
        if (!result)
        {
            if (arg1[3])
            {
                int64_t* rax_9 = alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::pop_front::hf015bc98e843c630(arg1);
                
                if (!rax_9)
                {
                    core::option::unwrap_failed::h0e11329e76906eaa();
                    /* no return */
                }
                
                int64_t rax_10 = arg1[5];
                int64_t rdx_5 = 0;
                
                if (rax_10 >= arg1[4])
                    rdx_5 = rax_10 - arg1[4];
                
                uu_tail::chunks::BytesChunk::from_chunk::hb6067992a01f279a(&var_4038, rax_9, rdx_5);
                alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::push_front::hc9231dd819dfa519(
                    arg1, alloc::boxed::Box$LT$T$GT$::new::h5d3de1da27eb11e8(&var_4038));
                core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$uu_tail..chunks..BytesChunk$GT$$GT$::h186d7d501d28deee(rax_9);
            }
            
            core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$uu_tail..chunks..BytesChunk$GT$$GT$::h186d7d501d28deee(r14);
            return 0;
        }
        
        arg1[5] += *(r14 + 0x2000);
        alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::push_back::h04022e2c2745389e(arg1, 
            r14);
        
        if (!arg1[3])
        {
            core::option::expect_failed::h9e03a1f6ff88dbcf("Out of bounds access");
            /* no return */
        }
        
        int64_t rax_4 = arg1[2];
        int64_t rcx_1 = *arg1;
        int64_t rdx_2 = 0;
        
        if (rax_4 >= rcx_1)
            rdx_2 = rcx_1;
        
        if (arg1[5] - *(*(arg1[1] + ((rax_4 - rdx_2) << 3)) + 0x2000) <= arg1[4])
        {
            memcpy(&var_4038, &var_2030, 0x2000);
            int64_t var_2038_1 = 0;
            r14 = alloc::boxed::Box$LT$T$GT$::new::h5d3de1da27eb11e8(&var_4038);
        }
        else
        {
            char* rax_7 =
                alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::pop_front::hf015bc98e843c630(
                arg1);
            
            if (!rax_7)
                break;
            
            r14 = rax_7;
            arg1[5] -= *(rax_7 + 0x2000);
        }
    }
    
    core::option::unwrap_failed::h0e11329e76906eaa();
    /* no return */
}
