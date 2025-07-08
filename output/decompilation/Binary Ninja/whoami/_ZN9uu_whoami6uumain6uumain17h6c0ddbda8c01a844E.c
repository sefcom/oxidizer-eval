
  int64_t* uu_whoami::uumain::uumain::h6c0ddbda8c01a844(int64_t arg1)

{
    int64_t var_2e8;
    uu_whoami::uu_app::h74b0fb3ed938f565(&var_2e8);
    int64_t var_320;
    clap_builder::builder::command::Command::try_get_matches_from::hc9ef77e42fd4ef1d(&var_320, 
        &var_2e8, arg1);
    int64_t rax = var_320;
    int64_t var_318;
    
    if (rax == -0x8000000000000000)
        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(var_318);
    
    int64_t var_2f0;
    int64_t var_328_1 = var_2f0;
    int128_t var_300;
    int128_t var_338_1 = var_300;
    int128_t var_310;
    int128_t var_348_1 = var_310;
    int64_t var_358 = rax;
    int64_t var_350_1 = var_318;
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h61cf24ab013da276(&var_358);
    uu_whoami::whoami::h4c4b8e85df7041a6(&var_2e8);
    int64_t rcx_2 = var_2e8;
    int64_t* result;
    
    if (rcx_2 == -0x8000000000000000)
        return result;
    
    int64_t var_370 = rcx_2;
    int64_t* result_1 = result;
    int64_t var_2d8;
    int64_t var_360_1 = var_2d8;
    return _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::h986f92b3628ea713(uucore::mods::display::println_verbatim::h0dd006cf780b5f2c(&var_370));
}
