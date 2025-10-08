
  fn bat::theme::choose_theme::h83cf2693913a544f(arg1: *mut i128, arg2: *mut i64, arg3: i32) -> i64

{
    if arg3 != 0
    {
        arg1[1] = arg2[5];
        *arg1 = *arg2.byte_offset(0x18);
        core::ptr::drop_in_place$LT$bat..theme..ThemePreference$GT$::hfb4cca19abe9b034(&arg2[6]);
        /* tailcall */
        return core::ptr::drop_in_place$LT$nu_ansi_term..display..OSControl$LT$str$GT$$GT$::hfc2aeb8c0099f497(arg2);
    }
    
    arg1[1] = arg2[2];
    *arg1 = *arg2;
    core::ptr::drop_in_place$LT$bat..theme..ThemePreference$GT$::hfb4cca19abe9b034(&arg2[6]);
    /* tailcall */
    core::ptr::drop_in_place$LT$nu_ansi_term..display..OSControl$LT$str$GT$$GT$::hfc2aeb8c0099f497(
        &arg2[3])
}
