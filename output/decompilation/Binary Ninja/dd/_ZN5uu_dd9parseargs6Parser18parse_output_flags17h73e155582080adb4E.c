
  int64_t* uu_dd::parseargs::Parser::parse_output_flags::h73e155582080adb4(int64_t* arg1, void* arg2, int64_t arg3, uint64_t arg4)

{
    void var_68;
    _$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h77b0cfb9226a3587(&var_68, 
        0x2c, arg3, arg4);
    int64_t var_78 = 0;
    uint64_t var_70 = arg4;
    int16_t var_38 = 1;
    int64_t i_2;
    uint64_t rdx;
    i_2 = core::str::iter::SplitInternal$LT$P$GT$::next::h47b118536c82edfa(&var_78);
    
    if (i_2)
    {
        int64_t i_1 = i_2;
        uint64_t r13_1 = rdx;
        int64_t i;
        
        do
        {
            if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(i_1, r13_1, "ciodirectdirectorydsyncnocacheno…", 3))
            {
                int64_t* rax_27 =
                    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h778f954dace7b409(
                    &arg1[1], arg3, arg4);
                *arg1 = 0xb;
                return rax_27;
            }
            
            if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(i_1, r13_1, "directdirectorydsyncnocachenoati…", 6))
                *(arg2 + 0xc3) = 1;
            else if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(i_1, r13_1, "directorydsyncnocachenoatimenoct…", 9))
                *(arg2 + 0xc4) = 1;
            else if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(i_1, r13_1, "dsyncnocachenoatimenocttynolinks…", 5))
                *(arg2 + 0xc5) = 1;
            else if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(i_1, r13_1, &data_418ee0[4], 4))
                *(arg2 + 0xc6) = 1;
            else if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(i_1, r13_1, "nocachenoatimenocttynolinksbinar…", 7))
                *(arg2 + 0xc7) = 1;
            else if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(i_1, r13_1, "nonblockNO_COLORNulErrorIO error…", 8))
                *(arg2 + 0xc8) = 1;
            else if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(i_1, r13_1, "noatimenocttynolinksbinaryfullbl…", 7))
                *(arg2 + 0xc9) = 1;
            else if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(i_1, r13_1, "nocttynolinksbinaryfullblockcoun…", 6))
                *(arg2 + 0xca) = 1;
            else if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(i_1, r13_1, "nofollowextern "", 8))
                *(arg2 + 0xcb) = 1;
            else
            {
                if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(i_1, r13_1, "nolinksbinaryfullblockcount_byte…", 7))
                {
                    int128_t var_c0;
                    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h778f954dace7b409(
                        &var_c0, i_1, r13_1);
                    *arg1 = 0xb;
                    *(arg1 + 8) = var_c0;
                    int64_t* var_b0;
                    arg1[3] = var_b0;
                    return var_b0;
                }
                
                if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(i_1, r13_1, "binaryfullblockcount_bytesskip_b…", 6))
                {
                    int128_t var_a8;
                    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h778f954dace7b409(
                        &var_a8, i_1, r13_1);
                    *arg1 = 0xb;
                    *(arg1 + 8) = var_a8;
                    int64_t* var_98;
                    arg1[3] = var_98;
                    return var_98;
                }
                
                if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(i_1, r13_1, "textswabdumb\x1b[5m <= skip\x1b[…", 4))
                {
                    int128_t var_90;
                    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h778f954dace7b409(
                        &var_90, i_1, r13_1);
                    *arg1 = 0xb;
                    *(arg1 + 8) = var_90;
                    int64_t* var_80;
                    arg1[3] = var_80;
                    return var_80;
                }
                
                if (_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(i_1, r13_1, "appendseek_bytesasciiebcdicibmlc…", 6))
                    *(arg2 + 0xc1) = 1;
                else if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(i_1, r13_1, "seek_bytesasciiebcdicibmlcaseuca…", 0xa))
                {
                    if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(i_1, r13_1, "fullblockcount_bytesskip_bytesap…", 9) && !_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(i_1, r13_1, 
                        "count_bytesskip_bytesappendseek_…", 0xb) && !_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(i_1, r13_1, 
                        "skip_bytesappendseek_bytesasciie…", 0xa))
                    {
                        int128_t var_d8;
                        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h778f954dace7b409(&var_d8, i_1, r13_1);
                        *arg1 = 5;
                        *(arg1 + 8) = var_d8;
                        int64_t* var_c8;
                        arg1[3] = var_c8;
                        return var_c8;
                    }
                }
                else
                    *(arg2 + 0xcf) = 1;
            }
            
            uint64_t rdx_1;
            i = core::str::iter::SplitInternal$LT$P$GT$::next::h47b118536c82edfa(&var_78);
            i_1 = i;
            r13_1 = rdx_1;
        } while (i);
    }
    
    *arg1 = 0xe;
    return arg1;
}
