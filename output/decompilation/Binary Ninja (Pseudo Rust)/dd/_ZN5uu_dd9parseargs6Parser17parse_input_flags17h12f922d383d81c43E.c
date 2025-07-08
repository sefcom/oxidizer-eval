
  fn uu_dd::parseargs::Parser::parse_input_flags::h12f922d383d81c43(arg1: *mut i64, arg2: *mut c_void, arg3: i64, arg4: i64) -> *mut i64

{
    let mut var_e0: ();
    _$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h77b0cfb9226a3587(&var_e0, 
        0x2c, arg3, arg4);
    let mut var_f0: i64 = 0;
    let var_e8: i64 = arg4;
    let var_b0: i16 = 1;
    let mut rax: i64;
    let mut rdx: u64;
    rax = core::str::iter::SplitInternal$LT$P$GT$::next::h47b118536c82edfa(&var_f0);
    let mut result: *mut i64;
    
    if rax == 0
    {
        'label_4d395c:
        result = arg1;
        *result = 0xe;
    }
    else
    {
        let mut rbx_1: i64 = rax;
        let mut r13_1: u64 = rdx;
        let mut var_100_1: i64 = 0xb;
        
        loop
        {
            let mut r14_1: *mut i128;
            let mut var_90: ();
            
            if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(rbx_1, r13_1, "ciodirectdirectorydsyncnocacheno…", 3) != 0
            {
                r14_1 = &var_90;
            }
            else if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(rbx_1, r13_1, "directdirectorydsyncnocachenoati…", 6) != 0
            {
                *arg2.byte_offset(0xb1) = 1;
                'label_4d36ab:
                let mut rax_1: i64;
                let mut rdx_1: u64;
                rax_1 = core::str::iter::SplitInternal$LT$P$GT$::next::h47b118536c82edfa(&var_f0);
                rbx_1 = rax_1;
                r13_1 = rdx_1;
                
                if rax_1 == 0
                {
                    goto 'label_4d395c;
                }
                
                continue;
            }
            else
            {
                if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(rbx_1, r13_1, "directorydsyncnocachenoatimenoct…", 9) != 0
                {
                    *arg2.byte_offset(0xb2) = 1;
                    goto 'label_4d36ab;
                }
                
                if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(rbx_1, r13_1, "dsyncnocachenoatimenocttynolinks…", 5) != 0
                {
                    *arg2.byte_offset(0xb3) = 1;
                    goto 'label_4d36ab;
                }
                
                if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(rbx_1, r13_1, &data_418ee0[4], 4) != 0
                {
                    *arg2.byte_offset(0xb4) = 1;
                    goto 'label_4d36ab;
                }
                
                if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(rbx_1, r13_1, "nocachenoatimenocttynolinksbinar…", 7) != 0
                {
                    *arg2.byte_offset(0xb5) = 1;
                    goto 'label_4d36ab;
                }
                
                if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(rbx_1, r13_1, "nonblockNO_COLORNulErrorIO error…", 8) != 0
                {
                    *arg2.byte_offset(0xb6) = 1;
                    goto 'label_4d36ab;
                }
                
                if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(rbx_1, r13_1, "noatimenocttynolinksbinaryfullbl…", 7) != 0
                {
                    *arg2.byte_offset(0xb7) = 1;
                    goto 'label_4d36ab;
                }
                
                if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(rbx_1, r13_1, "nocttynolinksbinaryfullblockcoun…", 6) != 0
                {
                    *arg2.byte_offset(0xb8) = 1;
                    goto 'label_4d36ab;
                }
                
                if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(rbx_1, r13_1, "nofollowextern "", 8) != 0
                {
                    *arg2.byte_offset(0xb9) = 1;
                    goto 'label_4d36ab;
                }
                
                let mut var_78: ();
                
                if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(rbx_1, r13_1, "nolinksbinaryfullblockcount_byte…", 7) != 0
                {
                    r14_1 = &var_78;
                }
                else
                {
                    let mut var_60: ();
                    
                    if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(rbx_1, r13_1, "binaryfullblockcount_bytesskip_b…", 6) != 0
                    {
                        r14_1 = &var_60;
                    }
                    else
                    {
                        let mut var_48: ();
                        
                        if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(rbx_1, r13_1, "textswabdumb\x1b[5m <= skip\x1b[…", 4) != 0
                        {
                            r14_1 = &var_48;
                        }
                        else
                        {
                            if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(rbx_1, r13_1, "fullblockcount_bytesskip_bytesap…", 9) != 0
                            {
                                *arg2.byte_offset(0xbd) = 1;
                                goto 'label_4d36ab;
                            }
                            
                            if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(rbx_1, r13_1, "count_bytesskip_bytesappendseek_…", 0xb) != 0
                            {
                                *arg2.byte_offset(0xbe) = 1;
                                goto 'label_4d36ab;
                            }
                            
                            if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(rbx_1, r13_1, "skip_bytesappendseek_bytesasciie…", 0xa) != 0
                            {
                                *arg2.byte_offset(0xbf) = 1;
                                goto 'label_4d36ab;
                            }
                            
                            if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(rbx_1, r13_1, "appendseek_bytesasciiebcdicibmlc…", 6) != 0
                            {
                                goto 'label_4d36ab;
                            }
                            
                            if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h27cd8ef99e7e17de(rbx_1, r13_1, "seek_bytesasciiebcdicibmlcaseuca…", 0xa) != 0
                            {
                                goto 'label_4d36ab;
                            }
                            
                            var_100_1 = 5;
                            let mut var_a8: ();
                            r14_1 = &var_a8;
                        }
                    }
                }
            }
            _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::h778f954dace7b409(r14_1, 
                rbx_1, r13_1);
            *arg1 = var_100_1;
            *arg1.byte_offset(8) = *r14_1;
            result = r14_1[1];
            arg1[3] = result;
            break;
        }
    }
    
    result
}
