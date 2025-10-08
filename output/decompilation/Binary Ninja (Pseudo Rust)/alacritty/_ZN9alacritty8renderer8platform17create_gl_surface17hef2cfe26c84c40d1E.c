
  fn alacritty::renderer::platform::create_gl_surface::hef2cfe26c84c40d1(arg1: *mut i64, arg2: *mut i32, arg3: i32, arg4: i32, arg5: *mut i32) -> i64

{
    let mut rax: i64;
    let mut rdx: i64;
    rax = _$LT$glutin..context..NotCurrentContext$u20$as$u20$glutin..display..GetGlDisplay$GT$::display::h65e5dd4d2e691e41(arg2);
    let mut var_80: i64 = rax;
    let var_78: i64 = rdx;
    let mut rax_1: i64;
    let mut rdx_1: i64;
    rax_1 = _$LT$glutin..context..NotCurrentContext$u20$as$u20$glutin..config..GetGlConfig$GT$::config::hde59c67359acb4ca(arg2);
    let mut var_70: i64 = rax_1;
    let var_68: i64 = rdx_1;
    
    if arg3 == 0 || arg4 == 0
    {
        core::option::unwrap_failed::h893f57cb7db71cb7();
        /* no return */
    }
    
    let rax_2: i32 = *arg5;
    let var_3c: i32 = arg5[5];
    let var_4c: i128 = *arg5.byte_offset(4);
    let mut var_60: i32 = 3;
    let var_50: i32 = rax_2;
    let var_38: i32 = arg3;
    let var_34: i32 = arg4;
    let var_30: i64 = 0;
    _$LT$glutin..display..Display$u20$as$u20$glutin..display..GlDisplay$GT$::create_window_surface::h02fb618df588d39c(arg1, &var_80, &var_70, &var_60);
    core::ptr::drop_in_place$LT$glutin..config..Config$GT$::h906d309ffa857007(&var_70);
    core::ptr::drop_in_place$LT$glutin..display..Display$GT$::h28e1ec1d671b8241(&var_80)
}
