
  int64_t alacritty::renderer::GlExtensions::load_extensions::h020fea1a75e9211d(int128_t* arg1)

{
    char* rax = *alacritty::gl::storage::GetString::h69a233b31d134479.0(0x1f03);
    int32_t var_68;
    int64_t var_50;
    
    if (!rax)
    {
        var_68 = 0;
        *alacritty::gl::storage::GetIntegerv::h28c461c932844c37.0(0x821d, &var_68);
        int32_t rax_3 = var_68;
        var_50 = 0;
        int64_t var_38 = 0;
        int64_t var_20 = 1;
        int32_t var_18_1 = rax_3;
        return core::iter::traits::iterator::Iterator::collect::hc2f5360092b52fd7(arg1, &var_50);
    }
    
    core::ffi::c_str::CStr::to_str::h7208c416e44d9521(&var_68, rax, strlen(rax) + 1);
    
    if (var_68 & 1)
        return _$LT$hashbrown..map..HashMap$LT$K$C$V$C$S$C$A$GT$$u20$as$u20$core..default..Default$GT$::default::h1264fc145c2ba3a1(arg1);
    
    int64_t var_60;
    int64_t var_58;
    void var_40;
    _$LT$core..str..pattern..MultiCharEqPattern$LT$C$GT$$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h598954deacbe2bfc(&var_40, var_60, var_58);
    var_50 = 0;
    int64_t var_48 = var_58;
    int32_t var_18;
    var_18 = 1;
    return core::iter::traits::iterator::Iterator::collect::h5fca564b86255b66(arg1, &var_50);
}
