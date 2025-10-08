
  fn uu_more::Pager::page_down::h5965084d09aa1ace(arg1: *mut c_void) -> i64

{
    let rax_1: i64 = *arg1.byte_offset(0x50);
    let rcx: i64 = *arg1.byte_offset(0x58);
    let r8: i64 = rcx * 2;
    let mut r8_1: i64 = r8 + rax_1;
    
    if r8 + rax_1 < r8
    {
        r8_1 = -1;
    }
    
    let rsi: i64 = *arg1.byte_offset(0x70);
    
    if r8_1 >= rsi
    {
        *arg1.byte_offset(0x50) = rsi - rcx;
        return rax_1;
    }
    
    let mut rax: i64 = rax_1 + rcx;
    
    if rax_1 + rcx < rax_1
    {
        rax = -1;
    }
    
    *arg1.byte_offset(0x50) = rax;
    rax
}
