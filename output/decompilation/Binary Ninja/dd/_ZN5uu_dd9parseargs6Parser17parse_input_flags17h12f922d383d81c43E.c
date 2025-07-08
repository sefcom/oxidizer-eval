
  int64_t* uu_dd::parseargs::Parser::parse_input_flags::h12f922d383d81c43(int64_t* arg1, void* arg2, int64_t arg3, int64_t arg4)

{
    void var_e0;
    _$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h77b0cfb9226a3587(&var_e0, 
        0x2c, arg3, arg4);
    int64_t var_f0 = 0;
    int64_t var_e8 = arg4;
    int16_t var_b0 = 1;
    int64_t rax;
    uint64_t rdx;
    rax = core::str::iter::SplitInternal$LT$P$GT$::next::h47b118536c82edfa(&var_f0);
    int64_t* result;
    
    if (!rax)
    {
        label_4d395c:
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
            
            if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(rbx_1, r13_1, "ciodirectdirectorydsyncnocacheno…", 3))
                r14_1 = &var_90;
            else if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(rbx_1, r13_1, "directdirectorydsyncnocachenoati…", 6))
            {
                *(arg2 + 0xb1) = 1;
                label_4d36ab:
                int64_t rax_1;
                uint64_t rdx_1;
                rax_1 = core::str::iter::SplitInternal$LT$P$GT$::next::h47b118536c82edfa(&var_f0);
                rbx_1 = rax_1;
                r13_1 = rdx_1;
                
                if (!rax_1)
                    goto label_4d395c;
                
                continue;
            }
            else
            {
                if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(rbx_1, r13_1, "directorydsyncnocachenoatimenoct…", 9))
                {
                    *(arg2 + 0xb2) = 1;
                    goto label_4d36ab;
                }
                
                if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(rbx_1, r13_1, "dsyncnocachenoatimenocttynolinks…", 5))
                {
                    *(arg2 + 0xb3) = 1;
                    goto label_4d36ab;
                }
                
                if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(rbx_1, r13_1, &data_418ee0[4], 4))
                {
                    *(arg2 + 0xb4) = 1;
                    goto label_4d36ab;
                }
                
                if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(rbx_1, r13_1, "nocachenoatimenocttynolinksbinar…", 7))
                {
                    *(arg2 + 0xb5) = 1;
                    goto label_4d36ab;
                }
                
                if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(rbx_1, r13_1, "nonblockNO_COLORNulErrorIO error…", 8))
                {
                    *(arg2 + 0xb6) = 1;
                    goto label_4d36ab;
                }
                
                if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(rbx_1, r13_1, "noatimenocttynolinksbinaryfullbl…", 7))
                {
                    *(arg2 + 0xb7) = 1;
                    goto label_4d36ab;
                }
                
                if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(rbx_1, r13_1, "nocttynolinksbinaryfullblockcoun…", 6))
                {
                    *(arg2 + 0xb8) = 1;
                    goto label_4d36ab;
                }
                
                if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(rbx_1, r13_1, "nofollowextern "", 8))
                {
                    *(arg2 + 0xb9) = 1;
                    goto label_4d36ab;
                }
                
                void var_78;
                
                if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(rbx_1, r13_1, "nolinksbinaryfullblockcount_byte…", 7))
                    r14_1 = &var_78;
                else
                {
                    void var_60;
                    
                    if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(rbx_1, r13_1, "binaryfullblockcount_bytesskip_b…", 6))
                        r14_1 = &var_60;
                    else
                    {
                        void var_48;
                        
                        if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(rbx_1, r13_1, "textswabdumb\x1b[5m <= skip\x1b[…", 4))
                            r14_1 = &var_48;
                        else
                        {
                            if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(rbx_1, r13_1, "fullblockcount_bytesskip_bytesap…", 9))
                            {
                                *(arg2 + 0xbd) = 1;
                                goto label_4d36ab;
                            }
                            
                            if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(rbx_1, r13_1, "count_bytesskip_bytesappendseek_…", 0xb))
                            {
                                *(arg2 + 0xbe) = 1;
                                goto label_4d36ab;
                            }
                            
                            if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(rbx_1, r13_1, "skip_bytesappendseek_bytesasciie…", 0xa))
                            {
                                *(arg2 + 0xbf) = 1;
                                goto label_4d36ab;
                            }
                            
                            if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(rbx_1, r13_1, "appendseek_bytesasciiebcdicibmlc…", 6))
                                goto label_4d36ab;
                            
                            if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(rbx_1, r13_1, "seek_bytesasciiebcdicibmlcaseuca…", 0xa))
                                goto label_4d36ab;
                            
                            var_100_1 = 5;
                            void var_a8;
                            r14_1 = &var_a8;
                        }
                    }
                }
            }
            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h778f954dace7b409(r14_1, 
                rbx_1, r13_1);
            *arg1 = var_100_1;
            *(arg1 + 8) = *r14_1;
            result = r14_1[1];
            arg1[3] = result;
            break;
        }
    }
    
    return result;
}
