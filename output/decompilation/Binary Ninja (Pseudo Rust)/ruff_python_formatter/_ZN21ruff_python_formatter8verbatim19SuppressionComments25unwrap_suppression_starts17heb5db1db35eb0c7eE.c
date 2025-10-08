
  fn ruff_python_formatter::verbatim::SuppressionComments::unwrap_suppression_starts::heb5db1db35eb0c7e(arg1: *mut i128, arg2: *mut i64) -> i64

{
    if *arg2 == 0
    {
        let result: i64 = arg2[3];
        *arg1 = *arg2.byte_offset(8);
        arg1[1] = result;
        return result;
    }
    
    let mut var_30: *mut *mut c_void = &data_97f9b0;
    let var_28: i64 = 1;
    let var_20: i64 = 8;
    let var_18: i128 = {0};
    core::panicking::panic_fmt::h96f341d36638c225(&var_30);
    /* no return */
}
