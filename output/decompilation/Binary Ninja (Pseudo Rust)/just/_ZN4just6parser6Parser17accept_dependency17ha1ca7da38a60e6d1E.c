
  fn just::parser::Parser::accept_dependency::ha1ca7da38a60e6d1(arg1: *mut i128, arg2: *mut c_void) -> u64

{
    let mut var_260: i128;
    just::parser::Parser::accept_namepath::h8de08bec8d574b76(&var_260, arg2);
    let result_1: i8;
    let mut result: u64 = result_1;
    let var_250: i128;
    let var_240: i128;
    let var_230: i128;
    let var_220: i64;
    let var_217: i32;
    let var_214: i32;
    let mut zmm0: i128;
    
    if result != 0x25
    {
        zmm0 = var_260;
        *arg1.byte_offset(0x4c) = var_214;
        *arg1.byte_offset(0x49) = var_217;
        arg1[4] = var_220;
        arg1[3] = var_230;
        arg1[2] = var_240;
        arg1[1] = var_250;
        *arg1 = zmm0;
        *arg1.byte_offset(0x48) = result;
    }
    else
    {
        let result_2: u64 = var_250;
        zmm0 = var_260;
        let mut var_108: i128 = zmm0;
        let result_3: u64 = result_2;
        
        if !(0 + -(var_108))
        {
            result = result_2;
            *arg1.byte_offset(0x28) = result;
            *arg1.byte_offset(0x18) = zmm0;
            *arg1 = 0;
            *arg1.byte_offset(8) = 8;
            arg1[1] = 0;
        }
        else
        {
            just::parser::Parser::accepted::h762a87b5f98dff30(&var_260, arg2, 0x1c);
            result = var_260;
            
            if result_1 != 0x25
            {
                arg1[4] = var_220;
                let zmm0_1: i128 = var_260;
                *arg1.byte_offset(0x31) = var_230;
                *arg1.byte_offset(0x21) = var_240;
                *arg1.byte_offset(0x11) = var_250;
                *arg1.byte_offset(1) = zmm0_1;
                *arg1.byte_offset(0x49) = var_217;
                *arg1.byte_offset(0x4c) = var_214;
                *arg1 = result;
                *arg1.byte_offset(0x48) = result_1;
                return core::ptr::drop_in_place$LT$core..option..Option$LT$just..namepath..Namepath$GT$$GT$::h24538336dfc925c3(&var_108);
            }
            
            if (result & 1) != 0
            {
                just::parser::Parser::parse_namepath::hf7b725240a87d50f(&var_260, arg2);
                
                if result_1 != 0x25
                {
                    let zmm0_2: i128 = var_260;
                    *arg1.byte_offset(0x4c) = var_214;
                    *arg1.byte_offset(0x49) = var_217;
                    arg1[4] = var_220;
                    arg1[3] = var_230;
                    arg1[2] = var_240;
                    arg1[1] = var_250;
                    *arg1 = zmm0_2;
                    *arg1.byte_offset(0x48) = result_1;
                }
                else
                {
                    let mut var_178: i128 = var_260;
                    let mut var_1e0: i64 = 0;
                    let var_1d8_1: i64 = 8;
                    let var_1d0_1: i64 = 0;
                    
                    loop
                    {
                        just::parser::Parser::accepted::h762a87b5f98dff30(&var_260, arg2, 0x1d);
                        let rax_2: i8 = var_260;
                        let mut zmm0_3: i128;
                        
                        if result_1 != 0x25
                        {
                            arg1[4] = var_220;
                            zmm0_3 = var_260;
                            *arg1.byte_offset(0x31) = var_230;
                            *arg1.byte_offset(0x21) = var_240;
                            *arg1.byte_offset(0x11) = var_250;
                            *arg1.byte_offset(1) = zmm0_3;
                            *arg1.byte_offset(0x49) = var_217;
                            *arg1.byte_offset(0x4c) = var_214;
                            *arg1 = rax_2;
                            *arg1.byte_offset(0x48) = result_1;
                        }
                        else
                        {
                            if (rax_2 & 1) != 0
                            {
                                zmm0_3 = var_1e0;
                                let var_e8_1: i128 = zmm0_3;
                                let zmm1_4: i128 = var_178;
                                *arg1 = zmm0_3;
                                arg1[1] = var_1d0_1;
                                *arg1.byte_offset(0x18) = zmm1_4;
                                arg1[2] = *zmm1_4[8];
                                result = var_250;
                                *arg1.byte_offset(0x28) = result;
                                goto 'label_677d1f;
                            }
                            
                            just::parser::Parser::parse_expression::h8b701a5fe27dff96(&var_260, 
                                arg2);
                            let rax_3: i64 = var_260;
                            let var_1c8_1: i128 = var_260;
                            let mut var_188: i64;
                            var_188 = result_1;
                            
                            if rax_3 == 0x12
                            {
                                arg1[4] = var_188;
                                arg1[3] = var_230;
                                arg1[2] = var_240;
                                arg1[1] = var_250;
                                *arg1 = var_1c8_1;
                            }
                            else
                            {
                                let var_1e8: i64;
                                let var_38_1: i64 = var_1e8;
                                let var_1f8: i128;
                                let var_48_1: i128 = var_1f8;
                                let var_208: i128;
                                let var_58_1: i128 = var_208;
                                let mut var_b0: i64 = rax_3;
                                let var_68_1: i128 = var_188;
                                let var_78_1: i128 = var_230;
                                let var_88_1: i128 = var_240;
                                let var_98_1: i128 = var_250;
                                let var_a8_1: i128 = var_1c8_1;
                                alloc::vec::Vec$LT$T$C$A$GT$::push::he19d83f3939ac21c(&var_1e0, 
                                    &var_b0);
                                continue;
                            }
                        }
                        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$just..expression..Expression$GT$$GT$::hd865f9e8bf24b460(&var_1e0);
                        core::ptr::drop_in_place$LT$just..namepath..Namepath$GT$::h15a9b2a7c35752fb(
                            &var_178);
                        break;
                    }
                }
                
                return core::ptr::drop_in_place$LT$core..option..Option$LT$just..namepath..Namepath$GT$$GT$::h24538336dfc925c3(&var_108);
            }
            
            *arg1 = -0x8000000000000000;
        }
        
        'label_677d1f:
        *arg1.byte_offset(0x48) = 0x25;
    }
    result
}
