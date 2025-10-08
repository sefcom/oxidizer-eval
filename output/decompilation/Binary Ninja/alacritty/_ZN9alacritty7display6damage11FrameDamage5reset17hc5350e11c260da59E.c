
  int64_t alacritty::display::damage::FrameDamage::reset::hc5350e11c260da59(int64_t* arg1, int64_t arg2)

{
    arg1[6] = 0;
    arg1[5] = 0;
    arg1[2] = 0;
    int64_t result = alloc::vec::Vec$LT$T$C$A$GT$::reserve::h2fe219f6dc78a3fe(arg1, arg2);
    
    if (arg2)
    {
        int64_t rbp_1 = 0;
        
        do
        {
            int64_t var_48 = rbp_1;
            rbp_1 += 1;
            int64_t rdx;
            int64_t var_40_1 = rdx;
            int64_t var_38_1 = 0;
            result = alloc::vec::Vec$LT$T$C$A$GT$::push::h03702a85e1bf04eb(arg1, &var_48);
        } while (arg2 != rbp_1);
    }
    
    return result;
}
