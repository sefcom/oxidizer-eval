
  int64_t ruff_python_formatter::string::normalize::UnicodeEscape::normalize::h0df739785c176e43(int64_t* arg1, char arg2, int64_t arg3, char* arg4, int64_t arg5)

{
    int64_t var_80 = 0;
    int64_t var_78 = 1;
    int64_t result_1 = 0;
    int64_t* var_68_1;
    char const (** const var_60_1)[0xff];
    char* var_50;
    int64_t result;
    int64_t i_1;
    int64_t* r15_3;
    
    if (!(arg2 & 1))
    {
        i_1 = arg3;
        
        if (arg5 < arg3)
        {
            *arg1 = -0x7fffffffffffffff;
            return core::ptr::drop_in_place$LT$alloc..string..String$GT$::hdec1f9eb81adb7ad(
                &var_80);
        }
        
        var_68_1 = arg1;
        var_50 = arg4;
        void* var_48_2 = &arg4[arg5];
        int64_t var_40_2 = 0;
        
        if (i_1)
        {
            var_60_1 = &data_97f7c0;
            int64_t i = i_1;
            
            do
            {
                int64_t i_3;
                int32_t rdx_5;
                i_3 = _$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h3a48939ae6ec65bf(&var_50);
                
                if (rdx_5 == 0x110000)
                    break;
                
                int32_t rax_7;
                rax_7 = rdx_5 - 0x30 < 0xa;
                int32_t rcx_1;
                rcx_1 = rdx_5 - 0x61 < 6;
                rcx_1 |= rax_7;
                
                if (!rcx_1)
                {
                    if (rdx_5 - 0x41 >= 6)
                        goto label_7292c7;
                    
                    if (!result_1)
                    {
                        alloc::vec::Vec$LT$T$C$A$GT$::reserve::h95112441ea14ef65(&var_80, i_1);
                        int64_t rax_9;
                        int64_t rdx_7;
                        rax_9 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeTo$LT$usize$GT$$GT$::get::hf838fc4d891e0944(i_3, arg4, arg5);
                        
                        if (!rax_9)
                        {
                            i_1 = i_3;
                            goto label_729348;
                        }
                        
                        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h8450ce9b220d216b(&var_80, rax_9, rdx_7 + rax_9);
                    }
                    
                    alloc::string::String::push::h0ede46164189e411(&var_80, rdx_5 | 0x20);
                }
                else if (result_1)
                    alloc::string::String::push::h0ede46164189e411(&var_80, rdx_5);
                
                i -= 1;
            } while (i);
        }
        
        result = result_1;
        r15_3 = var_68_1;
        
        if (result)
        {
            label_729291:
            *r15_3 = var_80;
            r15_3[2] = result;
            return result;
        }
        
        label_7292fe:
        int64_t rax_10;
        int64_t rdx_10;
        rax_10 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeTo$LT$usize$GT$$GT$::get::hf838fc4d891e0944(i_1, arg4, arg5);
        
        if (rax_10)
        {
            *r15_3 = -0x8000000000000000;
            r15_3[1] = rax_10;
            r15_3[2] = rdx_10;
            return core::ptr::drop_in_place$LT$alloc..string..String$GT$::hdec1f9eb81adb7ad(
                &var_80);
        }
        
        var_60_1 = &data_97f7d8;
        label_729348:
        core::str::slice_error_fail::h1a2885084e28d077(arg4, arg5, 0, i_1);
        /* no return */
    }
    
    var_68_1 = arg1;
    int64_t var_40_1 = 0;
    var_50 = arg4;
    void* var_48_1 = &arg4[arg5];
    
    if (_$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h3a48939ae6ec65bf(&var_50) != 0x7b)
    {
        label_7292c7:
        *var_68_1 = -0x7fffffffffffffff;
        return core::ptr::drop_in_place$LT$alloc..string..String$GT$::hdec1f9eb81adb7ad(&var_80);
    }
    
    var_60_1 = &data_97f7f0;
    
    while (true)
    {
        int64_t i_2;
        int32_t rdx_1;
        i_2 = _$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h3a48939ae6ec65bf(&var_50);
        i_1 = i_2;
        int32_t r15_1 = rdx_1;
        
        if (rdx_1 > 0x2c)
        {
            if (r15_1 == 0x2d)
                goto label_729110;
            
            if (r15_1 != 0x7d)
            {
                if (r15_1 == 0x110000)
                    goto label_7292c7;
                
                goto label_7290fd;
            }
            
            if (result_1)
                alloc::string::String::push::h0ede46164189e411(&var_80, 0x7d);
            
            if (i_1 < 3)
                goto label_7292c7;
            
            i_1 += 1;
            result = result_1;
            r15_3 = var_68_1;
            
            if (result)
                break;
            
            goto label_7292fe;
        }
        
        if (r15_1 == 0x20)
        {
            label_729110:
            
            if (!result_1)
                continue;
        }
        else
        {
            label_7290fd:
            int32_t rax_2;
            rax_2 = r15_1 - 0x30 < 0xa;
            int32_t rcx;
            rcx = r15_1 - 0x41 < 0x1a;
            rcx |= rax_2;
            
            if (rcx)
                goto label_729110;
            
            if (r15_1 - 0x61 > 0x19)
                goto label_7292c7;
            
            if (!result_1)
            {
                alloc::vec::Vec$LT$T$C$A$GT$::reserve::h95112441ea14ef65(&var_80, 2);
                int64_t rax_4;
                int64_t rdx_3;
                rax_4 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeTo$LT$usize$GT$$GT$::get::hf838fc4d891e0944(i_1, arg4, arg5);
                
                if (!rax_4)
                    goto label_729348;
                
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h8450ce9b220d216b(&var_80, rax_4, rdx_3 + rax_4);
            }
            
            r15_1 &= 0x5f;
        }
        
        alloc::string::String::push::h0ede46164189e411(&var_80, r15_1);
    }
    
    goto label_729291;
}
