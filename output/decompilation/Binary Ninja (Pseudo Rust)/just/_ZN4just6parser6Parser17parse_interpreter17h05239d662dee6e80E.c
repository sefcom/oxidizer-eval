
  fn just::parser::Parser::parse_interpreter::h05239d662dee6e80(arg1: *mut i128, arg2: *mut c_void) -> u64

{
    let mut var_118: i64;
    just::parser::Parser::expect::h35e1151927597ac7(&var_118, arg2, 9);
    let result_1: i8;
    let mut result: u64 = result_1;
    let mut var_110: i128;
    let var_100: i128;
    let var_f0: i128;
    let mut var_e0: i64;
    let var_d8: i8;
    let var_d7: i32;
    let var_cf: i32;
    let var_cc: i32;
    let mut var_c8: i32;
    
    if result != 0x25
    {
        let rcx: i64 = var_118;
        var_c8 = var_d7;
        var_c8 = var_d7;
        *arg1.byte_offset(0x4c) = var_cc;
        *arg1.byte_offset(0x49) = var_cf;
        let rdi_12: i32 = var_c8;
        *arg1.byte_offset(0x44) = var_c8;
        *arg1.byte_offset(0x41) = rdi_12;
        *arg1 = rcx;
        *arg1.byte_offset(8) = var_110;
        *arg1.byte_offset(0x18) = var_100;
        *arg1.byte_offset(0x28) = var_f0;
        *arg1.byte_offset(0x38) = var_e0;
        arg1[4] = var_d8;
        *arg1.byte_offset(0x48) = result;
    }
    else
    {
        just::parser::Parser::parse_string_literal::h7c39b9a6292fbece(&var_118, arg2);
        result = result_1;
        
        if result != 0x25
        {
            var_c8 = var_118;
            *arg1.byte_offset(0x4c) = var_cc;
            *arg1.byte_offset(0x49) = var_cf;
            arg1[4] = var_d8;
            let zmm0_1: i128 = var_c8;
            arg1[3] = var_f0;
            arg1[2] = var_100;
            arg1[1] = var_110;
            *arg1 = zmm0_1;
            *arg1.byte_offset(0x48) = result;
        }
        else
        {
            let mut var_68: i128 = var_118;
            let var_58_1: i128 = var_110;
            let mut var_80: i64 = 0;
            let var_78_1: i64 = 8;
            let var_70_1: i64 = 0;
            just::parser::Parser::accepted::h762a87b5f98dff30(&var_118, arg2, 0xf);
            let mut rax: i8 = var_118;
            let mut result_3: i8 = result_1;
            
            if result_3 != 0x25
            {
                'label_681c6e:
                arg1[4] = var_d8;
                let zmm0_2: i128 = *var_118[1];
                *arg1.byte_offset(0x31) = var_f0;
                *arg1.byte_offset(0x21) = var_100;
                *arg1.byte_offset(0x11) = var_110;
                *arg1.byte_offset(1) = zmm0_2;
                *arg1.byte_offset(0x49) = var_cf;
                *arg1.byte_offset(0x4c) = var_cc;
                *arg1 = rax;
                *arg1.byte_offset(0x48) = result_3;
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$just..string_literal..StringLiteral$GT$$GT$::hdeab20929d510684(&var_80);
                return core::ptr::drop_in_place$LT$just..string_literal..StringLiteral$GT$::hf0f71171f0974aed(&var_68);
            }
            
            let mut result_2: i8;
            
            if (rax & 1) != 0
            {
                loop
                {
                    if just::parser::Parser::next_is::hc7c4171067e02951(arg2, 0xa) != 0
                    {
                        goto 'label_681af5;
                    }
                    
                    just::parser::Parser::parse_string_literal::h7c39b9a6292fbece(&var_118, arg2);
                    result_2 = result_1;
                    
                    if result_2 != 0x25
                    {
                        var_c8 = var_118;
                        *arg1.byte_offset(0x4c) = var_cc;
                        *arg1.byte_offset(0x49) = var_cf;
                        arg1[4] = var_d8;
                        let zmm0_3: i128 = var_c8;
                        arg1[3] = var_f0;
                        arg1[2] = var_100;
                        arg1[1] = var_110;
                        *arg1 = zmm0_3;
                        break;
                    }
                    
                    let var_a8_1: i128 = var_100;
                    let var_b8_1: i128 = var_110;
                    var_c8 = var_118;
                    alloc::vec::Vec$LT$T$C$A$GT$::push::h0b203acee3eb68a4(&var_80, &var_c8);
                    just::parser::Parser::accepted::h762a87b5f98dff30(&var_118, arg2, 0xf);
                    rax = var_118;
                    result_3 = result_1;
                    
                    if result_3 != 0x25
                    {
                        goto 'label_681c6e;
                    }
                    
                    if (rax & 1) == 0
                    {
                        goto 'label_681af5;
                    }
                }
                
                goto 'label_681d89;
            }
            
            'label_681af5:
            just::parser::Parser::expect::h35e1151927597ac7(&var_118, arg2, 0xa);
            result_2 = result_1;
            
            if result_2 != 0x25
            {
                let rcx_5: i64 = var_118;
                var_c8 = var_d7;
                var_c8 = var_d7;
                *arg1.byte_offset(0x4c) = var_cc;
                *arg1.byte_offset(0x49) = var_cf;
                let rdi_17: i32 = var_c8;
                *arg1.byte_offset(0x44) = var_c8;
                *arg1.byte_offset(0x41) = rdi_17;
                *arg1 = rcx_5;
                *arg1.byte_offset(8) = var_110;
                *arg1.byte_offset(0x18) = var_100;
                *arg1.byte_offset(0x28) = var_f0;
                *arg1.byte_offset(0x38) = var_e0;
                arg1[4] = var_d8;
                'label_681d89:
                *arg1.byte_offset(0x48) = result_2;
                core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$just..string_literal..StringLiteral$GT$$GT$::hdeab20929d510684(&var_80);
                return core::ptr::drop_in_place$LT$just..string_literal..StringLiteral$GT$::hf0f71171f0974aed(&var_68);
            }
            
            *var_110[8] = var_70_1;
            let zmm0_4: i128 = var_80;
            var_118 = zmm0_4;
            let zmm1_4: i128 = var_68;
            var_e0 = var_100;
            *arg1 = zmm0_4;
            arg1[4] = var_d8;
            arg1[3] = var_58_1;
            arg1[2] = zmm1_4;
            arg1[1] = *var_110[8];
            result = zmm1_4;
            *arg1.byte_offset(0x18) = result;
            *arg1.byte_offset(0x48) = 0x25;
        }
    }
    result
}
