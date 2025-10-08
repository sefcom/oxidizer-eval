
  int64_t alacritty::config::reload::hf40e6aa756ed1fc4(int64_t* arg1, int64_t arg2, int64_t arg3, void* arg4)

{
    int64_t r12 = arg2;
    int64_t var_8c8 = arg2;
    int128_t var_8b8;
    char const* const var_860;
    int64_t var_858;
    int64_t var_848;
    char const (** const var_440)[0xce];
    int128_t var_438;
    int128_t var_428;
    
    if (core::sync::atomic::atomic_load::h45f93311b58385bb(
        &log::MAX_LOG_LEVEL_FILTER::hfa6ade34c357dc26, 0) >= 4)
    {
        var_8b8 = &var_8c8;
        *var_8b8[8] = _$LT$$RF$T$u20$as$u20$core..fmt..Debug$GT$::fmt::h3a6a9966801425ec;
        var_440 = &data_c81db8;
        var_438 = 1;
        *var_428[8] = 0;
        *var_438[8] = &var_8b8;
        var_428 = 1;
        int64_t rax_1 = log::__private_api::loc::h250021ea1f26630a(&data_c81dc8);
        var_860 = "alacritty::configReloading confi…";
        var_858 = 0x11;
        char const* const var_850_1 = "alacritty::configReloading confi…";
        var_848 = 0x11;
        int64_t var_840_1 = rax_1;
        log::__private_api::log::h0b6680b994d742b1(&var_440, 4, &var_860);
        r12 = var_8c8;
    }
    
    alacritty::config::load_from::h4623580b3b9fbaae(&var_440, r12);
    char const (** const r15_1)[0xce] = var_440;
    var_8b8 = var_438;
    int128_t var_418;
    int128_t var_408;
    int128_t var_3f8;
    int64_t result;
    
    if (r15_1 == 6)
    {
        arg1[0xb] = result;
        *(arg1 + 0x48) = var_3f8;
        int128_t zmm0 = var_8b8;
        *(arg1 + 0x38) = var_408;
        *(arg1 + 0x28) = var_418;
        *(arg1 + 0x18) = var_428;
        *(arg1 + 8) = zmm0;
        *arg1 = 6;
        return result;
    }
    
    void var_800;
    void var_3e0;
    int32_t rdx_2 = memcpy(&var_800, &var_3e0, 0x3c0);
    var_858 = var_8b8;
    var_848 = var_428;
    int128_t var_838_1 = var_418;
    int128_t var_828_1 = var_408;
    int128_t var_818_1 = var_3f8;
    int64_t result_1 = result;
    var_860 = r15_1;
    alacritty::config::after_loading::h997230e48c68b3cd(&var_860, arg4, rdx_2);
    return memcpy(arg1, &var_860, 0x420);
}
