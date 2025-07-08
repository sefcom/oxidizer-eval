
  fn uu_more::Pager::should_close::hd0c7831e1905e098(arg1: *mut c_void) -> i64

{
    let rax: u64 = *arg1.byte_offset(0x40);
    let mut rcx: i64 = -1;
    
    if rax + *arg1.byte_offset(0x18) >= rax
    {
        rcx = rax + *arg1.byte_offset(0x18);
    }
    
    let mut result: i64;
    result = rcx >= *arg1.byte_offset(0x30);
    result
}
