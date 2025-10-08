
  fn fd::ensure_use_hidden_option_for_leading_dot_pattern::he1bd7dd292972766(arg1: i8, arg2: *mut *mut [i8; 0xbb], arg3: i64) -> u64

{
    if (arg1 & 1) == 0
    {
        return 0;
    }
    
    let mut var_30: *mut *mut [i8; 0xbb] = arg2;
    let var_28: *mut c_void = &arg2[arg3 * 3];
    
    if _$LT$core..slice..iter..Iter$LT$T$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::any::h97670d64b9b946ab(&var_30) == 0
    {
        return 0;
    }
    
    var_30 = &data_802950;
    let var_28_1: i64 = 1;
    let var_20: i64 = 8;
    let var_18: i128 = {0};
    anyhow::__private::format_err::hb7ed131eb83ec9a9(&var_30)
}
