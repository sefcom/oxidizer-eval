
  uint64_t uu_tail::follow::watch::follow::hb7449fea675f32af(int32_t* arg1, void* arg2)

{
    uint32_t rbp = *(arg2 + 0x48);
    char rax = uu_tail::follow::files::FileHandling::no_files_remaining::hdacea64a27534677(
        &arg1[0xe], rbp);
    char rax_1;
    
    if (rax)
        rax_1 = uu_tail::follow::files::FileHandling::only_stdin_remaining::h3f4a838c6c931811(
            &arg1[0xe]);
    
    uint64_t result;
    int128_t var_270;
    void* var_260;
    int128_t var_1f8;
    
    if (rax && !rax_1)
    {
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::ha6b2ce04d4e70875(&var_270, "no files remaining \ndirectory c…", 0x12);
        void* var_1e8_2 = var_260;
        var_1f8 = var_270;
        int32_t var_1e0_1 = 1;
        result = alloc::boxed::Box$LT$T$GT$::new::hb525c77ba03b79d9(&var_1f8);
    }
    else
    {
        char var_204_1 = rbp;
        int32_t* r12 = arg1;
        int32_t rax_2 = r12[0x22];
        uint64_t rbp_1 = *(arg2 + 0x4c);
        char rcx_1 = *(arg2 + 0x4a);
        int64_t rcx_2 = *(arg2 + 0x30);
        int32_t rcx_3 = *(arg2 + 0x38);
        int32_t var_200_1 = rax_2;
        char var_2b9_1 = rbp_1;
        
        if (rbp_1 == 2)
            goto label_4a523f;
        
        while (true)
        {
            if (rax_2
                && uu_tail::platform::unix::ProcessChecker::is_dead::hb09aad58966101f3(var_200_1))
            {
                result = 0;
                goto label_4a58b9;
            }
            
            label_4a523f:
            char rax_4 = *(r12 + 0x8e);
            int64_t var_258;
            char const (** const var_238)[0xa4];
            char const (** const* var_1e8)[0xa4];
            int32_t var_1e0;
            int128_t var_1d8;
            
            if (rax_4 == 2 || !(rax_4 & 1) || arg1[0x23] != 1)
            {
                label_4a5525:
                int64_t rsi_9 = *arg1;
                
                if (rsi_9 != 3)
                {
                    std::sync::mpmc::Receiver$LT$T$GT$::recv_timeout::h6504311de0d8ae9f(&var_270, 
                        rsi_9, *(arg1 + 8), rcx_2, rcx_3);
                    int64_t r14_2 = var_270;
                    int64_t var_298 = 0;
                    void* result_4 = 8;
                    int64_t var_288_1 = 0;
                    int32_t var_2a0_2 = r14_2;
                    char var_2a8_1;
                    int128_t var_250;
                    void* result_3;
                    int64_t var_240;
                    char const (* var_140)[0xa4];
                    
                    if (r14_2 - 1 > 6)
                    {
                        label_4a58de:
                        int64_t var_1c8_1 = var_240;
                        int128_t var_1d8_1 = var_250;
                        var_1e8 = var_260;
                        var_1f8 = var_270;
                        var_140 = &var_1f8;
                        uint64_t (* var_138_1)(int64_t* arg1, int64_t* arg2) = _$LT$notify..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h6dbce4ad7dfddfbd;
                        var_238 = &data_573870;
                        int64_t var_230_3 = 1;
                        int64_t var_218_1 = 0;
                        char const (** var_228_1)[0xa4] = &var_140;
                        int64_t var_220_1 = 1;
                        int128_t var_110;
                        core::option::Option$LT$T$GT$::map_or_else::h0ad4dbebb1db8692(&var_110, 
                            &var_238);
                        var_220_1 = 1;
                        var_238 = var_110;
                        int64_t var_100;
                        int64_t var_228_2 = var_100;
                        result = alloc::boxed::Box$LT$T$GT$::new::hb525c77ba03b79d9(&var_238);
                        core::ptr::drop_in_place$LT$notify..error..Error$GT$::hf2995e16b4f1d266(
                            &var_1f8);
                        r14_2 = 0;
                        var_2a8_1 = 0;
                        label_4a5830:
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::he0295db7e74c1801(&var_298);
                        
                        if (!(~var_2a0_2 & 6))
                            break;
                        
                        if (r14_2)
                            core::ptr::drop_in_place$LT$notify..error..ErrorKind$GT$::h28461622da291443(&var_270);
                    }
                    else
                        switch (r14_2)
                        {
                            case 1:
                            {
                                if (std::io::error::Error::kind::h135fe00c4e7365f3(*var_270[8]))
                                    goto label_4a58de;
                                
                                if (var_240)
                                {
                                    void* rbx_3 = *var_250[8];
                                    
                                    if (uu_tail::follow::files::FileHandling::contains_key::h35489a1a5bc2cd52(&arg1[0xe], *(rbx_3 + 8), *(rbx_3 + 0x10)))
                                    {
                                        if (*arg1 == 3)
                                        {
                                            core::option::unwrap_failed::h893f57cb7db71cb7();
                                            /* no return */
                                        }
                                        
                                        (*(*(arg1 + 0x18) + 0x20))(&var_1f8, *(arg1 + 0x10), 
                                            *(rbx_3 + 8), *(rbx_3 + 0x10));
                                        core::ptr::drop_in_place$LT$core..result..Result$LT$bool$C$notify..error..Error$GT$$GT$::h00c92e5e8c601890(&var_1f8);
                                    }
                                }
                                
                                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::he0295db7e74c1801(&var_250);
                                r14_2 = 1;
                                result_3 = 8;
                                rbp_1 = 0;
                                var_2a8_1 = 0;
                                
                                if (var_2b9_1 != 2 && *(arg1 + 0x8d))
                                    goto label_4a5735;
                                
                                goto label_4a577e;
                            }
                            case 2:
                            case 3:
                            case 4:
                            {
                                goto label_4a58de;
                            }
                            case 5:
                            {
                                var_238 = &data_573510;
                                int64_t (* var_230_4)(int64_t* arg1, int64_t arg2) = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h4163173f9b6529c1;
                                var_1f8 = &data_573850;
                                *var_1f8[8] = 2;
                                var_1d8 = 0;
                                char const (** const* var_1e8_3)[0xa4] = &var_238;
                                var_1e0 = 1;
                                rbp_1 = 1;
                                r14_2 = 1;
                                int128_t var_128;
                                core::option::Option$LT$T$GT$::map_or_else::h0ad4dbebb1db8692(
                                    &var_128, &var_1f8);
                                int32_t var_1e0_2 = 1;
                                var_1f8 = var_128;
                                int64_t var_118;
                                int64_t var_1e8_4 = var_118;
                                rbp_1 = 1;
                                r14_2 = 1;
                                result =
                                    alloc::boxed::Box$LT$T$GT$::new::hb525c77ba03b79d9(&var_1f8);
                                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::he0295db7e74c1801(&var_298);
                                var_2a8_1 = 1;
                                core::ptr::drop_in_place$LT$notify..error..ErrorKind$GT$::h28461622da291443(&var_270);
                                break;
                            }
                            case 6:
                            {
                                result_3 = 8;
                                
                                if (!var_258)
                                {
                                    label_4a5700:
                                    rbp_1 = 0;
                                }
                                else
                                {
                                    if (!uu_tail::follow::files::FileHandling::contains_key::h35489a1a5bc2cd52(&arg1[0xe], *(var_260 + 8), *(var_260 + 0x10)))
                                        goto label_4a5700;
                                    
                                    uu_tail::follow::watch::Observer::handle_event::hd08bd6b67fb66ec6(&var_1f8, arg1, &*var_270[8], var_204_1);
                                    int64_t r14_3 = var_1f8;
                                    result_3 = *var_1f8[8];
                                    rbp_1 = var_1e8;
                                    
                                    if (-(r14_3) == -0x8000000000000000)
                                    {
                                        core::ptr::drop_in_place$LT$notify_types..event..Event$GT$::hb202190ad9c88fba(&*var_270[8]);
                                        goto label_4a5bbd;
                                    }
                                    
                                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::he0295db7e74c1801(&var_298);
                                    var_298 = r14_3;
                                    result_4 = result_3;
                                    uint64_t var_288_2 = rbp_1;
                                }
                                
                                core::ptr::drop_in_place$LT$notify_types..event..Event$GT$::hb202190ad9c88fba(&*var_270[8]);
                                var_2a8_1 = 1;
                                
                                if (var_2b9_1 == 2 || !*(arg1 + 0x8d))
                                    goto label_4a577e;
                                
                                goto label_4a5735;
                            }
                            case 7:
                            {
                                char rax_25 = *var_270[8];
                                
                                if (rax_25)
                                {
                                    var_140 = rax_25;
                                    var_238 = &var_140;
                                    int64_t (* var_230_5)(char* arg1, int64_t arg2) = _$LT$std..sync..mpsc..RecvTimeoutError$u20$as$u20$core..fmt..Display$GT$::fmt::h2b204bd90ae7c737;
                                    var_1f8 = &data_573880;
                                    *var_1f8[8] = 1;
                                    var_1d8 = 0;
                                    char const (** const* var_1e8_5)[0xa4] = &var_238;
                                    var_1e0 = 1;
                                    rbp_1 = 1;
                                    r14_2 = 1;
                                    int128_t var_f8;
                                    core::option::Option$LT$T$GT$::map_or_else::h0ad4dbebb1db8692(
                                        &var_f8, &var_1f8);
                                    int32_t var_1e0_3 = 1;
                                    var_1f8 = var_f8;
                                    int64_t var_e8;
                                    int64_t var_1e8_6 = var_e8;
                                    rbp_1 = 1;
                                    r14_2 = 1;
                                    result_3 = alloc::boxed::Box$LT$T$GT$::new::hb525c77ba03b79d9(
                                        &var_1f8);
                                    label_4a5bbd:
                                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::he0295db7e74c1801(&var_298);
                                    result = result_3;
                                    break;
                                    break;
                                }
                                
                                var_2a8_1 = 1;
                                result_3 = 8;
                                rbp_1 = 0;
                                r14_2 = 1;
                                
                                if (var_2b9_1 == 2 || !*(arg1 + 0x8d))
                                    goto label_4a577e;
                                
                                label_4a5735:
                                uu_tail::follow::files::FileHandling::keys::h496a1b83376a9d98(
                                    &var_1f8, &arg1[0xe]);
                                core::iter::traits::iterator::Iterator::collect::h80ad1b99345411f1(
                                    &var_238, &var_1f8);
                                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::he0295db7e74c1801(&var_298);
                                uint64_t var_228;
                                rbp_1 = var_228;
                                uint64_t var_288_3 = rbp_1;
                                var_298 = var_238;
                                result_3 = result_4;
                                label_4a577e:
                                void* rbp_2 = result_3 + rbp_1 * 0x18;
                                label_4a5790:
                                void* result_5 = result_3 + 0x18;
                                
                                if (result_3 == rbp_2)
                                    result_5 = result_3;
                                
                                if (result_3 == rbp_2 || !result_3)
                                {
                                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::he0295db7e74c1801(&var_298);
                                    r12 = arg1;
                                    
                                    if (~var_2a0_2 & 6)
                                        core::ptr::drop_in_place$LT$notify..error..ErrorKind$GT$::h28461622da291443(&var_270);
                                    
                                    rax_2 = r12[0x22];
                                    
                                    if (var_2b9_1 == 2)
                                        goto label_4a523f;
                                    
                                    continue;
                                }
                                else
                                {
                                    uu_tail::follow::files::FileHandling::tail_file::h556ffa1173747618(&var_1f8, &arg1[0xe], *(result_3 + 8), *(result_3 + 0x10), 
                                        rcx_1);
                                    result = var_1f8;
                                    result_3 = result_5;
                                    
                                    if (!result)
                                        goto label_4a5790;
                                    
                                    r14_2 = 1;
                                }
                                
                                goto label_4a5830;
                            }
                        }
                    
                    if (!var_2a8_1)
                        break;
                    
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$std..path..PathBuf$GT$$GT$::he0295db7e74c1801(&var_250);
                    break;
                }
            }
            else
            {
                int64_t rax_7 = *(arg1 + 0x30);
                
                if (!rax_7)
                    goto label_4a5525;
                
                int64_t r13_1 = *(arg1 + 0x28);
                int64_t r14_1 = 0;
                label_4a52c2:
                *(r13_1 + r14_1 + 0x10);
                std::fs::metadata::h5c248dd9820946eb(&var_1f8, *(r13_1 + r14_1 + 8));
                int32_t rbx_1 = var_1f8;
                core::ptr::drop_in_place$LT$core..result..Result$LT$std..fs..Metadata$C$std..io..error..Error$GT$$GT$::ha4975ed621f4cd7c(&var_1f8);
                
                if (rbx_1 == 2)
                {
                    label_4a52ae:
                    r14_1 += 0x18;
                    
                    if (rax_7 * 0x18 != r14_1)
                        goto label_4a52c2;
                    
                    goto label_4a5525;
                }
                
                void* rax_10 = uu_tail::follow::files::FileHandling::get::hc0a1561a42a9610a(
                    &arg1[0xe], *(r13_1 + r14_1 + 8), *(r13_1 + r14_1 + 0x10));
                *(r13_1 + r14_1 + 0x10);
                std::fs::metadata::h5c248dd9820946eb(&var_1f8, *(r13_1 + r14_1 + 8));
                void var_e0;
                core::result::Result$LT$T$C$E$GT$::unwrap::h12e26e28373195d7(&var_e0, &var_1f8);
                int32_t var_a8;
                int32_t rax_12 = var_a8 & 0xf000;
                
                if (rax_12 != 0x1000 && rax_12 != 0x8000)
                {
                    if (rax_12 == 0x2000 && !*(rax_10 + 0xc8))
                        goto label_4a5363;
                    
                    goto label_4a52ae;
                }
                
                if (*(rax_10 + 0xc8))
                    goto label_4a52ae;
                
                label_4a5363:
                int64_t rax_13;
                int64_t rdx_4;
                rax_13 = uucore::util_name::h074417a1e6395129();
                var_270 = rax_13;
                *var_270[8] = rdx_4;
                var_238 = &var_270;
                int64_t (* var_230_1)(int64_t* arg1, int64_t arg2) =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h4163173f9b6529c1;
                var_1f8 = &data_5734a0;
                *var_1f8[8] = 2;
                var_1d8 = 0;
                char const (** const* var_1e8_1)[0xa4] = &var_238;
                var_1e0 = 1;
                std::io::stdio::_eprint::h57899770eacec2ad(&var_1f8);
                var_270 = 0;
                *var_270[8] = *(rax_10 + 0xb8);
                var_260 = *(rax_10 + 0xc0);
                var_258 = 1;
                var_238 = &var_270;
                int64_t (* var_230_2)(int32_t* arg1, int64_t* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                var_1f8 = &data_5735d0;
                *var_1f8[8] = 2;
                var_1d8 = 0;
                var_1e8 = &var_238;
                var_1e0 = 1;
                std::io::stdio::_eprint::h57899770eacec2ad(&var_1f8);
                uu_tail::follow::files::FileHandling::update_metadata::h25061ac57dde0fed(
                    &arg1[0xe], *(r13_1 + r14_1 + 8), *(r13_1 + r14_1 + 0x10), &var_e0);
                uint64_t result_1;
                uint64_t rdx_7;
                result_1 = uu_tail::follow::files::FileHandling::update_reader::hba2c0912cd1385d3(
                    &arg1[0xe], *(r13_1 + r14_1 + 8), *(r13_1 + r14_1 + 0x10));
                result = result_1;
                
                if (result_1)
                    goto label_4a58b9;
                
                uu_tail::follow::files::FileHandling::tail_file::h556ffa1173747618(&var_1f8, 
                    &arg1[0xe], *(r13_1 + r14_1 + 8), *(r13_1 + r14_1 + 0x10), rcx_1);
                result = var_1f8;
                
                if (result)
                    goto label_4a58b9;
                
                if (*arg1 != 3)
                {
                    uint64_t result_2;
                    result_2 =
                        uu_tail::follow::watch::WatcherRx::watch_with_parent::ha42b5e61fec17468(
                        *(arg1 + 0x10), *(arg1 + 0x18), *(r13_1 + r14_1 + 8), 
                        *(r13_1 + r14_1 + 0x10));
                    result = result_2;
                    
                    if (result_2)
                        goto label_4a58b9;
                    
                    goto label_4a52ae;
                }
            }
            core::option::unwrap_failed::h893f57cb7db71cb7();
            /* no return */
        }
    }
    label_4a58b9:
    core::ptr::drop_in_place$LT$uu_tail..follow..watch..Observer$GT$::hdbfc2663e25cdaba(arg1);
    return result;
}
