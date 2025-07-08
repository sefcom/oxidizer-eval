
  int64_t* uu_join::parse_settings::h8cf47cd535767909(int64_t* arg1, void* arg2)

{
    void* const var_178;
    uu_join::get_and_parse_field_number::h96c6c4133cb4e54e(&var_178, arg2, 
        "j12itoenocheck-ordercheck-orderh…");
    int128_t var_170;
    
    if (var_178)
    {
        *(arg1 + 8) = var_170;
        *arg1 = -0x8000000000000000;
    }
    else
    {
        int64_t r15_1 = var_170;
        int64_t r12_1 = *var_170[8];
        uu_join::get_and_parse_field_number::h96c6c4133cb4e54e(&var_178, arg2, 
            "12itoenocheck-ordercheck-orderhe…");
        
        if (!var_178)
        {
            int64_t rbp_1 = var_170;
            int64_t r13_1 = *var_170[8];
            uu_join::get_and_parse_field_number::h96c6c4133cb4e54e(&var_178, arg2, 
                "2itoenocheck-ordercheck-orderhea…");
            
            if (!var_178)
            {
                int64_t r13_2 = var_170;
                int64_t rbp_2 = *var_170[8];
                uu_join::parse_print_settings::h7df2ac24ec40344e(&var_178, arg2);
                void* const rax_2 = var_178;
                
                if (!rax_2)
                {
                    uint32_t rcx_3 = var_170 | *var_170[2] << 0x10;
                    int128_t var_130_1 = {0};
                    int32_t var_11d_1 = 0;
                    char var_119_1 = 0xa;
                    int64_t var_148 = -0x7ffffffffffffffd;
                    var_178 = nullptr;
                    var_170 = 8;
                    var_170 = {0};
                    int64_t var_158_1 = 1;
                    int64_t var_150_1 = 0;
                    char var_11e_1 = rcx_3 & 1;
                    uint8_t var_11f_1 = rcx_3 >> 0x10 & 1;
                    var_11d_1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg2, "itoenocheck-ordercheck-orderhead…", 1);
                    int64_t var_118;
                    uu_join::get_field_number::h8241ec84504e8cda(&var_118, r15_1, r12_1, rbp_1, 
                        r13_1);
                    int64_t rcx_6 = var_118;
                    int64_t var_110;
                    int64_t rax_9 = var_110;
                    
                    if (rcx_6)
                    {
                        label_4c41fe:
                        arg1[1] = rcx_6;
                        arg1[2] = rax_9;
                        *arg1 = -0x8000000000000000;
                        core::ptr::drop_in_place$LT$uu_join..Settings$GT$::ha475b1587517e294(
                            &var_178);
                    }
                    else
                    {
                        var_130_1 = rax_9;
                        uu_join::get_field_number::h8241ec84504e8cda(&var_118, r15_1, r12_1, r13_2, 
                            rbp_2);
                        rcx_6 = var_118;
                        rax_9 = var_110;
                        
                        if (rcx_6)
                            goto label_4c41fe;
                        
                        *var_130_1[8] = rax_9;
                        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h1e79e7d5d116e3d9(&var_118, arg2, "toenocheck-ordercheck-orderheade…", 1);
                        void* rax_10 =
                            clap_builder::parser::error::MatchesError::unwrap::h295fad333db21f31(
                            "toenocheck-ordercheck-orderheade…", 1, &var_118);
                        
                        if (!rax_10)
                            goto label_4c42b0;
                        
                        uu_join::parse_separator::h5b003db6eeb89267(&var_118, *(rax_10 + 8), 
                            *(rax_10 + 0x10));
                        int64_t rbp_3 = var_118;
                        int64_t var_108;
                        
                        if (rbp_3 != -0x7ffffffffffffffc)
                        {
                            core::ptr::drop_in_place$LT$uu_join..SepSetting$GT$::hb29d894c63f79bf0(
                                &var_148);
                            var_148 = rbp_3;
                            int64_t var_140_1 = var_110;
                            int64_t var_138 = var_108;
                            label_4c42b0:
                            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hc8975813854a9a38(&var_118, arg2, "oenocheck-ordercheck-orderheader…", 1);
                            void* rax_11 = clap_builder::parser::error::MatchesError::unwrap::he70031129adfbfcb("oenocheck-ordercheck-orderheader…", 1, &var_118);
                            
                            if (!rax_11)
                                goto label_4c4460;
                            
                            int64_t r15_3 = *(rax_11 + 8);
                            uint64_t r12_3 = *(rax_11 + 0x10);
                            
                            if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hab9f309aad09d5a2(r15_3, r12_3, "autoBoolcodetip:\x1b[3mu128for<k…", 4))
                            {
                                int64_t var_c8 = 0;
                                int64_t var_c0_1 = 8;
                                int64_t var_b8_1 = 0;
                                var_118 = 0x2c00000020;
                                var_110 = 9;
                                int128_t var_68;
                                _$LT$core..str..pattern..MultiCharEqPattern$LT$C$GT$$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h05090d30728fe751(&var_68, &var_118, r15_3, r12_3);
                                var_118 = 0;
                                uint64_t var_110_1 = r12_3;
                                var_108 = var_68;
                                int128_t var_58;
                                int128_t var_f8_1 = var_58;
                                int128_t var_48;
                                int128_t var_e8_1 = var_48;
                                int64_t var_38;
                                int64_t var_d8_1 = var_38;
                                int16_t var_d0_1 = 1;
                                
                                while (true)
                                {
                                    int64_t rax_14;
                                    int64_t rdx_7;
                                    rax_14 = core::str::iter::SplitInternal$LT$P$GT$::next::hade5ac386c66a7dc(&var_118);
                                    
                                    if (!rax_14)
                                    {
                                        var_108 = var_b8_1;
                                        var_118 = var_c8;
                                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_join..Spec$GT$$GT$::hd1ac6ea959952ee2(&var_178);
                                        *var_170[8] = var_108;
                                        var_178 = var_118;
                                        goto label_4c4460;
                                    }
                                    
                                    int64_t var_80;
                                    uu_join::Spec::parse::hd0c421fb4c424f36(&var_80, rax_14, rdx_7);
                                    int64_t var_78;
                                    int64_t var_70;
                                    
                                    if (var_80)
                                    {
                                        arg1[1] = var_78;
                                        arg1[2] = var_70;
                                        *arg1 = -0x8000000000000000;
                                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_join..Spec$GT$$GT$::hd1ac6ea959952ee2(&var_c8);
                                        break;
                                    }
                                    
                                    int64_t var_90 = var_78;
                                    int64_t var_88_1 = var_70;
                                    alloc::vec::Vec$LT$T$C$A$GT$::push::h0b8ef9bbd439741b(&var_c8, 
                                        &var_90);
                                }
                                
                                core::ptr::drop_in_place$LT$uu_join..Settings$GT$::ha475b1587517e294(&var_178);
                            }
                            else
                            {
                                *var_11d_1[1] = 1;
                                label_4c4460:
                                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hc8975813854a9a38(&var_118, arg2, "enocheck-ordercheck-orderheaderz…", 1);
                                void* rax_18 = clap_builder::parser::error::MatchesError::unwrap::he70031129adfbfcb("enocheck-ordercheck-orderheaderz…", 1, &var_118);
                                
                                if (rax_18)
                                {
                                    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h2c5bde50ee02e8d6(&var_118, *(rax_18 + 8), *(rax_18 + 0x10));
                                    int128_t var_160;
                                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h649c80b2f7427144(&var_160);
                                    int64_t var_150_2 = var_108;
                                    var_160 = var_118;
                                }
                                
                                if (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg2, "nocheck-ordercheck-orderheaderz0…", 0xd))
                                    *var_11d_1[3] = 1;
                                
                                if (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg2, "check-orderheaderz0.0.28For each…", 0xb))
                                    *var_11d_1[3] = 2;
                                
                                if (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg2, "headerz0.0.28For each pair of in…", 6))
                                    *var_11d_1[2] = 1;
                                
                                char rax_24 = 0xa;
                                
                                if (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg2, "z0.0.28For each pair of input li…", 1))
                                    rax_24 = 0;
                                
                                *(arg1 + 0x40) = var_138;
                                int128_t zmm0_7 = var_178;
                                *(arg1 + 0x30) = var_148;
                                *(arg1 + 0x20) = var_158_1;
                                *(arg1 + 0x10) = var_170;
                                *arg1 = zmm0_7;
                                arg1[0xa] = *var_130_1[8];
                                arg1[0xb] = (rcx_3 >> 8 & 1);
                                *(arg1 + 0x5c) = *var_11d_1[1];
                                *(arg1 + 0x5e) = *var_11d_1[3];
                                *(arg1 + 0x5f) = rax_24;
                            }
                        }
                        else
                        {
                            arg1[1] = var_110;
                            arg1[2] = var_108;
                            *arg1 = -0x8000000000000000;
                            core::ptr::drop_in_place$LT$uu_join..Settings$GT$::ha475b1587517e294(
                                &var_178);
                        }
                    }
                }
                else
                {
                    arg1[1] = rax_2;
                    arg1[2] = var_170;
                    *arg1 = -0x8000000000000000;
                }
            }
            else
            {
                *(arg1 + 8) = var_170;
                *arg1 = -0x8000000000000000;
            }
        }
        else
        {
            *(arg1 + 8) = var_170;
            *arg1 = -0x8000000000000000;
        }
    }
    return arg1;
}
