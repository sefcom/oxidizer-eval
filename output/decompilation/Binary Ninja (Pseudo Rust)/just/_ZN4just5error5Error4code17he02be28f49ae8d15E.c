
  fn just::error::Error::code::he02be28f49ae8d15(arg1: *mut i8) -> u64

{
    let mut rax: u64 = 0;
    let rcx: u64 = *arg1 - 3;
    
    if rcx > 0x29
    {
        return 0;
    }
    
    let mut var_8: u64;
    
    match rcx
    {
        0 =>
        {
            let rdi: *mut c_void = &arg1[0x50];
            let rcx_4: u32 = arg1[0x58] - 2;
            rax = 5;
            
            if rcx_4 < 5
            {
                rax = rcx_4;
            }
            
            if rax == 0
            {
                *rdi;
                return 1;
            }
            
            rax = rax;
            
            if rax == 1
            {
                var_8 = rax;
                return 1;
            }
            
            if rax != 3
            {
                return 0;
            }
            
            rax = !(*rdi + 0x80);
            rax
        }
        1 | 2 | 4 | 5 | 7 | 8 | 9 | 0xa | 0xb | 0xc | 0xd | 0xe | 0xf | 0x10 | 0x12 | 0x13 | 0x14 |
            0x15 | 0x16 | 0x17 | 0x18 | 0x19 | 0x1a | 0x1c | 0x1d | 0x1e | 0x1f | 0x20 | 0x21 | 0x22
            | 0x23 | 0x24 | 0x25 | 0x26 | 0x27 | 0x28 =>
        {
            rax
        }
        3 | 0x11 =>
        {
            rax = ((*arg1.byte_offset(4)) & 0x7f) == 0;
            rax
        }
        6 =>
        {
            *arg1.byte_offset(4);
            1
        }
        0x1b =>
        {
            var_8 = rax;
            1
        }
        0x29 =>
        {
            rax = !(*arg1.byte_offset(4) + 0x80);
            rax
        }
    }
}
