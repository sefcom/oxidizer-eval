
  int64_t* uu_arch::uumain::uumain::hd4daa4f9866d4582(int64_t arg1)

{
    void* const var_2e8;
    uu_arch::uu_app::h8f2567686988086a(&var_2e8);
    void* const var_500;
    clap_builder::builder::command::Command::try_get_matches_from::h1685219cca491285(&var_500, 
        &var_2e8, arg1);
    void* const rax = var_500;
    int64_t var_4f8;
    
    if (rax == -0x8000000000000000)
        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(var_4f8);
    
    int64_t var_4d0;
    int64_t var_528_1 = var_4d0;
    int128_t var_4f0;
    int64_t zmm0_1 = var_4f0;
    int128_t var_4e0;
    int128_t var_538_1 = var_4e0;
    void* const var_558 = rax;
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h09a2e4ae76fe94e9(&var_558);
    _$LT$platform_info..lib_impl..target..PlatformInfo$u20$as$u20$platform_info..PlatformInfoAPI$GT$::new::ha4b962048a517d48(&var_2e8);
    void* const r15_1 = var_2e8;
    int64_t var_2e0;
    int64_t* var_2d8;
    
    if (r15_1 == -0x8000000000000000)
        return uu_arch::uumain::uumain::_$u7b$$u7b$closure$u7d$$u7d$::hfa7d8d33c6f73432(var_2e0, 
            var_2d8);
    
    int64_t var_2d0;
    memcpy(&*var_4f0[8], &var_2d0, 0x200);
    var_500 = r15_1;
    int64_t var_4f8_1 = var_2e0;
    var_4f0 = var_2d8;
    int64_t var_498;
    size_t var_490;
    std::sys::os_str::bytes::Slice::to_string_lossy::h816275565265bd85(&var_558, var_498, var_490);
    int64_t rax_2;
    int64_t rdx_3;
    rax_2 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hcfa4d6c8abc28637(var_4f8, zmm0_1);
    int64_t var_510 = rax_2;
    int64_t var_508_1 = rdx_3;
    int64_t* var_520 = &var_510;
    int64_t (* var_518_1)(int64_t* arg1, int64_t arg2) =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1daa6270d834d97f;
    var_2e8 = &data_502d30;
    int64_t var_2e0_1 = 2;
    int64_t var_2c8_1 = 0;
    int64_t** var_2d8_1 = &var_520;
    var_2d0 = 1;
    std::io::stdio::_print::he918bceb0c89db46(&var_2e8);
    core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h2f20969a414777e7(&var_558);
    core::ptr::drop_in_place$LT$platform_info..lib_impl..target..PlatformInfo$GT$::h0caea20308fb7da4(&var_500);
    return nullptr;
}
