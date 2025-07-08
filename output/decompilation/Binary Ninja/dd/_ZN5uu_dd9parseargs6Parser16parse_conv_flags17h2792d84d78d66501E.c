
  int64_t* uu_dd::parseargs::Parser::parse_conv_flags::h2792d84d78d66501(int64_t* arg1, void* arg2, int64_t arg3, int64_t arg4)

{
    void var_68;
    _$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h77b0cfb9226a3587(&var_68, 
        0x2c, arg3, arg4);
    int64_t var_78 = 0;
    int64_t var_70 = arg4;
    int16_t var_38 = 1;
    int64_t rax;
    uint64_t rdx;
    rax = core::str::iter::SplitInternal$LT$P$GT$::next::h47b118536c82edfa(&var_78);
    int64_t* result;
    
    if (!rax)
    {
        label_4d416d:
        result = arg1;
        *result = 0xe;
    }
    else
    {
        int64_t rbx_1 = rax;
        uint64_t rbp_1 = rdx;
        
        while (true)
        {
            if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(rbx_1, rbp_1, "asciiebcdicibmlcaseucaseblockunb…", 5))
                *(arg2 + 0xa0) = 1;
            else if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(rbx_1, rbp_1, "ebcdicibmlcaseucaseblockunblockn…", 6))
            {
                if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(rbx_1, rbp_1, "ibmlcaseucaseblockunblocknoerror…", 3))
                {
                    if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(rbx_1, rbp_1, "lcaseucaseblockunblocknoerrorspa…", 5))
                    {
                        if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(rbx_1, rbp_1, "ucaseblockunblocknoerrorsparseno…", 5))
                        {
                            if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(rbx_1, rbp_1, "blockunblocknoerrorsparsenocreat…", 5))
                            {
                                if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(rbx_1, rbp_1, "unblocknoerrorsparsenocreatnotru…", 7))
                                {
                                    if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(rbx_1, rbp_1, "swabdumb\x1b[5m <= skip\x1b[9mtr…", 4))
                                    {
                                        if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(rbx_1, rbp_1, &data_418ee0[4], 4))
                                        {
                                            if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(rbx_1, rbp_1, "noerrorsparsenocreatnotruncfdata…", 
                                                7))
                                            {
                                                if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(rbx_1, rbp_1, 
                                                    "sparsenocreatnotruncfdatasyncfsy…", 6))
                                                {
                                                    if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(rbx_1, rbp_1, 
                                                        "exclu128for<keysKindboolmut \x1b…", 4))
                                                    {
                                                        if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(rbx_1, rbp_1, 
                                                            "nocreatnotruncfdatasyncfsyncUnre…", 7))
                                                        {
                                                            if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(rbx_1, rbp_1, 
                                                                "notruncfdatasyncfsyncUnrecognize…", 7))
                                                            {
                                                                if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(rbx_1, rbp_1, 
                                                                    "fdatasyncfsyncUnrecognized opera…", 9))
                                                                {
                                                                    if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(rbx_1, rbp_1, 
                                                                        "fsyncUnrecognized operand ''Only…", 5))
                                                                    {
                                                                        int128_t var_90;
                                                                        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h778f954dace7b409(&var_90, rbx_1, rbp_1);
                                                                        *arg1 = 6;
                                                                        *(arg1 + 8) = var_90;
                                                                        int64_t* result_1;
                                                                        result = result_1;
                                                                        arg1[3] = result;
                                                                        break;
                                                                    }
                                                                    
                                                                    *(arg2 + 0xaf) = 1;
                                                                }
                                                                else
                                                                    *(arg2 + 0xae) = 1;
                                                            }
                                                            else
                                                                *(arg2 + 0xad) = 1;
                                                        }
                                                        else
                                                            *(arg2 + 0xac) = 1;
                                                    }
                                                    else
                                                        *(arg2 + 0xab) = 1;
                                                }
                                                else
                                                    *(arg2 + 0xaa) = 1;
                                            }
                                            else
                                                *(arg2 + 0xa9) = 1;
                                        }
                                        else
                                            *(arg2 + 0xa8) = 1;
                                    }
                                    else
                                        *(arg2 + 0xa7) = 1;
                                }
                                else
                                    *(arg2 + 0xa6) = 1;
                            }
                            else
                                *(arg2 + 0xa5) = 1;
                        }
                        else
                            *(arg2 + 0xa3) = 1;
                    }
                    else
                        *(arg2 + 0xa4) = 1;
                }
                else
                    *(arg2 + 0xa2) = 1;
            }
            else
                *(arg2 + 0xa1) = 1;
            
            int64_t rax_1;
            uint64_t rdx_1;
            rax_1 = core::str::iter::SplitInternal$LT$P$GT$::next::h47b118536c82edfa(&var_78);
            rbx_1 = rax_1;
            rbp_1 = rdx_1;
            
            if (!rax_1)
                goto label_4d416d;
        }
    }
    
    return result;
}
