
  uint64_t uu_kill::uumain::uumain::h6ef9ffba962f0a6a(int64_t arg1)

{
    int128_t var_350;
    uucore::Args::collect_ignore::hb8fa0324ef445f0b(&var_350, arg1);
    char rax;
    void** rdx_1;
    rax = uu_kill::handle_obsolete::h472cae1b62eba817(&var_350);
    void** const rbx = rdx_1;
    uint64_t result_1;
    uu_kill::uu_app::h67c2defd3341e89e(&result_1);
    int64_t var_340;
    int64_t var_3b8 = var_340;
    int128_t var_3c8 = var_350;
    int64_t var_388;
    clap_builder::builder::command::Command::try_get_matches_from::hb26244fb1e28f500(&var_388, 
        &result_1, &var_3c8);
    int64_t rax_2 = var_388;
    uint64_t result;
    int64_t var_380;
    
    if (-(rax_2) != -0x8000000000000000)
    {
        int64_t var_358;
        int64_t var_398_1 = var_358;
        int128_t var_368;
        int128_t var_3a8_1 = var_368;
        int128_t var_378;
        var_3b8 = var_378;
        var_3c8 = rax_2;
        *var_3c8[8] = var_380;
        uint64_t rbp_1 = 1;
        
        if (!clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
                &var_3c8, "tablesignal(uutils coreutils) 0.…", 5))
            rbp_1 =
                clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
                &var_3c8, "listTSTPi128 as dyn ERANGEEDEADL…", 4) * 2;
        
        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h7cd62d38944a9616(
            &result_1, &var_3c8, "pids_or_signalstablesignal(uutil…", 0xf);
        int64_t var_338;
        clap_builder::parser::error::MatchesError::unwrap::h04ad0e183c3ed2e3(&var_338, 
            "pids_or_signalstablesignal(uutil…", 0xf, &result_1);
        uint64_t result_5;
        int64_t var_3d8;
        int128_t var_2f0;
        
        if (var_338)
        {
            core::iter::traits::iterator::Iterator::collect::h754db76a78b8b07b(&result_1, &var_338);
            uint64_t result_3 = result_1;
            var_388 = var_2f0;
            
            if (result_3 == -0x8000000000000000)
                goto label_45909b;
            
            var_3d8 = var_388;
            result_5 = result_3;
            
            if (rbp_1)
                goto label_4590be;
            
            goto label_45910a;
        }
        
        label_45909b:
        result_5 = 0;
        var_3d8 = 8;
        int64_t var_3d0 = 0;
        
        if (!rbp_1)
        {
            label_45910a:
            uint64_t r12_1;
            
            if (!(rax & 1))
            {
                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hed8fbb0e98fe6897(&result_1, &var_3c8, "signal(uutils coreutils) 0.0.30{…", 6);
                void* rax_6 = clap_builder::parser::error::MatchesError::unwrap::he5cf21e4e2801c28(
                    "signal(uutils coreutils) 0.0.30{…", 6, &result_1);
                
                if (!rax_6)
                {
                    rbx = 0xf;
                    label_459192:
                    int64_t rax_8 = rbx << 4;
                    r12_1 = 0;
                    
                    if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h64357ef2ac88b3df(*(&uucore::features::signals::ALL_SIGNALS::hb6c41a286543a4a8 + rax_8), 
                            *(rax_8 + 0x4e8008), "EXITZero\x1b[7mBool", 4))
                        goto label_4591c0;
                    
                    label_4591f7:
                    uu_kill::parse_pids::h21a5e6a2b47128d6(&result_1, var_3d8, var_3d0);
                    uint64_t result_4 = result_1;
                    result = var_2f0;
                    rbx = *var_2f0[8];
                    
                    if (result_4 != -0x8000000000000000)
                    {
                        uint64_t result_2;
                        
                        if (!rbx)
                        {
                            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::hffb4d74c12d8fb8d(&var_388, "no process ID specified\nTry --h…", 0x38);
                            *var_2f0[8] = var_378;
                            result_1 = var_388;
                            int32_t var_2e0_1 = 1;
                            result_2 =
                                alloc::boxed::Box$LT$T$GT$::new::h51260f68952d93e0(&result_1);
                        }
                        else
                        {
                            uu_kill::kill::hf0ec59056e3b4307(r12_1, result, rbx);
                            result_2 = 0;
                        }
                        
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$i32$GT$$GT$::h2dc59426f0799ab8(result_4, result);
                        result = result_2;
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::hac24f6519a3c6bb6(&result_5);
                        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::he82a2865757df048(&var_3c8);
                    }
                    else
                    {
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::hac24f6519a3c6bb6(&result_5);
                        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::he82a2865757df048(&var_3c8);
                    }
                }
                else
                {
                    uu_kill::parse_signal_value::h198dbdcf792084b2(&result_1, *(rax_6 + 8), 
                        *(rax_6 + 0x10));
                    result = result_1;
                    rbx = var_2f0;
                    
                    if (!result)
                        goto label_459110;
                    
                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::hac24f6519a3c6bb6(&result_5);
                    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::he82a2865757df048(&var_3c8);
                }
            }
            else
            {
                label_459110:
                
                if (rbx < 0x20)
                    goto label_459192;
                
                label_4591c0:
                char rax_10;
                int32_t rdx_5;
                rax_10 = _$LT$nix..sys..signal..Signal$u20$as$u20$core..convert..TryFrom$LT$i32$GT$$GT$::try_from::h9a35f89cbe212992(rbx);
                r12_1 = rdx_5;
                
                if (!(rax_10 & 1))
                    goto label_4591f7;
                
                result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7b5f769e1554bcc2();
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::hac24f6519a3c6bb6(&result_5);
                core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::he82a2865757df048(&var_3c8);
            }
        }
        else
        {
            label_4590be:
            
            if (rbp_1 != 1)
                uu_kill::list::h0b8bd48cc010fd8e(&result_5);
            else
                uu_kill::table::h9adbfdcf596cda83();
            
            result = 0;
            core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$alloc..string..String$GT$$GT$::hac24f6519a3c6bb6(&result_5);
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::he82a2865757df048(&var_3c8);
        }
    }
    else
        result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he92a37de32738e67(var_380);
    return result;
}
