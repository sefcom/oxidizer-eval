
  int64_t* uu_cp::Options::from_matches::h583c69bc9ce4dd71(int64_t* arg1, void* arg2)

{
    char** rax = alloc::alloc::Global::alloc_impl::hf61749d460433fff();
    
    if (!rax)
    {
        alloc::alloc::handle_alloc_error::h3816d26e7f8ae8a1();
        /* no return */
    }
    
    *rax = "contextlinksxattrallThe backup s…";
    rax[1] = 7;
    void var_48;
    alloc::slice::hack::into_vec::hce11acc89baabf5d(&var_48, rax, 1);
    void* const var_2a8;
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::hffc5b9d8006f6404(&var_2a8, &var_48);
    void* rax_1;
    uint64_t rdx;
    rax_1 = _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h7172e60caa969428(&var_2a8);
    int64_t* rbx_1;
    int64_t* var_228;
    int64_t* var_218;
    void* rbx;
    
    if (!rax_1)
    {
        label_501c0d:
        core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$$RF$str$GT$$GT$::ha3ee35139b7f90b6(&var_2a8);
        rbx = 1;
        
        if (!clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
                arg2, "recursivecopy directories recurs…", 9))
            rbx =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
                arg2, "archiveSame as -dR --preserve=al…", 7);
        
        int64_t** var_188;
        uucore::features::backup_control::determine_backup_mode::h17e48f842769eb29(&var_188, arg2);
        int64_t** rax_8 = var_188;
        int64_t** var_248;
        char var_180;
        
        if (!rax_8)
        {
            char rax_10 =
                uucore::features::update_control::determine_update_mode::h741491f5f957cb56(arg2);
            int128_t var_160;
            uucore::features::backup_control::determine_backup_suffix::h1f59e1b98a321786(&var_160);
            char rax_11;
            char rdx_5;
            rax_11 = uu_cp::OverwriteMode::from_matches::h863eb92f3f1d1213(arg2);
            char rax_12 =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
                arg2, "no-target-directorycopy all SOUR…", 0x13);
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hce56f285f425a273(
                &var_2a8, arg2, "target-directory/", 0x10);
            void* rax_13 = clap_builder::parser::error::MatchesError::unwrap::hf7e44ba6776d41f9(
                "target-directory/", 0x10, &var_2a8);
            int64_t var_1f8;
            uint64_t var_1e8;
            int64_t* rcx_2;
            
            if (rax_13)
            {
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h250bb613d8eaf262(&var_2a8, rax_13);
                uint64_t var_298;
                var_1e8 = var_298;
                var_1f8 = var_2a8;
                
                if (var_1f8 == -0x8000000000000000)
                    goto label_501e66;
                
                char* var_1f0;
                
                if (std::path::Path::is_dir::h9ac0db933706da51(var_1f0, var_1e8))
                    goto label_501e66;
                
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..clone..Clone$GT$::clone::h250bb613d8eaf262(&var_2a8, &var_1f8);
                rcx_2 = arg1;
                rcx_2[4] = var_298;
                *(rcx_2 + 0x10) = var_2a8;
                rcx_2[1] = 0xc;
                label_502ae3:
                *rcx_2 = -0x8000000000000000;
                label_502aee:
                core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::he488659846a394d7(&var_1f8);
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::h5bdd96f6f34778b9(&var_160);
                return arg1;
            }
            
            var_1f8 = -0x8000000000000000;
            label_501e66:
            char var_2de_1 = rbx;
            int64_t var_1c0 = 0;
            void* var_1b8_1 = 8;
            int64_t var_1b0_1 = 0;
            var_2a8 = "preserveENETDOWNOption '";
            int64_t var_2a0_2 = 8;
            char const* const var_298_2 = "no-preservedon't preserve the sp…";
            int64_t var_290_2 = 0xb;
            char const* const var_288_2 = "archiveSame as -dR --preserve=al…";
            int64_t var_280_1 = 7;
            char const* const var_278_1 = "preserve-default-attributessame …";
            int64_t var_270_1 = 0x1b;
            char const* const var_268_1 = "no-dereference-preserve-linkssam…";
            int64_t var_260_1 = 0x1d;
            int64_t var_258_1 = 0;
            int64_t var_250_1 = 5;
            int64_t* var_220;
            int64_t* var_210;
            int64_t var_200;
            
            while (true)
            {
                int64_t* rax_17;
                int64_t* rdx_7;
                rax_17 = _$LT$core..array..iter..IntoIter$LT$T$C$_$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h5c3d5e224da239e1(&var_2a8);
                
                if (!rax_17)
                    break;
                
                int32_t var_70;
                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h7ba13a8aa97b19f5(&var_70, arg2, rax_17, rdx_7);
                int64_t rax_18;
                int64_t* rdx_10;
                rax_18 = clap_builder::parser::matches::arg_matches::ArgMatches::index_of::hc3c8b487726d2353(arg2, rax_17, rdx_7);
                char* var_68;
                
                if (var_70 == 2 && rax_18 == 1 && var_68)
                {
                    if (!*var_68)
                        continue;
                    else
                    {
                        var_218 = rdx_10;
                        var_228 = rax_17;
                        var_220 = rdx_7;
                        var_210 = nullptr;
                        int64_t var_208_1 = 8;
                        var_200 = 0;
                        alloc::vec::Vec$LT$T$C$A$GT$::push::ha32ebc6ccbbd4382(&var_1c0, &var_228);
                        continue;
                    }
                }
                
                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_occurrences::hd8f66d2a26528487(&var_228, arg2, rax_17, rdx_7);
                int64_t var_108;
                clap_builder::parser::error::MatchesError::unwrap::h93037b0cc895e9ae(&var_108, 
                    rax_17, rdx_7, &var_228);
                int64_t var_f0;
                clap_builder::parser::matches::arg_matches::ArgMatches::indices_of::h365fe016942495a0(&var_f0, arg2, rax_17, rdx_7);
                
                if (var_108 && var_f0)
                {
                    int64_t var_f8;
                    int64_t var_c8_1 = var_f8;
                    int128_t var_d8 = var_108;
                    int64_t var_e0;
                    int64_t var_238_1 = var_e0;
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
            int16_t var_2e8_1 = 0;
            int32_t var_2ec_1 = 0;
            _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h169331af2a354e6e(&var_188, &var_1c0);
            _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hec56b39cfe9d99a6(&var_228, &var_188);
            char r13_2 = 0;
            char rbp_2 = 0;
            int32_t var_2e4_1 = 0;
            
            if (var_210 != -0x8000000000000000)
            {
                var_2e4_1 = 0;
                rbp_2 = 0;
                r13_2 = 0;
                
                while (true)
                {
                    int64_t* rbx_4 = var_228;
                    int128_t var_1a8 = var_210;
                    
                    if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::ha9fb26a3ee82846d(rbx_4, var_220, "archiveSame as -dR --preserve=al…", 7))
                    {
                        if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::ha9fb26a3ee82846d(rbx_4, var_220, "preserve-default-attributessame …", 0x1b))
                        {
                            if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::ha9fb26a3ee82846d(rbx_4, var_220, "no-dereference-preserve-linkssam…", 0x1d))
                            {
                                int32_t var_2b4;
                                int32_t var_2c0;
                                void* const rax_57;
                                int64_t rcx_37;
                                int64_t* rdx_25;
                                
                                if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::ha9fb26a3ee82846d(rbx_4, var_220, "preserveENETDOWNOption '", 8))
                                {
                                    if ((_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::ha9fb26a3ee82846d(rbx_4, var_220, "no-preservedon't preserve the sp…", 0xb)
                                            & var_200) != 1)
                                        goto label_502511;
                                    
                                    int16_t var_2bc_2 = var_2e8_1;
                                    var_2c0 = var_2ec_1;
                                    char var_2ba_2 = r13_2;
                                    char var_2b9_2 = rbp_2;
                                    int32_t var_2b8_2 = var_2e4_1;
                                    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h19d6f95b267c0578(&var_248, &var_1a8);
                                    uu_cp::Attributes::parse_iter::h4e9dbe07d5fad3ae(&var_2a8, 
                                        &var_248);
                                    rax_57 = var_2a8;
                                    int64_t var_1d0 = var_2a0_2;
                                    
                                    if (rax_57 != 0xd)
                                    {
                                        rdx_25 = arg1;
                                        *(rdx_25 + 0x38) = var_278_1;
                                        *(rdx_25 + 0x2c) = *var_288_2[4];
                                        *(rdx_25 + 0x1c) = *var_298_2[4];
                                        rdx_25[3] = var_298_2;
                                        rcx_37 = var_1d0;
                                        goto label_502b86;
                                    }
                                    
                                    uu_cp::Attributes::diff::h066483fdfdea4a0c(&var_2b4, &var_2c0, 
                                        &var_1d0);
                                }
                                else
                                {
                                    int16_t var_2bc_1 = var_2e8_1;
                                    var_2c0 = var_2ec_1;
                                    char var_2ba_1 = r13_2;
                                    char var_2b9_1 = rbp_2;
                                    int32_t var_2b8_1 = var_2e4_1;
                                    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..collect..IntoIterator$GT$::into_iter::h19d6f95b267c0578(&var_248, &var_1a8);
                                    uu_cp::Attributes::parse_iter::h4e9dbe07d5fad3ae(&var_2a8, 
                                        &var_248);
                                    rax_57 = var_2a8;
                                    int64_t var_1e0 = var_2a0_2;
                                    
                                    if (rax_57 != 0xd)
                                    {
                                        rdx_25 = arg1;
                                        *(rdx_25 + 0x38) = var_278_1;
                                        *(rdx_25 + 0x2c) = *var_288_2[4];
                                        *(rdx_25 + 0x1c) = *var_298_2[4];
                                        rdx_25[3] = var_298_2;
                                        rcx_37 = var_1e0;
                                        label_502b86:
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
                                int16_t var_2b0;
                                var_2e8_1 = var_2b0;
                                char var_2ae;
                                r13_2 = var_2ae;
                                char var_2ad;
                                rbp_2 = var_2ad;
                                int32_t var_2ac;
                                var_2e4_1 = var_2ac;
                                goto label_502526;
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
                        int32_t var_240;
                        var_2e4_1 = var_240;
                        goto label_502511;
                    }
                    
                    var_2e8_1 = 0x101;
                    var_2ec_1 = 0x1010101;
                    var_2e4_1 = 0x10101;
                    r13_2 = 0;
                    rbp_2 = 0;
                    label_502511:
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$$RF$alloc..string..String$GT$$GT$::h664d4980780af36c(&var_1a8);
                    label_502526:
                    _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hec56b39cfe9d99a6(&var_228, &var_188);
                    
                    if (var_210 == -0x8000000000000000)
                        goto label_502149;
                }
                
                goto label_502aee;
            }
            
            label_502149:
            core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$$LP$usize$C$$RF$str$C$alloc..vec..Vec$LT$$RF$alloc..string..String$GT$$RP$$GT$$GT$::h12ee6ef17018cb57(&var_188);
            
            if (r13_2 & 1)
            {
                _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h837a0740cc026c95(
                    &var_228, "SELinux was not enabled during t…", 0x30);
                var_2a0_2 = var_228;
                var_2a8 = 4;
                
                if (rbp_2 & 1)
                {
                    void* const rax_65 = var_2a8;
                    *(arg1 + 0x38) = var_278_1;
                    *(arg1 + 0x28) = var_288_2;
                    arg1[3] = var_298_2;
                    arg1[4] = var_218;
                    arg1[1] = rax_65;
                    arg1[2] = var_2a0_2;
                    *arg1 = -0x8000000000000000;
                    goto label_502aee;
                }
                
                uu_cp::show_error_if_needed::h934143ac50374c6e(&var_2a8);
                core::ptr::drop_in_place$LT$uu_cp..Error$GT$::h771e7f9a0f8a7901(&var_2a8);
            }
            
            char rax_23 =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
                arg2, "attributes-onlycopy-contentshard…", 0xf);
            char rax_24 =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
                arg2, "copy-contentshard-link files ins…", 0xd);
            char rax_25 =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
                arg2, "cli-symbolic-linksfollow command…", 0x12);
            char rax_26 = uu_cp::CopyMode::from_matches::h05c5459bbc8a33dc(arg2);
            char var_2e0_1;
            
            if (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
                    arg2, "no-dereferencedereferencenever f…", 0xe))
                var_2e0_1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg2, "dereferencenever follow symbolic…", 0xb);
            else if (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg2, "no-dereference-preserve-linkssam…", 0x1d))
                var_2e0_1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg2, "dereferencenever follow symbolic…", 0xb);
            else if (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg2, "archiveSame as -dR --preserve=al…", 7))
                var_2e0_1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg2, "dereferencenever follow symbolic…", 0xb);
            else
            {
                var_2e0_1 = 1;
                
                if (var_2de_1 && uu_cp::CopyMode::from_matches::h05c5459bbc8a33dc(arg2))
                    var_2e0_1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg2, "dereferencenever follow symbolic…", 0xb);
            }
            
            char rax_32 =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
                arg2, "one-file-systemstay on this file…", 0xf);
            char rax_33 =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
                arg2, "parentsparentuse full source fil…", 7);
            char rax_34 =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
                arg2, "debugexplain how a file is copie…", 5);
            char var_2df_1 = 1;
            
            if (!clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg2, "verboseexplicitly state what is …", 7))
                var_2df_1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg2, "debugexplain how a file is copie…", 5);
            
            char rax_37 =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
                arg2, "strip-trailing-slashesremove any…", 0x16);
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h83269f7c9d3ca029(
                &var_2a8, arg2, "reflinksymbolic-linkattributes-o…", 7);
            void* rax_38 = clap_builder::parser::error::MatchesError::unwrap::h30948932dbd3ab55(
                "reflinksymbolic-linkattributes-o…", 7, &var_2a8);
            char var_2c4_1 = 1;
            
            if (!rax_38)
                goto label_50277b;
            
            int64_t rbx_3 = *(rax_38 + 8);
            uint64_t r15_3 = *(rax_38 + 0x10);
            int128_t zmm0_12;
            
            if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::ha9fb26a3ee82846d(rbx_3, r15_3, "alwaysnevercontrol clone/CoW cop…", 6))
            {
                if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::ha9fb26a3ee82846d(rbx_3, r15_3, "auto", 4))
                    goto label_50277b;
                
                var_2c4_1 = 2;
                
                if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::ha9fb26a3ee82846d(rbx_3, r15_3, "nevercontrol clone/CoW copies. S…", 5))
                    goto label_50277b;
                
                var_228 = nullptr;
                int64_t var_220_2 = rbx_3;
                uint64_t var_218_2 = r15_3;
                var_210 = 1;
                var_248 = &var_228;
                int64_t (* var_240_2)(void* arg1, void* arg2) = _$LT$os_display..Quoted$u20$as$u20$core..fmt..Display$GT$::fmt::h75932a24bee941d9;
                var_2a8 = &data_5b5c50;
                int64_t var_2a0_3 = 2;
                int64_t var_288_3 = 0;
                int64_t*** var_298_4 = &var_248;
                int64_t var_290_4 = 1;
                int128_t var_a0;
                core::option::Option$LT$T$GT$::map_or_else::h805a87bba4bea7c2(&var_a0, &var_2a8);
                rcx_2 = arg1;
                int64_t var_90;
                rcx_2[4] = var_90;
                zmm0_12 = var_a0;
                label_502acc:
                *(rcx_2 + 0x10) = zmm0_12;
                rcx_2[1] = 9;
                goto label_502ae3;
            }
            
            var_2c4_1 = 0;
            label_50277b:
            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h83269f7c9d3ca029(
                &var_2a8, arg2, "sparsecontrol creation of sparse…", 6);
            void* rax_68 = clap_builder::parser::error::MatchesError::unwrap::h30948932dbd3ab55(
                "sparsecontrol creation of sparse…", 6, &var_2a8);
            char r12_2 = 1;
            
            if (!rax_68)
                goto label_502823;
            
            void* var_168 = rax_68;
            int64_t rbx_5 = *(rax_68 + 8);
            uint64_t r15_5 = *(rax_68 + 0x10);
            
            if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::ha9fb26a3ee82846d(rbx_5, r15_5, "alwaysnevercontrol clone/CoW cop…", 6))
            {
                if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::ha9fb26a3ee82846d(rbx_5, r15_5, "auto", 4))
                    goto label_502823;
                
                r12_2 = 2;
                
                if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::ha9fb26a3ee82846d(rbx_5, r15_5, "nevercontrol clone/CoW copies. S…", 5))
                    goto label_502823;
                
                var_228 = &var_168;
                int64_t (* var_220_3)(int64_t* arg1, int64_t arg2) =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hdbce5539cdbd3a0b;
                var_2a8 = &data_5b5c70;
                int64_t var_2a0_4 = 2;
                int64_t var_288_4 = 0;
                int64_t** var_298_5 = &var_228;
                int64_t var_290_5 = 1;
                int128_t var_88;
                core::option::Option$LT$T$GT$::map_or_else::h805a87bba4bea7c2(&var_88, &var_2a8);
                rcx_2 = arg1;
                int64_t var_78;
                rcx_2[4] = var_78;
                zmm0_12 = var_88;
                goto label_502acc;
            }
            
            r12_2 = 0;
            label_502823:
            var_228 = var_160;
            var_2a8 = var_1f8;
            char rax_74 =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
                arg2, "progress", 8);
            int32_t temp0_2[0x4] = _mm_insert_epi16(
                _mm_insert_epi16(var_2e0_1 << 0x18 | rax_25 << 0x10 | rax_24 << 8 | rax_23, 
                    rax_32 << 8 | rax_12, 2), 
                rax_37 << 8 | rax_33, 3);
            int16_t var_114_1 = var_2e8_1;
            int32_t var_118_1 = var_2ec_1;
            int128_t zmm1_4 = var_228;
            int128_t var_148_1 = zmm1_4;
            int128_t zmm2_3 = var_2a8;
            rbx_1 = arg1;
            *(rbx_1 + 0x2e) = var_1e8;
            rbx_1[4] = *zmm2_3[8];
            rbx_1[5] = var_1e8;
            int64_t var_150;
            rbx_1[2] = var_150;
            rbx_1[3] = zmm2_3;
            *rbx_1 = zmm1_4;
            *(rbx_1 + 0x36) = r13_2;
            *(rbx_1 + 0x37) = rbp_2;
            rbx_1[7] = var_2e4_1;
            *(rbx_1 + 0x3c) = rax_11;
            *(rbx_1 + 0x3d) = rdx_5;
            *(rbx_1 + 0x3e) = temp0_2[0];
            *(rbx_1 + 0x46) = var_2de_1;
            *(rbx_1 + 0x47) = rax_34;
            rbx_1[9] = var_2df_1;
            *(rbx_1 + 0x49) = rax_74;
            *(rbx_1 + 0x4a) = r12_2;
            *(rbx_1 + 0x4b) = var_2c4_1;
            *(rbx_1 + 0x4c) = var_180;
            *(rbx_1 + 0x4d) = rax_10;
            *(rbx_1 + 0x4e) = rax_26;
        }
        else
        {
            var_248 = rax_8;
            var_228 = &var_248;
            int64_t (* var_220_1)(int64_t* arg1) = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hecbc8f9382c41ff5;
            var_2a8 = &data_41e7f0;
            int64_t var_2a0_1 = 1;
            int64_t var_288_1 = 0;
            int64_t** var_298_1 = &var_228;
            int64_t var_290_1 = 1;
            int128_t var_b8;
            core::option::Option$LT$T$GT$::map_or_else::h805a87bba4bea7c2(&var_b8, &var_2a8);
            rbx_1 = arg1;
            int64_t var_a8;
            rbx_1[4] = var_a8;
            *(rbx_1 + 0x10) = var_b8;
            rbx_1[1] = 0xb;
            *rbx_1 = -0x8000000000000000;
            core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::hd3f979be012334ba(var_248, var_180);
        }
    }
    else
    {
        rbx = rax_1;
        uint64_t r15_1 = rdx;
        
        while (true)
        {
            if (clap_builder::parser::matches::arg_matches::ArgMatches::contains_id::h8ab577f2647f3b72(arg2, rbx, r15_1) && clap_builder::parser::matches::arg_matches::ArgMatches::value_source::h1b5412f9501eb404(arg2, rbx, r15_1) == 2)
            {
                _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h837a0740cc026c95(
                    &var_228, rbx, r15_1);
                rbx_1 = arg1;
                rbx_1[4] = var_218;
                *(rbx_1 + 0x10) = var_228;
                rbx_1[1] = 0xa;
                *rbx_1 = -0x8000000000000000;
                core::ptr::drop_in_place$LT$alloc..vec..into_iter..IntoIter$LT$$RF$str$GT$$GT$::ha3ee35139b7f90b6(&var_2a8);
                break;
            }
            
            void* rax_2;
            uint64_t rdx_1;
            rax_2 = _$LT$alloc..vec..into_iter..IntoIter$LT$T$C$A$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h7172e60caa969428(&var_2a8);
            rbx = rax_2;
            r15_1 = rdx_1;
            
            if (!rax_2)
                goto label_501c0d;
        }
    }
    return rbx_1;
}
