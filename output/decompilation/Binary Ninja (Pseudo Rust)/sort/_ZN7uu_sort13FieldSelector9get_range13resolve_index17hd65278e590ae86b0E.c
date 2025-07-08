
  fn uu_sort::FieldSelector::get_range::resolve_index::hd65278e590ae86b0(arg1: *mut i8, arg2: *mut c_void, arg3: *mut *mut c_void, arg4: i64, arg5: *mut i64) -> i64

{
    let rdi: i64 = *arg5;
    
    if arg3 != 0 && rdi > arg4
    {
        return 3;
    }
    
    let r12_1: i64 = arg5[1];
    
    if r12_1 == 0
    {
        if arg3 == 0
        {
            core::option::unwrap_failed::h0e11329e76906eaa();
            /* no return */
        }
        
        if rdi - 1 < arg4
        {
            return 0 + 1;
        }
        
        core::panicking::panic_bounds_check::h25a5330941572dd1(rdi - 1, arg4);
        /* no return */
    }
    
    let mut r14_1: *mut c_void;
    
    if rdi != 1
    {
        if arg3 == 0
        {
            core::option::unwrap_failed::h0e11329e76906eaa();
            /* no return */
        }
        
        if rdi - 1 >= arg4
        {
            core::panicking::panic_bounds_check::h25a5330941572dd1(rdi - 1, arg4);
            /* no return */
        }
        
        r14_1 = arg3[(rdi - 1) * 2];
        
        if arg5[2] == 0
        {
            goto 'label_521f0f;
        }
        
        goto 'label_521ec2;
    }
    
    r14_1 = nullptr;
    
    if arg5[2] == 0
    {
        goto 'label_521f0f;
    }
    
    'label_521ec2:
    let mut rax_2: *mut c_void;
    let mut rdx_2: i64;
    rax_2 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::hccefea64a1916a27(r14_1, arg1, arg2);
    
    if rax_2 != 0
    {
        let var_30_1: i64 = 0;
        let mut var_40: *mut c_void = rax_2;
        let var_38_1: *mut c_void = rax_2.byte_offset(rdx_2);
        let mut rax_3: i64;
        let mut rdx_3: i32;
        rax_3 = core::iter::traits::iterator::Iterator::try_fold::hebbd1e5cdfe1aaa4(&var_40);
        r14_1 += core::option::Option$LT$T$GT$::map_or::h7394a4af2de8fef7(rax_3, rdx_3, rdx_2);
        'label_521f0f:
        let mut rax_5: *mut c_void;
        let mut rdx_6: i64;
        rax_5 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::hccefea64a1916a27(r14_1, arg1, arg2);
        
        if rax_5 != 0
        {
            let var_30_2: i64 = 0;
            var_40 = rax_5;
            let var_38_2: *mut c_void = rax_5.byte_offset(rdx_6);
            let mut rax_6: i64;
            let mut rdi_10: i64;
            rax_6 = core::iter::traits::iterator::Iterator::advance_by::hf1b9bd9a791e7d45(&var_40, 
                r12_1 - 1);
            let mut rsi_4: i32;
            
            if rax_6 == 0
            {
                let mut rax_7: i64;
                let mut rdx_7: i32;
                rax_7 = _$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he645eee637d411ae(&var_40);
                rdi_10 = rax_7;
                rsi_4 = rdx_7;
            }
            else
            {
                rsi_4 = 0x110000;
            }
            
            let mut rax_9: i64;
            rax_9 = core::option::Option$LT$T$GT$::map_or::h0a742836e118e24e(rdi_10, rsi_4, rdx_6).
                byte_offset(r14_1) >= arg2;
            return rax_9 * 3;
        }
    }
    
    core::str::slice_error_fail::h5dbb61534404fe7e(arg1, arg2, r14_1, arg2);
    /* no return */
}
