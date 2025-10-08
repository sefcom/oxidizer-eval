
  fn alacritty::ipc::send_reply::h5cf8657e3d548876() -> i64

{
    let rsi: *mut i64;
    let rdi: *mut i32;
    let rax: *mut c_void = alacritty::ipc::send_reply_fallible::h775e89a0afb08361(rdi, rsi);
    let mut var_78: *mut c_void = rax;
    
    if rax == 0
    {
        return core::ptr::drop_in_place$LT$core..option..Option$LT$std..io..error..Error$GT$$GT$::h1de10a50e8d7f33d(&var_78);
    }
    
    let mut var_80: *mut c_void = rax;
    
    if core::sync::atomic::atomic_load::h45f93311b58385bb(
        &log::MAX_LOG_LEVEL_FILTER::hfa6ade34c357dc26, 0) != 0
    {
        let mut var_70: *mut *mut c_void = &var_80;
        let var_68_1: fn(arg1: *mut i64, arg2: *mut i64) -> i64 =
            _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::ha4645305e3b6a355;
        let mut var_38: *mut *mut c_void = &data_c82f70;
        let var_30_1: i64 = 1;
        let var_18_1: i64 = 0;
        let var_28_1: *mut *mut *mut c_void = &var_70;
        let var_20_1: i64 = 1;
        let rax_2: i64 = log::__private_api::loc::h250021ea1f26630a(&data_c82f80);
        let mut var_60: *const i8 = "alacritty::ipcInvalid IPC format…";
        let var_58_1: i64 = 0xe;
        let var_50_1: *const i8 = "alacritty::ipcInvalid IPC format…";
        let var_48_1: i64 = 0xe;
        let var_40_1: i64 = rax_2;
        log::__private_api::log::h0b6680b994d742b1(&var_38, 1, &var_60);
    }
    
    core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h3428ae91bc3bac8a(&var_80)
}
