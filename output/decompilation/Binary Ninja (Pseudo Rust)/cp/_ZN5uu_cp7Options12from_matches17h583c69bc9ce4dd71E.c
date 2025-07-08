
  fn uu_cp::Options::from_matches::h583c69bc9ce4dd71(arg1: *mut i64, arg2: *mut c_void) -> *mut i64

{
    let rax: *mut *mut i8 = alloc::alloc::Global::alloc_impl::hf61749d460433fff();
    
    if rax == 0
    {
        alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1();
        /* no return */
    }
    
    *rax = "contextlinksxattrallThe backup s…";
    rax[1] = 7;
    let mut var_48: ();
    alloc::slice::hack::into_vec::hce11acc89baabf5d(&var_48, rax, 1);
    let mut var_2a8: *mut c_void;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::hffc5b9d8006f6404(&var_2a8, &var_48);
    let mut rax_1: *mut c_void;
    let mut rdx: u64;
    rax_1 = _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h7172e60caa969428(&var_2a8);
    let mut rbx_1: *mut i64;
    let mut var_228: *mut i64;
    let mut var_218: *mut i64;
    let mut rbx: *mut c_void;
    
    if rax_1 == 0
    {
        'label_501c0d:
        core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$$RF$str$GT$$GT$::ha3ee35139b7f90b6(&var_2a8);
        rbx = 1;
        
        if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
            arg2, "recursivecopy directories recurs…", 9) == 0
        {
            rbx =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
                arg2, "archiveSame as -dR --preserve=al…", 7);
        }
        
        let mut var_188: *mut *mut i64;
        uucore::features::backup_control::determine_backup_mode::h17e48f842769eb29(&var_188, arg2);
        let rax_8: *mut *mut i64 = var_188;
        let mut var_248: *mut *mut i64;
        let var_180: i8;
        
        if rax_8 == 0
        {
            let rax_10: i8 =
                uucore::features::update_control::determine_update_mode::h741491f5f957cb56(arg2);
            let mut var_160: i128;
            uucore::features::backup_control::determine_backup_suffix::h1f59e1b98a321786(&var_160);
            let mut rax_11: i8;
            let mut rdx_5: i8;
            rax_11 = uu_cp::OverwriteMode::from_matches::h863eb92f3f1d1213(arg2);
            let rax_12: i8 =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
                arg2, "no-target-directorycopy all SOUR…", 0x13);
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hce56f285f425a273(
                &var_2a8, arg2, "target-directory/", 0x10);
            let rax_13: *mut c_void =
                clap_builder::parser::error::MatchesError::unwrap::hf7e44ba6776d41f9(
                "target-directory/", 0x10, &var_2a8);
            let mut var_1f8: i64;
            let mut var_1e8: u64;
            let mut rcx_2: *mut i64;
            
            if rax_13 != 0
            {
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h250bb613d8eaf262(&var_2a8, rax_13);
                let var_298: u64;
                var_1e8 = var_298;
                var_1f8 = var_2a8;
                
                if var_1f8 == -0x8000000000000000
                {
                    goto 'label_501e66;
                }
                
                let var_1f0: *mut i8;
                
                if std::path::Path::is_dir::h9ac0db933706da51(var_1f0, var_1e8) != 0
                {
                    goto 'label_501e66;
                }
                
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h250bb613d8eaf262(&var_2a8, &var_1f8);
                rcx_2 = arg1;
                rcx_2[4] = var_298;
                *rcx_2.byte_offset(0x10) = var_2a8;
                rcx_2[1] = 0xc;
                'label_502ae3:
                *rcx_2 = -0x8000000000000000;
                'label_502aee:
                core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::he488659846a394d7(&var_1f8);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h5bdd96f6f34778b9(&var_160);
                return arg1;
            }
            
            var_1f8 = -0x8000000000000000;
            'label_501e66:
            let var_2de_1: i8 = rbx;
            let mut var_1c0: i64 = 0;
            let var_1b8_1: *mut c_void = 8;
            let var_1b0_1: i64 = 0;
            var_2a8 = "preserveENETDOWNOption '";
            let mut var_2a0_2: i64 = 8;
            let var_298_2: *const i8 = "no-preservedon't preserve the sp…";
            let var_290_2: i64 = 0xb;
            let var_288_2: *const i8 = "archiveSame as -dR --preserve=al…";
            let var_280_1: i64 = 7;
            let var_278_1: *const i8 = "preserve-default-attributessame …";
            let var_270_1: i64 = 0x1b;
            let var_268_1: *const i8 = "no-dereference-preserve-linkssam…";
            let var_260_1: i64 = 0x1d;
            let var_258_1: i64 = 0;
            let var_250_1: i64 = 5;
            let mut var_220: *mut i64;
            let mut var_210: *mut i64;
            let mut var_200: i64;
            
            loop
            {
                let mut rax_17: *mut i64;
                let mut rdx_7: *mut i64;
                rax_17 = _$LT$core..array..iter..IntoIter$LT$T$C$_$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h5c3d5e224da239e1(&var_2a8);
                
                if rax_17 == 0
                {
                    break;
                }
                
                let mut var_70: i32;
                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h7ba13a8aa97b19f5(&var_70, arg2, rax_17, rdx_7);
                let mut rax_18: i64;
                let mut rdx_10: *mut i64;
                rax_18 = clap_builder::parser::matches::arg_matches::ArgMatches::index_of::hc3c8b487726d2353(arg2, rax_17, rdx_7);
                let var_68: *mut i8;
                
                if var_70 == 2 && rax_18 == 1 && var_68 != 0
                {
                    if *var_68 == 0
                    {
                        continue;
                    }
                    else
                    {
                        var_218 = rdx_10;
                        var_228 = rax_17;
                        var_220 = rdx_7;
                        var_210 = nullptr;
                        let var_208_1: i64 = 8;
                        var_200 = 0;
                        alloc::vec::Vec$LT$T$C$A$GT$::push::ha32ebc6ccbbd4382(&var_1c0, &var_228);
                        continue;
                    }
                }
                
                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_occurrences::hd8f66d2a26528487(&var_228, arg2, rax_17, rdx_7);
                let mut var_108: i64;
                clap_builder::parser::error::MatchesError::unwrap::h93037b0cc895e9ae(&var_108, 
                    rax_17, rdx_7, &var_228);
                let mut var_f0: i64;
                clap_builder::parser::matches::arg_matches::ArgMatches::indices_of::h365fe016942495a0(&var_f0, arg2, rax_17, rdx_7);
                
                if var_108 != 0 && var_f0 != 0
                {
                    let var_f8: i64;
                    let var_c8_1: i64 = var_f8;
                    let mut var_d8: i128 = var_108;
                    let var_e0: i64;
                    let var_238_1: i64 = var_e0;
                    var_248 = var_f0;
                    var_228 = &var_248;
                    var_220 = &var_1c0;
                    var_218 = rax_17;
                    var_210 = rdx_7;
                    core::iter::traits::iterator::Iterator::fold::h4888c75204db4229(&var_d8, 
                        &var_228);
                }
            }
            
            core::ptr::drop_in_place$LT$core..array..iter..IntoIter$LT$$RF$str$C$5_usize$GT$$GT$::hb6788348e46460c7();
            alloc::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::sort_by::h58f290e3cc6c7d4e(var_1b8_1, 
                var_1b0_1);
            let mut var_2e8_1: i16 = 0;
            let mut var_2ec_1: i32 = 0;
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h169331af2a354e6e(&var_188, &var_1c0);
            _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hec56b39cfe9d99a6(&var_228, &var_188);
            let mut r13_2: i8 = 0;
            let mut rbp_2: i8 = 0;
            let mut var_2e4_1: i32 = 0;
            
            if var_210 != -0x8000000000000000
            {
                var_2e4_1 = 0;
                rbp_2 = 0;
                r13_2 = 0;
                
                loop
                {
                    let rbx_4: *mut i64 = var_228;
                    let mut var_1a8: i128 = var_210;
                    
                    if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::ha9fb26a3ee82846d(rbx_4, var_220, "archiveSame as -dR --preserve=al…", 7) == 0
                    {
                        if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::ha9fb26a3ee82846d(rbx_4, var_220, "preserve-default-attributessame …", 0x1b) == 0
                        {
                            if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::ha9fb26a3ee82846d(rbx_4, var_220, "no-dereference-preserve-linkssam…", 0x1d) == 0
                            {
                                let mut var_2b4: i32;
                                let mut var_2c0: i32;
                                let mut rax_57: *mut c_void;
                                let mut rcx_37: i64;
                                let mut rdx_25: *mut i64;
                                
                                if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::ha9fb26a3ee82846d(rbx_4, var_220, "preserveENETDOWNOption '", 8) == 0
                                {
                                    if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::ha9fb26a3ee82846d(rbx_4, var_220, "no-preservedon't preserve the sp…", 0xb)
                                        & var_200 != 0) != 1
                                    {
                                        goto 'label_502511;
                                    }
                                    
                                    let var_2bc_2: i16 = var_2e8_1;
                                    var_2c0 = var_2ec_1;
                                    let var_2ba_2: i8 = r13_2;
                                    let var_2b9_2: i8 = rbp_2;
                                    let var_2b8_2: i32 = var_2e4_1;
                                    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h19d6f95b267c0578(&var_248, &var_1a8);
                                    uu_cp::Attributes::parse_iter::h4e9dbe07d5fad3ae(&var_2a8, 
                                        &var_248);
                                    rax_57 = var_2a8;
                                    let mut var_1d0: i64 = var_2a0_2;
                                    
                                    if rax_57 != 0xd
                                    {
                                        rdx_25 = arg1;
                                        *rdx_25.byte_offset(0x38) = var_278_1;
                                        *rdx_25.byte_offset(0x2c) = *var_288_2[4];
                                        *rdx_25.byte_offset(0x1c) = *var_298_2[4];
                                        rdx_25[3] = var_298_2;
                                        rcx_37 = var_1d0;
                                        goto 'label_502b86;
                                    }
                                    
                                    uu_cp::Attributes::diff::h066483fdfdea4a0c(&var_2b4, &var_2c0, 
                                        &var_1d0);
                                }
                                else
                                {
                                    let var_2bc_1: i16 = var_2e8_1;
                                    var_2c0 = var_2ec_1;
                                    let var_2ba_1: i8 = r13_2;
                                    let var_2b9_1: i8 = rbp_2;
                                    let var_2b8_1: i32 = var_2e4_1;
                                    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h19d6f95b267c0578(&var_248, &var_1a8);
                                    uu_cp::Attributes::parse_iter::h4e9dbe07d5fad3ae(&var_2a8, 
                                        &var_248);
                                    rax_57 = var_2a8;
                                    let mut var_1e0: i64 = var_2a0_2;
                                    
                                    if rax_57 != 0xd
                                    {
                                        rdx_25 = arg1;
                                        *rdx_25.byte_offset(0x38) = var_278_1;
                                        *rdx_25.byte_offset(0x2c) = *var_288_2[4];
                                        *rdx_25.byte_offset(0x1c) = *var_298_2[4];
                                        rdx_25[3] = var_298_2;
                                        rcx_37 = var_1e0;
                                        'label_502b86:
                                        rdx_25[2] = rcx_37;
                                        rdx_25[1] = rax_57;
                                        *rdx_25 = -0x8000000000000000;
                                        core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$$LP$usize$C$$RF$str$C$alloc..vec..Vec$LT$$RF$alloc..string..String$GT$$RP$$GT$$GT$::h12ee6ef17018cb57(&var_188);
                                        break;
                                        break;
                                    }
                                    
                                    uu_cp::Attributes::union::h2578ff077a39174b(&var_2b4, &var_2c0, 
                                        &var_1e0);
                                }
                                var_2ec_1 = var_2b4;
                                let var_2b0: i16;
                                var_2e8_1 = var_2b0;
                                let var_2ae: i8;
                                r13_2 = var_2ae;
                                let var_2ad: i8;
                                rbp_2 = var_2ad;
                                let var_2ac: i32;
                                var_2e4_1 = var_2ac;
                                goto 'label_502526;
                            }
                            
                            *var_2a8[4] = var_2e8_1;
                            var_2a8 = var_2ec_1;
                            *var_2a8[6] = r13_2;
                            *var_2a8[7] = rbp_2;
                            var_2a0_2 = var_2e4_1;
                            uu_cp::Attributes::union::h2578ff077a39174b.specialized.1();
                        }
                        else
                        {
                            *var_2a8[4] = var_2e8_1;
                            var_2a8 = var_2ec_1;
                            *var_2a8[6] = r13_2;
                            *var_2a8[7] = rbp_2;
                            var_2a0_2 = var_2e4_1;
                            uu_cp::Attributes::union::h2578ff077a39174b.specialized.2();
                        }
                        
                        var_2ec_1 = var_248;
                        var_2e8_1 = *var_248[4];
                        r13_2 = *var_248[6];
                        rbp_2 = *var_248[7];
                        let var_240: i32;
                        var_2e4_1 = var_240;
                        goto 'label_502511;
                    }
                    
                    var_2e8_1 = 0x101;
                    var_2ec_1 = 0x1010101;
                    var_2e4_1 = 0x10101;
                    r13_2 = 0;
                    rbp_2 = 0;
                    'label_502511:
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$alloc..string..String$GT$$GT$::h664d4980780af36c(&var_1a8);
                    'label_502526:
                    _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hec56b39cfe9d99a6(&var_228, &var_188);
                    
                    if var_210 == -0x8000000000000000
                    {
                        goto 'label_502149;
                    }
                }
                
                goto 'label_502aee;
            }
            
            'label_502149:
            core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$$LP$usize$C$$RF$str$C$alloc..vec..Vec$LT$$RF$alloc..string..String$GT$$RP$$GT$$GT$::h12ee6ef17018cb57(&var_188);
            
            if (r13_2 & 1) != 0
            {
                _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h837a0740cc026c95(
                    &var_228, "SELinux was not enabled during t…", 0x30);
                var_2a0_2 = var_228;
                var_2a8 = 4;
                
                if (rbp_2 & 1) != 0
                {
                    let rax_65: *mut c_void = var_2a8;
                    *arg1.byte_offset(0x38) = var_278_1;
                    *arg1.byte_offset(0x28) = var_288_2;
                    arg1[3] = var_298_2;
                    arg1[4] = var_218;
                    arg1[1] = rax_65;
                    arg1[2] = var_2a0_2;
                    *arg1 = -0x8000000000000000;
                    goto 'label_502aee;
                }
                
                uu_cp::show_error_if_needed::h934143ac50374c6e(&var_2a8);
                core::ptr::drop_in_place$LT$uu_cp..Error$GT$::h771e7f9a0f8a7901(&var_2a8);
            }
            
            let rax_23: i8 =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
                arg2, "attributes-onlycopy-contentshard…", 0xf);
            let rax_24: i8 =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
                arg2, "copy-contentshard-link files ins…", 0xd);
            let rax_25: i8 =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
                arg2, "cli-symbolic-linksfollow command…", 0x12);
            let rax_26: i8 = uu_cp::CopyMode::from_matches::h05c5459bbc8a33dc(arg2);
            let mut var_2e0_1: i8;
            
            if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
                arg2, "no-dereferencedereferencenever f…", 0xe) != 0
            {
                var_2e0_1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg2, "dereferencenever follow symbolic…", 0xb);
            }
            else if
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
                arg2, "no-dereference-preserve-linkssam…", 0x1d) != 0
            {
                var_2e0_1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg2, "dereferencenever follow symbolic…", 0xb);
            }
            else if
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
                arg2, "archiveSame as -dR --preserve=al…", 7) != 0
            {
                var_2e0_1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg2, "dereferencenever follow symbolic…", 0xb);
            }
            else
            {
                var_2e0_1 = 1;
                
                if var_2de_1 != 0 && uu_cp::CopyMode::from_matches::h05c5459bbc8a33dc(arg2) != 0
                {
                    var_2e0_1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg2, "dereferencenever follow symbolic…", 0xb);
                }
            }
            
            let rax_32: i8 =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
                arg2, "one-file-systemstay on this file…", 0xf);
            let rax_33: i8 =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
                arg2, "parentsparentuse full source fil…", 7);
            let rax_34: i8 =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
                arg2, "debugexplain how a file is copie…", 5);
            let mut var_2df_1: i8 = 1;
            
            if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
                arg2, "verboseexplicitly state what is …", 7) == 0
            {
                var_2df_1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg2, "debugexplain how a file is copie…", 5);
            }
            
            let rax_37: i8 =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
                arg2, "strip-trailing-slashesremove any…", 0x16);
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h83269f7c9d3ca029(
                &var_2a8, arg2, "reflinksymbolic-linkattributes-o…", 7);
            let rax_38: *mut c_void =
                clap_builder::parser::error::MatchesError::unwrap::h30948932dbd3ab55(
                "reflinksymbolic-linkattributes-o…", 7, &var_2a8);
            let mut var_2c4_1: i8 = 1;
            
            if rax_38 == 0
            {
                goto 'label_50277b;
            }
            
            let rbx_3: i64 = *rax_38.byte_offset(8);
            let r15_3: u64 = *rax_38.byte_offset(0x10);
            let mut zmm0_12: i128;
            
            if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::ha9fb26a3ee82846d(rbx_3, r15_3, "alwaysnevercontrol clone/CoW cop…", 6) == 0
            {
                if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::ha9fb26a3ee82846d(rbx_3, r15_3, "auto", 4) != 0
                {
                    goto 'label_50277b;
                }
                
                var_2c4_1 = 2;
                
                if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::ha9fb26a3ee82846d(rbx_3, r15_3, "nevercontrol clone/CoW copies. S…", 5) != 0
                {
                    goto 'label_50277b;
                }
                
                var_228 = nullptr;
                let var_220_2: i64 = rbx_3;
                let var_218_2: u64 = r15_3;
                var_210 = 1;
                var_248 = &var_228;
                let var_240_2: fn(arg1: *mut c_void, arg2: *mut c_void) -> i64 = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                var_2a8 = &data_5b5c50;
                let var_2a0_3: i64 = 2;
                let var_288_3: i64 = 0;
                let var_298_4: *mut *mut *mut i64 = &var_248;
                let var_290_4: i64 = 1;
                let mut var_a0: i128;
                core::option::Option$LT$T$GT$::map_or_else::h805a87bba4bea7c2(&var_a0, &var_2a8);
                rcx_2 = arg1;
                let var_90: i64;
                rcx_2[4] = var_90;
                zmm0_12 = var_a0;
                'label_502acc:
                *rcx_2.byte_offset(0x10) = zmm0_12;
                rcx_2[1] = 9;
                goto 'label_502ae3;
            }
            
            var_2c4_1 = 0;
            'label_50277b:
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h83269f7c9d3ca029(
                &var_2a8, arg2, "sparsecontrol creation of sparse…", 6);
            let rax_68: *mut c_void =
                clap_builder::parser::error::MatchesError::unwrap::h30948932dbd3ab55(
                "sparsecontrol creation of sparse…", 6, &var_2a8);
            let mut r12_2: i8 = 1;
            
            if rax_68 == 0
            {
                goto 'label_502823;
            }
            
            let mut var_168: *mut c_void = rax_68;
            let rbx_5: i64 = *rax_68.byte_offset(8);
            let r15_5: u64 = *rax_68.byte_offset(0x10);
            
            if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::ha9fb26a3ee82846d(rbx_5, r15_5, "alwaysnevercontrol clone/CoW cop…", 6) == 0
            {
                if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::ha9fb26a3ee82846d(rbx_5, r15_5, "auto", 4) != 0
                {
                    goto 'label_502823;
                }
                
                r12_2 = 2;
                
                if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::ha9fb26a3ee82846d(rbx_5, r15_5, "nevercontrol clone/CoW copies. S…", 5) != 0
                {
                    goto 'label_502823;
                }
                
                var_228 = &var_168;
                let var_220_3: fn(arg1: *mut i64, arg2: i64) -> i64 =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hdbce5539cdbd3a0b;
                var_2a8 = &data_5b5c70;
                let var_2a0_4: i64 = 2;
                let var_288_4: i64 = 0;
                let var_298_5: *mut *mut i64 = &var_228;
                let var_290_5: i64 = 1;
                let mut var_88: i128;
                core::option::Option$LT$T$GT$::map_or_else::h805a87bba4bea7c2(&var_88, &var_2a8);
                rcx_2 = arg1;
                let var_78: i64;
                rcx_2[4] = var_78;
                zmm0_12 = var_88;
                goto 'label_502acc;
            }
            
            r12_2 = 0;
            'label_502823:
            var_228 = var_160;
            var_2a8 = var_1f8;
            let rax_74: i8 =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
                arg2, "progress", 8);
            let temp0_2: [i32; 0x4] = _mm_insert_epi16(
                _mm_insert_epi16(var_2e0_1 << 0x18 | rax_25 << 0x10 | rax_24 << 8 | rax_23, 
                    rax_32 << 8 | rax_12, 2), 
                rax_37 << 8 | rax_33, 3);
            let var_114_1: i16 = var_2e8_1;
            let var_118_1: i32 = var_2ec_1;
            let zmm1_4: i128 = var_228;
            let var_148_1: i128 = zmm1_4;
            let zmm2_3: i128 = var_2a8;
            rbx_1 = arg1;
            *rbx_1.byte_offset(0x2e) = var_1e8;
            rbx_1[4] = *zmm2_3[8];
            rbx_1[5] = var_1e8;
            let var_150: i64;
            rbx_1[2] = var_150;
            rbx_1[3] = zmm2_3;
            *rbx_1 = zmm1_4;
            *rbx_1.byte_offset(0x36) = r13_2;
            *rbx_1.byte_offset(0x37) = rbp_2;
            rbx_1[7] = var_2e4_1;
            *rbx_1.byte_offset(0x3c) = rax_11;
            *rbx_1.byte_offset(0x3d) = rdx_5;
            *rbx_1.byte_offset(0x3e) = temp0_2[0];
            *rbx_1.byte_offset(0x46) = var_2de_1;
            *rbx_1.byte_offset(0x47) = rax_34;
            rbx_1[9] = var_2df_1;
            *rbx_1.byte_offset(0x49) = rax_74;
            *rbx_1.byte_offset(0x4a) = r12_2;
            *rbx_1.byte_offset(0x4b) = var_2c4_1;
            *rbx_1.byte_offset(0x4c) = var_180;
            *rbx_1.byte_offset(0x4d) = rax_10;
            *rbx_1.byte_offset(0x4e) = rax_26;
        }
        else
        {
            var_248 = rax_8;
            var_228 = &var_248;
            let var_220_1: fn(arg1: *mut i64) -> i64 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hecbc8f9382c41ff5;
            var_2a8 = &data_41e7f0;
            let var_2a0_1: i64 = 1;
            let var_288_1: i64 = 0;
            let var_298_1: *mut *mut i64 = &var_228;
            let var_290_1: i64 = 1;
            let mut var_b8: i128;
            core::option::Option$LT$T$GT$::map_or_else::h805a87bba4bea7c2(&var_b8, &var_2a8);
            rbx_1 = arg1;
            let var_a8: i64;
            rbx_1[4] = var_a8;
            *rbx_1.byte_offset(0x10) = var_b8;
            rbx_1[1] = 0xb;
            *rbx_1 = -0x8000000000000000;
            core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::hd3f979be012334ba(var_248, var_180);
        }
    }
    else
    {
        rbx = rax_1;
        let mut r15_1: u64 = rdx;
        
        loop
        {
            if clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h8ab577f2647f3b72(arg2, rbx, r15_1) != 0 && clap_builder::parser::matches::arg_matches::ArgMatches::value_source::h1b5412f9501eb404(arg2, rbx, r15_1) == 2
            {
                _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h837a0740cc026c95(
                    &var_228, rbx, r15_1);
                rbx_1 = arg1;
                rbx_1[4] = var_218;
                *rbx_1.byte_offset(0x10) = var_228;
                rbx_1[1] = 0xa;
                *rbx_1 = -0x8000000000000000;
                core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$$RF$str$GT$$GT$::ha3ee35139b7f90b6(&var_2a8);
                break;
            }
            
            let mut rax_2: *mut c_void;
            let mut rdx_1: u64;
            rax_2 = _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h7172e60caa969428(&var_2a8);
            rbx = rax_2;
            r15_1 = rdx_1;
            
            if rax_2 == 0
            {
                goto 'label_501c0d;
            }
        }
    }
    rbx_1
}
