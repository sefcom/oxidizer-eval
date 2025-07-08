
  fn uu_split::strategy::StrategyError::NumberType::h007e5daf94228ed3(arg1: *mut i64, arg2: *mut i128) -> i512

{
    let result: i128 = *arg2;
    *arg1.byte_offset(0x18) = arg2[1];
    *arg1.byte_offset(8) = result;
    *arg1 = 2;
    result
}
