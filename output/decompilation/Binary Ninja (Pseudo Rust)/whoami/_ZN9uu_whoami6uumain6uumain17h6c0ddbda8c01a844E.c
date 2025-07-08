
  fn uu_whoami::uumain::uumain::h6c0ddbda8c01a844(arg1: i64) -> *mut i64

{
    let mut var_2e8: i64;
    uu_whoami::uu_app::h74b0fb3ed938f565(&var_2e8);
    let mut var_320: i64;
    clap_builder::builder::command::Command::try_get_matches_from::hc9ef77e42fd4ef1d(&var_320, 
        &var_2e8, arg1);
    let rax: i64 = var_320;
    let var_318: i64;
    
    if rax == -0x8000000000000000
    {
        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(var_318);
    }
    
    let var_2f0: i64;
    let var_328_1: i64 = var_2f0;
    let var_300: i128;
    let var_338_1: i128 = var_300;
    let var_310: i128;
    let var_348_1: i128 = var_310;
    let mut var_358: i64 = rax;
    let var_350_1: i64 = var_318;
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h61cf24ab013da276(&var_358);
    uu_whoami::whoami::h4c4b8e85df7041a6(&var_2e8);
    let rcx_2: i64 = var_2e8;
    let result: *mut i64;
    
    if rcx_2 == -0x8000000000000000
    {
        return result;
    }
    
    let mut var_370: i64 = rcx_2;
    let result_1: *mut i64 = result;
    let var_2d8: i64;
    let var_360_1: i64 = var_2d8;
    _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h986f92b3628ea713(uucore::mods::display::println_verbatim::h0dd006cf780b5f2c(&var_370))
}
