
  uint64_t ruff_python_formatter::string::normalize::contains_opposite_quote::hde790226fde02798(void* arg1, int64_t arg2, char arg3)

{
    int64_t r12;
    int64_t var_28 = r12;
    int64_t r13 = arg2;
    void* r14 = arg1;
    
    if (arg3 & 2)
    {
        char* rdi_5;
        
        if (arg3 & 1)
            rdi_5 = "'''"""width should be capped at …";
        else
            rdi_5 = """"width should be capped at a m…";
        
        /* tailcall */
        return _$LT$$RF$str$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::hff4183d19d767429(rdi_5, r14, r13);
    }
    
    if (arg3 > 0x3f)
        r12 = core::str::_$LT$impl$u20$str$GT$::find::hee1735f0b948b357(r14, r13, 
            (arg3 & 1) * 5 + 0x22);
    else
    {
        int64_t var_48;
        int64_t r15_1;
        int64_t r15_2;
        
        if (arg3 & 1)
        {
            char rax_9;
            int64_t rdx_11;
            rax_9 = core::str::_$LT$impl$u20$str$GT$::find::hee1735f0b948b357(r14, r13, 0x27);
            
            if (rax_9 & 1)
            {
                r15_1 = rdx_11;
                
                while (true)
                {
                    int64_t rax_10;
                    int64_t rdx_13;
                    rax_10 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeTo$LT$usize$GT$$GT$::get::hf838fc4d891e0944(r15_1, r14, r13);
                    
                    if (!rax_10)
                        goto label_72995a;
                    
                    var_48 = rax_10;
                    int64_t var_40_2 = rdx_13 + rax_10;
                    char var_38_2 = 0;
                    char temp0_1 = _$LT$core..iter..adapters..take_while..TakeWhile$LT$I$C$P$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::h1981b6825b102d23(&var_48) & 1;
                    r12 = !temp0_1;
                    
                    if (!temp0_1)
                        goto label_729932;
                    
                    r15_2 = r15_1 + 1;
                    void* rax_12;
                    int64_t rdx_16;
                    rax_12 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::h28e9e81c5537bbed(r15_2, r14, r13);
                    
                    if (!rax_12)
                        break;
                    
                    r13 = rdx_16;
                    char rax_13;
                    int64_t rdx_17;
                    rax_13 = core::str::_$LT$impl$u20$str$GT$::find::hee1735f0b948b357(rax_12, 
                        rdx_16, 0x27);
                    r15_1 = rdx_17;
                    r14 = rax_12;
                    
                    if (!(rax_13 & 1))
                        goto label_729932;
                }
                
                core::str::slice_error_fail::h1a2885084e28d077(r14, r13, r15_2, r13);
                /* no return */
            }
        }
        else
        {
            char rax;
            int64_t rdx;
            rax = core::str::_$LT$impl$u20$str$GT$::find::hee1735f0b948b357(r14, r13, 0x22);
            
            if (rax & 1)
            {
                r15_1 = rdx;
                
                while (true)
                {
                    int64_t rax_1;
                    int64_t rdx_2;
                    rax_1 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeTo$LT$usize$GT$$GT$::get::hf838fc4d891e0944(r15_1, r14, r13);
                    
                    if (!rax_1)
                    {
                        label_72995a:
                        core::str::slice_error_fail::h1a2885084e28d077(r14, r13, 0, r15_1);
                        /* no return */
                    }
                    
                    var_48 = rax_1;
                    int64_t var_40_1 = rdx_2 + rax_1;
                    char var_38_1 = 0;
                    char temp1_1 = _$LT$core..iter..adapters..take_while..TakeWhile$LT$I$C$P$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::fold::h1981b6825b102d23(&var_48) & 1;
                    r12 = !temp1_1;
                    
                    if (!temp1_1)
                        goto label_729932;
                    
                    r15_2 = r15_1 + 1;
                    void* rax_3;
                    int64_t rdx_5;
                    rax_3 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::h28e9e81c5537bbed(r15_2, r14, r13);
                    
                    if (!rax_3)
                        break;
                    
                    char rax_4;
                    int64_t rdx_6;
                    rax_4 = core::str::_$LT$impl$u20$str$GT$::find::hee1735f0b948b357(rax_3, rdx_5, 
                        0x22);
                    r15_1 = rdx_6;
                    r14 = rax_3;
                    r13 = rdx_5;
                    
                    if (!(rax_4 & 1))
                        goto label_729932;
                }
                
                core::str::slice_error_fail::h1a2885084e28d077(r14, r13, r15_2, r13);
                /* no return */
            }
        }
        r12 = 0;
    }
    
    label_729932:
    r12 &= 1;
    return r12;
}
