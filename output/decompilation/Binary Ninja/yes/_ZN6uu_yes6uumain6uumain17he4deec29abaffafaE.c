
  int64_t* uu_yes::uumain::uumain::he4deec29abaffafa(int64_t arg1)

{
    char const (** const var_2e8)[0x9f];
    uu_yes::uu_app::he708a882494a8d90(&var_2e8);
    char const (*** var_340)[0xcf];
    clap_builder::builder::command::Command::try_get_matches_from::h51599a0d987ab008(&var_340, 
        &var_2e8, arg1);
    char const (*** rax)[0xcf] = var_340;
    int64_t var_338;
    
    if (rax == -0x8000000000000000)
        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(var_338);
    
    int64_t var_310;
    int64_t var_348_1 = var_310;
    int128_t var_320;
    int128_t var_358_1 = var_320;
    int128_t var_330;
    int128_t var_368_1 = var_330;
    char const (*** var_378)[0xcf] = rax;
    int64_t var_370_1 = var_338;
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::h3a638e61ba07e311(&var_2e8, 0x4000, 0);
    int64_t var_2e0;
    
    if (var_2e8)
    {
        alloc::raw_vec::handle_error::h2372476369f9b8ac(var_2e0);
        /* no return */
    }
    
    int64_t var_390 = var_2e0;
    uint64_t var_380_1 = 0;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hc595b2c710ec455b(
        &var_2e8, &var_378, "STRINGUSimpleErrormessageMismatc…", 6);
    clap_builder::parser::error::MatchesError::unwrap::hba7e4e218909a01c(&var_340, 
        "STRINGUSimpleErrormessageMismatc…", 6, &var_2e8);
    uu_yes::args_into_buffer::h5651e8584f7e9c37(&var_390, &var_340);
    uu_yes::prepare_buffer::h0a69ad01ffb7db57(&var_390);
    int64_t var_2d8;
    char const (** rax_3)[0xcf] = uu_yes::exec::h637ae1cf8fadb89a(var_2d8, var_380_1);
    int64_t* result;
    
    if (!rax_3)
    {
        int64_t rbp;
        rbp = 1;
        result = nullptr;
    }
    else if (std::io::error::Error::kind::hb2ff5fa058639b3d(rax_3) != 0xb)
    {
        char const (** var_398)[0xcf] = rax_3;
        var_340 = &var_398;
        int64_t (* var_338_1)(int64_t* arg1, int64_t* arg2) =
            _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h59fe8285afbb4739;
        var_2e8 = &data_507298;
        int64_t var_2e0_1 = 1;
        int64_t var_2c8_1 = 0;
        int64_t* var_2d8_1 = &var_340;
        int64_t var_2d0_1 = 1;
        int128_t var_300;
        core::option::Option$LT$T$GT$::map_or_else::h7da0a100012a1276(&var_300, &var_2e8);
        var_2d0_1 = 1;
        var_2e8 = var_300;
        int64_t var_2f0;
        int64_t var_2d8_2 = var_2f0;
        result = alloc::boxed::Box$LT$T$GT$::new::h870e02c9a3198622(&var_2e8);
        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h780ea2ea521668c8(var_398);
    }
    else
    {
        core::ptr::drop_in_place$LT$std..io..error..Error$GT$::h780ea2ea521668c8(rax_3);
        result = nullptr;
    }
    
    core::ptr::drop_in_place$LT$alloc..vec..Vec$LT$u8$GT$$GT$::hd7cda70099a3c641(&var_390);
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h8b51fc743cc5a57f(&var_378);
    return result;
}
