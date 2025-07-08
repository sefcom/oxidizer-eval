
  fn uu_echo::Base::ascii_to_number::h59ff941f17249d67(arg1: i8, arg2: i8) -> i64

{
    let mut result: i64;
    
    if arg1 != 0
    {
        let result_1: i64 = result;
        return uu_echo::Base::ascii_to_number::hexadecimal_ascii_digit_to_number::h4428452b03aed7ea(
            arg2);
    }
    
    result = arg2 - 0x30 < 8;
    result
}
