
  int64_t alacritty_terminal::term::TermDamageState::resize::h700b97a1b27587df(int64_t* arg1, int64_t arg2, int64_t arg3)

{
    arg1[5] = 1;
    __builtin_memset(&arg1[2], 0, 0x14);
    int64_t result = alloc::vec::Vec$LT$T$C$A$GT$::reserve::h2fe219f6dc78a3fe(arg1, arg3);
    
    if (arg3)
    {
        int64_t rbp_1 = 0;
        
        do
        {
            int64_t var_48 = rbp_1;
            rbp_1 += 1;
            int64_t var_40_1 = arg2;
            int64_t var_38_1 = 0;
            result = alloc::vec::Vec$LT$T$C$A$GT$::push::h03702a85e1bf04eb(arg1, &var_48);
        } while (arg3 != rbp_1);
    }
    
    return result;
}
