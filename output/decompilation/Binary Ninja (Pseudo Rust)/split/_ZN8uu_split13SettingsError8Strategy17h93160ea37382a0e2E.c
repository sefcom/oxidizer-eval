
  fn uu_split::SettingsError::Strategy::h93160ea37382a0e2(arg1: *mut i128, arg2: *mut i128) -> i64

{
    let result: i64 = arg2[2];
    arg1[2] = result;
    let zmm0: i128 = *arg2;
    arg1[1] = arg2[1];
    *arg1 = zmm0;
    result
}
