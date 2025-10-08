
  int64_t alacritty::display::window::Window::new::ha740ee2ee1f68d27(int64_t* arg1, int64_t* arg2, void* arg3, void* arg4, void* arg5, void* arg6, char arg7)

{
    void* var_860 = arg6;
    char var_858 = arg7;
    uint128_t var_850;
    _$LT$alacritty..config..window..Identity$u20$as$u20$core..clone..Clone$GT$::clone::h45909795b68e7404(&var_850, arg4);
    void var_240;
    alacritty::display::window::Window::get_platform_window::h039c940afcd4b52c(&var_240, &var_850, 
        *(arg3 + 0x1b2), arg6, arg7);
    void** const var_660;
    char const* const var_450;
    
    if (*(arg3 + 0x198) == 1)
    {
        int32_t rbp_1 = *(arg3 + 0x19c);
        int32_t r12_1 = *(arg3 + 0x1a0);
        memcpy(&var_660, &var_240, 0x210);
        int32_t rax_1;
        int32_t rdx_1;
        rax_1 = _$LT$dpi..PhysicalPosition$LT$P$GT$$u20$as$u20$core..convert..From$LT$$LP$X$C$X$RP$$GT$$GT$::from::h40af1dcdd00caafc(rbp_1, r12_1);
        winit::window::WindowAttributes::with_position::h1bf9eaf36441d661(&var_450, &var_660, 
            rax_1, rdx_1);
        memcpy(&var_240, &var_450, 0x210);
    }
    
    void** rax_2 = *(arg5 + 0x98);
    *(arg5 + 0x98) = -0x8000000000000000;
    int128_t var_658;
    
    if (-(rax_2) != -0x8000000000000000)
        var_658 = *(arg5 + 0xa0);
    
    var_660 = rax_2;
    int64_t var_878;
    core::option::Option$LT$T$GT$::or_else::h7d4adfe08a880495(&var_878, &var_660, arg2);
    int128_t var_808;
    int128_t var_738;
    int64_t var_728;
    int64_t var_448;
    int64_t var_438;
    
    if (var_878 != -0x8000000000000000)
    {
        var_808 = var_878;
        
        if (core::sync::atomic::atomic_load::h45f93311b58385bb(
            &log::MAX_LOG_LEVEL_FILTER::hfa6ade34c357dc26, 0) >= 4)
        {
            var_738 = &var_808;
            *var_738[8] = _$LT$winit..window..ActivationToken$u20$as$u20$core..fmt..Debug$GT$::fmt::hb876fc99af1d2865;
            var_660 = &data_c82268;
            var_658 = 1;
            int64_t var_640_1 = 0;
            *var_658[8] = &var_738;
            int64_t var_648_1 = 1;
            int64_t rax_5 = log::__private_api::loc::h250021ea1f26630a(&data_c82288);
            var_450 = &data_502190;
            var_448 = 0x1a;
            char const* const var_440_1 = &data_502190;
            var_438 = 0x1a;
            int64_t var_430_1 = rax_5;
            log::__private_api::log::h0b6680b994d742b1(&var_660, 4, &var_450);
        }
        
        memcpy(&var_660, &var_240, 0x210);
        int64_t var_868;
        var_728 = var_868;
        var_738 = var_808;
        _$LT$winit..window..WindowAttributes$u20$as$u20$winit..platform..startup_notify..WindowAttributesExtStartupNotify$GT$::with_activation_token::h82c73adcef1699a9(&var_450, &var_660, &var_738);
        memcpy(&var_240, &var_450, 0x210);
        winit::platform::startup_notify::reset_activation_token_env::hda9a25b5ee08d16a();
    }
    else
        core::ptr::drop_in_place$LT$core..option..Option$LT$winit..window..ActivationToken$GT$$GT$::h4991cd49d9d3d7d3(&var_878);
    
    if (!*arg2 && *(arg3 + 0x180) & 1)
    {
        int32_t var_1f0_1 = 1;
        int32_t var_1ec_1 = *(arg3 + 0x184);
    }
    
    memcpy(&var_660, &var_240, 0x210);
    winit::window::WindowAttributes::with_title::hbe0805e9ecb8e95b(&var_450, &var_660, &var_850);
    char rax_8 = *(arg3 + 0x1b1);
    memcpy(&var_660, &var_450, 0x205);
    int32_t var_247;
    int32_t var_457 = var_247;
    var_457 = rax_8;
    char rax_10 = *(arg3 + 0x1b3);
    bool var_45b = rax_10 == 1;
    int16_t var_45a = 0x100;
    char var_458 = *(arg3 + 0x1ae);
    int64_t rax_11;
    
    if (rax_10 != 2)
        rax_11 = -0x7ffffffffffffffd;
    else
    {
        *var_738[8] = -0x7fffffffffffffff;
        rax_11 = -0x7ffffffffffffffe;
    }
    
    var_738 = rax_11;
    winit::window::WindowAttributes::with_fullscreen::h8783254c26ad431b(&var_450, &var_660, 
        &var_738);
    char var_243 = *(arg3 + 0x1b0) + 1;
    memcpy(&var_240, &var_450, 0x210);
    memcpy(&var_660, &var_240, 0x210);
    winit::event_loop::ActiveEventLoop::create_window::h15a272326f042802(&var_450, arg2, &var_660);
    
    if (var_450 == 1)
    {
        int64_t var_418;
        int64_t var_708_1 = var_418;
        int128_t zmm0_4 = var_448;
        int128_t zmm1_1 = var_438;
        int128_t var_428;
        int128_t var_718_1 = var_428;
        var_728 = zmm1_1;
        var_738 = zmm0_4;
        arg1[8] = var_418;
        *(arg1 + 0x30) = var_428;
        *(arg1 + 0x20) = zmm1_1;
        *(arg1 + 0x10) = zmm0_4;
        arg1[1] = 7;
        *arg1 = -0x8000000000000000;
        return 
            core::ptr::drop_in_place$LT$alacritty..config..window..Identity$GT$::h7bd4b16e933064bb(
            &var_850);
    }
    
    memcpy(&var_738, &var_448, 0xd0);
    memcpy(&var_808, &var_738, 0xd0);
    winit::window::Window::set_cursor::h058b386c12dba32c(var_808, *var_808[8], 8);
    winit::window::Window::set_ime_allowed::hf8d1a377be69edc4(&var_808, 1);
    winit::window::Window::set_ime_purpose::h97670e97ca4bd463(var_808, *var_808[8]);
    winit::window::Window::set_transparent::haabd4e4fcc61e0ec(var_808, *var_808[8], 
        1f > *(arg3 + 0x1a4));
    int64_t rdx_10;
    int64_t zmm0_5;
    zmm0_5 = winit::window::Window::scale_factor::h73da13abcba96161(var_808, *var_808[8]);
    var_878 = zmm0_5;
    int64_t rax_15;
    char rcx_7;
    rax_15 = core::sync::atomic::atomic_load::h45f93311b58385bb(
        &log::MAX_LOG_LEVEL_FILTER::hfa6ade34c357dc26, 0);
    
    if (rax_15 >= 3)
    {
        var_738 = &var_878;
        *var_738[8] = core::fmt::float::_$LT$impl$u20$core..fmt..Display$u20$for$u20$f64$GT$::fmt::h78a04ef564c69060;
        var_660 = &data_c82278;
        var_658 = 1;
        int64_t var_640_2 = 0;
        *var_658[8] = &var_738;
        int64_t var_648_2 = 1;
        int64_t rax_16 = log::__private_api::loc::h250021ea1f26630a(&data_c822a0);
        var_450 = &data_502190;
        var_448 = 0x1a;
        char const* const var_440_2 = &data_502190;
        int64_t var_438_1 = 0x1a;
        int64_t var_430_2 = rax_16;
        rcx_7 = log::__private_api::log::h0b6680b994d742b1(&var_660, 3, &var_450);
    }
    
    _$LT$winit..window..Window$u20$as$u20$raw_window_handle..borrowed..HasWindowHandle$GT$::window_handle::ha8ca16578ae5c78c(&var_660, &var_808, rdx_10, rcx_7);
    core::result::Result$LT$T$C$E$GT$::unwrap::h93d24170a6c75764(&var_450, &var_660);
    int32_t rbp_2 = var_450;
    char r14_2 = *(arg5 + 0x30);
    int64_t var_840;
    arg1[2] = var_840;
    *arg1 = var_850;
    uint64_t var_888_1 = var_878;
    memcpy(&arg1[4], &var_808, 0xd0);
    arg1[3] = var_888_1;
    arg1[0x1e] = 1;
    *(arg1 + 0xf2) = r14_2;
    *(arg1 + 0xf3) = rbp_2 == 4;
    *(arg1 + 0xf4) = 0x801;
    void var_838;
    return core::ptr::drop_in_place$LT$$LT$alacritty_terminal..term..Term$LT$alacritty..event..EventProxy$GT$$u20$as$u20$vte..ansi..Handler$GT$..dynamic_color_sequence..$u7b$$u7b$closure$u7d$$u7d$$GT$::h7cc01ca7e85c221c(&var_838);
}
