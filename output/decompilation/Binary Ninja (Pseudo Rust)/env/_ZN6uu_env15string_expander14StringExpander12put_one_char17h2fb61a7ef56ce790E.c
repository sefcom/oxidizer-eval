
  fn uu_env::string_expander::StringExpander::put_one_char::h2fb61a7ef56ce790(arg1: *mut i64, arg2: i32) -> i64

{
    let mut var_2c: i32 = 0;
    let mut rax_1: i64;
    let mut rdx: u64;
    rax_1 = core::char::methods::encode_utf8_raw::h4a752b0d300141c4(arg2, &var_2c);
    let mut var_28: ();
    _$LT$T$u20$as$u20$alloc..slice..hack..ConvertVec$GT$::to_vec::he132dab3b8589a55(&var_28, rax_1, 
        rdx);
    uu_env::string_expander::StringExpander::put_string::h9dc86166bab9a39e(arg1, &var_28)
}
