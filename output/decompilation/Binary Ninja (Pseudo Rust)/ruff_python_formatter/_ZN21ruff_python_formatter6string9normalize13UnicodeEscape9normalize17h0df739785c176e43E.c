
  fn ruff_python_formatter::string::normalize::UnicodeEscape::normalize::h0df739785c176e43(arg1: *mut i64, arg2: i8, arg3: i64, arg4: *mut i8, arg5: i64) -> i64

{
    let mut var_80: i64 = 0;
    let var_78: i64 = 1;
    let result_1: i64 = 0;
    let mut var_68_1: *mut i64;
    let mut var_60_1: *mut *mut [i8; 0xff];
    let mut var_50: *mut i8;
    let mut result: i64;
    let mut i_1: i64;
    let mut r15_3: *mut i64;
    
    if (arg2 & 1) == 0
    {
        i_1 = arg3;
        
        if arg5 < arg3
        {
            *arg1 = -0x7fffffffffffffff;
            return core::ptr::drop_in_place$LT$alloc..string..String$GT$::hdec1f9eb81adb7ad(
                &var_80);
        }
        
        var_68_1 = arg1;
        var_50 = arg4;
        let var_48_2: *mut c_void = &arg4[arg5];
        let var_40_2: i64 = 0;
        
        if i_1 != 0
        {
            var_60_1 = &data_97f7c0;
            let mut i: i64 = i_1;
            
            do
            {
                let mut i_3: i64;
                let mut rdx_5: i32;
                i_3 = _$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h3a48939ae6ec65bf(&var_50);
                
                if rdx_5 == 0x110000
                {
                    break;
                }
                
                let mut rax_7: i32;
                rax_7 = rdx_5 - 0x30 < 0xa;
                let mut rcx_1: i32;
                rcx_1 = rdx_5 - 0x61 < 6;
                rcx_1 |= rax_7;
                
                if rcx_1 == 0
                {
                    if rdx_5 - 0x41 >= 6
                    {
                        goto 'label_7292c7;
                    }
                    
                    if result_1 == 0
                    {
                        alloc::vec::Vec$LT$T$C$A$GT$::reserve::h95112441ea14ef65(&var_80, i_1);
                        let mut rax_9: i64;
                        let mut rdx_7: i64;
                        rax_9 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeTo$LT$usize$GT$$GT$::get::hf838fc4d891e0944(i_3, arg4, arg5);
                        
                        if rax_9 == 0
                        {
                            i_1 = i_3;
                            goto 'label_729348;
                        }
                        
                        _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h8450ce9b220d216b(&var_80, rax_9, rdx_7 + rax_9);
                    }
                    
                    alloc::string::String::push::h0ede46164189e411(&var_80, rdx_5 | 0x20);
                }
                else if result_1 != 0
                {
                    alloc::string::String::push::h0ede46164189e411(&var_80, rdx_5);
                }
                
                i -= 1;
            } while i != 0;
        }
        
        result = result_1;
        r15_3 = var_68_1;
        
        if result != 0
        {
            'label_729291:
            *r15_3 = var_80;
            r15_3[2] = result;
            return result;
        }
        
        'label_7292fe:
        let mut rax_10: i64;
        let mut rdx_10: i64;
        rax_10 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeTo$LT$usize$GT$$GT$::get::hf838fc4d891e0944(i_1, arg4, arg5);
        
        if rax_10 != 0
        {
            *r15_3 = -0x8000000000000000;
            r15_3[1] = rax_10;
            r15_3[2] = rdx_10;
            return core::ptr::drop_in_place$LT$alloc..string..String$GT$::hdec1f9eb81adb7ad(
                &var_80);
        }
        
        var_60_1 = &data_97f7d8;
        'label_729348:
        core::str::slice_error_fail::h1a2885084e28d077(arg4, arg5, 0, i_1);
        /* no return */
    }
    
    var_68_1 = arg1;
    let var_40_1: i64 = 0;
    var_50 = arg4;
    let var_48_1: *mut c_void = &arg4[arg5];
    
    if _$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h3a48939ae6ec65bf(&var_50) != 0x7b
    {
        'label_7292c7:
        *var_68_1 = -0x7fffffffffffffff;
        return core::ptr::drop_in_place$LT$alloc..string..String$GT$::hdec1f9eb81adb7ad(&var_80);
    }
    
    var_60_1 = &data_97f7f0;
    
    loop
    {
        let mut i_2: i64;
        let mut rdx_1: i32;
        i_2 = _$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h3a48939ae6ec65bf(&var_50);
        i_1 = i_2;
        let mut r15_1: i32 = rdx_1;
        
        if rdx_1 > 0x2c
        {
            if r15_1 == 0x2d
            {
                goto 'label_729110;
            }
            
            if r15_1 != 0x7d
            {
                if r15_1 == 0x110000
                {
                    goto 'label_7292c7;
                }
                
                goto 'label_7290fd;
            }
            
            if result_1 != 0
            {
                alloc::string::String::push::h0ede46164189e411(&var_80, 0x7d);
            }
            
            if i_1 < 3
            {
                goto 'label_7292c7;
            }
            
            i_1 += 1;
            result = result_1;
            r15_3 = var_68_1;
            
            if result != 0
            {
                break;
            }
            
            goto 'label_7292fe;
        }
        
        if r15_1 == 0x20
        {
            'label_729110:
            
            if result_1 == 0
            {
                continue;
            }
        }
        else
        {
            'label_7290fd:
            let mut rax_2: i32;
            rax_2 = r15_1 - 0x30 < 0xa;
            let mut rcx: i32;
            rcx = r15_1 - 0x41 < 0x1a;
            rcx |= rax_2;
            
            if rcx != 0
            {
                goto 'label_729110;
            }
            
            if r15_1 - 0x61 > 0x19
            {
                goto 'label_7292c7;
            }
            
            if result_1 == 0
            {
                alloc::vec::Vec$LT$T$C$A$GT$::reserve::h95112441ea14ef65(&var_80, 2);
                let mut rax_4: i64;
                let mut rdx_3: i64;
                rax_4 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeTo$LT$usize$GT$$GT$::get::hf838fc4d891e0944(i_1, arg4, arg5);
                
                if rax_4 == 0
                {
                    goto 'label_729348;
                }
                
                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h8450ce9b220d216b(&var_80, rax_4, rdx_3 + rax_4);
            }
            
            r15_1 &= 0x5f;
        }
        
        alloc::string::String::push::h0ede46164189e411(&var_80, r15_1);
    }
    
    goto 'label_729291;
}
