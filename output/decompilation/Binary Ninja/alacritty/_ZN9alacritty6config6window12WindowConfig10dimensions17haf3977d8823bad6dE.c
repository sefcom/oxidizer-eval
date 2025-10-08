
  bool alacritty::config::window::WindowConfig::dimensions::haf3977d8823bad6d(int64_t* arg1, int64_t arg2, int64_t arg3)

{
    bool rax = arg2;
    
    if (rax & arg3)
    {
        arg1[1] = arg2;
        arg1[2] = arg3;
        *arg1 = 1;
        return rax;
    }
    
    int64_t rax_2 = arg3 | arg2;
    
    if (!rax_2)
    {
        *arg1 = 0;
        return rax_2;
    }
    
    int64_t rax_3;
    rax_3 = !arg3;
    char const* const rdi = "linesdisplay_offset/home/34r7hm4…";
    char const* const r9 = "columnslinesdisplay_offset/home/…";
    
    if (!arg3)
        r9 = "linesdisplay_offset/home/34r7hm4…";
    
    int64_t rcx_1;
    rcx_1 = arg3;
    
    if (!arg3)
        rdi = "columnslinesdisplay_offset/home/…";
    
    if (arg3)
        arg2 = arg3;
    
    char const* const var_b0 = r9;
    int64_t var_a8 = rcx_1 * 2 + 5;
    char const* const var_a0 = rdi;
    int64_t var_98 = rax_3 * 2 + 5;
    int64_t var_b8 = arg2;
    int64_t rax_5 = core::sync::atomic::atomic_load::h45f93311b58385bb(
        &log::MAX_LOG_LEVEL_FILTER::hfa6ade34c357dc26, 0);
    
    if (rax_5 > 1)
    {
        char const* const* var_68 = &var_b0;
        int64_t (* var_60_1)(int64_t* arg1, int64_t arg2) =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hde322f69d68256c4;
        char const* const* var_58_1 = &var_a0;
        int64_t (* var_50_1)(int64_t* arg1, int64_t arg2) =
            _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::hde322f69d68256c4;
        int64_t* var_48_1 = &var_b8;
        uint64_t (* var_40_1)(int64_t* arg1, int64_t* arg2) = core::fmt::num::imp::_$LT$impl$u20$core..fmt..Display$u20$for$u20$u64$GT$::fmt::h3bef13756113ac7b;
        void** const var_38 = &data_c81b80;
        int64_t var_30_1 = 3;
        int64_t var_18_1 = 0;
        char const* const** var_28_1 = &var_68;
        int64_t var_20_1 = 3;
        int64_t rax_6 = log::__private_api::loc::h250021ea1f26630a(&data_c81bb0);
        void* const var_90 = "alacritty_config_derivealacritty…";
        int64_t var_88_1 = 0x17;
        char const* const var_80_1 = "alacritty::config::windowAlacrit…";
        int64_t var_78_1 = 0x19;
        int64_t var_70_1 = rax_6;
        rax_5 = log::__private_api::log::h0b6680b994d742b1(&var_38, 2, &var_90);
    }
    
    *arg1 = 0;
    return rax_5;
}
