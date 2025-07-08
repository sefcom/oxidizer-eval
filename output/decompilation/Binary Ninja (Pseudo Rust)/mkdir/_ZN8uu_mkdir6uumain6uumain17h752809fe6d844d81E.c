
  fn uu_mkdir::uumain::uumain::h752809fe6d844d81(arg1: i64) -> *mut i64

{
    let mut var_618: u128;
    uucore::Args::collect_lossy::h59e9a190abdbe1bb(&var_618, arg1);
    let rax: i8 = uu_mkdir::strip_minus_from_mode::h24f9592b17407d7a(&var_618);
    let mut var_5c8: u128;
    uu_mkdir::uu_app::h2281d15957ce8683(&var_5c8);
    let mut var_2f8: fn() -> !;
    clap_builder::builder::command::Command::after_help::h8527034bc7b55f42(&var_2f8, &var_5c8, 
        "Each MODE is of the form '[ugoa]…", 0x49);
    let var_608: i64;
    let mut var_5b8: i64 = var_608;
    var_5c8 = var_618;
    let mut var_600: i64;
    clap_builder::builder::command::Command::try_get_matches_from::ha02fa6c35a434280(&var_600, 
        &var_2f8, &var_5c8);
    let rax_2: i64 = var_600;
    let var_5f8: i64;
    
    if rax_2 == -0x8000000000000000
    {
        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(var_5f8);
    }
    
    let var_5d0: i64;
    let var_640_1: i64 = var_5d0;
    let var_5e0: i128;
    let var_650_1: i128 = var_5e0;
    let var_5f0: i128;
    let var_660_1: i128 = var_5f0;
    let mut var_670: i64 = rax_2;
    let var_668_1: i64 = var_5f8;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::hfdb84b2eea3c8209(
        &var_5c8, &var_670, "dirs <= \x1b[9mtrueTERMchar -> \x1b…", 4);
    clap_builder::parser::error::MatchesError::unwrap::h41e90282d6a9dead(&var_2f8, 
        "dirs <= \x1b[9mtrueTERMchar -> \x1b…", 4, &var_5c8);
    let mut r12_1: fn() -> ! = var_2f8;
    let mut var_680_1: *const i8;
    let mut var_678: i64;
    let mut var_638_1: u128;
    let mut var_628_1: u128;
    let var_2f0: *mut i8;
    let var_2e8: u128;
    let mut r13_1: i64;
    
    if r12_1 == 0
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
        let var_2d8: u128;
        var_628_1 = var_2d8;
        let var_2c8: i64;
        var_678 = var_2c8;
        let var_2c0: i64;
        r13_1 = var_2c0;
    }
    
    let rax_6: i8 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
        &var_670, "verboseparents", 7);
    let rax_7: i8 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
        &var_670, "parents", 7);
    uu_mkdir::get_mode::hcf7d630052cc85d4(&var_2f8, &var_670, rax);
    let mut result: *mut i64;
    
    if var_2f8 != -0x8000000000000000
    {
        let var_5b8_1: i64 = var_2e8;
        var_5c8 = var_2f8;
        let var_5b0_1: i32 = 1;
        result = alloc::boxed::Box$LT$T$GT$::new::h6d97907b3bba40e6(&var_5c8);
    }
    else
    {
        var_5c8 = r12_1;
        *var_5c8[8] = var_680_1;
        var_5b8 = var_638_1;
        let var_5a8_1: u128 = var_628_1;
        let var_598_1: i64 = var_678;
        let var_590_1: i64 = r13_1;
        uu_mkdir::exec::h97ad3c032066465d(&var_5c8, rax_7, var_2f0, rax_6);
        result = nullptr;
    }
    
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hec88a58d850bf936(&var_670);
    result
}
