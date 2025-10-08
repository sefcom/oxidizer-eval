
  int64_t* uu_cp::Options::from_matches::hd95c2961bde82c15(int64_t* arg1, void* arg2)

{
    uint64_t (* rbp)(void* arg1, int64_t arg2, int64_t arg3);
    uint64_t (* var_8)(void* arg1, int64_t arg2, int64_t arg3) = rbp;
    uint64_t rax = alloc::alloc::Global::alloc_impl::h6fb1b6049873c120(8, 0, 0);
    
    if (!rax)
    {
        alloc::alloc::handle_alloc_error::h88aa4f4f9d19c4f9();
        /* no return */
    }
    
    int64_t var_100 = 0;
    uint64_t var_f8 = rax;
    int64_t var_f0 = 0;
    void* const var_298;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h039b47f58c311fde(&var_298, &var_100);
    int64_t rax_1;
    uint64_t rdx;
    rax_1 = _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h515607993124c0bf(&var_298);
    int64_t* rbx_2;
    int64_t* i_2;
    int64_t* i_3;
    
    if (!rax_1)
    {
        label_49e8eb:
        core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$$RF$str$GT$$GT$::hf35858a9cc4d4e59(&var_298);
        rbp = 1;
        
        if (!clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
                arg2, "recursivecopy directories recurs…", 9))
            rbp =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
                arg2, "archiveSame as -dR --preserve=al…", 7);
        
        int64_t** var_1b0;
        uucore::features::backup_control::determine_backup_mode::h09b58a9d9bda0a55(&var_1b0, arg2);
        int64_t** rax_8 = var_1b0;
        int64_t** var_2d8;
        char var_1a8;
        
        if (!rax_8)
        {
            char rax_11 =
                uucore::features::update_control::determine_update_mode::h24daef92534aa2cd(arg2);
            
            if (!var_1a8)
            {
                label_49eabc:
                int128_t var_178;
                uucore::features::backup_control::determine_backup_suffix::ha7b1c82b4746605a(
                    &var_178);
                char rax_14;
                char rdx_6;
                rax_14 = uu_cp::OverwriteMode::from_matches::h05cd847131b1413b(arg2);
                char rax_15 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, "no-target-directorycopy all SOUR…", 0x13);
                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hccb3d24b776812db(&var_298, arg2);
                void* rax_16 =
                    clap_builder::parser::error::MatchesError::unwrap::hb52848081157b384(&var_298);
                int64_t var_208;
                uint64_t var_1f8;
                
                if (rax_16)
                {
                    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::hdde023ffc5414155(&var_298, *(rax_16 + 8), *(rax_16 + 0x10));
                    uint64_t var_288;
                    var_1f8 = var_288;
                    var_208 = var_298;
                    
                    if (var_208 == -0x8000000000000000)
                        goto label_49ebba;
                    
                    int64_t var_200;
                    
                    if (std::path::Path::is_dir::h02edbc48c38d7d9e(var_200, var_1f8))
                        goto label_49ebba;
                    
                    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::hdde023ffc5414155(&var_298, var_200, var_1f8);
                    arg1[4] = var_288;
                    *(arg1 + 0x10) = var_298;
                    arg1[1] = -0x7ffffffffffffff5;
                    *arg1 = -0x8000000000000000;
                    label_49f9d0:
                    core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::hf94fc9edf2322537(&var_208);
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h1c03d16396ad1b8d(
                        &var_178);
                    return arg1;
                }
                
                var_208 = -0x8000000000000000;
                label_49ebba:
                char var_2ee_1 = rbp;
                int64_t var_1c8 = 0;
                void* var_1c0_1 = 8;
                int64_t var_1b8_1 = 0;
                var_298 = nullptr;
                int64_t var_290_2 = 5;
                char const* const var_288_2 = "preserveENETDOWNOption '";
                int64_t var_280_2 = 8;
                char const* const var_278_2 = "no-preservedon't preserve the sp…";
                int64_t var_270_1 = 0xb;
                char const* const var_268_1 = "archiveSame as -dR --preserve=al…";
                int64_t var_260_1 = 7;
                char const* const var_258_1 = "preserve-default-attributessame …";
                int64_t var_250_1 = 0x1b;
                char const* const var_248_1 = "no-dereference-preserve-linkssam…";
                int64_t var_240_1 = 0x1d;
                int64_t* i_4;
                uint64_t rdx_9;
                i_4 = core::array::iter::iter_inner::PolymorphicIter$LT$$u5b$core..mem..maybe_uninit..MaybeUninit$LT$T$GT$$u5d$$GT$::next::hcabef211e5e16ec2(&var_298);
                char const* const var_2c8;
                uint64_t var_230;
                uint64_t var_220;
                int64_t var_218;
                int64_t var_210;
                int64_t rsi_20;
                void* const rdi_34;
                
                if (!i_4)
                {
                    rdi_34 = 8;
                    rsi_20 = 0;
                }
                else
                {
                    int64_t* i_1 = i_4;
                    uint64_t rbx_6 = rdx_9;
                    int64_t* i;
                    
                    do
                    {
                        int32_t var_88;
                        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h85f6eaa0d94af382(&var_88, arg2, i_1, rbx_6);
                        char rax_20;
                        int64_t* i_5;
                        rax_20 = clap_builder::parser::matches::arg_matches::ArgMatches::index_of::h533e2cba337d4042(arg2, i_1, rbx_6);
                        char* var_80;
                        
                        if (var_88 != 2 || !(rax_20 & 1) || !var_80)
                        {
                            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_occurrences::he2cb66ff72183c0e(&i_2, arg2, i_1, rbx_6);
                            int64_t var_e8;
                            clap_builder::parser::error::MatchesError::unwrap::h4c29764f4fc1d271(
                                &var_e8, i_1, rbx_6, &i_2);
                            int64_t var_d0;
                            clap_builder::parser::matches::arg_matches::ArgMatches::indices_of::h172437770ffa9ae0(&var_d0, arg2, i_1, rbx_6);
                            
                            if (var_e8 && var_d0)
                            {
                                int64_t var_d8;
                                int64_t var_a8_1 = var_d8;
                                int128_t var_b8 = var_e8;
                                char* var_c0;
                                var_2c8 = var_c0;
                                var_2d8 = var_d0;
                                i_2 = &var_2d8;
                                var_230 = &var_1c8;
                                i_3 = i_1;
                                var_220 = rbx_6;
                                core::iter::traits::iterator::Iterator::fold::h85d5e01300ec3e45(
                                    &var_b8, &i_2);
                            }
                        }
                        else if (*var_80 == 1)
                        {
                            i_3 = i_5;
                            i_2 = i_1;
                            var_230 = rbx_6;
                            var_220 = 0;
                            var_218 = 8;
                            var_210 = 0;
                            alloc::vec::Vec$LT$T$C$A$GT$::push::h21129240694f7174(&var_1c8, &i_2);
                        }
                        
                        uint64_t rdx_10;
                        i = core::array::iter::iter_inner::PolymorphicIter$LT$$u5b$core..mem..maybe_uninit..MaybeUninit$LT$T$GT$$u5d$$GT$::next::hcabef211e5e16ec2(&var_298);
                        i_1 = i;
                        rbx_6 = rdx_10;
                    } while (i);
                    rdi_34 = var_1c0_1;
                    rsi_20 = var_1b8_1;
                }
                
                alloc::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::sort_by::hb3b449298bb370e5(rdi_34, 
                    rsi_20);
                int16_t var_300_1 = 0;
                int32_t var_304_1 = 0;
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::he2b72d94f2e5cff7(&var_1b0, &var_1c8);
                _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h88ded4683450ba97(&i_2, &var_1b0);
                uint64_t rbp_2 = var_220;
                char var_2f8_1 = 0;
                char var_2fc_1 = 0;
                int32_t var_2f4_1 = 0;
                
                if (rbp_2 != -0x8000000000000000)
                {
                    var_2f4_1 = 0;
                    var_2fc_1 = 0;
                    var_2f8_1 = 0;
                    
                    while (true)
                    {
                        int64_t* i_6 = i_2;
                        
                        if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h24397207b493d5a1(i_6, var_230, "archiveSame as -dR --preserve=al…", 7))
                        {
                            char* rdx_18;
                            void* const* rsi_26;
                            char* rdi_42;
                            
                            if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h24397207b493d5a1(i_6, var_230, "preserve-default-attributessame …", 0x1b))
                            {
                                if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h24397207b493d5a1(i_6, var_230, "no-dereference-preserve-linkssam…", 0x1d))
                                {
                                    int32_t var_2a4;
                                    int32_t var_2b0;
                                    uint64_t var_190;
                                    void* const rax_51;
                                    int64_t rcx_41;
                                    int64_t* rdx_28;
                                    
                                    if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h24397207b493d5a1(i_6, var_230, "preserveENETDOWNOption '", 8))
                                    {
                                        if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h24397207b493d5a1(i_6, var_230, "no-preservedon't preserve the sp…", 0xb)
                                                || !var_210)
                                            goto label_49f0f2;
                                        
                                        int16_t var_2ac_2 = var_300_1;
                                        var_2b0 = var_304_1;
                                        char var_2aa_2 = var_2f8_1;
                                        char var_2a9_2 = var_2fc_1;
                                        int32_t var_2a8_2 = var_2f4_1;
                                        var_190 = rbp_2;
                                        int64_t var_188_2 = var_218;
                                        int64_t var_180_2 = var_210;
                                        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h3c76c5c03f48052b(&var_2d8, &var_190);
                                        uu_cp::Attributes::parse_iter::ha78706e08b35f5c6(&var_298, 
                                            &var_2d8);
                                        rax_51 = var_298;
                                        int64_t var_1d8 = var_290_2;
                                        
                                        if (rax_51 != -0x7ffffffffffffff4)
                                        {
                                            rdx_28 = arg1;
                                            *(rdx_28 + 0x3c) = *var_268_1[4];
                                            *(rdx_28 + 0x2c) = *var_278_2[4];
                                            *(rdx_28 + 0x1c) = *var_288_2[4];
                                            rdx_28[3] = var_288_2;
                                            rcx_41 = var_1d8;
                                            goto label_49f9b0;
                                        }
                                        
                                        uu_cp::Attributes::diff::hb3b318adb7407dd4(&var_2a4, 
                                            &var_2b0, &var_1d8);
                                    }
                                    else
                                    {
                                        int16_t var_2ac_1 = var_300_1;
                                        var_2b0 = var_304_1;
                                        char var_2aa_1 = var_2f8_1;
                                        char var_2a9_1 = var_2fc_1;
                                        int32_t var_2a8_1 = var_2f4_1;
                                        var_190 = rbp_2;
                                        int64_t var_188_1 = var_218;
                                        int64_t var_180_1 = var_210;
                                        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h3c76c5c03f48052b(&var_2d8, &var_190);
                                        uu_cp::Attributes::parse_iter::ha78706e08b35f5c6(&var_298, 
                                            &var_2d8);
                                        rax_51 = var_298;
                                        int64_t var_1e8 = var_290_2;
                                        
                                        if (rax_51 != -0x7ffffffffffffff4)
                                        {
                                            rdx_28 = arg1;
                                            *(rdx_28 + 0x3c) = *var_268_1[4];
                                            *(rdx_28 + 0x2c) = *var_278_2[4];
                                            *(rdx_28 + 0x1c) = *var_288_2[4];
                                            rdx_28[3] = var_288_2;
                                            rcx_41 = var_1e8;
                                            label_49f9b0:
                                            rdx_28[2] = rcx_41;
                                            rdx_28[1] = rax_51;
                                            *rdx_28 = -0x8000000000000000;
                                            core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$$LP$usize$C$$RF$str$C$alloc..vec..Vec$LT$$RF$alloc..string..String$GT$$RP$$GT$$GT$::ha9de14c907de8aae(&var_1b0);
                                            break;
                                            break;
                                        }
                                        
                                        uu_cp::Attributes::union::h43e8d826b0daba39(&var_2a4, 
                                            &var_2b0, &var_1e8);
                                    }
                                    var_304_1 = var_2a4;
                                    int16_t var_2a0;
                                    var_300_1 = var_2a0;
                                    char var_29e;
                                    var_2f8_1 = var_29e;
                                    char var_29d;
                                    var_2fc_1 = var_29d;
                                    int32_t var_29c;
                                    var_2f4_1 = var_29c;
                                    goto label_49f111;
                                }
                                
                                *var_298[4] = var_300_1;
                                var_298 = var_304_1;
                                *var_298[6] = var_2f8_1;
                                *var_298[7] = var_2fc_1;
                                var_290_2 = var_2f4_1;
                                rdi_42 = &var_2d8;
                                rsi_26 = &var_298;
                                rdx_18 = &data_424994[0xec];
                            }
                            else
                            {
                                *var_298[4] = var_300_1;
                                var_298 = var_304_1;
                                *var_298[6] = var_2f8_1;
                                *var_298[7] = var_2fc_1;
                                var_290_2 = var_2f4_1;
                                rdi_42 = &var_2d8;
                                rsi_26 = &var_298;
                                rdx_18 = &data_424a8c;
                            }
                            
                            uu_cp::Attributes::union::h43e8d826b0daba39(rdi_42, rsi_26, rdx_18);
                            var_304_1 = var_2d8;
                            var_300_1 = *var_2d8[4];
                            var_2f8_1 = *var_2d8[6];
                            var_2fc_1 = *var_2d8[7];
                            int32_t var_2d0;
                            var_2f4_1 = var_2d0;
                            goto label_49f0f2;
                        }
                        
                        var_300_1 = 0x101;
                        var_304_1 = 0x1010101;
                        var_2f4_1 = 0x10101;
                        var_2f8_1 = 0;
                        var_2fc_1 = 0;
                        label_49f0f2:
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$alloc..string..String$GT$$GT$::ha881e94fe1fb35be(rbp_2, var_218);
                        label_49f111:
                        _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h88ded4683450ba97(&i_2, &var_1b0);
                        rbp_2 = var_220;
                        
                        if (rbp_2 == -0x8000000000000000)
                            goto label_49eec8;
                    }
                    
                    goto label_49f9d0;
                }
                
                label_49eec8:
                core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$$LP$usize$C$$RF$str$C$alloc..vec..Vec$LT$$RF$alloc..string..String$GT$$RP$$GT$$GT$::ha9de14c907de8aae(&var_1b0);
                
                if (var_2f8_1 & 1)
                {
                    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hc9b93e2d5549764d(&i_2, "SELinux was not enabled during t…", 0x30);
                    var_290_2 = i_2;
                    var_298 = -0x8000000000000003;
                    
                    if (var_2fc_1 & 1)
                    {
                        arg1[7] = var_268_1;
                        void* const rax_26 = var_298;
                        *(arg1 + 0x28) = var_278_2;
                        arg1[3] = var_288_2;
                        arg1[4] = i_3;
                        arg1[1] = rax_26;
                        arg1[2] = var_290_2;
                        *arg1 = -0x8000000000000000;
                        goto label_49f9d0;
                    }
                    
                    uu_cp::show_error_if_needed::h37308d2f7c80265f(&var_298);
                    core::ptr::drop_in_place$LT$uu_cp..Error$GT$::h9ee7df58e7d9e41e(&var_298);
                }
                
                char rax_63 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, "Zset SELinux security context of…", 1);
                char rax_64 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h5efeb7e2d2f22590(arg2, "contextTemplateErrorstate/home/3…", 7);
                void* rax_65;
                
                if (rax_64)
                {
                    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hb77b56fb07963162(&var_298, arg2, "contextTemplateErrorstate/home/3…", 7);
                    rax_65 = clap_builder::parser::error::MatchesError::unwrap::hf9289e9da1ed9625(
                        "contextTemplateErrorstate/home/3…", 7, &var_298);
                }
                
                if (!rax_64 || !rax_65)
                    var_2d8 = -0x8000000000000000;
                else
                {
                    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(&var_298, rax_65);
                    var_2c8 = var_288_2;
                    var_2d8 = var_298;
                }
                
                char rax_67 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, "attributes-onlycopy-contentshard…", 0xf);
                char rax_68 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, "copy-contentshard-link files ins…", 0xd);
                char rax_69 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, "cli-symbolic-linksfollow command…", 0x12);
                char rax_70 = uu_cp::CopyMode::from_matches::h51c7abde47ff2194(arg2);
                char var_2f0_1;
                
                if (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, "no-dereferencedereferencenever f…", 0xe))
                    var_2f0_1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, "dereferencenever follow symbolic…", 0xb);
                else if (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, "no-dereference-preserve-linkssam…", 0x1d))
                    var_2f0_1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, "dereferencenever follow symbolic…", 0xb);
                else if (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, "archiveSame as -dR --preserve=al…", 7))
                    var_2f0_1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, "dereferencenever follow symbolic…", 0xb);
                else
                {
                    var_2f0_1 = 1;
                    
                    if (var_2ee_1 && uu_cp::CopyMode::from_matches::h51c7abde47ff2194(arg2))
                        var_2f0_1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, "dereferencenever follow symbolic…", 0xb);
                }
                
                char rax_76 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, "one-file-systemstay on this file…", 0xf);
                char rax_77 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, "parentsparentuse full source fil…", 7);
                char rax_78 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, "debugexplain how a file is copie…", 5);
                char var_2ef_1 = 1;
                
                if (!clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, "verboseexplicitly state what is …", 7))
                    var_2ef_1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, "debugexplain how a file is copie…", 5);
                
                char rax_81 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, "strip-trailing-slashesremove any…", 0x16);
                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hb77b56fb07963162(&var_298, arg2, "reflinksymbolic-linkattributes-o…", 7);
                void* rax_82 = clap_builder::parser::error::MatchesError::unwrap::hf9289e9da1ed9625(
                    "reflinksymbolic-linkattributes-o…", 7, &var_298);
                char var_2b4_1 = 1;
                
                if (!rax_82)
                    goto label_49f5d5;
                
                int64_t rbx_8 = *(rax_82 + 8);
                uint64_t r15_5 = *(rax_82 + 0x10);
                void* rbx_10;
                
                if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h24397207b493d5a1(rbx_8, r15_5, "alwaysnevercontrol clone/CoW cop…", 6))
                {
                    if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h24397207b493d5a1(rbx_8, r15_5, "auto", 4))
                        goto label_49f5d5;
                    
                    var_2b4_1 = 2;
                    
                    if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h24397207b493d5a1(rbx_8, r15_5, "nevercontrol clone/CoW copies. S…", 5))
                        goto label_49f5d5;
                    
                    i_2 = nullptr;
                    int64_t var_230_2 = rbx_8;
                    uint64_t var_228 = r15_5;
                    var_220 = 1;
                    var_1b0 = &i_2;
                    var_1a8 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                    var_298 = &data_55e9a8;
                    int64_t var_290_3 = 2;
                    int64_t var_278_3 = 0;
                    int64_t*** var_288_3 = &var_1b0;
                    int64_t var_280_4 = 1;
                    void var_60;
                    rbx_10 = &var_60;
                    core::option::Option$LT$T$GT$::map_or_else::ha891a5b84284deb4(&var_60, 
                        &var_298);
                    label_49f917:
                    arg1[4] = *(rbx_10 + 0x10);
                    *(arg1 + 0x10) = *rbx_10;
                    arg1[1] = -0x7ffffffffffffff8;
                    *arg1 = -0x8000000000000000;
                    core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::h2163d9b30f80841c(&var_2d8);
                    goto label_49f9d0;
                }
                
                var_2b4_1 = 0;
                label_49f5d5:
                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hb77b56fb07963162(&var_298, arg2, "sparsecontrol creation of sparse…", 6);
                void* rax_86 = clap_builder::parser::error::MatchesError::unwrap::hf9289e9da1ed9625(
                    "sparsecontrol creation of sparse…", 6, &var_298);
                char r12_3 = 1;
                
                if (!rax_86)
                    goto label_49f679;
                
                void* var_160 = rax_86;
                int64_t rbx_9 = *(rax_86 + 8);
                uint64_t r15_6 = *(rax_86 + 0x10);
                
                if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h24397207b493d5a1(rbx_9, r15_6, "alwaysnevercontrol clone/CoW cop…", 6))
                {
                    if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h24397207b493d5a1(rbx_9, r15_6, "auto", 4))
                        goto label_49f679;
                    
                    r12_3 = 2;
                    
                    if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h24397207b493d5a1(rbx_9, r15_6, "nevercontrol clone/CoW copies. S…", 5))
                        goto label_49f679;
                    
                    i_2 = &var_160;
                    int64_t (* var_230_3)(int64_t* arg1, int64_t arg2) =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hdf6e3f48b5cbb40e;
                    var_298 = &data_55e9c8;
                    int64_t var_290_4 = 2;
                    int64_t var_278_4 = 0;
                    int64_t** var_288_4 = &i_2;
                    int64_t var_280_5 = 1;
                    void var_48;
                    rbx_10 = &var_48;
                    core::option::Option$LT$T$GT$::map_or_else::ha891a5b84284deb4(&var_48, 
                        &var_298);
                    goto label_49f917;
                }
                
                r12_3 = 0;
                label_49f679:
                char rax_90 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, "progress", 8);
                char rbp_3 = rax_63 | var_2d8 != -0x8000000000000000;
                int128_t zmm0_10 = var_2d8;
                int128_t zmm1_3 = var_178;
                int128_t var_158_1 = zmm1_3;
                int128_t zmm2_1 = var_208;
                rbx_2 = arg1;
                *(rbx_2 + 0x30) = zmm0_10;
                *(rbx_2 + 0x3e) = *zmm0_10[0xe];
                rbx_2[8] = var_2c8;
                rbx_2[9] = var_304_1;
                *(rbx_2 + 0x4c) = var_300_1;
                rbx_2[4] = *zmm2_1[8];
                rbx_2[5] = var_1f8;
                *rbx_2 = zmm1_3;
                int64_t var_168;
                *(rbx_2 + 0x10) = var_168;
                *(rbx_2 + 0x4e) = var_2f8_1;
                *(rbx_2 + 0x4f) = var_2fc_1;
                rbx_2[0xa] = var_2f4_1;
                *(rbx_2 + 0x54) = rax_14;
                *(rbx_2 + 0x55) = rdx_6;
                *(rbx_2 + 0x56) = rax_67;
                *(rbx_2 + 0x57) = rax_68;
                rbx_2[0xb] = rax_69;
                *(rbx_2 + 0x59) = var_2f0_1;
                *(rbx_2 + 0x5a) = rax_15;
                *(rbx_2 + 0x5b) = rax_76;
                *(rbx_2 + 0x5c) = rax_77;
                *(rbx_2 + 0x5d) = rax_81;
                *(rbx_2 + 0x5e) = var_2ee_1;
                *(rbx_2 + 0x5f) = rax_78;
                rbx_2[0xc] = var_2ef_1;
                *(rbx_2 + 0x61) = rax_90;
                *(rbx_2 + 0x62) = rbp_3;
                *(rbx_2 + 0x63) = r12_3;
                *(rbx_2 + 0x64) = var_2b4_1;
                *(rbx_2 + 0x65) = var_1a8;
                *(rbx_2 + 0x66) = rax_11;
                *(rbx_2 + 0x67) = rax_70;
            }
            else
            {
                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hb77b56fb07963162(&var_298, arg2, "updateumove only when the SOURCE…", 6);
                void* rax_12 = clap_builder::parser::error::MatchesError::unwrap::hf9289e9da1ed9625(
                    "updateumove only when the SOURCE…", 6, &var_298);
                
                if (!rax_12)
                    goto label_49eabc;
                
                if (!uu_cp::Options::from_matches::_$u7b$$u7b$closure$u7d$$u7d$::h1e75cf575ac1c212(
                        *(rax_12 + 8), *(rax_12 + 0x10)))
                    goto label_49eabc;
                
                rbx_2 = arg1;
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hc9b93e2d5549764d(&rbx_2[2], "--backup is mutually exclusive w…", 0x3c);
                rbx_2[1] = -0x7ffffffffffffff8;
                *rbx_2 = -0x8000000000000000;
            }
        }
        else
        {
            var_2d8 = rax_8;
            i_2 = &var_2d8;
            int64_t (* var_230_1)(int64_t* arg1) = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hf8a637a73ed45d5b;
            var_298 = &data_420910;
            int64_t var_290_1 = 1;
            int64_t var_278_1 = 0;
            int64_t** var_288_1 = &i_2;
            int64_t var_280_1 = 1;
            int128_t var_a0;
            core::option::Option$LT$T$GT$::map_or_else::ha891a5b84284deb4(&var_a0, &var_298);
            rbx_2 = arg1;
            int64_t var_90;
            rbx_2[4] = var_90;
            *(rbx_2 + 0x10) = var_a0;
            rbx_2[1] = -0x7ffffffffffffff6;
            *rbx_2 = -0x8000000000000000;
            core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$clap_builder..builder..value_parser..AnyValueParser$GT$$GT$::h3fae8bb6fba1fa61(var_2d8, var_1a8);
        }
    }
    else
    {
        int64_t rbx_1 = rax_1;
        uint64_t r15_1 = rdx;
        
        while (true)
        {
            if (clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h5efeb7e2d2f22590(arg2, rbx_1, r15_1) && clap_builder::parser::matches::arg_matches::ArgMatches::value_source::h45c0c3cb9ce2c562(arg2, rbx_1, r15_1) == 2)
            {
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hc9b93e2d5549764d(&i_2, rbx_1, r15_1);
                rbx_2 = arg1;
                rbx_2[4] = i_3;
                *(rbx_2 + 0x10) = i_2;
                rbx_2[1] = -0x7ffffffffffffff7;
                *rbx_2 = -0x8000000000000000;
                core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$$RF$str$GT$$GT$::hf35858a9cc4d4e59(&var_298);
                break;
            }
            
            int64_t rax_2;
            uint64_t rdx_1;
            rax_2 = _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h515607993124c0bf(&var_298);
            rbx_1 = rax_2;
            r15_1 = rdx_1;
            
            if (!rax_2)
                goto label_49e8eb;
        }
    }
    return rbx_2;
}
