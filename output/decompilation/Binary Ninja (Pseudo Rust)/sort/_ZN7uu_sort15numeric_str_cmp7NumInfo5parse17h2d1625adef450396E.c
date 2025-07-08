
  fn uu_sort::numeric_str_cmp::NumInfo::parse::h2d1625adef450396(arg1: *mut i64, arg2: i64, arg3: i64, arg4: *mut i32) -> *mut i64

{
    let mut r14: i64 = arg3;
    let mut result: *mut i64 = arg1;
    let mut var_85: i8 = 0;
    let mut var_50: i64 = arg2;
    let var_48: i64 = arg2 + arg3;
    let var_40: i64 = 0;
    let mut rax: i64;
    let mut i_2: i32;
    rax = _$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he645eee637d411ae(&var_50);
    let mut rax_9: i64;
    let mut rcx: u64;
    let mut rdx: i64;
    
    if i_2 != 0x110000
    {
        let mut r15_1: i64 = rax;
        let mut i_1: i32 = i_2;
        let result_1: *mut i64 = result;
        let r14_1: i32 = *arg4;
        let rbp_1: i32 = arg4[1];
        rax = 1;
        let mut var_84_1: i32 = rax;
        let mut var_80_1: i64 = -1;
        rcx = 0;
        result = 1;
        let mut r13_1: u64 = 0;
        let mut var_78: i64;
        let mut i: i32;
        
        do
        {
            let mut rax_2: u64;
            let mut rdx_4: i64;
            let mut rsi_3: i64;
            let mut rdi_7: u64;
            let mut rax_12: i64;
            let mut rdx_6: i64;
            
            if r13_1 != 1
            {
                let mut var_60_1: u64 = rcx;
                
                loop
                {
                    if (result & 1) == 0
                    {
                        'label_570a2f:
                        
                        if r14_1 == 0x110000 || r14_1 != i_1
                        {
                            if uu_sort::numeric_str_cmp::NumInfo::is_invalid_char::hbc2ad2d78102039c(i_1, &var_85, rbp_1) != 0
                            {
                                if r13_1 != 0
                                {
                                    goto 'label_570ba2;
                                }
                                
                                rax_12 = 0;
                                
                                if (var_60_1 & 1) == 0
                                {
                                    r15_1 = 0;
                                }
                                
                                rcx = 1;
                                rdx_6 = r15_1;
                                result = result_1;
                                goto 'label_570bd7;
                            }
                            
                            if rbp_1 == 0x110000 || i_1 != rbp_1
                            {
                                if i_1 != 0x30
                                {
                                    rax_2 = 0;
                                    goto 'label_570abb;
                                }
                                
                                if var_85 != 0
                                {
                                    rdx_4 = var_80_1 - 1;
                                    rcx = 1;
                                    rax_2 = 1;
                                    rsi_3 = var_78;
                                    rdi_7 = r13_1;
                                    break;
                                }
                                
                                rax_2 = 1;
                                var_60_1 = rax_2;
                            }
                        }
                        
                        result = nullptr;
                    }
                    else if i_1 - 9 >= 5 && i_1 != 0x20
                    {
                        if i_1 < 0x80
                        {
                            if i_1 != 0x2d
                            {
                                goto 'label_570a2f;
                            }
                            
                            result = nullptr;
                            var_84_1 = 0;
                        }
                        else
                        {
                            let mut rax_7: bool;
                            rax_7 =
                                core::unicode::unicode_data::white_space::lookup::hc2937f3d40e148ab(
                                i_1);
                            
                            if rax_7 == 0
                            {
                                goto 'label_570a2f;
                            }
                        }
                    }
                    
                    let mut rax_5: i64;
                    let mut i_4: i32;
                    rax_5 = _$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he645eee637d411ae(&var_50);
                    r15_1 = rax_5;
                    i_1 = i_4;
                    
                    if i_4 == 0x110000
                    {
                        rcx = var_60_1;
                        goto 'label_570b45;
                    }
                }
            }
            else
            {
                loop
                {
                    if (result & 1) == 0
                    {
                        'label_57097f:
                        
                        if r14_1 == 0x110000 || r14_1 != i_1
                        {
                            if uu_sort::numeric_str_cmp::NumInfo::is_invalid_char::hbc2ad2d78102039c(i_1, &var_85, rbp_1) != 0
                            {
                                'label_570ba2:
                                result = result_1;
                                
                                if arg4[2] != 0
                                {
                                    let r12_1: u64 = i_1 - 0x45;
                                    
                                    if r12_1 <= 0x26 && TEST_BITQ(0x4000308945, r12_1)
                                    {
                                        r15_1 += 1;
                                    }
                                }
                                
                                rax_12 = var_80_1;
                                rdx_6 = var_78;
                                rcx = var_84_1 & 1;
                                'label_570bd7:
                                *result = rax_12;
                                result[1] = rcx;
                                result[2] = rdx_6;
                                result[3] = r15_1;
                                return result;
                            }
                            
                            if rbp_1 == 0x110000 || i_1 != rbp_1
                            {
                                rax_2 = i_1 == 0x30;
                                'label_570abb:
                                rdx_4 = var_80_1;
                                rsi_3 = var_78;
                                rdi_7 = r13_1;
                                rcx = var_85;
                                break;
                            }
                        }
                        
                        result = nullptr;
                    }
                    else if i_1 - 9 >= 5 && i_1 != 0x20
                    {
                        if i_1 <= 0x7f
                        {
                            if i_1 != 0x2d
                            {
                                goto 'label_57097f;
                            }
                            
                            result = nullptr;
                            var_84_1 = 0;
                        }
                        else if core::unicode::unicode_data::white_space::lookup::hc2937f3d40e148ab(
                            i_1) == 0
                        {
                            goto 'label_57097f;
                        }
                    }
                    
                    let mut rax_1: i64;
                    let mut i_3: i32;
                    rax_1 = _$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he645eee637d411ae(&var_50);
                    r15_1 = rax_1;
                    i_1 = i_3;
                    
                    if i_3 == 0x110000
                    {
                        result = result_1;
                        goto 'label_570b64;
                    }
                }
            }
            rcx ^= 1;
            var_80_1 = rdx_4 + rcx;
            let rcx_2: i8 = rax_2 ^ 1;
            
            if rax_2 != 0
            {
                r15_1 = rsi_3;
            }
            
            rax_2 = rdi_7 == 1;
            
            if rdi_7 != 1
            {
                rsi_3 = r15_1;
            }
            
            var_78 = rsi_3;
            rax_2 |= rcx_2;
            r13_1 = rax_2;
            let mut rax_8: i64;
            rax_8 = _$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::he645eee637d411ae(&var_50);
            r15_1 = rax_8;
            i_1 = i;
            rcx = 1;
            result = nullptr;
        } while i != 0x110000;
        'label_570b45:
        result = result_1;
        
        if r13_1 == 0
        {
            goto 'label_5708e6;
        }
        
        'label_570b64:
        rcx = var_84_1 & 1;
        rax_9 = var_80_1;
        rdx = var_78;
    }
    else
    {
        rcx = 0;
        'label_5708e6:
        rax_9 = 0;
        
        if (rcx & 1) == 0
        {
            r14 = 0;
        }
        
        rcx = 1;
        rdx = r14;
    }
    
    *result = rax_9;
    result[1] = rcx;
    result[2] = rdx;
    result[3] = r14;
    result
}
