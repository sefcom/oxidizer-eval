
  void fd::filter::owner::Check$LT$T$GT$::parse::h6fb56b91fc350486(int32_t* arg1, char* arg2, uint64_t arg3)

{
    int32_t rax;
    uint64_t r14_1;
    char* r15_1;
    
    if (arg2)
    {
        r14_1 = arg3;
        r15_1 = arg2;
        rax = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::h2df04f0e3577ee6d(arg2, r14_1, 1, 0);
    }
    
    if (!arg2 || rax)
    {
        *arg1 = 0x200000000;
        return;
    }
    
    int32_t var_30 = 0;
    char* rax_1;
    uint64_t rdx;
    rax_1 = core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(0x21, &var_30);
    char rax_2 = core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::hf20ef8fd404ea81d(r15_1, 
        r14_1, rax_1, rdx);
    
    if (rax_2)
    {
        void* rax_3;
        uint64_t rdx_3;
        rax_3 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::h28e9e81c5537bbed(1, r15_1, r14_1);
        
        if (!rax_3)
        {
            core::str::slice_error_fail::h1a2885084e28d077(r15_1, r14_1, 1, r14_1);
            /* no return */
        }
        
        r15_1 = rax_3;
        r14_1 = rdx_3;
    }
    
    fd::filter::owner::OwnerFilter::from_string::_$u7b$$u7b$closure$u7d$$u7d$::h3abaa0a11bc21c5a(
        &var_30, r15_1, r14_1);
    
    if (!(var_30 & 1))
    {
        arg1[1] = rax_2;
        int32_t var_2c;
        arg1[2] = var_2c;
        rax = 0;
    }
    else
    {
        int64_t var_28;
        *(arg1 + 8) = var_28;
        rax = 1;
    }
    
    *arg1 = rax;
}
