
  fn bat::printer::Colors::colored::hac989d8705686777(arg1: *mut i64, arg2: i8, arg3: i32, arg4: i8) -> i64

{
    let mut result: i32 = 0xee12;
    
    if (arg2 & 1) != 0
    {
        result = bat::terminal::to_ansi_color::h5249a5ef8d27cb4b(arg3, arg4);
    }
    
    arg1[1] = 0;
    *arg1 = 0;
    *arg1.byte_offset(9) = result;
    *arg1.byte_offset(0xd) = 0x15;
    *arg1.byte_offset(0x11) = 0;
    *arg1.byte_offset(0x19) = 0;
    *arg1.byte_offset(0x1a) = result;
    *arg1.byte_offset(0x1e) = 0x15;
    *arg1.byte_offset(0x22) = 1;
    *arg1.byte_offset(0x23) = 0;
    *arg1.byte_offset(0x2b) = 0x1500000015;
    *arg1.byte_offset(0x33) = 0;
    *arg1.byte_offset(0x3b) = 0;
    *arg1.byte_offset(0x3c) = 0x1500000004;
    *arg1.byte_offset(0x44) = 0;
    *arg1.byte_offset(0x4c) = 0;
    *arg1.byte_offset(0x4d) = 0x1500000002;
    *arg1.byte_offset(0x55) = 0;
    *arg1.byte_offset(0x5d) = 0;
    *arg1.byte_offset(0x5e) = 0x1500000006;
    *arg1.byte_offset(0x66) = 0;
    *arg1.byte_offset(0x6e) = 0;
    *arg1.byte_offset(0x6f) = result;
    *arg1.byte_offset(0x73) = 0x15;
    result
}
