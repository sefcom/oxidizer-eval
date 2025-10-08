
  int64_t alacritty::clipboard::Clipboard::load::h12534412bc5eba1c(int64_t* arg1, void* arg2, char arg3)

{
    void* rax = arg2 + 0x10;
    uint32_t rcx_1 = *(arg2 + 0x10) & arg3;
    
    if (!rcx_1)
        rax = arg2;
    
    int64_t var_88;
    (*(*(rax + 8) + 0x18))(&var_88, *(arg2 + (rcx_1 << 4)));
    
    if (!(0 + -(var_88)))
    {
        int64_t result;
        arg1[2] = result;
        *arg1 = var_88;
        return result;
    }
    
    int128_t var_80;
    int128_t var_98 = var_80;
    
    if (core::sync::atomic::atomic_load::h45f93311b58385bb(
        &log::MAX_LOG_LEVEL_FILTER::hfa6ade34c357dc26, 0) >= 4)
    {
        int128_t* var_70 = &var_98;
        int64_t (* var_68_1)(int64_t* arg1) = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h52a3e481c4252974;
        char const (** const var_38)[0xe1] = &data_c817f8;
        int64_t var_30_1 = 1;
        int64_t var_18_1 = 0;
        int128_t** var_28_1 = &var_70;
        int64_t var_20_1 = 1;
        int64_t rax_3 = log::__private_api::loc::h250021ea1f26630a(&data_c81808);
        char const* const var_60 = "alacritty::clipboardUnable to lo…";
        int64_t var_58_1 = 0x14;
        char const* const var_50_1 = "alacritty::clipboardUnable to lo…";
        int64_t var_48_1 = 0x14;
        int64_t var_40_1 = rax_3;
        log::__private_api::log::h0b6680b994d742b1(&var_38, 4, &var_60);
    }
    
    *arg1 = 0;
    arg1[1] = 1;
    arg1[2] = 0;
    return core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$core..error..Error$u2b$core..marker..Send$u2b$core..marker..Sync$GT$$GT$::hb4ed18f0e6501183(&var_98);
}
