
  int64_t alacritty::display::Ime::set_enabled::haa2217e684d43de8(int64_t* arg1, int32_t arg2)

{
    char result = 1;
    
    if (!arg2)
    {
        core::ptr::drop_in_place$LT$alacritty..display..Ime$GT$::he516603905b647f6(arg1);
        *arg1 = 2;
        result = 0;
    }
    
    arg1[9] = result;
    return result;
}
