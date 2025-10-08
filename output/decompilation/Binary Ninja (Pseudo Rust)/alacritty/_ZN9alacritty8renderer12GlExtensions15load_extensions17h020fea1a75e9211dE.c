
  fn alacritty::renderer::GlExtensions::load_extensions::h020fea1a75e9211d(arg1: *mut i128) -> i64

{
    let rax: *mut i8 = *alacritty::gl::storage::GetString::h69a233b31d134479.0(0x1f03);
    let mut var_68: i32;
    let mut var_50: i64;
    
    if rax == 0
    {
        var_68 = 0;
        *alacritty::gl::storage::GetIntegerv::h28c461c932844c37.0(0x821d, &var_68);
        let rax_3: i32 = var_68;
        var_50 = 0;
        let var_38: i64 = 0;
        let var_20: i64 = 1;
        let var_18_1: i32 = rax_3;
        return core::iter::traits::iterator::Iterator::collect::hc2f5360092b52fd7(arg1, &var_50);
    }
    
    core::ffi::c_str::CStr::to_str::h7208c416e44d9521(&var_68, rax, strlen(rax) + 1);
    
    if (var_68 & 1) != 0
    {
        return _$LT$hashbrown..map..HashMap$LT$K$C$V$C$S$C$A$GT$$u20$as$u20$core..default..Default$GT$::default::h1264fc145c2ba3a1(arg1);
    }
    
    let var_60: i64;
    let var_58: i64;
    let mut var_40: ();
    _$LT$core..str..pattern..MultiCharEqPattern$LT$C$GT$$u20$as$u20$core..str..pattern..Pattern$GT$::into_searcher::h598954deacbe2bfc(&var_40, var_60, var_58);
    var_50 = 0;
    let var_48: i64 = var_58;
    let mut var_18: i32;
    var_18 = 1;
    core::iter::traits::iterator::Iterator::collect::h5fca564b86255b66(arg1, &var_50)
}
