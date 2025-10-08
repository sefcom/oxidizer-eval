
  uint64_t uu_mkdir::uumain::uumain::h41f984296d2e3eb8(int64_t arg1)

{
    uint128_t var_5e0;
    uucore::Args::collect_lossy::h0e6938748ec0963c(&var_5e0, arg1);
    char rax = uu_mkdir::strip_minus_from_mode::h17b52de8a38b6e54(&var_5e0);
    uint128_t var_5c8;
    uu_mkdir::uu_app::h4c3be6890209a1da(&var_5c8);
    void (* var_2f8)() __noreturn;
    clap_builder::builder::command::Command::after_help::hb4b2872d8d26997c(&var_2f8, &var_5c8);
    int64_t var_5d0;
    int64_t var_5b8 = var_5d0;
    var_5c8 = var_5e0;
    int64_t var_640;
    clap_builder::builder::command::Command::try_get_matches_from::h7b9fe23a02ca39ff(&var_640, 
        &var_2f8, &var_5c8);
    int64_t rax_2 = var_640;
    int64_t var_638;
    
    if (-(rax_2) == -0x8000000000000000)
        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he92a37de32738e67(var_638);
    
    int64_t var_610;
    int64_t var_648_1 = var_610;
    int128_t var_620;
    int128_t var_658_1 = var_620;
    int128_t var_630;
    int128_t var_668_1 = var_630;
    int64_t var_678 = rax_2;
    int64_t var_670_1 = var_638;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h93c29b8dcd3babdb(
        &var_5c8, &var_678);
    clap_builder::parser::error::MatchesError::unwrap::h2326271487626802(&var_2f8, &var_5c8);
    void (* r13_1)() __noreturn = var_2f8;
    int64_t var_690_1;
    char const* const var_688_1;
    int64_t var_680;
    uint128_t var_608_1;
    uint128_t var_5f8_1;
    char* var_2f0;
    uint128_t var_2e8;
    
    if (!r13_1)
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
        uint128_t var_2d8;
        var_5f8_1 = var_2d8;
        int64_t var_2c8;
        var_680 = var_2c8;
        int64_t var_2c0;
        var_690_1 = var_2c0;
    }
    
    char rax_7 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
        &var_678, "verboseparentszcontextError flus…", 7);
    char rax_8 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
        &var_678, "parentszcontextError flushing st…", 7);
    char rax_9 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
        &var_678, "zcontextError flushing stdout: ", 1);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h775a0fdd0b4f19b8(
        &var_5c8, &var_678);
    int64_t rax_10 = clap_builder::parser::error::MatchesError::unwrap::he672a2fd7da885f0(&var_5c8);
    uu_mkdir::get_mode::he8abb7adb4ed63dd(&var_2f8, &var_678, rax);
    uint64_t result;
    
    if (var_2f8 != -0x8000000000000000)
    {
        int64_t var_5b8_1 = var_2e8;
        var_5c8 = var_2f8;
        int32_t var_5b0_1 = 1;
        result = alloc::boxed::Box$LT$T$GT$::new::h27291f706a0af6fc(&var_5c8);
    }
    else
    {
        *var_638[4] = rax_8;
        var_638 = var_2f0;
        *var_638[5] = rax_7;
        *var_638[6] = rax_9 | rax_10;
        var_640 = rax_10;
        var_5c8 = r13_1;
        *var_5c8[8] = var_688_1;
        var_5b8 = var_608_1;
        uint128_t var_5a8_1 = var_5f8_1;
        int64_t var_598_1 = var_680;
        int64_t var_590_1 = var_690_1;
        uu_mkdir::exec::hb2a99e38e9578cd1(&var_5c8, &var_640);
        result = 0;
    }
    
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::he878267791d1e2a8(&var_678);
    return result;
}
