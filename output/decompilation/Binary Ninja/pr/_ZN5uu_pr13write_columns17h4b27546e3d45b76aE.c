
  int64_t uu_pr::write_columns::h4b27546e3d45b76a(int64_t arg1, int64_t arg2, void* arg3, int64_t* arg4)

{
    int64_t rdi = *(arg3 + 0x10);
    uint64_t rbx_1 = *(arg3 + 0x138) >> *(arg3 + 0x140);
    int64_t var_1e8;
    int64_t rax_1;
    
    if (!rdi)
    {
        rax_1 = *(arg3 + 0x100);
        var_1e8 = 1;
        
        if (rax_1 != -0x8000000000000000)
            var_1e8 = *(arg3 + 0x120);
    }
    else
    {
        var_1e8 = *(arg3 + 0x18);
        rax_1 = *(arg3 + 0x100);
    }
    
    char rcx_2 = 0;
    
    if (rax_1 != -0x8000000000000000)
        rcx_2 = *(arg3 + 0x128);
    
    int64_t rax_2 = *(arg3 + 0x68);
    uint64_t rax_3 = *(arg3 + 0x70);
    int64_t rax_4 = *(arg3 + 0x20);
    int64_t rax_5 = *(arg3 + 0x28);
    char rax_6 = *(arg3 + 0x142);
    int64_t var_148 = 0;
    int64_t var_140 = 8;
    int64_t var_138 = 0;
    int64_t var_108;
    
    if (rdi && var_1e8)
    {
        int64_t r13_1 = 0;
        int64_t i = 0;
        int64_t i_2;
        
        do
        {
            i_2 = _$LT$usize$u20$as$u20$core..iter..range..Step$GT$::forward_unchecked::he44ce7238773bbb8(i);
            
            if (r13_1 > arg2)
            {
                core::slice::index::slice_start_index_len_fail::hff2ebd3969f5a2ec(r13_1, arg2);
                /* no return */
            }
            
            var_108 = (r13_1 << 6) + arg1;
            int64_t var_100_1 = (arg2 << 6) + arg1;
            void* rax_11 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h8a2e58434e90c9b0(&var_108);
            int64_t r13_4 = 0;
            
            if (rax_11)
            {
                while (*(rax_11 + 0x18) == i)
                {
                    alloc::vec::Vec$LT$T$C$A$GT$::push::h131fd66e07e1516e(&var_148, rax_11);
                    r13_4 += 1;
                    rax_11 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h8a2e58434e90c9b0(&var_108);
                    
                    if (!rax_11)
                        break;
                }
            }
            
            int64_t var_1d8_2 = r13_1 + r13_4;
            
            while (r13_4 < rbx_1)
            {
                r13_4 = _$LT$usize$u20$as$u20$core..iter..range..Step$GT$::forward_unchecked::he44ce7238773bbb8(r13_4);
                alloc::vec::Vec$LT$T$C$A$GT$::push::h131fd66e07e1516e(&var_148, 0);
            }
            
            i = i_2;
            r13_1 = var_1d8_2;
        } while (i_2 < var_1e8);
    }
    
    int64_t var_98 = var_138;
    int64_t var_a8 = var_148;
    int64_t var_a0 = var_140;
    int64_t var_60 = 0;
    uint64_t var_58 = rbx_1;
    int64_t var_90 = arg1;
    int64_t var_88 = arg2;
    void* var_80 = arg3;
    int64_t var_78 = var_1e8;
    uint64_t var_70 = rbx_1;
    char var_68 = rcx_2;
    void var_48;
    _$LT$alloc..vec..Vec$LT$T$GT$$u20$as$u20$alloc..vec..spec_from_iter..SpecFromIter$LT$T$C$I$GT$$GT$::from_iter::h13c086e7e35183b3(&var_48, &var_a8);
    var_108 = 0;
    int64_t var_100_2 = 1;
    int64_t s;
    __builtin_memset(&s, 0, 0x30);
    void var_c8;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::heff5ad2e73d336ad(&var_c8, &var_48);
    int64_t i_1;
    _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h5960a9806ac266d6(&i_1, &var_c8);
    
    if (i_1 != -0x8000000000000000)
    {
        void var_1a8;
        int64_t var_1a0;
        uint64_t var_198;
        int128_t var_188;
        int64_t var_160;
        int64_t var_130;
        char const (** r14)[0x9b];
        
        if (!rdi)
        {
            r14 = nullptr;
            char var_1d8_3 = 0;
            
            do
            {
                var_188 = i_1;
                int64_t var_178_2 = var_160;
                int64_t rax_27 = *var_188[8];
                var_130 = rax_27;
                int64_t var_128_2 = rax_27 + (var_160 << 3);
                int64_t var_120_2 = 0;
                
                while (true)
                {
                    int64_t rax_28;
                    int64_t** rdx_6;
                    rax_28 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hc73c14a389155679(&var_130);
                    
                    if (!rdx_6)
                        break;
                    
                    int64_t* rdx_7 = *rdx_6;
                    
                    if (!rdx_7)
                    {
                        rax_28 = 1;
                        var_1d8_3 = rax_28;
                        
                        if (rax_6)
                            goto label_5c816c;
                        
                        goto label_5c80cc;
                    }
                    
                    uu_pr::get_line_for_printing::h8a9c61ca270edd26(&var_1a8, arg3, rdx_7, var_1e8, 
                        rax_28, rax_4, rax_5, var_160);
                    
                    if (_$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::h10000d12d1c1ff48(arg4, var_1a0, var_198))
                        goto label_5c8118;
                    
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h93d342cc5e2da10e(
                        &var_1a8);
                    r14 += 1;
                }
                
                if (rax_6 && var_1d8_3 & 1)
                {
                    label_5c816c:
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$core..option..Option$LT$$RF$uu_pr..FileLine$GT$$GT$$GT$::hbeb275d75874da95(&var_188);
                    break;
                }
                
                label_5c80cc:
                
                if (_$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::h10000d12d1c1ff48(arg4, rax_2, rax_3))
                    goto label_5c812e;
                
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$core..option..Option$LT$$RF$uu_pr..FileLine$GT$$GT$$GT$::hbeb275d75874da95(&var_188);
                _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h5960a9806ac266d6(&i_1, &var_c8);
            } while (i_1 != -0x8000000000000000);
        }
        else
        {
            r14 = nullptr;
            
            while (true)
            {
                var_188 = i_1;
                int64_t var_178_1 = var_160;
                int64_t rax_22 = *var_188[8];
                var_130 = rax_22;
                int64_t var_128_1 = rax_22 + (var_160 << 3);
                int64_t var_120_1 = 0;
                
                while (true)
                {
                    int64_t rax_23;
                    int64_t** rdx;
                    rax_23 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hc73c14a389155679(&var_130);
                    
                    if (!rdx)
                    {
                        if (!_$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::h10000d12d1c1ff48(arg4, rax_2, rax_3))
                        {
                            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$core..option..Option$LT$$RF$uu_pr..FileLine$GT$$GT$$GT$::hbeb275d75874da95(&var_188);
                            _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h5960a9806ac266d6(&i_1, &var_c8);
                            break;
                        }
                    }
                    else
                    {
                        int64_t* rdx_1 = *rdx;
                        
                        if (!rdx_1)
                        {
                            uu_pr::get_line_for_printing::h8a9c61ca270edd26(&var_1a8, arg3, 
                                &var_108, var_1e8, rax_23, rax_4, rax_5, var_160);
                            
                            if (_$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::h10000d12d1c1ff48(arg4, var_1a0, var_198))
                                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h93d342cc5e2da10e(&var_1a8);
                            else
                            {
                                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h93d342cc5e2da10e(&var_1a8);
                                continue;
                            }
                        }
                        else
                        {
                            uu_pr::get_line_for_printing::h8a9c61ca270edd26(&var_1a8, arg3, rdx_1, 
                                var_1e8, rax_23, rax_4, rax_5, var_160);
                            
                            if (_$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::h10000d12d1c1ff48(arg4, var_1a0, var_198))
                            {
                                label_5c8118:
                                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h93d342cc5e2da10e(&var_1a8);
                            }
                            else
                            {
                                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h93d342cc5e2da10e(&var_1a8);
                                r14 += 1;
                                continue;
                            }
                        }
                    }
                    
                    label_5c812e:
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$core..option..Option$LT$$RF$uu_pr..FileLine$GT$$GT$$GT$::hbeb275d75874da95(&var_188);
                    core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$alloc..vec..Vec$LT$core..option..Option$LT$$RF$uu_pr..FileLine$GT$$GT$$GT$$GT$::hf9ce9c54c65d9cf1(&var_c8);
                    core::ptr::drop_in_place$LT$uu_pr..FileLine$GT$::h27cde15571da4c08(&var_108);
                    return 1;
                }
                
                if (i_1 == -0x8000000000000000)
                    break;
            }
        }
    }
    
    core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$alloc..vec..Vec$LT$core..option..Option$LT$$RF$uu_pr..FileLine$GT$$GT$$GT$$GT$::hf9ce9c54c65d9cf1(&var_c8);
    core::ptr::drop_in_place$LT$uu_pr..FileLine$GT$::h27cde15571da4c08(&var_108);
    return 0;
}
