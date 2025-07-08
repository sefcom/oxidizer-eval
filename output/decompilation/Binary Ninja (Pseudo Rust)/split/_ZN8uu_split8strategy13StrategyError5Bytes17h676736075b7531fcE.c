
  fn uu_split::strategy::StrategyError::Bytes::h676736075b7531fc(arg1: *mut i64, arg2: *mut i128) -> *mut i64

{
    let zmm0: i128 = *arg2;
    *arg1.byte_offset(0x18) = arg2[1];
    *arg1.byte_offset(8) = zmm0;
    *arg1 = 1;
    arg1
}
