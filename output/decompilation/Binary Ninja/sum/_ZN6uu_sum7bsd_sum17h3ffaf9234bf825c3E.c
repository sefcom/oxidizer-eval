
  int64_t uu_sum::bsd_sum::h3ffaf9234bf825c3(int64_t arg1, int64_t* arg2)

{
    int64_t var_1030 = 0;
    int32_t r15 = 0;
    memset(&var_1030, 0, 0x1000);
    int64_t r14 = arg2[3];
    int64_t r13 = 0;
    
    while (true)
    {
        int64_t rax_1;
        int64_t rdx_1;
        rax_1 = r14(arg1, &var_1030, 0x1000);
        
        if (rax_1 || !rdx_1)
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::h1f7ee64c99c66cf3(rax_1, rdx_1);
            core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$std..io..Read$GT$$GT$::h5da1723ca861270e(arg1, arg2);
            return (r13 >> 0xa) + 1;
        }
        
        int64_t rax_2;
        int64_t rdx_3;
        rax_2 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h4f7c6d1d3194fc05(rdx_1, &var_1030);
        int64_t var_1040 = rax_2;
        int64_t var_1038_1 = rdx_3 + rax_2;
        
        while (true)
        {
            char* rax_3 = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h000bc77802a7698a(&var_1040);
            
            if (!rax_3)
                break;
            
            r15 = RORW(r15, 1);
            r15 += *rax_3;
        }
        
        r13 += rdx_1;
        core::ptr::drop_in_place$LT$core..result..Result$LT$usize$C$std..io..error..Error$GT$$GT$::h1f7ee64c99c66cf3(0, rdx_1);
    }
}
