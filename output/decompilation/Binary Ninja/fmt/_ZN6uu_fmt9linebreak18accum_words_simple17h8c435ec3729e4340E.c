
  uint64_t uu_fmt::linebreak::accum_words_simple::h8c435ec3729e4340(int64_t* arg1, int64_t* arg2, int64_t arg3, char arg4, int32_t* arg5)

{
    int64_t r15 = *(arg5 + 0x28);
    void* rdi = *arg2;
    int64_t rbp = 0;
    int64_t rax =
        uu_fmt::linebreak::BreakArgs::compute_width::h78d96ea40f73ab18(rdi, arg5, arg3, 0);
    char rcx = *(arg5 + 0x3a);
    
    if (arg2[6] | rcx)
        rbp = (((arg4 & rcx) | arg5[0xe]) & 1) + 1;
    
    int64_t r12_3 = arg3 + r15 + rax + rbp;
    int64_t* r13_1 = arg2[3];
    uint64_t result;
    int64_t* rcx_5;
    
    if (r12_3 <= *(rdi + 0x30))
    {
        result = uu_fmt::linebreak::write_with_spaces::h61239a97c7a24215(*(arg5 + 0x10), 
            *(arg5 + 0x18), rbp, r13_1);
        
        if (!result)
        {
            result = *(arg5 + 0x39);
            rcx_5 = arg1;
            *rcx_5 = r12_3;
        }
        else
        {
            label_4616b0:
            rcx_5 = arg1;
            *rcx_5 = result;
            result = 2;
        }
    }
    else
    {
        result = uu_fmt::linebreak::write_newline::h38b91d3d5ac133d3(arg2[1], arg2[2], r13_1);
        
        if (result)
            goto label_4616b0;
        
        char* r12_4 = *(arg5 + 0x10);
        int64_t rbx_1 = *(arg5 + 0x18);
        int64_t rbp_1 = *(arg5 + 0x20);
        void* rax_2;
        uint64_t rdx_3;
        rax_2 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::h28e9e81c5537bbed(rbp_1, r12_4, rbx_1);
        
        if (!rax_2)
        {
            core::str::slice_error_fail::h1a2885084e28d077(r12_4, rbx_1, rbp_1, rbx_1);
            /* no return */
        }
        
        result = uu_fmt::linebreak::write_with_spaces::h61239a97c7a24215(rax_2, rdx_3, 0, r13_1);
        
        if (result)
            goto label_4616b0;
        
        result = *(arg5 + 0x39);
        rcx_5 = arg1;
        *rcx_5 = r15 + arg2[5];
    }
    
    rcx_5[1] = result;
    return result;
}
