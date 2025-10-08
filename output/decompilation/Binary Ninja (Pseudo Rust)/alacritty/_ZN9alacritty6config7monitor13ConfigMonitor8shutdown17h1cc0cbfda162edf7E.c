
  fn alacritty::config::monitor::ConfigMonitor::shutdown::h1cc0cbfda162edf7(arg1: *mut c_void) -> i64

{
    let mut var_98: *mut *mut [i8; 0x20] = nullptr;
    let mut var_90: i64 = 8;
    let mut var_88: i128 = {0};
    let mut var_78: i8 = 5;
    let mut var_60: i128;
    notify_types::event::Event::set_info::h393bcf13c8c013ea(&var_60, &var_98, "shutdownREADAB", 8);
    let var_39: i8;
    let var_69: i8 = var_39;
    let var_3d: i32;
    let var_6d: i32 = var_3d;
    var_90 = var_60;
    let mut var_50: i128;
    var_88 = var_50;
    let mut var_40: i8;
    let var_70: i8 = var_40;
    let var_3f: i16;
    let var_6f: i16 = var_3f;
    var_98 = 6;
    std::sync::mpmc::Sender$LT$T$GT$::send::hca465e4ac1fc35e9(&var_60, *arg1.byte_offset(0x10), 
        *arg1.byte_offset(0x18), &var_98);
    core::ptr::drop_in_place$LT$core..result..Result$LT$$LP$$RP$$C$std..sync..mpsc..SendError$LT$core..result..Result$LT$notify_types..event..Event$C$notify..error..Error$GT$$GT$$GT$$GT$::h89c5621957379681(&var_60);
    var_88 = *arg1.byte_offset(0x30);
    var_98 = *arg1.byte_offset(0x20);
    let mut rax_2: i64;
    let mut rdx_3: *mut i64;
    rax_2 = std::thread::JoinInner$LT$T$GT$::join::h202bacdcd3a4bf83(&var_98);
    let mut r15: i64 = rax_2;
    
    if rax_2 == 0
    {
        core::ptr::drop_in_place$LT$core..option..Option$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$GT$$GT$$GT$::h333d6e83b3740d30(0, rdx_3);
    }
    else
    {
        let mut var_a8: i64 = r15;
        
        if core::sync::atomic::atomic_load::h45f93311b58385bb(
            &log::MAX_LOG_LEVEL_FILTER::hfa6ade34c357dc26, 0) >= 2
        {
            let mut var_28: *mut i64 = &var_a8;
            let var_20_1: fn(arg1: *mut i64, arg2: *mut i64) -> i64 = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Debug$GT$::fmt::hc4eae8d915d0256c;
            var_98 = &data_c81960;
            let var_90_1: i64 = 1;
            var_78 = 0;
            var_88 = &var_28;
            *var_88[8] = 1;
            let rax_4: i64 = log::__private_api::loc::h250021ea1f26630a(&data_c81970);
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
    
    core::ptr::drop_in_place$LT$std..sync..mpsc..Sender$LT$core..result..Result$LT$notify_types..event..Event$C$notify..error..Error$GT$$GT$$GT$::h8bc93518eb327d21(arg1.byte_offset(0x10))
}
