
  int64_t ruff_python_formatter::expression::expr_number_literal::normalize_floating_number::h0dea00e00392162a(int64_t* arg1, char* arg2, int64_t arg3)

{
    int64_t var_68 = 0;
    int64_t var_60 = 1;
    int64_t result = 0;
    int64_t var_38 = 0;
    char* var_48 = arg2;
    void* var_40 = &arg2[arg3];
    int64_t rax_1;
    int32_t rdx;
    rax_1 = _$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h3a48939ae6ec65bf(&var_48);
    int64_t rbx;
    rbx = rdx == 0x2e;
    int64_t r12_1;
    int64_t r14_1;
    
    if (rdx != 0x2e)
    {
        r14_1 = arg3;
        r12_1 = 0;
    }
    else
    {
        alloc::string::String::push::h0ede46164189e411(&var_68, 0x30);
        alloc::string::String::push::h0ede46164189e411(&var_68, 0x2e);
        r14_1 = arg3;
        r12_1 = rax_1 + 1;
    }
    
    while (true)
    {
        int64_t rax_2;
        int32_t rdx_1;
        rax_2 = _$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h3a48939ae6ec65bf(&var_48);
        
        if (rdx_1 > 0x44)
        {
            int64_t r13_1 = rax_2;
            int64_t rbx_1;
            char* r14_2;
            
            if (rdx_1 == 0x45 || rdx_1 == 0x65)
            {
                if (rbx & 1)
                {
                    rbx_1 = r14_1;
                    void* rax_4;
                    void* rdx_6;
                    rax_4 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h6f62413506656e8f(r12_1, r13_1, arg2, r14_1);
                    
                    if (!rax_4)
                        goto label_70c04a;
                    
                    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h8450ce9b220d216b(&var_68, rax_4, rdx_6 + rax_4);
                    r14_2 = arg2;
                    alloc::string::String::push::h0ede46164189e411(&var_68, 0x30);
                    r12_1 = r13_1;
                    
                    if (rdx_1 != 0x45)
                        goto label_70bf8d;
                    
                    goto label_70beea;
                }
                
                rbx_1 = r14_1;
                r14_2 = arg2;
                int64_t rax_6;
                
                if (rdx_1 == 0x45)
                {
                    label_70beea:
                    void* rax_5;
                    void* rdx_9;
                    rax_5 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h6f62413506656e8f(r12_1, r13_1, r14_2, rbx_1);
                    
                    if (!rax_5)
                    {
                        core::str::slice_error_fail::h1a2885084e28d077(r14_2, rbx_1, r12_1, r13_1);
                        /* no return */
                    }
                    
                    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h8450ce9b220d216b(&var_68, rax_5, rdx_9 + rax_5);
                    alloc::string::String::push::h0ede46164189e411(&var_68, 0x65);
                    r12_1 = r13_1 + 1;
                    int32_t rdx_11;
                    rax_6 = _$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h3a48939ae6ec65bf(&var_48);
                    
                    if (rdx_11 == 0x2b)
                        goto label_70bf97;
                    
                    goto label_70bf2c;
                }
                
                label_70bf8d:
                int32_t rdx_15;
                rax_6 = _$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h3a48939ae6ec65bf(&var_48);
                
                if (rdx_15 != 0x2b)
                    goto label_70bf2c;
                
                label_70bf97:
                void* rax_9;
                void* rdx_17;
                rax_9 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h6f62413506656e8f(r12_1, rax_6, r14_2, rbx_1);
                
                if (!rax_9)
                {
                    core::str::slice_error_fail::h1a2885084e28d077(r14_2, rbx_1, r12_1, rax_6);
                    /* no return */
                }
                
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h8450ce9b220d216b(&var_68, rax_9, rdx_17 + rax_9);
                r12_1 = rax_6 + 1;
                
                if (r12_1)
                    goto label_70bf3e;
                
                goto label_70bfd8;
            }
            
            if (rdx_1 == 0x110000)
            {
                if (rbx & 1)
                {
                    rbx_1 = r14_1;
                    void* rax_3;
                    void* rdx_3;
                    rax_3 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::h28e9e81c5537bbed(r12_1, arg2, r14_1);
                    
                    if (!rax_3)
                    {
                        r13_1 = rbx_1;
                        label_70c04a:
                        core::str::slice_error_fail::h1a2885084e28d077(arg2, rbx_1, r12_1, r13_1);
                        /* no return */
                    }
                    
                    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h8450ce9b220d216b(&var_68, rax_3, rdx_3 + rax_3);
                    r14_2 = arg2;
                    alloc::string::String::push::h0ede46164189e411(&var_68, 0x30);
                    r12_1 = rbx_1;
                    label_70bf2c:
                    
                    if (!r12_1)
                        goto label_70bfd8;
                    
                    goto label_70bf3e;
                }
                
                rbx_1 = r14_1;
                r14_2 = arg2;
                
                if (!r12_1)
                {
                    label_70bfd8:
                    arg1[1] = r14_2;
                    arg1[2] = rbx_1;
                    *arg1 = -0x8000000000000000;
                    return core::ptr::drop_in_place$LT$alloc..string..String$GT$::hdec1f9eb81adb7ad(
                        &var_68);
                }
                
                label_70bf3e:
                void* rax_7;
                void* rdx_13;
                rax_7 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::h28e9e81c5537bbed(r12_1, r14_2, rbx_1);
                
                if (!rax_7)
                {
                    core::str::slice_error_fail::h1a2885084e28d077(r14_2, rbx_1, r12_1, rbx_1);
                    /* no return */
                }
                
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h8450ce9b220d216b(&var_68, rax_7, rdx_13 + rax_7);
                arg1[2] = result;
                *arg1 = var_68;
                return result;
            }
        }
        else
        {
            rbx = 1;
            
            if (rdx_1 == 0x2e)
                continue;
        }
        
        rbx = 0;
    }
}
