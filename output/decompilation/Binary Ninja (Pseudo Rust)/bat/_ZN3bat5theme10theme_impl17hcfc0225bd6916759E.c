
  fn bat::theme::theme_impl::hcfc0225bd6916759(arg1: *mut i64, arg2: *mut i64) -> i64

{
    let rax: i64 = 0x7fffffffffffffff + arg2[6];
    let mut rcx: i64 = 1;
    
    if rax < 4
    {
        rcx = rax;
    }
    
    let mut rsi: i8;
    
    match rcx
    {
        0 =>
        {
            rsi = bat::theme::color_scheme_impl::h893fb72bbe578005(arg2[7]);
        }
        1 =>
        {
            arg1[2] = arg2[8];
            *arg1 = *arg2.byte_offset(0x30);
            arg1[3] = 2;
            core::ptr::drop_in_place$LT$nu_ansi_term..display..OSControl$LT$str$GT$$GT$::hfc2aeb8c0099f497(arg2);
            /* tailcall */
            return core::ptr::drop_in_place$LT$nu_ansi_term..display..OSControl$LT$str$GT$$GT$::hfc2aeb8c0099f497(&arg2[3]);
        }
        2 =>
        {
            rsi = 0;
        }
        3 =>
        {
            rsi = 1;
        }
    }
    
    /* tailcall */
    bat::theme::choose_theme_opt::h88fce64e24cbc439(arg1, rsi, arg2)
}
