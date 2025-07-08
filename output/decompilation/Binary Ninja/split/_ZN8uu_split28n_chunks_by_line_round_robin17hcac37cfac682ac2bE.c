
  int128_t* uu_split::n_chunks_by_line_round_robin::hcac37cfac682ac2b(void* arg1, int64_t* arg2, int64_t** arg3, int64_t arg4, int64_t arg5)

{
    std::io::stdio::stdout::h077da66234850927();
    int64_t* var_a8 = &std::io::stdio::STDOUT::hdbe36c11cd3014ce;
    int64_t* var_80 = std::io::stdio::Stderr::lock::h890f7962a170fc90(&var_a8);
    int64_t* var_78 = nullptr;
    int64_t var_70 = 8;
    int64_t var_68 = 0;
    int128_t* result;
    int128_t* result_4;
    int64_t rdx_1;
    
    if (arg4 != 1)
    {
        _$LT$alloc..vec..Vec$LT$uu_split..OutFile$GT$$u20$as$u20$uu_split..ManageOutFiles$GT$::init::h5aea99d9a23c30d0(&var_a8, arg3, arg1, *(arg1 + 0xa1));
        int64_t* rbp_2 = var_a8;
        int128_t* result_1;
        result = result_1;
        
        if (rbp_2 != -0x8000000000000000)
        {
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_split..OutFile$GT$$GT$::h9a093a5d557b8fa2(&var_78);
            var_78 = rbp_2;
            int128_t* result_2 = result;
            int64_t** var_98;
            int64_t** var_68_1 = var_98;
            char rbp_3 = *(arg1 + 0xa2);
            
            if (!arg3)
            {
                var_a8 = nullptr;
                int64_t var_a0_3 = 1;
                int64_t var_98_4 = 0;
                int64_t rax_25;
                rax_25 = std::io::BufRead::read_until::h14f0ed33cb77f4c0(arg2, rbp_3, &var_a8);
                
                if (rax_25)
                    goto label_4cdf13;
                
                if (!rdx_1)
                    goto label_4cdf50;
                
                core::panicking::panic_const::panic_const_rem_by_zero::h9246b1d1945ea5dd();
                /* no return */
            }
            
            int64_t rax_11 = *(arg1 + 0x88);
            int64_t r12_2 = 0;
            int64_t rbx_1 = 0;
            
            while (true)
            {
                var_a8 = nullptr;
                int64_t var_a0_1 = 1;
                uint64_t var_98_2 = 0;
                int64_t rax_12;
                rax_12 = std::io::BufRead::read_until::h14f0ed33cb77f4c0(arg2, rbp_3, &var_a8);
                
                if (rax_12)
                    goto label_4cdf13;
                
                if (!rdx_1)
                    goto label_4cdf50;
                
                uint64_t rdx_9;
                
                if (!((r12_2 | arg3) >> 0x20))
                    rdx_9 = COMBINE(0, r12_2) % arg3;
                else
                    rdx_9 = COMBINE(0, r12_2) % arg3;
                
                int128_t* result_3;
                _$LT$alloc..vec..Vec$LT$uu_split..OutFile$GT$$u20$as$u20$uu_split..ManageOutFiles$GT$::get_writer::hcb920ccabbd9d626(&result_3, &var_78, rdx_9, arg1);
                result = result_3;
                
                if (result)
                    break;
                
                int64_t** var_58;
                uu_split::custom_write_all::h79f0c894f91cdf7a(&result_3, var_a0_1, var_98_2, 
                    var_58, rax_11);
                
                if (result_3)
                {
                    result_4 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
                    goto label_4cdf19;
                }
                
                rbx_1 += *result_3[1] ^ 1;
                
                if (rbx_1 == arg3)
                    goto label_4cdf50;
                
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h5c84a37d2a9393c1(
                    &var_a8);
                r12_2 += 1;
            }
            
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h5c84a37d2a9393c1(&var_a8);
        }
    }
    else
    {
        char rax_1 = *(arg1 + 0xa2);
        
        if (!arg3)
        {
            var_a8 = nullptr;
            int64_t var_a0_2 = 1;
            int64_t var_98_3 = 0;
            int64_t rax_24;
            rax_24 = std::io::BufRead::read_until::h14f0ed33cb77f4c0(arg2, rax_1, &var_a8);
            
            if (!rax_24)
            {
                if (rdx_1)
                {
                    core::panicking::panic_const::panic_const_rem_by_zero::h9246b1d1945ea5dd();
                    /* no return */
                }
                
                label_4cdf50:
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h5c84a37d2a9393c1(
                    &var_a8);
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_split..OutFile$GT$$GT$::h9a093a5d557b8fa2(&var_78);
                core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::habe0dd4c6dde56f8(
                    var_80);
                return nullptr;
            }
            
            label_4cdf13:
            result_4 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
        }
        else
        {
            int64_t r15_1 = 0;
            
            while (true)
            {
                var_a8 = nullptr;
                int64_t var_a0 = 1;
                uint64_t var_98_1 = 0;
                int64_t rax_2;
                rax_2 = std::io::BufRead::read_until::h14f0ed33cb77f4c0(arg2, rax_1, &var_a8);
                
                if (rax_2)
                    goto label_4cdf13;
                
                if (!rdx_1)
                    goto label_4cdf50;
                
                if (!((r15_1 | arg3) >> 0x20))
                {
                    if (COMBINE(0, r15_1) % arg3 == arg5 - 1)
                    {
                        label_4cdd09:
                        
                        if (_$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::h10000d12d1c1ff48(&var_80, var_a0, var_98_1))
                        {
                            result_4 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
                            break;
                        }
                    }
                }
                else if (COMBINE(0, r15_1) % arg3 == arg5 - 1)
                    goto label_4cdd09;
                
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h5c84a37d2a9393c1(
                    &var_a8);
                r15_1 += 1;
            }
        }
        
        label_4cdf19:
        result = result_4;
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h5c84a37d2a9393c1(&var_a8);
    }
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_split..OutFile$GT$$GT$::h9a093a5d557b8fa2(
        &var_78);
    core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::habe0dd4c6dde56f8(var_80);
    return result;
}
