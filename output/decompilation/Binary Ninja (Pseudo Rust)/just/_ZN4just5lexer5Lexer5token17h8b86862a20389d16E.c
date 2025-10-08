
  fn just::lexer::Lexer::token::h8b86862a20389d16(arg1: *mut c_void) -> i64

{
    let zmm1: i128 = *arg1.byte_offset(0x80);
    let var_30: i64 = *arg1.byte_offset(0xa8);
    let rsi: i8;
    let var_10: i8 = rsi;
    let var_28: i64 = *arg1.byte_offset(0xa0) - *arg1.byte_offset(0xb8);
    let var_20: i128 = *arg1.byte_offset(0xb0);
    let mut var_50: i128 = *arg1.byte_offset(0x70);
    let var_40: i128 = zmm1;
    alloc::vec::Vec$LT$T$C$A$GT$::push::h613e59c6bb8d58d5(arg1.byte_offset(0x48), &var_50);
    let result: i64 = *arg1.byte_offset(0xa0);
    *arg1.byte_offset(0xb8) = result;
    *arg1.byte_offset(0xa8) = *arg1.byte_offset(0x90);
    result
}
