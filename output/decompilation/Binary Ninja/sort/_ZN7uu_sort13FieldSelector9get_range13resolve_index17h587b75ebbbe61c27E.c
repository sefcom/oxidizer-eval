
  int64_t uu_sort::FieldSelector::get_range::resolve_index::h587b75ebbbe61c27(char* arg1, int64_t arg2, int64_t* arg3, int64_t arg4, int64_t* arg5)

{
    int64_t rbx = arg2;
    int64_t rdi = *arg5;
    arg2 = arg4 < rdi;
    
    if (arg3 & arg2)
        return 3;
    
    int64_t r12_1 = arg5[1];
    
    if (!r12_1)
    {
        if (!arg3)
        {
            core::option::unwrap_failed::h893f57cb7db71cb7();
            /* no return */
        }
        
        if (rdi - 1 < arg4)
            return 0 + 1;
        
        core::panicking::panic_bounds_check::h025cadc56a971af7(rdi - 1, arg4);
        /* no return */
    }
    
    int64_t r14_1;
    
    if (rdi != 1)
    {
        if (!arg3)
        {
            core::option::unwrap_failed::h893f57cb7db71cb7();
            /* no return */
        }
        
        if (rdi - 1 >= arg4)
        {
            core::panicking::panic_bounds_check::h025cadc56a971af7(rdi - 1, arg4);
            /* no return */
        }
        
        r14_1 = arg3[(rdi - 1) * 2];
        
        if (!arg5[2])
            goto label_4d3e17;
        
        goto label_4d3dca;
    }
    
    r14_1 = 0;
    
    if (!arg5[2])
        goto label_4d3e17;
    
    label_4d3dca:
    void* rax_2;
    int64_t rdx_2;
    rax_2 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::h28e9e81c5537bbed(r14_1, arg1, rbx);
    
    if (rax_2)
    {
        int64_t var_30_1 = 0;
        void* var_40 = rax_2;
        void* var_38_1 = rax_2 + rdx_2;
        int64_t rax_3;
        int32_t rdx_3;
        rax_3 = core::iter::traits::iterator::Iterator::try_fold::h76c06b666351fd08(&var_40);
        r14_1 += core::option::Option$LT$T$GT$::map_or::h19d14ea526fb5a80(rax_3, rdx_3, rdx_2);
        label_4d3e17:
        void* rax_5;
        int64_t rdx_6;
        rax_5 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::h28e9e81c5537bbed(r14_1, arg1, rbx);
        
        if (rax_5)
        {
            int64_t var_30_2 = 0;
            var_40 = rax_5;
            void* var_38_2 = rax_5 + rdx_6;
            int64_t rax_6;
            int64_t rdi_10;
            rax_6 = core::iter::traits::iterator::Iterator::advance_by::hd51928b9fe23b462(&var_40, 
                r12_1 - 1);
            int32_t rsi_4;
            
            if (!rax_6)
            {
                int64_t rax_7;
                int32_t rdx_7;
                rax_7 = _$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h3a48939ae6ec65bf(&var_40);
                rdi_10 = rax_7;
                rsi_4 = rdx_7;
            }
            else
                rsi_4 = 0x110000;
            
            int64_t rax_9;
            rax_9 = core::option::Option$LT$T$GT$::map_or::h19d14ea526fb5a80(rdi_10, rsi_4, rdx_6)
                + r14_1 >= rbx;
            return rax_9 * 3;
        }
    }
    
    core::str::slice_error_fail::h1a2885084e28d077(arg1, rbx, r14_1, rbx);
    /* no return */
}
