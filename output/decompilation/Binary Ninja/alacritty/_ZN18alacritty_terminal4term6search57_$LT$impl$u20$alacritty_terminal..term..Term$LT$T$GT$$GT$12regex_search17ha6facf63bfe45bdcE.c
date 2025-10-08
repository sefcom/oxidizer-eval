
  int64_t* alacritty_terminal::term::search::_$LT$impl$u20$alacritty_terminal..term..Term$LT$T$GT$$GT$::regex_search::ha6facf63bfe45bdc(int64_t* arg1, void* arg2)

{
    int32_t var_70;
    int32_t rcx;
    int64_t rdx;
    void* rsi;
    int64_t r8;
    int32_t r9;
    alacritty_terminal::term::search::_$LT$impl$u20$alacritty_terminal..term..Term$LT$T$GT$$GT$::regex_search_internal::h6112248bcc16e983(&var_70, rsi, rdx, rcx, r8, r9, arg2);
    int64_t* result;
    
    if (var_70 != 2)
    {
        arg1[2] = result;
        *arg1 = var_70;
        return result;
    }
    
    int64_t var_68;
    int64_t r14_1 = var_68;
    int64_t var_a8 = r14_1;
    char const* const var_98;
    void** const var_58;
    int128_t var_40;
    
    if (core::sync::atomic::atomic_load::h45f93311b58385bb(
        &log::MAX_LOG_LEVEL_FILTER::hfa6ade34c357dc26, 0) >= 2)
    {
        var_58 = &data_c779e0;
        int64_t var_50_1 = 1;
        int64_t var_48_1 = 8;
        var_40 = {0};
        int64_t rax_2 = log::__private_api::loc::h250021ea1f26630a(&data_c77a00);
        var_98 = "alacritty_terminal::term::search…";
        int64_t var_90_1 = 0x20;
        char const* const var_88_1 = "alacritty_terminal::term::search…";
        int64_t var_80_1 = 0x20;
        int64_t var_78_1 = rax_2;
        log::__private_api::log::h0b6680b994d742b1(&var_58, 2, &var_98);
    }
    
    if (core::sync::atomic::atomic_load::h45f93311b58385bb(
        &log::MAX_LOG_LEVEL_FILTER::hfa6ade34c357dc26, 0) >= 4)
    {
        int64_t* var_28 = &var_a8;
        int64_t (* var_20_1)(int64_t* arg1) = _$LT$alloc..boxed..Box$LT$T$C$A$GT$$u20$as$u20$core..fmt..Display$GT$::fmt::h52a3e481c4252974;
        var_58 = &data_c779f0;
        int64_t var_50_2 = 1;
        *var_40[8] = 0;
        int64_t** var_48_2 = &var_28;
        var_40 = 1;
        int64_t rax_4 = log::__private_api::loc::h250021ea1f26630a(&data_c77a18);
        var_98 = "alacritty_terminal::term::search…";
        int64_t var_90_2 = 0x20;
        char const* const var_88_2 = "alacritty_terminal::term::search…";
        int64_t var_80_2 = 0x20;
        int64_t var_78_2 = rax_4;
        log::__private_api::log::h0b6680b994d742b1(&var_58, 4, &var_98);
        r14_1 = var_a8;
    }
    
    *arg1 = 0;
    return core::ptr::drop_in_place$LT$alloc..boxed..Box$LT$dyn$u20$clap_builder..builder..value_parser..AnyValueParser$GT$$GT$::h3d4788587f1a236c(r14_1, result);
}
