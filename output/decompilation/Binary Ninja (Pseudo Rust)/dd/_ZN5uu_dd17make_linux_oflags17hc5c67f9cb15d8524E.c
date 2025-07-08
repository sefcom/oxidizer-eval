
  fn uu_dd::make_linux_oflags::hc5c67f9cb15d8524(arg1: *mut i8) -> i64

{
    let rax: u32 = *arg1 << 0xa;
    let mut rcx_1: u32 = rax | 0x4000;
    
    if arg1[2] == 0
    {
        rcx_1 = rax;
    }
    
    let mut rax_2: u32 = rcx_1 | 0x10000;
    
    if arg1[3] == 0
    {
        rax_2 = rcx_1;
    }
    
    let mut rcx_3: u32 = rax_2 | 0x1000;
    
    if arg1[4] == 0
    {
        rcx_3 = rax_2;
    }
    
    let mut rax_4: u32 = rcx_3 | 0x40000;
    
    if arg1[8] == 0
    {
        rax_4 = rcx_3;
    }
    
    let mut rcx_5: u32 = rax_4 | 0x100;
    
    if arg1[9] == 0
    {
        rcx_5 = rax_4;
    }
    
    let mut rax_6: u32 = rcx_5 | 0x20000;
    
    if arg1[0xa] == 0
    {
        rax_6 = rcx_5;
    }
    
    let mut rcx_7: u32 = rax_6 | 0x800;
    
    if arg1[7] == 0
    {
        rcx_7 = rax_6;
    }
    
    let mut rdx_1: u32 = rcx_7 | 0x101000;
    
    if arg1[5] == 0
    {
        rdx_1 = rcx_7;
    }
    
    let mut result: i64;
    result = rdx_1 != 0;
    result
}
