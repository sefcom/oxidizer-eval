
  fn just::parser::Parser::parse_conditional::ha3af2d2e81215f39(arg1: *mut i64, arg2: *mut c_void) -> u64

{
    let mut var_288: i128;
    just::parser::Parser::parse_condition::h084dccdf2ccc72f1(&var_288, arg2);
    let result_1: i8;
    let mut result: u64 = result_1;
    let var_278: i128;
    let var_268: i128;
    let var_258: i128;
    let mut var_248: i64;
    let var_23f: i32;
    let var_23c: i32;
    let mut var_208: i128;
    
    if result != 0x25
    {
        var_208 = var_288;
        *arg1.byte_offset(0x54) = var_23c;
        *arg1.byte_offset(0x51) = var_23f;
        arg1[9] = var_248;
        let zmm0: i128 = var_208;
        *arg1.byte_offset(0x38) = var_258;
        *arg1.byte_offset(0x28) = var_268;
        *arg1.byte_offset(0x18) = var_278;
        *arg1.byte_offset(8) = zmm0;
        arg1[0xa] = result;
        *arg1 = 0x12;
    }
    else
    {
        let mut var_188: i128 = var_288;
        just::parser::Parser::expect::h35e1151927597ac7(&var_288, arg2, 7);
        
        if result_1 != 0x25
        {
            let rcx_5: i64 = var_288;
            let zmm0_1: i128 = var_288;
            var_208 = *var_248[1];
            *var_208[3] = *var_248[4];
            *arg1.byte_offset(0x54) = var_23c;
            *arg1.byte_offset(0x51) = var_23f;
            let rdi_7: i32 = var_208;
            *arg1.byte_offset(0x4c) = *var_208[3];
            *arg1.byte_offset(0x49) = rdi_7;
            arg1[1] = rcx_5;
            *arg1.byte_offset(0x10) = zmm0_1;
            *arg1.byte_offset(0x20) = var_278;
            *arg1.byte_offset(0x30) = var_268;
            arg1[8] = *var_258[8];
            arg1[9] = var_248;
            arg1[0xa] = result_1;
            *arg1 = 0x12;
            return core::ptr::drop_in_place$LT$just..condition..Condition$GT$::ha2d00dd0ebfcec0c(
                &var_188);
        }
        
        just::parser::Parser::parse_expression::h8b701a5fe27dff96(&var_288, arg2);
        let rax_2: i64 = var_288;
        var_208 = var_288;
        let mut var_1c8: i64;
        var_1c8 = result_1;
        let mut zmm0_2: i128;
        
        if rax_2 == 0x12
        {
            *arg1.byte_offset(0x48) = var_1c8;
            zmm0_2 = var_208;
            *arg1.byte_offset(0x38) = var_258;
            *arg1.byte_offset(0x28) = var_268;
            *arg1.byte_offset(0x18) = var_278;
            *arg1.byte_offset(8) = zmm0_2;
            *arg1 = 0x12;
            return core::ptr::drop_in_place$LT$just..condition..Condition$GT$::ha2d00dd0ebfcec0c(
                &var_188);
        }
        
        let var_210: i64;
        let var_20_1: i64 = var_210;
        let var_90_1: i128 = var_208;
        zmm0_2 = var_1c8;
        let mut var_98: i64 = rax_2;
        just::parser::Parser::expect::h35e1151927597ac7(&var_288, arg2, 8);
        let mut result_2: i8 = result_1;
        
        if result_2 != 0x25
        {
            'label_67c1c6:
            let rcx_8: i64 = var_288;
            let zmm0_3: i128 = var_288;
            var_208 = *var_248[1];
            *var_208[3] = *var_248[4];
            *arg1.byte_offset(0x54) = var_23c;
            *arg1.byte_offset(0x51) = var_23f;
            let rdi_18: i32 = var_208;
            *arg1.byte_offset(0x4c) = *var_208[3];
            *arg1.byte_offset(0x49) = rdi_18;
            arg1[1] = rcx_8;
            *arg1.byte_offset(0x10) = zmm0_3;
            *arg1.byte_offset(0x20) = var_278;
            *arg1.byte_offset(0x30) = var_268;
            arg1[8] = *var_258[8];
            arg1[9] = var_248;
            arg1[0xa] = result_2;
            'label_67c238:
            *arg1 = 0x12;
            core::ptr::drop_in_place$LT$just..expression..Expression$GT$::hb406b3c1dd72713e(
                &var_98);
            return core::ptr::drop_in_place$LT$just..condition..Condition$GT$::ha2d00dd0ebfcec0c(
                &var_188);
        }
        
        just::parser::Parser::expect_keyword::h29d7686c3c631ba9(&var_288, arg2, 9);
        let mut zmm0_4: i128;
        let mut zmm1_4: i128;
        let mut zmm2_4: i128;
        let mut zmm3_3: i128;
        
        if result_1 != 0x25
        {
            *arg1.byte_offset(0x48) = var_248;
            zmm0_4 = var_288;
            zmm1_4 = var_278;
            zmm2_4 = var_268;
            zmm3_3 = var_258;
            'label_67c0c3:
            *arg1.byte_offset(0x38) = zmm3_3;
            *arg1.byte_offset(0x28) = zmm2_4;
            *arg1.byte_offset(0x18) = zmm1_4;
            *arg1.byte_offset(8) = zmm0_4;
            goto 'label_67c238;
        }
        
        just::parser::Parser::accepted_keyword::h41084b1fcaf79f7b(&var_288, arg2, 0xd);
        let rax_3: i8 = var_288;
        
        if result_1 != 0x25
        {
            arg1[9] = var_248;
            let zmm0_5: i128 = var_288;
            *arg1.byte_offset(0x39) = var_258;
            *arg1.byte_offset(0x29) = var_268;
            *arg1.byte_offset(0x19) = var_278;
            *arg1.byte_offset(9) = zmm0_5;
            *arg1.byte_offset(0x51) = var_23f;
            *arg1.byte_offset(0x54) = var_23c;
            arg1[1] = rax_3;
            arg1[0xa] = result_1;
            goto 'label_67c238;
        }
        
        let mut var_230: i128;
        let mut var_220: i128;
        let mut var_118: i64;
        let mut var_110: i128;
        let mut var_100: i128;
        let mut var_f0: i128;
        let mut var_e0: i128;
        let mut var_d0: i128;
        let mut var_c0: i128;
        let mut var_b0: i128;
        
        if (rax_3 & 1) == 0
        {
            just::parser::Parser::expect::h35e1151927597ac7(&var_288, arg2, 7);
            result_2 = result_1;
            
            if result_2 != 0x25
            {
                goto 'label_67c1c6;
            }
            
            just::parser::Parser::parse_expression::h8b701a5fe27dff96(&var_288, arg2);
            let rax_5: i64 = var_288;
            let mut var_168_1: i128 = var_288;
            let var_128_1: i128 = result_1;
            
            if rax_5 == 0x12
            {
                *arg1.byte_offset(0x48) = var_128_1;
                zmm0_4 = var_168_1;
                zmm1_4 = var_278;
                zmm2_4 = var_268;
                zmm3_3 = var_258;
                goto 'label_67c0c3;
            }
            
            let var_190_1: i64 = var_210;
            var_208 = var_168_1;
            var_208 = rax_5;
            just::parser::Parser::expect::h35e1151927597ac7(&var_288, arg2, 8);
            
            if result_1 != 0x25
            {
                let rcx_12: i64 = var_288;
                zmm0_4 = var_288;
                var_168_1 = *var_248[1];
                *var_168_1[3] = *var_248[4];
                *arg1.byte_offset(0x54) = var_23c;
                *arg1.byte_offset(0x51) = var_23f;
                *arg1.byte_offset(0x4c) = *var_168_1[3];
                *arg1.byte_offset(0x49) = var_168_1;
                arg1[1] = rcx_12;
                *arg1.byte_offset(0x10) = zmm0_4;
                *arg1.byte_offset(0x20) = var_278;
                *arg1.byte_offset(0x30) = var_268;
                arg1[8] = *var_258[8];
                arg1[9] = var_248;
                arg1[0xa] = result_1;
                *arg1 = 0x12;
                core::ptr::drop_in_place$LT$just..expression..Expression$GT$::hb406b3c1dd72713e(
                    &var_208);
                core::ptr::drop_in_place$LT$just..expression..Expression$GT$::hb406b3c1dd72713e(
                    &var_98);
                return 
                    core::ptr::drop_in_place$LT$just..condition..Condition$GT$::ha2d00dd0ebfcec0c(
                    &var_188);
            }
            
            var_118 = var_208;
            var_110 = var_278;
            var_100 = var_268;
            var_f0 = var_258;
            var_e0 = var_1c8;
            var_d0 = var_128_1;
            var_c0 = var_230;
            var_b0 = var_220;
        }
        else
        {
            just::parser::Parser::parse_conditional::ha3af2d2e81215f39(&var_288, arg2);
            let rax_4: i64 = var_288;
            var_208 = var_288;
            var_1c8 = result_1;
            
            if rax_4 == 0x12
            {
                *arg1.byte_offset(0x48) = var_1c8;
                zmm0_4 = var_208;
                zmm1_4 = var_278;
                zmm2_4 = var_268;
                zmm3_3 = var_258;
                goto 'label_67c0c3;
            }
            
            let var_a0_1: i64 = var_210;
            var_b0 = var_220;
            var_c0 = var_230;
            var_110 = var_208;
            var_100 = var_278;
            var_f0 = var_268;
            var_e0 = var_258;
            var_d0 = var_1c8;
            var_118 = rax_4;
        }
        
        let var_238_1: i128 = zmm0_2;
        var_248 = var_258;
        let var_258_1: i128 = var_268;
        let var_268_1: i128 = var_278;
        let var_278_1: i128 = var_90_1;
        var_288 = var_98;
        let rax_6: u64 = alloc::boxed::Box$LT$T$GT$::new::h35f8c50f78073f7a(&var_288);
        var_208 = rax_6;
        var_220 = var_b0;
        var_230 = var_c0;
        let var_238_2: i128 = var_d0;
        var_248 = var_e0;
        let var_258_2: i128 = var_f0;
        let var_268_2: i128 = var_100;
        let var_278_2: i128 = var_110;
        var_288 = var_118;
        result = alloc::boxed::Box$LT$T$GT$::new::h35f8c50f78073f7a(&var_288);
        arg1[5] = var_278;
        *arg1.byte_offset(0x18) = var_188;
        *arg1 = 0xc;
        arg1[1] = rax_6;
        arg1[2] = result;
    }
    result
}
