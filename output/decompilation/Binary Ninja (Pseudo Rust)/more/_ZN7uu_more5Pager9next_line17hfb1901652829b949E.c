
  fn uu_more::Pager::next_line::hfb1901652829b949(arg1: *mut c_void) -> i64

{
    let mut result: i64 = *arg1.byte_offset(0x50);
    let rcx: i64 = *arg1.byte_offset(0x70);
    let mut rdx: i64 = 0;
    
    if rcx >= 1
    {
        rdx = rcx - 1;
    }
    
    if result < rdx
    {
        result += 1;
        *arg1.byte_offset(0x50) = result;
    }
    
    result
}
