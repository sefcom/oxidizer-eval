
  int64_t uu_tail::chunks::BytesChunkBuffer::fill::h51396c7e915880cc(int64_t* arg1, int64_t* arg2)

{
    int64_t var_1030 = 0;
    int64_t var_2030 = 0;
    int64_t var_3030 = 0;
    int64_t result = 0;
    int64_t rax;
    int64_t var_4038 = rax;
    memset(&var_2030, 0, 0x2000);
    memset(&var_4038, 0, 0x2008);
    char* rbx = alloc::boxed::Box$LT$T$GT$::new::h958a01d6c3ae3733(&var_4038);
    
    while (true)
    {
        uu_tail::chunks::BytesChunk::fill::hab8028dceae793ac(&var_4038, rbx, arg2);
        
        if (var_4038 == 1)
        {
            core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$uu_tail..chunks..BytesChunk$GT$$GT$::hb5d926151bf464c4(rbx);
            return result;
        }
        
        if (!result)
        {
            if (arg1[3])
            {
                int64_t* rax_8 = alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::pop_front::hd5b4041d930bbd14(arg1);
                
                if (!rax_8)
                {
                    core::option::unwrap_failed::h893f57cb7db71cb7();
                    /* no return */
                }
                
                int64_t rax_9 = arg1[5];
                int64_t rdx_2 = 0;
                
                if (rax_9 >= arg1[4])
                    rdx_2 = rax_9 - arg1[4];
                
                uu_tail::chunks::BytesChunk::from_chunk::hf1adf92578b17e1c(&var_4038, rax_8, rdx_2);
                alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::push_front::hc8a1db566e4d6108(
                    arg1, alloc::boxed::Box$LT$T$GT$::new::h958a01d6c3ae3733(&var_4038));
                core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$uu_tail..chunks..BytesChunk$GT$$GT$::hb5d926151bf464c4(rax_8);
            }
            
            core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$uu_tail..chunks..BytesChunk$GT$$GT$::hb5d926151bf464c4(rbx);
            return 0;
        }
        
        arg1[5] += *(rbx + 0x2000);
        alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::push_back::h0beb4a69f6ee6b50(arg1, 
            rbx);
        int64_t* rax_4 =
            alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::get::h5243bf9f45df5514(arg1);
        
        if (!rax_4)
        {
            core::option::expect_failed::h3f620cfb8545dc61("Out of bounds accesssrc/uu/tail/…");
            /* no return */
        }
        
        if (arg1[5] - *(*rax_4 + 0x2000) <= arg1[4])
        {
            memcpy(&var_4038, &var_2030, 0x2000);
            int64_t var_2038_1 = 0;
            rbx = alloc::boxed::Box$LT$T$GT$::new::h958a01d6c3ae3733(&var_4038);
        }
        else
        {
            char* rax_6 =
                alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::pop_front::hd5b4041d930bbd14(
                arg1);
            
            if (!rax_6)
                break;
            
            rbx = rax_6;
            arg1[5] -= *(rax_6 + 0x2000);
        }
    }
    
    core::option::unwrap_failed::h893f57cb7db71cb7();
    /* no return */
}
