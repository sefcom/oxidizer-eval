
  fn uu_dd::parseargs::Parser::parse_conv_flags::h6cbe050dd8e53067(arg1: *mut i64, arg2: *mut c_void, arg3: i64, arg4: i64) -> *mut i64

{
    let mut var_68: ();
    _$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h19abee4db16fb58d(&var_68, 
        0x2c, arg3, arg4);
    let mut var_78: i64 = 0;
    let var_70: i64 = arg4;
    let var_38: i16 = 1;
    let mut rax: i64;
    let mut rdx: u64;
    rax = core::str::iter::SplitInternal$LT$P$GT$::next::had565c4b2897969e(&var_78);
    let mut result: *mut i64;
    
    if rax == 0
    {
        'label_48df6d:
        result = arg1;
        *result = 0xe;
    }
    else
    {
        let mut rbx_1: i64 = rax;
        let mut rbp_1: u64 = rdx;
        
        loop
        {
            if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h9308b2f97abc21f0(rbx_1, rbp_1, "asciiebcdicibmlcaseucaseblockunb…", 5) != 0
            {
                *arg2.byte_offset(0xa0) = 1;
            }
            else if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h9308b2f97abc21f0(rbx_1, rbp_1, "ebcdicibmlcaseucaseblockunblockn…", 6) == 0
            {
                if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h9308b2f97abc21f0(rbx_1, rbp_1, "ibmlcaseucaseblockunblocknoerror…", 3) == 0
                {
                    if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h9308b2f97abc21f0(rbx_1, rbp_1, "lcaseucaseblockunblocknoerrorspa…", 5) == 0
                    {
                        if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h9308b2f97abc21f0(rbx_1, rbp_1, "ucaseblockunblocknoerrorsparseno…", 5) == 0
                        {
                            if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h9308b2f97abc21f0(rbx_1, rbp_1, "blockunblocknoerrorsparsenocreat…", 5) == 0
                            {
                                if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h9308b2f97abc21f0(rbx_1, rbp_1, "unblocknoerrorsparsenocreatnotru…", 7) == 0
                                {
                                    if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h9308b2f97abc21f0(rbx_1, rbp_1, "swabdumb\x1b[5mskip\x1b[9m <= tr…", 4) == 0
                                    {
                                        if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h9308b2f97abc21f0(rbx_1, rbp_1, &data_41ea54[4], 4) == 0
                                        {
                                            if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h9308b2f97abc21f0(rbx_1, rbp_1, "noerrorsparsenocreatnotruncfdata…", 7)
                                                == 0
                                            {
                                                if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h9308b2f97abc21f0(rbx_1, rbp_1, 
                                                    "sparsenocreatnotruncfdatasyncfsy…", 6) == 0
                                                {
                                                    if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h9308b2f97abc21f0(rbx_1, rbp_1, 
                                                        "exclkeysu128for<\x1b[1mKindboolm…", 4) == 0
                                                    {
                                                        if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h9308b2f97abc21f0(rbx_1, rbp_1, 
                                                            "nocreatnotruncfdatasyncfsync: wa…", 7) == 0
                                                        {
                                                            if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h9308b2f97abc21f0(rbx_1, rbp_1, 
                                                                "notruncfdatasyncfsync: warning: …", 7)
                                                                == 0
                                                            {
                                                                if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h9308b2f97abc21f0(rbx_1, rbp_1, 
                                                                    "fdatasyncfsync: warning: 0x00x i…", 9)
                                                                    == 0
                                                                {
                                                                    if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h9308b2f97abc21f0(rbx_1, rbp_1, 
                                                                        "fsync: warning: 0x00x is a zero …", 5)
                                                                        == 0
                                                                    {
                                                                        let mut var_90: i128;
                                                                        _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h074386e79a8fa9e7(&var_90, rbx_1, rbp_1);
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
            rax_1 = core::str::iter::SplitInternal$LT$P$GT$::next::had565c4b2897969e(&var_78);
            rbx_1 = rax_1;
            rbp_1 = rdx_1;
            
            if rax_1 == 0
            {
                goto 'label_48df6d;
            }
        }
    }
    
    result
}
