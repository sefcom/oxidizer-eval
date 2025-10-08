
  fn uu_join::parse_settings::ha7f529424dcbcc67(arg1: *mut i64, arg2: *mut c_void) -> *mut i64

{
    let mut var_148: i32;
    uu_join::get_and_parse_field_number::hff9b1fd9eb95d74d(&var_148, arg2, 
        "j12itoenocheck-ordercheck-orderh…");
    let mut var_140: i128;
    
    if var_148 == 1
    {
        *arg1.byte_offset(8) = var_140;
        *arg1 = -0x8000000000000000;
    }
    else
    {
        let r12_1: i8 = var_140;
        let r13_1: i64 = *var_140[8];
        uu_join::get_and_parse_field_number::hff9b1fd9eb95d74d(&var_148, arg2, 
            "12itoenocheck-ordercheck-orderhe…");
        
        if var_148 != 1
        {
            let r15_1: i8 = var_140;
            let rbp_1: i64 = *var_140[8];
            uu_join::get_and_parse_field_number::hff9b1fd9eb95d74d(&var_148, arg2, 
                "2itoenocheck-ordercheck-orderhea…");
            
            if var_148 != 1
            {
                let r15_2: i8 = var_140;
                let rbp_2: i64 = *var_140[8];
                uu_join::parse_print_settings::h08c07f537be3ed8c(&var_148, arg2);
                let rcx_1: i64 = var_148;
                let rax_1: i64 = var_140;
                
                if rcx_1 == 0
                {
                    let mut var_100_1: i128 = {0};
                    let var_e9_1: i8 = 0xa;
                    let var_80_1: i64 = -0x7ffffffffffffffd;
                    let mut var_118_1: i64 = -0x7ffffffffffffffd;
                    var_148 = 0;
                    var_140 = 8;
                    var_140 = {0};
                    let var_128_1: i64 = 1;
                    let var_120_1: i64 = 0;
                    let mut var_ed_1: i32 = 0;
                    let var_ee_1: i8 = rax_1 & 1;
                    let var_ef_1: u8 = rax_1 >> 0x10 & 1;
                    var_ed_1 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, "itoenocheck-ordercheck-orderhead…", 1);
                    let mut var_d0: i64;
                    uu_join::get_field_number::ha34d3b07c5e6ef90(&var_d0, r12_1, r13_1, r15_1, 
                        rbp_1);
                    let mut rcx_6: i64 = var_d0;
                    let var_c8: i64;
                    let mut rax_5: i64 = var_c8;
                    
                    if rcx_6 != 0
                    {
                        'label_46dbb8:
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
                        
                        if rcx_6 != 0
                        {
                            goto 'label_46dbb8;
                        }
                        
                        *var_100_1[8] = rax_5;
                        clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h1403207e762e04af(&var_d0, arg2);
                        let rax_6: *mut c_void =
                            clap_builder::parser::error::MatchesError::unwrap::h6f546fe316e19f69(
                            &var_d0);
                        
                        if rax_6 == 0
                        {
                            goto 'label_46dc72;
                        }
                        
                        uu_join::parse_separator::hf124353ffbd88396(&var_d0, *rax_6.byte_offset(8), 
                            *rax_6.byte_offset(0x10));
                        let r13_2: i64 = var_d0;
                        let mut var_c0: i64;
                        let r12_2: i64 = var_c0;
                        
                        if r13_2 != -0x7ffffffffffffffc
                        {
                            let var_110: i64;
                            core::ptr::drop_in_place$LT$uu_join..SepSetting$GT$::hf227694797c64f57(
                                var_80_1, var_110);
                            var_118_1 = r13_2;
                            let var_110_1: i64 = var_c8;
                            let var_108: i64 = r12_2;
                            'label_46dc72:
                            clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h3493742de87d61eb(&var_d0, arg2, "oenocheck-ordercheck-orderheader…");
                            let rax_7: *mut c_void = clap_builder::parser::error::MatchesError::unwrap::haf5154e9dc375d47("oenocheck-ordercheck-orderheader…", &var_d0);
                            
                            if rax_7 == 0
                            {
                                goto 'label_46ddc2;
                            }
                            
                            let r13_3: i64 = *rax_7.byte_offset(8);
                            let r12_3: u64 = *rax_7.byte_offset(0x10);
                            
                            if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h40620c7a8dc116e5(r13_3, r12_3, "autoBool", 4) == 0
                            {
                                let mut var_e8: i64 = 0;
                                let var_e0_1: i64 = 8;
                                let var_d8_1: i64 = 0;
                                let mut var_58: i64 = 0x2c00000020;
                                let var_50_1: i32 = 9;
                                _$LT$core..str..pattern..MultiCharEqPattern$LT$C$GT$$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::hb973757f36a46f42(&var_c0, &var_58, r13_3, r12_3);
                                var_d0 = 0;
                                let var_c8_1: u64 = r12_3;
                                let var_88_1: i16 = 1;
                                
                                loop
                                {
                                    let mut rax_9: *mut i8;
                                    let mut rdx_5: i64;
                                    rax_9 = core::str::iter::SplitInternal$LT$P$GT$::next::h69235149bd53211f(&var_d0);
                                    
                                    if rax_9 == 0
                                    {
                                        var_148 = var_e8;
                                        *var_140[8] = var_d8_1;
                                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_join..Spec$GT$$GT$::h4b770b22231041b0(0, 8);
                                        goto 'label_46ddc2;
                                    }
                                    
                                    uu_join::Spec::parse::hcfd2d4b38d6b0e96(&var_58, rax_9, rdx_5);
                                    let rcx_9: i64 = var_50_1;
                                    let var_48: i64;
                                    
                                    if var_58 == 1
                                    {
                                        arg1[1] = rcx_9;
                                        arg1[2] = var_48;
                                        *arg1 = -0x8000000000000000;
                                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_join..Spec$GT$$GT$::h4b770b22231041b0(var_e8, var_e0_1);
                                        break;
                                    }
                                    
                                    let mut var_40: i64 = rcx_9;
                                    let var_38_1: i64 = var_48;
                                    alloc::vec::Vec$LT$T$C$A$GT$::push::hb860e44e68a88600(&var_e8, 
                                        &var_40);
                                }
                                
                                core::ptr::drop_in_place$LT$uu_join..Settings$GT$::hb8da50140634f9f1(&var_148);
                            }
                            else
                            {
                                *var_ed_1[1] = 1;
                                'label_46ddc2:
                                clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h3493742de87d61eb(&var_d0, arg2, "enocheck-ordercheck-orderheaderz…");
                                let rax_12: *mut c_void = clap_builder::parser::error::MatchesError::unwrap::haf5154e9dc375d47("enocheck-ordercheck-orderheaderz…", 
                                    &var_d0);
                                
                                if rax_12 != 0
                                {
                                    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h9c1c5d77c0020408(&var_d0, *rax_12.byte_offset(8), *rax_12.byte_offset(0x10));
                                    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h3be9f3f5d0a417d3(0, 1);
                                    let var_120_2: i64 = var_c0;
                                    let var_130_1: i128 = var_d0;
                                }
                                
                                if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, "nocheck-ordercheck-orderheaderz(…", 0xd) != 0
                                {
                                    *var_ed_1[3] = 1;
                                }
                                
                                if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, "check-orderheaderz(uutils coreut…", 0xb) != 0
                                {
                                    *var_ed_1[3] = 2;
                                }
                                
                                if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, "headerz(uutils coreutils) 0.0.30…", 6) != 0
                                {
                                    *var_ed_1[2] = 1;
                                }
                                
                                let mut rax_18: i8 = 0xa;
                                
                                if clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(arg2, "z(uutils coreutils) 0.0.30For ea…", 1) != 0
                                {
                                    rax_18 = 0;
                                }
                                
                                *arg1.byte_offset(0x40) = var_108;
                                let zmm0_5: i128 = var_148;
                                *arg1.byte_offset(0x30) = var_118_1;
                                *arg1.byte_offset(0x20) = var_128_1;
                                *arg1.byte_offset(0x10) = var_140;
                                *arg1 = zmm0_5;
                                arg1[0xa] = *var_100_1[8];
                                arg1[0xb] = (rax_1 >> 8 & 1);
                                *arg1.byte_offset(0x5c) = *var_ed_1[1];
                                *arg1.byte_offset(0x5e) = *var_ed_1[3];
                                *arg1.byte_offset(0x5f) = rax_18;
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
                *arg1.byte_offset(8) = var_140;
                *arg1 = -0x8000000000000000;
            }
        }
        else
        {
            *arg1.byte_offset(8) = var_140;
            *arg1 = -0x8000000000000000;
        }
    }
    arg1
}
