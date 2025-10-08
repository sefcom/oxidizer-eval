
  int64_t bat::theme::choose_theme::h83cf2693913a544f(int128_t* arg1, int64_t* arg2, int32_t arg3)

{
    if (arg3)
    {
        arg1[1] = arg2[5];
        *arg1 = *(arg2 + 0x18);
        core::ptr::drop_in_place$LT$bat..theme..ThemePreference$GT$::hfb4cca19abe9b034(&arg2[6]);
        /* tailcall */
        return core::ptr::drop_in_place$LT$nu_ansi_term..display..OSControl$LT$str$GT$$GT$::hfc2aeb8c0099f497(arg2);
    }
    
    arg1[1] = arg2[2];
    *arg1 = *arg2;
    core::ptr::drop_in_place$LT$bat..theme..ThemePreference$GT$::hfb4cca19abe9b034(&arg2[6]);
    /* tailcall */
    return core::ptr::drop_in_place$LT$nu_ansi_term..display..OSControl$LT$str$GT$$GT$::hfc2aeb8c0099f497(&arg2[3]);
}
