
  char const (** const )[0xbf] alacritty::renderer::platform::create_gl_display::h0e61610653d66be2(char const (*** arg1)[0xbf], int32_t* arg2, int32_t arg3)

{
    int64_t rax = alloc::boxed::Box$LT$T$GT$::new::h314575a5fb231377();
    char const* const var_b0 = arg3 ^ 3;
    int64_t var_a8 = rax;
    void* const var_a0 = &data_c83838;
    char const (** const result_1)[0xbf];
    glutin::display::Display::new::h7fa93ffe55699b54(&result_1, arg2, &var_b0);
    char const (** const result)[0xbf] = result_1;
    int64_t var_80;
    int64_t r14_1 = var_80;
    int64_t var_78;
    int128_t var_70;
    
    if (result != 2)
    {
        int64_t var_50;
        arg1[7] = var_50;
        int128_t var_60;
        *(arg1 + 0x28) = var_60;
        *(arg1 + 0x18) = var_70;
        *arg1 = result;
        arg1[1] = r14_1;
        arg1[2] = var_78;
    }
    else
    {
        int64_t var_c0 = r14_1;
        result = core::sync::atomic::atomic_load::h45f93311b58385bb(
            &log::MAX_LOG_LEVEL_FILTER::hfa6ade34c357dc26, 0);
        
        if (result >= 3)
        {
            void var_38;
            _$LT$glutin..display..Display$u20$as$u20$glutin..display..GlDisplay$GT$::version_string::h0b7915697facbe8d(&var_38, &var_c0);
            void* var_48 = &var_38;
            int64_t (* var_40_1)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
            result_1 = &data_c83828;
            int64_t var_80_1 = 1;
            *var_70[8] = 0;
            void** var_78_1 = &var_48;
            var_70 = 1;
            int64_t rax_1 = log::__private_api::loc::h250021ea1f26630a(&data_c83868);
            var_b0 = "alacritty::renderer::platformPic…";
            int64_t var_a8_1 = 0x1d;
            char const* const var_a0_1 = "alacritty::renderer::platformPic…";
            int64_t var_98_1 = 0x1d;
            int64_t var_90_1 = rax_1;
            log::__private_api::log::h0b6680b994d742b1(&result_1, 3, &var_b0);
            result =
                core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcb6d23ea7ad1ac3a(&var_38);
            r14_1 = var_c0;
        }
        
        arg1[1] = r14_1;
        arg1[2] = var_78;
        *arg1 = 2;
    }
    return result;
}
