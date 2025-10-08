
  uint64_t uu_yes::uumain::uumain::h8732cb8076f339f2(int64_t arg1)

{
    char const (** const var_2e8)[0xb4];
    uu_yes::uu_app::hcee173fc3d8be0c3(&var_2e8);
    ssize_t* var_378;
    clap_builder::builder::command::Command::try_get_matches_from::hf82f2adb0a259b23(&var_378, 
        &var_2e8, arg1);
    ssize_t* rax = var_378;
    int64_t var_370;
    
    if (-(rax) == -0x8000000000000000)
        /* tailcall */
        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he92a37de32738e67(var_370);
    
    int64_t var_348;
    int64_t var_308 = var_348;
    int128_t var_358;
    int128_t var_318 = var_358;
    int128_t var_368;
    int128_t var_328 = var_368;
    ssize_t* var_338 = rax;
    int64_t var_330 = var_370;
    int64_t rax_2;
    int64_t rdx_2;
    rax_2 = alloc::raw_vec::RawVecInner$LT$A$GT$::with_capacity_in::h1ceed272221759b5(0x4000, 1, 1);
    int64_t var_390 = rax_2;
    uint64_t var_380 = 0;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hc2a64651b1963b22(
        &var_2e8, &var_338);
    clap_builder::parser::error::MatchesError::unwrap::h6b5378762c9d68fe(&var_378, &var_2e8);
    uu_yes::args_into_buffer::h6f2b697e93c64bee(&var_390, &var_378);
    uu_yes::prepare_buffer::h5c585cb06c9101a3(&var_390);
    ssize_t rax_3 = uu_yes::exec::h60fe677fd5670f3c(rdx_2, var_380);
    uint64_t result;
    
    if (!rax_3)
        result = 0;
    else if (std::io::error::Error::kind::h135fe00c4e7365f3(rax_3) != 0xb)
    {
        ssize_t var_398 = rax_3;
        var_378 = &var_398;
        int64_t (* var_370_1)(int64_t* arg1, int64_t* arg2) =
            _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::ha4645305e3b6a355;
        var_2e8 = &data_4d7568;
        int64_t var_2e0_1 = 1;
        int64_t var_2c8_1 = 0;
        int64_t* var_2d8_1 = &var_378;
        int64_t var_2d0_1 = 1;
        int128_t var_300;
        core::option::Option$LT$T$GT$::map_or_else::hcc8954c994f2ca54(&var_300, &var_2e8);
        var_2d0_1 = 1;
        var_2e8 = var_300;
        int64_t var_2f0;
        int64_t var_2d8_2 = var_2f0;
        result = alloc::boxed::Box$LT$T$GT$::new::he942781fd10892b0(&var_2e8);
        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hc0a2e018ac593d01(var_398);
    }
    else
    {
        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::hc0a2e018ac593d01(rax_3);
        result = 0;
    }
    
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::h303ad51536bec5f4(var_390, rdx_2);
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h2904ed0a969b5ac9(&var_338);
    return result;
}
