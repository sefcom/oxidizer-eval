
  int64_t alacritty_terminal::grid::Grid$LT$T$GT$::decrease_scroll_limit::h8721b8159654f913(void* arg1, int64_t arg2)

{
    int64_t rax;
    int64_t var_28 = rax;
    int64_t r15 = *(arg1 + 0x28);
    int64_t r12 = *(arg1 + 0x98);
    int64_t r14 = 0;
    
    if (r15 >= r12)
        r14 = r15 - r12;
    
    int64_t result = core::cmp::Ord::min::h7c13e9bfb8ea3862(arg2, r14);
    
    if (result)
    {
        int64_t r15_1 = r15 - core::cmp::Ord::min::h7c13e9bfb8ea3862(result, r14);
        *(arg1 + 0x28) = r15_1;
        
        if (*(arg1 + 0x10) > r15_1 + 0x3e8)
        {
            alacritty_terminal::grid::storage::Storage$LT$T$GT$::truncate::h2d132ed67c9d1788(arg1);
            r15_1 = *(arg1 + 0x28);
            r12 = *(arg1 + 0x98);
        }
        
        int64_t rsi_2 = 0;
        
        if (r15_1 >= r12)
            rsi_2 = r15_1 - r12;
        
        result = core::cmp::Ord::min::h7c13e9bfb8ea3862(*(arg1 + 0xa0), rsi_2);
        *(arg1 + 0xa0) = result;
    }
    
    return result;
}
