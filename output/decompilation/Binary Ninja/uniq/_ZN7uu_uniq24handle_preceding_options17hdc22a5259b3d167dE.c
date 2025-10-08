
  int64_t uu_uniq::handle_preceding_options::hdc22a5259b3d167d(char* arg1, uint64_t arg2, char* arg3, char* arg4)

{
    uint64_t rbx;
    uint64_t var_30 = rbx;
    
    if (core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h164e9dfb27ee38d7(arg1, arg2, 
        "---w--group is mutually exclusiv…", 2))
    {
        int64_t rax_1;
        uint64_t rdx;
        rax_1 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::h28e9e81c5537bbed(arg1, arg2);
        
        if (!rax_1)
        {
            core::str::slice_error_fail::h1a2885084e28d077(arg1, arg2, 2, arg2);
            /* no return */
        }
        
        rbx = 1;
        
        if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h679c5716f854e642(rax_1, rdx, "skip-charsuniquezero-terminatedg…", 0xa) && !_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h679c5716f854e642(rax_1, rdx, 
                "skip-fieldsskip-charsuniquezero-…", 0xb) && !_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h679c5716f854e642(rax_1, rdx, 
                "check-charscountignore-caseskip-…", 0xb) && !_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h679c5716f854e642(rax_1, rdx, 
                "groupfilessrc/uu/uniq/src/uniq.r…", 5))
            rbx = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h679c5716f854e642(rax_1, rdx, "all-repeatedcheck-charscountigno…", 0xc);
        
        *arg3 = rbx;
    }
    
    rbx = 1;
    
    if (!_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h679c5716f854e642(arg1, arg2, "-s---w--group is mutually exclus…", 2) && !_$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h679c5716f854e642(arg1, arg2, 
            "-f-s---w--group is mutually excl…", 2))
        rbx = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h679c5716f854e642(arg1, arg2, "-w--group is mutually exclusive …", 2);
    
    *arg4 = rbx;
    int32_t var_3c = 0;
    char* rax_10;
    uint64_t rdx_1;
    rax_10 = core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(0x2d, &var_3c);
    char result = core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h164e9dfb27ee38d7(arg1, 
        arg2, rax_10, rdx_1);
    
    if (!result)
    {
        *arg4 = 0;
        *arg3 = 0;
    }
    
    return result;
}
