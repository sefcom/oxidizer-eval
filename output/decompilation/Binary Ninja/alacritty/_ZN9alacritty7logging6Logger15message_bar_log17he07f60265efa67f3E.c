
  void alacritty::logging::Logger::message_bar_log::he07f60265efa67f3(void* arg1, void* arg2, int64_t arg3)

{
    int64_t var_1e8 = arg3;
    int64_t rcx;
    int64_t var_1e0 = rcx;
    int64_t r13 = *(arg2 + 0x30);
    int64_t r12;
    
    if (r13 == 1)
    {
        r12 = 0;
        label_85d369:
        char var_1d8;
        uint64_t rdx = std::sync::poison::mutex::Mutex$LT$T$GT$::lock::h0356afe7acdc80ff(&var_1d8, 
            arg1 + 0x78);
        
        if (!(var_1d8 & 1))
        {
            char var_1c8;
            char var_251_1 = var_1c8;
            void* var_248 = &data_c830c0;
            int64_t (* var_240_1)(int64_t* arg1, int64_t arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hde322f69d68256c4;
            var_1d8 = &data_c83060;
            int64_t var_1d0_1 = 1;
            int64_t var_1b8_1 = 0;
            var_1c8 = &var_248;
            int64_t var_1c0_1 = 1;
            int128_t var_f8;
            uint64_t rdx_1 = core::option::Option$LT$T$GT$::map_or_else::h50b4264313244ea1(&var_f8, 
                0, rdx, &var_1d8);
            int128_t var_208 = var_f8;
            int64_t var_e8;
            int64_t var_1f8_1 = var_e8;
            int64_t var_210 = r13;
            var_248 = arg2 + 0x50;
            var_1d8 = &var_210;
            int64_t (* var_1d0_2)(int64_t* arg1, int64_t* arg2) =
                _$LT$log..Level$u20$as$u20$core..fmt..Display$GT$::fmt::hf3e2f8abd8007cc2;
            var_1c8 = &var_248;
            int64_t (* var_1c0_2)(int64_t* arg1, int64_t* arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h5a9ea69be6d86aca;
            int64_t* var_1b8_2 = &var_1e8;
            int64_t (* var_1b0_1)(int64_t* arg1, int64_t arg2) =
                _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hde322f69d68256c4;
            int128_t* var_1a8_1 = &var_208;
            int64_t (* var_1a0_1)(void* arg1, int64_t arg2) = _$LT$alloc..string..String$u20$as$u20$core..fmt..Display$GT$::fmt::h28f4d01eb787df69;
            var_f8 = &data_c83070;
            *var_f8[8] = 5;
            int64_t var_d8_1 = 0;
            char* var_e8_1 = &var_1d8;
            int64_t var_e0_1 = 4;
            int128_t var_110;
            core::option::Option$LT$T$GT$::map_or_else::h50b4264313244ea1(&var_110, 0, rdx_1, 
                &var_f8);
            var_248 = var_110;
            char var_218_1 = r12;
            int64_t var_230 = -0x8000000000000000;
            _$LT$T$u20$as$u20$alloc..slice..$LT$impl$u20$$u5b$T$u5d$$GT$..to_vec_in..ConvertVec$GT$::to_vec::h4cfefc754dbf8fee(&var_f8, *(arg2 + 0x38), *(arg2 + 0x40));
            var_1c8 = var_e8_1;
            var_1d8 = var_f8;
            core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..string..String$GT$$GT$::h6a0f98c288fb7106(&var_230);
            int64_t var_220_1 = var_1c8;
            var_230 = var_1d8;
            int64_t var_c0_1 = var_218_1;
            int128_t var_228;
            int128_t var_d0_1 = var_228;
            int64_t var_100;
            var_e0_1 = var_100;
            var_f8 = var_248;
            var_f8 = -0x7ffffffffffffffe;
            alacritty::event::Event::new::hfaf9b093bcbfdb2b(&var_1d8, &var_f8, 0);
            int32_t* var_1d0;
            winit::event_loop::EventLoopProxy$LT$T$GT$::send_event::ha003452b73db1a9a(&var_f8, 
                &var_1d0[2]);
            core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$winit..event_loop..EventLoopClosed$LT$alacritty..event..Event$GT$$GT$$GT$::ha34e38cbba7ecdb0(&var_f8);
            core::ptr::drop_in_place$LT$alloc..string..String$GT$::hcb6d23ea7ad1ac3a(&var_208);
            core::ptr::drop_in_place$LT$std..sync..poison..mutex..MutexGuard$LT$alacritty..logging..OnDemandLogFile$GT$$GT$::h04acd6e250735d2b(var_1d0, var_251_1);
        }
        else
            core::ptr::drop_in_place$LT$core..result..Result$LT$std..sync..poison..mutex..MutexGuard$LT$alacritty..logging..OnDemandLogFile$GT$$C$std..sync..poison..PoisonError$LT$std..sync..poison..mutex..MutexGuard$LT$alacritty..logging..OnDemandLogFile$GT$$GT$$GT$$GT$::h1662b955727f946c(&var_1d8);
    }
    else if (r13 == 2)
    {
        r12 = 1;
        goto label_85d369;
    }
}
