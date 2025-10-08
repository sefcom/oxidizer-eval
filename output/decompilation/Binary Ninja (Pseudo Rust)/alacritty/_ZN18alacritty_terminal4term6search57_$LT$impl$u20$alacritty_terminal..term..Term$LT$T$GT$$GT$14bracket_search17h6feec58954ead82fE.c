
  fn alacritty_terminal::term::search::_$LT$impl$u20$alacritty_terminal..term..Term$LT$T$GT$$GT$::bracket_search::h6feec58954ead82f(arg1: *mut i64, arg2: *mut c_void, arg3: i64, arg4: i32) -> *mut i32

{
    let rax: *mut c_void = _$LT$alacritty_terminal..grid..storage..Storage$LT$T$GT$$u20$as$u20$core..ops..index..Index$LT$alacritty_terminal..index..Line$GT$$GT$::index::h367087db943c6406(arg2.byte_offset(0x28), arg4);
    let rsi_1: i64 = *rax.byte_offset(0x10);
    
    if arg3 >= rsi_1
    {
        core::panicking::panic_bounds_check::h025cadc56a971af7(arg3, rsi_1);
        /* no return */
    }
    
    let mut var_74: i32 = *(*rax.byte_offset(8) + arg3 * 0x18 + 0x10);
    let mut var_58: *const i8 = "(";
    let var_50: *mut c_void = "Failed to query XRandR extension…";
    let mut result: *mut i32;
    let mut rdx_1: i32;
    result = _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::find_map::h0bf4233c49b47505(&var_58, &var_74);
    
    if rdx_1 != 0x110000
    {
        let rcx_2: i32 = *arg2.byte_offset(0xc0) - 1;
        let rdx_3: i64 = *arg2.byte_offset(0xb8) - 1;
        var_58 = arg2.byte_offset(0x28);
        let var_50_1: i64 = arg3;
        let var_48_1: i32 = arg4;
        let var_40_1: i64 = rdx_3;
        let var_38_1: i32 = rcx_2;
        let mut result_1: *mut i32;
        let rdi_2: *mut *mut i32 = &result_1;
        let rsi_3: *mut i64 = &var_58;
        
        if (result & 1) == 0
        {
            _$LT$alacritty_terminal..grid..GridIterator$LT$T$GT$$u20$as$u20$alacritty_terminal..grid..BidirectionalIterator$GT$::prev::h095ab9c52e150b73(rdi_2, rsi_3);
            result = result_1;
            
            if result == 0
            {
                'label_77180b:
                *arg1 = 0;
            }
            else
            {
                let mut r12_2: i32 = 0;
                
                loop
                {
                    let rax_4: i32 = result[4];
                    
                    if rax_4 == rdx_1
                    {
                        if r12_2 == 0
                        {
                            break;
                        }
                        
                        if rdx_1 != var_74
                        {
                            r12_2 -= 1;
                        }
                        else
                        {
                            r12_2 += 1;
                        }
                    }
                    else if rax_4 == var_74
                    {
                        r12_2 += 1;
                    }
                    
                    _$LT$alacritty_terminal..grid..GridIterator$LT$T$GT$$u20$as$u20$alacritty_terminal..grid..BidirectionalIterator$GT$::prev::h095ab9c52e150b73(&result_1, &var_58);
                    result = result_1;
                    
                    if result == 0
                    {
                        goto 'label_77180b_2;
                    }
                }
                
                'label_77191b:
                let result_2: *mut i32;
                result = result_2;
                arg1[1] = result;
                let var_60: i32;
                arg1[2] = var_60;
                *arg1 = 1;
            }
        }
        else
        {
            _$LT$alacritty_terminal..grid..GridIterator$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hccebf77f76d7c458(rdi_2, rsi_3);
            result = result_1;
            
            if result != 0
            {
                let mut r12_1: i32 = 0;
                
                loop
                {
                    let rax_3: i32 = result[4];
                    
                    if rax_3 == rdx_1
                    {
                        if r12_1 == 0
                        {
                            break;
                        }
                        
                        if rdx_1 != var_74
                        {
                            r12_1 -= 1;
                        }
                        else
                        {
                            r12_1 += 1;
                        }
                    }
                    else if rax_3 == var_74
                    {
                        r12_1 += 1;
                    }
                    
                    _$LT$alacritty_terminal..grid..GridIterator$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hccebf77f76d7c458(&result_1, &var_58);
                    result = result_1;
                    
                    if result == 0
                    {
                        goto 'label_77180b_2;
                    }
                }
                
                goto 'label_77191b;
            }
            
            'label_77180b_1:
            *arg1 = 0;
        }
    }
    else
    {
        'label_77180b_2:
        *arg1 = 0;
    }
    
    result
}
