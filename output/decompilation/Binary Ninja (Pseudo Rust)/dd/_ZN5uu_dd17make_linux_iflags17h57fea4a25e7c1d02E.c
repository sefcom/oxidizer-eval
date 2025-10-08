
  fn uu_dd::make_linux_iflags::h57fea4a25e7c1d02(arg1: *mut c_void) -> i64

{
    let rax: u32 = *arg1.byte_offset(1) << 0xe;
    let mut rcx: u32 = rax + 0x10000;
    
    if *arg1.byte_offset(2) == 0
    {
        rcx = rax;
    }
    
    let mut rax_1: u32 = rcx + 0x1000;
    
    if *arg1.byte_offset(3) == 0
    {
        rax_1 = rcx;
    }
    
    let mut rcx_1: u32 = rax_1 + 0x40000;
    
    if *arg1.byte_offset(7) == 0
    {
        rcx_1 = rax_1;
    }
    
    let mut rax_3: u32 = rcx_1 | 0x100;
    
    if *arg1.byte_offset(8) == 0
    {
        rax_3 = rcx_1;
    }
    
    let mut rcx_3: u32 = rax_3 | 0x20000;
    
    if *arg1.byte_offset(9) == 0
    {
        rcx_3 = rax_3;
    }
    
    let mut rax_5: u32 = rcx_3 | 0x800;
    
    if *arg1.byte_offset(6) == 0
    {
        rax_5 = rcx_3;
    }
    
    let mut rdx_1: u32 = rax_5 | 0x101000;
    
    if *arg1.byte_offset(4) == 0
    {
        rdx_1 = rax_5;
    }
    
    let mut result: i64;
    result = rdx_1 != 0;
    result
}
