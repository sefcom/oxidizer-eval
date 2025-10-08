
  int64_t* uu_paste::paste::hd569a65ca9908b3d(int64_t* arg1, int32_t arg2, int64_t arg3, int64_t arg4, char arg5)

{
    int32_t var_88;
    uu_paste::parse_delimiters::h5f1c6018d1fadef2(&var_88, arg3, arg4);
    int64_t* var_80;
    
    if (var_88 == 1)
    {
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h47955211e39b0d44(arg1);
        return var_80;
    }
    
    void* var_78;
    void* var_f8_1 = var_78;
    int64_t* var_118 = nullptr;
    int64_t* var_b0_1 = arg1;
    int64_t rax_3;
    int64_t* rdx_1;
    rax_3 =
        alloc::raw_vec::RawVecInner$LT$A$GT$::with_capacity_in::h1fa32acdd47f5e6e(arg1[2], 8, 0x30);
    int64_t var_d0 = rax_3;
    void* var_c0_1 = nullptr;
    int64_t var_f0;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::hb9d9948c54a837f5(&var_f0, arg1);
    int64_t var_130;
    _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hdc1515f9b0e405fd(&var_130, &var_f0);
    int64_t r14_1 = var_130;
    int64_t* rbx_2;
    int64_t* var_a8;
    
    if (-(r14_1) == -0x8000000000000000)
    {
        label_45682f:
        core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$alloc..string..String$GT$$GT$::hf4cbd51fdc55d6c9(&var_f0);
        std::io::stdio::stdout::hb6a8e10bcccf3287();
        var_88 = &std::io::stdio::STDOUT::h411b213c5c9add46;
        int64_t* var_100 = std::io::stdio::Stderr::lock::h0a4e4370fd1671bb(&var_88);
        char var_135 = arg5;
        void* r15 = var_c0_1;
        uu_paste::DelimiterState::new::h7196cb5a72bb3f8f(&var_88, var_80, var_f8_1);
        var_130 = 0;
        int64_t var_128_1 = 1;
        int64_t var_120_1 = 0;
        int32_t var_110_1;
        
        if (!arg2)
        {
            _$LT$T$u20$as$u20$alloc..vec..spec_from_elem..SpecFromElem$GT$::from_elem::h6c63ae9419db974d(&var_f0, r15);
            void** const var_b8_1 = &data_4dec48;
            var_110_1 = r15;
            
            while (true)
            {
                uint64_t var_120_3 = 0;
                var_a8 = rdx_1;
                void* var_a0_1 = &rdx_1[r15 * 6];
                int64_t var_98_1 = 0;
                int64_t r14_3 = 0;
                char* var_e8;
                
                while (true)
                {
                    int64_t rax_15;
                    int64_t* rdx_7;
                    rax_15 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hab88b0f4a020608f(&var_a8);
                    
                    if (!rdx_7)
                        break;
                    
                    int64_t var_e0;
                    int64_t rsi_18 = var_e0;
                    
                    if (rax_15 < rsi_18)
                    {
                        if (var_e8[rax_15])
                            goto label_456a20;
                        
                        int64_t* var_40;
                        uu_paste::InputSource::read_until::hee62e15140cd6647(&var_40, rdx_7, arg5, 
                            &var_130);
                        rbx_2 = var_40;
                        
                        if (rbx_2)
                            goto label_456be4;
                        
                        void* var_38;
                        
                        if (!var_38)
                        {
                            rsi_18 = var_e0;
                            
                            if (rax_15 < rsi_18)
                            {
                                var_e8[rax_15] = 1;
                                label_456a20:
                                r14_3 += 1;
                                uu_paste::DelimiterState::write_delimiter::h2a9eb5f6e5ad5b62(
                                    &var_88, &var_130);
                                continue;
                            }
                        }
                        else
                        {
                            uu_paste::remove_trailing_line_ending_byte::hc8c21b920eceaeb3(arg5, 
                                &var_130);
                            uu_paste::DelimiterState::write_delimiter::h2a9eb5f6e5ad5b62(&var_88, 
                                &var_130);
                            continue;
                        }
                        
                        var_b8_1 = &data_4dec60;
                    }
                    
                    core::panicking::panic_bounds_check::h025cadc56a971af7(rax_15, rsi_18);
                    /* no return */
                }
                
                if (r14_3 == var_110_1)
                {
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h7026db00be8292ba(
                        var_f0, var_e8);
                    goto label_456b8a;
                }
                
                uu_paste::DelimiterState::remove_trailing_delimiter::h00dfcc6c7a63cba7(var_88, 
                    var_78, &var_130);
                int64_t* rax_21;
                
                if (_$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::hb8477e4d9e0e6d9b(&var_100, var_128_1, var_120_3))
                    rax_21 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                else if (_$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::hb8477e4d9e0e6d9b(&var_100, &var_135, 1))
                    rax_21 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                else
                {
                    uu_paste::DelimiterState::reset_to_first_delimiter::h68b38c960fbec6e1(&var_88);
                    r15 = var_c0_1;
                    continue;
                }
                
                rbx_2 = rax_21;
                label_456be4:
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h7026db00be8292ba(
                    var_f0, var_e8);
                break;
            }
        }
        else
        {
            int64_t* r12_2 = rdx_1;
            r15 = &r12_2[r15 * 6];
            var_110_1 = r15;
            int64_t* rax_10;
            
            while (true)
            {
                int64_t* r14_2 = &r12_2[6];
                
                if (r12_2 == r15)
                    r14_2 = r12_2;
                
                if (r12_2 == r15)
                {
                    label_456b8a:
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h7026db00be8292ba(
                        var_130, var_128_1);
                    core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::h3a2097f9ea964eb3(
                        var_100);
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_paste..InputSource$GT$$GT$::h3f66a46064943b9d(&var_d0);
                    core::ptr::drop_in_place$LT$core..cell..once..OnceCell$LT$alloc..rc..Rc$LT$core..cell..RefCell$LT$std..io..stdio..Stdin$GT$$GT$$GT$$GT$::hdf72225a02b0e473(&var_118);
                    core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$$u5b$alloc..boxed..Box$LT$$u5b$u8$u5d$$GT$$u5d$$GT$$GT$::h472f2e64428019f0(var_80, var_f8_1);
                    return nullptr;
                }
                
                uint64_t var_120_2 = 0;
                
                while (true)
                {
                    uu_paste::InputSource::read_until::hee62e15140cd6647(&var_a8, r12_2, arg5, 
                        &var_130);
                    rbx_2 = var_a8;
                    
                    if (rbx_2)
                        goto label_456bf3;
                    
                    void* var_a0;
                    
                    if (!var_a0)
                        break;
                    
                    uu_paste::remove_trailing_line_ending_byte::hc8c21b920eceaeb3(arg5, &var_130);
                    uu_paste::DelimiterState::write_delimiter::h2a9eb5f6e5ad5b62(&var_88, &var_130);
                }
                
                uu_paste::DelimiterState::remove_trailing_delimiter::h00dfcc6c7a63cba7(var_88, 
                    var_78, &var_130);
                r15 = var_110_1;
                
                if (_$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::hb8477e4d9e0e6d9b(&var_100, var_128_1, var_120_2))
                {
                    rax_10 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                    break;
                }
                
                r12_2 = r14_2;
                
                if (_$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::hb8477e4d9e0e6d9b(&var_100, &var_135, 1))
                {
                    rax_10 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                    break;
                }
            }
            
            rbx_2 = rax_10;
        }
        label_456bf3:
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h7026db00be8292ba(var_130, 
            var_128_1);
        core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::h3a2097f9ea964eb3(var_100);
    }
    else
    {
        while (true)
        {
            char* var_128;
            int64_t var_120;
            int64_t var_98;
            int128_t var_68;
            uint128_t zmm0_1;
            
            if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hc259b01c47836931(var_128, var_120))
            {
                std::fs::File::open::h0c7fcf95ad963e94(&var_88, var_128);
                
                if (var_88 == 1)
                {
                    rbx_2 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcbdda9fa4e628fd3(r14_1, 
                        var_128);
                    core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$alloc..string..String$GT$$GT$::hf4cbd51fdc55d6c9(&var_f0);
                    break;
                }
                
                int32_t var_84;
                std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::h822f1ebbe5adf6ce(
                    &var_88, var_84);
                zmm0_1 = var_88;
                var_a8 = var_78;
                var_98 = var_68;
            }
            else
            {
                core::cell::once::OnceCell$LT$T$GT$::get_or_try_init::h5ce5b77ec4535ef8(&var_118);
                alloc::rc::RcInnerPtr::inc_strong::hb344d9d86ac80a28(var_118);
                zmm0_1 = _mm_slli_si128(var_118, 8);
            }
            
            var_88 = zmm0_1;
            var_68 = var_98;
            var_78 = var_a8;
            alloc::vec::Vec$LT$T$C$A$GT$::push::hcfac60b1ab7def8b(&var_d0, &var_88);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcbdda9fa4e628fd3(r14_1, 
                var_128);
            _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hdc1515f9b0e405fd(&var_130, &var_f0);
            r14_1 = var_130;
            
            if (r14_1 == -0x8000000000000000)
                goto label_45682f;
        }
    }
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_paste..InputSource$GT$$GT$::h3f66a46064943b9d(
        &var_d0);
    core::ptr::drop_in_place$LT$core..cell..once..OnceCell$LT$alloc..rc..Rc$LT$core..cell..RefCell$LT$std..io..stdio..Stdin$GT$$GT$$GT$$GT$::hdf72225a02b0e473(&var_118);
    core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$$u5b$alloc..boxed..Box$LT$$u5b$u8$u5d$$GT$$u5d$$GT$$GT$::h472f2e64428019f0(var_80, var_f8_1);
    return rbx_2;
}
