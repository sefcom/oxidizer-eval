
  uint64_t uu_wc::utf8::Incomplete::try_complete_offsets::h9c1fcf79f71d155f(void* arg1, int64_t arg2, int64_t arg3)

{
    uint64_t r15 = *(arg1 + 4);
    
    if (r15 > 4)
    {
        core::slice::index::slice_start_index_len_fail::hff2ebd3969f5a2ec(r15, 4);
        /* no return */
    }
    
    uint64_t result_1 = core::cmp::min_by::h81988dc820cb7914(4 - r15, arg3);
    uint64_t result = result_1;
    int64_t rax;
    uint64_t rdx_1;
    rax = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index_mut::h91a2381faada637b(result_1, arg1 + r15, 4 - r15);
    int64_t rax_1;
    int64_t rdx_3;
    rax_1 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::hcc9c09d4ae31832d(result, arg2, arg3);
    core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::copy_from_slice::heb9fab0cf9acb3ce(rax, rdx_1, 
        rax_1, rdx_3);
    char* rax_2;
    int64_t rdx_5;
    rax_2 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::hcc9c09d4ae31832d(result + r15, arg1, 4);
    char r12_1 = rdx_5;
    int64_t var_48;
    core::str::converts::from_utf8::ha1effb4cca6d9901(&var_48, rax_2, rdx_5);
    int64_t var_40;
    
    if (var_48)
    {
        char var_38;
        
        if (var_40)
        {
            result = var_40 - r15;
            
            if (var_40 < r15)
            {
                core::option::unwrap_failed::h0e11329e76906eaa();
                /* no return */
            }
            
            r12_1 = var_40;
        }
        else if (var_38 & 1)
        {
            char var_37;
            r12_1 = var_37;
            
            if (r12_1 < r15)
            {
                core::option::unwrap_failed::h0e11329e76906eaa();
                /* no return */
            }
            
            result = r12_1 - r15;
            rdx_5 = 1;
        }
        else
            rdx_5 = 2;
    }
    *(arg1 + 4) = r12_1;
    return result;
}
