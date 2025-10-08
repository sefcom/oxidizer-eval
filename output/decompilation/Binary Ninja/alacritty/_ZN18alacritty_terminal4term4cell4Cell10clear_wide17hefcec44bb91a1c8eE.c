
  void alacritty_terminal::term::cell::Cell::clear_wide::hefcec44bb91a1c8e(int64_t* arg1)

{
    int64_t rax;
    int64_t var_18 = rax;
    int64_t* rbx = arg1;
    *(arg1 + 0x14) &= 0xdf;
    
    if (*arg1)
    {
        void* rax_1 = alloc::sync::Arc$LT$T$C$A$GT$::make_mut::hd1b9ba4e0192b0c5(rbx);
        core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$char$GT$$GT$::he96c0fdde40bc7e1(*rax_1, 
            *(rax_1 + 8));
        *rax_1 = 0;
        *(rax_1 + 8) = 4;
        *(rax_1 + 0x10) = 0;
    }
    
    rbx[2] = 0x20;
}
