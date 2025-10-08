
  fn just::parser::Parser::parse_set_bool::h116dcbe8cb25ef28(arg1: *mut i8, arg2: *mut c_void) -> i64

{
    let mut result_1: i8;
    just::parser::Parser::accepted::h762a87b5f98dff30(&result_1, arg2, 0xe);
    let mut result: i8 = result_1;
    let result_2: i8;
    let mut var_16f: i128;
    let mut var_15f: i128;
    let mut var_14f: i128;
    let mut var_130: i64;
    let var_127: i32;
    
    if result_2 != 0x25
    {
        *arg1.byte_offset(0x40) = var_130;
        let var_13f: i128;
        *arg1.byte_offset(0x31) = var_13f;
        *arg1.byte_offset(0x21) = var_14f;
        *arg1.byte_offset(0x11) = var_15f;
        *arg1.byte_offset(1) = var_16f;
        *arg1.byte_offset(0x49) = var_127;
        *arg1.byte_offset(0x4c) = var_127;
        *arg1 = result;
        arg1[0x48] = result_2;
    }
    else if (result & 1) == 0
    {
        *arg1 = 1;
        arg1[0x48] = 0x25;
    }
    else
    {
        just::parser::Parser::expect::h35e1151927597ac7(&result_1, arg2, 0x18);
        result = result_2;
        let zmm0_2: i128 = result_1;
        
        if result != 0x25
        {
            *arg1.byte_offset(0x4c) = var_127;
            *arg1.byte_offset(0x49) = var_127;
            *arg1.byte_offset(0x40) = var_130;
            *arg1.byte_offset(0x30) = var_14f;
            *arg1.byte_offset(0x20) = var_15f;
            *arg1.byte_offset(0x10) = var_16f;
            *arg1 = zmm0_2;
            arg1[0x48] = result;
        }
        else
        {
            let var_a8_1: i128 = var_16f;
            let var_98_1: i128 = var_15f;
            let var_78_1: i64 = var_130;
            let mut var_68: i128 = zmm0_2;
            let var_58_1: i128 = var_16f;
            let var_48_1: i128 = var_15f;
            let var_38_1: i128 = var_14f;
            let var_28_1: i64 = var_130;
            let mut rax_1: *mut c_void;
            let mut rdx_1: i64;
            rax_1 = just::token::Token::lexeme::h66587cdf67f63270(&var_68);
            result_1 = rax_1;
            *var_16f[7] = rdx_1;
            result = _$LT$just..keyword..Keyword$u20$as$u20$core..cmp..PartialEq$LT$$RF$str$GT$$GT$::eq::h72387ea6ad90b2ef(&data_46e88e, &result_1);
            let result_3: i8 = result;
            
            if result == 0
            {
                let mut rax_2: *mut c_void;
                let mut rdx_2: i64;
                rax_2 = just::token::Token::lexeme::h66587cdf67f63270(&var_68);
                result_1 = rax_2;
                *var_16f[7] = rdx_2;
                result = _$LT$just..keyword..Keyword$u20$as$u20$core..cmp..PartialEq$LT$$RF$str$GT$$GT$::eq::h72387ea6ad90b2ef(&data_46e311, &result_1);
                
                if result == 0
                {
                    let rax_3: u64 = alloc::alloc::Global::alloc_impl::h6fb1b6049873c120(1, 2);
                    
                    if rax_3 == 0
                    {
                        alloc::alloc::handle_alloc_error::h88aa4f4f9d19c4f9();
                        /* no return */
                    }
                    
                    *rax_3 = 0xc18;
                    *var_16f[7] = 2;
                    *var_16f[0xf] = rax_3;
                    *var_15f[7] = 2;
                    let zmm3_3: i128 = var_14f;
                    var_15f = zmm0_2;
                    var_14f = var_a8_1;
                    var_130 = var_98_1;
                    let var_120_1: i128 = zmm3_3;
                    let var_110_1: i64 = var_78_1;
                    result_1 = -0x7fffffffffffffdf;
                    return just::token::Token::error::h986494da066a4455(arg1, &var_68, &result_1);
                }
            }
            
            *arg1 = result_3;
            arg1[0x48] = 0x25;
        }
    }
    result
}
