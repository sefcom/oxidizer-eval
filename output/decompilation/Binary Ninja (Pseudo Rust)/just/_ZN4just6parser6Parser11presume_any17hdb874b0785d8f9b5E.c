
  fn just::parser::Parser::presume_any::hdb874b0785d8f9b5(arg1: *mut i128, arg2: *mut c_void) -> u64

{
    let mut var_118: i128;
    let rdx: u64 = just::parser::Parser::advance::ha6fdbb87ccd3a5f7(&var_118, arg2);
    let result_1: i8;
    let mut result: u64 = result_1;
    let mut var_178: i128 = var_118;
    let var_108: i128;
    let var_f8: i128;
    let var_e8: i128;
    let mut result_3: u64;
    let mut zmm0: i128;
    
    if result != 0x25
    {
        let var_cf: i32;
        *arg1.byte_offset(0x4c) = var_cf;
        *arg1.byte_offset(0x49) = var_cf;
        arg1[4] = result_3;
        zmm0 = var_178;
        arg1[3] = var_e8;
        arg1[2] = var_f8;
        arg1[1] = var_108;
        *arg1 = zmm0;
        *arg1.byte_offset(0x48) = result;
    }
    else
    {
        zmm0 = var_178;
        let mut result_2: u64 = result_3;
        
        if _$LT$T$u20$as$u20$core..slice..cmp..SliceContains$GT$::slice_contains::hcb8c8d897295a20b(
            &result_2) == 0
        {
            let mut var_88: *const i8 = "orattributeaan";
            let var_80_1: i64 = 2;
            let var_78_1: *mut c_void = &data_4715ee;
            let var_70_1: *mut c_void = &data_4715f0;
            let mut var_a8: *const *const i8 = &var_88;
            let var_a0_1: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = _$LT$just..list..List$LT$T$C$I$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::hcecfb4dad3a4dc01;
            let var_98_1: *mut u64 = &result_2;
            let var_90_1: fn(arg1: *mut i8, arg2: *mut i64) -> i64 = _$LT$just..token_kind..TokenKind$u20$as$u20$core..fmt..Display$GT$::fmt::h4cb9518a42607a95;
            var_178 = &data_830728;
            *var_178[8] = 2;
            let mut var_158: i128;
            var_158 = 0;
            let mut var_168: i128;
            var_168 = &var_a8;
            *var_168[8] = 2;
            core::option::Option$LT$T$GT$::map_or_else::h4ceadf09b7aa2c32(&*var_118[8], 0, rdx, 
                &var_178);
            var_118 = -0x7fffffffffffffd8;
            result = just::parser::Parser::error::hcfcee5ba02637174(&var_178, arg2, &var_118);
            let var_130: i128;
            result_3 = var_130;
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
            result = result_2;
            arg1[4] = result;
            arg1[3] = var_e8;
            arg1[2] = var_f8;
            arg1[1] = var_108;
            *arg1 = zmm0;
            *arg1.byte_offset(0x48) = 0x25;
        }
    }
    result
}
