
  fn uu_uniq::handle_preceding_options::h9f64aa70978a6427(arg1: *mut i8, arg2: u64, arg3: *mut i8, arg4: *mut i8) -> i64

{
    let mut rbx: u64;
    let var_30: u64 = rbx;
    
    if core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::haa80fb3b22d1f855(arg1, arg2, 
        "---wsrc/uu/uniq/src/uniq.rs--gro…", 2) != 0
    {
        let mut rax_1: i64;
        let mut rdx: u64;
        rax_1 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::hccefea64a1916a27(arg1, arg2);
        
        if rax_1 == 0
        {
            core::str::slice_error_fail::h5dbb61534404fe7e(arg1, arg2, 2, arg2);
            /* no return */
        }
        
        rbx = 1;
        
        if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h34f4df7d1e205d5a(rax_1, rdx, "skip-charsuniquezero-terminatedg…", 0xa) == 0 && _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h34f4df7d1e205d5a(rax_1, rdx, 
            "skip-fieldsskip-charsuniquezero-…", 0xb) == 0 && _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h34f4df7d1e205d5a(rax_1, rdx, 
            "check-charscountignore-caseskip-…", 0xb) == 0 && _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h34f4df7d1e205d5a(rax_1, rdx, "group", 5) == 0
        {
            rbx = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h34f4df7d1e205d5a(rax_1, rdx, "all-repeatedcheck-charscountigno…", 0xc);
        }
        
        *arg3 = rbx;
    }
    
    rbx = 1;
    
    if _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h34f4df7d1e205d5a(arg1, arg2, "-s---wsrc/uu/uniq/src/uniq.rs--g…", 2) == 0 && _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h34f4df7d1e205d5a(arg1, arg2, 
        "-f-s---wsrc/uu/uniq/src/uniq.rs-…", 2) == 0
    {
        rbx = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h34f4df7d1e205d5a(arg1, arg2, "-wsrc/uu/uniq/src/uniq.rs--group…", 2);
    }
    
    *arg4 = rbx;
    let mut var_3c: i32 = 0;
    let mut rax_10: i64;
    let mut rdx_1: u64;
    rax_10 = core::char::methods::encode_utf8_raw::h4a752b0d300141c4(0x2d, &var_3c);
    let result: i8 = core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::haa80fb3b22d1f855(
        arg1, arg2, rax_10, rdx_1);
    
    if result == 0
    {
        *arg4 = 0;
        *arg3 = 0;
    }
    
    result
}
