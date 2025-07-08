
  fn uu_more::Pager::page_down::h61b22add167296da(arg1: *mut c_void) -> u64

{
    let result: u64 = *arg1.byte_offset(0x40);
    let rcx_1: u64 = result * 2;
    let rdx: i64 = *arg1.byte_offset(0x18);
    let rsi: i64 = *arg1.byte_offset(0x30);
    let mut rcx_2: i64 = rcx_1 + rdx;
    
    if rcx_1 + rdx < rcx_1
    {
        rcx_2 = -1;
    }
    
    let mut rdx_1: i64 = rdx + result;
    
    if rdx + result < rdx
    {
        rdx_1 = -1;
    }
    
    let mut r8_1: i64 = rsi - result;
    
    if rcx_2 < rsi
    {
        r8_1 = rdx_1;
    }
    
    *arg1.byte_offset(0x18) = r8_1;
    result
}
