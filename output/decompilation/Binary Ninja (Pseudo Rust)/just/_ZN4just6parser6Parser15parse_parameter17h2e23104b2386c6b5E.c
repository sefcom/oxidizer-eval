
  fn just::parser::Parser::parse_parameter::h2e23104b2386c6b5(arg1: *mut u64, arg2: *mut c_void, arg3: i8) -> u64

{
    let mut var_168: i8;
    just::parser::Parser::accepted::h762a87b5f98dff30(&var_168, arg2, 0x12);
    let r15: i8 = var_168;
    let result_1: i8;
    let mut result: u64 = result_1;
    let var_167: i128;
    let var_157: i128;
    let var_147: i128;
    let var_137: i128;
    let var_128: i64;
    let var_11f: i32;
    
    if result != 0x25
    {
        arg1[9] = var_128;
        *arg1.byte_offset(0x39) = var_137;
        *arg1.byte_offset(0x29) = var_147;
        *arg1.byte_offset(0x19) = var_157;
        *arg1.byte_offset(9) = var_167;
        *arg1.byte_offset(0x51) = var_11f;
        *arg1.byte_offset(0x54) = var_11f;
        arg1[1] = r15;
        arg1[0xa] = result;
        *arg1 = 0x13;
    }
    else
    {
        just::parser::Parser::parse_name::he2804e36e47b7e10(&var_168, arg2);
        result = result_1;
        let zmm0_1: i128 = var_168;
        
        if result != 0x25
        {
            *arg1.byte_offset(0x54) = var_11f;
            *arg1.byte_offset(0x51) = var_11f;
            arg1[9] = var_128;
            *arg1.byte_offset(0x38) = var_147;
            *arg1.byte_offset(0x28) = var_157;
            *arg1.byte_offset(0x18) = var_167;
            *arg1.byte_offset(8) = zmm0_1;
            arg1[0xa] = result;
            *arg1 = 0x13;
        }
        else
        {
            just::parser::Parser::accepted::h762a87b5f98dff30(&var_168, arg2, 0x15);
            let rcx_1: i8 = var_168;
            result = result_1;
            
            if result != 0x25
            {
                arg1[9] = var_128;
                *arg1.byte_offset(0x39) = var_137;
                *arg1.byte_offset(0x29) = var_147;
                *arg1.byte_offset(0x19) = var_157;
                *arg1.byte_offset(9) = var_167;
                *arg1.byte_offset(0x51) = var_11f;
                *arg1.byte_offset(0x54) = var_11f;
                arg1[1] = rcx_1;
                arg1[0xa] = result;
                *arg1 = 0x13;
            }
            else
            {
                result = 0x12;
                
                if (rcx_1 & 1) == 0
                {
                    goto 'label_680303;
                }
                
                just::parser::Parser::parse_value::h216c4bdeb7f558a6(&var_168, arg2);
                result = var_168;
                let mut var_178_1: i64;
                var_178_1 = result_1;
                
                if result != 0x12
                {
                    let result_3: u64;
                    let result_2: u64 = result_3;
                    let var_100: i128;
                    let var_38: i128 = var_100;
                    let var_110: i128;
                    let var_48: i128 = var_110;
                    let var_98: i128 = var_167;
                    let var_88: i128 = var_157;
                    let var_78: i128 = var_147;
                    let var_68: i128 = var_137;
                    let var_58: i128 = var_178_1;
                    'label_680303:
                    arg1[0x18] = var_128;
                    *arg1.byte_offset(0xb0) = var_147;
                    *arg1.byte_offset(0xa0) = var_157;
                    *arg1.byte_offset(0x90) = var_167;
                    *arg1.byte_offset(0x80) = zmm0_1;
                    *arg1 = result;
                    *arg1.byte_offset(8) = var_98;
                    *arg1.byte_offset(0x18) = var_88;
                    *arg1.byte_offset(0x28) = var_78;
                    *arg1.byte_offset(0x38) = var_68;
                    *arg1.byte_offset(0x48) = var_58;
                    *arg1.byte_offset(0x58) = var_48;
                    *arg1.byte_offset(0x68) = var_38;
                    result = result_2;
                    arg1[0xf] = result;
                    arg1[0x19] = r15;
                    *arg1.byte_offset(0xc9) = arg3;
                }
                else
                {
                    *arg1.byte_offset(0x48) = var_178_1;
                    *arg1.byte_offset(0x38) = var_137;
                    *arg1.byte_offset(0x28) = var_147;
                    *arg1.byte_offset(0x18) = var_157;
                    *arg1.byte_offset(8) = var_167;
                    *arg1 = 0x13;
                }
            }
        }
    }
    result
}
