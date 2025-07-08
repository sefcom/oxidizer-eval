
  fn uu_df::OptionsError::ColumnError::he61e6bf6d6506cc0(arg1: *mut i64, arg2: *mut i128) -> i64

{
    let result: i64 = arg2[1];
    arg1[3] = result;
    *arg1.byte_offset(8) = *arg2;
    *arg1 = 3;
    result
}
