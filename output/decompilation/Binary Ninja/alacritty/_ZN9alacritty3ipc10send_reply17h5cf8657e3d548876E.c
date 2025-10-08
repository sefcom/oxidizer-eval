
  int64_t alacritty::ipc::send_reply::h5cf8657e3d548876()

{
    int64_t* rsi;
    int32_t* rdi;
    void* rax = alacritty::ipc::send_reply_fallible::h775e89a0afb08361(rdi, rsi);
    void* var_78 = rax;
    
    if (!rax)
        return core::ptr::drop_in_place$LT$core..option..Option$LT$std..io..error..Error$GT$$GT$::h1de10a50e8d7f33d(&var_78);
    
    void* var_80 = rax;
    
    if (core::sync::atomic::atomic_load::h45f93311b58385bb(
        &log::MAX_LOG_LEVEL_FILTER::hfa6ade34c357dc26, 0))
    {
        void** var_70 = &var_80;
        int64_t (* var_68_1)(int64_t* arg1, int64_t* arg2) =
            _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::ha4645305e3b6a355;
        void** const var_38 = &data_c82f70;
        int64_t var_30_1 = 1;
        int64_t var_18_1 = 0;
        void*** var_28_1 = &var_70;
        int64_t var_20_1 = 1;
        int64_t rax_2 = log::__private_api::loc::h250021ea1f26630a(&data_c82f80);
        char const* const var_60 = "alacritty::ipcInvalid IPC format…";
        int64_t var_58_1 = 0xe;
        char const* const var_50_1 = "alacritty::ipcInvalid IPC format…";
        int64_t var_48_1 = 0xe;
        int64_t var_40_1 = rax_2;
        log::__private_api::log::h0b6680b994d742b1(&var_38, 1, &var_60);
    }
    
    return core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h3428ae91bc3bac8a(&var_80);
}
