
  fn uu_expand::is_digit_or_comma::hc2baabf702804034(arg1: i32) -> i64

{
    let mut result: i32;
    result = arg1 == 0x2c;
    result |= arg1 - 0x30 < 0xa;
    result
}
