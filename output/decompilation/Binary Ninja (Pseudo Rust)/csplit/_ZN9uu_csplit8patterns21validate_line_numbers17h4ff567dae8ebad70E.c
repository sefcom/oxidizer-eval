
  fn uu_csplit::patterns::validate_line_numbers::h4ff567dae8ebad70(arg1: *mut i64, arg2: i64, arg3: i64) -> i64

{
    let mut var_40: i64 = arg2;
    let var_38: i64 = arg3 * 0x38 + arg2;
    let mut result_1: i64;
    core::iter::traits::iterator::Iterator::try_fold::h6b97f2503d926af3(&result_1, &var_40);
    let result: i64 = result_1;
    
    if result != 0xd
    {
        let var_10: i64;
        arg1[4] = var_10;
        let var_20: i128;
        *arg1.byte_offset(0x10) = var_20;
        let var_28: i64;
        arg1[1] = var_28;
    }
    
    *arg1 = result;
    result
}
