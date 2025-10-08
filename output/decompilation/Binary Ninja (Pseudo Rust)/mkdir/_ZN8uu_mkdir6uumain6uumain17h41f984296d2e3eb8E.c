
  fn uu_mkdir::uumain::uumain::h41f984296d2e3eb8(arg1: i64) -> u64

{
    let mut var_5e0: u128;
    uucore::Args::collect_lossy::h0e6938748ec0963c(&var_5e0, arg1);
    let rax: i8 = uu_mkdir::strip_minus_from_mode::h17b52de8a38b6e54(&var_5e0);
    let mut var_5c8: u128;
    uu_mkdir::uu_app::h4c3be6890209a1da(&var_5c8);
    let mut var_2f8: fn() -> !;
    clap_builder::builder::command::Command::after_help::hb4b2872d8d26997c(&var_2f8, &var_5c8);
    let var_5d0: i64;
    let mut var_5b8: i64 = var_5d0;
    var_5c8 = var_5e0;
    let mut var_640: i64;
    clap_builder::builder::command::Command::try_get_matches_from::h7b9fe23a02ca39ff(&var_640, 
        &var_2f8, &var_5c8);
    let rax_2: i64 = var_640;
    let mut var_638: i64;
    
    if -(rax_2) == -0x8000000000000000
    {
        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he92a37de32738e67(var_638);
    }
    
    let var_610: i64;
    let var_648_1: i64 = var_610;
    let var_620: i128;
    let var_658_1: i128 = var_620;
    let var_630: i128;
    let var_668_1: i128 = var_630;
    let mut var_678: i64 = rax_2;
    let var_670_1: i64 = var_638;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h93c29b8dcd3babdb(
        &var_5c8, &var_678);
    clap_builder::parser::error::MatchesError::unwrap::h2326271487626802(&var_2f8, &var_5c8);
    let mut r13_1: fn() -> ! = var_2f8;
    let mut var_690_1: i64;
    let mut var_688_1: *const i8;
    let mut var_680: i64;
    let mut var_608_1: u128;
    let mut var_5f8_1: u128;
    let var_2f0: *mut i8;
    let var_2e8: u128;
    
    if r13_1 == 0
    {
        var_5f8_1 = {0};
        var_608_1 = "/home/34r7hm4n/.cargo/registry/s…";
        var_688_1 = "/home/34r7hm4n/.cargo/registry/s…";
        r13_1 = core::ops::function::FnOnce::call_once::hd42bb18b66c768ec;
        var_690_1 = 0;
    }
    else
    {
        var_688_1 = var_2f0;
        var_608_1 = var_2e8;
        let var_2d8: u128;
        var_5f8_1 = var_2d8;
        let var_2c8: i64;
        var_680 = var_2c8;
        let var_2c0: i64;
        var_690_1 = var_2c0;
    }
    
    let rax_7: i8 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
        &var_678, "verboseparentszcontextError flus…", 7);
    let rax_8: i8 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
        &var_678, "parentszcontextError flushing st…", 7);
    let rax_9: i8 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
        &var_678, "zcontextError flushing stdout: ", 1);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h775a0fdd0b4f19b8(
        &var_5c8, &var_678);
    let rax_10: i64 =
        clap_builder::parser::error::MatchesError::unwrap::he672a2fd7da885f0(&var_5c8);
    uu_mkdir::get_mode::he8abb7adb4ed63dd(&var_2f8, &var_678, rax);
    let mut result: u64;
    
    if var_2f8 != -0x8000000000000000
    {
        let var_5b8_1: i64 = var_2e8;
        var_5c8 = var_2f8;
        let var_5b0_1: i32 = 1;
        result = alloc::boxed::Box$LT$T$GT$::new::h27291f706a0af6fc(&var_5c8);
    }
    else
    {
        *var_638[4] = rax_8;
        var_638 = var_2f0;
        *var_638[5] = rax_7;
        *var_638[6] = rax_9 | rax_10 != 0;
        var_640 = rax_10;
        var_5c8 = r13_1;
        *var_5c8[8] = var_688_1;
        var_5b8 = var_608_1;
        let var_5a8_1: u128 = var_5f8_1;
        let var_598_1: i64 = var_680;
        let var_590_1: i64 = var_690_1;
        uu_mkdir::exec::hb2a99e38e9578cd1(&var_5c8, &var_640);
        result = 0;
    }
    
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::he878267791d1e2a8(&var_678);
    result
}
