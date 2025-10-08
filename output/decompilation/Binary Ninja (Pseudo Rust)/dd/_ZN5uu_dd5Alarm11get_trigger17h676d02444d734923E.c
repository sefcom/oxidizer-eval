
  fn uu_dd::Alarm::get_trigger::h676d02444d734923(arg1: *mut i64) -> i64

{
    let rcx: *mut c_void = *arg1;
    let temp0: i8 = *rcx.byte_offset(0x10);
    *rcx.byte_offset(0x10) = 0;
    let mut result: i64;
    result = temp0;
    result
}
