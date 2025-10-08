
  fn just::parser::Parser::parse_body::h8d13522a5ff247cf(arg1: *mut i8, arg2: *mut c_void) -> u64

{
    let mut var_178: i64 = 0;
    let result_2: u64 = 8;
    let var_168: i64 = 0;
    let mut result_1: i8;
    just::parser::Parser::accepted::h762a87b5f98dff30(&result_1, arg2, 0x19);
    let mut result: u64 = result_1;
    let mut var_1b0: i8;
    let mut rcx: i8 = var_1b0;
    let mut var_1f7: i128;
    let mut var_1e7: i128;
    let mut var_1d7: i128;
    let mut var_1c7: i128;
    let var_1b8: i64;
    let mut var_1af: i32;
    
    if rcx != 0x25
    {
        'label_6807d8:
        *arg1.byte_offset(0x40) = var_1b8;
        *arg1.byte_offset(0x31) = var_1c7;
        *arg1.byte_offset(0x21) = var_1d7;
        *arg1.byte_offset(0x11) = var_1e7;
        *arg1.byte_offset(1) = var_1f7;
        *arg1.byte_offset(0x49) = var_1af;
        *arg1.byte_offset(0x4c) = var_1af;
        *arg1 = result;
        arg1[0x48] = rcx;
        return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$just..line..Line$GT$$GT$::hfb7be3c1bcd7265c(&var_178);
    }
    
    let mut r15_1: i64;
    
    if (result & 1) == 0
    {
        r15_1 = 0;
    }
    else
    {
        loop
        {
            just::parser::Parser::accepted::h762a87b5f98dff30(&result_1, arg2, 0x11);
            result = result_1;
            rcx = var_1b0;
            
            if rcx != 0x25
            {
                goto 'label_6807d8;
            }
            
            if (result & 1) != 0
            {
                result = result_2;
                r15_1 = var_168;
                let rcx_8: i64 = r15_1 << 5;
                let mut rsi_17: i64;
                rsi_17 = result + rcx_8 == 0x20;
                rsi_17 |= r15_1 == 0;
                
                if rsi_17 == 0
                {
                    let mut r15_2: i64 = r15_1 - 1;
                    let mut result_3: u64 = rcx_8 + result - 0x40;
                    
                    while *(result_3 + 0x30) == 0
                    {
                        var_1f7 = *(result_3 + 0x30);
                        result_1 = *(result_3 + 0x20);
                        result = core::ptr::drop_in_place$LT$core..option..Option$LT$just..line..Line$GT$$GT$::h351018a9bb1aa703(&result_1);
                        let temp0_1: i64 = r15_2;
                        r15_2 -= 1;
                        
                        if temp0_1 < 1
                        {
                            break;
                        }
                        
                        result = result_3 - 0x20;
                        let cond:0_1: bool = result_3 != 0;
                        result_3 = result;
                        
                        if !cond:0_1
                        {
                            break;
                        }
                    }
                    
                    r15_1 = r15_2 + 1;
                }
                
                break;
            }
            
            let mut var_160: i64 = 0;
            let var_158_1: i64 = 8;
            let var_150_1: i64 = 0;
            let rax: i64 = *arg2.byte_offset(0x58);
            let mut rbp_1: i64;
            
            if rax >= *arg2.byte_offset(0x20)
            {
                rbp_1 = 0;
            }
            else
            {
                rbp_1 = *(*arg2.byte_offset(0x18) + rax * 0x48 + 0x30);
            }
            
            just::parser::Parser::accepted::h762a87b5f98dff30(&result_1, arg2, 0x14);
            let mut result_4: i8 = result_1;
            let mut rcx_2: i8 = var_1b0;
            
            if rcx_2 != 0x25
            {
                'label_680840:
                *arg1.byte_offset(0x40) = var_1b8;
                *arg1.byte_offset(0x31) = var_1c7;
                *arg1.byte_offset(0x21) = var_1d7;
                *arg1.byte_offset(0x11) = var_1e7;
                *arg1.byte_offset(1) = var_1f7;
                *arg1.byte_offset(0x49) = var_1af;
                *arg1.byte_offset(0x4c) = var_1af;
                *arg1 = result_4;
                arg1[0x48] = rcx_2;
                'label_68097c:
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$just..fragment..Fragment$GT$$GT$::h81de7fdfd3ee3ff6(&var_160);
                return core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$just..line..Line$GT$$GT$::hfb7be3c1bcd7265c(&var_178);
            }
            
            if (result_4 & 1) == 0
            {
                loop
                {
                    just::parser::Parser::accepted::h762a87b5f98dff30(&result_1, arg2, 0x14);
                    result_4 = result_1;
                    rcx_2 = var_1b0;
                    
                    if rcx_2 != 0x25
                    {
                        goto 'label_680840;
                    }
                    
                    if (result_4 & 1) != 0
                    {
                        break;
                    }
                    
                    if just::parser::Parser::next_is::hc7c4171067e02951(arg2, 0x11) != 0
                    {
                        break;
                    }
                    
                    just::parser::Parser::accept::hbdbbefbcb8377711(&result_1, arg2, 0x22);
                    let zmm0_3: i128 = result_1;
                    let rax_4: i8 = var_1b8;
                    let rsi_6: i32 = *var_1b8[4];
                    let var_200_1: i32 = *var_1b8[1];
                    
                    if var_1b0 != 0x25
                    {
                        *arg1.byte_offset(0x4c) = var_1af;
                        *arg1.byte_offset(0x49) = var_1af;
                        *arg1.byte_offset(0x30) = var_1d7;
                        *arg1.byte_offset(0x20) = var_1e7;
                        *arg1.byte_offset(0x10) = var_1f7;
                        *arg1 = zmm0_3;
                        *arg1.byte_offset(0x44) = rsi_6;
                        *arg1.byte_offset(0x41) = rsi_6;
                        arg1[0x40] = rax_4;
                        arg1[0x48] = var_1b0;
                        goto 'label_68097c;
                    }
                    
                    if rax_4 != 0x25
                    {
                        var_1c7 = var_1d7;
                        var_1d7 = var_1e7;
                        var_1e7 = var_1f7;
                        var_1f7 = zmm0_3;
                        var_1af = rsi_6;
                        var_1af = rsi_6;
                        var_1b0 = rax_4;
                        result_1 = 0x12;
                        alloc::vec::Vec$LT$T$C$A$GT$::push::h8c5e03d2ce7d530c(&var_160, &result_1);
                    }
                    else
                    {
                        just::parser::Parser::accepted::h762a87b5f98dff30(&result_1, arg2, 0x1b);
                        result_4 = result_1;
                        rcx_2 = var_1b0;
                        
                        if rcx_2 != 0x25
                        {
                            goto 'label_680840;
                        }
                        
                        let mut var_b8: i128;
                        
                        if (result_4 & 1) == 0
                        {
                            just::parser::Parser::unexpected_token::hbee08644eef5d075(&result_1, 
                                arg2);
                            let zmm0_6: i128 = var_1b0;
                            let var_78_1: i128 = zmm0_6;
                            let var_88_1: i128 = var_1c7;
                            let var_98_1: i128 = var_1d7;
                            let var_a8_1: i128 = var_1e7;
                            var_b8 = var_1f7;
                            *arg1.byte_offset(0x40) = zmm0_6;
                            *arg1.byte_offset(0x30) = var_1c7;
                            *arg1.byte_offset(0x20) = var_1d7;
                            *arg1.byte_offset(0x10) = var_1e7;
                            *arg1 = var_1f7;
                            goto 'label_68097c;
                        }
                        
                        just::parser::Parser::parse_expression::h8b701a5fe27dff96(&result_1, arg2);
                        let rax_5: i64 = result_1;
                        let var_c8_1: i128 = var_1b0;
                        
                        if rax_5 == 0x12
                        {
                            *arg1.byte_offset(0x40) = var_c8_1;
                            *arg1.byte_offset(0x30) = var_1c7;
                            *arg1.byte_offset(0x20) = var_1d7;
                            *arg1.byte_offset(0x10) = var_1e7;
                            *arg1 = var_1f7;
                            goto 'label_68097c;
                        }
                        
                        let var_180: i64;
                        let var_40_1: i64 = var_180;
                        let var_190: i128;
                        let var_50_1: i128 = var_190;
                        let var_1a0: i128;
                        let var_60_1: i128 = var_1a0;
                        let var_78: i128 = var_c8_1;
                        let var_88: i128 = var_1c7;
                        let var_98: i128 = var_1d7;
                        let var_a8: i128 = var_1e7;
                        let var_b0_1: i128 = var_1f7;
                        var_b8 = rax_5;
                        alloc::vec::Vec$LT$T$C$A$GT$::push::h8c5e03d2ce7d530c(&var_160, &var_b8);
                        just::parser::Parser::expect::h35e1151927597ac7(&result_1, arg2, 0x1a);
                        
                        if var_1b0 != 0x25
                        {
                            let rcx_6: i64 = result_1;
                            var_b8 = *var_1b8[1];
                            *var_b8[3] = *var_1b8[4];
                            *arg1.byte_offset(0x4c) = var_1af;
                            *arg1.byte_offset(0x49) = var_1af;
                            let rdi_15: i32 = var_b8;
                            *arg1.byte_offset(0x44) = *var_b8[3];
                            *arg1.byte_offset(0x41) = rdi_15;
                            *arg1 = rcx_6;
                            *arg1.byte_offset(8) = var_1f7;
                            *arg1.byte_offset(0x18) = var_1e7;
                            *arg1.byte_offset(0x28) = var_1d7;
                            *arg1.byte_offset(0x38) = *var_1c7[7];
                            arg1[0x40] = var_1b8;
                            arg1[0x48] = var_1b0;
                            goto 'label_68097c;
                        }
                    }
                }
            }
            
            *var_1f7[0xf] = var_150_1;
            result_1 = var_160;
            *var_1e7[7] = rbp_1;
            alloc::vec::Vec$LT$T$C$A$GT$::push::hbfd0e6f07563321a(&var_178, &result_1);
        }
    }
    
    let var_168_1: i64 = r15_1;
    *arg1.byte_offset(0x10) = r15_1;
    *arg1 = var_178;
    arg1[0x48] = 0x25;
    result
}
