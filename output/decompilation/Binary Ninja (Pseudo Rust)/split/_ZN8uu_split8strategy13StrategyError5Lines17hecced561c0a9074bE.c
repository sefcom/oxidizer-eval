
  fn uu_split::strategy::StrategyError::Lines::hecced561c0a9074b(arg1: *mut i64, arg2: *mut i128) -> *mut i64

{
    let zmm0: i128 = *arg2;
    *arg1.byte_offset(0x18) = arg2[1];
    *arg1.byte_offset(8) = zmm0;
    *arg1 = 0;
    arg1
}
