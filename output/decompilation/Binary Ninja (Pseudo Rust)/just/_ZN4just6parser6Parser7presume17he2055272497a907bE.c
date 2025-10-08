
  fn just::parser::Parser::presume::he2055272497a907b(arg1: *mut i128, arg2: *mut c_void, arg3: i8) -> u32

{
    let mut var_1a1: i8 = arg3;
    let mut var_118: i128;
    just::parser::Parser::advance::ha6fdbb87ccd3a5f7(&var_118, arg2);
    let mut var_178: i128 = var_118;
    let mut result_1: i8;
    let mut result: u32 = result_1;
    let result_5: u32;
    let mut result_3: u32 = result_5;
    result_3 = result_5;
    let var_d0: i8;
    let var_108: i128;
    let var_f8: i128;
    let var_e8: i128;
    let mut zmm0: i128;
    
    if var_d0 != 0x25
    {
        let var_cf: i32;
        *arg1.byte_offset(0x4c) = var_cf;
        *arg1.byte_offset(0x49) = var_cf;
        zmm0 = var_178;
        arg1[3] = var_e8;
        arg1[2] = var_f8;
        arg1[1] = var_108;
        *arg1 = zmm0;
        let result_8: u32 = result_3;
        *arg1.byte_offset(0x44) = result_3;
        *arg1.byte_offset(0x41) = result_8;
        arg1[4] = result;
        *arg1.byte_offset(0x48) = var_d0;
    }
    else
    {
        zmm0 = var_178;
        let result_2: u32 = result_3;
        let result_4: u32 = result_3;
        let var_68_1: i128 = zmm0;
        let var_58_1: i128 = var_108;
        let var_48_1: i128 = var_f8;
        let var_38_1: i128 = var_e8;
        let mut var_28: i8 = result;
        let result_7: u64 = result_3;
        let mut result_6: u32 = result_3;
        result_6 = result_7;
        
        if result != arg3
        {
            result_3 = &var_1a1;
            let var_190_1: fn(arg1: *mut i8, arg2: *mut i64) -> i64 = _$LT$just..token_kind..TokenKind$u20$as$u20$core..fmt..Debug$GT$::fmt::h1677e8287b3038f4;
            let var_188_1: *mut i8 = &var_28;
            let var_180_1: fn(arg1: *mut i8, arg2: *mut i64) -> i64 = _$LT$just..token_kind..TokenKind$u20$as$u20$core..fmt..Debug$GT$::fmt::h1677e8287b3038f4;
            var_178 = &data_8306d8;
            *var_178[8] = 2;
            let mut var_158: i128;
            var_158 = 0;
            let mut var_168: i128;
            var_168 = &result_3;
            *var_168[8] = 2;
            core::option::Option$LT$T$GT$::map_or_else::h4ceadf09b7aa2c32(&*var_118[8], 0, 
                result_7, &var_178);
            var_118 = -0x7fffffffffffffd8;
            result = just::parser::Parser::error::hcfcee5ba02637174(&var_178, arg2, &var_118);
            let var_130: i128;
            result_1 = var_130;
            let zmm1_1: i128 = var_178;
            let var_e8_1: i128 = var_e8;
            let var_f8_1: i128 = var_158;
            let var_108_1: i128 = var_168;
            var_118 = zmm1_1;
            arg1[4] = var_130;
            arg1[3] = var_e8;
            arg1[2] = var_158;
            arg1[1] = var_168;
            *arg1 = zmm1_1;
        }
        else
        {
            arg1[3] = var_e8;
            arg1[2] = var_f8;
            arg1[1] = var_108;
            *arg1 = zmm0;
            arg1[4] = arg3;
            result = result_2;
            *arg1.byte_offset(0x41) = result;
            *arg1.byte_offset(0x44) = result_2;
            *arg1.byte_offset(0x48) = 0x25;
        }
    }
    result
}
