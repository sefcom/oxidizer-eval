
  fn uu_shuf::split_seps::he07f8c4bbcda6c2a(arg1: *mut i128, arg2: i64, arg3: i64, arg4: i8) -> *mut i128

{
    let mut var_41: i8 = arg4;
    let mut var_28: i64 = arg2;
    let var_20: i64 = arg3;
    let var_18: *mut i8 = &var_41;
    let var_10: i8 = 0;
    let mut var_40: i128;
    core::iter::traits::iterator::Iterator::collect::h0ab5c37a6b7336bd(&var_40, &var_28);
    let mut var_30: i64;
    
    if var_30 != 0 && *(*var_40[8] + ((var_30 - 1) << 4) + 8) == 0
    {
        var_30 -= 1;
    }
    
    arg1[1] = var_30;
    *arg1 = var_40;
    arg1
}
