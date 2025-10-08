
  fn just::parser::Parser::presume_keyword::heb52d8ab9717d87e(arg1: *mut i128, arg2: *mut c_void, arg3: i8) -> i64

{
    let mut var_169: i8 = arg3;
    let mut var_e8: i128;
    just::parser::Parser::advance::ha6fdbb87ccd3a5f7(&var_e8, arg2);
    let mut var_148: i128 = var_e8;
    let mut result_1: i8;
    let mut result: i8 = result_1;
    let var_a7: i32;
    let mut var_168: i32 = var_a7;
    var_168 = var_a7;
    let var_a0: i8;
    let var_d8: i128;
    let var_c8: i128;
    let var_b8: i128;
    
    if var_a0 != 0x25
    {
        let var_9f: i32;
        *arg1.byte_offset(0x4c) = var_9f;
        *arg1.byte_offset(0x49) = var_9f;
        let zmm0: i128 = var_148;
        arg1[3] = var_b8;
        arg1[2] = var_c8;
        arg1[1] = var_d8;
        *arg1 = zmm0;
        let rdx_5: i32 = var_168;
        *arg1.byte_offset(0x44) = var_168;
        *arg1.byte_offset(0x41) = rdx_5;
        arg1[4] = result;
        *arg1.byte_offset(0x48) = var_a0;
    }
    else
    {
        let mut var_68: i128 = var_148;
        let var_58_1: i128 = var_d8;
        let var_48_1: i128 = var_c8;
        let var_38_1: i128 = var_b8;
        let mut rdx_2: u64 = var_168;
        let mut var_27_1: i32 = var_168;
        var_27_1 = rdx_2;
        let mut result_2: i8 = result;
        
        if result != 0x18
        {
            var_168 = &data_46e88e;
            let var_160_1: fn(arg1: *mut i8, arg2: *mut i64) -> i64 = _$LT$just..token_kind..TokenKind$u20$as$u20$core..fmt..Display$GT$::fmt::h4cb9518a42607a95;
            let var_158_1: *mut i8 = &result_2;
            let var_150_1: fn(arg1: *mut i8, arg2: *mut i64) -> i64 = _$LT$just..token_kind..TokenKind$u20$as$u20$core..fmt..Display$GT$::fmt::h4cb9518a42607a95;
            var_148 = &data_8306d8;
            *var_148[8] = 2;
            'label_676ef2:
            let mut var_128: i128;
            var_128 = 0;
            let mut var_138: i128;
            var_138 = &var_168;
            *var_138[8] = 2;
            core::option::Option$LT$T$GT$::map_or_else::h4ceadf09b7aa2c32(&*var_e8[8], 0, rdx_2, 
                &var_148);
            var_e8 = -0x7fffffffffffffd8;
            result = just::parser::Parser::error::hcfcee5ba02637174(&var_148, arg2, &var_e8);
            let var_100: i128;
            result_1 = var_100;
            let zmm1_1: i128 = var_148;
            let var_b8_1: i128 = var_b8;
            let var_c8_1: i128 = var_128;
            let var_d8_1: i128 = var_138;
            var_e8 = zmm1_1;
            arg1[4] = var_100;
            arg1[3] = var_b8;
            arg1[2] = var_128;
            arg1[1] = var_138;
            *arg1 = zmm1_1;
        }
        else
        {
            let mut rax: *mut c_void;
            let mut rdx_3: i64;
            rax = just::token::Token::lexeme::h66587cdf67f63270(&var_68);
            var_e8 = rax;
            *var_e8[8] = rdx_3;
            result = _$LT$just..keyword..Keyword$u20$as$u20$core..cmp..PartialEq$LT$$RF$str$GT$$GT$::eq::h72387ea6ad90b2ef(&var_169, &var_e8);
            
            if result == 0
            {
                let mut rax_1: *mut c_void;
                rax_1 = just::token::Token::lexeme::h66587cdf67f63270(&var_68);
                let mut var_78: *mut c_void = rax_1;
                let var_70_1: u64 = rdx_2;
                var_168 = &var_169;
                let var_160_2: fn(arg1: *mut i8, arg2: *mut i64) -> i64 = _$LT$just..keyword..Keyword$u20$as$u20$core..fmt..Display$GT$::fmt::h38d1b5ba2fdc1664;
                let var_158_2: *mut *mut c_void = &var_78;
                let var_150_2: fn(arg1: *mut i64, arg2: i64) -> i64 =
                    _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hcd9ad0a553cee1ef;
                var_148 = &data_8306f8;
                *var_148[8] = 3;
                goto 'label_676ef2;
            }
            
            *arg1.byte_offset(0x48) = 0x25;
        }
    }
    result
}
