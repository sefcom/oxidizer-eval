
  fn uu_dd::parseargs::Parser::parse_output_flags::h73e155582080adb4(arg1: *mut i64, arg2: *mut c_void, arg3: i64, arg4: u64) -> *mut i64

{
    let mut var_68: ();
    _$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h77b0cfb9226a3587(&var_68, 
        0x2c, arg3, arg4);
    let mut var_78: i64 = 0;
    let var_70: u64 = arg4;
    let var_38: i16 = 1;
    let mut i_2: i64;
    let mut rdx: u64;
    i_2 = core::str::iter::SplitInternal$LT$P$GT$::next::h47b118536c82edfa(&var_78);
    
    if i_2 != 0
    {
        let mut i_1: i64 = i_2;
        let mut r13_1: u64 = rdx;
        let mut i: i64;
        
        do
        {
            if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(i_1, r13_1, "ciodirectdirectorydsyncnocacheno…", 3) != 0
            {
                let rax_27: *mut i64 =
                    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h778f954dace7b409(
                    &arg1[1], arg3, arg4);
                *arg1 = 0xb;
                return rax_27;
            }
            
            if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(i_1, r13_1, "directdirectorydsyncnocachenoati…", 6) != 0
            {
                *arg2.byte_offset(0xc3) = 1;
            }
            else if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(i_1, r13_1, "directorydsyncnocachenoatimenoct…", 9) != 0
            {
                *arg2.byte_offset(0xc4) = 1;
            }
            else if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(i_1, r13_1, "dsyncnocachenoatimenocttynolinks…", 5) != 0
            {
                *arg2.byte_offset(0xc5) = 1;
            }
            else if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(i_1, r13_1, &data_418ee0[4], 4) != 0
            {
                *arg2.byte_offset(0xc6) = 1;
            }
            else if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(i_1, r13_1, "nocachenoatimenocttynolinksbinar…", 7) != 0
            {
                *arg2.byte_offset(0xc7) = 1;
            }
            else if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(i_1, r13_1, "nonblockNO_COLORNulErrorIO error…", 8) != 0
            {
                *arg2.byte_offset(0xc8) = 1;
            }
            else if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(i_1, r13_1, "noatimenocttynolinksbinaryfullbl…", 7) != 0
            {
                *arg2.byte_offset(0xc9) = 1;
            }
            else if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(i_1, r13_1, "nocttynolinksbinaryfullblockcoun…", 6) != 0
            {
                *arg2.byte_offset(0xca) = 1;
            }
            else if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(i_1, r13_1, "nofollowextern "", 8) != 0
            {
                *arg2.byte_offset(0xcb) = 1;
            }
            else
            {
                if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(i_1, r13_1, "nolinksbinaryfullblockcount_byte…", 7) != 0
                {
                    let mut var_c0: i128;
                    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h778f954dace7b409(
                        &var_c0, i_1, r13_1);
                    *arg1 = 0xb;
                    *arg1.byte_offset(8) = var_c0;
                    let var_b0: *mut i64;
                    arg1[3] = var_b0;
                    return var_b0;
                }
                
                if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(i_1, r13_1, "binaryfullblockcount_bytesskip_b…", 6) != 0
                {
                    let mut var_a8: i128;
                    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h778f954dace7b409(
                        &var_a8, i_1, r13_1);
                    *arg1 = 0xb;
                    *arg1.byte_offset(8) = var_a8;
                    let var_98: *mut i64;
                    arg1[3] = var_98;
                    return var_98;
                }
                
                if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(i_1, r13_1, "textswabdumb\x1b[5m <= skip\x1b[…", 4) != 0
                {
                    let mut var_90: i128;
                    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h778f954dace7b409(
                        &var_90, i_1, r13_1);
                    *arg1 = 0xb;
                    *arg1.byte_offset(8) = var_90;
                    let var_80: *mut i64;
                    arg1[3] = var_80;
                    return var_80;
                }
                
                if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(i_1, r13_1, "appendseek_bytesasciiebcdicibmlc…", 6) != 0
                {
                    *arg2.byte_offset(0xc1) = 1;
                }
                else if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(i_1, r13_1, "seek_bytesasciiebcdicibmlcaseuca…", 0xa) == 0
                {
                    if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(i_1, r13_1, "fullblockcount_bytesskip_bytesap…", 9) == 0 && _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(i_1, r13_1, 
                        "count_bytesskip_bytesappendseek_…", 0xb) == 0 && _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(i_1, r13_1, 
                        "skip_bytesappendseek_bytesasciie…", 0xa) == 0
                    {
                        let mut var_d8: i128;
                        _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h778f954dace7b409(&var_d8, i_1, r13_1);
                        *arg1 = 5;
                        *arg1.byte_offset(8) = var_d8;
                        let var_c8: *mut i64;
                        arg1[3] = var_c8;
                        return var_c8;
                    }
                }
                else
                {
                    *arg2.byte_offset(0xcf) = 1;
                }
            }
            
            let mut rdx_1: u64;
            i = core::str::iter::SplitInternal$LT$P$GT$::next::h47b118536c82edfa(&var_78);
            i_1 = i;
            r13_1 = rdx_1;
        } while i != 0;
    }
    
    *arg1 = 0xe;
    arg1
}
