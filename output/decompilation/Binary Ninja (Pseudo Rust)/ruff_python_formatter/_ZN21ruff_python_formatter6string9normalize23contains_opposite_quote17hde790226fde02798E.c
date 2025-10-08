
  fn ruff_python_formatter::string::normalize::contains_opposite_quote::hde790226fde02798(arg1: *mut c_void, arg2: i64, arg3: i8) -> u64

{
    let mut r12: i64;
    let var_28: i64 = r12;
    let mut r13: i64 = arg2;
    let mut r14: *mut c_void = arg1;
    
    if (arg3 & 2) != 0
    {
        let mut rdi_5: *mut i8;
        
        if (arg3 & 1) != 0
        {
            rdi_5 = "'''"""width should be capped at …";
        }
        else
        {
            rdi_5 = """"width should be capped at a m…";
        }
        
        /* tailcall */
        return _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::hff4183d19d767429(rdi_5, r14, r13);
    }
    
    if arg3 > 0x3f
    {
        r12 = core::str::_$LT$impl$u20$str$GT$::find::hee1735f0b948b357(r14, r13, 
            (arg3 & 1) * 5 + 0x22);
    }
    else
    {
        let mut var_48: i64;
        let mut r15_1: i64;
        let mut r15_2: i64;
        
        if (arg3 & 1) != 0
        {
            let mut rax_9: i8;
            let mut rdx_11: i64;
            rax_9 = core::str::_$LT$impl$u20$str$GT$::find::hee1735f0b948b357(r14, r13, 0x27);
            
            if (rax_9 & 1) != 0
            {
                r15_1 = rdx_11;
                
                loop
                {
                    let mut rax_10: i64;
                    let mut rdx_13: i64;
                    rax_10 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeTo$LT$usize$GT$$GT$::get::hf838fc4d891e0944(r15_1, r14, r13);
                    
                    if rax_10 == 0
                    {
                        goto 'label_72995a;
                    }
                    
                    var_48 = rax_10;
                    let var_40_2: i64 = rdx_13 + rax_10;
                    let var_38_2: i8 = 0;
                    let temp0_1: i8 = _$LT$core..iter..adapters..take_while..TakeWhile$LT$I$C$P$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::h1981b6825b102d23(&var_48) & 1;
                    r12 = temp0_1 == 0;
                    
                    if temp0_1 == 0
                    {
                        goto 'label_729932;
                    }
                    
                    r15_2 = r15_1 + 1;
                    let mut rax_12: *mut c_void;
                    let mut rdx_16: i64;
                    rax_12 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::h28e9e81c5537bbed(r15_2, r14, r13);
                    
                    if rax_12 == 0
                    {
                        break;
                    }
                    
                    r13 = rdx_16;
                    let mut rax_13: i8;
                    let mut rdx_17: i64;
                    rax_13 = core::str::_$LT$impl$u20$str$GT$::find::hee1735f0b948b357(rax_12, 
                        rdx_16, 0x27);
                    r15_1 = rdx_17;
                    r14 = rax_12;
                    
                    if (rax_13 & 1) == 0
                    {
                        goto 'label_729932;
                    }
                }
                
                core::str::slice_error_fail::h1a2885084e28d077(r14, r13, r15_2, r13);
                /* no return */
            }
        }
        else
        {
            let mut rax: i8;
            let mut rdx: i64;
            rax = core::str::_$LT$impl$u20$str$GT$::find::hee1735f0b948b357(r14, r13, 0x22);
            
            if (rax & 1) != 0
            {
                r15_1 = rdx;
                
                loop
                {
                    let mut rax_1: i64;
                    let mut rdx_2: i64;
                    rax_1 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeTo$LT$usize$GT$$GT$::get::hf838fc4d891e0944(r15_1, r14, r13);
                    
                    if rax_1 == 0
                    {
                        'label_72995a:
                        core::str::slice_error_fail::h1a2885084e28d077(r14, r13, 0, r15_1);
                        /* no return */
                    }
                    
                    var_48 = rax_1;
                    let var_40_1: i64 = rdx_2 + rax_1;
                    let var_38_1: i8 = 0;
                    let temp1_1: i8 = _$LT$core..iter..adapters..take_while..TakeWhile$LT$I$C$P$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::h1981b6825b102d23(&var_48) & 1;
                    r12 = temp1_1 == 0;
                    
                    if temp1_1 == 0
                    {
                        goto 'label_729932;
                    }
                    
                    r15_2 = r15_1 + 1;
                    let mut rax_3: *mut c_void;
                    let mut rdx_5: i64;
                    rax_3 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::h28e9e81c5537bbed(r15_2, r14, r13);
                    
                    if rax_3 == 0
                    {
                        break;
                    }
                    
                    let mut rax_4: i8;
                    let mut rdx_6: i64;
                    rax_4 = core::str::_$LT$impl$u20$str$GT$::find::hee1735f0b948b357(rax_3, rdx_5, 
                        0x22);
                    r15_1 = rdx_6;
                    r14 = rax_3;
                    r13 = rdx_5;
                    
                    if (rax_4 & 1) == 0
                    {
                        goto 'label_729932;
                    }
                }
                
                core::str::slice_error_fail::h1a2885084e28d077(r14, r13, r15_2, r13);
                /* no return */
            }
        }
        r12 = 0;
    }
    
    'label_729932:
    r12 &= 1;
    r12
}
