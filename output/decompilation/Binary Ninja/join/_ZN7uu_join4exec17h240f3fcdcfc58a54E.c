
  void* uu_join::exec::h240f3fcdcfc58a54(int64_t arg1, uint64_t arg2, int64_t arg3, uint64_t arg4, int64_t* arg5, char arg6)

{
    char var_23c = arg6;
    int64_t rbp;
    rbp = 1;
    std::io::stdio::stdin::h9a05a2c3e7544b2a();
    void* var_180 = &std::io::stdio::stdin::INSTANCE::heccb3522b341563b;
    char* var_238;
    uu_join::State::new::hab21adfd9d97a2fd(&var_238, 0, arg1, arg2, &var_180, arg5[9], 
        *(arg5 + 0x5f), arg5[0xb]);
    char* rax_1 = var_238;
    void* result_1;
    void* result = result_1;
    
    if (-(rax_1) != -0x8000000000000000)
    {
        int24_t var_1e0;
        int24_t var_f0_1 = var_1e0;
        int128_t var_1f0;
        int128_t var_100_1 = var_1f0;
        int128_t var_200;
        int128_t var_110_1 = var_200;
        int128_t var_210;
        int128_t var_120_1 = var_210;
        int128_t var_220;
        int128_t var_130_1 = var_220;
        char* var_148 = rax_1;
        void* result_2 = result;
        int64_t* var_228;
        int64_t* var_138_1 = var_228;
        rbp = 1;
        uu_join::State::new::hab21adfd9d97a2fd(&var_238, 1, arg3, arg4, &var_180, arg5[0xa], 
            *(arg5 + 0x5f), *(arg5 + 0x59));
        char* rax_3 = var_238;
        result = result_1;
        
        if (rax_3 != -0x8000000000000000)
        {
            int24_t var_38_1 = var_1e0;
            int128_t var_48_1 = var_1f0;
            int128_t var_58_1 = var_200;
            int128_t var_68_1 = var_210;
            int128_t var_78_1 = var_220;
            char* var_90 = rax_3;
            void* result_3 = result;
            int64_t* var_80_1 = var_228;
            char rdx_2 = *(arg5 + 0x5e);
            char var_239_1 = var_23c;
            char var_23b = *(arg5 + 0x5b);
            char var_23a_1 = rdx_2;
            int64_t var_1d8;
            int64_t var_1c8;
            int128_t var_e8_1;
            int64_t var_d8_1;
            
            if (!*(arg5 + 0x5c))
            {
                if (!(uu_join::State::initialize::h54362a96114b67e1(&var_148, &var_23c, 0) & 1))
                {
                    if (!(uu_join::State::initialize::h54362a96114b67e1(&var_90, &var_23c, 
                        *(arg5 + 0x5c)) & 1))
                    {
                        var_d8_1 = arg5[2];
                        var_e8_1 = *arg5;
                        rbp = 0;
                        label_45f395:
                        char rax_12 = *(arg5 + 0x5f);
                        char rcx_8 = var_23c;
                        int128_t var_178 = var_e8_1;
                        int64_t var_168_1 = var_d8_1;
                        char var_150_1 = rax_12;
                        char var_14f_1 = rcx_8;
                        int128_t var_160_1 = *(arg5 + 0x20);
                        std::io::stdio::stdout::hb6a8e10bcccf3287();
                        int64_t* var_d0 = &std::io::stdio::STDOUT::h411b213c5c9add46;
                        void var_1a8;
                        std::io::buffered::bufwriter::BufWriter$LT$W$GT$::with_capacity::h5551d416d8c9c645(&var_1a8, std::io::stdio::Stderr::lock::h0a4e4370fd1671bb(&var_d0));
                        
                        if (!*(arg5 + 0x5d))
                        {
                            label_45f490:
                            int64_t* var_c8;
                            void* result_12;
                            
                            if (!var_138_1)
                            {
                                label_45f6e1:
                                uint64_t result_8;
                                int64_t* rdx_20;
                                result_8 = uu_join::State::finalize::h099983d2386acea2(&var_148, 
                                    &var_1a8, &var_23b, &var_178);
                                result = result_8;
                                
                                if (!result_8)
                                {
                                    core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$::hbf3fd43a08bd87ba(0, rdx_20);
                                    uint64_t result_9;
                                    int64_t* rdx_22;
                                    result_9 = uu_join::State::finalize::h099983d2386acea2(&var_90, 
                                        &var_1a8, &var_23b, &var_178);
                                    result = result_9;
                                    
                                    if (!result_9)
                                    {
                                        core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$::hbf3fd43a08bd87ba(0, rdx_22);
                                        
                                        if (!_$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::h361f35c4ed60ff1c(&var_1a8))
                                        {
                                            if (*var_f0_1[2] || *var_38_1[2] == 1)
                                            {
                                                int64_t rax_34;
                                                int64_t rdx_23;
                                                rax_34 =
                                                    uucore::execution_phrase::hf0e80cb4793732ad();
                                                var_1d8 = rax_34;
                                                int64_t var_1d0_2 = rdx_23;
                                                var_c8 = &var_1d8;
                                                int64_t (* var_c0_1)(int64_t* arg1, int64_t arg2) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h76c68e868af0404d;
                                                var_238 = &data_4fd2e0;
                                                int64_t var_230 = 2;
                                                *var_220[8] = 0;
                                                int64_t** var_228_1 = &var_c8;
                                                var_220 = 1;
                                                std::io::stdio::_eprint::h57899770eacec2ad(
                                                    &var_238);
                                                uucore::mods::error::set_exit_code::hbbe6ffc423a314f1(1);
                                            }
                                            
                                            core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$std..io..stdio..StdoutLock$GT$$GT$::h99bfffcaf31f1104(&var_1a8);
                                            core::ptr::drop_in_place$LT$uu_join..Repr$LT$uu_join..LineSep$GT$$GT$::h5846ed3b82b42ada(var_178, *var_178[8]);
                                            core::ptr::drop_in_place$LT$uu_join..State$GT$::h3f62fe6e150a8be7(&var_90);
                                            core::ptr::drop_in_place$LT$uu_join..State$GT$::h3f62fe6e150a8be7(&var_148);
                                            core::ptr::drop_in_place$LT$uu_join..SepSetting$GT$::hde07b23cd29c05dc(arg5[6], arg5[7]);
                                            
                                            if (rbp)
                                                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_join..Spec$GT$$GT$::hf3f87f7a691b88c9(*arg5, arg5[1]);
                                            
                                            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h58ee7191efc6e1eb(arg5[3], arg5[4]);
                                            return nullptr;
                                        }
                                        
                                        result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                                    }
                                    else if (_$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::h361f35c4ed60ff1c(&var_1a8))
                                    {
                                        result_12 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                                        core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$clap_builder..builder..value_parser..AnyValueParser$GT$$GT$::ha829dfc67254713b(result, rdx_22);
                                        result = result_12;
                                    }
                                }
                                else if (_$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::h361f35c4ed60ff1c(&var_1a8))
                                {
                                    result_12 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                                    core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$clap_builder..builder..value_parser..AnyValueParser$GT$$GT$::ha829dfc67254713b(result, rdx_20);
                                    result = result_12;
                                }
                            }
                            else
                            {
                                while (true)
                                {
                                    if (!var_80_1)
                                        goto label_45f6e1;
                                    
                                    int64_t rax_18;
                                    uint64_t rdx_9;
                                    rax_18 = uu_join::State::get_current_key::hb0aa7b8c555c38dc(
                                        &var_148);
                                    int64_t rax_19;
                                    uint64_t rdx_10;
                                    rax_19 =
                                        uu_join::State::get_current_key::hb0aa7b8c555c38dc(&var_90);
                                    char rax_20 =
                                        uu_join::Input$LT$Sep$GT$::compare::h365eb74b1ebb2c70(
                                        var_23b, rax_18, rdx_9, rax_19, rdx_10);
                                    
                                    if (!rax_20)
                                    {
                                        uu_join::State::extend::h2ec74ec0241156b7(&var_238, 
                                            &var_148, &var_23b);
                                        
                                        if (var_238 == -0x7fffffffffffffff)
                                        {
                                            result = result_1;
                                            
                                            if (_$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::h361f35c4ed60ff1c(&var_1a8))
                                            {
                                                void* result_10 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                                                core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$clap_builder..builder..value_parser..AnyValueParser$GT$$GT$::ha829dfc67254713b(result, var_228);
                                                result = result_10;
                                            }
                                            
                                            goto label_45f870;
                                        }
                                        
                                        var_c8 = var_238;
                                        uu_join::State::extend::h2ec74ec0241156b7(&var_238, 
                                            &var_90, &var_23b);
                                        
                                        if (var_238 == -0x7fffffffffffffff)
                                        {
                                            result = result_1;
                                            
                                            if (_$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::h361f35c4ed60ff1c(&var_1a8))
                                            {
                                                void* result_11 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                                                core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$clap_builder..builder..value_parser..AnyValueParser$GT$$GT$::ha829dfc67254713b(result, var_228);
                                                result = result_11;
                                            }
                                            
                                            core::ptr::drop_in_place$LT$core..option..Option$LT$uu_join..Line$GT$$GT$::h0fad273de0c46d5d(&var_c8);
                                            goto label_45f870;
                                        }
                                        
                                        var_1c8 = var_228;
                                        var_1d8 = var_238;
                                        int64_t rax_22;
                                        
                                        if (*(arg5 + 0x5a))
                                            rax_22 = uu_join::State::combine::h82d4988c426e7f5d(
                                                &var_148, &var_1a8, &var_90, &var_178);
                                        
                                        if (*(arg5 + 0x5a) && rax_22)
                                        {
                                            result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                                            core::ptr::drop_in_place$LT$core..option..Option$LT$uu_join..Line$GT$$GT$::h0fad273de0c46d5d(&var_1d8);
                                            core::ptr::drop_in_place$LT$core..option..Option$LT$uu_join..Line$GT$$GT$::h0fad273de0c46d5d(&var_c8);
                                            goto label_45f870;
                                        }
                                        
                                        var_228 = var_228;
                                        var_238 = var_c8;
                                        uu_join::State::reset::hf11a3d581915b2af(&var_148, 
                                            &var_238);
                                        var_220 = var_220;
                                        var_228 = var_1c8;
                                        var_238 = var_1d8;
                                        uu_join::State::reset::hf11a3d581915b2af(&var_90, &var_238);
                                    }
                                    else
                                    {
                                        if (rax_20 != 1)
                                        {
                                            uint64_t result_7;
                                            int64_t* rdx_18;
                                            result_7 = uu_join::State::skip_line::hdd2ea2f388959027(
                                                &var_148, &var_1a8, &var_23b, &var_178);
                                            result = result_7;
                                            
                                            if (result_7)
                                            {
                                                if (!_$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::h361f35c4ed60ff1c(&var_1a8))
                                                    goto label_45f870;
                                                
                                                result_12 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                                                core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$clap_builder..builder..value_parser..AnyValueParser$GT$$GT$::ha829dfc67254713b(result, rdx_18);
                                                break;
                                            }
                                            
                                            core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$::hbf3fd43a08bd87ba(0, rdx_18);
                                        }
                                        else
                                        {
                                            uint64_t result_6;
                                            int64_t* rdx_13;
                                            result_6 = uu_join::State::skip_line::hdd2ea2f388959027(
                                                &var_90, &var_1a8, &var_23b, &var_178);
                                            result = result_6;
                                            
                                            if (result_6)
                                            {
                                                if (!_$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::h361f35c4ed60ff1c(&var_1a8))
                                                    goto label_45f870;
                                                
                                                result_12 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                                                core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$clap_builder..builder..value_parser..AnyValueParser$GT$$GT$::ha829dfc67254713b(result, rdx_13);
                                                break;
                                            }
                                            
                                            core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$::hbf3fd43a08bd87ba(0, rdx_13);
                                        }
                                        
                                        *var_f0_1[3] = 1;
                                        *var_38_1[3] = 1;
                                    }
                                    
                                    if (!var_138_1)
                                        goto label_45f6e1;
                                }
                                
                                result = result_12;
                            }
                        }
                        else if (!uu_join::State::print_headers::h9346e2794dbd8a24(&var_148, 
                            &var_1a8, &var_90, &var_178))
                        {
                            if (!uu_join::State::reset_read_line::h4856296dc2177a1c(&var_148, 
                                &var_23b))
                            {
                                if (!uu_join::State::reset_read_line::h4856296dc2177a1c(&var_90, 
                                        &var_23b))
                                    goto label_45f490;
                                
                                result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                            }
                            else
                                result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                        }
                        else
                            result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                        
                        label_45f870:
                        core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$std..io..stdio..StdoutLock$GT$$GT$::h99bfffcaf31f1104(&var_1a8);
                        core::ptr::drop_in_place$LT$uu_join..Repr$LT$uu_join..LineSep$GT$$GT$::h5846ed3b82b42ada(var_178, *var_178[8]);
                    }
                    else
                    {
                        result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                        rbp = 1;
                    }
                }
                else
                {
                    result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                    rbp = 1;
                }
            }
            else
            {
                uint64_t rax_5 = alloc::alloc::Global::alloc_impl::h6fb1b6049873c120(8, 0x10);
                
                if (!rax_5)
                {
                    alloc::alloc::handle_alloc_error::h88aa4f4f9d19c4f9();
                    /* no return */
                }
                
                *rax_5 = 0;
                char* rcx_7 = var_238;
                *(rax_5 + 8) = var_238;
                *(rax_5 + 1) = rcx_7;
                var_1d8 = 1;
                var_1c8 = 1;
                var_238 = &var_23c;
                result_1 = arg5 + 0x5c;
                var_228 = &var_1d8;
                uint64_t result_4;
                int64_t* rdx_4;
                result_4 = uu_join::exec::_$u7b$$u7b$closure$u7d$$u7d$::h09077aa151b0d365(&var_238, 
                    &var_148);
                result = result_4;
                uint64_t result_5;
                
                if (!result_4)
                {
                    result_5 = uu_join::exec::_$u7b$$u7b$closure$u7d$$u7d$::h09077aa151b0d365(
                        &var_238, &var_90);
                    result = result_5;
                }
                
                if (!result_4 && !result_5)
                {
                    var_d8_1 = var_1c8;
                    var_e8_1 = var_1d8;
                    rbp = 1;
                    goto label_45f395;
                }
                
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_join..Spec$GT$$GT$::hf3f87f7a691b88c9(var_1d8, rax_5);
                rbp = 1;
            }
            core::ptr::drop_in_place$LT$uu_join..State$GT$::h3f62fe6e150a8be7(&var_90);
        }
        else
            rbp = 1;
        
        core::ptr::drop_in_place$LT$uu_join..State$GT$::h3f62fe6e150a8be7(&var_148);
        core::ptr::drop_in_place$LT$uu_join..SepSetting$GT$::hde07b23cd29c05dc(arg5[6], arg5[7]);
        
        if (rbp)
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_join..Spec$GT$$GT$::hf3f87f7a691b88c9(
                *arg5, arg5[1]);
    }
    else
    {
        core::ptr::drop_in_place$LT$uu_join..SepSetting$GT$::hde07b23cd29c05dc(arg5[6], arg5[7]);
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_join..Spec$GT$$GT$::hf3f87f7a691b88c9(
            *arg5, arg5[1]);
    }
    
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h58ee7191efc6e1eb(arg5[3], arg5[4]);
    return result;
}
