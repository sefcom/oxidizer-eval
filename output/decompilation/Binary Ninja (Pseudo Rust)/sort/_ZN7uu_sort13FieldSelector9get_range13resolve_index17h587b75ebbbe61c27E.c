
  fn uu_sort::FieldSelector::get_range::resolve_index::h587b75ebbbe61c27(arg1: *mut i8, arg2: i64, arg3: *mut i64, arg4: i64, arg5: *mut i64) -> i64

{
    let rbx: i64 = arg2;
    let rdi: i64 = *arg5;
    arg2 = arg4 < rdi;
    
    if (arg3 != 0 & arg2) != 0
    {
        return 3;
    }
    
    let r12_1: i64 = arg5[1];
    
    if r12_1 == 0
    {
        if arg3 == 0
        {
            core::option::unwrap_failed::h893f57cb7db71cb7();
            /* no return */
        }
        
        if rdi - 1 < arg4
        {
            return 0 + 1;
        }
        
        core::panicking::panic_bounds_check::h025cadc56a971af7(rdi - 1, arg4);
        /* no return */
    }
    
    let mut r14_1: i64;
    
    if rdi != 1
    {
        if arg3 == 0
        {
            core::option::unwrap_failed::h893f57cb7db71cb7();
            /* no return */
        }
        
        if rdi - 1 >= arg4
        {
            core::panicking::panic_bounds_check::h025cadc56a971af7(rdi - 1, arg4);
            /* no return */
        }
        
        r14_1 = arg3[(rdi - 1) * 2];
        
        if arg5[2] == 0
        {
            goto 'label_4d3e17;
        }
        
        goto 'label_4d3dca;
    }
    
    r14_1 = 0;
    
    if arg5[2] == 0
    {
        goto 'label_4d3e17;
    }
    
    'label_4d3dca:
    let mut rax_2: *mut c_void;
    let mut rdx_2: i64;
    rax_2 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::h28e9e81c5537bbed(r14_1, arg1, rbx);
    
    if rax_2 != 0
    {
        let var_30_1: i64 = 0;
        let mut var_40: *mut c_void = rax_2;
        let var_38_1: *mut c_void = rax_2.byte_offset(rdx_2);
        let mut rax_3: i64;
        let mut rdx_3: i32;
        rax_3 = core::iter::traits::iterator::Iterator::try_fold::h76c06b666351fd08(&var_40);
        r14_1 += core::option::Option$LT$T$GT$::map_or::h19d14ea526fb5a80(rax_3, rdx_3, rdx_2);
        'label_4d3e17:
        let mut rax_5: *mut c_void;
        let mut rdx_6: i64;
        rax_5 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::h28e9e81c5537bbed(r14_1, arg1, rbx);
        
        if rax_5 != 0
        {
            let var_30_2: i64 = 0;
            var_40 = rax_5;
            let var_38_2: *mut c_void = rax_5.byte_offset(rdx_6);
            let mut rax_6: i64;
            let mut rdi_10: i64;
            rax_6 = core::iter::traits::iterator::Iterator::advance_by::hd51928b9fe23b462(&var_40, 
                r12_1 - 1);
            let mut rsi_4: i32;
            
            if rax_6 == 0
            {
                let mut rax_7: i64;
                let mut rdx_7: i32;
                rax_7 = _$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h3a48939ae6ec65bf(&var_40);
                rdi_10 = rax_7;
                rsi_4 = rdx_7;
            }
            else
            {
                rsi_4 = 0x110000;
            }
            
            let mut rax_9: i64;
            rax_9 = core::option::Option$LT$T$GT$::map_or::h19d14ea526fb5a80(rdi_10, rsi_4, rdx_6)
                + r14_1 >= rbx;
            return rax_9 * 3;
        }
    }
    
    core::str::slice_error_fail::h1a2885084e28d077(arg1, rbx, r14_1, rbx);
    /* no return */
}
