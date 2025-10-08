
  fn just::parser::Parser::parse_namepath::hf7b725240a87d50f(arg1: *mut i128, arg2: *mut c_void) -> u64

{
    let mut var_130: i128;
    just::parser::Parser::parse_name::he2804e36e47b7e10(&var_130, arg2);
    let result_1: i8;
    let mut result: u64 = result_1;
    let zmm0: i128 = var_130;
    let var_120: i128;
    let var_110: i128;
    let var_100: i128;
    let var_f0: i64;
    let var_e7: i32;
    
    if result != 0x25
    {
        *arg1.byte_offset(0x4c) = var_e7;
        *arg1.byte_offset(0x49) = var_e7;
        arg1[4] = var_f0;
        arg1[3] = var_100;
        arg1[2] = var_110;
        arg1[1] = var_120;
        *arg1 = zmm0;
        *arg1.byte_offset(0x48) = result;
    }
    else
    {
        let mut var_c8: i128 = zmm0;
        let var_b8_1: i128 = var_120;
        let var_a8_1: i128 = var_110;
        let var_98_1: i128 = var_100;
        let var_88_1: i64 = var_f0;
        let mut var_e0: i128;
        _$LT$just..namepath..Namepath$u20$as$u20$core..convert..From$LT$just..name..Name$GT$$GT$::from::ha528c6c76d40d3db(&var_e0, &var_c8);
        
        loop
        {
            just::parser::Parser::accepted::h762a87b5f98dff30(&var_130, arg2, 0xd);
            let rax_1: i8 = var_130;
            
            if result_1 != 0x25
            {
                arg1[4] = var_f0;
                let zmm0_1: i128 = var_130;
                *arg1.byte_offset(0x31) = var_100;
                *arg1.byte_offset(0x21) = var_110;
                *arg1.byte_offset(0x11) = var_120;
                *arg1.byte_offset(1) = zmm0_1;
                *arg1.byte_offset(0x49) = var_e7;
                *arg1.byte_offset(0x4c) = var_e7;
                *arg1 = rax_1;
                *arg1.byte_offset(0x48) = result_1;
            }
            else
            {
                if (rax_1 & 1) == 0
                {
                    let result_2: u64;
                    result = result_2;
                    arg1[1] = result;
                    *arg1 = var_e0;
                    *arg1.byte_offset(0x48) = 0x25;
                    break;
                }
                
                just::parser::Parser::parse_name::he2804e36e47b7e10(&var_130, arg2);
                let zmm0_2: i128 = var_130;
                
                if result_1 != 0x25
                {
                    *arg1.byte_offset(0x4c) = var_e7;
                    *arg1.byte_offset(0x49) = var_e7;
                    arg1[4] = var_f0;
                    arg1[3] = var_100;
                    arg1[2] = var_110;
                    arg1[1] = var_120;
                    *arg1 = zmm0_2;
                    *arg1.byte_offset(0x48) = result_1;
                }
                else
                {
                    let mut var_78: i128 = zmm0_2;
                    let var_68_1: i128 = var_120;
                    let var_58_1: i128 = var_110;
                    let var_48_1: i128 = var_100;
                    let var_38_1: i64 = var_f0;
                    just::namepath::Namepath::push::h895d03166c8ee08b(&var_e0, &var_78);
                    continue;
                }
            }
            
            return core::ptr::drop_in_place$LT$just..namepath..Namepath$GT$::h15a9b2a7c35752fb(
                &var_e0);
        }
    }
    result
}
