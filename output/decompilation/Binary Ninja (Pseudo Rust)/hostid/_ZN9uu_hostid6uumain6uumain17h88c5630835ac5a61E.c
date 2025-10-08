
  fn uu_hostid::uumain::uumain::h88c5630835ac5a61(arg1: i64) -> u64

{
    let mut var_2e0: ();
    uu_hostid::uu_app::h2645cc966e8adce6(&var_2e0);
    let mut var_318: i64;
    clap_builder::builder::command::Command::try_get_matches_from::hf526cf39edfbc24d(&var_318, 
        &var_2e0, arg1);
    let rax: i64 = var_318;
    let var_310: i64;
    
    if -(rax) == -0x8000000000000000
    {
        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he92a37de32738e67(var_310);
    }
    
    let var_2e8: i64;
    let var_320_1: i64 = var_2e8;
    let var_2f8: i128;
    let var_330_1: i128 = var_2f8;
    let var_308: i128;
    let var_340_1: i128 = var_308;
    let mut var_350: i64 = rax;
    let var_348_1: i64 = var_310;
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hc009fbf1e83b9756(&var_350);
    uu_hostid::hostid::h7b168fc893b08b3c();
    0
}
