
  fn uu_dd::parseargs::Parser::parse_bytes::h54695c3411a8c383(arg1: *mut i128, arg2: i64, arg3: u64) -> *mut i64

{
    let mut var_28: i128;
    let result: *mut i64 =
        uu_dd::parseargs::parse_bytes_with_opt_multiplier::h61a7f82d67afab9c(&var_28, arg2, arg3);
    let zmm0: i128 = var_28;
    let var_18: i128;
    
    if var_28 != 0xe
    {
        arg1[1] = var_18;
    }
    *arg1 = zmm0;
    result
}
