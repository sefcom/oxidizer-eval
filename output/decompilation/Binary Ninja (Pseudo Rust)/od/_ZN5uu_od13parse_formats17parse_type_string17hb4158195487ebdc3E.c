
  fn uu_od::parse_formats::parse_type_string::hb4158195487ebdc3(arg1: *mut i64, arg2: i64, arg3: i64) -> i64

{
    let rbx: u64;
    let var_30: u64 = rbx;
    let mut var_d8: i64 = 0;
    let var_d0: i64 = 8;
    let result: i64 = 0;
    let mut var_a8: i64 = arg2;
    let var_a0: i64 = arg2 + arg3;
    let mut rax_1: i32;
    let mut i_2: i32;
    rax_1 = core::str::validations::next_code_point::h6c42fc7883874c6b(&var_a8, rbx);
    
    if rax_1 != 0
    {
        let mut i: i32 = i_2;
        
        if i_2 != 0x110000
        {
            let mut var_118: i64;
            let rbx_1: *mut i64 = &var_118;
            
            do
            {
                let mut i_1: i32 = i;
                let rbp_1: u64 = i - 0x61;
                let mut var_100: i64;
                let mut var_f8: i8;
                let var_f7: i64;
                let mut rax_3: *mut c_void;
                let mut var_c0: *mut i32;
                
                if rbp_1 > 0x17
                {
                    'label_4cb578:
                    var_c0 = &i_1;
                    let var_b8_1: i64 = arg2;
                    let var_b0_1: i64 = arg3;
                    uu_od::parse_formats::parse_type_string::_$u7b$$u7b$closure$u7d$$u7d$::hc6dc8de7beca6039(&var_100, &var_c0);
                    let rcx_1: i64 = var_100;
                    rax_3 = var_f8;
                    var_118 = var_f7;
                    var_118 = var_f7;
                    
                    if rcx_1 != -0x8000000000000000
                    {
                        let rdx_5: i64 = var_118;
                        arg1[3] = var_118;
                        *arg1.byte_offset(0x11) = rdx_5;
                        arg1[1] = rcx_1;
                        arg1[2] = rax_3;
                        *arg1 = 1;
                        return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_od..parse_formats..ParsedFormatterItemInfo$GT$$GT$::hf096e71933bd90a6(&var_d8);
                    }
                }
                else
                {
                    match rbp_1
                    {
                        0 =>
                        {
                            rax_3 = nullptr;
                        }
                        1 | 4 | 6 | 7 | 8 | 9 | 0xa | 0xb | 0xc | 0xd | 0xf | 0x10 | 0x11 | 0x12 |
                            0x13 | 0x15 | 0x16 =>
                        {
                            goto 'label_4cb578;
                        }
                        2 =>
                        {
                            rax_3 = 1;
                        }
                        3 =>
                        {
                            rax_3 = 2;
                        }
                        5 =>
                        {
                            rax_3 = 6;
                        }
                        0xe =>
                        {
                            rax_3 = 3;
                        }
                        0x14 =>
                        {
                            rax_3 = 4;
                        }
                        0x17 =>
                        {
                            rax_3 = 5;
                        }
                    }
                    
                    var_c0 = &i_1;
                    let var_b8_2: i64 = arg2;
                    let var_b0_2: i64 = arg3;
                }
                let r12_1: u64 = rax_3;
                let mut r14_1: u8 = 0x2010101010000 >> r12_1 << 3;
                let mut rax_6: i32;
                let mut i_3: i32;
                rax_6 = core::str::validations::next_code_point::h6c42fc7883874c6b(&var_a8, rbx_1);
                i = i_3;
                
                if rax_6 == 0
                {
                    i = 0x110000;
                }
                
                let mut var_135: i8 = 0;
                let mut var_108: i64;
                
                if uu_od::parse_formats::is_format_size_char::h42f5b1cb8010d6dd(i, r14_1, &var_135)
                    == 0
                {
                    var_118 = 0;
                    let var_110_1: *mut i8 = 1;
                    var_108 = 0;
                    
                    while uu_od::parse_formats::is_format_size_decimal::h9f07da48a23fad4f(i, r14_1, 
                        &var_118) != 0
                    {
                        let mut rax_10: i32;
                        let mut i_5: i32;
                        rax_10 = core::str::validations::next_code_point::h6c42fc7883874c6b(
                            &var_a8, rbx_1);
                        i = i_5;
                        
                        if rax_10 == 0
                        {
                            i = 0x110000;
                        }
                    }
                    
                    if var_108 != 0
                    {
                        let mut rax_11: i8;
                        let mut rdx_3: i8;
                        rax_11 = core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$u8$GT$::from_str::h4c7dd843d3d7bcf1(var_110_1, var_108);
                        let mut var_60: *mut i64 = &var_118;
                        let var_58_1: i64 = arg2;
                        let var_50_1: i64 = arg3;
                        let mut rax_12: i64;
                        
                        if (rax_11 & 1) != 0
                        {
                            uu_od::parse_formats::parse_type_string::_$u7b$$u7b$closure$u7d$$u7d$::h65fc53be62888ca5(&var_100, &var_60);
                            rax_12 = var_100;
                            rdx_3 = var_f8;
                            let var_78_1: i64 = var_f7;
                        }
                        
                        if (rax_11 & 1) != 0 && rax_12 != -0x8000000000000000
                        {
                            arg1[3] = var_f7;
                            *arg1.byte_offset(0x11) = var_f7;
                            arg1[1] = rax_12;
                            arg1[2] = rdx_3;
                            *arg1 = 1;
                            core::ptr::drop_in_place$LT$alloc..string..String$GT$::h265121219f172feb(&var_118);
                            return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_od..parse_formats..ParsedFormatterItemInfo$GT$$GT$::hf096e71933bd90a6(&var_d8);
                        }
                        
                        var_135 = rdx_3;
                    }
                    
                    core::ptr::drop_in_place$LT$alloc..string..String$GT$::h265121219f172feb(
                        &var_118);
                    goto 'label_4cb756;
                }
                
                let mut rax_8: i32;
                let mut i_4: i32;
                rax_8 = core::str::validations::next_code_point::h6c42fc7883874c6b(&var_a8, rbx_1);
                
                if rax_8 == 0
                {
                    r14_1 = 0;
                    i = 0x110000;
                }
                else
                {
                    i = i_4;
                    'label_4cb756:
                    
                    if i != 0x7a
                    {
                        r14_1 = 0;
                    }
                    else
                    {
                        let mut rax_13: i32;
                        let mut i_6: i32;
                        rax_13 = core::str::validations::next_code_point::h6c42fc7883874c6b(
                            &var_a8, rbx_1);
                        i = i_6;
                        
                        if rax_13 == 0
                        {
                            i = 0x110000;
                        }
                        
                        r14_1 = 1;
                    }
                }
                
                uu_od::parse_formats::od_format_type::h6c27c20666861ca9(&var_100, r12_1);
                let rax_14: i64 = var_100;
                
                if rax_14 == 3
                {
                    let var_40_1: i64 = arg2;
                    let var_38_1: i64 = arg3;
                    let mut var_48: *mut i8 = &var_135;
                    uu_od::parse_formats::parse_type_string::_$u7b$$u7b$closure$u7d$$u7d$::hc6eb34f6de81c0fa(&var_118, &var_48);
                    let zmm0_2: i128 = var_118;
                    let var_98_2: i128 = zmm0_2;
                    let var_88_2: i64 = var_108;
                    arg1[3] = var_108;
                    *arg1.byte_offset(8) = zmm0_2;
                    *arg1 = 1;
                    return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$uu_od..parse_formats..ParsedFormatterItemInfo$GT$$GT$::hf096e71933bd90a6(&var_d8);
                }
                
                let zmm0_1: i128 = var_f8;
                let var_98_1: i128 = zmm0_1;
                let var_e8: i64;
                let var_88_1: i64 = var_e8;
                var_f8 = zmm0_1;
                var_100 = rax_14;
                let var_e0_1: u8 = r14_1;
                alloc::vec::Vec$LT$T$C$A$GT$::push::hdb693d9c78fd2861(&var_d8, &var_100);
            } while i != 0x110000;
        }
    }
    
    arg1[3] = result;
    *arg1.byte_offset(8) = var_d8;
    *arg1 = 0;
    result
}
