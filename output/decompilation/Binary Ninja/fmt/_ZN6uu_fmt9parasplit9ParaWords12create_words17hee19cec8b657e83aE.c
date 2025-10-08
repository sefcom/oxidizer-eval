
  void* uu_fmt::parasplit::ParaWords::create_words::hee19cec8b657e83a(int64_t* arg1)

{
    void* rax = arg1[4];
    
    if (*(rax + 0x68))
    {
        int64_t rcx = *(rax + 8);
        int64_t rax_1 = *(rax + 0x10);
        int64_t var_e8 = rcx;
        int64_t var_e0_1 = rcx + rax_1 * 0x18;
        char var_9f_1 = 2;
        char var_5f_1 = 2;
        return alloc::vec::Vec$LT$T$C$A$GT$::extend_desugared::h1f213722aaceb79a(arg1, &var_e8);
    }
    
    void* r14_1 = arg1[3];
    void* rax_4;
    int64_t rdx_2;
    int64_t r12_1;
    char* r13_1;
    int64_t r15_1;
    
    if (*(r14_1 + 0x48) || *(r14_1 + 0x49) == 1)
    {
        if (!*(rax + 0x10))
        {
            core::panicking::panic_bounds_check::h025cadc56a971af7(0, 0);
            /* no return */
        }
        
        void* rcx_1 = *(rax + 8);
        r15_1 = *(rax + 0x50);
        r13_1 = *(rcx_1 + 8);
        r12_1 = *(rcx_1 + 0x10);
        rax_4 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::h28e9e81c5537bbed(r15_1, r13_1, r12_1);
        
        if (!rax_4)
        {
            core::str::slice_error_fail::h1a2885084e28d077(r13_1, r12_1, r15_1, r12_1);
            /* no return */
        }
    }
    else
    {
        if (!*(rax + 0x10))
        {
            core::panicking::panic_bounds_check::h025cadc56a971af7(0, 0);
            /* no return */
        }
        
        void* rcx_2 = *(rax + 8);
        r15_1 = *(rax + 0x60);
        r13_1 = *(rcx_2 + 8);
        r12_1 = *(rcx_2 + 0x10);
        rax_4 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::h28e9e81c5537bbed(r15_1, r13_1, r12_1);
        
        if (!rax_4)
        {
            core::str::slice_error_fail::h1a2885084e28d077(r13_1, r12_1, r15_1, r12_1);
            /* no return */
        }
    }
    void var_58;
    uu_fmt::parasplit::WordSplit::new::h0ffb4261eb0e58ed(&var_58, r14_1, rax_4, rdx_2);
    alloc::vec::Vec$LT$T$C$A$GT$::extend_desugared::h8f7a02158fb7bf61(arg1, &var_58);
    void* result = arg1[4];
    int64_t rcx_4 = *(result + 0x10);
    
    if (rcx_4 <= 1)
        return result;
    
    int64_t var_178 = *(result + 0x60);
    int64_t rdx_6 = arg1[3];
    int64_t rax_5 = *(result + 8);
    int64_t var_170 = rax_5;
    int64_t var_168_1 = rax_5 + rcx_4 * 0x18;
    int64_t var_160_1 = 1;
    int64_t var_158_1 = rdx_6;
    int64_t* var_150_1 = &var_178;
    char var_120_1 = 2;
    char var_f0_1 = 2;
    return alloc::vec::Vec$LT$T$C$A$GT$::extend_desugared::h46897b5c40727b65(arg1, &var_170);
}
