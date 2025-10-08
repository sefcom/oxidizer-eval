
  fn just::parser::Parser::error::hcfcee5ba02637174(arg1: *mut i64, arg2: *mut c_void, arg3: *mut i128) -> i64

{
    let mut var_60: i128;
    just::parser::Parser::next::h26f20bd451ef506f(&var_60, arg2);
    let mut var_a8: i128 = var_60;
    let var_18: i8;
    let mut result: i64;
    
    if var_18 != 0x25
    {
        let var_17: i32;
        *arg1.byte_offset(0x54) = var_17;
        *arg1.byte_offset(0x51) = var_17;
        let var_20: i64;
        arg1[9] = var_20;
        let zmm0: i128 = var_a8;
        let var_30: i128;
        *arg1.byte_offset(0x38) = var_30;
        let var_40: i128;
        *arg1.byte_offset(0x28) = var_40;
        let var_50: i128;
        *arg1.byte_offset(0x18) = var_50;
        *arg1.byte_offset(8) = zmm0;
        arg1[0xa] = var_18;
        core::ptr::drop_in_place$LT$just..compile_error_kind..CompileErrorKind$GT$::he0bfeab3ddccc897(arg3);
        result = 1;
    }
    else
    {
        just::token::Token::error::h986494da066a4455(&arg1[1], &var_a8, arg3);
        result = 0;
    }
    
    *arg1 = result;
    result
}
