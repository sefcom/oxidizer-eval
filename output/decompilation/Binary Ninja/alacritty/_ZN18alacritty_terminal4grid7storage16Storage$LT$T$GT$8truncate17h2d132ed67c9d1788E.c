
  int64_t alacritty_terminal::grid::storage::Storage$LT$T$GT$::truncate::h2d132ed67c9d1788(void* arg1)

{
    int64_t rax;
    int64_t var_18 = rax;
    int64_t rdx = *(arg1 + 0x18);
    int64_t result;
    int64_t r14_1;
    
    if (!rdx)
    {
        int64_t r14_2 = *(arg1 + 0x10);
        result = *(arg1 + 0x28);
        r14_1 = r14_2 - result;
        
        if (r14_2 >= result)
        {
            label_76eddd:
            int64_t* rdi_3 = (result << 5) + *(arg1 + 8);
            *(arg1 + 0x10) = result;
            /* tailcall */
            return core::ptr::drop_in_place$LT$$u5b$alacritty_terminal..grid..row..Row$LT$alacritty_terminal..term..cell..Cell$GT$$u5d$$GT$::hbdfa2dfef87806d4(rdi_3, r14_1);
        }
    }
    else
    {
        int64_t r14 = *(arg1 + 0x10);
        core::slice::_$LT$impl$u20$$u5b$T$u5d$$GT$::rotate_left::h461a6a02631add82(*(arg1 + 8), 
            r14, rdx);
        *(arg1 + 0x18) = 0;
        result = *(arg1 + 0x28);
        r14_1 = r14 - result;
        
        if (r14 >= result)
            goto label_76eddd;
    }
    return result;
}
