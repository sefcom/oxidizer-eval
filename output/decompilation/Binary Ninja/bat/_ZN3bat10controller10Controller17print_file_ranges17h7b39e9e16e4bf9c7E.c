
  int64_t bat::controller::Controller::print_file_ranges::h7b39e9e16e4bf9c7(char* arg1, void* arg2, int64_t arg3, int64_t arg4, int64_t arg5, int64_t arg6, int64_t arg7 @ r13, void* arg8, void* arg9)

{
    int64_t var_20 = arg7;
    int64_t var_e8 = 0;
    int64_t var_e0 = 1;
    int64_t var_d8 = 0;
    int64_t r12_1 = *(arg9 + 0x28) + 1;
    int64_t rax_1;
    int64_t rdx;
    rax_1 =
        alloc::raw_vec::RawVecInner$LT$A$GT$::with_capacity_in::h2ab28548f23fa4ab(r12_1, 8, 0x20);
    int128_t var_48 = {0};
    int64_t var_58 = rax_1;
    int64_t var_50 = rdx;
    int32_t rax_2 = bat::style::StyleComponents::snip::he74b3e7bba828b6e(arg2 + 0xc0);
    char var_112 = rax_2;
    rax_2 ^= 1;
    char var_111 = rax_2;
    rax_2 = 1;
    int32_t var_104 = rax_2;
    uint64_t var_f0 = 0;
    int64_t rbx_2 = 0;
    char r15 = 0;
    int64_t rbp = 1;
    
    while (true)
    {
        if (!(r15 & 1))
        {
            char var_b8;
            bat::input::InputReader::read_line::h6988384c287f514e(&var_b8, arg8, &var_e8);
            int64_t var_b0;
            
            if (var_b8 == 1)
            {
                *arg1 = 0;
                *(arg1 + 8) = var_b0;
                break;
            }
            
            char var_b7;
            int64_t var_a8;
            int64_t var_a0;
            
            if (var_b7 != 1)
            {
                r15 = 1;
                
                if (rbx_2 < r12_1 && !(r15 & 1))
                    continue;
            }
            else
            {
                var_a8 = var_d8;
                var_b8 = var_e8;
                var_e8 = 0;
                var_e0 = 1;
                var_d8 = 0;
                var_a0 = rbp;
                alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::push_back::h5f2bd84eb9945f81(
                    &var_58, &var_b8);
                rbp += 1;
                rbx_2 = *var_48[8];
                label_838426:
                
                if (rbx_2 < r12_1 && !(r15 & 1))
                    continue;
            }
            
            alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::pop_front::hb0761a58fb998fd1(
                &var_b8, &var_58);
            int64_t rcx_1 = var_b8;
            
            if (rcx_1 == -0x8000000000000000)
                core::ptr::drop_in_place$LT$core..option..Option$LT$$LP$alloc..vec..Vec$LT$u8$GT$$C$usize$RP$$GT$$GT$::h26ce487b647d2482(-0x8000000000000000, var_b0);
            else
            {
                rbx_2 = *var_48[8];
                void* rax_7 =
                    alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::get::h3b0853890391e73f(
                    &var_58, rbx_2 - 1);
                uint64_t r14_1;
                
                if (!rax_7)
                    r14_1 = 2;
                else
                {
                    r14_1 = r15 & 1;
                    arg7 = *(rax_7 + 0x18);
                }
                
                if (r14_1 == 2)
                    arg7 = var_a0;
                
                if (r14_1 == 2)
                    r14_1 = 1;
                
                char rax_8 = bat::line_range::LineRanges::check::h858adae3b81fddb3(arg9, var_a0, 
                    r14_1, arg7);
                int128_t var_97;
                int128_t var_78;
                
                if (!rax_8)
                {
                    uint64_t rax_12;
                    
                    if (!((var_111 | var_104 | var_f0) & 1))
                    {
                        arg4(&var_b8, arg3, arg6);
                        rax_12 = var_b8;
                        
                        if (rax_12 == 0xd)
                        {
                            rax_12 = 1;
                            var_f0 = rax_12;
                            var_104 = 0;
                            goto label_8385de;
                        }
                    }
                    else
                    {
                        uint64_t rsi_6;
                        rsi_6 = var_f0 | (var_112 & var_104);
                        var_f0 = rsi_6;
                        int32_t rdx_3;
                        rdx_3 = var_104 & var_111;
                        var_104 = rdx_3;
                        label_8385de:
                        arg5(&var_b8, arg3, 0, arg6, var_a0, var_b0, var_a8, r14_1, arg7);
                        rax_12 = var_b8;
                        
                        if (rax_12 == 0xd)
                        {
                            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h1e41457799ed3462(rcx_1, var_b0);
                            continue;
                            continue;
                        }
                    }
                    
                    *(arg1 + 0x40) = var_78;
                    int128_t var_87;
                    *(arg1 + 0x31) = var_87;
                    *(arg1 + 0x21) = var_97;
                    *(arg1 + 0x11) = *var_a8[1];
                    *(arg1 + 1) = var_b7;
                    *arg1 = rax_12;
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h1e41457799ed3462(
                        rcx_1, var_b0);
                    break;
                }
                
                if (rax_8 == 1)
                {
                    arg5(&var_b8, arg3, 1, arg6, var_a0, var_b0, var_a8, r14_1, arg7);
                    
                    if (var_b8 == 0xd)
                    {
                        var_f0 = 0;
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h1e41457799ed3462(rcx_1, var_b0);
                        continue;
                    }
                    
                    *(arg1 + 0x40) = var_78;
                    int128_t zmm0_2 = var_b8;
                    *(arg1 + 0x30) = var_97;
                    int128_t var_98;
                    *(arg1 + 0x20) = var_98;
                    *(arg1 + 0x10) = var_a8;
                    *arg1 = zmm0_2;
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h1e41457799ed3462(
                        rcx_1, var_b0);
                    break;
                }
                
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h1e41457799ed3462(rcx_1, 
                    var_b0);
            }
        }
        else if (rbx_2)
            goto label_838426;
        
        *arg1 = 0xd;
        break;
    }
    
    core::ptr::drop_in_place$LT$alloc..collections..vec_deque..VecDeque$LT$$LP$alloc..vec..Vec$LT$u8$GT$$C$usize$RP$$GT$$GT$::h28d9f414cd84ecb1(&var_58);
    return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h1e41457799ed3462(var_e8, 
        var_e0);
}
