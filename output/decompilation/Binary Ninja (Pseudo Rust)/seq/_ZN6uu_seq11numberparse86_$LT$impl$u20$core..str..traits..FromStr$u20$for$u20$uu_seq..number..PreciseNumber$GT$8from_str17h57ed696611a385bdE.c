
  fn uu_seq::numberparse::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$uu_seq..number..PreciseNumber$GT$::from_str::h57ed696611a385bd(arg1: *mut i64, arg2: i64, arg3: i64) -> *mut i64

{
    let mut rax: *mut c_void;
    let mut rdx: size_t;
    rax = core::str::_$LT$impl$u20$str$GT$::trim_start_matches::hfd19a60dd809a602(arg2, arg3);
    let mut r15: *mut c_void = rax;
    let mut r14: size_t = rdx;
    let mut var_40: i32 = 0;
    
    if core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h9cb9db4a84f1050b(r15, r14, 
        core::char::methods::encode_utf8_raw::h4a752b0d300141c4(0x2b, &var_40), 1) != 0
    {
        let mut rax_3: *mut c_void;
        let mut rdx_3: size_t;
        rax_3 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::hccefea64a1916a27(1, r15, r14);
        
        if rax_3 == 0
        {
            core::str::slice_error_fail::h5dbb61534404fe7e(r15, r14, 1, r14);
            /* no return */
        }
        
        r15 = rax_3;
        r14 = rdx_3;
    }
    
    alloc::str::_$LT$impl$u20$str$GT$::to_lowercase::h8673807247540a26(&var_40, r15, r14);
    let var_38: i64;
    let var_30: i64;
    let mut rax_4: i64;
    let mut rdx_5: i64;
    rax_4 = core::str::_$LT$impl$u20$str$GT$::find::h1e180eda41b3ee27(var_38, var_30);
    
    if rax_4 != 1 || rdx_5 >= 2
    {
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hbf11645ab5eda60b(&var_40);
        let mut rax_6: i64;
        let mut rdx_7: i64;
        rax_6 = core::str::_$LT$impl$u20$str$GT$::find::h90335edd368651cb(r15, r14, 0x2e);
        let mut rax_7: i64;
        let mut rdx_8: *mut c_void;
        rax_7 = core::str::_$LT$impl$u20$str$GT$::find::h90335edd368651cb(r15, r14, 0x65);
        
        if rax_6 == 0
        {
            let rsi_10: *mut i8 = r15;
            let rdx_10: *mut c_void = r14;
            
            if rax_7 == 0
            {
                uu_seq::numberparse::parse_no_decimal_no_exponent::h94839c74700e929c(arg1, rsi_10, 
                    rdx_10);
            }
            else
            {
                uu_seq::numberparse::parse_exponent_no_decimal::hd2950fa793267dc0(arg1, rsi_10, 
                    rdx_10, rdx_8);
            }
        }
        else if rax_7 == 0
        {
            uu_seq::numberparse::parse_decimal_no_exponent::hf3af1526d793a9d8(arg1, r15, r14, 
                rdx_7);
        }
        else if rdx_7 >= rdx_8
        {
            arg1[1] = 0;
            *arg1 = -0x7ffffffffffffffc;
        }
        else
        {
            uu_seq::numberparse::parse_decimal_and_exponent::hfdc1c6342c162095(arg1, r15, r14, 
                rdx_7, rdx_8);
        }
    }
    else
    {
        uu_seq::numberparse::parse_hexadecimal::ha820262dcdf3b692(arg1, r15, r14);
        core::ptr::drop_in_place$LT$alloc..string..String$GT$::hbf11645ab5eda60b(&var_40);
    }
    
    arg1
}
