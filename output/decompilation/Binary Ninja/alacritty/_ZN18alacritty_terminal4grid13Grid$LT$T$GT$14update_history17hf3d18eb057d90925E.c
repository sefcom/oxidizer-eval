
  int64_t alacritty_terminal::grid::Grid$LT$T$GT$::update_history::hf3d18eb057d90925(void* arg1, int64_t arg2)

{
    int64_t rax;
    int64_t var_18 = rax;
    int64_t rax_1 = *(arg1 + 0x28);
    int64_t rdx = 0;
    
    if (rax_1 >= *(arg1 + 0x98))
        rdx = rax_1 - *(arg1 + 0x98);
    
    int64_t rcx_3 = arg2 - rdx;
    
    if (arg2 < rdx)
    {
        *(arg1 + 0x28) = rcx_3 + rax_1;
        
        if (*(arg1 + 0x10) > rax_1 + rcx_3 + 0x3e8)
            alacritty_terminal::grid::storage::Storage$LT$T$GT$::truncate::h2d132ed67c9d1788(arg1);
    }
    
    int64_t result = core::cmp::Ord::min::h7c13e9bfb8ea3862(*(arg1 + 0xa0), arg2);
    *(arg1 + 0xa0) = result;
    *(arg1 + 0xa8) = arg2;
    return result;
}
