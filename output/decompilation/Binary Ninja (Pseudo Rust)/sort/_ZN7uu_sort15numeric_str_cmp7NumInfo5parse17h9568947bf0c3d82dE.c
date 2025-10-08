
  fn uu_sort::numeric_str_cmp::NumInfo::parse::h9568947bf0c3d82d(arg1: *mut i64, arg2: i64, arg3: i64, arg4: *mut i32) -> *mut i64

{
    let mut result_2: *mut i64 = arg1;
    let mut var_85: i8 = 0;
    let mut var_50: i64 = arg2;
    let var_48: i64 = arg2 + arg3;
    let var_40: i64 = 0;
    let mut rax: i64;
    let mut i_3: i32;
    rax = _$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h3a48939ae6ec65bf(&var_50);
    let mut result: *mut i64;
    let mut rcx: i64;
    let mut rdx: i64;
    let mut r14: *mut i32;
    let mut var_70: i8;
    
    if i_3 != 0x110000
    {
        let mut r15_1: i64 = rax;
        let mut i_2: i32 = i_3;
        let rax_1: i32 = *arg4;
        let rbp_1: i32 = arg4[1];
        r14 = 1;
        let mut result_1: *mut i64 = -ffffffffffffffff;
        var_70 = 0;
        let mut r12: i64;
        r12 = 1;
        let mut rcx_1: i64 = 0;
        'label_4cf2e8:
        let mut var_68: i64;
        let mut rdx_2: i64;
        
        if rcx_1 == 0
        {
            loop
            {
                if (r12 & 1) == 0
                {
                    'label_4cf4be:
                    
                    if rax_1 == 0x110000 || rax_1 != i_2
                    {
                        result =
                            uu_sort::numeric_str_cmp::NumInfo::is_invalid_char::he29b1e8f7debbd61(
                            i_2, &var_85, rbp_1);
                        
                        if result != 0
                        {
                            rdx_2 = 0;
                            
                            if (var_70 & 1) != 0
                            {
                                rdx_2 = r15_1;
                            }
                            
                            *result_2 = 0;
                            result_2[1] = 1;
                            r15_1 = rdx_2;
                            'label_4cf620:
                            result_2[2] = rdx_2;
                            result_2[3] = r15_1;
                            return result;
                        }
                        
                        if rbp_1 == 0x110000 || i_2 != rbp_1
                        {
                            let mut rcx_2: i8;
                            let mut result_3: *mut c_void;
                            let mut r12_1: i64;
                            
                            if i_2 != 0x30
                            {
                                result = nullptr;
                                'label_4cf51b:
                                result_3 = result_1;
                                r12_1 = rcx_1;
                                rcx_2 = var_85;
                                goto 'label_4cf52d;
                            }
                            
                            rcx_2 = var_85;
                            
                            if rcx_2 == 1
                            {
                                result_3 = result_1.byte_offset(-1);
                                result = 1;
                                r12_1 = rcx_1;
                                'label_4cf52d:
                                let mut rdx_1: i32;
                                rdx_1 = r12_1 != 0;
                                result_1 = result_3.byte_offset(rcx_2 ^ 1);
                                rdx_1 |= result;
                                let mut rax_12: i64 = var_68;
                                
                                if rdx_1 == 0
                                {
                                    rax_12 = r15_1;
                                }
                                
                                var_68 = rax_12;
                                
                                if rdx_1 == 0
                                {
                                    r12_1 = 1;
                                }
                                
                                let mut rax_13: i64;
                                let mut i_5: i32;
                                rax_13 = _$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h3a48939ae6ec65bf(&var_50);
                                r15_1 = rax_13;
                                i_2 = i_5;
                                rax_13 = 1;
                                var_70 = rax_13;
                                rcx_1 = r12_1;
                                r12 = 0;
                                
                                if i_5 != 0x110000
                                {
                                    goto 'label_4cf2e8;
                                }
                                
                                break;
                            }
                            
                            result = 1;
                            var_70 = result;
                        }
                    }
                    
                    r12 = 0;
                }
                else
                {
                    r12 = 1;
                    
                    if i_2 - 9 >= 5 && i_2 != 0x20
                    {
                        if i_2 < 0x80
                        {
                            r12 = 0;
                            
                            if i_2 != 0x2d
                            {
                                goto 'label_4cf4be;
                            }
                            
                            r14 = nullptr;
                        }
                        else if core::unicode::unicode_data::white_space::lookup::hae563f9e204d99ae(
                            i_2) == 0
                        {
                            goto 'label_4cf4be;
                        }
                    }
                }
                
                let mut rax_8: i64;
                let mut i_4: i32;
                rax_8 = _$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h3a48939ae6ec65bf(&var_50);
                r15_1 = rax_8;
                i_2 = i_4;
                
                if i_4 == 0x110000
                {
                    goto 'label_4cf27f;
                }
            }
        }
        else
        {
            let mut rbx: i32;
            
            if rax_1 == 0x110000
            {
                let mut i: i32;
                
                do
                {
                    rbx = r14;
                    
                    if (r12 & 1) == 0
                    {
                        'label_4cf3fa:
                        
                        if uu_sort::numeric_str_cmp::NumInfo::is_invalid_char::he29b1e8f7debbd61(
                            i_2, &var_85, rbp_1) != 0
                        {
                            goto 'label_4cf5c2;
                        }
                        
                        if rbp_1 == 0x110000
                        {
                            goto 'label_4cf510;
                        }
                        
                        if i_2 != rbp_1
                        {
                            goto 'label_4cf510;
                        }
                        
                        r12 = 0;
                        r14 = rbx;
                    }
                    else
                    {
                        r12 = 1;
                        
                        if i_2 - 9 < 5 || i_2 == 0x20
                        {
                            r14 = rbx;
                        }
                        else if i_2 <= 0x7f
                        {
                            r12 = 0;
                            r14 = nullptr;
                            
                            if i_2 != 0x2d
                            {
                                goto 'label_4cf3fa;
                            }
                        }
                        else
                        {
                            if core::unicode::unicode_data::white_space::lookup::hae563f9e204d99ae(
                                i_2) == 0
                            {
                                goto 'label_4cf3fa;
                            }
                            
                            r14 = rbx;
                        }
                    }
                    
                    let mut rax_7: i64;
                    rax_7 = _$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h3a48939ae6ec65bf(&var_50);
                    r15_1 = rax_7;
                    i_2 = i;
                } while i != 0x110000;
            }
            else
            {
                let mut i_1: i32;
                
                do
                {
                    rbx = r14;
                    
                    if (r12 & 1) == 0
                    {
                        'label_4cf355:
                        
                        if rax_1 != i_2
                        {
                            if uu_sort::numeric_str_cmp::NumInfo::is_invalid_char::he29b1e8f7debbd61(i_2, &var_85, rbp_1) != 0
                            {
                                'label_4cf5c2:
                                rdx_2 = var_68;
                                
                                if arg4[2] != 0
                                {
                                    let r13_1: u64 = i_2 - 0x45;
                                    
                                    if r13_1 <= 0x26 && TEST_BITQ(0x400030b945, r13_1)
                                    {
                                        r15_1 += 1;
                                    }
                                }
                                
                                result = result_2;
                                *result = result_1;
                                rbx &= 1;
                                result[1] = rbx;
                                result_2 = result;
                                goto 'label_4cf620;
                            }
                            
                            if rbp_1 == 0x110000 || i_2 != rbp_1
                            {
                                'label_4cf510:
                                result = i_2 == 0x30;
                                r14 = rbx;
                                goto 'label_4cf51b;
                            }
                        }
                        
                        r12 = 0;
                        r14 = rbx;
                    }
                    else
                    {
                        r12 = 1;
                        
                        if i_2 - 9 < 5 || i_2 == 0x20
                        {
                            r14 = rbx;
                        }
                        else if i_2 <= 0x7f
                        {
                            r12 = 0;
                            r14 = nullptr;
                            
                            if i_2 != 0x2d
                            {
                                goto 'label_4cf355;
                            }
                        }
                        else
                        {
                            if core::unicode::unicode_data::white_space::lookup::hae563f9e204d99ae(
                                i_2) == 0
                            {
                                goto 'label_4cf355;
                            }
                            
                            r14 = rbx;
                        }
                    }
                    
                    let mut rax_4: i64;
                    rax_4 = _$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h3a48939ae6ec65bf(&var_50);
                    r15_1 = rax_4;
                    i_2 = i_1;
                } while i_1 != 0x110000;
            }
        }
        
        if (rcx_1 & 1) == 0
        {
            goto 'label_4cf27f;
        }
        
        r14 &= 1;
        result = result_1;
        rcx = var_68;
        rdx = arg3;
    }
    else
    {
        var_70 = 0;
        'label_4cf27f:
        result = nullptr;
        rdx = arg3;
        
        if (var_70 & 1) == 0
        {
            rdx = 0;
        }
        
        r14 = 1;
        rcx = rdx;
    }
    *result_2 = result;
    result_2[1] = r14;
    result_2[2] = rcx;
    result_2[3] = rdx;
    result
}
