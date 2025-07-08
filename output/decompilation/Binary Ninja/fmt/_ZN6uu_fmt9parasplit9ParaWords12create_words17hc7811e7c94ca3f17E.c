
  void* uu_fmt::parasplit::ParaWords::create_words::hc7811e7c94ca3f17(int64_t* arg1)

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
        return _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$T$C$I$GT$$GT$::spec_extend::h6e3e89d9b96b900d(arg1, &var_e8);
    }
    
    void* rbx_1 = arg1[3];
    void* rax_4;
    int64_t rdx_2;
    int64_t* r13_1;
    char* r12_1;
    void* r14_1;
    void* r15_1;
    
    if (*(rbx_1 + 0x48) || *(rbx_1 + 0x49))
    {
        if (!*(rax + 0x10))
        {
            core::panicking::panic_bounds_check::h25a5330941572dd1(0, 0);
            /* no return */
        }
        
        r13_1 = arg1;
        void* rcx_1 = *(rax + 8);
        r14_1 = *(rax + 0x50);
        r12_1 = *(rcx_1 + 8);
        r15_1 = *(rcx_1 + 0x10);
        rax_4 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::hccefea64a1916a27(r14_1, r12_1, r15_1);
        
        if (!rax_4)
        {
            core::str::slice_error_fail::h5dbb61534404fe7e(r12_1, r15_1, r14_1, r15_1);
            /* no return */
        }
    }
    else
    {
        if (!*(rax + 0x10))
        {
            core::panicking::panic_bounds_check::h25a5330941572dd1(0, 0);
            /* no return */
        }
        
        r13_1 = arg1;
        void* rcx_6 = *(rax + 8);
        r14_1 = *(rax + 0x60);
        r12_1 = *(rcx_6 + 8);
        r15_1 = *(rcx_6 + 0x10);
        rax_4 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::hccefea64a1916a27(r14_1, r12_1, r15_1);
        
        if (!rax_4)
        {
            core::str::slice_error_fail::h5dbb61534404fe7e(r12_1, r15_1, r14_1, r15_1);
            /* no return */
        }
    }
    void var_58;
    uu_fmt::parasplit::WordSplit::new::h78514cc4bb6fc660(&var_58, rbx_1, rax_4, rdx_2);
    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$T$C$I$GT$$GT$::spec_extend::h41916ca398d3ca71(r13_1, &var_58);
    void* result = r13_1[4];
    int64_t rcx_3 = *(result + 0x10);
    
    if (rcx_3 <= 1)
        return result;
    
    int64_t var_178 = *(result + 0x60);
    int64_t rdx_5 = r13_1[3];
    int64_t rax_5 = *(result + 8);
    int64_t var_170 = rax_5;
    int64_t var_168_1 = rax_5 + rcx_3 * 0x18;
    int64_t var_160_1 = 1;
    int64_t var_158_1 = rdx_5;
    int64_t* var_150_1 = &var_178;
    char var_120_1 = 2;
    char var_f0_1 = 2;
    return _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$T$C$I$GT$$GT$::spec_extend::h6367ef051ef2e384(r13_1, &var_170);
}
