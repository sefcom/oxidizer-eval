
  fn just::parser::Parser::parse_expression::h8b701a5fe27dff96(arg1: *mut i64, arg2: *mut c_void) -> u64

{
    let rax: i64 = *arg2.byte_offset(0x60);
    let mut result: u64;
    let mut var_2b8: i64;
    let var_2b0: i128;
    let var_2a0: i128;
    let var_290: i128;
    let mut var_280: i128;
    let var_270: i128;
    let mut var_1d8: i128;
    
    if rax != 0x100
    {
        *arg2.byte_offset(0x60) = rax + 1;
        result = just::parser::Parser::parse_disjunct::h236ac2fbfe4c77df(&var_2b8, arg2);
        let mut r12_1: i64 = var_2b8;
        
        if r12_1 != 0x12
        {
            var_1d8 = var_2b0;
            let var_1a8: i128 = var_280;
            var_1d8 = r12_1;
            just::parser::Parser::accepted::h762a87b5f98dff30(&var_2b8, arg2, 6);
            let rax_4: i8 = var_2b8;
            let rcx_4: i8 = var_270;
            
            if rcx_4 != 0x25
            {
                arg1[9] = *var_280[8];
                let zmm0_2: i128 = *var_2b8[1];
                *arg1.byte_offset(0x39) = var_290;
                *arg1.byte_offset(0x29) = var_2a0;
                *arg1.byte_offset(0x19) = var_2b0;
                *arg1.byte_offset(9) = zmm0_2;
                *arg1.byte_offset(0x51) = *var_270[1];
                *arg1.byte_offset(0x54) = *var_270[4];
                arg1[1] = rax_4;
                arg1[0xa] = rcx_4;
                *arg1 = 0x12;
                return 
                    core::ptr::drop_in_place$LT$just..expression..Expression$GT$::hb406b3c1dd72713e(
                    &var_1d8);
            }
            
            let mut var_158: i128;
            let mut var_148: i128;
            let mut var_138: i128;
            let mut var_128: i128;
            let mut var_118: i128;
            let mut var_108: i128;
            let mut result_1: u64;
            let mut rax_7: u64;
            let mut r15_1: u64;
            let var_260: i128;
            let var_250: i128;
            let result_2: u64;
            
            if (rax_4 & 1) == 0
            {
                r15_1 = *var_1d8[8];
                rax_7 = var_2a0;
                var_158 = var_2a0;
                var_148 = var_290;
                var_138 = var_1a8;
                var_128 = var_270;
                var_118 = var_260;
                var_108 = var_250;
                result_1 = result_2;
            }
            else
            {
                alloc::collections::btree::map::BTreeMap$LT$K$C$V$C$A$GT$::insert::hdc60f8c84685f8f9(arg2.byte_offset(0x68), 1);
                let var_198: i64;
                var_280 = var_198;
                var_2b8 = var_1d8;
                let rax_5: u64 = alloc::boxed::Box$LT$T$GT$::new::h35f8c50f78073f7a(&var_2b8);
                r15_1 = rax_5;
                let mut var_1e0: u64 = rax_5;
                just::parser::Parser::parse_expression::h8b701a5fe27dff96(&var_2b8, arg2);
                let rax_6: i64 = var_2b8;
                
                if rax_6 == 0x12
                {
                    *arg1.byte_offset(0x48) = var_270;
                    *arg1.byte_offset(0x38) = var_280;
                    *arg1.byte_offset(0x28) = var_1a8;
                    *arg1.byte_offset(0x18) = var_290;
                    *arg1.byte_offset(8) = var_2a0;
                    *arg1 = 0x12;
                    return core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$just..expression..Expression$GT$$GT$::h95e5d821ad53849f(&var_1e0);
                }
                
                let result_3: u64 = result_2;
                let var_38_1: i128 = var_250;
                let var_48_1: i128 = var_260;
                let mut var_a0: i64 = rax_6;
                let var_98_1: i128 = var_2a0;
                let var_88_1: i128 = var_290;
                let var_78_1: i128 = var_1a8;
                let var_68_1: i128 = var_280;
                let var_58_1: i128 = var_270;
                rax_7 = alloc::boxed::Box$LT$T$GT$::new::h35f8c50f78073f7a(&var_a0);
                r12_1 = 0xf;
            }
            *arg2.byte_offset(0x60) -= 1;
            *arg1 = r12_1;
            arg1[1] = r15_1;
            arg1[2] = rax_7;
            *arg1.byte_offset(0x18) = var_158;
            *arg1.byte_offset(0x28) = var_148;
            *arg1.byte_offset(0x38) = var_138;
            *arg1.byte_offset(0x48) = var_128;
            *arg1.byte_offset(0x58) = var_118;
            *arg1.byte_offset(0x68) = var_108;
            result = result_1;
            arg1[0xf] = result;
        }
        else
        {
            *arg1.byte_offset(0x48) = var_270;
            *arg1.byte_offset(0x38) = var_280;
            *arg1.byte_offset(0x28) = var_290;
            *arg1.byte_offset(0x18) = var_2a0;
            *arg1.byte_offset(8) = var_2b0;
            *arg1 = 0x12;
        }
    }
    else
    {
        just::parser::Parser::next::h26f20bd451ef506f(&var_2b8, arg2);
        result = var_270;
        var_1d8 = var_2b8;
        let rcx_1: i64 = *var_280[8];
        
        if result != 0x25
        {
            *arg1.byte_offset(0x54) = *var_270[4];
            *arg1.byte_offset(0x51) = *var_270[1];
            arg1[9] = rcx_1;
            let zmm0: i128 = var_1d8;
            *arg1.byte_offset(0x38) = var_290;
            *arg1.byte_offset(0x28) = var_2a0;
            *arg1.byte_offset(0x18) = var_2b0;
            *arg1.byte_offset(8) = zmm0;
            arg1[0xa] = result;
            *arg1 = 0x12;
        }
        else
        {
            let mut var_e8: i128 = var_1d8;
            let var_d8_1: i128 = var_2b0;
            let var_c8_1: i128 = var_2a0;
            let var_b8_1: i128 = var_290;
            let var_a8_1: i64 = rcx_1;
            var_2b8 = -0x7fffffffffffffd1;
            result = just::compile_error::CompileError::new::hd7f8c5d37ebee6c9(&arg1[1], &var_e8, 
                &var_2b8);
            *arg1 = 0x12;
        }
    }
    result
}
