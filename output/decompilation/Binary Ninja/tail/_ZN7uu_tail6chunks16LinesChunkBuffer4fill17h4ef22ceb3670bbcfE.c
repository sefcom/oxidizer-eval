
  int64_t uu_tail::chunks::LinesChunkBuffer::fill::h4ef22ceb3670bbcf(int64_t* arg1, int64_t* arg2)

{
    int64_t var_1030 = 0;
    int64_t var_2030 = 0;
    int64_t var_3030 = 0;
    int64_t var_4030 = 0;
    int64_t var_5030 = 0;
    int64_t var_6030 = 0;
    char r14 = arg1[6];
    void var_4048;
    memset(&var_4048, 0, 0x2000);
    int64_t var_6060;
    memset(&var_6060, 0, 0x2010);
    
    while (true)
    {
        char var_4050_1 = r14;
        char* r14_1 = alloc::boxed::Box$LT$T$GT$::new::h0dcddc7dafab587c(&var_6060);
        
        while (true)
        {
            uu_tail::chunks::LinesChunk::fill::h3991e50112e32b1d(&var_6060, r14_1, arg2);
            int64_t result_1;
            int64_t result = result_1;
            
            if (!var_6060)
            {
                if (result != 1)
                {
                    int64_t rax_8 = arg1[3];
                    
                    if (rax_8)
                    {
                        int64_t r12_2 = rax_8 + arg1[2] - 1;
                        int64_t rax_9 = *arg1;
                        int64_t r13_1 = arg1[1];
                        int64_t rcx_4 = 0;
                        
                        if (r12_2 >= rax_9)
                            rcx_4 = rax_9;
                        
                        int64_t r12_3 = r12_2 - rcx_4;
                        int64_t rax_10;
                        int64_t rdx_5;
                        rax_10 = uu_tail::chunks::LinesChunk::get_buffer::h4eee912e7ef2e0db(
                            *(r13_1 + (r12_3 << 3)));
                        var_6060 = arg1[6];
                        
                        if (!core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::ends_with::hfbf0ee6efda818af(rax_10, rdx_5, &var_6060, 1))
                        {
                            void* rax_12 = *(r13_1 + (r12_3 << 3));
                            *(rax_12 + 0x2008) += 1;
                            arg1[4] += 1;
                        }
                        
                        void* rax_13;
                        int64_t rcx_6;
                        int64_t rsi_4;
                        
                        while (true)
                        {
                            rax_13 = alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::pop_front::heecc59ff273f6cc6(arg1);
                            
                            if (!rax_13)
                            {
                                core::option::unwrap_failed::h0e11329e76906eaa();
                                /* no return */
                            }
                            
                            rcx_6 = arg1[4];
                            rsi_4 = arg1[5];
                            int64_t rdx_8 = rcx_6 - *(rax_13 + 0x2008);
                            
                            if (rdx_8 <= rsi_4)
                                break;
                            
                            arg1[4] = rdx_8;
                            core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$uu_tail..chunks..LinesChunk$GT$$GT$::h0acdc40ea758a305(rax_13);
                        }
                        
                        int64_t rdx_9 = 0;
                        
                        if (rcx_6 >= rsi_4)
                            rdx_9 = rcx_6 - rsi_4;
                        
                        void var_2048;
                        uu_tail::chunks::LinesChunk::from_chunk::h92082d78e298c7e3(&var_2048, 
                            rax_13, rdx_9);
                        alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::push_front::h9b636fbd45ca32a9(arg1, alloc::boxed::Box$LT$T$GT$::new::h0dcddc7dafab587c(&var_2048));
                        core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$uu_tail..chunks..LinesChunk$GT$$GT$::h0acdc40ea758a305(rax_13);
                        core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$uu_tail..chunks..LinesChunk$GT$$GT$::h0acdc40ea758a305(r14_1);
                        return 0;
                    }
                    
                    result = 0;
                }
                else
                {
                    arg1[4] += *(r14_1 + 0x2008);
                    alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::push_back::ha09b0b9d3d64f9d9(arg1, r14_1);
                    
                    if (!arg1[3])
                    {
                        core::option::expect_failed::h9e03a1f6ff88dbcf("Out of bounds access");
                        /* no return */
                    }
                    
                    int64_t rax_3 = arg1[2];
                    int64_t rcx_1 = *arg1;
                    int64_t rdx_2 = 0;
                    
                    if (rax_3 >= rcx_1)
                        rdx_2 = rcx_1;
                    
                    if (arg1[4] - *(*(arg1[1] + ((rax_3 - rdx_2) << 3)) + 0x2008) <= arg1[5])
                    {
                        r14 = arg1[6];
                        memcpy(&var_6060, &var_4048, 0x2000);
                        int128_t var_4060_1 = {0};
                        break;
                    }
                    
                    char* rax_6 = alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::pop_front::heecc59ff273f6cc6(arg1);
                    
                    if (!rax_6)
                    {
                        core::option::unwrap_failed::h0e11329e76906eaa();
                        /* no return */
                    }
                    
                    r14_1 = rax_6;
                    arg1[4] -= *(rax_6 + 0x2008);
                    continue;
                }
            }
            
            core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$uu_tail..chunks..LinesChunk$GT$$GT$::h0acdc40ea758a305(r14_1);
            return result;
        }
    }
}
