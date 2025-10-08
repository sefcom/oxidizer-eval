
  fn uu_more::Pager::prev_line::h81e664c16673410e(arg1: *mut c_void) -> i64

{
    let mut result: i64 = *arg1.byte_offset(0x50);
    
    if result != 0
    {
        result -= 1;
        *arg1.byte_offset(0x50) = result;
    }
    
    result
}
