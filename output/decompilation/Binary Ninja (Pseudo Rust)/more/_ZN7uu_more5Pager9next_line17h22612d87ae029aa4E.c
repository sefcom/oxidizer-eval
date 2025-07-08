
  fn uu_more::Pager::next_line::h22612d87ae029aa4(arg1: *mut c_void) -> i64

{
    let rax_1: i64 = *arg1.byte_offset(0x18);
    let mut rcx: i64 = -1;
    
    if rax_1 != -1
    {
        rcx = rax_1 + 1;
    }
    
    *arg1.byte_offset(0x18) = rcx;
    rax_1 + 1
}
