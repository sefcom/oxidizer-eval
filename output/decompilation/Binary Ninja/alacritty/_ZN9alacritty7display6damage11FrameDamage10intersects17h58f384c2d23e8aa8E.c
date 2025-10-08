
  uint64_t alacritty::display::damage::FrameDamage::intersects::h58f384c2d23e8aa8(void* arg1, int64_t arg2, int64_t arg3, int64_t arg4, int64_t arg5)

{
    int64_t rax = *(arg1 + 0x10);
    
    if (arg2 >= rax)
    {
        core::panicking::panic_bounds_check::h025cadc56a971af7(arg2, rax);
        /* no return */
    }
    
    if (arg4 >= rax)
    {
        core::panicking::panic_bounds_check::h025cadc56a971af7(arg4, rax);
        /* no return */
    }
    
    uint64_t rbp;
    rbp = 1;
    
    if (!*(arg1 + 0x30))
    {
        int64_t r13_1 = *(arg1 + 8);
        int128_t var_48 = *(r13_1 + arg2 * 0x18 + 8);
        char var_38_1 = 0;
        
        if (!core::ops::range::RangeBounds::contains::h436105b2a06e684e(&var_48, arg3))
        {
            var_48 = *(r13_1 + arg4 * 0x18 + 8);
            char var_38_2 = 0;
            
            if (!core::ops::range::RangeBounds::contains::h436105b2a06e684e(&var_48, arg5))
            {
                var_48 = arg2 + 1;
                *var_48[8] = arg4;
                rbp = _$LT$core..ops..control_flow..ControlFlow$LT$B$C$C$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::h3342db6dfe9e46fb(
                    core::iter::traits::iterator::Iterator::try_fold::hf9172bfb7e74d031(&var_48, 
                        arg1), 
                    1);
            }
        }
    }
    
    return rbp;
}
