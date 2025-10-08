
  uint64_t uu_arch::uumain::uumain::h0bd0b462c0d82bf9(int64_t arg1)

{
    void* const var_2e8;
    uu_arch::uu_app::hd4428bb15012b7f7(&var_2e8);
    void* const var_500;
    clap_builder::builder::command::Command::try_get_matches_from::hfc17acdf76e5c85d(&var_500, 
        &var_2e8, arg1);
    void* const rax = var_500;
    int64_t var_4f8;
    
    if (-(rax) == -0x8000000000000000)
        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he92a37de32738e67(var_4f8);
    
    int64_t var_4d0;
    int64_t var_508_1 = var_4d0;
    int128_t var_4f0;
    int64_t zmm0_1 = var_4f0;
    int128_t var_4e0;
    int128_t var_518_1 = var_4e0;
    void* const var_538 = rax;
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h2fd53c8310661601(&var_538);
    _$LT$platform_info..lib_impl..target..PlatformInfo$u20$as$u20$platform_info..PlatformInfoAPI$GT$::new::h6dba048fa364e08a(&var_2e8);
    void* const r15_1 = var_2e8;
    int64_t var_2e0;
    int64_t* var_2d8;
    
    if (r15_1 == -0x8000000000000000)
        return uu_arch::uumain::uumain::_$u7b$$u7b$closure$u7d$$u7d$::h9c8f83b63c6d64eb(var_2e0, 
            var_2d8);
    
    int64_t var_2d0;
    memcpy(&*var_4f0[8], &var_2d0, 0x200);
    var_500 = r15_1;
    int64_t var_4f8_1 = var_2e0;
    var_4f0 = var_2d8;
    int64_t var_498;
    uint64_t var_490;
    alloc::string::String::from_utf8_lossy::h880ad8b337de96e9(&var_538, var_498, var_490);
    void* const r14_2 = var_538;
    int64_t rax_2;
    int64_t rdx_3;
    rax_2 = core::str::_$LT$impl$u20$str$GT$::trim_matches::h3836609a668f0dd0(var_4f8, zmm0_1);
    int64_t var_548 = rax_2;
    int64_t var_540_1 = rdx_3;
    int64_t* var_558 = &var_548;
    int64_t (* var_550_1)(int64_t* arg1, int64_t arg2) =
        _$LT$$RF$T$u20$as$u20$core..fmt..Display$GT$::fmt::ha4a905462ef9de42;
    var_2e8 = &data_4d5670;
    int64_t var_2e0_1 = 2;
    int64_t var_2c8_1 = 0;
    int64_t** var_2d8_1 = &var_558;
    var_2d0 = 1;
    std::io::stdio::_print::h5e446ff973c02de6(&var_2e8);
    core::ptr::drop_in_place$LT$alloc..borrow..Cow$LT$str$GT$$GT$::hfb98d344dedea716(r14_2, 
        var_4f8);
    core::ptr::drop_in_place$LT$platform_info..lib_impl..target..PlatformInfo$GT$::h855488b27b83ec1c(&var_500);
    return 0;
}
