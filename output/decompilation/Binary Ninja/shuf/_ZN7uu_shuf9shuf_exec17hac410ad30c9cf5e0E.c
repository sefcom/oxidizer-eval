
  int128_t* uu_shuf::shuf_exec::hac410ad30c9cf5e0(void* arg1, int64_t* arg2)

{
    void** const r12;
    void** const var_28 = r12;
    uint64_t rbp;
    int128_t* result;
    int128_t var_b8;
    int128_t* result_1;
    int32_t var_80;
    int128_t var_78;
    void* const rcx_1;
    int64_t* rdx;
    
    if (*arg2 != -0x8000000000000000)
    {
        int64_t var_a8_1 = arg2[2];
        var_b8 = *arg2;
        std::fs::File::create::hb8ccd5b0dd142e83(&var_78, *var_b8[8]);
        _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::hddbe3a5b2ee70831(&result_1, &var_78, &var_b8);
        result = result_1;
        
        if (!result)
        {
            int64_t* rax_2 = alloc::boxed::Box$LT$T$GT$::new::ha833a196b0b969ec(var_80);
            rbp = 1;
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h82574bbf4bf299f6(&var_b8);
            rdx = rax_2;
            rcx_1 = &data_534f48;
            goto label_4712be;
        }
        
        rbp = 1;
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h82574bbf4bf299f6(&var_b8);
        rbp = 1;
    }
    else
    {
        rbp = 1;
        std::io::stdio::stdout::h077da66234850927();
        rdx = alloc::boxed::Box$LT$T$GT$::new::h47aa554a48e45ddf(
            &std::io::stdio::STDOUT::hdbe36c11cd3014ce);
        rcx_1 = &data_534ef8;
        label_4712be:
        rbp = 1;
        int64_t var_60;
        std::io::buffered::bufwriter::BufWriter$LT$W$GT$::with_capacity::h2cd23da24bfb1765(&var_60, 
            0x2000, rdx, rcx_1);
        int32_t var_98;
        
        if (arg2[3] != -0x8000000000000000)
        {
            int64_t var_a8_3 = arg2[5];
            var_b8 = *(arg2 + 0x18);
            std::fs::File::open::h1adc330ffb93a969(&var_78, *var_b8[8]);
            _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::hb868c3ea7eaf226e(&result_1, &var_78, &var_b8);
            result = result_1;
            
            if (!result)
            {
                int32_t var_94_1 = var_80;
                var_98 = 0;
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h82574bbf4bf299f6(&var_b8);
                rbp = 0;
                
                if (arg2[7])
                    goto label_471307;
                
                goto label_4714c5;
            }
            
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h82574bbf4bf299f6(&var_b8);
            rbp = 0;
        }
        else
        {
            rbp = 1;
            int64_t var_90_1 = rand::rngs::thread::thread_rng::hb51ef0c041e68525();
            var_98 = 1;
            rbp = 1;
            char* var_58;
            int64_t var_50;
            
            if (!arg2[7])
            {
                label_4714c5:
                int64_t rax_14;
                int64_t rdx_11;
                rax_14 = _$LT$alloc..vec..Vec$LT$$RF$$u5b$u8$u5d$$GT$$u20$as$u20$uu_shuf..Shufable$GT$::partial_shuffle::h44688f65b4d991d5(arg1, &var_98, arg2[6]);
                var_b8 = rax_14;
                *var_b8[8] = rdx_11;
                int128_t* i;
                
                do
                {
                    int64_t rax_15;
                    uint64_t rdx_12;
                    rax_15 = _$LT$core..iter..adapters..copied..Copied$LT$I$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hc52c302a5b3cda84(&var_b8);
                    
                    if (!rax_15)
                        goto label_47147a;
                    
                    int128_t* result_4 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h8348fd0bc33a1273(_$LT$$RF$$u5b$u8$u5d$$u20$as$u20$uu_shuf..Writable$GT$::write_all_to::hde169efa667ae96b(rax_15, rdx_12, &var_60));
                    result = result_4;
                    
                    if (result_4)
                        break;
                    
                    char rax_17 = *(arg2 + 0x39);
                    var_78 = rax_17;
                    char const (** rax_18)[0xe1];
                    
                    if (var_60 - var_50 <= 1)
                        rax_18 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::ha5c718a139f25917(&var_60, &var_78, 1);
                    else
                    {
                        var_58[var_50] = rax_17;
                        var_50 += 1;
                        rax_18 = nullptr;
                    }
                    
                    i = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h9b8bd7b325589adc(rax_18);
                    result = i;
                } while (!i);
                rbp = rbp;
                core::ptr::drop_in_place$LT$uu_shuf..WrappedRng$GT$::h54b6737fa54cf34d(&var_98);
            }
            else
            {
                label_471307:
                
                if (!_$LT$alloc..vec..Vec$LT$$RF$$u5b$u8$u5d$$GT$$u20$as$u20$uu_shuf..Shufable$GT$::is_empty::h1f0a71404213f066(*(arg1 + 0x10)))
                {
                    int64_t r13_1 = arg2[6];
                    
                    if (!r13_1)
                    {
                        label_47147a:
                        core::ptr::drop_in_place$LT$uu_shuf..WrappedRng$GT$::h54b6737fa54cf34d(
                            &var_98);
                        core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Write$GT$$GT$$GT$::ha3b05e8de249092a(&var_60);
                        return nullptr;
                    }
                    
                    int64_t rbp_2 = 0;
                    
                    while (true)
                    {
                        rbp_2 = _$LT$usize$u20$as$u20$core..iter..range..Step$GT$::forward_unchecked::he44ce7238773bbb8(rbp_2);
                        int64_t rax_9;
                        uint64_t rdx_5;
                        rax_9 = _$LT$alloc..vec..Vec$LT$$RF$$u5b$u8$u5d$$GT$$u20$as$u20$uu_shuf..Shufable$GT$::choose::h3523e9548edb7615(arg1, &var_98);
                        int128_t* result_2 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h84611fd28ee95474(_$LT$$RF$$u5b$u8$u5d$$u20$as$u20$uu_shuf..Writable$GT$::write_all_to::hde169efa667ae96b(rax_9, rdx_5, &var_60));
                        result = result_2;
                        
                        if (result_2)
                            break;
                        
                        char rax_11 = *(arg2 + 0x39);
                        var_b8 = rax_11;
                        char const (** rax_12)[0xe1];
                        
                        if (var_60 - var_50 <= 1)
                            rax_12 = std::io::buffered::bufwriter::BufWriter$LT$W$GT$::write_all_cold::ha5c718a139f25917(&var_60, &var_b8, 1);
                        else
                        {
                            var_58[var_50] = rax_11;
                            var_50 += 1;
                            rax_12 = nullptr;
                        }
                        
                        int128_t* result_3 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h8a19c40d77640a40(rax_12);
                        result = result_3;
                        
                        if (result_3)
                            break;
                        
                        if (rbp_2 >= r13_1)
                            goto label_47147a;
                    }
                    
                    rbp = rbp;
                    core::ptr::drop_in_place$LT$uu_shuf..WrappedRng$GT$::h54b6737fa54cf34d(&var_98);
                }
                else
                {
                    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h118a158527e98cdc(
                        &var_78, "no lines to repeat", 0x12);
                    int64_t var_68;
                    int64_t var_a8_2 = var_68;
                    var_b8 = var_78;
                    int32_t var_a0_1 = 1;
                    result = alloc::boxed::Box$LT$T$GT$::new::h1b07cb96cdbb794f(&var_b8);
                    core::ptr::drop_in_place$LT$uu_shuf..WrappedRng$GT$::h54b6737fa54cf34d(&var_98);
                }
            }
        }
        core::ptr::drop_in_place$LT$std..io..buffered..bufwriter..BufWriter$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Write$GT$$GT$$GT$::ha3b05e8de249092a(&var_60);
    }
    
    if (rbp && arg2[3] != -0x8000000000000000)
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h82574bbf4bf299f6(&arg2[3]);
    
    return result;
}
