
  int64_t uu_tail::chunks::LinesChunkBuffer::fill::h58244c51965137fa(int64_t* arg1, int64_t* arg2)

{
    int64_t var_1030 = 0;
    int64_t var_2030 = 0;
    int64_t var_3030 = 0;
    int64_t var_4030 = 0;
    int64_t var_5030 = 0;
    int64_t var_6030 = 0;
    char rbx = arg1[6];
    memset(&var_2030, 0, 0x2000);
    int32_t var_6060;
    memset(&var_6060, 0, 0x2010);
    char var_4050 = rbx;
    char* rbx_1 = alloc::boxed::Box$LT$T$GT$::new::h82a98b3c862552f0(&var_6060);
    
    while (true)
    {
        uu_tail::chunks::LinesChunk::fill::h8372a98993d49080(&var_6060, rbx_1, arg2);
        int64_t result;
        
        if (var_6060 == 1)
        {
            core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$uu_tail..chunks..LinesChunk$GT$$GT$::h474ceeda76e59e5d(rbx_1);
            return result;
        }
        
        if (!result)
        {
            int64_t rsi_3 = arg1[3];
            
            if (rsi_3)
            {
                int64_t* rax_7 = alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::get_mut::hf762308d8975c277(arg1, rsi_3 - 1);
                
                if (!rax_7)
                {
                    core::option::expect_failed::h3f620cfb8545dc61(
                        "Out of bounds accesssrc/uu/tail/…");
                    /* no return */
                }
                
                int64_t rax_8;
                int64_t rdx_2;
                rax_8 = uu_tail::chunks::LinesChunk::get_buffer::h12c5d003f1f481a3(*rax_7);
                var_6060 = arg1[6];
                
                if (!core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::ends_with::h6cb95a248a5db6d2(
                    rax_8, rdx_2, &var_6060))
                {
                    void* rax_10 = *rax_7;
                    *(rax_10 + 0x2008) += 1;
                    arg1[4] += 1;
                }
                
                int64_t* rax_11;
                int64_t rcx_4;
                int64_t rsi_6;
                
                while (true)
                {
                    rax_11 = alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::pop_front::hd5b4041d930bbd14(arg1);
                    
                    if (!rax_11)
                    {
                        core::option::unwrap_failed::h893f57cb7db71cb7();
                        /* no return */
                    }
                    
                    rcx_4 = arg1[4];
                    rsi_6 = arg1[5];
                    int64_t rdx_5 = rcx_4 - rax_11[0x401];
                    
                    if (rdx_5 <= rsi_6)
                        break;
                    
                    arg1[4] = rdx_5;
                    core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$uu_tail..chunks..LinesChunk$GT$$GT$::h474ceeda76e59e5d(rax_11);
                }
                
                int64_t rdx_6 = 0;
                
                if (rcx_4 >= rsi_6)
                    rdx_6 = rcx_4 - rsi_6;
                
                void var_4048;
                uu_tail::chunks::LinesChunk::from_chunk::h9998bcc032f5fdde(&var_4048, rax_11, 
                    rdx_6);
                alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::push_front::hfd9a2cbb18528385(
                    arg1, alloc::boxed::Box$LT$T$GT$::new::h82a98b3c862552f0(&var_4048));
                core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$uu_tail..chunks..LinesChunk$GT$$GT$::h474ceeda76e59e5d(rax_11);
            }
            
            core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$uu_tail..chunks..LinesChunk$GT$$GT$::h474ceeda76e59e5d(rbx_1);
            return 0;
        }
        
        arg1[4] += *(rbx_1 + 0x2008);
        alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::push_back::h4f6adea6ad81cf89(arg1, 
            rbx_1);
        int64_t* rax_3 =
            alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::get::h5243bf9f45df5514(arg1);
        
        if (!rax_3)
        {
            core::option::expect_failed::h3f620cfb8545dc61("Out of bounds accesssrc/uu/tail/…");
            /* no return */
        }
        
        if (arg1[4] - *(*rax_3 + 0x2008) <= arg1[5])
        {
            char rbx_2 = arg1[6];
            memcpy(&var_6060, &var_2030, 0x2000);
            int128_t var_4060_1 = {0};
            char var_4050_1 = rbx_2;
            rbx_1 = alloc::boxed::Box$LT$T$GT$::new::h82a98b3c862552f0(&var_6060);
        }
        else
        {
            char* rax_5 =
                alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::pop_front::hd5b4041d930bbd14(
                arg1);
            
            if (!rax_5)
                break;
            
            rbx_1 = rax_5;
            arg1[4] -= *(rax_5 + 0x2008);
        }
    }
    
    core::option::unwrap_failed::h893f57cb7db71cb7();
    /* no return */
}
