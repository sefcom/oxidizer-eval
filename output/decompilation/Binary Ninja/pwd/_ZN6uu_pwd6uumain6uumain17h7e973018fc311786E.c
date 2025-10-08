
  uint64_t uu_pwd::uumain::uumain::h7e973018fc311786(int64_t arg1)

{
    int64_t var_2e0;
    uu_pwd::uu_app::h1da5d5fec9c2ec70(&var_2e0);
    int64_t var_348;
    clap_builder::builder::command::Command::try_get_matches_from::h147bdea5e2f421db(&var_348, 
        &var_2e0, arg1);
    int64_t rax = var_348;
    int64_t var_340;
    
    if (-(rax) == -0x8000000000000000)
        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he92a37de32738e67(var_340);
    
    int64_t var_318;
    int64_t var_2b0_1 = var_318;
    int128_t var_328;
    int128_t var_2c0_1 = var_328;
    int128_t var_338;
    int128_t var_2d0_1 = var_338;
    var_2e0 = rax;
    int64_t var_2d8_1 = var_340;
    char rax_2 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
        &var_2e0, "physicalNotFoundTimedOutENETDOWN…", 8);
    char rax_3;
    char rbx_1;
    
    if (!rax_2)
    {
        rax_3 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h0358b00a34050e02(
            &var_2e0, "logicalPOSIXLY_CORRECTfailed to …", 7);
        
        if (!rax_3)
        {
            std::env::var::h145d7c51e5c220df(&var_348);
            rbx_1 = var_348;
            core::ptr::drop_in_place$LT$core..result..Result$LT$alloc..string..String$C$std..env..VarError$GT$$GT$::h4661446f646e0a60(&var_348);
        }
    }
    
    int64_t r15;
    
    if (!rax_2 && (rax_3 || !(rbx_1 & 1)))
        uu_pwd::logical_path::ha7064184a6fb3e0e(&var_348, r15);
    else
        uu_pwd::physical_path::hc6deef78d56e1cc2(&var_348);
    int64_t var_310;
    _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h397e8ca74eaab133(&var_310, &var_348);
    int64_t rax_4 = var_310;
    uint64_t result_1;
    uint64_t result = result_1;
    
    if (rax_4 != -0x8000000000000000)
    {
        int64_t var_2f8 = rax_4;
        uint64_t result_2 = result;
        void** var_300;
        void** const var_2e8_1 = var_300;
        uint64_t result_3 = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h43ceecaad6eb81d8(uucore::mods::display::println_verbatim::h8dd0391446490347(&var_2f8));
        
        if (!result_3)
        {
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h776974c4eaeedfc7(&var_2e0);
            return 0;
        }
        
        result = result_3;
    }
    
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h776974c4eaeedfc7(&var_2e0);
    return result;
}
