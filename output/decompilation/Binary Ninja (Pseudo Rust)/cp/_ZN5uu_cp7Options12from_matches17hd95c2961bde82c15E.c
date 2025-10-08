
  fn uu_cp::Options::from_matches::hd95c2961bde82c15(arg1: *mut i64, arg2: *mut c_void) -> *mut i64

{
    let mut rbp: fn(arg1: *mut c_void, arg2: i64, arg3: i64) -> u64;
    let var_8: fn(arg1: *mut c_void, arg2: i64, arg3: i64) -> u64 = rbp;
    let rax: u64 = alloc::alloc::Global::alloc_impl::h6fb1b6049873c120(8, 0, 0);
    
    if rax == 0
    {
        alloc::alloc::handle_alloc_error::h88aa4f4f9d19c4f9();
        /* no return */
    }
    
    let mut var_100: i64 = 0;
    let var_f8: u64 = rax;
    let var_f0: i64 = 0;
    let mut var_298: *mut c_void;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h039b47f58c311fde(&var_298, &var_100);
    let mut rax_1: i64;
    let mut rdx: u64;
    rax_1 = _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h515607993124c0bf(&var_298);
    let mut rbx_2: *mut i64;
    let mut i_2: *mut i64;
    let mut i_3: *mut i64;
    
    if rax_1 == 0
    {
        'label_49e8eb:
        core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$$RF$str$GT$$GT$::hf35858a9cc4d4e59(&var_298);
        rbp = 1;
        
        if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            arg2, "recursivecopy directories recurs…", 9) == 0
        {
            rbp =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
                arg2, "archiveSame as -dR --preserve=al…", 7);
        }
        
        let mut var_1b0: *mut *mut i64;
        uucore::features::backup_control::determine_backup_mode::h09b58a9d9bda0a55(&var_1b0, arg2);
        let rax_8: *mut *mut i64 = var_1b0;
        let mut var_2d8: *mut *mut i64;
        let mut var_1a8: i8;
        
        if rax_8 == 0
        {
            let rax_11: i8 =
                uucore::features::update_control::determine_update_mode::h24daef92534aa2cd(arg2);
            
            if var_1a8 == 0
            {
                'label_49eabc:
                let mut var_178: i128;
                uucore::features::backup_control::determine_backup_suffix::ha7b1c82b4746605a(
                    &var_178);
                let mut rax_14: i8;
                let mut rdx_6: i8;
                rax_14 = uu_cp::OverwriteMode::from_matches::h05cd847131b1413b(arg2);
                let rax_15: i8 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, "no-target-directorycopy all SOUR…", 0x13);
                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hccb3d24b776812db(&var_298, arg2);
                let rax_16: *mut c_void =
                    clap_builder::parser::error::MatchesError::unwrap::hb52848081157b384(&var_298);
                let mut var_208: i64;
                let mut var_1f8: u64;
                
                if rax_16 != 0
                {
                    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::hdde023ffc5414155(&var_298, *rax_16.byte_offset(8), *rax_16.byte_offset(0x10));
                    let var_288: u64;
                    var_1f8 = var_288;
                    var_208 = var_298;
                    
                    if var_208 == -0x8000000000000000
                    {
                        goto 'label_49ebba;
                    }
                    
                    let var_200: *mut i8;
                    
                    if std::path::Path::is_dir::h02edbc48c38d7d9e(var_200, var_1f8) != 0
                    {
                        goto 'label_49ebba;
                    }
                    
                    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::hdde023ffc5414155(&var_298, var_200, var_1f8);
                    arg1[4] = var_288;
                    *arg1.byte_offset(0x10) = var_298;
                    arg1[1] = -0x7ffffffffffffff5;
                    *arg1 = -0x8000000000000000;
                    'label_49f9d0:
                    core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::hf94fc9edf2322537(&var_208);
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h1c03d16396ad1b8d(
                        &var_178);
                    return arg1;
                }
                
                var_208 = -0x8000000000000000;
                'label_49ebba:
                let var_2ee_1: i8 = rbp;
                let mut var_1c8: i64 = 0;
                let var_1c0_1: *mut c_void = 8;
                let var_1b8_1: i64 = 0;
                var_298 = nullptr;
                let mut var_290_2: i64 = 5;
                let var_288_2: *const i8 = "preserveENETDOWNOption '";
                let var_280_2: i64 = 8;
                let var_278_2: *const i8 = "no-preservedon't preserve the sp…";
                let var_270_1: i64 = 0xb;
                let var_268_1: *const i8 = "archiveSame as -dR --preserve=al…";
                let var_260_1: i64 = 7;
                let var_258_1: *const i8 = "preserve-default-attributessame …";
                let var_250_1: i64 = 0x1b;
                let var_248_1: *const i8 = "no-dereference-preserve-linkssam…";
                let var_240_1: i64 = 0x1d;
                let mut i_4: *mut i64;
                let mut rdx_9: u64;
                i_4 = core::array::iter::iter_inner::PolymorphicIter$LT$$u5b$core..mem..maybe_uninit..MaybeUninit$LT$T$GT$$u5d$$GT$::next::hcabef211e5e16ec2(&var_298);
                let mut var_2c8: *const i8;
                let mut var_230: u64;
                let mut var_220: u64;
                let mut var_218: i64;
                let mut var_210: i64;
                let mut rsi_20: i64;
                let mut rdi_34: *mut c_void;
                
                if i_4 == 0
                {
                    rdi_34 = 8;
                    rsi_20 = 0;
                }
                else
                {
                    let mut i_1: *mut i64 = i_4;
                    let mut rbx_6: u64 = rdx_9;
                    let mut i: *mut i64;
                    
                    do
                    {
                        let mut var_88: i32;
                        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h85f6eaa0d94af382(&var_88, arg2, i_1, rbx_6);
                        let mut rax_20: i8;
                        let mut i_5: *mut i64;
                        rax_20 = clap_builder::parser::matches::arg_matches::ArgMatches::index_of::h533e2cba337d4042(arg2, i_1, rbx_6);
                        let var_80: *mut i8;
                        
                        if var_88 != 2 || (rax_20 & 1) == 0 || var_80 == 0
                        {
                            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_occurrences::he2cb66ff72183c0e(&i_2, arg2, i_1, rbx_6);
                            let mut var_e8: i64;
                            clap_builder::parser::error::MatchesError::unwrap::h4c29764f4fc1d271(
                                &var_e8, i_1, rbx_6, &i_2);
                            let mut var_d0: i64;
                            clap_builder::parser::matches::arg_matches::ArgMatches::indices_of::h172437770ffa9ae0(&var_d0, arg2, i_1, rbx_6);
                            
                            if var_e8 != 0 && var_d0 != 0
                            {
                                let var_d8: i64;
                                let var_a8_1: i64 = var_d8;
                                let mut var_b8: i128 = var_e8;
                                let var_c0: *mut i8;
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
                        else if *var_80 == 1
                        {
                            i_3 = i_5;
                            i_2 = i_1;
                            var_230 = rbx_6;
                            var_220 = 0;
                            var_218 = 8;
                            var_210 = 0;
                            alloc::vec::Vec$LT$T$C$A$GT$::push::h21129240694f7174(&var_1c8, &i_2);
                        }
                        
                        let mut rdx_10: u64;
                        i = core::array::iter::iter_inner::PolymorphicIter$LT$$u5b$core..mem..maybe_uninit..MaybeUninit$LT$T$GT$$u5d$$GT$::next::hcabef211e5e16ec2(&var_298);
                        i_1 = i;
                        rbx_6 = rdx_10;
                    } while i != 0;
                    rdi_34 = var_1c0_1;
                    rsi_20 = var_1b8_1;
                }
                
                alloc::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::sort_by::hb3b449298bb370e5(rdi_34, 
                    rsi_20);
                let mut var_300_1: i16 = 0;
                let mut var_304_1: i32 = 0;
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::he2b72d94f2e5cff7(&var_1b0, &var_1c8);
                _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h88ded4683450ba97(&i_2, &var_1b0);
                let mut rbp_2: u64 = var_220;
                let mut var_2f8_1: i8 = 0;
                let mut var_2fc_1: i8 = 0;
                let mut var_2f4_1: i32 = 0;
                
                if rbp_2 != -0x8000000000000000
                {
                    var_2f4_1 = 0;
                    var_2fc_1 = 0;
                    var_2f8_1 = 0;
                    
                    loop
                    {
                        let i_6: *mut i64 = i_2;
                        
                        if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h24397207b493d5a1(i_6, var_230, "archiveSame as -dR --preserve=al…", 7) == 0
                        {
                            let mut rdx_18: *mut i8;
                            let mut rsi_26: *const *mut c_void;
                            let mut rdi_42: *mut i8;
                            
                            if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h24397207b493d5a1(i_6, var_230, "preserve-default-attributessame …", 0x1b) == 0
                            {
                                if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h24397207b493d5a1(i_6, var_230, "no-dereference-preserve-linkssam…", 0x1d) == 0
                                {
                                    let mut var_2a4: i32;
                                    let mut var_2b0: i32;
                                    let mut var_190: u64;
                                    let mut rax_51: *mut c_void;
                                    let mut rcx_41: i64;
                                    let mut rdx_28: *mut i64;
                                    
                                    if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h24397207b493d5a1(i_6, var_230, "preserveENETDOWNOption '", 8) == 0
                                    {
                                        if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h24397207b493d5a1(i_6, var_230, "no-preservedon't preserve the sp…", 0xb)
                                            == 0 || var_210 == 0
                                        {
                                            goto 'label_49f0f2;
                                        }
                                        
                                        let var_2ac_2: i16 = var_300_1;
                                        var_2b0 = var_304_1;
                                        let var_2aa_2: i8 = var_2f8_1;
                                        let var_2a9_2: i8 = var_2fc_1;
                                        let var_2a8_2: i32 = var_2f4_1;
                                        var_190 = rbp_2;
                                        let var_188_2: i64 = var_218;
                                        let var_180_2: i64 = var_210;
                                        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h3c76c5c03f48052b(&var_2d8, &var_190);
                                        uu_cp::Attributes::parse_iter::ha78706e08b35f5c6(&var_298, 
                                            &var_2d8);
                                        rax_51 = var_298;
                                        let mut var_1d8: i64 = var_290_2;
                                        
                                        if rax_51 != -0x7ffffffffffffff4
                                        {
                                            rdx_28 = arg1;
                                            *rdx_28.byte_offset(0x3c) = *var_268_1[4];
                                            *rdx_28.byte_offset(0x2c) = *var_278_2[4];
                                            *rdx_28.byte_offset(0x1c) = *var_288_2[4];
                                            rdx_28[3] = var_288_2;
                                            rcx_41 = var_1d8;
                                            goto 'label_49f9b0;
                                        }
                                        
                                        uu_cp::Attributes::diff::hb3b318adb7407dd4(&var_2a4, 
                                            &var_2b0, &var_1d8);
                                    }
                                    else
                                    {
                                        let var_2ac_1: i16 = var_300_1;
                                        var_2b0 = var_304_1;
                                        let var_2aa_1: i8 = var_2f8_1;
                                        let var_2a9_1: i8 = var_2fc_1;
                                        let var_2a8_1: i32 = var_2f4_1;
                                        var_190 = rbp_2;
                                        let var_188_1: i64 = var_218;
                                        let var_180_1: i64 = var_210;
                                        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h3c76c5c03f48052b(&var_2d8, &var_190);
                                        uu_cp::Attributes::parse_iter::ha78706e08b35f5c6(&var_298, 
                                            &var_2d8);
                                        rax_51 = var_298;
                                        let mut var_1e8: i64 = var_290_2;
                                        
                                        if rax_51 != -0x7ffffffffffffff4
                                        {
                                            rdx_28 = arg1;
                                            *rdx_28.byte_offset(0x3c) = *var_268_1[4];
                                            *rdx_28.byte_offset(0x2c) = *var_278_2[4];
                                            *rdx_28.byte_offset(0x1c) = *var_288_2[4];
                                            rdx_28[3] = var_288_2;
                                            rcx_41 = var_1e8;
                                            'label_49f9b0:
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
                                    let var_2a0: i16;
                                    var_300_1 = var_2a0;
                                    let var_29e: i8;
                                    var_2f8_1 = var_29e;
                                    let var_29d: i8;
                                    var_2fc_1 = var_29d;
                                    let var_29c: i32;
                                    var_2f4_1 = var_29c;
                                    goto 'label_49f111;
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
                            let var_2d0: i32;
                            var_2f4_1 = var_2d0;
                            goto 'label_49f0f2;
                        }
                        
                        var_300_1 = 0x101;
                        var_304_1 = 0x1010101;
                        var_2f4_1 = 0x10101;
                        var_2f8_1 = 0;
                        var_2fc_1 = 0;
                        'label_49f0f2:
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$alloc..string..String$GT$$GT$::ha881e94fe1fb35be(rbp_2, var_218);
                        'label_49f111:
                        _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h88ded4683450ba97(&i_2, &var_1b0);
                        rbp_2 = var_220;
                        
                        if rbp_2 == -0x8000000000000000
                        {
                            goto 'label_49eec8;
                        }
                    }
                    
                    goto 'label_49f9d0;
                }
                
                'label_49eec8:
                core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$$LP$usize$C$$RF$str$C$alloc..vec..Vec$LT$$RF$alloc..string..String$GT$$RP$$GT$$GT$::ha9de14c907de8aae(&var_1b0);
                
                if (var_2f8_1 & 1) != 0
                {
                    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hc9b93e2d5549764d(&i_2, "SELinux was not enabled during t…", 0x30);
                    var_290_2 = i_2;
                    var_298 = -0x8000000000000003;
                    
                    if (var_2fc_1 & 1) != 0
                    {
                        arg1[7] = var_268_1;
                        let rax_26: *mut c_void = var_298;
                        *arg1.byte_offset(0x28) = var_278_2;
                        arg1[3] = var_288_2;
                        arg1[4] = i_3;
                        arg1[1] = rax_26;
                        arg1[2] = var_290_2;
                        *arg1 = -0x8000000000000000;
                        goto 'label_49f9d0;
                    }
                    
                    uu_cp::show_error_if_needed::h37308d2f7c80265f(&var_298);
                    core::ptr::drop_in_place$LT$uu_cp..Error$GT$::h9ee7df58e7d9e41e(&var_298);
                }
                
                let rax_63: i8 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, "Zset SELinux security context of…", 1);
                let rax_64: i8 = clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h5efeb7e2d2f22590(arg2, "contextTemplateErrorstate/home/3…", 7);
                let mut rax_65: *mut c_void;
                
                if rax_64 != 0
                {
                    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hb77b56fb07963162(&var_298, arg2, "contextTemplateErrorstate/home/3…", 7);
                    rax_65 = clap_builder::parser::error::MatchesError::unwrap::hf9289e9da1ed9625(
                        "contextTemplateErrorstate/home/3…", 7, &var_298);
                }
                
                if rax_64 == 0 || rax_65 == 0
                {
                    var_2d8 = -0x8000000000000000;
                }
                else
                {
                    _$LT$alloc..string..String$u20$as$u20$core..clone..Clone$GT$::clone::h94782b8343b62bd8(&var_298, rax_65);
                    var_2c8 = var_288_2;
                    var_2d8 = var_298;
                }
                
                let rax_67: i8 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, "attributes-onlycopy-contentshard…", 0xf);
                let rax_68: i8 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, "copy-contentshard-link files ins…", 0xd);
                let rax_69: i8 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, "cli-symbolic-linksfollow command…", 0x12);
                let rax_70: i8 = uu_cp::CopyMode::from_matches::h51c7abde47ff2194(arg2);
                let mut var_2f0_1: i8;
                
                if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, "no-dereferencedereferencenever f…", 0xe) != 0
                {
                    var_2f0_1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, "dereferencenever follow symbolic…", 0xb);
                }
                else if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, "no-dereference-preserve-linkssam…", 0x1d) != 0
                {
                    var_2f0_1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, "dereferencenever follow symbolic…", 0xb);
                }
                else if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, "archiveSame as -dR --preserve=al…", 7) != 0
                {
                    var_2f0_1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, "dereferencenever follow symbolic…", 0xb);
                }
                else
                {
                    var_2f0_1 = 1;
                    
                    if var_2ee_1 != 0 && uu_cp::CopyMode::from_matches::h51c7abde47ff2194(arg2) != 0
                    {
                        var_2f0_1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, "dereferencenever follow symbolic…", 0xb);
                    }
                }
                
                let rax_76: i8 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, "one-file-systemstay on this file…", 0xf);
                let rax_77: i8 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, "parentsparentuse full source fil…", 7);
                let rax_78: i8 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, "debugexplain how a file is copie…", 5);
                let mut var_2ef_1: i8 = 1;
                
                if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, "verboseexplicitly state what is …", 7) == 0
                {
                    var_2ef_1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, "debugexplain how a file is copie…", 5);
                }
                
                let rax_81: i8 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, "strip-trailing-slashesremove any…", 0x16);
                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hb77b56fb07963162(&var_298, arg2, "reflinksymbolic-linkattributes-o…", 7);
                let rax_82: *mut c_void =
                    clap_builder::parser::error::MatchesError::unwrap::hf9289e9da1ed9625(
                    "reflinksymbolic-linkattributes-o…", 7, &var_298);
                let mut var_2b4_1: i8 = 1;
                
                if rax_82 == 0
                {
                    goto 'label_49f5d5;
                }
                
                let rbx_8: i64 = *rax_82.byte_offset(8);
                let r15_5: u64 = *rax_82.byte_offset(0x10);
                let mut rbx_10: *mut c_void;
                
                if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h24397207b493d5a1(rbx_8, r15_5, "alwaysnevercontrol clone/CoW cop…", 6) == 0
                {
                    if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h24397207b493d5a1(rbx_8, r15_5, "auto", 4) != 0
                    {
                        goto 'label_49f5d5;
                    }
                    
                    var_2b4_1 = 2;
                    
                    if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h24397207b493d5a1(rbx_8, r15_5, "nevercontrol clone/CoW copies. S…", 5) != 0
                    {
                        goto 'label_49f5d5;
                    }
                    
                    i_2 = nullptr;
                    let var_230_2: i64 = rbx_8;
                    let var_228: u64 = r15_5;
                    var_220 = 1;
                    var_1b0 = &i_2;
                    var_1a8 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::ha3782f403933d3a5;
                    var_298 = &data_55e9a8;
                    let var_290_3: i64 = 2;
                    let var_278_3: i64 = 0;
                    let var_288_3: *mut *mut *mut i64 = &var_1b0;
                    let var_280_4: i64 = 1;
                    let mut var_60: ();
                    rbx_10 = &var_60;
                    core::option::Option$LT$T$GT$::map_or_else::ha891a5b84284deb4(&var_60, 
                        &var_298);
                    'label_49f917:
                    arg1[4] = *rbx_10.byte_offset(0x10);
                    *arg1.byte_offset(0x10) = *rbx_10;
                    arg1[1] = -0x7ffffffffffffff8;
                    *arg1 = -0x8000000000000000;
                    core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::h2163d9b30f80841c(&var_2d8);
                    goto 'label_49f9d0;
                }
                
                var_2b4_1 = 0;
                'label_49f5d5:
                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hb77b56fb07963162(&var_298, arg2, "sparsecontrol creation of sparse…", 6);
                let rax_86: *mut c_void =
                    clap_builder::parser::error::MatchesError::unwrap::hf9289e9da1ed9625(
                    "sparsecontrol creation of sparse…", 6, &var_298);
                let mut r12_3: i8 = 1;
                
                if rax_86 == 0
                {
                    goto 'label_49f679;
                }
                
                let mut var_160: *mut c_void = rax_86;
                let rbx_9: i64 = *rax_86.byte_offset(8);
                let r15_6: u64 = *rax_86.byte_offset(0x10);
                
                if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h24397207b493d5a1(rbx_9, r15_6, "alwaysnevercontrol clone/CoW cop…", 6) == 0
                {
                    if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h24397207b493d5a1(rbx_9, r15_6, "auto", 4) != 0
                    {
                        goto 'label_49f679;
                    }
                    
                    r12_3 = 2;
                    
                    if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h24397207b493d5a1(rbx_9, r15_6, "nevercontrol clone/CoW copies. S…", 5) != 0
                    {
                        goto 'label_49f679;
                    }
                    
                    i_2 = &var_160;
                    let var_230_3: fn(arg1: *mut i64, arg2: i64) -> i64 =
                        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hdf6e3f48b5cbb40e;
                    var_298 = &data_55e9c8;
                    let var_290_4: i64 = 2;
                    let var_278_4: i64 = 0;
                    let var_288_4: *mut *mut i64 = &i_2;
                    let var_280_5: i64 = 1;
                    let mut var_48: ();
                    rbx_10 = &var_48;
                    core::option::Option$LT$T$GT$::map_or_else::ha891a5b84284deb4(&var_48, 
                        &var_298);
                    goto 'label_49f917;
                }
                
                r12_3 = 0;
                'label_49f679:
                let rax_90: i8 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, "progress", 8);
                let rbp_3: i8 = rax_63 | var_2d8 != -0x8000000000000000;
                let zmm0_10: i128 = var_2d8;
                let zmm1_3: i128 = var_178;
                let var_158_1: i128 = zmm1_3;
                let zmm2_1: i128 = var_208;
                rbx_2 = arg1;
                *rbx_2.byte_offset(0x30) = zmm0_10;
                *rbx_2.byte_offset(0x3e) = *zmm0_10[0xe];
                rbx_2[8] = var_2c8;
                rbx_2[9] = var_304_1;
                *rbx_2.byte_offset(0x4c) = var_300_1;
                rbx_2[4] = *zmm2_1[8];
                rbx_2[5] = var_1f8;
                *rbx_2 = zmm1_3;
                let var_168: i64;
                *rbx_2.byte_offset(0x10) = var_168;
                *rbx_2.byte_offset(0x4e) = var_2f8_1;
                *rbx_2.byte_offset(0x4f) = var_2fc_1;
                rbx_2[0xa] = var_2f4_1;
                *rbx_2.byte_offset(0x54) = rax_14;
                *rbx_2.byte_offset(0x55) = rdx_6;
                *rbx_2.byte_offset(0x56) = rax_67;
                *rbx_2.byte_offset(0x57) = rax_68;
                rbx_2[0xb] = rax_69;
                *rbx_2.byte_offset(0x59) = var_2f0_1;
                *rbx_2.byte_offset(0x5a) = rax_15;
                *rbx_2.byte_offset(0x5b) = rax_76;
                *rbx_2.byte_offset(0x5c) = rax_77;
                *rbx_2.byte_offset(0x5d) = rax_81;
                *rbx_2.byte_offset(0x5e) = var_2ee_1;
                *rbx_2.byte_offset(0x5f) = rax_78;
                rbx_2[0xc] = var_2ef_1;
                *rbx_2.byte_offset(0x61) = rax_90;
                *rbx_2.byte_offset(0x62) = rbp_3;
                *rbx_2.byte_offset(0x63) = r12_3;
                *rbx_2.byte_offset(0x64) = var_2b4_1;
                *rbx_2.byte_offset(0x65) = var_1a8;
                *rbx_2.byte_offset(0x66) = rax_11;
                *rbx_2.byte_offset(0x67) = rax_70;
            }
            else
            {
                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hb77b56fb07963162(&var_298, arg2, "updateumove only when the SOURCE…", 6);
                let rax_12: *mut c_void =
                    clap_builder::parser::error::MatchesError::unwrap::hf9289e9da1ed9625(
                    "updateumove only when the SOURCE…", 6, &var_298);
                
                if rax_12 == 0
                {
                    goto 'label_49eabc;
                }
                
                if uu_cp::Options::from_matches::_$u7b$$u7b$closure$u7d$$u7d$::h1e75cf575ac1c212(
                    *rax_12.byte_offset(8), *rax_12.byte_offset(0x10)) == 0
                {
                    goto 'label_49eabc;
                }
                
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
            let var_230_1: fn(arg1: *mut i64) -> i64 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hf8a637a73ed45d5b;
            var_298 = &data_420910;
            let var_290_1: i64 = 1;
            let var_278_1: i64 = 0;
            let var_288_1: *mut *mut i64 = &i_2;
            let var_280_1: i64 = 1;
            let mut var_a0: i128;
            core::option::Option$LT$T$GT$::map_or_else::ha891a5b84284deb4(&var_a0, &var_298);
            rbx_2 = arg1;
            let var_90: i64;
            rbx_2[4] = var_90;
            *rbx_2.byte_offset(0x10) = var_a0;
            rbx_2[1] = -0x7ffffffffffffff6;
            *rbx_2 = -0x8000000000000000;
            core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$clap_builder..builder..value_parser..AnyValueParser$GT$$GT$::h3fae8bb6fba1fa61(var_2d8, var_1a8);
        }
    }
    else
    {
        let mut rbx_1: i64 = rax_1;
        let mut r15_1: u64 = rdx;
        
        loop
        {
            if clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h5efeb7e2d2f22590(arg2, rbx_1, r15_1) != 0 && clap_builder::parser::matches::arg_matches::ArgMatches::value_source::h45c0c3cb9ce2c562(arg2, rbx_1, r15_1) == 2
            {
                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hc9b93e2d5549764d(&i_2, rbx_1, r15_1);
                rbx_2 = arg1;
                rbx_2[4] = i_3;
                *rbx_2.byte_offset(0x10) = i_2;
                rbx_2[1] = -0x7ffffffffffffff7;
                *rbx_2 = -0x8000000000000000;
                core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$$RF$str$GT$$GT$::hf35858a9cc4d4e59(&var_298);
                break;
            }
            
            let mut rax_2: i64;
            let mut rdx_1: u64;
            rax_2 = _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h515607993124c0bf(&var_298);
            rbx_1 = rax_2;
            r15_1 = rdx_1;
            
            if rax_2 == 0
            {
                goto 'label_49e8eb;
            }
        }
    }
    rbx_2
}
