
  uint64_t uu_fmt::linebreak::accum_words_simple::h022aba843f8dc50f(int64_t* arg1, int64_t* arg2, int64_t arg3, char arg4, int64_t* arg5)

{
    int64_t rax = arg5[5];
    void* rbp = *arg2;
    int64_t rbx = 0;
    int64_t rax_1 =
        uu_fmt::linebreak::BreakArgs::compute_width::hfc2bd23d7c87d18b(rbp, arg5, arg3, 0);
    bool rcx = *(arg5 + 0x3a);
    
    if (arg2[6] | rcx)
        rbx = ((rcx & arg4) | arg5[7]) + 1;
    
    int64_t r12_3 = arg3 + rax + rax_1 + rbx;
    int64_t* r13_1 = arg2[3];
    uint64_t result;
    int64_t* rcx_2;
    
    if (r12_3 <= *(rbp + 0x30))
    {
        result =
            uu_fmt::linebreak::write_with_spaces::hd5de12a13c23bcdd(arg5[2], arg5[3], rbx, r13_1);
        
        if (!result)
        {
            result = *(arg5 + 0x39);
            rcx_2 = arg1;
            *rcx_2 = r12_3;
        }
        else
        {
            label_4bb5ce:
            rcx_2 = arg1;
            *rcx_2 = result;
            result = 2;
        }
    }
    else
    {
        result = uu_fmt::linebreak::write_newline::hc3973027aaf0dbf6(arg2[1], arg2[2], r13_1);
        
        if (result)
            goto label_4bb5ce;
        
        char* r12_4 = arg5[2];
        void* rbx_2 = arg5[3];
        void* rbp_1 = arg5[4];
        void* rax_2;
        uint64_t rdx_3;
        rax_2 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::hccefea64a1916a27(rbp_1, r12_4, rbx_2);
        
        if (!rax_2)
        {
            core::str::slice_error_fail::h5dbb61534404fe7e(r12_4, rbx_2, rbp_1, rbx_2);
            /* no return */
        }
        
        result = uu_fmt::linebreak::write_with_spaces::hd5de12a13c23bcdd(rax_2, rdx_3, 0, r13_1);
        
        if (result)
            goto label_4bb5ce;
        
        result = *(arg5 + 0x39);
        rcx_2 = arg1;
        *rcx_2 = rax + arg2[5];
    }
    
    rcx_2[1] = result;
    return result;
}
