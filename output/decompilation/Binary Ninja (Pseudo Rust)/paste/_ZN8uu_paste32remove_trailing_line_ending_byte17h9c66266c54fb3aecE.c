
  fn uu_paste::remove_trailing_line_ending_byte::h9c66266c54fb3aec(arg1: i8, arg2: *mut c_void) -> i64

{
    let mut result: i64 = *arg2.byte_offset(0x10);
    
    if result != 0 && *(*arg2.byte_offset(8) + result - 1) == arg1
    {
        result -= 1;
        *arg2.byte_offset(0x10) = result;
    }
    
    result
}
