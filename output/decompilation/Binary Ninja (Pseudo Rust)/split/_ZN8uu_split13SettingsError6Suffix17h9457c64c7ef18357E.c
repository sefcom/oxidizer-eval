
  fn uu_split::SettingsError::Suffix::h9457c64c7ef18357(arg1: *mut i64, arg2: *mut i128) -> i512

{
    let result: i128 = *arg2;
    *arg1.byte_offset(0x18) = arg2[1];
    *arg1.byte_offset(8) = result;
    *arg1 = 4;
    result
}
