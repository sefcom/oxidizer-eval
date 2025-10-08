
  fn uu_arch::uumain::uumain::h0bd0b462c0d82bf9(arg1: i64) -> u64

{
    let mut var_2e8: *mut c_void;
    uu_arch::uu_app::hd4428bb15012b7f7(&var_2e8);
    let mut var_500: *mut c_void;
    clap_builder::builder::command::Command::try_get_matches_from::hfc17acdf76e5c85d(&var_500, 
        &var_2e8, arg1);
    let rax: *mut c_void = var_500;
    let var_4f8: i64;
    
    if -(rax) == -0x8000000000000000
    {
        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he92a37de32738e67(var_4f8);
    }
    
    let var_4d0: i64;
    let var_508_1: i64 = var_4d0;
    let mut var_4f0: i128;
    let zmm0_1: i64 = var_4f0;
    let var_4e0: i128;
    let var_518_1: i128 = var_4e0;
    let mut var_538: *mut c_void = rax;
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h2fd53c8310661601(&var_538);
    _$LT$platform_info..lib_impl..target..PlatformInfo$u20$as$u20$platform_info..PlatformInfoAPI$GT$::new::h6dba048fa364e08a(&var_2e8);
    let r15_1: *mut c_void = var_2e8;
    let var_2e0: i64;
    let var_2d8: *mut i64;
    
    if r15_1 == -0x8000000000000000
    {
        return uu_arch::uumain::uumain::_$u7b$$u7b$closure$u7d$$u7d$::h9c8f83b63c6d64eb(var_2e0, 
            var_2d8);
    }
    
    let mut var_2d0: i64;
    memcpy(&*var_4f0[8], &var_2d0, 0x200);
    var_500 = r15_1;
    let var_4f8_1: i64 = var_2e0;
    var_4f0 = var_2d8;
    let var_498: i64;
    let var_490: u64;
    alloc::string::String::from_utf8_lossy::h880ad8b337de96e9(&var_538, var_498, var_490);
    let r14_2: *mut c_void = var_538;
    let mut rax_2: i64;
    let mut rdx_3: i64;
    rax_2 = core::str::_$LT$impl$u20$str$GT$::trim_matches::h3836609a668f0dd0(var_4f8, zmm0_1);
    let mut var_548: i64 = rax_2;
    let var_540_1: i64 = rdx_3;
    let mut var_558: *mut i64 = &var_548;
    let var_550_1: fn(arg1: *mut i64, arg2: i64) -> i64 =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::ha4a905462ef9de42;
    var_2e8 = &data_4d5670;
    let var_2e0_1: i64 = 2;
    let var_2c8_1: i64 = 0;
    let var_2d8_1: *mut *mut i64 = &var_558;
    var_2d0 = 1;
    std::io::stdio::_print::h5e446ff973c02de6(&var_2e8);
    core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::hfb98d344dedea716(r14_2, 
        var_4f8);
    core::ptr::drop_in_place$LT$platform_info..lib_impl..target..PlatformInfo$GT$::h855488b27b83ec1c(&var_500);
    0
}
