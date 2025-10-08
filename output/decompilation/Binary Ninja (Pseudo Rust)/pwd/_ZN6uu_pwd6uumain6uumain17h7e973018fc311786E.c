
  fn uu_pwd::uumain::uumain::h7e973018fc311786(arg1: i64) -> u64

{
    let mut var_2e0: i64;
    uu_pwd::uu_app::h1da5d5fec9c2ec70(&var_2e0);
    let mut var_348: i64;
    clap_builder::builder::command::Command::try_get_matches_from::h147bdea5e2f421db(&var_348, 
        &var_2e0, arg1);
    let rax: i64 = var_348;
    let var_340: i64;
    
    if -(rax) == -0x8000000000000000
    {
        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he92a37de32738e67(var_340);
    }
    
    let var_318: i64;
    let var_2b0_1: i64 = var_318;
    let var_328: i128;
    let var_2c0_1: i128 = var_328;
    let var_338: i128;
    let var_2d0_1: i128 = var_338;
    var_2e0 = rax;
    let var_2d8_1: i64 = var_340;
    let rax_2: i8 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
        &var_2e0, "physicalNotFoundTimedOutENETDOWN…", 8);
    let mut rax_3: i8;
    let mut rbx_1: i8;
    
    if rax_2 == 0
    {
        rax_3 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            &var_2e0, "logicalPOSIXLY_CORRECTfailed to …", 7);
        
        if rax_3 == 0
        {
            std::env::var::h145d7c51e5c220df(&var_348);
            rbx_1 = var_348;
            core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..env..VarError$GT$$GT$::h4661446f646e0a60(&var_348);
        }
    }
    
    let r15: i64;
    
    if rax_2 == 0 && (rax_3 != 0 || (rbx_1 & 1) == 0)
    {
        uu_pwd::logical_path::ha7064184a6fb3e0e(&var_348, r15);
    }
    else
    {
        uu_pwd::physical_path::hc6deef78d56e1cc2(&var_348);
    }
    let mut var_310: i64;
    _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h397e8ca74eaab133(&var_310, &var_348);
    let rax_4: i64 = var_310;
    let result_1: u64;
    let mut result: u64 = result_1;
    
    if rax_4 != -0x8000000000000000
    {
        let mut var_2f8: i64 = rax_4;
        let result_2: u64 = result;
        let var_300: *mut *mut c_void;
        let var_2e8_1: *mut *mut c_void = var_300;
        let result_3: u64 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h43ceecaad6eb81d8(uucore::mods::display::println_verbatim::h8dd0391446490347(&var_2f8));
        
        if result_3 == 0
        {
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h776974c4eaeedfc7(&var_2e0);
            return 0;
        }
        
        result = result_3;
    }
    
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h776974c4eaeedfc7(&var_2e0);
    result
}
