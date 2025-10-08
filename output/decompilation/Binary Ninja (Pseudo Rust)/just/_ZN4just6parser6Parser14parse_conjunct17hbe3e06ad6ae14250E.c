
  fn just::parser::Parser::parse_conjunct::hbe3e06ad6ae14250(arg1: *mut i64, arg2: *mut c_void) -> u64

{
    let mut result_1: bool;
    just::parser::Parser::accepted_keyword::h41084b1fcaf79f7b(&result_1, arg2, 0xd);
    let mut result: u64 = result_1;
    let var_2b0: i8;
    let mut rcx: i8 = var_2b0;
    let var_2f7: i128;
    let var_2e7: i128;
    let var_2d7: i128;
    let var_2c7: i128;
    let mut var_2b8: i64;
    let var_2af: i32;
    
    if rcx != 0x25
    {
        'label_67b623:
        arg1[9] = var_2b8;
        *arg1.byte_offset(0x39) = var_2c7;
        *arg1.byte_offset(0x29) = var_2d7;
        *arg1.byte_offset(0x19) = var_2e7;
        *arg1.byte_offset(9) = var_2f7;
        *arg1.byte_offset(0x51) = var_2af;
        *arg1.byte_offset(0x54) = var_2af;
        arg1[1] = result;
        arg1[0xa] = rcx;
        *arg1 = 0x12;
    }
    else
    {
        if (result & 1) != 0
        {
            /* tailcall */
            return just::parser::Parser::parse_conditional::ha3af2d2e81215f39(arg1, arg2);
        }
        
        just::parser::Parser::accepted::h762a87b5f98dff30(&result_1, arg2, 0x20);
        result = result_1;
        rcx = var_2b0;
        
        if rcx != 0x25
        {
            goto 'label_67b623;
        }
        
        let var_2a0: i128;
        let var_290: i128;
        let var_280: i64;
        let mut var_268: i128;
        let mut var_218: i128;
        
        if (result & 1) == 0
        {
            just::parser::Parser::parse_value::h216c4bdeb7f558a6(&result_1, arg2);
            result = result_1;
            var_268 = var_2f7;
            let var_228_1: i128 = var_2b0;
            
            if result != 0x12
            {
                let var_1a0_1: i64 = var_280;
                var_218 = var_268;
                var_218 = result;
                just::parser::Parser::accepted::h762a87b5f98dff30(&result_1, arg2, 0x20);
                result = result_1;
                let mut rcx_3: i8 = var_2b0;
                
                if rcx_3 != 0x25
                {
                    'label_67bad8:
                    arg1[9] = var_2b8;
                    *arg1.byte_offset(0x39) = var_2c7;
                    *arg1.byte_offset(0x29) = var_2d7;
                    *arg1.byte_offset(0x19) = var_2e7;
                    *arg1.byte_offset(9) = var_2f7;
                    *arg1.byte_offset(0x51) = var_2af;
                    *arg1.byte_offset(0x54) = var_2af;
                    arg1[1] = result;
                    arg1[0xa] = rcx_3;
                    *arg1 = 0x12;
                    return core::ptr::drop_in_place$LT$just..expression..Expression$GT$::hb406b3c1dd72713e(&var_218);
                }
                
                let mut var_270: u64;
                let var_1c8: i128;
                
                if (result & 1) == 0
                {
                    just::parser::Parser::accepted::h762a87b5f98dff30(&result_1, arg2, 0x1e);
                    result = result_1;
                    rcx_3 = var_2b0;
                    
                    if rcx_3 != 0x25
                    {
                        goto 'label_67bad8;
                    }
                    
                    if (result & 1) == 0
                    {
                        *arg1.byte_offset(0x70) = var_290;
                        *arg1.byte_offset(0x60) = var_2a0;
                        *arg1.byte_offset(0x50) = var_1c8;
                        *arg1.byte_offset(0x40) = var_228_1;
                        let zmm0_4: i128 = var_218;
                        *arg1.byte_offset(0x30) = var_2c7;
                        *arg1.byte_offset(0x20) = var_2d7;
                        *arg1.byte_offset(0x10) = var_2e7;
                        *arg1 = zmm0_4;
                    }
                    else
                    {
                        let var_2a8_2: i128 = var_1c8;
                        var_2b8 = var_228_1;
                        result_1 = var_218;
                        let rax_4: u64 =
                            alloc::boxed::Box$LT$T$GT$::new::h35f8c50f78073f7a(&result_1);
                        var_270 = rax_4;
                        just::parser::Parser::parse_conjunct::hbe3e06ad6ae14250(&result_1, arg2);
                        let rax_5: i64 = result_1;
                        var_268 = var_2e7;
                        let var_228_3: i128 = var_2b0;
                        
                        if rax_5 == 0x12
                        {
                            *arg1.byte_offset(0x48) = var_228_3;
                            let zmm0_6: i128 = var_268;
                            *arg1.byte_offset(0x38) = var_2c7;
                            *arg1.byte_offset(0x28) = var_2c7;
                            *arg1.byte_offset(0x18) = var_2d7;
                            *arg1.byte_offset(8) = zmm0_6;
                            *arg1 = 0x12;
                            return core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$just..expression..Expression$GT$$GT$::h95e5d821ad53849f(&var_270);
                        }
                        
                        let var_20_1: i64 = var_280;
                        let var_30_1: i128 = var_290;
                        let var_40_1: i128 = var_2a0;
                        let mut var_98: i64 = rax_5;
                        let var_90_1: i128 = var_268;
                        let var_80_1: i128 = var_2d7;
                        let var_70_1: i128 = var_2c7;
                        let var_60_1: i128 = var_2c7;
                        let var_50_1: i128 = var_228_3;
                        result = alloc::boxed::Box$LT$T$GT$::new::h35f8c50f78073f7a(&var_98);
                        *arg1 = 0xb;
                        arg1[1] = rax_4;
                        arg1[2] = result;
                    }
                }
                else
                {
                    let var_2a8_1: i128 = var_1c8;
                    var_2b8 = var_228_1;
                    result_1 = var_218;
                    let rax_2: u64 = alloc::boxed::Box$LT$T$GT$::new::h35f8c50f78073f7a(&result_1);
                    var_270 = rax_2;
                    just::parser::Parser::parse_conjunct::hbe3e06ad6ae14250(&result_1, arg2);
                    let rax_3: i64 = result_1;
                    var_268 = var_2e7;
                    let var_228_2: i128 = var_2b0;
                    
                    if rax_3 == 0x12
                    {
                        *arg1.byte_offset(0x48) = var_228_2;
                        let zmm0_5: i128 = var_268;
                        *arg1.byte_offset(0x38) = var_2c7;
                        *arg1.byte_offset(0x28) = var_2c7;
                        *arg1.byte_offset(0x18) = var_2d7;
                        *arg1.byte_offset(8) = zmm0_5;
                        *arg1 = 0x12;
                        return core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..boxed..Box$LT$just..expression..Expression$GT$$GT$$GT$::hf818742006b8584c(&var_270);
                    }
                    
                    let var_a0_1: i64 = var_280;
                    let var_b0_1: i128 = var_290;
                    let var_c0_1: i128 = var_2a0;
                    let mut var_118: i64 = rax_3;
                    let var_110_1: i128 = var_268;
                    let var_100_1: i128 = var_2d7;
                    let var_f0_1: i128 = var_2c7;
                    let var_e0_1: i128 = var_2c7;
                    let var_d0_1: i128 = var_228_2;
                    result = alloc::boxed::Box$LT$T$GT$::new::h35f8c50f78073f7a(&var_118);
                    *arg1 = 0xe;
                    arg1[1] = result;
                    arg1[2] = rax_2;
                }
            }
            else
            {
                *arg1.byte_offset(0x48) = var_228_1;
                let zmm0_3: i128 = var_268;
                *arg1.byte_offset(0x38) = var_2c7;
                *arg1.byte_offset(0x28) = var_2d7;
                *arg1.byte_offset(0x18) = var_2e7;
                *arg1.byte_offset(8) = zmm0_3;
                *arg1 = 0x12;
            }
        }
        else
        {
            var_268 = 0;
            just::parser::Parser::parse_conjunct::hbe3e06ad6ae14250(&result_1, arg2);
            let rax_1: i64 = result_1;
            var_218 = var_2f7;
            let var_1d8_1: i128 = var_2b0;
            
            if rax_1 == 0x12
            {
                *arg1.byte_offset(0x48) = var_1d8_1;
                let zmm0_2: i128 = var_218;
                *arg1.byte_offset(0x38) = var_2c7;
                *arg1.byte_offset(0x28) = var_2d7;
                *arg1.byte_offset(0x18) = var_2e7;
                *arg1.byte_offset(8) = zmm0_2;
                *arg1 = 0x12;
                return core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..boxed..Box$LT$just..expression..Expression$GT$$GT$$GT$::hf818742006b8584c(&var_268);
            }
            
            let var_120_1: i64 = var_280;
            let var_130_1: i128 = var_290;
            let var_140_1: i128 = var_2a0;
            let mut var_198: i64 = rax_1;
            let var_190_1: i128 = var_218;
            let var_180_1: i128 = var_2e7;
            let var_170_1: i128 = var_2d7;
            let var_160_1: i128 = var_2c7;
            let var_150_1: i128 = var_1d8_1;
            result = alloc::boxed::Box$LT$T$GT$::new::h35f8c50f78073f7a(&var_198);
            *arg1 = 0xe;
            arg1[1] = result;
            arg1[2] = 0;
        }
    }
    result
}
