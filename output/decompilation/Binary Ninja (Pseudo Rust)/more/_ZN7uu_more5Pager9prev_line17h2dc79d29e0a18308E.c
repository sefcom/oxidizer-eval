
  fn uu_more::Pager::prev_line::h2dc79d29e0a18308(arg1: *mut c_void) -> i64

{
    let rax_1: i64 = *arg1.byte_offset(0x18);
    let mut rcx: i64 = 0;
    
    if rax_1 >= 1
    {
        rcx = rax_1 - 1;
    }
    
    *arg1.byte_offset(0x18) = rcx;
    rax_1 - 1
}
