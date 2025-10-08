
  fn uu_dd::parseargs::Parser::parse_operand::hc45261e402562f1d(arg1: *mut i64, arg2: *mut i64, arg3: i64, arg4: u64) -> *mut i64

{
    let mut var_50: i64;
    core::str::_$LT$impl$u20$str$GT$::split_once::hf156b2cc47c681be(&var_50, arg3, arg4);
    let r15: i64 = var_50;
    let var_48: u64;
    
    if r15 == 0
    {
        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h074386e79a8fa9e7(&arg1[1], arg3, arg4);
        *arg1 = 0;
    }
    else
    {
        let mut var_80: i64;
        let var_78: i64;
        let var_70: i128;
        let var_40: *mut i8;
        let var_38: u64;
        let mut rax_2: i64;
        let mut rcx: i64;
        
        if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h9308b2f97abc21f0(r15, var_48, "bscbscountibsififlagobsofoflagos…", 2) == 0
        {
            if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h9308b2f97abc21f0(r15, var_48, "cbscountibsififlagobsofoflagosee…", 3) == 0
            {
                if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h9308b2f97abc21f0(r15, var_48, "conv\x1b[0mnamesyncCyan    "`$\E…", 4) == 0
                {
                    let mut rax_7: i64;
                    let mut rcx_5: i64;
                    let mut rdx_5: i64;
                    
                    if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h9308b2f97abc21f0(r15, var_48, "countibsififlagobsofoflagoseekis…", 5) == 0
                    {
                        if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h9308b2f97abc21f0(r15, var_48, "ibsififlagobsofoflagoseekiseekst…", 3) == 0
                        {
                            if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h9308b2f97abc21f0(r15, var_48, "ififlagobsofoflagoseekiseekstatu…", 2) == 0
                            {
                                if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h9308b2f97abc21f0(r15, var_48, "iflagobsofoflagoseekiseekstatusn…", 5) != 0
                                {
                                    uu_dd::parseargs::Parser::parse_input_flags::h456bbd798366a223(
                                        &var_80, arg2, var_40, var_38);
                                    goto 'label_48cf36;
                                }
                                
                                if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h9308b2f97abc21f0(r15, var_48, "obsofoflagoseekiseekstatusnoxfer…", 3) == 0
                                {
                                    if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h9308b2f97abc21f0(r15, var_48, "ofoflagoseekiseekstatusnoxfercio…", 2) == 0
                                    {
                                        if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h9308b2f97abc21f0(r15, var_48, "oflagoseekiseekstatusnoxferciodi…", 5) != 0
                                        {
                                            uu_dd::parseargs::Parser::parse_output_flags::h7dcc2f9cdb69a82a(&var_80, arg2, var_40, var_38);
                                            goto 'label_48cf36;
                                        }
                                        
                                        let rax_16: i8 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h9308b2f97abc21f0(r15, var_48, 
                                            "seeknonehelpNoneshimconv\x1b[0mn…", 4);
                                        let mut rax_17: i8;
                                        
                                        if rax_16 == 0
                                        {
                                            rax_17 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h9308b2f97abc21f0(r15, var_48, 
                                                "oseekiseekstatusnoxferciodirectd…", 5);
                                        }
                                        
                                        if rax_16 == 0 && rax_17 == 0
                                        {
                                            let rax_18: i8 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h9308b2f97abc21f0(r15, var_48, &data_41ea00, 4);
                                            let mut rax_19: i8;
                                            
                                            if rax_18 == 0
                                            {
                                                rax_19 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h9308b2f97abc21f0(r15, var_48, 
                                                    "iseekstatusnoxferciodirectdirect…", 5);
                                            }
                                            
                                            if rax_18 == 0 && rax_19 == 0
                                            {
                                                if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h9308b2f97abc21f0(r15, var_48, 
                                                    "statusnoxferciodirectdirectoryds…", 6) == 0
                                                {
                                                    _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h074386e79a8fa9e7(&arg1[1], arg3, arg4);
                                                    *arg1 = 0;
                                                }
                                                else
                                                {
                                                    uu_dd::parseargs::Parser::parse_status_level::hea4c02f91140d667(&var_80, var_40, var_38);
                                                    let rcx_10: i64 = var_80;
                                                    let rax_21: i8 = var_78;
                                                    
                                                    if rcx_10 != 0xe
                                                    {
                                                        arg1[3] = *var_70[8];
                                                        *arg1.byte_offset(9) = *var_78[1];
                                                        *arg1 = rcx_10;
                                                        arg1[1] = rax_21;
                                                    }
                                                    else
                                                    {
                                                        arg2[0x1a] = rax_21;
                                                        *arg1 = 0xe;
                                                    }
                                                }
                                            }
                                            else
                                            {
                                                uu_dd::parseargs::Parser::parse_n::heb126d767e01e2d5(&var_80, var_40, var_38);
                                                rdx_5 = var_80;
                                                rax_7 = var_78;
                                                rcx_5 = var_70;
                                                
                                                if rdx_5 != 0xe
                                                {
                                                    goto 'label_48d295;
                                                }
                                                
                                                arg2[8] = rax_7;
                                                arg2[9] = rcx_5;
                                                *arg1 = 0xe;
                                            }
                                        }
                                        else
                                        {
                                            uu_dd::parseargs::Parser::parse_n::heb126d767e01e2d5(
                                                &var_80, var_40, var_38);
                                            rdx_5 = var_80;
                                            rax_7 = var_78;
                                            rcx_5 = var_70;
                                            
                                            if rdx_5 != 0xe
                                            {
                                                goto 'label_48d295;
                                            }
                                            
                                            arg2[0xa] = rax_7;
                                            arg2[0xb] = rcx_5;
                                            *arg1 = 0xe;
                                        }
                                    }
                                    else
                                    {
                                        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h074386e79a8fa9e7(&var_80, var_40, var_38);
                                        core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::h458f2cd4198a43ed(&arg2[0x11]);
                                        arg2[0x13] = var_70;
                                        *arg2.byte_offset(0x88) = var_80;
                                        *arg1 = 0xe;
                                    }
                                }
                                else
                                {
                                    uu_dd::parseargs::Parser::parse_bytes::h00e70da24ed84a9c(
                                        &var_80, var_40, var_38);
                                    rcx = var_80;
                                    rax_2 = var_78;
                                    
                                    if rcx != 0xe
                                    {
                                        goto 'label_48d106;
                                    }
                                    
                                    arg2[4] = 1;
                                    arg2[5] = rax_2;
                                    *arg1 = 0xe;
                                }
                            }
                            else
                            {
                                _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h074386e79a8fa9e7(&var_80, var_40, var_38);
                                core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::h458f2cd4198a43ed(&arg2[0xe]);
                                arg2[0x10] = var_70;
                                *arg2.byte_offset(0x70) = var_80;
                                *arg1 = 0xe;
                            }
                        }
                        else
                        {
                            uu_dd::parseargs::Parser::parse_bytes::h00e70da24ed84a9c(&var_80, 
                                var_40, var_38);
                            rcx = var_80;
                            rax_2 = var_78;
                            
                            if rcx != 0xe
                            {
                                goto 'label_48d106;
                            }
                            
                            arg2[2] = 1;
                            arg2[3] = rax_2;
                            *arg1 = 0xe;
                        }
                    }
                    else
                    {
                        uu_dd::parseargs::Parser::parse_n::heb126d767e01e2d5(&var_80, var_40, 
                            var_38);
                        rdx_5 = var_80;
                        rax_7 = var_78;
                        rcx_5 = var_70;
                        
                        if rdx_5 != 0xe
                        {
                            'label_48d295:
                            *arg1 = rdx_5;
                            arg1[1] = rax_7;
                            arg1[2] = rcx_5;
                            arg1[3] = *var_70[8];
                        }
                        else
                        {
                            arg2[0xc] = rax_7;
                            arg2[0xd] = rcx_5;
                            *arg1 = 0xe;
                        }
                    }
                }
                else
                {
                    arg2[0x18] = 1;
                    uu_dd::parseargs::Parser::parse_conv_flags::h6cbe050dd8e53067(&var_80, arg2, 
                        var_40, var_38);
                    'label_48cf36:
                    let rax_5: i64 = var_80;
                    
                    if rax_5 == 0xe
                    {
                        *arg1 = 0xe;
                    }
                    else
                    {
                        arg1[3] = *var_70[8];
                        *arg1.byte_offset(8) = var_78;
                        *arg1 = rax_5;
                    }
                }
            }
            else
            {
                uu_dd::parseargs::Parser::parse_bytes::h00e70da24ed84a9c(&var_80, var_40, var_38);
                rcx = var_80;
                rax_2 = var_78;
                
                if rcx != 0xe
                {
                    goto 'label_48d106;
                }
                
                arg2[6] = 1;
                arg2[7] = rax_2;
                *arg1 = 0xe;
            }
        }
        else
        {
            uu_dd::parseargs::Parser::parse_bytes::h00e70da24ed84a9c(&var_80, var_40, var_38);
            rcx = var_80;
            rax_2 = var_78;
            
            if rcx != 0xe
            {
                'label_48d106:
                *arg1.byte_offset(0x10) = var_70;
                *arg1 = rcx;
                arg1[1] = rax_2;
            }
            else
            {
                *arg2 = 1;
                arg2[1] = rax_2;
                *arg1 = 0xe;
            }
        }
    }
    arg1
}
