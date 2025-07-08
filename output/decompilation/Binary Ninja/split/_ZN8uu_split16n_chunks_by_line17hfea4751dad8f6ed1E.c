
  int128_t* uu_split::n_chunks_by_line::hfea4751dad8f6ed1(int64_t* arg1, void* arg2, int64_t arg3, int64_t arg4, int64_t arg5)

{
    void** const r12;
    void** const var_28 = r12;
    int64_t var_a0 = 0;
    int64_t* var_98 = 1;
    int64_t var_90 = 0;
    int64_t rax;
    int64_t rdx_1;
    rax = uu_split::get_input_size::hff72b499bd50ee30(&arg1[0xe], arg2, &var_a0, *arg1, arg1[1]);
    int128_t* result;
    
    if (rax)
        result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
    else if (rdx_1)
    {
        label_4cd7c3:
        std::io::stdio::stdout::h077da66234850927();
        int64_t* var_78 = &std::io::stdio::STDOUT::hdbe36c11cd3014ce;
        int64_t* var_108 = std::io::stdio::Stderr::lock::h890f7962a170fc90(&var_78);
        int64_t* var_100 = nullptr;
        int64_t var_f8_1 = 8;
        int64_t var_f0_1 = 0;
        
        if (!arg3)
        {
            core::panicking::panic_const::panic_const_div_by_zero::haded503194f0bf6e();
            /* no return */
        }
        
        uint64_t var_d8_1;
        uint64_t rbx_1;
        
        if ((rdx_1 | arg3) >> 0x20)
        {
            int64_t rdx_2 = 0;
            int32_t temp2_1 = arg3;
            var_d8_1 = COMBINE(rdx_2, rdx_1) % temp2_1;
            rbx_1 = COMBINE(rdx_2, rdx_1) / temp2_1;
            
            if (arg4 != 1)
                goto label_4cd85d;
            
            goto label_4cd831;
        }
        
        int32_t rax_11 = rdx_1;
        int32_t temp2_2 = arg3;
        var_d8_1 = COMBINE(0, rax_11) % temp2_2;
        rbx_1 = COMBINE(0, rax_11) / temp2_2;
        char var_111_1;
        int64_t var_a8_1;
        
        if (arg4 == 1)
        {
            label_4cd831:
            var_a8_1 = rdx_1;
            var_111_1 = *(arg1 + 0xa1);
            label_4cd8cf:
            char rax_14 = *(arg1 + 0xa2);
            int64_t rbp_2 = rbx_1 + 1;
            var_78 = var_98;
            int64_t var_70 = var_90;
            void* var_68_1 = arg2;
            char var_60_1 = 0;
            char var_58_1 = rax_14;
            int64_t rcx_5 = arg1[0x11];
            r12 = 1;
            int64_t r13_2 = 0;
            int64_t var_d0_2 = -0x7fffffffffffffff;
            int64_t var_e0_1;
            var_e0_1 = rax_14;
            
            while (true)
            {
                int64_t var_48;
                _$LT$std..io..Split$LT$B$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h7f08040107fbede2(&var_48, &var_78);
                int64_t rax_17 = var_48;
                
                if (rax_17 != var_d0_2)
                {
                    if (rax_17 == -0x8000000000000000)
                    {
                        result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
                        break;
                    }
                    
                    int64_t var_c0 = rax_17;
                    uint64_t var_38;
                    
                    if (var_38 + r13_2 < var_a8_1)
                        alloc::vec::Vec$LT$T$C$A$GT$::push::hf1e1eb1ae4f6230e(&var_c0, var_e0_1);
                    
                    int64_t var_40;
                    int128_t* result_4;
                    
                    if (!arg4)
                    {
                        int128_t* result_5;
                        _$LT$alloc..vec..Vec$LT$uu_split..OutFile$GT$$u20$as$u20$uu_split..ManageOutFiles$GT$::get_writer::hcb920ccabbd9d626(&result_5, &var_100, r12 - 1, arg1);
                        int128_t* result_3 = result_5;
                        
                        if (result_3)
                        {
                            result = result_3;
                            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h5c84a37d2a9393c1(&var_c0);
                            break;
                        }
                        
                        void** var_80;
                        uu_split::custom_write_all::h79f0c894f91cdf7a(&result_5, var_40, var_38, 
                            var_80, rcx_5);
                        
                        if (result_5)
                        {
                            result_4 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
                            label_4cdb49:
                            result = result_4;
                            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h5c84a37d2a9393c1(&var_c0);
                            break;
                        }
                    }
                    else if (r12 == arg5 && _$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::h10000d12d1c1ff48(&var_108, var_40, var_38))
                    {
                        result_4 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
                        goto label_4cdb49;
                    }
                    r13_2 += var_38;
                    
                    if (rbp_2 <= r13_2)
                    {
                        int32_t rax_20 = -1;
                        int32_t rcx_8 = -2;
                        
                        do
                        {
                            rbp_2 = rbp_2 + rbx_1;
                            r12 += 1;
                            rax_20 += 1;
                            rcx_8 += 1;
                        } while (rbp_2 <= r13_2);
                        
                        if (!var_111_1 || rcx_8 >= 0x7fffffff)
                            goto label_4cda87;
                        
                        if (arg4 != 1)
                        {
                            r12 -= rax_20;
                            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h5c84a37d2a9393c1(&var_c0);
                            continue;
                        }
                        else if (r12 <= arg5)
                        {
                            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h5c84a37d2a9393c1(&var_c0);
                            continue;
                        }
                    }
                    else
                    {
                        label_4cda87:
                        
                        if (arg4 != 1 || r12 <= arg5)
                        {
                            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h5c84a37d2a9393c1(&var_c0);
                            continue;
                        }
                    }
                    
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h5c84a37d2a9393c1(
                        &var_c0);
                }
                
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_split..OutFile$GT$$GT$::h9a093a5d557b8fa2(&var_100);
                core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::habe0dd4c6dde56f8(
                    var_108);
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h5c84a37d2a9393c1(
                    &var_a0);
                return nullptr;
            }
        }
        else
        {
            label_4cd85d:
            char rax_13 = *(arg1 + 0xa1);
            var_111_1 = rax_13;
            _$LT$alloc..vec..Vec$LT$uu_split..OutFile$GT$$u20$as$u20$uu_split..ManageOutFiles$GT$::init::h5aea99d9a23c30d0(&var_78, arg3, arg1, rax_13);
            int64_t* r13_1 = var_78;
            int128_t* result_2;
            result = result_2;
            
            if (r13_1 != -0x8000000000000000)
            {
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_split..OutFile$GT$$GT$::h9a093a5d557b8fa2(&var_100);
                var_a8_1 = rdx_1;
                var_100 = r13_1;
                int128_t* result_1 = result;
                void** var_68;
                void** const var_f0_2 = var_68;
                goto label_4cd8cf;
            }
        }
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_split..OutFile$GT$$GT$::h9a093a5d557b8fa2(
            &var_100);
        core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::habe0dd4c6dde56f8(var_108);
    }
    else
    {
        result = nullptr;
        
        if (arg4 != 1 && !*(arg1 + 0xa1))
            goto label_4cd7c3;
    }
    
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h5c84a37d2a9393c1(&var_a0);
    return result;
}
