
  fn uu_sort::KeySettings::set_ignore_non_printing::h0e99c66f0992ecc6(arg1: *mut i64, arg2: *mut c_void) -> i64

{
    let mut var_30: i64;
    let mut result: i64 = uu_sort::KeySettings::check_compatibility::hd03ca512104bcd48(&var_30, 
        *arg2.byte_offset(5), 1, *arg2.byte_offset(2));
    
    if var_30 != -0x8000000000000000
    {
        let result_1: i64;
        result = result_1;
        arg1[2] = result;
        *arg1 = var_30;
    }
    else
    {
        *arg2.byte_offset(3) = 1;
        *arg1 = -0x8000000000000000;
    }
    
    result
}
