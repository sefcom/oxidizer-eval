
  fn uu_dd::parseargs::Parser::parse_n::h10e17107a528a6d1(arg1: *mut i64, arg2: *mut i8, arg3: u64) -> i64

{
    let mut var_48: i64;
    let mut result: i8 =
        uu_dd::parseargs::parse_bytes_with_opt_multiplier::h61a7f82d67afab9c(&var_48, arg2, arg3);
    let r12: i64 = var_48;
    let result_2: u64;
    let mut result_1: u64 = result_2;
    let var_38: i128;
    
    if r12 != 0xe
    {
        *arg1.byte_offset(0x10) = var_38;
    }
    else
    {
        result = _$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::hf6fa57beb1c3cfdf(arg2, arg3);
        arg1[2] = result_1;
        result_1 = result;
    }
    arg1[1] = result_1;
    *arg1 = r12;
    result
}
