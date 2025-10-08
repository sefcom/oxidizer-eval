
  fn ruff_python_formatter::expression::expr_number_literal::normalize_integer::h77508505660cbd2c(arg1: *mut i128, arg2: *mut i8, arg3: i64) -> i64

{
    let mut var_80: i64 = 0;
    let var_78: i64 = 1;
    let result: i64 = 0;
    let var_58: i64 = 0;
    let mut var_68: *mut i8 = arg2;
    let var_60: *mut c_void = &arg2[arg3];
    
    if _$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h3a48939ae6ec65bf(&var_68) == 0x30
    {
        let mut rax_1: i64;
        let mut rdx_1: i32;
        rax_1 = _$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h3a48939ae6ec65bf(&var_68);
        let mut rax_2: i32;
        let mut rbp: i64;
        
        if rdx_1 == 0x58
        {
            'label_70bba1:
            rbp = 1;
            rax_2 = rdx_1 - 0x42;
            let mut rbp_1: i64;
            let mut r12_2: i64;
            
            if rax_2 <= 0x16 && TEST_BITD(0x402001, rax_2)
            {
                'label_70bbcc:
                alloc::string::String::push::h0ede46164189e411(&var_80, 0x30);
                alloc::string::String::push::h0ede46164189e411(&var_80, rdx_1 | 0x20);
                r12_2 = rax_1 + 1;
                
                if rbp != 0
                {
                    goto 'label_70bc01;
                }
                
                if r12_2 != 0
                {
                    'label_70bc35:
                    let mut rax_5: *mut c_void;
                    let mut rdx_3: *mut c_void;
                    rax_5 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..RangeFrom$LT$usize$GT$$GT$::get::h28e9e81c5537bbed(r12_2, arg2, arg3);
                    
                    if rax_5 == 0
                    {
                        rbp_1 = arg3;
                        'label_70bd26:
                        core::str::slice_error_fail::h1a2885084e28d077(arg2, arg3, r12_2, rbp_1);
                        /* no return */
                    }
                    
                    _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h8450ce9b220d216b(&var_80, rax_5, rdx_3.byte_offset(rax_5));
                    arg1[1] = result;
                    *arg1 = var_80;
                    return result;
                }
            }
            else
            {
                'label_70bbef:
                
                if rbp != 0
                {
                    r12_2 = 0;
                    'label_70bc01:
                    let var_38_1: i64 = var_58;
                    let mut var_48: i128 = var_68;
                    let mut rax_4: i64;
                    let mut i_2: i32;
                    rax_4 = _$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h3a48939ae6ec65bf(&var_48);
                    
                    if i_2 != 0x110000
                    {
                        rbp_1 = rax_4;
                        let mut i_1: i32 = i_2;
                        let mut i: i32;
                        
                        do
                        {
                            if i_1 - 0x61 < 6
                            {
                                let mut rax_9: *mut c_void;
                                let mut rdx_6: *mut c_void;
                                rax_9 = core::str::traits::_$LT$impl$u20$core..slice..index..SliceIndex$LT$str$GT$$u20$for$u20$core..ops..range..Range$LT$usize$GT$$GT$::get::h6f62413506656e8f(r12_2, rbp_1, arg2, arg3);
                                
                                if rax_9 == 0
                                {
                                    goto 'label_70bd26;
                                }
                                
                                _$LT$alloc..vec..Vec$LT$T$C$A$GT$$u20$as$u20$alloc..vec..spec_extend..SpecExtend$LT$$RF$T$C$core..slice..iter..Iter$LT$T$GT$$GT$$GT$::spec_extend::h8450ce9b220d216b(&var_80, rax_9, rdx_6.byte_offset(rax_9));
                                alloc::string::String::push::h0ede46164189e411(&var_80, i_1 & 0x47);
                                r12_2 = rbp_1 + 1;
                            }
                            
                            let mut rax_7: i64;
                            rax_7 = _$LT$core..str..iter..CharIndices$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::h3a48939ae6ec65bf(&var_48);
                            rbp_1 = rax_7;
                            i_1 = i;
                        } while i != 0x110000;
                    }
                    
                    if r12_2 != 0
                    {
                        goto 'label_70bc35;
                    }
                }
            }
        }
        else if rdx_1 != 0x110000
        {
            if rdx_1 == 0x78
            {
                goto 'label_70bba1;
            }
            
            rbp = 0;
            rax_2 = rdx_1 - 0x42;
            
            if rax_2 > 0x16 || !TEST_BITD(0x402001, rax_2)
            {
                goto 'label_70bbef;
            }
            
            goto 'label_70bbcc;
        }
    }
    
    *arg1.byte_offset(8) = arg2;
    arg1[1] = arg3;
    *arg1 = -0x8000000000000000;
    core::ptr::drop_in_place$LT$alloc..string..String$GT$::hdec1f9eb81adb7ad(&var_80)
}
