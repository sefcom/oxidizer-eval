
  int64_t* uu_paste::paste::he585c60ea6ad59b1(int64_t* arg1, int32_t arg2, int64_t arg3, int64_t arg4, char arg5)

{
    int64_t* var_a8;
    uu_paste::parse_delimiters::hdea474197eebcdf0(&var_a8, arg3, arg4);
    int64_t* var_a0;
    
    if (var_a8)
    {
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::h178417ce66b4845b(arg1);
        return var_a0;
    }
    
    int64_t* var_98;
    int64_t* var_120_1 = var_98;
    int64_t var_110 = 0;
    int64_t rbx;
    rbx = 1;
    int64_t* var_d0_1 = arg1;
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::hc0309f6673228509(&var_a8, arg1[2], 0);
    
    if (var_a8)
    {
        alloc::raw_vec::handle_error::h2372476369f9b8ac(var_a0);
        /* no return */
    }
    
    int128_t* rax_3 = var_98;
    int64_t* var_e8 = var_a0;
    int64_t var_d8_1 = 0;
    int64_t var_108;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h05a7d1457638e433(&var_108, arg1);
    int128_t* var_c0;
    _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hf533bc1050936820(&var_c0, &var_108);
    int128_t* rbp_1;
    int64_t var_138;
    int128_t* var_58;
    
    if (var_c0 == -0x8000000000000000)
    {
        label_4abd67:
        core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$alloc..string..String$GT$$GT$::hfd58dfe50f3f8eb9(&var_108);
        std::io::stdio::stdout::h077da66234850927();
        var_a8 = &std::io::stdio::STDOUT::hdbe36c11cd3014ce;
        int64_t* var_140 = std::io::stdio::Stderr::lock::h890f7962a170fc90(&var_a8);
        char var_14d = arg5;
        uu_paste::DelimiterState::new::hf0d8373e3ee9ca93(&var_a8, var_a0, var_120_1);
        var_138 = 0;
        int64_t var_130_1 = 1;
        int64_t var_128_2 = 0;
        
        if (!arg2)
        {
            _$LT$T$u20$as$u20$alloc..vec..spec_from_elem..SpecFromElem$GT$::from_elem::h77e6ba0b5c65416b(&var_108, var_d8_1);
            int32_t var_118_1;
            var_118_1 = &data_513528;
            
            while (true)
            {
                uint64_t var_128_4 = 0;
                var_58 = rax_3;
                void* var_50_1 = &rax_3[var_d8_1 * 3];
                int64_t var_48_1 = 0;
                int64_t rbx_5 = 0;
                
                while (true)
                {
                    int64_t rax_16;
                    int64_t* rdx_8;
                    rax_16 = _$LT$core..iter..adapters..enumerate..Enumerate$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h42462181228ea0b1(&var_58);
                    
                    if (!rdx_8)
                        break;
                    
                    int64_t var_f8;
                    int64_t rsi_17 = var_f8;
                    
                    if (rax_16 < rsi_17)
                    {
                        char* var_100;
                        
                        if (var_100[rax_16])
                            goto label_4abf60;
                        
                        uu_paste::InputSource::read_until::ha189b0ba8cf073bb(&var_c0, rdx_8, arg5, 
                            &var_138);
                        rbp_1 = var_c0;
                        
                        if (rbp_1)
                            goto label_4ac10f;
                        
                        int64_t* var_b8;
                        
                        if (!var_b8)
                        {
                            rsi_17 = var_f8;
                            
                            if (rax_16 < rsi_17)
                            {
                                var_100[rax_16] = 1;
                                label_4abf60:
                                rbx_5 += 1;
                                uu_paste::DelimiterState::write_delimiter::h3f07c0732667350a(
                                    &var_a8, &var_138);
                                continue;
                            }
                        }
                        else
                        {
                            uu_paste::remove_trailing_line_ending_byte::h9c66266c54fb3aec(arg5, 
                                &var_138);
                            uu_paste::DelimiterState::write_delimiter::h3f07c0732667350a(&var_a8, 
                                &var_138);
                            continue;
                        }
                        
                        var_118_1 = &data_513540;
                    }
                    
                    core::panicking::panic_bounds_check::h25a5330941572dd1(rax_16, rsi_17);
                    /* no return */
                }
                
                if (rbx_5 == var_d8_1)
                {
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$bool$GT$$GT$::h75ed7e5d09a18263(
                        &var_108);
                    goto label_4ac0b8;
                }
                
                uu_paste::DelimiterState::remove_trailing_delimiter::h05f8c54b5ae335cd(var_a8, 
                    var_98, &var_138);
                int128_t* rax_22;
                
                if (_$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::h10000d12d1c1ff48(&var_140, var_130_1, var_128_4))
                    rax_22 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
                else if (_$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::h10000d12d1c1ff48(&var_140, &var_14d, 1))
                    rax_22 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
                else
                {
                    uu_paste::DelimiterState::reset_to_first_delimiter::h9238978dbebe5df3(&var_a8);
                    continue;
                }
                
                rbp_1 = rax_22;
                label_4ac10f:
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$bool$GT$$GT$::h75ed7e5d09a18263(
                    &var_108);
                break;
            }
        }
        else
        {
            int64_t rax_9;
            int64_t rdx_4;
            rax_9 = _$LT$$RF$mut$u20$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h205b584f20030d6b(&var_e8);
            var_108 = rax_9;
            int64_t var_100_1 = rdx_4;
            int128_t* rax_13;
            
            while (true)
            {
                int64_t* rax_10 = _$LT$core..slice..iter..IterMut$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hcf19a3115311c622(&var_108);
                
                if (!rax_10)
                {
                    label_4ac0b8:
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h12b87962429c2728(
                        &var_138);
                    core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::h17cbaf2a99daf26d(
                        var_140);
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_paste..InputSource$GT$$GT$::h99c3d173137c32f8(&var_e8);
                    core::ptr::drop_in_place$LT$core..cell..once..OnceCell$LT$alloc..rc..Rc$LT$core..cell..RefCell$LT$std..io..stdio..Stdin$GT$$GT$$GT$$GT$::h784acaad3057eb27(&var_110);
                    core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$$u5b$alloc..boxed..Box$LT$$u5b$u8$u5d$$GT$$u5d$$GT$$GT$::h9aef2e2029ad91ff(var_a0, var_120_1);
                    return nullptr;
                }
                
                uint64_t var_128_3 = 0;
                
                while (true)
                {
                    uu_paste::InputSource::read_until::ha189b0ba8cf073bb(&var_58, rax_10, arg5, 
                        &var_138);
                    rbp_1 = var_58;
                    
                    if (rbp_1)
                        goto label_4ac119;
                    
                    int64_t* var_50;
                    
                    if (!var_50)
                        break;
                    
                    uu_paste::remove_trailing_line_ending_byte::h9c66266c54fb3aec(arg5, &var_138);
                    uu_paste::DelimiterState::write_delimiter::h3f07c0732667350a(&var_a8, &var_138);
                }
                
                uu_paste::DelimiterState::remove_trailing_delimiter::h05f8c54b5ae335cd(var_a8, 
                    var_98, &var_138);
                
                if (_$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::h10000d12d1c1ff48(&var_140, var_130_1, var_128_3))
                {
                    rax_13 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
                    break;
                }
                
                if (_$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::h10000d12d1c1ff48(&var_140, &var_14d, 1))
                {
                    rax_13 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
                    break;
                }
            }
            
            rbp_1 = rax_13;
        }
        
        label_4ac119:
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h12b87962429c2728(&var_138);
        core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::h17cbaf2a99daf26d(var_140);
    }
    else
    {
        while (true)
        {
            uint64_t var_b0;
            uint64_t var_128_1 = var_b0;
            var_138 = var_c0;
            int64_t var_130;
            int128_t var_88;
            int64_t var_48;
            uint128_t zmm0_2;
            
            if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h89f186647b952d92(var_130, var_b0, "-zero-terminatedline delimiter i…", 1))
            {
                std::fs::File::open::h7451de5ec215f10c(&var_a8, var_130);
                
                if (var_a8)
                {
                    rbp_1 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h8c7c8706fc0e4609(
                        &var_138);
                    core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$alloc..string..String$GT$$GT$::hfd58dfe50f3f8eb9(&var_108);
                    break;
                }
                
                std::io::buffered::bufreader::BufReader$LT$R$GT$::with_capacity::h4a8f926ed93deb85(
                    &var_a8, 0x2000, *var_a8[4]);
                zmm0_2 = var_a8;
                var_58 = var_98;
                var_48 = var_88;
            }
            else
            {
                int64_t* rbx_2 = *
                    core::cell::once::OnceCell$LT$T$GT$::get_or_try_init::h7d4856c53a0eebb3(
                    &var_110);
                alloc::rc::RcInnerPtr::inc_strong::h5f27909c12118100(rbx_2);
                zmm0_2 = _mm_slli_si128(rbx_2, 8);
            }
            
            var_a8 = zmm0_2;
            var_88 = var_48;
            var_98 = var_58;
            alloc::vec::Vec$LT$T$C$A$GT$::push::h23477c10bc9aacfb(&var_e8, &var_a8);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h8c7c8706fc0e4609(&var_138);
            _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hf533bc1050936820(&var_c0, &var_108);
            
            if (var_c0 == -0x8000000000000000)
                goto label_4abd67;
        }
    }
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_paste..InputSource$GT$$GT$::h99c3d173137c32f8(
        &var_e8);
    core::ptr::drop_in_place$LT$core..cell..once..OnceCell$LT$alloc..rc..Rc$LT$core..cell..RefCell$LT$std..io..stdio..Stdin$GT$$GT$$GT$$GT$::h784acaad3057eb27(&var_110);
    core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$$u5b$alloc..boxed..Box$LT$$u5b$u8$u5d$$GT$$u5d$$GT$$GT$::h9aef2e2029ad91ff(var_a0, var_120_1);
    return rbp_1;
}
