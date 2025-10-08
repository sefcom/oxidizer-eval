
  int64_t alacritty_terminal::grid::Grid$LT$T$GT$::increase_scroll_limit::hd801cadf33b8cd65(int64_t* arg1, int64_t arg2)

{
    int64_t rcx = arg1[5];
    int64_t rdx = 0;
    
    if (rcx >= arg1[0x13])
        rdx = rcx - arg1[0x13];
    
    int64_t result = core::cmp::Ord::min::h7c13e9bfb8ea3862(arg2, arg1[0x15] - rdx);
    
    if (!result)
        return result;
    
    /* tailcall */
    return alacritty_terminal::grid::storage::Storage$LT$T$GT$::initialize::hf07ff5cf81d3c7d9(arg1, 
        result, arg1[0x12]);
}
