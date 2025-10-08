
  int64_t alacritty::config::load::hc4f1210f544231b4(int64_t arg1, void* arg2)

{
    int64_t var_440;
    
    if (!(0 + -(*(arg2 + 0x1b0))))
        _$LT$$RF$str$u20$as$u20$alloc..string..SpecToString$GT$::spec_to_string::h0eee6798dc8ee10d(
            &var_440, *(arg2 + 0x1b8), *(arg2 + 0x1c0));
    else
        var_440 = -0x8000000000000000;
    
    void var_860;
    core::option::Option$LT$T$GT$::or_else::h0b1f5b4de00d6415(&var_860, &var_440);
    int64_t var_890;
    core::option::Option$LT$T$GT$::or_else::h4ae75538c15e033b(&var_890, &var_860);
    int32_t rdx_3;
    int64_t var_880;
    int128_t var_878;
    
    if (var_890 != -0x8000000000000000)
    {
        int64_t var_888;
        alacritty::config::load::_$u7b$$u7b$closure$u7d$$u7d$::ha635c51bd6a67dc1(&var_440, var_888);
        int64_t var_868_1 = var_880;
        var_878 = var_890;
        
        if (var_440 != 6)
        {
            memcpy(&var_860, &var_440, 0x420);
            rdx_3 = core::ptr::drop_in_place$LT$alacritty..config..load..$u7b$$u7b$closure$u7d$$u7d$$GT$::hd5229858aa66467d(&var_890);
        }
        else
            rdx_3 = alacritty::config::load::_$u7b$$u7b$closure$u7d$$u7d$::h658c9e9e484f06cd(
                &var_860, &var_878);
    }
    else
    {
        int64_t var_868 = var_880;
        var_878 = var_890;
        rdx_3 = alacritty::config::load::_$u7b$$u7b$closure$u7d$$u7d$::h658c9e9e484f06cd(&var_860, 
            &var_878);
    }
    alacritty::config::after_loading::h997230e48c68b3cd(&var_860, arg2, rdx_3);
    return memcpy(arg1, &var_860, 0x420);
}
