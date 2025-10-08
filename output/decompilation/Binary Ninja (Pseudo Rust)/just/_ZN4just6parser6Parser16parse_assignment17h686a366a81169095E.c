
  fn just::parser::Parser::parse_assignment::h686a366a81169095(arg1: *mut i64, arg2: u64, arg3: i8, arg4: *mut i64) -> i64

{
    let mut var_268: i128;
    just::parser::Parser::parse_name::he2804e36e47b7e10(&var_268, arg2);
    let mut var_198: i128 = var_268;
    let var_220: i8;
    let var_258: i128;
    let var_248: i128;
    let var_238: i128;
    let mut var_228: i64;
    let var_21f: i32;
    let mut zmm0: i128;
    
    if var_220 != 0x25
    {
        *arg1.byte_offset(0x54) = var_21f;
        *arg1.byte_offset(0x51) = var_21f;
        arg1[9] = var_228;
        zmm0 = var_198;
        *arg1.byte_offset(0x38) = var_238;
        *arg1.byte_offset(0x28) = var_248;
        *arg1.byte_offset(0x18) = var_258;
        *arg1.byte_offset(8) = zmm0;
        arg1[0xa] = var_220;
        *arg1 = 0x12;
    }
    else
    {
        zmm0 = var_198;
        let mut var_c8: i128 = zmm0;
        let var_88_1: i64 = var_228;
        let mut var_78: i128 = zmm0;
        let var_68_1: i128 = var_258;
        let var_58_1: i128 = var_248;
        let var_48_1: i128 = var_238;
        let var_38_1: i64 = var_228;
        just::parser::Parser::presume::he2055272497a907b(&var_268, arg2, 0xe);
        
        if var_220 != 0x25
        {
            let rcx_3: i64 = var_268;
            let zmm0_1: i128 = var_268;
            var_198 = *var_228[1];
            *var_198[3] = *var_228[4];
            *arg1.byte_offset(0x54) = var_21f;
            *arg1.byte_offset(0x51) = var_21f;
            let rdi_7: i32 = var_198;
            *arg1.byte_offset(0x4c) = *var_198[3];
            *arg1.byte_offset(0x49) = rdi_7;
            arg1[1] = rcx_3;
            *arg1.byte_offset(0x10) = zmm0_1;
            *arg1.byte_offset(0x20) = var_258;
            *arg1.byte_offset(0x30) = var_248;
            arg1[8] = *var_238[8];
            arg1[9] = var_228;
            arg1[0xa] = var_220;
            *arg1 = 0x12;
        }
        else
        {
            just::parser::Parser::parse_expression::h8b701a5fe27dff96(&var_268, arg2);
            let rax_2: i64 = var_268;
            let var_118_1: i128 = var_268;
            let var_d8_1: i128 = var_220;
            
            if rax_2 != 0x12
            {
                let var_1f0: i64;
                let var_120_1: i64 = var_1f0;
                var_198 = var_118_1;
                var_198 = rax_2;
                just::parser::Parser::expect_eol::h0cc9a2a21fbfd19f(&var_268, arg2);
                
                if var_220 != 0x25
                {
                    'label_67a9f3:
                    *arg1.byte_offset(0x48) = var_228;
                    let zmm0_3: i128 = var_268;
                    *arg1.byte_offset(0x38) = var_238;
                    *arg1.byte_offset(0x28) = var_248;
                    *arg1.byte_offset(0x18) = var_258;
                    *arg1.byte_offset(8) = zmm0_3;
                    *arg1 = 0x12;
                    core::ptr::drop_in_place$LT$just..expression..Expression$GT$::hb406b3c1dd72713e(
                        &var_198);
                }
                else
                {
                    let rax_4: i8 =
                        just::attribute_set::AttributeSet::contains::hc7aae4e0e93c2d03(arg4, 0xf);
                    just::attribute_set::AttributeSet::ensure_valid_attributes::h6f0be17f12135348(
                        &var_268, arg4, "AssignmentxError getting current…", 0xa, &var_c8, 
                        &data_4715f0, 1);
                    
                    if var_220 != 0x25
                    {
                        goto 'label_67a9f3;
                    }
                    
                    let r13_1: i32 = *(arg2 + 0x80);
                    let mut r15: u64;
                    r15 = 1;
                    
                    if rax_4 == 0
                    {
                        let mut rax_5: *mut c_void;
                        let mut rdx_2: i64;
                        rax_5 = just::token::Token::lexeme::h66587cdf67f63270(&var_78);
                        var_268 = 0;
                        let mut rax_6: *mut i8;
                        let mut rdx_3: u64;
                        rax_6 =
                            core::char::methods::encode_utf8_raw::h5e8f6d90a161f6f4(0x5f, &var_268);
                        r15 = core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::starts_with::h8590487e544a86f3(rax_5, rdx_2, rax_6, rdx_3);
                    }
                    
                    let var_218_1: i128 = var_d8_1;
                    var_228 = var_228;
                    let var_238_1: i128 = var_238;
                    let var_248_1: i128 = var_248;
                    let var_258_1: i128 = var_258;
                    var_268 = var_198;
                    let var_1e8_1: i128 = var_c8;
                    let var_1d8_1: i128 = var_258;
                    let var_1c8_1: i128 = var_248;
                    let var_1b8_1: i128 = var_238;
                    let var_1a8_1: i64 = var_88_1;
                    memcpy(arg1, &var_268, 0xc8);
                    arg1[0x19] = r13_1;
                    *arg1.byte_offset(0xcc) = 0;
                    *arg1.byte_offset(0xcd) = arg3;
                    *arg1.byte_offset(0xce) = r15;
                }
            }
            else
            {
                *arg1.byte_offset(0x48) = var_d8_1;
                *arg1.byte_offset(0x38) = var_238;
                *arg1.byte_offset(0x28) = var_248;
                *arg1.byte_offset(0x18) = var_258;
                *arg1.byte_offset(8) = var_118_1;
                *arg1 = 0x12;
            }
        }
    }
    core::ptr::drop_in_place$LT$just..attribute_set..AttributeSet$GT$::he9a7d0819ed0965d(arg4)
}
