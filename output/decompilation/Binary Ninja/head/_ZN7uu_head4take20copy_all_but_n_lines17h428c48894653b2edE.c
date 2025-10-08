
  int64_t uu_head::take::copy_all_but_n_lines::h428c48894653b2ed(int32_t* arg1, int64_t* arg2, int64_t arg3, char arg4)

{
    int64_t r15 = arg3;
    int32_t* r13 = arg1;
    int64_t var_a8 = 0;
    int128_t var_98 = {0};
    int64_t var_a0 = 8;
    int64_t var_f0 = 0;
    int64_t* var_e8 = 8;
    int64_t var_e0 = 0;
    int64_t* r14 = 8;
    int64_t rbp = 0;
    int64_t* rdi = &var_a8;
    int64_t var_50 = 0;
    int64_t r12 = 0;
    int32_t* var_48 = r13;
    int64_t result;
    
    while (true)
    {
        void* rax_1 =
            alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::get::h5a5c158ece1d5465(rdi, 0);
        int128_t var_d8;
        int128_t s_1;
        int64_t var_b8;
        int64_t var_88;
        int128_t s;
        int128_t var_6f;
        
        if (!rax_1 || r12 <= *(rax_1 + 0x20) + r15)
        {
            int64_t var_80;
            
            if (!rbp)
            {
                rbp = 0;
                label_466292:
                var_88 = 0;
                var_80 = 1;
                __builtin_memset(&s, 0, 0x19);
            }
            else
            {
                rbp -= 1;
                int64_t rcx_2 = rbp * 0x30;
                int64_t rax_4 = *(r14 + rcx_2);
                var_b8 = *(r14 + rcx_2 + 0x28);
                s_1 = *(r14 + rcx_2 + 0x18);
                var_d8 = *(r14 + rcx_2 + 8);
                
                if (rax_4 == -0x8000000000000000)
                    goto label_466292;
                
                *var_6f[0xf] = var_b8;
                int128_t zmm0 = var_d8;
                s = s_1;
                var_80 = zmm0;
                var_88 = rax_4;
            }
            
            uu_head::take::TakeAllLinesBuffer::fill_buffer::hfa940c1c6239deab(&var_d8, &var_88, 
                r13, arg4);
            
            if (var_d8 == 1)
            {
                int64_t var_e0_2 = rbp;
                core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h8a37dd0e9d5ea0f7(
                    var_88, var_80);
                label_466495:
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_head..take..TakeAllLinesBuffer$GT$$GT$::h290366c11b9828a1(&var_f0);
                core::ptr::drop_in_place$LT$alloc..collections..vec_deque..VecDeque$LT$uu_head..take..TakeAllLinesBuffer$GT$$GT$::h12acd9d2762baf7e(&var_a8);
                result = 1;
                break;
                break;
            }
            
            if (!*var_d8[8])
                core::ptr::drop_in_place$LT$std..ffi..os_str..OsString$GT$::h8a37dd0e9d5ea0f7(
                    var_88, var_80);
            else
            {
                int64_t rbx_1 = s_1;
                var_b8 = var_6f;
                s_1 = s;
                var_d8 = var_88;
                alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::push_back::hb88475b5b5e73838(
                    &var_a8, &var_d8);
                r12 += rbx_1;
                rdi = &var_a8;
                continue;
            }
        }
        
        if (r12 < r15)
        {
            label_4664be:
            int64_t var_e0_3 = rbp;
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_head..take..TakeAllLinesBuffer$GT$$GT$::h290366c11b9828a1(&var_f0);
            core::ptr::drop_in_place$LT$alloc..collections..vec_deque..VecDeque$LT$uu_head..take..TakeAllLinesBuffer$GT$$GT$::h12acd9d2762baf7e(&var_a8);
            result = 0;
            break;
        }
        
        if (r12 != r15)
        {
            label_466372:
            void* rax_6 =
                alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::get::h5a5c158ece1d5465(
                &var_a8, *var_98[8] - 1);
            
            if (rax_6)
            {
                void* rax_7 = alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::get_mut::hd6f6500ac1b3986d(&var_a8);
                
                if (rax_7)
                {
                    uu_head::take::TakeAllLinesBuffer::write_lines::hf88d8b4ac800ff57(&var_d8, 
                        rax_7, arg2, r12 - r15 + *(rax_6 + 0x28), arg4);
                    
                    if (var_d8 & 1)
                    {
                        int64_t var_e0_4 = rbp;
                        goto label_466495;
                    }
                    
                    var_50 += *var_d8[8];
                    r12 -= s_1;
                    r15 = arg3;
                    r13 = var_48;
                    rdi = &var_a8;
                    
                    if (!uu_head::take::TakeAllLinesBuffer::is_empty::hb5e5799055f3f758(
                            *(rax_7 + 0x10), *(rax_7 + 0x18)))
                        continue;
                    else
                    {
                        alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::pop_front::h299678ec2b4397c3(&var_d8, &var_a8);
                        
                        if (var_d8 != -0x8000000000000000)
                        {
                            int128_t zmm0_2 = var_d8;
                            var_6f = var_b8;
                            s = s_1;
                            var_88 = zmm0_2;
                            alloc::vec::Vec$LT$T$C$A$GT$::push::h476a1d2b2c01abc7(&var_f0, &var_88);
                            r14 = var_e8;
                            rdi = &var_a8;
                            continue;
                        }
                    }
                    
                    core::option::unwrap_failed::h893f57cb7db71cb7();
                    /* no return */
                }
            }
        }
        else
        {
            void* rax_5 =
                alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::get::h5a5c158ece1d5465(
                &var_a8, *var_98[8] - 1);
            
            if (rax_5)
            {
                if (!*(rax_5 + 0x28))
                    goto label_4664be;
                
                goto label_466372;
            }
        }
        
        int64_t var_e0_5 = rbp;
        core::option::unwrap_failed::h893f57cb7db71cb7();
        /* no return */
    }
    
    return result;
}
