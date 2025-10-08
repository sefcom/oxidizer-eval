
  int64_t bat::theme::theme_impl::hcfc0225bd6916759(int64_t* arg1, int64_t* arg2)

{
    int64_t rax = 0x7fffffffffffffff + arg2[6];
    int64_t rcx = 1;
    
    if (rax < 4)
        rcx = rax;
    
    char rsi;
    
    switch (rcx)
    {
        case 0:
        {
            rsi = bat::theme::color_scheme_impl::h893fb72bbe578005(arg2[7]);
            break;
        }
        case 1:
        {
            arg1[2] = arg2[8];
            *arg1 = *(arg2 + 0x30);
            arg1[3] = 2;
            core::ptr::drop_in_place$LT$nu_ansi_term..display..OSControl$LT$str$GT$$GT$::hfc2aeb8c0099f497(arg2);
            /* tailcall */
            return core::ptr::drop_in_place$LT$nu_ansi_term..display..OSControl$LT$str$GT$$GT$::hfc2aeb8c0099f497(&arg2[3]);
        }
        case 2:
        {
            rsi = 0;
            break;
        }
        case 3:
        {
            rsi = 1;
            break;
        }
    }
    
    /* tailcall */
    return bat::theme::choose_theme_opt::h88fce64e24cbc439(arg1, rsi, arg2);
}
