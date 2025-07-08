
  void* uu_join::exec::h3549e6cfd5b8c4ea(int64_t arg1, uint64_t arg2, int64_t arg3, uint64_t arg4, int64_t* arg5)

{
    int64_t rbp;
    rbp = 1;
    std::io::stdio::stdin::h7215cc131abb55d8();
    void* var_1b0 = &std::io::stdio::stdin::INSTANCE::hd3a98c261e3f14b5;
    void* var_238;
    uu_join::State::new::h1e047ff86b763ae6(&var_238, 0, arg1, arg2, &var_1b0, arg5[9], 
        *(arg5 + 0x5f), arg5[0xb]);
    void* rax_1 = var_238;
    void* result_1;
    void* result = result_1;
    void* r13_1;
    char rbp_1;
    
    if (rax_1 != -0x8000000000000000)
    {
        int32_t var_1e0;
        int24_t var_98_1 = var_1e0;
        int128_t var_1f0;
        int128_t var_a8_1 = var_1f0;
        int128_t var_200;
        int128_t var_b8_1 = var_200;
        int128_t var_210;
        int128_t var_c8_1 = var_210;
        int128_t var_220;
        int128_t var_d8_1 = var_220;
        void* var_f0 = rax_1;
        void* result_2 = result;
        int64_t* var_228;
        int64_t* var_e0_1 = var_228;
        int32_t rcx_1;
        rcx_1 = 1;
        int32_t var_240_1 = rcx_1;
        uu_join::State::new::h1e047ff86b763ae6(&var_238, 1, arg3, arg4, &var_1b0, arg5[0xa], 
            *(arg5 + 0x5f), *(arg5 + 0x59));
        void* rax_3 = var_238;
        result = result_1;
        int32_t var_240_2;
        
        if (rax_3 == -0x8000000000000000)
        {
            rax_3 = 1;
            var_240_2 = rax_3;
            label_46e983:
            rbp_1 = var_240_2;
            core::ptr::drop_in_place$LT$uu_join..State$GT$::h61a06126cb4d297a(&var_f0);
            goto label_46e990;
        }
        
        int24_t var_38_1 = var_1e0;
        int128_t var_48_1 = var_1f0;
        int128_t var_58_1 = var_200;
        int128_t var_68_1 = var_210;
        int128_t var_78_1 = var_220;
        void* var_90 = rax_3;
        void* result_3 = result;
        int64_t* var_80_1 = var_228;
        char rcx_4 = *(arg5 + 0x5e);
        char var_242 = *(arg5 + 0x5b);
        char var_241_1 = rcx_4;
        uint32_t rax_5 = *(arg5 + 0x5c);
        char var_23a_1 = rax_5;
        int128_t var_1a8;
        int64_t var_198;
        int128_t var_148_1;
        int64_t var_138_1;
        void var_239;
        
        if (!rax_5)
        {
            rax_5 = 1;
            uint32_t var_240_4 = rax_5;
            uu_join::State::initialize::h1944f11392ba49f9(&var_f0, &var_239, 0);
            uu_join::State::initialize::h1944f11392ba49f9(&var_90, &var_239, *(arg5 + 0x5c));
            var_138_1 = arg5[2];
            var_148_1 = *arg5;
            var_240_2 = 0;
        }
        else
        {
            char* rax_6 = alloc::alloc::Global::alloc_impl::hf61749d460433fff(0x10);
            
            if (!rax_6)
            {
                rax_6 = 1;
                int32_t var_240_5 = rax_6;
                alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1();
                /* no return */
            }
            
            *rax_6 = 0;
            void* rdx_2 = var_238;
            *(rax_6 + 1) = var_238;
            *(rax_6 + 8) = rdx_2;
            void* rcx_5;
            rcx_5 = 1;
            int32_t var_240_3 = rcx_5;
            alloc::slice::hack::into_vec::h6319bf421152ad63(&var_1a8, rax_6, 1);
            var_238 = &var_239;
            result_1 = arg5 + 0x5c;
            var_228 = &var_1a8;
            uu_join::exec::_$u7b$$u7b$closure$u7d$$u7d$::h7152403be3f8124d(&var_238, &var_f0);
            uu_join::exec::_$u7b$$u7b$closure$u7d$$u7d$::h7152403be3f8124d(&var_238, &var_90);
            var_138_1 = var_198;
            var_148_1 = var_1a8;
            int64_t rax_7;
            rax_7 = 1;
            var_240_2 = rax_7;
        }
        char rax_9 = *(arg5 + 0x5f);
        int64_t var_168_1 = var_138_1;
        int128_t var_178 = var_148_1;
        char var_150_1 = rax_9;
        int128_t var_160_1 = *(arg5 + 0x20);
        std::io::stdio::stdout::h077da66234850927();
        int64_t* var_130 = &std::io::stdio::STDOUT::hdbe36c11cd3014ce;
        void var_1d8;
        std::io::buffered::bufwriter::BufWriter$LT$W$GT$::with_capacity::h7a3dd15b78101682(
            &var_1d8, 0x2000, std::io::stdio::Stderr::lock::h890f7962a170fc90(&var_130));
        int128_t* result_4;
        
        if (*(arg5 + 0x5d))
        {
            if (uu_join::State::print_headers::hb47e9ff319dcdc6d(&var_f0, &var_1d8, &var_90, 
                &var_178))
            {
                result_4 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
                label_46e8f5:
                result = result_4;
                label_46e95c:
                core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$std..io..stdio..StdoutLock$GT$$GT$::he0aa85dca1b04db9(&var_1d8);
                core::ptr::drop_in_place$LT$uu_join..Repr$LT$uu_join..LineSep$GT$$GT$::ha91a9001b81fc2d4(&var_178);
                core::ptr::drop_in_place$LT$uu_join..State$GT$::h61a06126cb4d297a(&var_90);
                goto label_46e983;
            }
            
            if (uu_join::State::reset_read_line::h7ee1af9aa4cf6448(&var_f0, &var_242))
            {
                result_4 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
                goto label_46e8f5;
            }
            
            if (!uu_join::State::reset_read_line::h7ee1af9aa4cf6448(&var_90, &var_242))
                goto label_46e5c2;
            
            result_4 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
            goto label_46e8f5;
        }
        
        label_46e5c2:
        int128_t* var_128;
        void* result_11;
        
        if (var_e0_1 && var_80_1)
        {
            while (true)
            {
                int64_t rax_14;
                uint64_t rdx_6;
                rax_14 = uu_join::State::get_current_key::h6b22667ac5a703a7(&var_f0);
                int64_t rax_15;
                uint64_t rdx_7;
                rax_15 = uu_join::State::get_current_key::h6b22667ac5a703a7(&var_90);
                char rax_16 = uu_join::Input$LT$Sep$GT$::compare::h29bf124cec785704(var_242, 
                    rax_14, rdx_6, rax_15, rdx_7);
                
                if (!rax_16)
                {
                    uu_join::State::extend::h62ea41b24b446422(&var_238, &var_f0, &var_242);
                    
                    if (var_238 == -0x7fffffffffffffff)
                    {
                        result = result_1;
                        
                        if (_$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::h3aed27a3c428fa93(&var_1d8))
                        {
                            void* result_9 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
                            core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$::h883bc028f3a866c4(result, var_228);
                            result = result_9;
                        }
                        
                        goto label_46e95c;
                    }
                    
                    var_128 = var_238;
                    uu_join::State::extend::h62ea41b24b446422(&var_238, &var_90, &var_242);
                    
                    if (var_238 == -0x7fffffffffffffff)
                    {
                        result = result_1;
                        
                        if (_$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::h3aed27a3c428fa93(&var_1d8))
                        {
                            void* result_10 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
                            core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$::h883bc028f3a866c4(result, var_228);
                            result = result_10;
                        }
                        
                        core::ptr::drop_in_place$LT$core..option..Option$LT$uu_join..Line$GT$$GT$::h8c0a51ffd9df4838(&var_128);
                        goto label_46e95c;
                    }
                    
                    var_198 = var_228;
                    var_1a8 = var_238;
                    int64_t rax_18;
                    
                    if (*(arg5 + 0x5a))
                        rax_18 = uu_join::State::combine::h87fbb4174e657c14(&var_f0, &var_1d8, 
                            &var_90, &var_178);
                    
                    if (*(arg5 + 0x5a) && rax_18)
                    {
                        result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
                        core::ptr::drop_in_place$LT$core..option..Option$LT$uu_join..Line$GT$$GT$::h8c0a51ffd9df4838(&var_1a8);
                        core::ptr::drop_in_place$LT$core..option..Option$LT$uu_join..Line$GT$$GT$::h8c0a51ffd9df4838(&var_128);
                        goto label_46e95c;
                    }
                    
                    var_228 = var_228;
                    var_238 = var_128;
                    int64_t r14_2;
                    r14_2 = 1;
                    uu_join::State::reset::h80c820df90bbe344(&var_f0, &var_238);
                    var_220 = var_220;
                    var_228 = var_198;
                    var_238 = var_1a8;
                    uu_join::State::reset::h80c820df90bbe344(&var_90, &var_238);
                }
                else
                {
                    if (rax_16 != 1)
                    {
                        int128_t* result_6;
                        int64_t* rdx_15;
                        result_6 = uu_join::State::skip_line::h7965670663e63102(&var_f0, &var_1d8, 
                            &var_242, &var_178);
                        result = result_6;
                        
                        if (result_6)
                        {
                            if (!_$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::h3aed27a3c428fa93(&var_1d8))
                                goto label_46e95c;
                            
                            result_11 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
                            core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$::h883bc028f3a866c4(result, rdx_15);
                            break;
                        }
                        
                        core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$::hdfca8e528d8a91fc(0, rdx_15);
                    }
                    else
                    {
                        int128_t* result_5;
                        int64_t* rdx_10;
                        result_5 = uu_join::State::skip_line::h7965670663e63102(&var_90, &var_1d8, 
                            &var_242, &var_178);
                        result = result_5;
                        
                        if (result_5)
                        {
                            if (!_$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::h3aed27a3c428fa93(&var_1d8))
                                goto label_46e95c;
                            
                            result_11 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
                            core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$::h883bc028f3a866c4(result, rdx_10);
                            break;
                        }
                        
                        core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$::hdfca8e528d8a91fc(0, rdx_10);
                    }
                    
                    *var_98_1[3] = 1;
                    *var_38_1[3] = 1;
                }
                
                if (!var_e0_1)
                    goto label_46e827;
                
                if (!var_80_1)
                    goto label_46e827;
            }
            
            goto label_46e954;
        }
        
        label_46e827:
        int128_t* result_7;
        int64_t* rdx_17;
        result_7 =
            uu_join::State::finalize::h3e9313ec919a4c47(&var_f0, &var_1d8, &var_242, &var_178);
        result = result_7;
        
        if (result_7)
        {
            if (!_$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::h3aed27a3c428fa93(&var_1d8))
                goto label_46e95c;
            
            result_11 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
            core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$::h883bc028f3a866c4(result, rdx_17);
            label_46e954:
            result = result_11;
            goto label_46e95c;
        }
        
        core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$::hdfca8e528d8a91fc(0, rdx_17);
        int128_t* result_8;
        int64_t* rdx_19;
        result_8 =
            uu_join::State::finalize::h3e9313ec919a4c47(&var_90, &var_1d8, &var_242, &var_178);
        result = result_8;
        
        if (result_8)
        {
            if (!_$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::h3aed27a3c428fa93(&var_1d8))
                goto label_46e95c;
            
            result_11 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
            core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Sync$u2b$core..marker..Send$GT$$GT$::h883bc028f3a866c4(result, rdx_19);
            goto label_46e954;
        }
        
        core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$::hdfca8e528d8a91fc(0, rdx_19);
        
        if (_$LT$std..io..buffered..bufwriter..BufWriter$LT$W$GT$$u20$as$u20$std..io..Write$GT$::flush::h3aed27a3c428fa93(&var_1d8))
        {
            result_4 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
            goto label_46e8f5;
        }
        
        if (*var_98_1[2] | *var_38_1[2])
        {
            int64_t rax_33;
            int64_t rdx_21;
            rax_33 = uucore::execution_phrase::h7a36a698673d06ab();
            var_1a8 = rax_33;
            *var_1a8[8] = rdx_21;
            var_128 = &var_1a8;
            int64_t (* var_120_1)(int64_t* arg1, int64_t arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h7a9acb5b6b087e94;
            var_238 = &data_5325f0;
            int64_t var_230 = 2;
            *var_220[8] = 0;
            int128_t** var_228_1 = &var_128;
            var_220 = 1;
            std::io::stdio::_eprint::hcdfeec148c7134f7(&var_238);
            uucore::mods::error::set_exit_code::hf3c39c5b4c05c2c0(1);
        }
        
        core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$std..io..stdio..StdoutLock$GT$$GT$::he0aa85dca1b04db9(&var_1d8);
        core::ptr::drop_in_place$LT$uu_join..Repr$LT$uu_join..LineSep$GT$$GT$::ha91a9001b81fc2d4(
            &var_178);
        core::ptr::drop_in_place$LT$uu_join..State$GT$::h61a06126cb4d297a(&var_90);
        core::ptr::drop_in_place$LT$uu_join..State$GT$::h61a06126cb4d297a(&var_f0);
        r13_1 = &arg5[3];
        core::ptr::drop_in_place$LT$uu_join..SepSetting$GT$::h9f16980b2393dbc4(&arg5[6]);
        
        if (var_23a_1)
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_join..Spec$GT$$GT$::hb0d1780117770078(
                arg5);
        
        result = nullptr;
    }
    else
    {
        rbp_1 = 1;
        label_46e990:
        core::ptr::drop_in_place$LT$uu_join..SepSetting$GT$::h9f16980b2393dbc4(&arg5[6]);
        
        if (rbp_1)
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_join..Spec$GT$$GT$::hb0d1780117770078(
                arg5);
        
        r13_1 = &arg5[3];
    }
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h8146444ea6c0efb2(r13_1);
    return result;
}
