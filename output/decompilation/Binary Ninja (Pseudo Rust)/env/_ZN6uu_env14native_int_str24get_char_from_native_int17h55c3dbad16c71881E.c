
  fn uu_env::native_int_str::get_char_from_native_int::h55c3dbad16c71881(arg1: i32) -> u64

{
    let mut var_21: i8 = arg1;
    let mut var_20: i8;
    core::str::converts::from_utf8::h8a6dc80f786921e0(&var_20, &var_21, 1);
    
    if (var_20 & 1) != 0
    {
        return 0x110000;
    }
    
    let var_18: i64;
    let var_10: i64;
    uu_env::native_int_str::get_char_from_native_int::_$u7b$$u7b$closure$u7d$$u7d$::hb31bb5d13165744d(var_18, var_10)
}
