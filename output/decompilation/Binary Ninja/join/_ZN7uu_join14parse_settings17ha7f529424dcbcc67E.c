
  int64_t* uu_join::parse_settings::ha7f529424dcbcc67(int64_t* arg1, void* arg2)

{
    int32_t var_148;
    uu_join::get_and_parse_field_number::hff9b1fd9eb95d74d(&var_148, arg2, 
        "j12itoenocheck-ordercheck-orderh…");
    int128_t var_140;
    
    if (var_148 == 1)
    {
        *(arg1 + 8) = var_140;
        *arg1 = -0x8000000000000000;
    }
    else
    {
        char r12_1 = var_140;
        int64_t r13_1 = *var_140[8];
        uu_join::get_and_parse_field_number::hff9b1fd9eb95d74d(&var_148, arg2, 
            "12itoenocheck-ordercheck-orderhe…");
        
        if (var_148 != 1)
        {
            char r15_1 = var_140;
            int64_t rbp_1 = *var_140[8];
            uu_join::get_and_parse_field_number::hff9b1fd9eb95d74d(&var_148, arg2, 
                "2itoenocheck-ordercheck-orderhea…");
            
            if (var_148 != 1)
            {
                char r15_2 = var_140;
                int64_t rbp_2 = *var_140[8];
                uu_join::parse_print_settings::h08c07f537be3ed8c(&var_148, arg2);
                int64_t rcx_1 = var_148;
                int64_t rax_1 = var_140;
                
                if (!rcx_1)
                {
                    int128_t var_100_1 = {0};
                    char var_e9_1 = 0xa;
                    int64_t var_80_1 = -0x7ffffffffffffffd;
                    int64_t var_118_1 = -0x7ffffffffffffffd;
                    var_148 = 0;
                    var_140 = 8;
                    var_140 = {0};
                    int64_t var_128_1 = 1;
                    int64_t var_120_1 = 0;
                    int32_t var_ed_1 = 0;
                    char var_ee_1 = rax_1 & 1;
                    uint8_t var_ef_1 = rax_1 >> 0x10 & 1;
                    var_ed_1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, "itoenocheck-ordercheck-orderhead…", 1);
                    int64_t var_d0;
                    uu_join::get_field_number::ha34d3b07c5e6ef90(&var_d0, r12_1, r13_1, r15_1, 
                        rbp_1);
                    int64_t rcx_6 = var_d0;
                    int64_t var_c8;
                    int64_t rax_5 = var_c8;
                    
                    if (rcx_6)
                    {
                        label_46dbb8:
                        arg1[1] = rcx_6;
                        arg1[2] = rax_5;
                        *arg1 = -0x8000000000000000;
                        core::ptr::drop_in_place$LT$uu_join..Settings$GT$::hb8da50140634f9f1(
                            &var_148);
                    }
                    else
                    {
                        var_100_1 = rax_5;
                        uu_join::get_field_number::ha34d3b07c5e6ef90(&var_d0, r12_1, r13_1, r15_2, 
                            rbp_2);
                        rcx_6 = var_d0;
                        rax_5 = var_c8;
                        
                        if (rcx_6)
                            goto label_46dbb8;
                        
                        *var_100_1[8] = rax_5;
                        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h1403207e762e04af(&var_d0, arg2);
                        void* rax_6 =
                            clap_builder::parser::error::MatchesError::unwrap::h6f546fe316e19f69(
                            &var_d0);
                        
                        if (!rax_6)
                            goto label_46dc72;
                        
                        uu_join::parse_separator::hf124353ffbd88396(&var_d0, *(rax_6 + 8), 
                            *(rax_6 + 0x10));
                        int64_t r13_2 = var_d0;
                        int64_t var_c0;
                        int64_t r12_2 = var_c0;
                        
                        if (r13_2 != -0x7ffffffffffffffc)
                        {
                            int64_t var_110;
                            core::ptr::drop_in_place$LT$uu_join..SepSetting$GT$::hf227694797c64f57(
                                var_80_1, var_110);
                            var_118_1 = r13_2;
                            int64_t var_110_1 = var_c8;
                            int64_t var_108 = r12_2;
                            label_46dc72:
                            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h3493742de87d61eb(&var_d0, arg2, "oenocheck-ordercheck-orderheader…");
                            void* rax_7 = clap_builder::parser::error::MatchesError::unwrap::haf5154e9dc375d47("oenocheck-ordercheck-orderheader…", &var_d0);
                            
                            if (!rax_7)
                                goto label_46ddc2;
                            
                            int64_t r13_3 = *(rax_7 + 8);
                            uint64_t r12_3 = *(rax_7 + 0x10);
                            
                            if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h40620c7a8dc116e5(r13_3, r12_3, "autoBool", 4))
                            {
                                int64_t var_e8 = 0;
                                int64_t var_e0_1 = 8;
                                int64_t var_d8_1 = 0;
                                int64_t var_58 = 0x2c00000020;
                                int32_t var_50_1 = 9;
                                _$LT$core..str..pattern..MultiCharEqPattern$LT$C$GT$$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::hb973757f36a46f42(&var_c0, &var_58, r13_3, r12_3);
                                var_d0 = 0;
                                uint64_t var_c8_1 = r12_3;
                                int16_t var_88_1 = 1;
                                
                                while (true)
                                {
                                    char* rax_9;
                                    int64_t rdx_5;
                                    rax_9 = core::str::iter::SplitInternal$LT$P$GT$::next::h69235149bd53211f(&var_d0);
                                    
                                    if (!rax_9)
                                    {
                                        var_148 = var_e8;
                                        *var_140[8] = var_d8_1;
                                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_join..Spec$GT$$GT$::h4b770b22231041b0(0, 8);
                                        goto label_46ddc2;
                                    }
                                    
                                    uu_join::Spec::parse::hcfd2d4b38d6b0e96(&var_58, rax_9, rdx_5);
                                    int64_t rcx_9 = var_50_1;
                                    int64_t var_48;
                                    
                                    if (var_58 == 1)
                                    {
                                        arg1[1] = rcx_9;
                                        arg1[2] = var_48;
                                        *arg1 = -0x8000000000000000;
                                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_join..Spec$GT$$GT$::h4b770b22231041b0(var_e8, var_e0_1);
                                        break;
                                    }
                                    
                                    int64_t var_40 = rcx_9;
                                    int64_t var_38_1 = var_48;
                                    alloc::vec::Vec$LT$T$C$A$GT$::push::hb860e44e68a88600(&var_e8, 
                                        &var_40);
                                }
                                
                                core::ptr::drop_in_place$LT$uu_join..Settings$GT$::hb8da50140634f9f1(&var_148);
                            }
                            else
                            {
                                *var_ed_1[1] = 1;
                                label_46ddc2:
                                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h3493742de87d61eb(&var_d0, arg2, "enocheck-ordercheck-orderheaderz…");
                                void* rax_12 = clap_builder::parser::error::MatchesError::unwrap::haf5154e9dc375d47("enocheck-ordercheck-orderheaderz…", &var_d0);
                                
                                if (rax_12)
                                {
                                    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h9c1c5d77c0020408(&var_d0, *(rax_12 + 8), *(rax_12 + 0x10));
                                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h3be9f3f5d0a417d3(0, 1);
                                    int64_t var_120_2 = var_c0;
                                    int128_t var_130_1 = var_d0;
                                }
                                
                                if (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, "nocheck-ordercheck-orderheaderz(…", 0xd))
                                    *var_ed_1[3] = 1;
                                
                                if (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, "check-orderheaderz(uutils coreut…", 0xb))
                                    *var_ed_1[3] = 2;
                                
                                if (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, "headerz(uutils coreutils) 0.0.30…", 6))
                                    *var_ed_1[2] = 1;
                                
                                char rax_18 = 0xa;
                                
                                if (clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, "z(uutils coreutils) 0.0.30For ea…", 1))
                                    rax_18 = 0;
                                
                                *(arg1 + 0x40) = var_108;
                                int128_t zmm0_5 = var_148;
                                *(arg1 + 0x30) = var_118_1;
                                *(arg1 + 0x20) = var_128_1;
                                *(arg1 + 0x10) = var_140;
                                *arg1 = zmm0_5;
                                arg1[0xa] = *var_100_1[8];
                                arg1[0xb] = (rax_1 >> 8 & 1);
                                *(arg1 + 0x5c) = *var_ed_1[1];
                                *(arg1 + 0x5e) = *var_ed_1[3];
                                *(arg1 + 0x5f) = rax_18;
                            }
                        }
                        else
                        {
                            arg1[1] = var_c8;
                            arg1[2] = r12_2;
                            *arg1 = -0x8000000000000000;
                            core::ptr::drop_in_place$LT$uu_join..Settings$GT$::hb8da50140634f9f1(
                                &var_148);
                        }
                    }
                }
                else
                {
                    arg1[1] = rcx_1;
                    arg1[2] = rax_1;
                    *arg1 = -0x8000000000000000;
                }
            }
            else
            {
                *(arg1 + 8) = var_140;
                *arg1 = -0x8000000000000000;
            }
        }
        else
        {
            *(arg1 + 8) = var_140;
            *arg1 = -0x8000000000000000;
        }
    }
    return arg1;
}
