
  fn uu_yes::uumain::uumain::he4deec29abaffafa(arg1: i64) -> *mut i64

{
    let mut var_2e8: *mut *mut [i8; 0x9f];
    uu_yes::uu_app::he708a882494a8d90(&var_2e8);
    let mut var_340: *mut *mut *mut [i8; 0xcf];
    clap_builder::builder::command::Command::try_get_matches_from::h51599a0d987ab008(&var_340, 
        &var_2e8, arg1);
    let rax: *mut *mut *mut [i8; 0xcf] = var_340;
    let var_338: i64;
    
    if rax == -0x8000000000000000
    {
        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(var_338);
    }
    
    let var_310: i64;
    let var_348_1: i64 = var_310;
    let var_320: i128;
    let var_358_1: i128 = var_320;
    let var_330: i128;
    let var_368_1: i128 = var_330;
    let mut var_378: *mut *mut *mut [i8; 0xcf] = rax;
    let var_370_1: i64 = var_338;
    alloc::raw_vec::RawVec$LT$T$C$A$GT$::try_allocate_in::h3a638e61ba07e311(&var_2e8, 0x4000, 0);
    let var_2e0: i64;
    
    if var_2e8 != 0
    {
        alloc::raw_vec::handle_error::h2372476369f9b8ac(var_2e0);
        /* no return */
    }
    
    let mut var_390: i64 = var_2e0;
    let var_380_1: u64 = 0;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hc595b2c710ec455b(
        &var_2e8, &var_378, "STRINGUSimpleErrormessageMismatc…", 6);
    clap_builder::parser::error::MatchesError::unwrap::hba7e4e218909a01c(&var_340, 
        "STRINGUSimpleErrormessageMismatc…", 6, &var_2e8);
    uu_yes::args_into_buffer::h5651e8584f7e9c37(&var_390, &var_340);
    uu_yes::prepare_buffer::h0a69ad01ffb7db57(&var_390);
    let var_2d8: i64;
    let rax_3: *mut *mut [i8; 0xcf] = uu_yes::exec::h637ae1cf8fadb89a(var_2d8, var_380_1);
    let mut result: *mut i64;
    
    if rax_3 == 0
    {
        let mut rbp: i64;
        rbp = 1;
        result = nullptr;
    }
    else if std::io::error::Error::kind::hb2ff5fa058639b3d(rax_3) != 0xb
    {
        let mut var_398: *mut *mut [i8; 0xcf] = rax_3;
        var_340 = &var_398;
        let var_338_1: fn(arg1: *mut i64, arg2: *mut i64) -> i64 =
            _$LT$std..io..error..Error$u20$as$u20$core..fmt..Display$GT$::fmt::h59fe8285afbb4739;
        var_2e8 = &data_507298;
        let var_2e0_1: i64 = 1;
        let var_2c8_1: i64 = 0;
        let var_2d8_1: *mut i64 = &var_340;
        let mut var_2d0_1: i64 = 1;
        let mut var_300: i128;
        core::option::Option$LT$T$GT$::map_or_else::h7da0a100012a1276(&var_300, &var_2e8);
        var_2d0_1 = 1;
        var_2e8 = var_300;
        let var_2f0: i64;
        let var_2d8_2: i64 = var_2f0;
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
    result
}
