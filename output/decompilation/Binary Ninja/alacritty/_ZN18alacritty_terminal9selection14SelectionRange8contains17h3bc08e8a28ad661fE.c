
  uint32_t alacritty_terminal::selection::SelectionRange::contains::h3bc08e8a28ad661f(int64_t* arg1, int64_t arg2, int32_t arg3)

{
    uint32_t result = arg1[1];
    
    if (result > arg3)
        return 0;
    
    int32_t rcx = arg1[3];
    
    if (rcx < arg3)
        return 0;
    
    if (*arg1 > arg2)
    {
        if (result == arg3)
            return 0;
        
        if (arg1[4])
            return 0;
    }
    
    result = 1;
    
    if (arg1[2] < arg2)
    {
        if (rcx == arg3)
            return 0;
        
        result = arg1[4] ^ 1;
    }
    
    return result;
}
