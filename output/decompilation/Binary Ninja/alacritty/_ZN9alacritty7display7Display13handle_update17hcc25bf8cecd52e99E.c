
  int64_t alacritty::display::Display::handle_update::hcc25bf8cecd52e99(void* arg1, void* arg2, int64_t* arg3, int64_t* arg4, void* arg5, void* arg6)

{
    int64_t var_110;
    memcpy(&var_110, arg1 + 0x480, 0xe0);
    *(arg1 + 0x480) = -0x8000000000000000;
    *(arg1 + 0x550) = 0;
    *(arg1 + 0x55c) = 0;
    float zmm1 = *(arg1 + 0x7b4);
    float var_1d8 = (*(arg1 + 0x7b0));
    float var_1d4 = zmm1;
    int32_t var_1cc;
    uint128_t zmm0;
    char var_40;
    
    if (!(0 + -(var_110)))
    {
        core::option::Option$LT$T$GT$::get_or_insert_with::hfb46f52e27157af0(arg1 + 0x834);
        *(arg1 + 0x835) = 1;
        zmm0 = alacritty::display::Display::update_font_size::h86a7d3c64310d9e8(arg1 + 0x5f8, 
            *(arg6 + 0x12c), *(arg6 + 0x12d), &var_110);
        var_1d8 = zmm0;
        var_1d4 = zmm1;
        
        if (core::sync::atomic::atomic_load::h45f93311b58385bb(
            &log::MAX_LOG_LEVEL_FILTER::hfa6ade34c357dc26, 0) >= 3)
        {
            float* var_188 = &var_1d8;
            int64_t (* var_180_1)(int32_t* arg1, int64_t* arg2) = core::fmt::float::_$LT$impl$u20$core..fmt..Display$u20$for$u20$f32$GT$::fmt::ha5084164000ea822;
            float* var_178_1 = &var_1d4;
            int64_t (* var_170_1)(int32_t* arg1, int64_t* arg2) = core::fmt::float::_$LT$impl$u20$core..fmt..Display$u20$for$u20$f32$GT$::fmt::ha5084164000ea822;
            void** const var_140 = &data_c82408;
            int64_t var_138_1 = 2;
            int64_t var_120_1 = 0;
            float** var_130_1 = &var_188;
            int64_t var_128_1 = 2;
            int64_t rax_4 = log::__private_api::loc::h250021ea1f26630a(&data_c82620);
            char const* const var_168 = "alacritty::displayfailed to swap…";
            int64_t var_160_1 = 0x12;
            char const* const var_158_1 = "alacritty::displayfailed to swap…";
            int64_t var_150_1 = 0x12;
            int64_t var_148_1 = rax_4;
            log::__private_api::log::h0b6680b994d742b1(&var_140, 3, &var_168);
        }
        
        *(arg1 + 0x48) = 1;
        
        if (var_40 & 1)
        {
            label_84cb76:
            int32_t var_3c;
            zmm0 = var_3c;
            var_1cc = zmm0;
            int32_t var_38;
            zmm0 = var_38;
        }
        else
        {
            var_1cc = (*(arg1 + 0x7a8));
            zmm0 = *(arg1 + 0x7ac);
        }
    }
    else
    {
        char var_33;
        
        if (var_33 == 1)
        {
            core::option::Option$LT$T$GT$::get_or_insert_with::hfb46f52e27157af0(arg1 + 0x834);
            *(arg1 + 0x835) = 1;
        }
        
        if (var_40 & 1)
            goto label_84cb76;
        
        var_1cc = (*(arg1 + 0x7a8));
        zmm0 = *(arg1 + 0x7ac);
    }
    int32_t var_1d0 = zmm0;
    zmm1 = *(arg1 + 0x338);
    zmm0 = *(arg6 + 0x1a8);
    zmm0 = zmm0 * zmm1;
    int32_t var_1c4 = floorf(zmm0);
    uint128_t zmm0_1;
    zmm0_1 = *(arg6 + 0x1aa);
    zmm0_1 = zmm0_1 * zmm1;
    uint128_t zmm5 = floorf(zmm0_1);
    int64_t var_1c0;
    alacritty::display::SizeInfo::new::hc493ea048056a091(&var_1c0, *(arg6 + 0x1ac), var_1cc, 
        var_1d0, var_1d8, var_1d4, var_1c4, zmm5);
    int64_t rax_9 = core::option::Option$LT$T$GT$::map_or::h79f8debf1d8849b2(
        alloc::collections::vec_deque::VecDeque$LT$T$C$A$GT$::get::h75792986f4a34d45(arg4), 
        &var_1c0) + *(arg5 + 0x1100);
    int64_t rcx_1 = var_1c0;
    int64_t rdi_8 = 0;
    
    if (rcx_1 >= rax_9)
        rdi_8 = rcx_1 - rax_9;
    
    int64_t rax_10 = core::cmp::Ord::max::h20b6d33cbe488162(rdi_8, 1);
    var_1c0 = rax_10;
    
    if (*(arg6 + 0x1af))
        alacritty::display::window::Window::set_resize_increments::hf3788ac180acdeb0(
            *(arg1 + 0x340), *(arg1 + 0x348));
    
    int64_t var_1b8;
    int64_t r15;
    
    if (*(arg1 + 0x798) != rax_10)
    {
        r15 = var_1b8;
        label_84cdfc:
        int32_t var_1a8;
        _mm_min_ss(0x477fff00, __maxss_xmmss_memss({0}, var_1a8));
        int32_t var_1a4;
        _mm_min_ss(0x477fff00, __maxss_xmmss_memss({0}, var_1a4));
        _$LT$alacritty_terminal..event_loop..Notifier$u20$as$u20$alacritty_terminal..event..OnResize$GT$::on_resize::hff461c3ae1dcea52(arg3);
        alacritty_terminal::term::Term$LT$T$GT$::resize::h536793f9ff690001(arg2, rax_10, r15);
        alacritty::display::damage::DamageTracker::resize::h3618c97bcb1847cf(arg1, rax_10, r15);
    }
    else
    {
        r15 = var_1b8;
        
        if (*(arg1 + 0x7a0) != r15)
            goto label_84cdfc;
    }
    
    if (!_$LT$alacritty..display..SizeInfo$LT$T$GT$$u20$as$u20$core..cmp..PartialEq$GT$::eq::hc9e676d2b49b5c78(&var_1c0, arg1 + 0x798))
    {
        core::option::Option$LT$T$GT$::get_or_insert_with::hfb46f52e27157af0(arg1 + 0x834);
        *(arg1 + 0x834) = 1;
        *(arg5 + 0x1160) = 2;
    }
    
    int64_t var_1a0;
    *(arg1 + 0x7b8) = var_1a0;
    int128_t zmm0_4 = var_1c0;
    int128_t var_1b0;
    *(arg1 + 0x7a8) = var_1b0;
    *(arg1 + 0x798) = zmm0_4;
    return core::ptr::drop_in_place$LT$alacritty..display..DisplayUpdate$GT$::h6af71f2fb5d8a7e2(
        &var_110);
}
