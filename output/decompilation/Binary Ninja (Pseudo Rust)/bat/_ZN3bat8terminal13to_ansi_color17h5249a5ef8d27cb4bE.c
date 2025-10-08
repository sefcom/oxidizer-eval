
  fn bat::terminal::to_ansi_color::h5249a5ef8d27cb4b(arg1: i32, arg2: i8) -> u64

{
    let rcx: u32 = arg1 >> 0x18;
    
    if rcx == 1
    {
        return 0x15;
    }
    
    if rcx == 0
    {
        if (arg1 & 0xf8) == 0
        {
            return *(&data_485740)[0x60].byte_offset((arg1 & 7) << 2);
        }
        
        return arg1 << 8 | 0x12;
    }
    
    if arg2 != 0
    {
        return arg1 << 8 | 0x13;
    }
    
    let var_8: i64 = 0;
    ansi_colours::ansi256_from_rgb::h4354bc3fa1bfdecc(arg1) << 8 | 0x12
}
