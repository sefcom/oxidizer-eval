
  uint64_t alacritty::alacritty::h7b6e2cff16345a38(int64_t* arg1)

{
    int64_t var_1028 = 0;
    char const (** const var_1588)[0xda];
    winit::event_loop::EventLoopBuilder$LT$T$GT$::build::h5f83e7c9ef7414c4(&var_1588, 0, 2);
    char const (** const r14)[0xda] = var_1588;
    int128_t var_1580;
    int128_t var_1968 = var_1580;
    int128_t var_1560;
    int128_t var_1948 = var_1560;
    uint64_t result;
    int128_t var_1570;
    int64_t var_1550;
    
    if (r14 != 3)
    {
        void var_1548;
        void var_888;
        memcpy(&var_888, &var_1548, 0x860);
        int128_t var_8c0_1 = var_1968;
        int128_t var_8b0_1 = var_1570;
        int128_t var_8a0_1 = var_1948;
        int64_t var_890_1 = var_1550;
        char const (** const var_8c8)[0xda] = r14;
        winit::platform_impl::linux::EventLoop$LT$T$GT$::create_proxy::h9050477dda0b9974(&var_1588, 
            &var_8c8);
        int128_t var_1958_1 = var_1580;
        var_1968 = var_1588;
        alacritty::logging::initialize::h4559fc8f185863fa(&var_1588, arg1, &var_1968);
        void var_19d0;
        core::result::Result$LT$T$C$E$GT$::expect::hf71b0e4565673865(&var_19d0, &var_1588);
        
        if (core::sync::atomic::atomic_load::h45f93311b58385bb(
            &log::MAX_LOG_LEVEL_FILTER::hfa6ade34c357dc26, 0) >= 3)
        {
            var_1588 = &data_c84480;
            var_1580 = 1;
            *var_1580[8] = 8;
            var_1570 = {0};
            int64_t rax_5 = log::__private_api::loc::h250021ea1f26630a(&data_c844d8);
            var_1968 = "alacritty/etc/alacritty.config/a…";
            *var_1968[8] = 9;
            var_1958_1 = "alacritty/etc/alacritty.config/a…";
            *var_1958_1[8] = 9;
            var_1948 = rax_5;
            log::__private_api::log::h0b6680b994d742b1(&var_1588, 3, &var_1968);
        }
        
        if (core::sync::atomic::atomic_load::h45f93311b58385bb(
            &log::MAX_LOG_LEVEL_FILTER::hfa6ade34c357dc26, 0) >= 3)
        {
            var_1588 = &data_c84490;
            var_1580 = 1;
            void var_1a38;
            *var_1580[8] = &var_1a38;
            var_1570 = {0};
            int64_t rax_7 = log::__private_api::loc::h250021ea1f26630a(&data_c844f0);
            var_1968 = "alacritty/etc/alacritty.config/a…";
            *var_1968[8] = 9;
            var_1958_1 = "alacritty/etc/alacritty.config/a…";
            *var_1958_1[8] = 9;
            var_1948 = rax_7;
            log::__private_api::log::h0b6680b994d742b1(&var_1588, 3, &var_1968);
        }
        
        char const* const* var_1a28;
        char const* const var_1a00;
        void* var_19f8;
        
        if (core::sync::atomic::atomic_load::h45f93311b58385bb(
            &log::MAX_LOG_LEVEL_FILTER::hfa6ade34c357dc26, 0) >= 3)
        {
            _$LT$winit..event_loop..EventLoop$LT$T$GT$$u20$as$u20$raw_window_handle..borrowed..HasDisplayHandle$GT$::display_handle::h6bb5824f2b2c3041(&var_1588, &var_8c8);
            core::result::Result$LT$T$C$E$GT$::unwrap::h8eb3c721dc814788(&var_1968, &var_1588);
            int32_t temp0_1 = var_1968;
            int64_t rax_9;
            rax_9 = temp0_1 == 6;
            char const* const rdx_5 = "X11XidsExhaustedUnexpectedNullIn…";
            
            if (temp0_1 == 6)
                rdx_5 = "WaylandDrmGbmWin32WinRtWebCanvas…";
            
            var_1a00 = rdx_5;
            var_19f8 = (rax_9 << 2) + 3;
            var_1a28 = &var_1a00;
            int64_t (* var_1a20_1)(int64_t* arg1, int64_t arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hde322f69d68256c4;
            var_1588 = &data_c84048;
            var_1580 = 1;
            *var_1570[8] = 0;
            *var_1580[8] = &var_1a28;
            var_1570 = 1;
            int64_t rax_11 = log::__private_api::loc::h250021ea1f26630a(&data_c84520);
            var_1968 = "alacritty/etc/alacritty.config/a…";
            *var_1968[8] = 9;
            var_1958_1 = "alacritty/etc/alacritty.config/a…";
            *var_1958_1[8] = 9;
            var_1948 = rax_11;
            log::__private_api::log::h0b6680b994d742b1(&var_1588, 3, &var_1968);
        }
        
        int64_t var_ce8;
        alacritty::config::load::hc4f1210f544231b4(&var_ce8, arg1);
        int64_t var_a48;
        int64_t var_a40;
        alacritty::log_config_path::h9df1f23b6c9c8bdc(var_a48, var_a40);
        core::sync::atomic::atomic_store::h01a750bd23f9b0c6(
            &log::MAX_LOG_LEVEL_FILTER::hfa6ade34c357dc26, var_ce8);
        alacritty_terminal::tty::setup_env::h5e0cd004a621403f();
        void var_908;
        hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::iter::h162e0aa931f7f7dd(&var_1588, &var_908);
        
        while (true)
        {
            void* rax_12;
            void* rdx_7;
            rax_12 = _$LT$hashbrown..map..Iter$LT$K$C$V$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hf10bfd6a69352b43(&var_1588);
            
            if (!rax_12)
                break;
            
            std::env::set_var::h89598d6444877d2e(rax_12, rdx_7);
        }
        
        char var_ca7;
        char rcx_1 = var_ca7;
        char var_8cf;
        
        if (var_8cf != 2)
            rcx_1 = var_8cf;
        
        int128_t var_19b8;
        char const* const r14_1;
        
        if (!(rcx_1 & 1))
        {
            r14_1 = -0x8000000000000000;
            label_871218:
            void var_19e8;
            char var_cdf;
            core::option::Option$LT$T$GT$::filter::h59a6a3a7b6ee252c(&var_19e8, &var_19d0, var_cdf);
            var_1a00 = r14_1;
            var_19f8 = var_19b8;
            memcpy(&var_1588, arg1, 0x1f0);
            int64_t rbp;
            rbp = 1;
            alacritty::event::Processor::new::h01533ed7aa13421e(&var_1968, &var_ce8, &var_1588, 
                &var_8c8);
            memcpy(&var_1588, &var_8c8, 0x8a0);
            uint64_t result_1;
            void** rdx_12;
            result_1 = alacritty::event::Processor::run::had5b49b6a9979afd(&var_1968, &var_1588);
            result = result_1;
            int128_t var_15e8;
            var_1588 = var_15e8;
            int64_t var_15b8;
            *var_1560[8] = var_15b8;
            var_15e8 = 2;
            
            if (var_1588 != 2)
            {
                int64_t var_1978_1 = *var_1560[8];
                int128_t var_15c8;
                int128_t var_1988_1 = var_15c8;
                int128_t var_15d8;
                int128_t var_1998_1 = var_15d8;
                int128_t var_19a8 = var_1588;
                alacritty::config::monitor::ConfigMonitor::shutdown::h1cc0cbfda162edf7(&var_19a8);
            }
            else
                core::ptr::drop_in_place$LT$core..option..Option$LT$alacritty..config..monitor..ConfigMonitor$GT$$GT$::hc17f70ca91879034(&var_1588);
            
            if (core::sync::atomic::atomic_load::h45f93311b58385bb(
                &log::MAX_LOG_LEVEL_FILTER::hfa6ade34c357dc26, 0) >= 3)
            {
                var_1588 = &data_c844b0;
                var_1580 = 1;
                *var_1580[8] = 8;
                int128_t var_1570_1 = {0};
                int64_t rax_21 = log::__private_api::loc::h250021ea1f26630a(&data_c84550);
                var_1a28 = "alacritty/etc/alacritty.config/a…";
                int64_t var_1a20_3 = 9;
                char const* const var_1a18_1 = "alacritty/etc/alacritty.config/a…";
                int64_t var_1a10_1 = 9;
                int64_t var_1a08_1 = rax_21;
                log::__private_api::log::h0b6680b994d742b1(&var_1588, 3, &var_1a28);
            }
            
            core::ptr::drop_in_place$LT$alacritty..event..Processor$GT$::h7bc2cccc7068a06f(
                &var_1968);
            core::ptr::drop_in_place$LT$alacritty..TemporaryFiles$GT$::hc78d9237c805edef(&var_1a00);
        }
        else
        {
            winit::platform_impl::linux::EventLoop$LT$T$GT$::create_proxy::h9050477dda0b9974(
                &var_1588, &var_8c8);
            int128_t var_1958_2 = var_1580;
            var_1968 = var_1588;
            alacritty::ipc::spawn_ipc_socket::h71ea705a2a85995b(&var_1a00, arg1, &var_1968);
            r14_1 = var_1a00;
            
            if (r14_1 != -0x8000000000000000)
            {
                var_19b8 = var_19f8;
                goto label_871218;
            }
            
            if (!*(arg1 + 0x1e2))
            {
                char* var_1a30 = var_19f8;
                
                if (core::sync::atomic::atomic_load::h45f93311b58385bb(
                    &log::MAX_LOG_LEVEL_FILTER::hfa6ade34c357dc26, 0) >= 2)
                {
                    var_1a28 = &var_1a30;
                    int64_t (* var_1a20_2)(int64_t* arg1, int64_t* arg2) = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Debug$GT$::fmt::he152f8cbd3e2b5ef;
                    var_1588 = &data_c844a0;
                    var_1580 = 1;
                    *var_1570[8] = 0;
                    *var_1580[8] = &var_1a28;
                    var_1570 = 1;
                    int64_t rax_17 = log::__private_api::loc::h250021ea1f26630a(&data_c84538);
                    var_1968 = "alacritty/etc/alacritty.config/a…";
                    *var_1968[8] = 9;
                    var_1958_2 = "alacritty/etc/alacritty.config/a…";
                    *var_1958_2[8] = 9;
                    var_1948 = rax_17;
                    log::__private_api::log::h0b6680b994d742b1(&var_1588, 2, &var_1968);
                }
                
                core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h3428ae91bc3bac8a(&var_1a30);
                goto label_871218;
            }
            
            result = alloc::boxed::Box$LT$T$GT$::new::h1f73520aeb5db4e5(var_19f8);
            core::ptr::drop_in_place$LT$alacritty..config..ui_config..UiConfig$GT$::he83c073c4a426015(&var_ce8);
            core::ptr::drop_in_place$LT$core..option..Option$LT$std..path..PathBuf$GT$$GT$::hce944beccab591c0(&var_19d0);
            core::ptr::drop_in_place$LT$winit..event_loop..EventLoop$LT$alacritty..event..Event$GT$$GT$::h033a5fe375b2f145(&var_8c8);
            core::ptr::drop_in_place$LT$alacritty..cli..Options$GT$::h95027836b0180360(arg1);
        }
    }
    else
    {
        *var_1560[8] = var_1550;
        int128_t zmm1 = var_1570;
        var_1570 = var_1948;
        var_1580 = zmm1;
        var_1588 = var_1968;
        result = alloc::boxed::Box$LT$T$GT$::new::h89897c1e19fc2d41(&var_1588);
        core::ptr::drop_in_place$LT$alacritty..cli..Options$GT$::h95027836b0180360(arg1);
    }
    return result;
}
