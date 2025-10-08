
  fn alacritty::alacritty::h7b6e2cff16345a38(arg1: *mut i64) -> u64

{
    let var_1028: i64 = 0;
    let mut var_1588: *mut *mut [i8; 0xda];
    winit::event_loop::EventLoopBuilder$LT$T$GT$::build::h5f83e7c9ef7414c4(&var_1588, 0, 2);
    let r14: *mut *mut [i8; 0xda] = var_1588;
    let mut var_1580: i128;
    let mut var_1968: i128 = var_1580;
    let mut var_1560: i128;
    let mut var_1948: i128 = var_1560;
    let mut result: u64;
    let mut var_1570: i128;
    let var_1550: i64;
    
    if r14 != 3
    {
        let mut var_1548: ();
        let mut var_888: ();
        memcpy(&var_888, &var_1548, 0x860);
        let var_8c0_1: i128 = var_1968;
        let var_8b0_1: i128 = var_1570;
        let var_8a0_1: i128 = var_1948;
        let var_890_1: i64 = var_1550;
        let mut var_8c8: *mut *mut [i8; 0xda] = r14;
        winit::platform_impl::linux::EventLoop$LT$T$GT$::create_proxy::h9050477dda0b9974(&var_1588, 
            &var_8c8);
        let mut var_1958_1: i128 = var_1580;
        var_1968 = var_1588;
        alacritty::logging::initialize::h4559fc8f185863fa(&var_1588, arg1, &var_1968);
        let mut var_19d0: ();
        core::result::Result$LT$T$C$E$GT$::expect::hf71b0e4565673865(&var_19d0, &var_1588);
        
        if core::sync::atomic::atomic_load::h45f93311b58385bb(
            &log::MAX_LOG_LEVEL_FILTER::hfa6ade34c357dc26, 0) >= 3
        {
            var_1588 = &data_c84480;
            var_1580 = 1;
            *var_1580[8] = 8;
            var_1570 = {0};
            let rax_5: i64 = log::__private_api::loc::h250021ea1f26630a(&data_c844d8);
            var_1968 = "alacritty/etc/alacritty.config/a…";
            *var_1968[8] = 9;
            var_1958_1 = "alacritty/etc/alacritty.config/a…";
            *var_1958_1[8] = 9;
            var_1948 = rax_5;
            log::__private_api::log::h0b6680b994d742b1(&var_1588, 3, &var_1968);
        }
        
        if core::sync::atomic::atomic_load::h45f93311b58385bb(
            &log::MAX_LOG_LEVEL_FILTER::hfa6ade34c357dc26, 0) >= 3
        {
            var_1588 = &data_c84490;
            var_1580 = 1;
            let mut var_1a38: ();
            *var_1580[8] = &var_1a38;
            var_1570 = {0};
            let rax_7: i64 = log::__private_api::loc::h250021ea1f26630a(&data_c844f0);
            var_1968 = "alacritty/etc/alacritty.config/a…";
            *var_1968[8] = 9;
            var_1958_1 = "alacritty/etc/alacritty.config/a…";
            *var_1958_1[8] = 9;
            var_1948 = rax_7;
            log::__private_api::log::h0b6680b994d742b1(&var_1588, 3, &var_1968);
        }
        
        let mut var_1a28: *const *const i8;
        let mut var_1a00: *const i8;
        let mut var_19f8: *mut c_void;
        
        if core::sync::atomic::atomic_load::h45f93311b58385bb(
            &log::MAX_LOG_LEVEL_FILTER::hfa6ade34c357dc26, 0) >= 3
        {
            _$LT$winit..event_loop..EventLoop$LT$T$GT$$u20$as$u20$raw_window_handle..borrowed..HasDisplayHandle$GT$::display_handle::h6bb5824f2b2c3041(&var_1588, &var_8c8);
            core::result::Result$LT$T$C$E$GT$::unwrap::h8eb3c721dc814788(&var_1968, &var_1588);
            let temp0_1: i32 = var_1968;
            let mut rax_9: i64;
            rax_9 = temp0_1 == 6;
            let mut rdx_5: *const i8 = "X11XidsExhaustedUnexpectedNullIn…";
            
            if temp0_1 == 6
            {
                rdx_5 = "WaylandDrmGbmWin32WinRtWebCanvas…";
            }
            
            var_1a00 = rdx_5;
            var_19f8 = (rax_9 << 2) + 3;
            var_1a28 = &var_1a00;
            let var_1a20_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hde322f69d68256c4;
            var_1588 = &data_c84048;
            var_1580 = 1;
            *var_1570[8] = 0;
            *var_1580[8] = &var_1a28;
            var_1570 = 1;
            let rax_11: i64 = log::__private_api::loc::h250021ea1f26630a(&data_c84520);
            var_1968 = "alacritty/etc/alacritty.config/a…";
            *var_1968[8] = 9;
            var_1958_1 = "alacritty/etc/alacritty.config/a…";
            *var_1958_1[8] = 9;
            var_1948 = rax_11;
            log::__private_api::log::h0b6680b994d742b1(&var_1588, 3, &var_1968);
        }
        
        let mut var_ce8: i64;
        alacritty::config::load::hc4f1210f544231b4(&var_ce8, arg1);
        let var_a48: i64;
        let var_a40: i64;
        alacritty::log_config_path::h9df1f23b6c9c8bdc(var_a48, var_a40);
        core::sync::atomic::atomic_store::h01a750bd23f9b0c6(
            &log::MAX_LOG_LEVEL_FILTER::hfa6ade34c357dc26, var_ce8);
        alacritty_terminal::tty::setup_env::h5e0cd004a621403f();
        let mut var_908: ();
        hashbrown::map::HashMap$LT$K$C$V$C$S$C$A$GT$::iter::h162e0aa931f7f7dd(&var_1588, &var_908);
        
        loop
        {
            let mut rax_12: *mut c_void;
            let mut rdx_7: *mut c_void;
            rax_12 = _$LT$hashbrown..map..Iter$LT$K$C$V$GT$$u20$as$u20$core..iter..traits..iterator..Iterator$GT$::next::hf10bfd6a69352b43(&var_1588);
            
            if rax_12 == 0
            {
                break;
            }
            
            std::env::set_var::h89598d6444877d2e(rax_12, rdx_7);
        }
        
        let var_ca7: i8;
        let mut rcx_1: i8 = var_ca7;
        let var_8cf: i8;
        
        if var_8cf != 2
        {
            rcx_1 = var_8cf;
        }
        
        let mut var_19b8: i128;
        let mut r14_1: *const i8;
        
        if (rcx_1 & 1) == 0
        {
            r14_1 = -0x8000000000000000;
            'label_871218:
            let mut var_19e8: ();
            let var_cdf: i8;
            core::option::Option$LT$T$GT$::filter::h59a6a3a7b6ee252c(&var_19e8, &var_19d0, var_cdf);
            var_1a00 = r14_1;
            var_19f8 = var_19b8;
            memcpy(&var_1588, arg1, 0x1f0);
            let mut rbp: i64;
            rbp = 1;
            alacritty::event::Processor::new::h01533ed7aa13421e(&var_1968, &var_ce8, &var_1588, 
                &var_8c8);
            memcpy(&var_1588, &var_8c8, 0x8a0);
            let mut result_1: u64;
            let mut rdx_12: *mut *mut c_void;
            result_1 = alacritty::event::Processor::run::had5b49b6a9979afd(&var_1968, &var_1588);
            result = result_1;
            let mut var_15e8: i128;
            var_1588 = var_15e8;
            let var_15b8: i64;
            *var_1560[8] = var_15b8;
            var_15e8 = 2;
            
            if var_1588 != 2
            {
                let var_1978_1: i64 = *var_1560[8];
                let var_15c8: i128;
                let var_1988_1: i128 = var_15c8;
                let var_15d8: i128;
                let var_1998_1: i128 = var_15d8;
                let mut var_19a8: i128 = var_1588;
                alacritty::config::monitor::ConfigMonitor::shutdown::h1cc0cbfda162edf7(&var_19a8);
            }
            else
            {
                core::ptr::drop_in_place$LT$core..option..Option$LT$alacritty..config..monitor..ConfigMonitor$GT$$GT$::hc17f70ca91879034(&var_1588);
            }
            
            if core::sync::atomic::atomic_load::h45f93311b58385bb(
                &log::MAX_LOG_LEVEL_FILTER::hfa6ade34c357dc26, 0) >= 3
            {
                var_1588 = &data_c844b0;
                var_1580 = 1;
                *var_1580[8] = 8;
                let var_1570_1: i128 = {0};
                let rax_21: i64 = log::__private_api::loc::h250021ea1f26630a(&data_c84550);
                var_1a28 = "alacritty/etc/alacritty.config/a…";
                let var_1a20_3: i64 = 9;
                let var_1a18_1: *const i8 = "alacritty/etc/alacritty.config/a…";
                let var_1a10_1: i64 = 9;
                let var_1a08_1: i64 = rax_21;
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
            let mut var_1958_2: i128 = var_1580;
            var_1968 = var_1588;
            alacritty::ipc::spawn_ipc_socket::h71ea705a2a85995b(&var_1a00, arg1, &var_1968);
            r14_1 = var_1a00;
            
            if r14_1 != -0x8000000000000000
            {
                var_19b8 = var_19f8;
                goto 'label_871218;
            }
            
            if *arg1.byte_offset(0x1e2) == 0
            {
                let mut var_1a30: *mut i8 = var_19f8;
                
                if core::sync::atomic::atomic_load::h45f93311b58385bb(
                    &log::MAX_LOG_LEVEL_FILTER::hfa6ade34c357dc26, 0) >= 2
                {
                    var_1a28 = &var_1a30;
                    let var_1a20_2: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = _$LT$std..io..error..Error$u20$as$u20$core..fmt..Debug$GT$::fmt::he152f8cbd3e2b5ef;
                    var_1588 = &data_c844a0;
                    var_1580 = 1;
                    *var_1570[8] = 0;
                    *var_1580[8] = &var_1a28;
                    var_1570 = 1;
                    let rax_17: i64 = log::__private_api::loc::h250021ea1f26630a(&data_c84538);
                    var_1968 = "alacritty/etc/alacritty.config/a…";
                    *var_1968[8] = 9;
                    var_1958_2 = "alacritty/etc/alacritty.config/a…";
                    *var_1958_2[8] = 9;
                    var_1948 = rax_17;
                    log::__private_api::log::h0b6680b994d742b1(&var_1588, 2, &var_1968);
                }
                
                core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h3428ae91bc3bac8a(&var_1a30);
                goto 'label_871218;
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
        let zmm1: i128 = var_1570;
        var_1570 = var_1948;
        var_1580 = zmm1;
        var_1588 = var_1968;
        result = alloc::boxed::Box$LT$T$GT$::new::h89897c1e19fc2d41(&var_1588);
        core::ptr::drop_in_place$LT$alacritty..cli..Options$GT$::h95027836b0180360(arg1);
    }
    result
}
