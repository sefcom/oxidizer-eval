
  fn uu_dd::parseargs::Parser::parse_n::heb126d767e01e2d5(arg1: *mut i64, arg2: *mut i8, arg3: u64) -> i64

{
    let mut var_48: i64;
    let mut result: i8 =
        uu_dd::parseargs::parse_bytes_with_opt_multiplier::hba7bf735da655d4c(&var_48, arg2, arg3);
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
        result = _$LT$char$u20$as$u20$core..str..pattern..Pattern$GT$::is_contained_in::h822e1c3c690e59b6(arg2, arg3);
        arg1[2] = result_1;
        result_1 = result;
    }
    arg1[1] = result_1;
    *arg1 = r12;
    result
}
