
  uint64_t uu_wc::utf8::Incomplete::try_complete_offsets::h473bfdae9ee1fad0(void* arg1, int64_t arg2, int64_t arg3)

{
    uint64_t r15 = *(arg1 + 4);
    
    if (r15 > 4)
    {
        core::slice::index::slice_start_index_len_fail::h5fe115fcacae7da6(r15, 4);
        /* no return */
    }
    
    uint64_t result_1 = core::cmp::Ord::min::hb704016e1b3086a2(4 - r15, arg3);
    uint64_t result = result_1;
    int64_t rax;
    uint64_t rdx_1;
    rax = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index_mut::hb9f4f421da6706df(result_1, arg1 + r15, 4 - r15);
    int64_t rax_1;
    int64_t rdx_3;
    rax_1 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h7028662c39c50e0f(0, result, arg2, arg3);
    core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::copy_from_slice::h738b473666d6ec1e(rax, rdx_1, 
        rax_1, rdx_3);
    char* rax_2;
    int64_t rdx_6;
    rax_2 = _$LT$core..ops..range..Range$LT$usize$GT$$u20$as$u20$core..slice..index..SliceIndex$LT$$u5b$T$u5d$$GT$$GT$::index::h7028662c39c50e0f(0, result + r15, arg1, 4);
    char r12_1 = rdx_6;
    char var_48;
    core::str::converts::from_utf8::h8a6dc80f786921e0(&var_48, rax_2, rdx_6);
    int64_t var_40;
    
    if (var_48 & 1)
    {
        char var_38;
        
        if (var_40)
        {
            result = var_40 - r15;
            
            if (var_40 < r15)
            {
                core::option::unwrap_failed::h893f57cb7db71cb7();
                /* no return */
            }
            
            r12_1 = var_40;
        }
        else
        {
            int64_t rdx_7;
            
            if (!(var_38 & 1))
                rdx_7 = 2;
            else
            {
                char var_37;
                r12_1 = var_37;
                
                if (r12_1 < r15)
                {
                    core::option::unwrap_failed::h893f57cb7db71cb7();
                    /* no return */
                }
                
                result = r12_1 - r15;
                rdx_7 = 1;
            }
        }
    }
    *(arg1 + 4) = r12_1;
    return result;
}
