
  fn uu_arch::uumain::uumain::hd4daa4f9866d4582(arg1: i64) -> *mut i64

{
    let mut var_2e8: *mut c_void;
    uu_arch::uu_app::h8f2567686988086a(&var_2e8);
    let mut var_500: *mut c_void;
    clap_builder::builder::command::Command::try_get_matches_from::h1685219cca491285(&var_500, 
        &var_2e8, arg1);
    let rax: *mut c_void = var_500;
    let var_4f8: i64;
    
    if rax == -0x8000000000000000
    {
        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(var_4f8);
    }
    
    let var_4d0: i64;
    let var_528_1: i64 = var_4d0;
    let mut var_4f0: i128;
    let zmm0_1: i64 = var_4f0;
    let var_4e0: i128;
    let var_538_1: i128 = var_4e0;
    let mut var_558: *mut c_void = rax;
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h09a2e4ae76fe94e9(&var_558);
    _$LT$platform_info..lib_impl..target..PlatformInfo$u20$as$u20$platform_info..PlatformInfoAPI$GT$::new::ha4b962048a517d48(&var_2e8);
    let r15_1: *mut c_void = var_2e8;
    let var_2e0: i64;
    let var_2d8: *mut i64;
    
    if r15_1 == -0x8000000000000000
    {
        return uu_arch::uumain::uumain::_$u7b$$u7b$closure$u7d$$u7d$::hfa7d8d33c6f73432(var_2e0, 
            var_2d8);
    }
    
    let mut var_2d0: i64;
    memcpy(&*var_4f0[8], &var_2d0, 0x200);
    var_500 = r15_1;
    let var_4f8_1: i64 = var_2e0;
    var_4f0 = var_2d8;
    let var_498: i64;
    let var_490: size_t;
    std::sys::os_str::bytes::Slice::to_string_lossy::h816275565265bd85(&var_558, var_498, var_490);
    let mut rax_2: i64;
    let mut rdx_3: i64;
    rax_2 = core::str::_$LT$impl$u20$str$GT$::trim_matches::hcfa4d6c8abc28637(var_4f8, zmm0_1);
    let mut var_510: i64 = rax_2;
    let var_508_1: i64 = rdx_3;
    let mut var_520: *mut i64 = &var_510;
    let var_518_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::h1daa6270d834d97f;
    var_2e8 = &data_502d30;
    let var_2e0_1: i64 = 2;
    let var_2c8_1: i64 = 0;
    let var_2d8_1: *mut *mut i64 = &var_520;
    var_2d0 = 1;
    std::io::stdio::_print::he918bceb0c89db46(&var_2e8);
    core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::h2f20969a414777e7(&var_558);
    core::ptr::drop_in_place$LT$platform_info..lib_impl..target..PlatformInfo$GT$::h0caea20308fb7da4(&var_500);
    nullptr
}
