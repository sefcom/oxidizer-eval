
  int64_t alacritty::display::Display::swap_buffers::h31ffb86992ba66ce(void* arg1)

{
    int128_t var_108;
    char const (** const var_c0)[0x2e];
    int32_t var_58;
    int64_t result;
    
    if (*(arg1 + 0x560) == 8 || *(arg1 + 0x2a8) & 1 || *(arg1 + 0x588) != 6 || *(arg1 + 0xc0))
    {
        result = _$LT$glutin..surface..Surface$LT$T$GT$$u20$as$u20$glutin..surface..GlSurface$LT$T$GT$$GT$::swap_buffers::hd28ac391abbf1f4d(&var_58, arg1 + 0x560, arg1 + 0x2a8);
        
        if (var_58 == 2)
            return result;
    }
    else
    {
        float zmm2 = *(arg1 + 0x7a8);
        int32_t rax_2 = zmm2;
        
        if (zmm2 < 0f)
            rax_2 = 0;
        
        float zmm3 = *(arg1 + 0x7ac);
        
        if (zmm2 > 4.29496704e+09f)
            rax_2 = -1;
        
        int32_t rsi_1 = zmm3;
        
        if (zmm3 < 0f)
            rsi_1 = 0;
        
        zmm2 = *(arg1 + 0x7b0);
        
        if (zmm3 > 4.29496704e+09f)
            rsi_1 = -1;
        
        int32_t rdi_3 = zmm2;
        
        if (zmm2 < 0f)
            rdi_3 = 0;
        
        bool cond:2_1 = zmm2 > 4.29496704e+09f;
        zmm2 = *(arg1 + 0x7b4);
        
        if (cond:2_1)
            rdi_3 = -1;
        
        int32_t r8_1 = zmm2;
        
        if (zmm2 < 0f)
            r8_1 = 0;
        
        bool cond:3_1 = zmm2 > 4.29496704e+09f;
        zmm2 = *(arg1 + 0x7b8);
        
        if (cond:3_1)
            r8_1 = -1;
        
        int32_t r9_1 = zmm2;
        
        if (zmm2 < 0f)
            r9_1 = 0;
        
        bool cond:4_1 = zmm2 > 4.29496704e+09f;
        zmm2 = *(arg1 + 0x7bc);
        
        if (cond:4_1)
            r9_1 = -1;
        
        int32_t r10_1 = zmm2;
        
        if (zmm2 < 0f)
            r10_1 = 0;
        
        int64_t rcx_1 = *(arg1 + 0x798);
        
        if (zmm2 > 4.29496704e+09f)
            r10_1 = -1;
        
        int128_t var_f8;
        var_f8 = rax_2;
        *var_f8[4] = rsi_1;
        *var_f8[8] = rdi_3;
        *var_f8[0xc] = r8_1;
        int128_t var_e8;
        var_e8 = r9_1;
        *var_e8[4] = r10_1;
        var_108 = rcx_1;
        *var_108[8] = rcx_1;
        alacritty::display::damage::DamageTracker::shape_frame_damage::h7cbe9008dfbb19f8(&var_c0, 
            arg1, &var_108);
        int64_t var_b8;
        int32_t var_b0;
        glutin::api::egl::surface::Surface$LT$T$GT$::swap_buffers_with_damage::hcfdce5be1c237eed(
            &var_58, *(arg1 + 0x570), *(arg1 + 0x580), arg1 + 0x2b0, var_b8, var_b0);
        result = core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$glutin..surface..Rect$GT$$GT$::h23eaac4cc5abca69(var_c0, var_b8);
        
        if (var_58 == 2)
            return result;
    }
    int128_t var_28;
    int128_t var_d8_1 = var_28;
    int128_t var_38;
    int128_t var_e8_1 = var_38;
    int128_t var_48;
    int128_t var_f8_1 = var_48;
    var_108 = var_58;
    
    if (core::sync::atomic::atomic_load::h45f93311b58385bb(
        &log::MAX_LOG_LEVEL_FILTER::hfa6ade34c357dc26, 0) >= 4)
    {
        int128_t* var_90 = &var_108;
        int64_t (* var_88_1)(void* arg1, int64_t* arg2) =
            _$LT$glutin..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h6356b3d53669c523;
        var_c0 = &data_c825f8;
        int64_t var_b8_1 = 1;
        int64_t var_a0_1 = 0;
        int128_t** var_b0_1 = &var_90;
        int64_t var_a8_1 = 1;
        int64_t rax_1 = log::__private_api::loc::h250021ea1f26630a(&data_c82608);
        char const* const var_80 = "alacritty::displayfailed to swap…";
        int64_t var_78_1 = 0x12;
        char const* const var_70_1 = "alacritty::displayfailed to swap…";
        int64_t var_68_1 = 0x12;
        int64_t var_60_1 = rax_1;
        log::__private_api::log::h0b6680b994d742b1(&var_c0, 4, &var_80);
    }
    
    return core::ptr::drop_in_place$LT$glutin..error..Error$GT$::h7a096d9b46c3b785(&var_108);
}
