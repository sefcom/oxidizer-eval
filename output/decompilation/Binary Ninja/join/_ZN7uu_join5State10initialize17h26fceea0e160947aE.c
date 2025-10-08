
  int64_t uu_join::State::initialize::h26fceea0e160947a(int64_t* arg1, int64_t arg2, char arg3)

{
    int64_t var_48;
    uu_join::State::read_line::hc11952a2ce5ea2c0(&var_48, arg1, arg2);
    int64_t rax = var_48;
    
    if (rax == -0x7fffffffffffffff)
        return 1;
    
    int128_t var_28;
    int128_t var_58_1 = var_28;
    int128_t var_38;
    int128_t var_68_1 = var_38;
    int64_t var_78 = rax;
    int64_t var_40;
    int64_t var_70_1 = var_40;
    
    if (rax != -0x8000000000000000)
    {
        alloc::vec::Vec$LT$T$C$A$GT$::push::h1e462bd96175ed88(arg1, &var_78);
        
        if (!arg3)
            return 0;
        
        if (!arg1[2])
        {
            core::panicking::panic_bounds_check::h025cadc56a971af7(0, 0);
            /* no return */
        }
        
        *(arg1[1] + 0x10);
    }
    else
        core::ptr::drop_in_place$LT$core..option..Option$LT$uu_join..Line$GT$$GT$::h0fad273de0c46d5d(&var_78);
    
    return 0;
}
