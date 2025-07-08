
  int64_t uu_sort::FieldSelector::get_range::resolve_index::hd65278e590ae86b0(char* arg1, void* arg2, void** arg3, int64_t arg4, int64_t* arg5)

{
    int64_t rdi = *arg5;
    
    if (arg3 && rdi > arg4)
        return 3;
    
    int64_t r12_1 = arg5[1];
    
    if (!r12_1)
    {
        if (!arg3)
        {
            core::option::unwrap_failed::h0e11329e76906eaa();
            /* no return */
        }
        
        if (rdi - 1 < arg4)
            return 0 + 1;
        
        core::panicking::panic_bounds_check::h25a5330941572dd1(rdi - 1, arg4);
        /* no return */
    }
    
    void* r14_1;
    
    if (rdi != 1)
    {
        if (!arg3)
        {
            core::option::unwrap_failed::h0e11329e76906eaa();
            /* no return */
        }
        
        if (rdi - 1 >= arg4)
        {
            core::panicking::panic_bounds_check::h25a5330941572dd1(rdi - 1, arg4);
            /* no return */
        }
        
        r14_1 = arg3[(rdi - 1) * 2];
        
        if (!arg5[2])
            goto label_521f0f;
        
        goto label_521ec2;
    }
    
    r14_1 = nullptr;
    
    if (!arg5[2])
        goto label_521f0f;
    
    label_521ec2:
    void* rax_2;
    int64_t rdx_2;
    rax_2 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::hccefea64a1916a27(r14_1, arg1, arg2);
    
    if (rax_2)
    {
        int64_t var_30_1 = 0;
        void* var_40 = rax_2;
        void* var_38_1 = rax_2 + rdx_2;
        int64_t rax_3;
        int32_t rdx_3;
        rax_3 = core::iter::traits::iterator::Iterator::try_fold::hebbd1e5cdfe1aaa4(&var_40);
        r14_1 += core::option::Option$LT$T$GT$::map_or::h7394a4af2de8fef7(rax_3, rdx_3, rdx_2);
        label_521f0f:
        void* rax_5;
        int64_t rdx_6;
        rax_5 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::hccefea64a1916a27(r14_1, arg1, arg2);
        
        if (rax_5)
        {
            int64_t var_30_2 = 0;
            var_40 = rax_5;
            void* var_38_2 = rax_5 + rdx_6;
            int64_t rax_6;
            int64_t rdi_10;
            rax_6 = core::iter::traits::iterator::Iterator::advance_by::hf1b9bd9a791e7d45(&var_40, 
                r12_1 - 1);
            int32_t rsi_4;
            
            if (!rax_6)
            {
                int64_t rax_7;
                int32_t rdx_7;
                rax_7 = _$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he645eee637d411ae(&var_40);
                rdi_10 = rax_7;
                rsi_4 = rdx_7;
            }
            else
                rsi_4 = 0x110000;
            
            int64_t rax_9;
            rax_9 = core::option::Option$LT$T$GT$::map_or::h0a742836e118e24e(rdi_10, rsi_4, rdx_6)
                + r14_1 >= arg2;
            return rax_9 * 3;
        }
    }
    
    core::str::slice_error_fail::h5dbb61534404fe7e(arg1, arg2, r14_1, arg2);
    /* no return */
}
