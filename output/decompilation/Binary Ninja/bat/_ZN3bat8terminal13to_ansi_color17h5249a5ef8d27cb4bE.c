
  uint64_t bat::terminal::to_ansi_color::h5249a5ef8d27cb4b(int32_t arg1, char arg2)

{
    uint32_t rcx = arg1 >> 0x18;
    
    if (rcx == 1)
        return 0x15;
    
    if (!rcx)
    {
        if (!(arg1 & 0xf8))
            return *(&data_485740[0x60] + ((arg1 & 7) << 2));
        
        return arg1 << 8 | 0x12;
    }
    
    if (arg2)
        return arg1 << 8 | 0x13;
    
    int64_t var_8 = 0;
    return ansi_colours::ansi256_from_rgb::h4354bc3fa1bfdecc(arg1) << 8 | 0x12;
}
