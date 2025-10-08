
  int64_t uu_head::take::copy_all_but_n_bytes::h91484b8a539ab948(int32_t* arg1, int64_t* arg2, int64_t arg3)

{
    int64_t var_50 = 0;
    int128_t var_40 = {0};
    int64_t var_48 = 8;
    int64_t var_d0 = 0;
    int64_t* var_c8 = 8;
    int64_t var_c0 = 0;
    int64_t* r13 = 8;
    int64_t r15 = 0;
    int64_t var_98 = 0;
    int64_t r12 = 0;
    int64_t result;
    
    while (true)
    {
        void* rax_1 =
            alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::get::hcfbc0b54fcac4b80(&var_50);
        int64_t rax_3;
        
        if (rax_1)
            rax_3 = uu_head::take::TakeAllBuffer::remaining_bytes::hb388a4c93e1b9bcb(rax_1) + arg3;
        
        int64_t var_b8;
        int128_t var_a8;
        int128_t var_88;
        int64_t var_78;
        
        if (!rax_1 || r12 < rax_3)
        {
            int64_t var_b0;
            int64_t rax_4;
            
            if (!r15)
            {
                var_b0 = 1;
                var_a8 = {0};
                rax_4 = 0;
                r15 = 0;
            }
            else
            {
                r15 -= 1;
                int64_t rcx_2 = r15 << 5;
                rax_4 = *(r13 + rcx_2);
                int128_t zmm0 = *(r13 + rcx_2 + 8);
                int64_t rcx_3 = *(r13 + rcx_2 + 0x18);
                var_78 = rcx_3;
                var_88 = zmm0;
                *var_a8[8] = rcx_3;
                var_b0 = zmm0;
            }
            
            var_b8 = rax_4;
            char rax_5;
            int64_t rdx;
            rax_5 = uu_head::take::TakeAllBuffer::fill_buffer::hf61126089cbcf29e(&var_b8, arg1);
            
            if (rax_5 & 1)
            {
                int64_t var_c0_2 = r15;
                core::ptr::drop_in_place$LT$std..sys..os_str..bytes..Buf$GT$::he4bde5d3b504ae9d(
                    var_b8, var_b0);
                result = 1;
                break;
            }
            
            if (!rdx)
                core::ptr::drop_in_place$LT$std..sys..os_str..bytes..Buf$GT$::he4bde5d3b504ae9d(
                    var_b8, var_b0);
            else
            {
                var_78 = var_a8;
                var_88 = var_b8;
                alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::push_back::hc3973d42ceccac54(
                    &var_50, &var_88);
                r12 += rdx;
                continue;
            }
        }
        
        if (r12 <= arg3)
            result = 0;
        else
        {
            void* rax_6 =
                alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::get::hcfbc0b54fcac4b80(
                &var_50);
            
            if (!rax_6)
            {
                int64_t var_c0_4 = r15;
                core::option::unwrap_failed::h893f57cb7db71cb7();
                /* no return */
            }
            
            char rax_7;
            int64_t rdx_2;
            rax_7 = uu_head::take::TakeAllBuffer::write_bytes_limit::h60c53a9a38fb6265(rax_6, arg2, 
                r12 - arg3);
            
            if (!(rax_7 & 1))
            {
                var_98 += rdx_2;
                r12 -= rdx_2;
                
                if (!uu_head::take::TakeAllBuffer::is_empty::hbeb234606ca195c1(*(rax_6 + 0x10), 
                        *(rax_6 + 0x18)))
                    continue;
                else
                {
                    alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::pop_front::hcb277b723d479f3b(&var_88, &var_50);
                    
                    if (!(0 + -(var_88)))
                    {
                        var_a8 = var_78;
                        var_b8 = var_88;
                        alloc::vec::Vec$LT$T$C$A$GT$::push::ha8e9ce4204a5d833(&var_d0, &var_b8);
                        r13 = var_c8;
                        continue;
                    }
                }
                
                core::option::unwrap_failed::h893f57cb7db71cb7();
                /* no return */
            }
            
            result = 1;
        }
        
        int64_t var_c0_3 = r15;
        break;
    }
    
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_head..take..TakeAllBuffer$GT$$GT$::h76449acd591f3a78(&var_d0);
    core::ptr::drop_in_place$LT$alloc..collections..vec_deque..VecDeque$LT$uu_head..take..TakeAllBuffer$GT$$GT$::h0a9a88a05ab26223(&var_50);
    return result;
}
