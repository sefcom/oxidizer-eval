
  fn uu_expand::is_digit_or_comma::h0820cfe540db05c7(arg1: i32) -> i64

{
    let mut result: i32;
    result = arg1 == 0x2c;
    result |= arg1 - 0x30 < 0xa;
    result
}
