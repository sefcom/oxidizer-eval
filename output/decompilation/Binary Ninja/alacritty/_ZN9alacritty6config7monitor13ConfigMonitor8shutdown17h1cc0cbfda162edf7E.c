
  int64_t alacritty::config::monitor::ConfigMonitor::shutdown::h1cc0cbfda162edf7(void* arg1)

{
    char const (** const var_98)[0x20] = nullptr;
    int64_t var_90 = 8;
    int128_t var_88 = {0};
    char var_78 = 5;
    int128_t var_60;
    notify_types::event::Event::set_info::h393bcf13c8c013ea(&var_60, &var_98, "shutdownREADAB", 8);
    char var_39;
    char var_69 = var_39;
    int32_t var_3d;
    int32_t var_6d = var_3d;
    var_90 = var_60;
    int128_t var_50;
    var_88 = var_50;
    char var_40;
    char var_70 = var_40;
    int16_t var_3f;
    int16_t var_6f = var_3f;
    var_98 = 6;
    std::sync::mpmc::Sender$LT$T$GT$::send::hca465e4ac1fc35e9(&var_60, *(arg1 + 0x10), 
        *(arg1 + 0x18), &var_98);
    core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..sync..mpsc..SendError$LT$core..result..Result$LT$notify_types..event..Event$C$notify..error..Error$GT$$GT$$GT$$GT$::h89c5621957379681(&var_60);
    var_88 = *(arg1 + 0x30);
    var_98 = *(arg1 + 0x20);
    int64_t rax_2;
    int64_t* rdx_3;
    rax_2 = std::thread::JoinInner$LT$T$GT$::join::h202bacdcd3a4bf83(&var_98);
    int64_t r15 = rax_2;
    
    if (!rax_2)
        core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$GT$$GT$$GT$::h333d6e83b3740d30(0, rdx_3);
    else
    {
        int64_t var_a8 = r15;
        
        if (core::sync::atomic::atomic_load::h45f93311b58385bb(
            &log::MAX_LOG_LEVEL_FILTER::hfa6ade34c357dc26, 0) >= 2)
        {
            int64_t* var_28 = &var_a8;
            int64_t (* var_20_1)(int64_t* arg1, int64_t* arg2) = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Debug$GT$::fmt::hc4eae8d915d0256c;
            var_98 = &data_c81960;
            int64_t var_90_1 = 1;
            var_78 = 0;
            var_88 = &var_28;
            *var_88[8] = 1;
            int64_t rax_4 = log::__private_api::loc::h250021ea1f26630a(&data_c81970);
            var_60 = "alacritty::config::monitorUnable…";
            *var_60[8] = 0x1a;
            var_50 = "alacritty::config::monitorUnable…";
            *var_50[8] = 0x1a;
            var_40 = rax_4;
            log::__private_api::log::h0b6680b994d742b1(&var_98, 2, &var_60);
            r15 = var_a8;
        }
        
        core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$clap_builder..builder..value_parser..AnyValueParser$GT$$GT$::h3d4788587f1a236c(r15, rdx_3);
    }
    
    return core::ptr::drop_in_place$LT$std..sync..mpsc..Sender$LT$core..result..Result$LT$notify_types..event..Event$C$notify..error..Error$GT$$GT$$GT$::h8bc93518eb327d21(arg1 + 0x10);
}
