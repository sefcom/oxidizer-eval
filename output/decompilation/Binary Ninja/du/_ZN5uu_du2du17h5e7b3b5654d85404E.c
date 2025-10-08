
  int64_t* uu_du::du::h5e7b3b5654d85404(int64_t* arg1, char* arg2, void* arg3, int64_t arg4, int64_t* arg5, int64_t* arg6)

{
    char* r15 = arg2;
    
    if (!arg2[0x80])
    {
        label_497289:
        memcpy(arg1, r15, 0x90);
    }
    else
    {
        void* rbx_1 = arg3;
        char* var_448_1 = r15;
        int64_t var_178;
        std::fs::read_dir::h7286bca7a7309382(&var_178, &r15[0x40]);
        char var_170;
        void* const var_408;
        uint64_t var_3f8;
        char var_318[0x10];
        uint64_t var_308;
        
        if (var_170 != 2)
        {
            int64_t var_368 = var_178;
            char var_360_1 = var_170;
            int64_t rax_6 = *(rbx_1 + 8);
            int64_t rcx_1 = *(rbx_1 + 0x10);
            int64_t rdx_2 = 0x38;
            
            if (!rcx_1)
                rdx_2 = rcx_1;
            
            char rax_8 = *(rbx_1 + 0x34);
            char rax_9 = *(rbx_1 + 0x33);
            char rax_10 = *(rbx_1 + 0x30);
            int64_t r13_1 = *arg6;
            int32_t* rbp_1 = arg6[1];
            char rax_12 = *(rbx_1 + 0x32);
            char rax_13 = *(rbx_1 + 0x31);
            void* var_438_1 = rbx_1;
            int64_t var_418_1 = r13_1;
            int32_t* var_420_1 = rbp_1;
            
            while (true)
            {
                int32_t var_208;
                _$LT$std..fs..ReadDir$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h1934f30e4eea5c14(&var_208, &var_368);
                
                if (var_208 != 1)
                {
                    r15 = var_448_1;
                    core::ptr::drop_in_place$LT$std..fs..ReadDir$GT$::hbe7e7849fcc03c6e(&var_368);
                    goto label_497289_1;
                }
                
                int64_t var_200;
                int64_t var_400;
                void** const var_3f0;
                
                if (!var_200)
                {
                    var_3f8 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                    var_3f0 = &data_546d50;
                    var_400 = 0;
                    var_408 = 2;
                    std::sync::mpmc::Sender$LT$T$GT$::send::h3e1c4566985cb384(&var_318, r13_1, 
                        rbp_1, &var_408);
                    
                    if (_mm_movemask_epi8(__pcmpeqb_xmmdq_memdq(var_318, *data_41d8e0)) == 0xffff)
                        continue;
                    else
                    {
                        void* rbx_6 = var_318[0];
                        int64_t r14_3 = var_318[8];
                        memcpy(&var_3f8, &var_308, 0x90);
                        int64_t var_400_3 = r14_3;
                        var_408 = rbx_6;
                        r15 = var_448_1;
                        arg1[2] = alloc::boxed::Box$LT$T$GT$::new::h2172217f56afd643(&var_408);
                        arg1[1] = 0;
                        *arg1 = 2;
                    }
                }
                else
                {
                    int64_t var_358 = var_200;
                    int64_t var_1f8;
                    int64_t var_350_1 = var_1f8;
                    int64_t var_1e0;
                    int64_t var_338_1 = var_1e0;
                    int128_t var_1f0;
                    int128_t var_348_1 = var_1f0;
                    void var_330;
                    std::fs::DirEntry::path::hc95af67dccb42f03(&var_330, &var_358);
                    int64_t var_328;
                    uint64_t var_320;
                    char var_c8[0x10];
                    uu_du::Stat::new::hd07a900d361a9fcd(&var_c8, var_328, var_320, &var_358, rbx_1);
                    
                    if (_mm_movemask_epi8(__pcmpeqb_xmmdq_memdq(var_c8, data_41d730)) != 0xffff)
                    {
                        memcpy(&var_178, &var_c8, 0x90);
                        int64_t var_300;
                        
                        if (rcx_1)
                        {
                            int64_t rax_23 = rax_6 + rdx_2;
                            int64_t r12_1 = rdx_2 - rcx_1 * 0x38;
                            int64_t r15_1 = rax_6;
                            
                            while (true)
                            {
                                int64_t r14_2 = rax_23;
                                int64_t var_130;
                                uint64_t var_128;
                                alloc::string::String::from_utf8_lossy::h880ad8b337de96e9(&var_408, 
                                    var_130, var_128);
                                char rax_24 = glob::Pattern::matches::ha07a8c317a63e971(r15_1, 
                                    var_400, var_3f8);
                                core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::hd2b311ea2da27bf0(&var_408);
                                int128_t var_248;
                                
                                if (!rax_24)
                                {
                                    void var_e0;
                                    std::fs::DirEntry::file_name::h6946eae0b92783e6(&var_e0, 
                                        &var_358);
                                    alloc::string::String::from_utf8::hcb4419710bc0e60b(&var_408, 
                                        &var_e0);
                                    bool o_1 = 0 + -(var_408);
                                    int64_t rax_25;
                                    rax_25 = o_1;
                                    int64_t rcx_5;
                                    rcx_5 = !o_1;
                                    int128_t zmm0_7 = *(&var_408 + (rax_25 << 3));
                                    var_248 = zmm0_7;
                                    int64_t rax_26 = (&var_3f8)[rax_25];
                                    int64_t var_238_1 = rax_26;
                                    var_300 = rax_26;
                                    var_318 = zmm0_7;
                                    var_318[0] = rcx_5;
                                    core::result::Result$LT$T$C$E$GT$::unwrap::h0257f6081d27278e(
                                        &var_408, &var_318);
                                    char rax_27 = glob::Pattern::matches::ha07a8c317a63e971(r15_1, 
                                        var_400, var_3f8);
                                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h4aad5465963d35b9(&var_408);
                                    
                                    if (!rax_27)
                                    {
                                        r12_1 += 0x38;
                                        rax_23 = r14_2 + 0x38;
                                        r15_1 = r14_2;
                                        
                                        if (r12_1 == 0x38)
                                            goto label_496e66;
                                        
                                        continue;
                                    }
                                }
                                
                                if (!(rax_8 & 1))
                                    break;
                                
                                var_318[0] = 1;
                                var_318[8] = var_130;
                                var_308 = var_128;
                                var_300 = 1;
                                char (* var_250)[0x10] = &var_318;
                                var_248 = &var_250;
                                *var_248[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5bda38c7e3b28069;
                                var_408 = &data_545c28;
                                var_400 = 2;
                                int64_t var_3e8_1 = 0;
                                var_3f8 = &var_248;
                                var_3f0 = 1;
                                std::io::stdio::_print::h5e446ff973c02de6(&var_408);
                                break;
                            }
                            
                            goto label_496b36;
                        }
                        
                        label_496e66:
                        char rbx_5 = var_178;
                        int64_t var_158;
                        
                        if (rbx_5 & 1)
                        {
                            int32_t var_168[0x4];
                            int32_t var_228[0x4] = var_168;
                            
                            if (!hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::h9c4bd3dee43f68bb(arg5, &var_228))
                            {
                                label_496ee7:
                                hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::hfa1827358606e47b(arg5, var_228[0], var_228[2], var_158);
                            }
                            else
                            {
                                if (!(rax_9 & 1))
                                    goto label_496b36;
                                
                                if (rax_10 & 1)
                                    goto label_496ee7;
                                
                                *(var_448_1 + 0x68) += 1;
                                label_496b36:
                                core::ptr::drop_in_place$LT$uu_du..Stat$GT$::h6c25dad051e3ba37(
                                    &var_178);
                                core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hab61ff66151da0a3(&var_330);
                                core::ptr::drop_in_place$LT$std..fs..DirEntry$GT$::hf0f8029912813c56(&var_358);
                                rbx_1 = var_438_1;
                                r13_1 = var_418_1;
                                rbp_1 = var_420_1;
                                continue;
                                continue;
                            }
                        }
                        
                        char var_f8;
                        uint64_t rax_33;
                        
                        if (!var_f8)
                        {
                            r15 = var_448_1;
                            int32_t var_120[0x4];
                            *(r15 + 0x58) = _mm_add_epi64(*(r15 + 0x58), var_120);
                            *(r15 + 0x68) += 1;
                            r13_1 = var_418_1;
                            rbp_1 = var_420_1;
                            
                            if (!(rax_10 & 1))
                            {
                                core::ptr::drop_in_place$LT$uu_du..Stat$GT$::h6c25dad051e3ba37(
                                    &var_c8);
                                rbx_1 = var_438_1;
                                label_497250:
                                core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hab61ff66151da0a3(&var_330);
                                core::ptr::drop_in_place$LT$std..fs..DirEntry$GT$::hf0f8029912813c56(&var_358);
                                continue;
                                continue;
                            }
                            else
                            {
                                memcpy(&var_408, &var_c8, 0x90);
                                int64_t var_378_2 = arg4 + 1;
                                std::sync::mpmc::Sender$LT$T$GT$::send::h3e1c4566985cb384(&var_318, 
                                    r13_1, rbp_1, &var_408);
                                rbx_1 = var_438_1;
                                
                                if (_mm_movemask_epi8(__pcmpeqb_xmmdq_memdq(var_318, *data_41d8e0))
                                        == 0xffff)
                                    goto label_497250;
                                
                                void* rbx_9 = var_318[0];
                                int64_t r14_6 = var_318[8];
                                memcpy(&var_3f8, &var_308, 0x90);
                                int64_t var_400_6 = r14_6;
                                var_408 = rbx_9;
                                rax_33 =
                                    alloc::boxed::Box$LT$T$GT$::new::h2172217f56afd643(&var_408);
                            }
                        }
                        else
                        {
                            if (rbx_5 & rax_12 & 1 && *var_448_1 & 1
                                    && var_158 != *(var_448_1 + 0x20))
                                goto label_496b36;
                            
                            memcpy(&var_408, &var_c8, 0x90);
                            rbx_1 = var_438_1;
                            r15 = var_448_1;
                            uu_du::du::h5e7b3b5654d85404(&var_318, &var_408, rbx_1, arg4 + 1, arg5, 
                                arg6);
                            r13_1 = var_418_1;
                            rbp_1 = var_420_1;
                            uint32_t temp0_11 =
                                _mm_movemask_epi8(__pcmpeqb_xmmdq_memdq(var_318, data_41d730));
                            rax_33 = var_308;
                            
                            if (temp0_11 != 0xffff)
                            {
                                void* rcx_9 = var_318[0];
                                int64_t rdx_12 = var_318[8];
                                int32_t var_1b8_1[0x4] = var_300;
                                char var_2c0[0x10];
                                int64_t var_2b0;
                                
                                if (!(rax_13 & 1))
                                {
                                    *(r15 + 0x58) = _mm_add_epi64(*(r15 + 0x58), var_2c0);
                                    *(r15 + 0x68) += var_2b0;
                                }
                                
                                int32_t var_2d0[0x4];
                                int32_t var_3c0_1[0x4] = var_2d0;
                                int32_t var_2e0[0x4];
                                int32_t var_3d0_1[0x4] = var_2e0;
                                int32_t var_2f0[0x4];
                                int32_t var_3e0_1[0x4] = var_2f0;
                                var_3f0 = var_1b8_1;
                                int32_t var_298[0x4];
                                int32_t var_388_1[0x4] = var_298;
                                int32_t var_2a8[0x4];
                                int32_t var_398_1[0x4] = var_2a8;
                                var_400 = rdx_12;
                                var_408 = rcx_9;
                                var_3f8 = rax_33;
                                char var_3b0_1[0x10] = var_2c0;
                                int64_t var_3a0_1 = var_2b0;
                                int64_t var_378_1 = arg4 + 1;
                                std::sync::mpmc::Sender$LT$T$GT$::send::h3e1c4566985cb384(&var_318, 
                                    r13_1, rbp_1, &var_408);
                                
                                if (_mm_movemask_epi8(__pcmpeqb_xmmdq_memdq(var_318, *data_41d8e0))
                                        == 0xffff)
                                    goto label_497250;
                                
                                void* rbx_8 = var_318[0];
                                int64_t r14_5 = var_318[8];
                                memcpy(&var_3f8, &var_308, 0x90);
                                int64_t var_400_5 = r14_5;
                                var_408 = rbx_8;
                                rax_33 =
                                    alloc::boxed::Box$LT$T$GT$::new::h2172217f56afd643(&var_408);
                            }
                        }
                        
                        arg1[2] = rax_33;
                        arg1[1] = 0;
                        *arg1 = 2;
                        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hab61ff66151da0a3(
                            &var_330);
                        core::ptr::drop_in_place$LT$std..fs..DirEntry$GT$::hf0f8029912813c56(
                            &var_358);
                    }
                    else
                    {
                        var_3f8 = _$LT$std..io..error..Error$u20$as$u20$uucore..mods..error..FromIo$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$$GT$::map_err_context::h21aee2fec0aab2af();
                        var_3f0 = &data_545c80;
                        var_400 = 0;
                        var_408 = 2;
                        std::sync::mpmc::Sender$LT$T$GT$::send::h3e1c4566985cb384(&var_318, r13_1, 
                            rbp_1, &var_408);
                        
                        if (_mm_movemask_epi8(__pcmpeqb_xmmdq_memdq(var_318, *data_41d8e0))
                                == 0xffff)
                            goto label_497250;
                        
                        void* rbx_7 = var_318[0];
                        int64_t r14_4 = var_318[8];
                        memcpy(&var_3f8, &var_308, 0x90);
                        int64_t var_400_4 = r14_4;
                        var_408 = rbx_7;
                        arg1[2] = alloc::boxed::Box$LT$T$GT$::new::h2172217f56afd643(&var_408);
                        arg1[1] = 0;
                        *arg1 = 2;
                        r15 = var_448_1;
                        core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hab61ff66151da0a3(
                            &var_330);
                        core::ptr::drop_in_place$LT$std..fs..DirEntry$GT$::hf0f8029912813c56(
                            &var_358);
                    }
                }
                core::ptr::drop_in_place$LT$std..fs..ReadDir$GT$::hbe7e7849fcc03c6e(&var_368);
                break;
            }
            
            core::ptr::drop_in_place$LT$uu_du..Stat$GT$::h6c25dad051e3ba37(r15);
        }
        else
        {
            *(r15 + 0x48);
            *(r15 + 0x50);
            var_3f8 = _$LT$std..io..error..Error$u20$as$u20$uucore..mods..error..FromIo$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$$GT$::map_err_context::h0fd947faba14da62();
            void** const var_3f0_1 = &data_545c80;
            int64_t var_400_1 = 0;
            var_408 = 2;
            std::sync::mpmc::Sender$LT$T$GT$::send::h3e1c4566985cb384(&var_318, *arg6, arg6[1], 
                &var_408);
            
            if (_mm_movemask_epi8(__pcmpeqb_xmmdq_memdq(var_318, *data_41d8e0)) == 0xffff)
            {
                label_497289_1:
                memcpy(arg1, r15, 0x90);
            }
            else
            {
                void* rbx_2 = var_318[0];
                int64_t r14_1 = var_318[8];
                memcpy(&var_3f8, &var_308, 0x90);
                int64_t var_400_2 = r14_1;
                var_408 = rbx_2;
                arg1[2] = alloc::boxed::Box$LT$T$GT$::new::h2172217f56afd643(&var_408);
                arg1[1] = 0;
                *arg1 = 2;
                core::ptr::drop_in_place$LT$uu_du..Stat$GT$::h6c25dad051e3ba37(r15);
            }
        }
    }
    
    return arg1;
}
