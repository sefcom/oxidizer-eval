
  int64_t alacritty_terminal::grid::storage::Storage$LT$T$GT$::initialize::hf07ff5cf81d3c7d9(int64_t* arg1, int64_t arg2, int64_t arg3)

{
    int64_t var_20 = arg3;
    int64_t result = arg1[5] + arg2;
    int64_t r15 = arg1[2];
    
    if (result > r15)
    {
        int64_t rdx = arg1[3];
        
        if (rdx)
        {
            core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::rotate_left::h461a6a02631add82(arg1[1], 
                r15, rdx);
            arg1[3] = 0;
        }
        
        alloc::vec::Vec$LT$T$C$A$GT$::resize_with::hd62406631999c166(arg1, 
            r15 + core::cmp::Ord::max::h20b6d33cbe488162(arg2, 0x3e8), &var_20);
        result = arg2 + arg1[5];
    }
    
    arg1[5] = result;
    return result;
}
