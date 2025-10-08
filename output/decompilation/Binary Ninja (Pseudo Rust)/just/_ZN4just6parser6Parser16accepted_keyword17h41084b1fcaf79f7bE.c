
  fn just::parser::Parser::accepted_keyword::h41084b1fcaf79f7b(arg1: *mut i8, arg2: *mut c_void, arg3: i8) -> i64

{
    let mut var_108: i128;
    just::parser::Parser::next::h26f20bd451ef506f(&var_108, arg2);
    let zmm0: i128 = var_108;
    let result_1: i8;
    let mut result: i8 = result_1;
    let var_c7: i32;
    let var_110: i32 = var_c7;
    let result_2: i8;
    let var_f8: i128;
    let var_e8: i128;
    let var_d8: i128;
    let var_bf: i32;
    
    if result_2 != 0x25
    {
        *arg1.byte_offset(0x4c) = var_bf;
        *arg1.byte_offset(0x49) = var_bf;
        *arg1.byte_offset(0x30) = var_d8;
        *arg1.byte_offset(0x20) = var_e8;
        *arg1.byte_offset(0x10) = var_f8;
        *arg1 = zmm0;
        *arg1.byte_offset(0x44) = var_c7;
        *arg1.byte_offset(0x41) = var_c7;
        arg1[0x40] = result;
        arg1[0x48] = result_2;
    }
    else
    {
        let mut var_78: i128 = zmm0;
        let var_68_1: i128 = var_f8;
        let var_58_1: i128 = var_e8;
        let var_48_1: i128 = var_d8;
        let mut var_37_1: i32 = var_c7;
        var_37_1 = var_c7;
        let result_3: i8 = result;
        let mut rax_2: i8;
        
        if result == 0x18
        {
            let mut rax: *mut c_void;
            let mut rdx_3: u64;
            rax = just::token::Token::lexeme::h66587cdf67f63270(&var_78);
            let mut rax_1: *mut c_void;
            let mut rdx_4: i64;
            rax_1 = just::keyword::Keyword::lexeme::h3532944a9e815f09(arg3);
            rax_2 = _$LT$$u5b$A$u5d$$u20$as$u20$core..slice..cmp..SlicePartialEq$LT$B$GT$$GT$::equal::hac1dd5ce3093f205(rax, rdx_3, rax_1, rdx_4);
        }
        
        if result != 0x18 || rax_2 == 0
        {
            result = 0;
            *arg1 = result;
            arg1[0x48] = 0x25;
        }
        else
        {
            just::parser::Parser::advance::ha6fdbb87ccd3a5f7(&var_108, arg2);
            result = result_2;
            
            if result != 0x25
            {
                let rcx_3: i64 = var_108;
                let zmm0_1: i128 = var_108;
                let mut var_b8: i128;
                var_b8 = var_c7;
                *var_b8[3] = var_c7;
                *arg1.byte_offset(0x4c) = var_bf;
                *arg1.byte_offset(0x49) = var_bf;
                *arg1.byte_offset(0x44) = *var_b8[3];
                *arg1.byte_offset(0x41) = var_b8;
                *arg1 = rcx_3;
                *arg1.byte_offset(8) = zmm0_1;
                *arg1.byte_offset(0x18) = var_f8;
                *arg1.byte_offset(0x28) = var_e8;
                *arg1.byte_offset(0x38) = *var_d8[8];
                arg1[0x40] = result_1;
                arg1[0x48] = result;
            }
            else
            {
                result = 1;
                *arg1 = result;
                arg1[0x48] = 0x25;
            }
        }
    }
    result
}
