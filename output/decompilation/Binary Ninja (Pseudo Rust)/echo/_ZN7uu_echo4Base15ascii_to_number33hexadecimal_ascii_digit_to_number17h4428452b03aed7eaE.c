
  fn uu_echo::Base::ascii_to_number::hexadecimal_ascii_digit_to_number::h4428452b03aed7ea(arg1: i8) -> i64

{
    let rcx: u64 = arg1 - 0x30;
    
    if rcx > 0x36
    {
        return 0;
    }
    
    let mut result: i64;
    let mut rdx: *mut u32;
    
    match rcx
    {
        0 =>
        {
            result = 1;
            1
        }
        1 =>
        {
            rdx = 1;
            result = 1;
            1
        }
        2 =>
        {
            result = 1;
            rdx = 2;
            1
        }
        3 =>
        {
            result = 1;
            rdx = 3;
            1
        }
        4 =>
        {
            result = 1;
            rdx = 4;
            1
        }
        5 =>
        {
            result = 1;
            rdx = 5;
            1
        }
        6 =>
        {
            result = 1;
            rdx = 6;
            1
        }
        7 =>
        {
            result = 1;
            rdx = 7;
            1
        }
        8 =>
        {
            result = 1;
            rdx = 8;
            1
        }
        9 =>
        {
            result = 1;
            rdx = 9;
            1
        }
        0xa | 0xb | 0xc | 0xd | 0xe | 0xf | 0x10 | 0x17 | 0x18 | 0x19 | 0x1a | 0x1b | 0x1c | 0x1d |
            0x1e | 0x1f | 0x20 | 0x21 | 0x22 | 0x23 | 0x24 | 0x25 | 0x26 | 0x27 | 0x28 | 0x29 | 0x2a
            | 0x2b | 0x2c | 0x2d | 0x2e | 0x2f | 0x30 =>
        {
            0
        }
        0x11 | 0x31 =>
        {
            result = 1;
            rdx = 0xa;
            result
        }
        0x12 | 0x32 =>
        {
            result = 1;
            rdx = 0xb;
            1
        }
        0x13 | 0x33 =>
        {
            result = 1;
            rdx = 0xc;
            1
        }
        0x14 | 0x34 =>
        {
            result = 1;
            rdx = 0xd;
            1
        }
        0x15 | 0x35 =>
        {
            result = 1;
            rdx = 0xe;
            1
        }
        0x16 | 0x36 =>
        {
            result = 1;
            rdx = 0xf;
            1
        }
    }
}
