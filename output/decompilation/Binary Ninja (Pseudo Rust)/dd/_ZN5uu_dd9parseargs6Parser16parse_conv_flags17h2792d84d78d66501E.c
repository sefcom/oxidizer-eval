
  fn uu_dd::parseargs::Parser::parse_conv_flags::h2792d84d78d66501(arg1: *mut i64, arg2: *mut c_void, arg3: i64, arg4: i64) -> *mut i64

{
    let mut var_68: ();
    _$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h77b0cfb9226a3587(&var_68, 
        0x2c, arg3, arg4);
    let mut var_78: i64 = 0;
    let var_70: i64 = arg4;
    let var_38: i16 = 1;
    let mut rax: i64;
    let mut rdx: u64;
    rax = core::str::iter::SplitInternal$LT$P$GT$::next::h47b118536c82edfa(&var_78);
    let mut result: *mut i64;
    
    if rax == 0
    {
        'label_4d416d:
        result = arg1;
        *result = 0xe;
    }
    else
    {
        let mut rbx_1: i64 = rax;
        let mut rbp_1: u64 = rdx;
        
        loop
        {
            if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(rbx_1, rbp_1, "asciiebcdicibmlcaseucaseblockunb…", 5) != 0
            {
                *arg2.byte_offset(0xa0) = 1;
            }
            else if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(rbx_1, rbp_1, "ebcdicibmlcaseucaseblockunblockn…", 6) == 0
            {
                if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(rbx_1, rbp_1, "ibmlcaseucaseblockunblocknoerror…", 3) == 0
                {
                    if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(rbx_1, rbp_1, "lcaseucaseblockunblocknoerrorspa…", 5) == 0
                    {
                        if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(rbx_1, rbp_1, "ucaseblockunblocknoerrorsparseno…", 5) == 0
                        {
                            if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(rbx_1, rbp_1, "blockunblocknoerrorsparsenocreat…", 5) == 0
                            {
                                if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(rbx_1, rbp_1, "unblocknoerrorsparsenocreatnotru…", 7) == 0
                                {
                                    if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(rbx_1, rbp_1, "swabdumb\x1b[5m <= skip\x1b[9mtr…", 4) == 0
                                    {
                                        if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(rbx_1, rbp_1, &data_418ee0[4], 4) == 0
                                        {
                                            if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(rbx_1, rbp_1, "noerrorsparsenocreatnotruncfdata…", 7)
                                                == 0
                                            {
                                                if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(rbx_1, rbp_1, 
                                                    "sparsenocreatnotruncfdatasyncfsy…", 6) == 0
                                                {
                                                    if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(rbx_1, rbp_1, 
                                                        "exclu128for<keysKindboolmut \x1b…", 4) == 0
                                                    {
                                                        if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(rbx_1, rbp_1, 
                                                            "nocreatnotruncfdatasyncfsyncUnre…", 7) == 0
                                                        {
                                                            if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(rbx_1, rbp_1, 
                                                                "notruncfdatasyncfsyncUnrecognize…", 7)
                                                                == 0
                                                            {
                                                                if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(rbx_1, rbp_1, 
                                                                    "fdatasyncfsyncUnrecognized opera…", 9)
                                                                    == 0
                                                                {
                                                                    if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(rbx_1, rbp_1, 
                                                                        "fsyncUnrecognized operand ''Only…", 5)
                                                                        == 0
                                                                    {
                                                                        let mut var_90: i128;
                                                                        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h778f954dace7b409(&var_90, rbx_1, rbp_1);
                                                                        *arg1 = 6;
                                                                        *arg1.byte_offset(8) = var_90;
                                                                        let result_1: *mut i64;
                                                                        result = result_1;
                                                                        arg1[3] = result;
                                                                        break;
                                                                    }
                                                                    
                                                                    *arg2.byte_offset(0xaf) = 1;
                                                                }
                                                                else
                                                                {
                                                                    *arg2.byte_offset(0xae) = 1;
                                                                }
                                                            }
                                                            else
                                                            {
                                                                *arg2.byte_offset(0xad) = 1;
                                                            }
                                                        }
                                                        else
                                                        {
                                                            *arg2.byte_offset(0xac) = 1;
                                                        }
                                                    }
                                                    else
                                                    {
                                                        *arg2.byte_offset(0xab) = 1;
                                                    }
                                                }
                                                else
                                                {
                                                    *arg2.byte_offset(0xaa) = 1;
                                                }
                                            }
                                            else
                                            {
                                                *arg2.byte_offset(0xa9) = 1;
                                            }
                                        }
                                        else
                                        {
                                            *arg2.byte_offset(0xa8) = 1;
                                        }
                                    }
                                    else
                                    {
                                        *arg2.byte_offset(0xa7) = 1;
                                    }
                                }
                                else
                                {
                                    *arg2.byte_offset(0xa6) = 1;
                                }
                            }
                            else
                            {
                                *arg2.byte_offset(0xa5) = 1;
                            }
                        }
                        else
                        {
                            *arg2.byte_offset(0xa3) = 1;
                        }
                    }
                    else
                    {
                        *arg2.byte_offset(0xa4) = 1;
                    }
                }
                else
                {
                    *arg2.byte_offset(0xa2) = 1;
                }
            }
            else
            {
                *arg2.byte_offset(0xa1) = 1;
            }
            
            let mut rax_1: i64;
            let mut rdx_1: u64;
            rax_1 = core::str::iter::SplitInternal$LT$P$GT$::next::h47b118536c82edfa(&var_78);
            rbx_1 = rax_1;
            rbp_1 = rdx_1;
            
            if rax_1 == 0
            {
                goto 'label_4d416d;
            }
        }
    }
    
    result
}
