
  fn alacritty::logging::Logger::message_bar_log::he07f60265efa67f3(arg1: *mut c_void, arg2: *mut c_void, arg3: i64)

{
    let mut var_1e8: i64 = arg3;
    let rcx: i64;
    let var_1e0: i64 = rcx;
    let r13: i64 = *arg2.byte_offset(0x30);
    let mut r12: i64;
    
    if r13 == 1
    {
        r12 = 0;
        'label_85d369:
        let mut var_1d8: i8;
        let rdx: u64 = std::sync::poison::mutex::Mutex$LT$T$GT$::lock::h0356afe7acdc80ff(&var_1d8, 
            arg1.byte_offset(0x78));
        
        if (var_1d8 & 1) == 0
        {
            let mut var_1c8: i8;
            let var_251_1: i8 = var_1c8;
            let mut var_248: *mut c_void = &data_c830c0;
            let var_240_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hde322f69d68256c4;
            var_1d8 = &data_c83060;
            let var_1d0_1: i64 = 1;
            let var_1b8_1: i64 = 0;
            var_1c8 = &var_248;
            let var_1c0_1: i64 = 1;
            let mut var_f8: i128;
            let rdx_1: u64 = core::option::Option$LT$T$GT$::map_or_else::h50b4264313244ea1(&var_f8, 
                0, rdx, &var_1d8);
            let mut var_208: i128 = var_f8;
            let var_e8: i64;
            let var_1f8_1: i64 = var_e8;
            let mut var_210: i64 = r13;
            var_248 = arg2.byte_offset(0x50);
            var_1d8 = &var_210;
            let var_1d0_2: fn(arg1: *mut i64, arg2: *mut i64) -> i64 =
                _$LT$log..Level$u20$as$u20$core..fmt..Display$GT$::fmt::hf3e2f8abd8007cc2;
            var_1c8 = &var_248;
            let var_1c0_2: fn(arg1: *mut i64, arg2: *mut i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5a9ea69be6d86aca;
            let var_1b8_2: *mut i64 = &var_1e8;
            let var_1b0_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hde322f69d68256c4;
            let var_1a8_1: *mut i128 = &var_208;
            let var_1a0_1: fn(arg1: *mut c_void, arg2: i64) -> i64 = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
            var_f8 = &data_c83070;
            *var_f8[8] = 5;
            let var_d8_1: i64 = 0;
            let var_e8_1: *mut i8 = &var_1d8;
            let mut var_e0_1: i64 = 4;
            let mut var_110: i128;
            core::option::Option$LT$T$GT$::map_or_else::h50b4264313244ea1(&var_110, 0, rdx_1, 
                &var_f8);
            var_248 = var_110;
            let var_218_1: i8 = r12;
            let mut var_230: i64 = -0x8000000000000000;
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h4cfefc754dbf8fee(&var_f8, *arg2.byte_offset(0x38), *arg2.byte_offset(0x40));
            var_1c8 = var_e8_1;
            var_1d8 = var_f8;
            core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::h6a0f98c288fb7106(&var_230);
            let var_220_1: i64 = var_1c8;
            var_230 = var_1d8;
            let var_c0_1: i64 = var_218_1;
            let var_228: i128;
            let var_d0_1: i128 = var_228;
            let var_100: i64;
            var_e0_1 = var_100;
            var_f8 = var_248;
            var_f8 = -0x7ffffffffffffffe;
            alacritty::event::Event::new::hfaf9b093bcbfdb2b(&var_1d8, &var_f8, 0);
            let var_1d0: *mut i32;
            winit::event_loop::EventLoopProxy$LT$T$GT$::send_event::ha003452b73db1a9a(&var_f8, 
                &var_1d0[2]);
            core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$winit..event_loop..EventLoopClosed$LT$alacritty..event..Event$GT$$GT$$GT$::ha34e38cbba7ecdb0(&var_f8);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcb6d23ea7ad1ac3a(&var_208);
            core::ptr::drop_in_place$LT$std..sync..poison..mutex..MutexGuard$LT$alacritty..logging..OnDemandLogFile$GT$$GT$::h04acd6e250735d2b(var_1d0, var_251_1);
        }
        else
        {
            core::ptr::drop_in_place$LT$core..result..Result$LT$std..sync..poison..mutex..MutexGuard$LT$alacritty..logging..OnDemandLogFile$GT$$C$std..sync..poison..PoisonError$LT$std..sync..poison..mutex..MutexGuard$LT$alacritty..logging..OnDemandLogFile$GT$$GT$$GT$$GT$::h1662b955727f946c(&var_1d8);
        }
    }
    else if r13 == 2
    {
        r12 = 1;
        goto 'label_85d369;
    }
}
