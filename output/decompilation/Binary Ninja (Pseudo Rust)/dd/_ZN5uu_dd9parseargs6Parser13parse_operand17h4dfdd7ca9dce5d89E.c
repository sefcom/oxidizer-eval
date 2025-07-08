
  fn uu_dd::parseargs::Parser::parse_operand::h4dfdd7ca9dce5d89(arg1: *mut i64, arg2: *mut i64, arg3: i64, arg4: u64) -> *mut i64

{
    let mut var_50: i64;
    core::str::_$LT$impl$u20$str$GT$::split_once::h587279427cde36f1(&var_50, arg3, arg4);
    let r14: i64 = var_50;
    let mut result: *mut i64;
    let var_48: u64;
    
    if r14 == 0
    {
        result = _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h778f954dace7b409(
            &arg1[1], arg3, arg4);
        *arg1 = 0;
    }
    else
    {
        let mut result_1: *mut i64;
        let result_2: *mut i64;
        let var_78: i128;
        let var_40: *mut i8;
        let var_38: u64;
        let mut result_3: *mut i64;
        
        if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(r14, var_48, "bscbscountibsififlagobsofoflagos…", 2) == 0
        {
            if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(r14, var_48, "cbscountibsififlagobsofoflagosee…", 3) == 0
            {
                if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(r14, var_48, "convname\x1b[0m    syncCyan"`$\E…", 4) == 0
                {
                    let mut rcx_4: i64;
                    let mut result_5: *mut i64;
                    
                    if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(r14, var_48, "countibsififlagobsofoflagoseekis…", 5) == 0
                    {
                        if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(r14, var_48, "ibsififlagobsofoflagoseekiseekst…", 3) == 0
                        {
                            let mut r14_2: *mut c_void;
                            
                            if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(r14, var_48, "ififlagobsofoflagoseekiseekstatu…", 2) == 0
                            {
                                if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(r14, var_48, "iflagobsofoflagoseekiseekstatusn…", 5) != 0
                                {
                                    uu_dd::parseargs::Parser::parse_input_flags::h12f922d383d81c43(
                                        &result_1, arg2, var_40, var_38);
                                    goto 'label_4d30d6;
                                }
                                
                                if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(r14, var_48, "obsofoflagoseekiseekstatusnoxfer…", 3) == 0
                                {
                                    if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(r14, var_48, "ofoflagoseekiseekstatusnoxfercio…", 2) != 0
                                    {
                                        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h778f954dace7b409(&result_1, var_40, var_38);
                                        r14_2 = &arg2[0x11];
                                        core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::hb99fd7eea970333f(r14_2);
                                        goto 'label_4d31f3;
                                    }
                                    
                                    if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(r14, var_48, "oflagoseekiseekstatusnoxferciodi…", 5) != 0
                                    {
                                        uu_dd::parseargs::Parser::parse_output_flags::h73e155582080adb4(&result_1, arg2, var_40, var_38);
                                        goto 'label_4d30d6;
                                    }
                                    
                                    let rax_12: i8 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(r14, var_48, 
                                        "seeknonehelpNoneshimconvname\x1b…", 4);
                                    let mut rax_13: i8;
                                    
                                    if rax_12 == 0
                                    {
                                        rax_13 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(r14, var_48, "oseekiseekstatusnoxferciodirectd…", 
                                            5);
                                    }
                                    
                                    if rax_12 == 0 && rax_13 == 0
                                    {
                                        let rax_14: i8 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(r14, var_48, 
                                            "skip\x1b[9mtrueTERMchar -> \x1b[…", 4);
                                        let mut rax_15: i8;
                                        
                                        if rax_14 == 0
                                        {
                                            rax_15 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(r14, var_48, 
                                                "iseekstatusnoxferciodirectdirect…", 5);
                                        }
                                        
                                        if rax_14 == 0 && rax_15 == 0
                                        {
                                            if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(r14, var_48, "statusnoxferciodirectdirectoryds…", 6)
                                                == 0
                                            {
                                                result = _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h778f954dace7b409(&arg1[1], arg3, arg4);
                                                *arg1 = 0;
                                            }
                                            else
                                            {
                                                uu_dd::parseargs::Parser::parse_status_level::h34642a5ebdfca327(&result_1, var_40, var_38);
                                                let result_4: *mut i64 = result_1;
                                                result = result_2;
                                                
                                                if result_4 != 0xe
                                                {
                                                    arg1[3] = *var_78[8];
                                                    *arg1.byte_offset(9) = *result_2[1];
                                                    *arg1 = result_4;
                                                    arg1[1] = result;
                                                }
                                                else
                                                {
                                                    arg2[0x1a] = result;
                                                    result = arg1;
                                                    *result = 0xe;
                                                }
                                            }
                                        }
                                        else
                                        {
                                            uu_dd::parseargs::Parser::parse_n::h10e17107a528a6d1(
                                                &result_1, var_40, var_38);
                                            result_5 = result_1;
                                            result = result_2;
                                            rcx_4 = var_78;
                                            
                                            if result_5 != 0xe
                                            {
                                                goto 'label_4d341e;
                                            }
                                            
                                            arg2[8] = result;
                                            arg2[9] = rcx_4;
                                            result = arg1;
                                            *result = 0xe;
                                        }
                                    }
                                    else
                                    {
                                        uu_dd::parseargs::Parser::parse_n::h10e17107a528a6d1(
                                            &result_1, var_40, var_38);
                                        result_5 = result_1;
                                        result = result_2;
                                        rcx_4 = var_78;
                                        
                                        if result_5 != 0xe
                                        {
                                            goto 'label_4d341e;
                                        }
                                        
                                        arg2[0xa] = result;
                                        arg2[0xb] = rcx_4;
                                        result = arg1;
                                        *result = 0xe;
                                    }
                                }
                                else
                                {
                                    uu_dd::parseargs::Parser::parse_bytes::h54695c3411a8c383(
                                        &result_1, var_40, var_38);
                                    result_3 = result_1;
                                    result = result_2;
                                    
                                    if result_3 != 0xe
                                    {
                                        goto 'label_4d32a5;
                                    }
                                    
                                    arg2[4] = 1;
                                    arg2[5] = result;
                                    result = arg1;
                                    *result = 0xe;
                                }
                            }
                            else
                            {
                                _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h778f954dace7b409(&result_1, var_40, var_38);
                                r14_2 = &arg2[0xe];
                                core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::hb99fd7eea970333f(r14_2);
                                'label_4d31f3:
                                *r14_2.byte_offset(0x10) = var_78;
                                *r14_2 = result_1;
                                result = arg1;
                                *result = 0xe;
                            }
                        }
                        else
                        {
                            uu_dd::parseargs::Parser::parse_bytes::h54695c3411a8c383(&result_1, 
                                var_40, var_38);
                            result_3 = result_1;
                            result = result_2;
                            
                            if result_3 != 0xe
                            {
                                goto 'label_4d32a5;
                            }
                            
                            arg2[2] = 1;
                            arg2[3] = result;
                            result = arg1;
                            *result = 0xe;
                        }
                    }
                    else
                    {
                        uu_dd::parseargs::Parser::parse_n::h10e17107a528a6d1(&result_1, var_40, 
                            var_38);
                        result_5 = result_1;
                        result = result_2;
                        rcx_4 = var_78;
                        
                        if result_5 != 0xe
                        {
                            'label_4d341e:
                            *arg1 = result_5;
                            arg1[1] = result;
                            arg1[2] = rcx_4;
                            arg1[3] = *var_78[8];
                        }
                        else
                        {
                            arg2[0xc] = result;
                            arg2[0xd] = rcx_4;
                            result = arg1;
                            *result = 0xe;
                        }
                    }
                }
                else
                {
                    arg2[0x18] = 1;
                    uu_dd::parseargs::Parser::parse_conv_flags::h2792d84d78d66501(&result_1, arg2, 
                        var_40, var_38);
                    'label_4d30d6:
                    result = result_1;
                    
                    if result == 0xe
                    {
                        result = arg1;
                        *result = 0xe;
                    }
                    else
                    {
                        arg1[3] = *var_78[8];
                        *arg1.byte_offset(8) = result_2;
                        *arg1 = result;
                    }
                }
            }
            else
            {
                uu_dd::parseargs::Parser::parse_bytes::h54695c3411a8c383(&result_1, var_40, var_38);
                result_3 = result_1;
                result = result_2;
                
                if result_3 != 0xe
                {
                    goto 'label_4d32a5;
                }
                
                arg2[6] = 1;
                arg2[7] = result;
                result = arg1;
                *result = 0xe;
            }
        }
        else
        {
            uu_dd::parseargs::Parser::parse_bytes::h54695c3411a8c383(&result_1, var_40, var_38);
            result_3 = result_1;
            result = result_2;
            
            if result_3 != 0xe
            {
                'label_4d32a5:
                *arg1.byte_offset(0x10) = var_78;
                *arg1 = result_3;
                arg1[1] = result;
            }
            else
            {
                *arg2 = 1;
                arg2[1] = result;
                result = arg1;
                *result = 0xe;
            }
        }
    }
    result
}
