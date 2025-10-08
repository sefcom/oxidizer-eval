
  uint64_t uu_split::n_chunks_by_line_round_robin::h3c8d5c037c5c2f2d(void* arg1, int64_t* arg2, int64_t arg3, int64_t arg4, int64_t* arg5)

{
    std::io::stdio::stdout::hb6a8e10bcccf3287();
    int64_t* var_a0 = &std::io::stdio::STDOUT::h411b213c5c9add46;
    int64_t* var_68 = std::io::stdio::Stderr::lock::h0a4e4370fd1671bb(&var_a0);
    int64_t* var_80 = nullptr;
    int64_t var_78 = 8;
    int64_t var_70 = 0;
    uint64_t result;
    int64_t var_98;
    uint64_t result_4;
    int64_t rdx_1;
    int64_t r15_1;
    
    if (!arg4)
    {
        _$LT$alloc..vec..Vec$LT$uu_split..OutFile$GT$$u20$as$u20$uu_split..ManageOutFiles$GT$::init::h95c34a5c8d1a9d91(&var_a0, arg3, arg1, *(arg1 + 0xa1));
        int64_t* r15_2 = var_a0;
        uint64_t result_1;
        result = result_1;
        
        if (-(r15_2) == -0x8000000000000000)
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_split..OutFile$GT$$GT$::h9ac88a79a4d2d114(&var_80);
        else
        {
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_split..OutFile$GT$$GT$::h9ac88a79a4d2d114(&var_80);
            var_80 = r15_2;
            uint64_t result_2 = result;
            int64_t* var_90;
            int64_t* var_70_1 = var_90;
            char rax_13 = *(arg1 + 0xa2);
            
            if (arg3)
            {
                int64_t rcx_1 = *(arg1 + 0x88);
                int64_t rbp_2 = 0;
                int64_t rbx_1 = 0;
                
                while (true)
                {
                    var_a0 = nullptr;
                    var_98 = 1;
                    uint64_t var_90_2 = 0;
                    char rax_15;
                    rax_15 = std::io::BufRead::read_until::h0e9a123d5e254a87(arg2, rax_13, &var_a0);
                    
                    if (rax_15 & 1)
                        goto label_471852;
                    
                    if (!rdx_1)
                        goto label_47186e;
                    
                    r15_1 = var_98;
                    uint64_t rdx_9;
                    
                    if (!((rbp_2 | arg3) >> 0x20))
                        rdx_9 = COMBINE(0, rbp_2) % arg3;
                    else
                        rdx_9 = COMBINE(0, rbp_2) % arg3;
                    
                    uint64_t result_3;
                    _$LT$alloc..vec..Vec$LT$uu_split..OutFile$GT$$u20$as$u20$uu_split..ManageOutFiles$GT$::get_writer::h595821988eb35f9a(&result_3, &var_80, rdx_9, arg1);
                    result = result_3;
                    
                    if (result)
                        goto label_47189b;
                    
                    int64_t* var_50;
                    uu_split::custom_write_all::h5ae19a5a4a9a7063(&result_3, r15_1, var_90_2, 
                        var_50, rcx_1);
                    
                    if (result_3 == 1)
                    {
                        result_4 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                        break;
                    }
                    
                    rbx_1 += *result_3[1] ^ 1;
                    
                    if (rbx_1 == arg3)
                        goto label_47186e;
                    
                    rbp_2 += 1;
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h8db16a3a7b207659(
                        var_a0, r15_1);
                }
                
                result = result_4;
                goto label_47189b;
            }
            
            var_a0 = nullptr;
            var_98 = 1;
            int64_t var_90_4 = 0;
            char rax_27;
            rax_27 = std::io::BufRead::read_until::h0e9a123d5e254a87(arg2, rax_13, &var_a0);
            
            if (rax_27 & 1)
                goto label_471852;
            
            if (rdx_1)
            {
                core::panicking::panic_const::panic_const_rem_by_zero::hedb898bfe2cd5907();
                /* no return */
            }
            
            label_47186e:
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h8db16a3a7b207659(var_a0, 
                var_98);
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_split..OutFile$GT$$GT$::h9ac88a79a4d2d114(&var_80);
            result = 0;
        }
    }
    else
    {
        char rax_1 = *(arg1 + 0xa2);
        
        if (arg3)
        {
            int64_t r12_1 = 0;
            
            while (true)
            {
                var_a0 = nullptr;
                var_98 = 1;
                uint64_t var_90_1 = 0;
                char rax_2;
                rax_2 = std::io::BufRead::read_until::h0e9a123d5e254a87(arg2, rax_1, &var_a0);
                
                if (rax_2 & 1)
                    goto label_471852;
                
                if (!rdx_1)
                    goto label_47186e;
                
                r15_1 = var_98;
                
                if (!((r12_1 | arg3) >> 0x20))
                {
                    if (COMBINE(0, r12_1) % arg3 == arg5 - 1)
                    {
                        label_47163a:
                        
                        if (_$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::hb8477e4d9e0e6d9b(&var_68, r15_1, var_90_1))
                        {
                            result_4 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                            break;
                        }
                    }
                }
                else if (COMBINE(0, r12_1) % arg3 == arg5 - 1)
                    goto label_47163a;
                
                r12_1 += 1;
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h8db16a3a7b207659(
                    var_a0, r15_1);
            }
            
            result = result_4;
            goto label_47189b;
        }
        
        var_a0 = nullptr;
        var_98 = 1;
        int64_t var_90_3 = 0;
        char rax_26;
        rax_26 = std::io::BufRead::read_until::h0e9a123d5e254a87(arg2, rax_1, &var_a0);
        
        if (!(rax_26 & 1))
        {
            if (!rdx_1)
                goto label_47186e;
            
            core::panicking::panic_const::panic_const_rem_by_zero::hedb898bfe2cd5907();
            /* no return */
        }
        
        label_471852:
        result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
        r15_1 = var_98;
        label_47189b:
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h8db16a3a7b207659(var_a0, r15_1);
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_split..OutFile$GT$$GT$::h9ac88a79a4d2d114(
            &var_80);
    }
    core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::h1369307f6e9c4811(var_68);
    return result;
}
