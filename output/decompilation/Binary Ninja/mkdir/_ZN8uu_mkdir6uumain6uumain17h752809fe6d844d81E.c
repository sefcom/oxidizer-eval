
  int64_t* uu_mkdir::uumain::uumain::h752809fe6d844d81(int64_t arg1)

{
    uint128_t var_618;
    uucore::Args::collect_lossy::h59e9a190abdbe1bb(&var_618, arg1);
    char rax = uu_mkdir::strip_minus_from_mode::h24f9592b17407d7a(&var_618);
    uint128_t var_5c8;
    uu_mkdir::uu_app::h2281d15957ce8683(&var_5c8);
    void (* var_2f8)() __noreturn;
    clap_builder::builder::command::Command::after_help::h8527034bc7b55f42(&var_2f8, &var_5c8, 
        "Each MODE is of the form '[ugoa]…", 0x49);
    int64_t var_608;
    int64_t var_5b8 = var_608;
    var_5c8 = var_618;
    int64_t var_600;
    clap_builder::builder::command::Command::try_get_matches_from::ha02fa6c35a434280(&var_600, 
        &var_2f8, &var_5c8);
    int64_t rax_2 = var_600;
    int64_t var_5f8;
    
    if (rax_2 == -0x8000000000000000)
        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(var_5f8);
    
    int64_t var_5d0;
    int64_t var_640_1 = var_5d0;
    int128_t var_5e0;
    int128_t var_650_1 = var_5e0;
    int128_t var_5f0;
    int128_t var_660_1 = var_5f0;
    int64_t var_670 = rax_2;
    int64_t var_668_1 = var_5f8;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hfdb84b2eea3c8209(
        &var_5c8, &var_670, "dirs <= \x1b[9mtrueTERMchar -> \x1b…", 4);
    clap_builder::parser::error::MatchesError::unwrap::h41e90282d6a9dead(&var_2f8, 
        "dirs <= \x1b[9mtrueTERMchar -> \x1b…", 4, &var_5c8);
    void (* r12_1)() __noreturn = var_2f8;
    char const* const var_680_1;
    int64_t var_678;
    uint128_t var_638_1;
    uint128_t var_628_1;
    char* var_2f0;
    uint128_t var_2e8;
    int64_t r13_1;
    
    if (!r12_1)
    {
        var_628_1 = {0};
        var_638_1 = "a Display implementation returne…";
        var_680_1 = "a Display implementation returne…";
        r12_1 = core::ops::function::FnOnce::call_once::hd083c6ae921629bb;
        r13_1 = 0;
    }
    else
    {
        var_680_1 = var_2f0;
        var_638_1 = var_2e8;
        uint128_t var_2d8;
        var_628_1 = var_2d8;
        int64_t var_2c8;
        var_678 = var_2c8;
        int64_t var_2c0;
        r13_1 = var_2c0;
    }
    
    char rax_6 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
        &var_670, "verboseparents", 7);
    char rax_7 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
        &var_670, "parents", 7);
    uu_mkdir::get_mode::hcf7d630052cc85d4(&var_2f8, &var_670, rax);
    int64_t* result;
    
    if (var_2f8 != -0x8000000000000000)
    {
        int64_t var_5b8_1 = var_2e8;
        var_5c8 = var_2f8;
        int32_t var_5b0_1 = 1;
        result = alloc::boxed::Box$LT$T$GT$::new::h6d97907b3bba40e6(&var_5c8);
    }
    else
    {
        var_5c8 = r12_1;
        *var_5c8[8] = var_680_1;
        var_5b8 = var_638_1;
        uint128_t var_5a8_1 = var_628_1;
        int64_t var_598_1 = var_678;
        int64_t var_590_1 = r13_1;
        uu_mkdir::exec::h97ad3c032066465d(&var_5c8, rax_7, var_2f0, rax_6);
        result = nullptr;
    }
    
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hec88a58d850bf936(&var_670);
    return result;
}
