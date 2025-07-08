
  int64_t* uu_du::du::ha667a9e24cfc9f10(int64_t* arg1, int64_t* arg2, void* arg3, int64_t arg4, int64_t* arg5, int64_t* arg6)

{
    if (!arg2[0x10])
    {
        label_4f287c:
        memcpy(arg1, arg2, 0x90);
    }
    else
    {
        int64_t var_208;
        std::fs::read_dir::h62350172118b109c(&var_208, &arg2[8]);
        int64_t rdi_1 = var_208;
        char var_200;
        void* const var_3e8;
        int128_t* var_3d8;
        char var_2c8[0x10];
        int64_t var_2c0;
        int128_t* var_2b8;
        
        if (var_200 != 2)
        {
            int64_t var_3f8 = rdi_1;
            char var_3f0_1 = var_200;
            int64_t rcx = *(arg3 + 8);
            int64_t rdx_2 = *(arg3 + 0x10) * 0x38 + rcx;
            char rcx_1 = *(arg3 + 0x34);
            char rcx_2 = *(arg3 + 0x33);
            char rcx_3 = *(arg3 + 0x30);
            char rcx_4 = *(arg3 + 0x32);
            char rax_6 = *(arg3 + 0x31);
            
            while (true)
            {
                int64_t var_110;
                _$LT$std..fs..ReadDir$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h153c1e0177592fe2(&var_110, &var_3f8);
                
                if (!var_110)
                {
                    core::ptr::drop_in_place$LT$std..fs..ReadDir$GT$::h2f49c189e78799ba(&var_3f8);
                    goto label_4f287c_1;
                }
                
                int64_t var_108;
                int64_t var_3e0;
                void** const var_3d0;
                
                if (!var_108)
                {
                    var_3d8 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
                    var_3d0 = &data_586a88;
                    var_3e0 = 0;
                    var_3e8 = 2;
                    std::sync::mpmc::Sender$LT$T$GT$::send::h0f9fc14a9ceb05b9(&var_2c8, arg6, 
                        &var_3e8);
                    
                    if (_mm_movemask_epi8(__pcmpeqb_xmmdq_memdq(var_2c8, data_40f110)) == 0xffff)
                        continue;
                    else
                    {
                        void* rbx_3 = var_2c8[0];
                        memcpy(&var_3d8, &var_2b8, 0x90);
                        int64_t var_3e0_3 = var_2c0;
                        var_3e8 = rbx_3;
                        arg1[2] = alloc::boxed::Box$LT$T$GT$::new::h757b8ba3534c23eb(&var_3e8);
                        arg1[1] = 0;
                        *arg1 = 2;
                    }
                }
                else
                {
                    int64_t var_320 = var_108;
                    int64_t var_100;
                    int64_t var_318_1 = var_100;
                    int64_t var_e8;
                    int64_t var_300_1 = var_e8;
                    int128_t var_f8;
                    int128_t var_310_1 = var_f8;
                    void var_348;
                    std::fs::DirEntry::path::h5b1bdb0f1090af27(&var_348, &var_320);
                    char* var_340;
                    size_t var_338;
                    char var_c8[0x10];
                    uu_du::Stat::new::h9e91ef33e1f296e6(&var_c8, var_340, var_338, &var_320, arg3);
                    int128_t* rax_27;
                    
                    if (_mm_movemask_epi8(__pcmpeqb_xmmdq_memdq(var_c8, *data_40ef80)) != 0xffff)
                    {
                        memcpy(&var_208, &var_c8, 0x90);
                        int64_t var_2f8 = rcx;
                        int64_t var_2f0_1 = rdx_2;
                        
                        while (true)
                        {
                            void* rax_16 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hbb4494b75e1b7e30(&var_2f8);
                            void** const var_2b0;
                            
                            if (rax_16)
                            {
                                int64_t var_1c0;
                                size_t var_1b8;
                                std::sys::os_str::bytes::Slice::to_string_lossy::h816275565265bd85(
                                    &var_3e8, var_1c0, var_1b8);
                                char (** var_2e8)[0x10];
                                int64_t (* var_2e0)(int64_t* arg1, void* arg2);
                                
                                if (glob::Pattern::matches::hb817b847971d5388(rax_16, var_3e0, 
                                        var_3d8))
                                    core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h7fa1288604a001f4(&var_3e8);
                                else
                                {
                                    core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h7fa1288604a001f4(&var_3e8);
                                    void var_e0;
                                    std::fs::DirEntry::file_name::habdd235db90dd152(&var_e0, 
                                        &var_320);
                                    std::sys::os_str::bytes::Buf::into_string::h7b5acb763c5a1ded(
                                        &var_3e8, &var_e0);
                                    var_2b0 = var_3d0;
                                    var_2c0 = var_3e0;
                                    var_2c8[0] = var_3e8;
                                    core::result::Result$LT$T$C$E$GT$::unwrap::hbe98b57ab5f25fd3(
                                        &var_2e8, &var_2c8);
                                    int64_t var_2d8;
                                    
                                    if (glob::Pattern::matches::hb817b847971d5388(rax_16, var_2e0, 
                                            var_2d8))
                                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h5d86c71ca1632ad3(&var_2e8);
                                    else
                                    {
                                        core::ptr::drop_in_place$LT$alloc..string..String$GT$::h5d86c71ca1632ad3(&var_2e8);
                                        continue;
                                    }
                                }
                                
                                if (rcx_1)
                                {
                                    var_2c8[0] = 1;
                                    var_2c0 = var_1c0;
                                    var_2b0 = 1;
                                    char (* var_2d0)[0x10] = &var_2c8;
                                    var_2e8 = &var_2d0;
                                    var_2e0 = _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h50e55b5d7d795045;
                                    var_3e8 = &data_584380;
                                    var_3e0 = 2;
                                    int64_t var_3c8_1 = 0;
                                    var_3d8 = &var_2e8;
                                    var_3d0 = 1;
                                    std::io::stdio::_print::he918bceb0c89db46(&var_3e8);
                                }
                                
                                label_4f2795:
                                core::ptr::drop_in_place$LT$uu_du..Stat$GT$::h701ab588e12d6784(
                                    &var_208);
                                core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hbd810d79ecac54ea(&var_348);
                                core::ptr::drop_in_place$LT$std..fs..DirEntry$GT$::h4ad97d7767b93694(&var_320);
                                break;
                            }
                            
                            int64_t var_1e8;
                            
                            if (var_208 | var_200)
                            {
                                int32_t var_1f8[0x4];
                                int32_t var_228[0x4] = var_1f8;
                                
                                if (hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::get_inner::hd97e7f5240db6501(arg5, &var_228))
                                {
                                    if (!rcx_2)
                                        goto label_4f2795;
                                    
                                    if (!rcx_3)
                                    {
                                        arg2[0xd] += 1;
                                        goto label_4f2795;
                                    }
                                }
                                
                                hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::insert::h4a8fe37a6ecf7570(arg5, var_228[0], var_228[2], var_1e8);
                            }
                            
                            char var_188;
                            
                            if (!var_188)
                            {
                                arg2[0xd] += 1;
                                int32_t var_1b0[0x4];
                                *(arg2 + 0x58) = _mm_add_epi64(*(arg2 + 0x58), var_1b0);
                                
                                if (!rcx_3)
                                {
                                    core::ptr::drop_in_place$LT$uu_du..Stat$GT$::h701ab588e12d6784(
                                        &var_208);
                                    goto label_4f22ee;
                                }
                                
                                memcpy(&var_3e8, &var_208, 0x90);
                                int64_t var_358_2 = arg4 + 1;
                                std::sync::mpmc::Sender$LT$T$GT$::send::h0f9fc14a9ceb05b9(&var_2c8, 
                                    arg6, &var_3e8);
                                
                                if (_mm_movemask_epi8(__pcmpeqb_xmmdq_memdq(var_2c8, data_40f110))
                                        == 0xffff)
                                    goto label_4f22ee;
                                
                                void* rbx_6 = var_2c8[0];
                                memcpy(&var_3d8, &var_2b8, 0x90);
                                int64_t var_3e0_6 = var_2c0;
                                var_3e8 = rbx_6;
                                rax_27 =
                                    alloc::boxed::Box$LT$T$GT$::new::h757b8ba3534c23eb(&var_3e8);
                                goto label_4f2926;
                            }
                            
                            if (rcx_4 && var_208 == 1 && *arg2 == 1 && var_1e8 != arg2[4])
                                goto label_4f2795;
                            
                            memcpy(&var_3e8, &var_208, 0x90);
                            uu_du::du::ha667a9e24cfc9f10(&var_2c8, &var_3e8, arg3, arg4 + 1, arg5, 
                                arg6);
                            uint32_t temp0_10 =
                                _mm_movemask_epi8(__pcmpeqb_xmmdq_memdq(var_2c8, *data_40ef80));
                            rax_27 = var_2b8;
                            
                            if (temp0_10 == 0xffff)
                                goto label_4f2926;
                            
                            void* rcx_10 = var_2c8[0];
                            int32_t var_158_1[0x4] = var_2b0;
                            char var_270[0x10];
                            int64_t var_260;
                            
                            if (!rax_6)
                            {
                                *(arg2 + 0x58) = _mm_add_epi64(*(arg2 + 0x58), var_270);
                                arg2[0xd] += var_260;
                            }
                            
                            int32_t var_280[0x4];
                            int32_t var_3a0_1[0x4] = var_280;
                            int32_t var_290[0x4];
                            int32_t var_3b0_1[0x4] = var_290;
                            int32_t var_2a0[0x4];
                            int32_t var_3c0_1[0x4] = var_2a0;
                            var_3d0 = var_158_1;
                            int32_t var_248[0x4];
                            int32_t var_368_1[0x4] = var_248;
                            int32_t var_258[0x4];
                            int32_t var_378_1[0x4] = var_258;
                            var_3e0 = var_2c0;
                            var_3e8 = rcx_10;
                            var_3d8 = rax_27;
                            char var_390_1[0x10] = var_270;
                            int64_t var_380_1 = var_260;
                            int64_t var_358_1 = arg4 + 1;
                            std::sync::mpmc::Sender$LT$T$GT$::send::h0f9fc14a9ceb05b9(&var_2c8, 
                                arg6, &var_3e8);
                            
                            if (_mm_movemask_epi8(__pcmpeqb_xmmdq_memdq(var_2c8, data_40f110))
                                    == 0xffff)
                                goto label_4f22ee;
                            
                            void* rbx_5 = var_2c8[0];
                            memcpy(&var_3d8, &var_2b8, 0x90);
                            int64_t var_3e0_5 = var_2c0;
                            var_3e8 = rbx_5;
                            rax_27 = alloc::boxed::Box$LT$T$GT$::new::h757b8ba3534c23eb(&var_3e8);
                            goto label_4f2926;
                        }
                        
                        continue;
                    }
                    else
                    {
                        var_3d8 = _$LT$std..io..error..Error$u20$as$u20$uucore..mods..error..FromIo$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$$GT$::map_err_context::h6097e5bae67e7f0a();
                        var_3d0 = &data_5843f0;
                        var_3e0 = 0;
                        var_3e8 = 2;
                        std::sync::mpmc::Sender$LT$T$GT$::send::h0f9fc14a9ceb05b9(&var_2c8, arg6, 
                            &var_3e8);
                        
                        if (_mm_movemask_epi8(__pcmpeqb_xmmdq_memdq(var_2c8, data_40f110))
                            != 0xffff)
                        {
                            void* rbx_4 = var_2c8[0];
                            memcpy(&var_3d8, &var_2b8, 0x90);
                            int64_t var_3e0_4 = var_2c0;
                            var_3e8 = rbx_4;
                            rax_27 = alloc::boxed::Box$LT$T$GT$::new::h757b8ba3534c23eb(&var_3e8);
                            label_4f2926:
                            arg1[2] = rax_27;
                            arg1[1] = 0;
                            *arg1 = 2;
                            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hbd810d79ecac54ea(
                                &var_348);
                            core::ptr::drop_in_place$LT$std..fs..DirEntry$GT$::h4ad97d7767b93694(
                                &var_320);
                        }
                        else
                        {
                            label_4f22ee:
                            core::ptr::drop_in_place$LT$std..path..PathBuf$GT$::hbd810d79ecac54ea(
                                &var_348);
                            core::ptr::drop_in_place$LT$std..fs..DirEntry$GT$::h4ad97d7767b93694(
                                &var_320);
                            continue;
                        }
                    }
                }
                core::ptr::drop_in_place$LT$std..fs..ReadDir$GT$::h2f49c189e78799ba(&var_3f8);
                break;
            }
            
            core::ptr::drop_in_place$LT$uu_du..Stat$GT$::h701ab588e12d6784(arg2);
        }
        else
        {
            var_3d8 = _$LT$std..io..error..Error$u20$as$u20$uucore..mods..error..FromIo$LT$alloc..boxed..Box$LT$uucore..mods..error..UIoError$GT$$GT$$GT$::map_err_context::h48a9c401437e4328(rdi_1, &arg2[8]);
            void** const var_3d0_1 = &data_5843f0;
            int64_t var_3e0_1 = 0;
            var_3e8 = 2;
            std::sync::mpmc::Sender$LT$T$GT$::send::h0f9fc14a9ceb05b9(&var_2c8, arg6, &var_3e8);
            
            if (_mm_movemask_epi8(__pcmpeqb_xmmdq_memdq(var_2c8, data_40f110)) == 0xffff)
            {
                label_4f287c_1:
                memcpy(arg1, arg2, 0x90);
            }
            else
            {
                void* rbx_2 = var_2c8[0];
                memcpy(&var_3d8, &var_2b8, 0x90);
                int64_t var_3e0_2 = var_2c0;
                var_3e8 = rbx_2;
                arg1[2] = alloc::boxed::Box$LT$T$GT$::new::h757b8ba3534c23eb(&var_3e8);
                arg1[1] = 0;
                *arg1 = 2;
                core::ptr::drop_in_place$LT$uu_du..Stat$GT$::h701ab588e12d6784(arg2);
            }
        }
    }
    
    return arg1;
}
