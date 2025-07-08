
  fn uu_tail::chunks::LinesChunkBuffer::fill::h4ef22ceb3670bbcf(arg1: *mut i64, arg2: *mut i64) -> i64

{
    let var_1030: i64 = 0;
    let var_2030: i64 = 0;
    let var_3030: i64 = 0;
    let var_4030: i64 = 0;
    let var_5030: i64 = 0;
    let var_6030: i64 = 0;
    let mut r14: i8 = arg1[6];
    let mut var_4048: ();
    memset(&var_4048, 0, 0x2000);
    let mut var_6060: i64;
    memset(&var_6060, 0, 0x2010);
    
    loop
    {
        let var_4050_1: i8 = r14;
        let mut r14_1: *mut i8 = alloc::boxed::Box$LT$T$GT$::new::h0dcddc7dafab587c(&var_6060);
        
        loop
        {
            uu_tail::chunks::LinesChunk::fill::h3991e50112e32b1d(&var_6060, r14_1, arg2);
            let result_1: i64;
            let mut result: i64 = result_1;
            
            if var_6060 == 0
            {
                if result != 1
                {
                    let rax_8: i64 = arg1[3];
                    
                    if rax_8 != 0
                    {
                        let r12_2: i64 = rax_8 + arg1[2] - 1;
                        let rax_9: i64 = *arg1;
                        let r13_1: i64 = arg1[1];
                        let mut rcx_4: i64 = 0;
                        
                        if r12_2 >= rax_9
                        {
                            rcx_4 = rax_9;
                        }
                        
                        let r12_3: i64 = r12_2 - rcx_4;
                        let mut rax_10: i64;
                        let mut rdx_5: i64;
                        rax_10 = uu_tail::chunks::LinesChunk::get_buffer::h4eee912e7ef2e0db(
                            *(r13_1 + (r12_3 << 3)));
                        var_6060 = arg1[6];
                        
                        if core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::ends_with::hfbf0ee6efda818af(
                            rax_10, rdx_5, &var_6060, 1) == 0
                        {
                            let rax_12: *mut c_void = *(r13_1 + (r12_3 << 3));
                            *rax_12.byte_offset(0x2008) += 1;
                            arg1[4] += 1;
                        }
                        
                        let mut rax_13: *mut c_void;
                        let mut rcx_6: i64;
                        let mut rsi_4: i64;
                        
                        loop
                        {
                            rax_13 = alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::pop_front::heecc59ff273f6cc6(arg1);
                            
                            if rax_13 == 0
                            {
                                core::option::unwrap_failed::h0e11329e76906eaa();
                                /* no return */
                            }
                            
                            rcx_6 = arg1[4];
                            rsi_4 = arg1[5];
                            let rdx_8: i64 = rcx_6 - *rax_13.byte_offset(0x2008);
                            
                            if rdx_8 <= rsi_4
                            {
                                break;
                            }
                            
                            arg1[4] = rdx_8;
                            core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$uu_tail..chunks..LinesChunk$GT$$GT$::h0acdc40ea758a305(rax_13);
                        }
                        
                        let mut rdx_9: i64 = 0;
                        
                        if rcx_6 >= rsi_4
                        {
                            rdx_9 = rcx_6 - rsi_4;
                        }
                        
                        let mut var_2048: ();
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
                    arg1[4] += *r14_1.byte_offset(0x2008);
                    alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::push_back::ha09b0b9d3d64f9d9(arg1, r14_1);
                    
                    if arg1[3] == 0
                    {
                        core::option::expect_failed::h9e03a1f6ff88dbcf("Out of bounds access");
                        /* no return */
                    }
                    
                    let rax_3: i64 = arg1[2];
                    let rcx_1: i64 = *arg1;
                    let mut rdx_2: i64 = 0;
                    
                    if rax_3 >= rcx_1
                    {
                        rdx_2 = rcx_1;
                    }
                    
                    if arg1[4] - *(*(arg1[1] + ((rax_3 - rdx_2) << 3))).byte_offset(0x2008)
                        <= arg1[5]
                    {
                        r14 = arg1[6];
                        memcpy(&var_6060, &var_4048, 0x2000);
                        let var_4060_1: i128 = {0};
                        break;
                    }
                    
                    let rax_6: *mut i8 = alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::pop_front::heecc59ff273f6cc6(arg1);
                    
                    if rax_6 == 0
                    {
                        core::option::unwrap_failed::h0e11329e76906eaa();
                        /* no return */
                    }
                    
                    r14_1 = rax_6;
                    arg1[4] -= *rax_6.byte_offset(0x2008);
                    continue;
                }
            }
            
            core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$uu_tail..chunks..LinesChunk$GT$$GT$::h0acdc40ea758a305(r14_1);
            return result;
        }
    }
}
