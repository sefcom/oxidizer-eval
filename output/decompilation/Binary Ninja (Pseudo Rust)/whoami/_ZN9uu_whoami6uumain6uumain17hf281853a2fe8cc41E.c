
  fn uu_whoami::uumain::uumain::hf281853a2fe8cc41(arg1: i64) -> u64

{
    let mut var_2e0: i64;
    uu_whoami::uu_app::hf0a425c263ca9714(&var_2e0);
    let mut var_318: i64;
    clap_builder::builder::command::Command::try_get_matches_from::h438e0e32edb5b8f4(&var_318, 
        &var_2e0, arg1);
    let rax: i64 = var_318;
    let result_2: u64;
    
    if -(rax) == -0x8000000000000000
    {
        /* tailcall */
        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he92a37de32738e67(result_2);
    }
    
    let var_2e8: i64;
    let var_2b0: i64 = var_2e8;
    let var_2f8: i128;
    let var_2c0: i128 = var_2f8;
    var_2e0 = rax;
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h56f330c1f30662aa(&var_2e0);
    uu_whoami::whoami::h857f327cfb28235a(&var_2e0);
    let rcx_4: i64 = var_2e0;
    let mut result: u64 = result_2;
    
    if rcx_4 != -0x8000000000000000
    {
        let mut var_330: i64 = rcx_4;
        let result_1: u64 = result;
        let var_308: i64;
        let var_320_1: i64 = var_308;
        result = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h9c01be275b4dd4d3(uucore::mods::display::println_verbatim::hc1d0b7d743017af8(&var_330));
    }
    
    result
}
