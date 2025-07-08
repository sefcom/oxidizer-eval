
  int128_t* uu_ls::display_items::hbe9721d3f3017f49(int64_t** arg1, void*** arg2, void* arg3, void*** arg4, int64_t* arg5, int64_t* arg6, int64_t arg7 @ rbp)

{
    int64_t var_8 = arg7;
    void* r14_1 = arg2 * 0x130 + arg1;
    int64_t** var_a8 = arg1;
    void* var_a0 = r14_1;
    char rax = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::any::h09eed60290850493(&var_a8, arg3);
    uint32_t rcx = *(arg3 + 0xf8);
    int128_t* i_2;
    int128_t* const var_1b8;
    int128_t* i_3;
    void*** var_1a8;
    void* var_188;
    void** var_148;
    int64_t** var_100;
    int64_t var_68;
    int128_t* i_1;
    int128_t* i_5;
    void*** rdx_2;
    
    if (rcx != 1)
    {
        int64_t var_158_1;
        
        if (!*(arg3 + 0xeb))
            var_158_1 = 0;
        else
        {
            var_a8 = arg1;
            void* var_a0_1 = r14_1;
            void* i = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hb7b65ed0162d4d31(&var_a8);
            var_158_1 = 1;
            arg7 = 1;
            
            for (; i; i = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hb7b65ed0162d4d31(&var_a8))
                arg7 = core::cmp::max_by::h7ee1a79e2ed707c0(*(i + 0x40), arg7);
        }
        
        void*** r13 = arg4;
        uu_ls::calculate_padding_collection::h885b95310ac7cc45(&var_a8, arg1, arg2, arg3);
        
        if (*(arg6 + 0x1d) == 2)
            goto label_5298ea;
        
        uu_ls::colors::StyleManager::apply_normal::h404909a10cb94e2b(&var_188, arg6);
        var_148 = &var_188;
        int64_t (* var_140)(void* arg1, int64_t arg2) =
            _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
        var_1b8 = &data_423c10;
        i_3 = 1;
        int64_t var_198_2 = 0;
        var_1a8 = &var_148;
        int64_t var_1a0_2 = 1;
        
        if (!std::io::Write::write_fmt::h51abc44b465d2e67(r13, &var_1b8))
        {
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&var_188);
            label_5298ea:
            int64_t var_c8 = 0;
            int64_t var_c0_1 = 8;
            int64_t var_b8_1 = 0;
            var_188 = arg1;
            int64_t** rbx_2 = var_a8;
            void* r12_2 = arg3;
            
            while (true)
            {
                void* rax_13 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hb7b65ed0162d4d31(&var_188);
                
                if (!rax_13)
                {
                    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h2fdd1c99928f9068(&var_100, &var_c8);
                    int128_t var_f0;
                    char rdx_8;
                    int16_t rsi_15;
                    int128_t* rdi_26;
                    char r8_7;
                    
                    if (!rcx)
                    {
                        var_1a8 = var_f0;
                        var_1b8 = var_100;
                        rsi_15 = *(r12_2 + 0xe4);
                        r8_7 = rax;
                        rdi_26 = &var_1b8;
                        rdx_8 = 1;
                        label_529aff:
                        i_1 = uu_ls::display_grid::h3c5e157ceab431f0(rdi_26, rsi_15, rdx_8, r13, 
                            r8_7);
                        
                        if (i_1)
                            goto label_529b0d;
                    }
                    else
                    {
                        if (rcx == 3)
                        {
                            var_1a8 = var_f0;
                            var_1b8 = var_100;
                            rsi_15 = *(r12_2 + 0xe4);
                            r8_7 = rax;
                            rdi_26 = &var_1b8;
                            rdx_8 = 0;
                            goto label_529aff;
                        }
                        
                        void** var_128;
                        void*** var_e0;
                        
                        if (rcx != 4)
                        {
                            int128_t var_138_1 = var_f0;
                            var_148 = var_100;
                            _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hd7a5e426642ce2a7(&var_e0, &var_148);
                            
                            if (var_e0 != -0x8000000000000000)
                            {
                                while (true)
                                {
                                    int64_t var_d0;
                                    int64_t var_118_1 = var_d0;
                                    var_128 = var_e0;
                                    var_188 = &var_128;
                                    int64_t (* var_180_2)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                                    void* var_178_2 = arg3 + 0xfa;
                                    int64_t (* var_170_1)(char* arg1, void* arg2) = _$LT$uucore..mods..line_ending..LineEnding$u20$as$u20$core..fmt..Display$GT$::fmt::h6643b2132dca5a5b;
                                    var_1b8 = &data_428c70;
                                    int64_t var_1b0 = 2;
                                    int64_t var_198_3 = 0;
                                    void** var_1a8_1 = &var_188;
                                    int64_t var_1a0_3 = 2;
                                    
                                    if (std::io::Write::write_fmt::h51abc44b465d2e67(arg4, 
                                        &var_1b8))
                                    {
                                        i_2 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
                                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&var_128);
                                        core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$alloc..string..String$GT$$GT$::h7998da7d166a96bf(&var_148);
                                        break;
                                    }
                                    
                                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&var_128);
                                    _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hd7a5e426642ce2a7(&var_e0, &var_148);
                                    
                                    if (var_e0 == -0x8000000000000000)
                                        goto label_529c56;
                                }
                                
                                goto label_529f84;
                            }
                            
                            label_529c56:
                            core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$alloc..string..String$GT$$GT$::h7998da7d166a96bf(&var_148);
                        }
                        else
                        {
                            _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hd7a5e426642ce2a7(&var_148, &var_100);
                            int64_t var_138;
                            int32_t rbp;
                            
                            if (var_148 != -0x8000000000000000)
                            {
                                var_188 = var_148;
                                var_128 = &var_188;
                                int64_t (* var_120_1)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                                var_1b8 = &data_423c10;
                                int64_t var_1b0_1 = 1;
                                int64_t var_198_4 = 0;
                                void*** var_1a8_2 = &var_128;
                                int64_t var_1a0_4 = 1;
                                
                                if (std::io::Write::write_fmt::h51abc44b465d2e67(r13, &var_1b8))
                                {
                                    i_2 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
                                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&var_188);
                                    core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$alloc..string..String$GT$$GT$::h7998da7d166a96bf(&var_100);
                                    goto label_529f84;
                                }
                                
                                int32_t rax_24 =
                                    ansi_width::ansi_width::h2f2b875c576f64e5(r14_1, var_138);
                                core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&var_188);
                                rbp = rax_24 + 2;
                            }
                            else
                                rbp = 0;
                            
                            int64_t var_178;
                            var_178 = var_f0;
                            var_188 = var_100;
                            _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hd7a5e426642ce2a7(&var_128, &var_188);
                            
                            if (var_128 != -0x8000000000000000)
                            {
                                int16_t rbx_3 = *(r12_2 + 0xe4);
                                
                                while (true)
                                {
                                    var_148 = var_128;
                                    int64_t var_118;
                                    var_138 = var_118;
                                    int32_t rax_25 =
                                        ansi_width::ansi_width::h2f2b875c576f64e5(var_140, var_118);
                                    int128_t* i_6;
                                    
                                    if (!rbx_3 || rax_25 + rbp + 1 <= rbx_3)
                                    {
                                        var_e0 = &var_148;
                                        int64_t (* var_d8_2)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                                        var_1b8 = &data_612660;
                                        int64_t var_1b0_3 = 1;
                                        int64_t var_198_6 = 0;
                                        void**** var_1a8_4 = &var_e0;
                                        int64_t var_1a0_6 = 1;
                                        
                                        if (std::io::Write::write_fmt::h51abc44b465d2e67(arg4, 
                                            &var_1b8))
                                        {
                                            i_6 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
                                            label_529f99:
                                            i_2 = i_6;
                                            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&var_148);
                                            core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$alloc..string..String$GT$$GT$::h7998da7d166a96bf(&var_188);
                                            break;
                                        }
                                        
                                        rbp = rbp + rax_25 + 2;
                                    }
                                    else
                                    {
                                        var_e0 = &var_148;
                                        int64_t (* var_d8_1)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                                        var_1b8 = &data_612650;
                                        int64_t var_1b0_2 = 1;
                                        int64_t var_198_5 = 0;
                                        void**** var_1a8_3 = &var_e0;
                                        int64_t var_1a0_5 = 1;
                                        
                                        if (std::io::Write::write_fmt::h51abc44b465d2e67(arg4, 
                                            &var_1b8))
                                        {
                                            i_6 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
                                            goto label_529f99;
                                        }
                                        
                                        rbp = rax_25 + 2;
                                    }
                                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&var_148);
                                    r12_2 = arg3;
                                    _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hd7a5e426642ce2a7(&var_128, &var_188);
                                    
                                    if (var_128 == -0x8000000000000000)
                                        goto label_529ef7;
                                }
                                
                                goto label_529f84;
                            }
                            
                            label_529ef7:
                            core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$alloc..string..String$GT$$GT$::h7998da7d166a96bf(&var_188);
                            
                            if (rbp)
                            {
                                var_188 = r12_2 + 0xfa;
                                int64_t (* var_180_3)(char* arg1, void* arg2) = _$LT$uucore..mods..line_ending..LineEnding$u20$as$u20$core..fmt..Display$GT$::fmt::h6643b2132dca5a5b;
                                var_1b8 = &data_423c10;
                                int64_t var_1b0_4 = 1;
                                int64_t var_198_7 = 0;
                                void** var_1a8_5 = &var_188;
                                int64_t var_1a0_7 = 1;
                                
                                if (std::io::Write::write_fmt::h51abc44b465d2e67(arg4, &var_1b8))
                                {
                                    i_1 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
                                    goto label_529b0d;
                                }
                            }
                        }
                    }
                    return nullptr;
                }
                
                uu_ls::display_additional_leading_info::hdfeacb5163c0e10b(&var_1b8, rax_13, rbx_2, 
                    var_68, r12_2);
                int128_t* const rax_14 = var_1b8;
                i_2 = i_3;
                
                if (rax_14 == -0x8000000000000000)
                {
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::hbaa87f9dbd448729(&var_c8);
                    break;
                }
                
                int128_t* const var_60 = rax_14;
                int128_t* i_4 = i_2;
                void*** var_50_1 = var_1a8;
                r13 = arg4;
                int32_t var_1e8;
                var_1e8 = r13;
                r12_2 = arg3;
                void var_48;
                uu_ls::display_item_name::h2be516ffa591d327(&var_48, rax_13, r12_2, var_158_1, 
                    arg7, &var_60, var_1e8, arg6, nullptr);
                alloc::vec::Vec$LT$T$C$A$GT$::push::h8719a5ff12332ceb(&var_c8, &var_48);
            }
        }
        else
        {
            i_5 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
            label_529a84:
            i_2 = i_5;
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&var_188);
        }
    }
    else
    {
        uu_ls::calculate_padding_collection::h885b95310ac7cc45(&var_a8, arg1, arg2, arg3);
        var_100 = arg1;
        void* var_f8_1 = r14_1;
        
        if (*(arg3 + 0xe9) | *(arg3 + 0xea))
        {
            int32_t var_108;
            var_108 = var_a8;
            char var_1c4;
            var_1c4 = rax;
            
            do
            {
                void* rax_7 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hb7b65ed0162d4d31(&var_100);
                
                if (!rax_7)
                    return nullptr;
                
                uu_ls::display_additional_leading_info::hdfeacb5163c0e10b(&var_1b8, rax_7, var_108, 
                    var_68, arg3);
                void* rax_8 = var_1b8;
                
                if (rax_8 == -0x8000000000000000)
                    return i_3;
                
                var_188 = rax_8;
                int128_t* i_7 = i_3;
                void*** var_178_1 = var_1a8;
                var_148 = &var_188;
                int64_t (* var_140_1)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::hf84d46339d179f53;
                var_1b8 = &data_423c10;
                i_3 = 1;
                int64_t var_198_1 = 0;
                var_1a8 = &var_148;
                int64_t var_1a0_1 = 1;
                
                if (std::io::Write::write_fmt::h51abc44b465d2e67(arg4, &var_1b8))
                {
                    i_5 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
                    goto label_529a84;
                }
                
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::hb27a9c8978a01f77(&var_188);
                i_1 = uu_ls::display_item_long::he4defe602b238d5a(rax_7, &var_a8, arg3, arg4, arg5, 
                    arg6, var_1c4);
            } while (!i_1);
        }
        else
        {
            do
            {
                void* rax_2 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hb7b65ed0162d4d31(&var_100);
                
                if (!rax_2)
                    return nullptr;
                
                i_1 = uu_ls::display_item_long::he4defe602b238d5a(rax_2, &var_a8, arg3, arg4, arg5, 
                    arg6, rax);
            } while (!i_1);
        }
        
        label_529b0d:
        i_2 = i_1;
    }
    label_529f84:
    return i_2;
}
