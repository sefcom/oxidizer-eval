
  int64_t* uu_dd::parseargs::Parser::parse_input_flags::h456bbd798366a223(int64_t* arg1, void* arg2, int64_t arg3, int64_t arg4)

{
    void var_e0;
    _$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h19abee4db16fb58d(&var_e0, 
        0x2c, arg3, arg4);
    int64_t var_f0 = 0;
    int64_t var_e8 = arg4;
    int16_t var_b0 = 1;
    int64_t rax;
    uint64_t rdx;
    rax = core::str::iter::SplitInternal$LT$P$GT$::next::had565c4b2897969e(&var_f0);
    int64_t* result;
    
    if (!rax)
    {
        label_48d7bc:
        result = arg1;
        *result = 0xe;
    }
    else
    {
        int64_t rbx_1 = rax;
        uint64_t r13_1 = rdx;
        int64_t var_100_1 = 0xb;
        
        while (true)
        {
            int128_t* r14_1;
            void var_90;
            
            if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h9308b2f97abc21f0(rbx_1, r13_1, "ciodirectdirectorydsyncnocacheno…", 3))
                r14_1 = &var_90;
            else if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h9308b2f97abc21f0(rbx_1, r13_1, "directdirectorydsyncnocachenoati…", 6))
            {
                *(arg2 + 0xb1) = 1;
                label_48d50b:
                int64_t rax_1;
                uint64_t rdx_1;
                rax_1 = core::str::iter::SplitInternal$LT$P$GT$::next::had565c4b2897969e(&var_f0);
                rbx_1 = rax_1;
                r13_1 = rdx_1;
                
                if (!rax_1)
                    goto label_48d7bc;
                
                continue;
            }
            else
            {
                if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h9308b2f97abc21f0(rbx_1, r13_1, "directorydsyncnocachenoatimenoct…", 9))
                {
                    *(arg2 + 0xb2) = 1;
                    goto label_48d50b;
                }
                
                if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h9308b2f97abc21f0(rbx_1, r13_1, "dsyncnocachenoatimenocttynolinks…", 5))
                {
                    *(arg2 + 0xb3) = 1;
                    goto label_48d50b;
                }
                
                if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h9308b2f97abc21f0(rbx_1, r13_1, &data_41ea54[4], 4))
                {
                    *(arg2 + 0xb4) = 1;
                    goto label_48d50b;
                }
                
                if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h9308b2f97abc21f0(rbx_1, r13_1, "nocachenoatimenocttynolinksbinar…", 7))
                {
                    *(arg2 + 0xb5) = 1;
                    goto label_48d50b;
                }
                
                if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h9308b2f97abc21f0(rbx_1, r13_1, "nonblockNO_COLORNulErrorIO error…", 8))
                {
                    *(arg2 + 0xb6) = 1;
                    goto label_48d50b;
                }
                
                if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h9308b2f97abc21f0(rbx_1, r13_1, "noatimenocttynolinksbinaryfullbl…", 7))
                {
                    *(arg2 + 0xb7) = 1;
                    goto label_48d50b;
                }
                
                if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h9308b2f97abc21f0(rbx_1, r13_1, "nocttynolinksbinaryfullblockcoun…", 6))
                {
                    *(arg2 + 0xb8) = 1;
                    goto label_48d50b;
                }
                
                if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h9308b2f97abc21f0(rbx_1, r13_1, "nofollowextern "", 8))
                {
                    *(arg2 + 0xb9) = 1;
                    goto label_48d50b;
                }
                
                void var_78;
                
                if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h9308b2f97abc21f0(rbx_1, r13_1, "nolinksbinaryfullblockcount_byte…", 7))
                    r14_1 = &var_78;
                else
                {
                    void var_60;
                    
                    if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h9308b2f97abc21f0(rbx_1, r13_1, "binaryfullblockcount_bytesskip_b…", 6))
                        r14_1 = &var_60;
                    else
                    {
                        void var_48;
                        
                        if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h9308b2f97abc21f0(rbx_1, r13_1, "textswabdumb\x1b[5mskip\x1b[9m <…", 4))
                            r14_1 = &var_48;
                        else
                        {
                            if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h9308b2f97abc21f0(rbx_1, r13_1, "fullblockcount_bytesskip_bytesap…", 9))
                            {
                                *(arg2 + 0xbd) = 1;
                                goto label_48d50b;
                            }
                            
                            if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h9308b2f97abc21f0(rbx_1, r13_1, "count_bytesskip_bytesappendseek_…", 0xb))
                            {
                                *(arg2 + 0xbe) = 1;
                                goto label_48d50b;
                            }
                            
                            if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h9308b2f97abc21f0(rbx_1, r13_1, "skip_bytesappendseek_bytesasciie…", 0xa))
                            {
                                *(arg2 + 0xbf) = 1;
                                goto label_48d50b;
                            }
                            
                            if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h9308b2f97abc21f0(rbx_1, r13_1, "appendseek_bytesasciiebcdicibmlc…", 6))
                                goto label_48d50b;
                            
                            if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h9308b2f97abc21f0(rbx_1, r13_1, "seek_bytesasciiebcdicibmlcaseuca…", 0xa))
                                goto label_48d50b;
                            
                            var_100_1 = 5;
                            void var_a8;
                            r14_1 = &var_a8;
                        }
                    }
                }
            }
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h074386e79a8fa9e7(r14_1, rbx_1, r13_1);
            *arg1 = var_100_1;
            *(arg1 + 8) = *r14_1;
            result = r14_1[1];
            arg1[3] = result;
            break;
        }
    }
    
    return result;
}
