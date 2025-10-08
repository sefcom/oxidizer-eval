
  int64_t alacritty_terminal::vi_mode::is_boundary::hba662b27551b81b2(void* arg1, int64_t arg2, int32_t arg3, int32_t arg4)

{
    int64_t rax_1 = *(arg1 + 0x50);
    int64_t r8 = *(arg1 + 0xc0);
    int32_t r9 = 0;
    
    if (rax_1 >= r8)
        r9 = rax_1 - r8;
    
    int32_t result;
    
    if (!arg4 && !arg2)
    {
        result = 1;
        
        if (arg3 <= -(r9))
            return result;
    }
    
    if (arg3 != r8 - 1)
        return 0;
    
    result = arg2 + 1 >= *(arg1 + 0xb8);
    result &= arg4;
    return result;
}
