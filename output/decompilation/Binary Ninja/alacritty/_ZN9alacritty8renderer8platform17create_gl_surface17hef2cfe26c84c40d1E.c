
  int64_t alacritty::renderer::platform::create_gl_surface::hef2cfe26c84c40d1(int64_t* arg1, int32_t* arg2, int32_t arg3, int32_t arg4, int32_t* arg5)

{
    int64_t rax;
    int64_t rdx;
    rax = _$LT$glutin..context..NotCurrentContext$u20$as$u20$glutin..display..GetGlDisplay$GT$::display::h65e5dd4d2e691e41(arg2);
    int64_t var_80 = rax;
    int64_t var_78 = rdx;
    int64_t rax_1;
    int64_t rdx_1;
    rax_1 = _$LT$glutin..context..NotCurrentContext$u20$as$u20$glutin..config..GetGlConfig$GT$::config::hde59c67359acb4ca(arg2);
    int64_t var_70 = rax_1;
    int64_t var_68 = rdx_1;
    
    if (!arg3 || !arg4)
    {
        core::option::unwrap_failed::h893f57cb7db71cb7();
        /* no return */
    }
    
    int32_t rax_2 = *arg5;
    int32_t var_3c = arg5[5];
    int128_t var_4c = *(arg5 + 4);
    int32_t var_60 = 3;
    int32_t var_50 = rax_2;
    int32_t var_38 = arg3;
    int32_t var_34 = arg4;
    int64_t var_30 = 0;
    _$LT$glutin..display..Display$u20$as$u20$glutin..display..GlDisplay$GT$::create_window_surface::h02fb618df588d39c(arg1, &var_80, &var_70, &var_60);
    core::ptr::drop_in_place$LT$glutin..config..Config$GT$::h906d309ffa857007(&var_70);
    return core::ptr::drop_in_place$LT$glutin..display..Display$GT$::h28e1ec1d671b8241(&var_80);
}
