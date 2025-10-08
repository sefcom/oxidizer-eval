
  fn uu_unexpand::is_digit_or_comma::h09a6b8f657e24bab(arg1: i32) -> i64

{
    let mut result: i32;
    result = arg1 == 0x2c;
    result |= arg1 - 0x30 < 0xa;
    result
}
