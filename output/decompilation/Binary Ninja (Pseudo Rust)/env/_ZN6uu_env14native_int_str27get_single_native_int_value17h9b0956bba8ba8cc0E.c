
  fn uu_env::native_int_str::get_single_native_int_value::h9b0956bba8ba8cc0(arg1: *mut i32) -> i64

{
    let rax: i64;
    let mut var_8: i64 = rax;
    *var_8[4] = 0;
    let mut result: i64;
    result = core::char::methods::encode_utf8_raw::h4a752b0d300141c4(*arg1, &*var_8[4]) == 1;
    result
}
