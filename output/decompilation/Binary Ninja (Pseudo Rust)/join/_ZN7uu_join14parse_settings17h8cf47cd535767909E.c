
  fn uu_join::parse_settings::h8cf47cd535767909(arg1: *mut i64, arg2: *mut c_void) -> *mut i64

{
    let mut var_178: *mut c_void;
    uu_join::get_and_parse_field_number::h96c6c4133cb4e54e(&var_178, arg2, 
        "j12itoenocheck-ordercheck-orderh…");
    let mut var_170: i128;
    
    if var_178 != 0
    {
        *arg1.byte_offset(8) = var_170;
        *arg1 = -0x8000000000000000;
    }
    else
    {
        let r15_1: i64 = var_170;
        let r12_1: i64 = *var_170[8];
        uu_join::get_and_parse_field_number::h96c6c4133cb4e54e(&var_178, arg2, 
            "12itoenocheck-ordercheck-orderhe…");
        
        if var_178 == 0
        {
            let rbp_1: i64 = var_170;
            let r13_1: i64 = *var_170[8];
            uu_join::get_and_parse_field_number::h96c6c4133cb4e54e(&var_178, arg2, 
                "2itoenocheck-ordercheck-orderhea…");
            
            if var_178 == 0
            {
                let r13_2: i64 = var_170;
                let rbp_2: i64 = *var_170[8];
                uu_join::parse_print_settings::h7df2ac24ec40344e(&var_178, arg2);
                let rax_2: *mut c_void = var_178;
                
                if rax_2 == 0
                {
                    let rcx_3: u32 = var_170 | *var_170[2] << 0x10;
                    let mut var_130_1: i128 = {0};
                    let mut var_11d_1: i32 = 0;
                    let var_119_1: i8 = 0xa;
                    let mut var_148: i64 = -0x7ffffffffffffffd;
                    var_178 = nullptr;
                    var_170 = 8;
                    var_170 = {0};
                    let var_158_1: i64 = 1;
                    let var_150_1: i64 = 0;
                    let var_11e_1: i8 = rcx_3 & 1;
                    let var_11f_1: u8 = rcx_3 >> 0x10 & 1;
                    var_11d_1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg2, "itoenocheck-ordercheck-orderhead…", 1);
                    let mut var_118: i64;
                    uu_join::get_field_number::h8241ec84504e8cda(&var_118, r15_1, r12_1, rbp_1, 
                        r13_1);
                    let mut rcx_6: i64 = var_118;
                    let mut var_110: i64;
                    let mut rax_9: i64 = var_110;
                    
                    if rcx_6 != 0
                    {
                        'label_4c41fe:
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
                        
                        if rcx_6 != 0
                        {
                            goto 'label_4c41fe;
                        }
                        
                        *var_130_1[8] = rax_9;
                        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h1e79e7d5d116e3d9(&var_118, arg2, "toenocheck-ordercheck-orderheade…", 1);
                        let rax_10: *mut c_void =
                            clap_builder::parser::error::MatchesError::unwrap::h295fad333db21f31(
                            "toenocheck-ordercheck-orderheade…", 1, &var_118);
                        
                        if rax_10 == 0
                        {
                            goto 'label_4c42b0;
                        }
                        
                        uu_join::parse_separator::h5b003db6eeb89267(&var_118, 
                            *rax_10.byte_offset(8), *rax_10.byte_offset(0x10));
                        let rbp_3: i64 = var_118;
                        let mut var_108: i64;
                        
                        if rbp_3 != -0x7ffffffffffffffc
                        {
                            core::ptr::drop_in_place$LT$uu_join..SepSetting$GT$::hb29d894c63f79bf0(
                                &var_148);
                            var_148 = rbp_3;
                            let var_140_1: i64 = var_110;
                            let var_138: i64 = var_108;
                            'label_4c42b0:
                            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hc8975813854a9a38(&var_118, arg2, "oenocheck-ordercheck-orderheader…", 1);
                            let rax_11: *mut c_void = clap_builder::parser::error::MatchesError::unwrap::he70031129adfbfcb("oenocheck-ordercheck-orderheader…", 1, 
                                &var_118);
                            
                            if rax_11 == 0
                            {
                                goto 'label_4c4460;
                            }
                            
                            let r15_3: i64 = *rax_11.byte_offset(8);
                            let r12_3: u64 = *rax_11.byte_offset(0x10);
                            
                            if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hab9f309aad09d5a2(r15_3, r12_3, "autoBoolcodetip:\x1b[3mu128for<k…", 4) == 0
                            {
                                let mut var_c8: i64 = 0;
                                let var_c0_1: i64 = 8;
                                let var_b8_1: i64 = 0;
                                var_118 = 0x2c00000020;
                                var_110 = 9;
                                let mut var_68: i128;
                                _$LT$core..str..pattern..MultiCharEqPattern$LT$C$GT$$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h05090d30728fe751(&var_68, &var_118, r15_3, r12_3);
                                var_118 = 0;
                                let var_110_1: u64 = r12_3;
                                var_108 = var_68;
                                let var_58: i128;
                                let var_f8_1: i128 = var_58;
                                let var_48: i128;
                                let var_e8_1: i128 = var_48;
                                let var_38: i64;
                                let var_d8_1: i64 = var_38;
                                let var_d0_1: i16 = 1;
                                
                                loop
                                {
                                    let mut rax_14: i64;
                                    let mut rdx_7: i64;
                                    rax_14 = core::str::iter::SplitInternal$LT$P$GT$::next::hade5ac386c66a7dc(&var_118);
                                    
                                    if rax_14 == 0
                                    {
                                        var_108 = var_b8_1;
                                        var_118 = var_c8;
                                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_join..Spec$GT$$GT$::hd1ac6ea959952ee2(&var_178);
                                        *var_170[8] = var_108;
                                        var_178 = var_118;
                                        goto 'label_4c4460;
                                    }
                                    
                                    let mut var_80: i64;
                                    uu_join::Spec::parse::hd0c421fb4c424f36(&var_80, rax_14, rdx_7);
                                    let var_78: i64;
                                    let var_70: i64;
                                    
                                    if var_80 != 0
                                    {
                                        arg1[1] = var_78;
                                        arg1[2] = var_70;
                                        *arg1 = -0x8000000000000000;
                                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_join..Spec$GT$$GT$::hd1ac6ea959952ee2(&var_c8);
                                        break;
                                    }
                                    
                                    let mut var_90: i64 = var_78;
                                    let var_88_1: i64 = var_70;
                                    alloc::vec::Vec$LT$T$C$A$GT$::push::h0b8ef9bbd439741b(&var_c8, 
                                        &var_90);
                                }
                                
                                core::ptr::drop_in_place$LT$uu_join..Settings$GT$::ha475b1587517e294(&var_178);
                            }
                            else
                            {
                                *var_11d_1[1] = 1;
                                'label_4c4460:
                                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hc8975813854a9a38(&var_118, arg2, "enocheck-ordercheck-orderheaderz…", 1);
                                let rax_18: *mut c_void = clap_builder::parser::error::MatchesError::unwrap::he70031129adfbfcb("enocheck-ordercheck-orderheaderz…", 1, 
                                    &var_118);
                                
                                if rax_18 != 0
                                {
                                    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h2c5bde50ee02e8d6(&var_118, *rax_18.byte_offset(8), *rax_18.byte_offset(0x10));
                                    let mut var_160: i128;
                                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h649c80b2f7427144(&var_160);
                                    let var_150_2: i64 = var_108;
                                    var_160 = var_118;
                                }
                                
                                if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg2, "nocheck-ordercheck-orderheaderz0…", 0xd) != 0
                                {
                                    *var_11d_1[3] = 1;
                                }
                                
                                if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg2, "check-orderheaderz0.0.28For each…", 0xb) != 0
                                {
                                    *var_11d_1[3] = 2;
                                }
                                
                                if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg2, "headerz0.0.28For each pair of in…", 6) != 0
                                {
                                    *var_11d_1[2] = 1;
                                }
                                
                                let mut rax_24: i8 = 0xa;
                                
                                if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(arg2, "z0.0.28For each pair of input li…", 1) != 0
                                {
                                    rax_24 = 0;
                                }
                                
                                *arg1.byte_offset(0x40) = var_138;
                                let zmm0_7: i128 = var_178;
                                *arg1.byte_offset(0x30) = var_148;
                                *arg1.byte_offset(0x20) = var_158_1;
                                *arg1.byte_offset(0x10) = var_170;
                                *arg1 = zmm0_7;
                                arg1[0xa] = *var_130_1[8];
                                arg1[0xb] = (rcx_3 >> 8 & 1);
                                *arg1.byte_offset(0x5c) = *var_11d_1[1];
                                *arg1.byte_offset(0x5e) = *var_11d_1[3];
                                *arg1.byte_offset(0x5f) = rax_24;
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
                *arg1.byte_offset(8) = var_170;
                *arg1 = -0x8000000000000000;
            }
        }
        else
        {
            *arg1.byte_offset(8) = var_170;
            *arg1 = -0x8000000000000000;
        }
    }
    arg1
}
