
  fn uu_more::Pager::should_close::h4a303d1ec4dab858(arg1: *mut c_void) -> i64

{
    let rax: i64 = *arg1.byte_offset(0x50);
    let mut rcx: i64 = -1;
    
    if rax + *arg1.byte_offset(0x58) >= rax
    {
        rcx = rax + *arg1.byte_offset(0x58);
    }
    
    let mut result: i64;
    result = rcx >= *arg1.byte_offset(0x70);
    result
}
