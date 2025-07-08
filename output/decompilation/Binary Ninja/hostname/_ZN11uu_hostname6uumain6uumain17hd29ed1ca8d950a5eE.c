
  int128_t* uu_hostname::uumain::uumain::hd29ed1ca8d950a5e(int64_t arg1)

{
    int64_t var_2e0;
    uu_hostname::uu_app::hb6e249c122554ffe(&var_2e0);
    int64_t var_318;
    clap_builder::builder::command::Command::try_get_matches_from::h87cf345e6a930018(&var_318, 
        &var_2e0, arg1);
    int64_t rax = var_318;
    int64_t var_310;
    
    if (rax == -0x8000000000000000)
        /* tailcall */
        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::h7fb9d0425989847a(var_310);
    
    int64_t var_2e8;
    int64_t var_2b0 = var_2e8;
    int128_t var_2f8;
    int128_t var_2c0 = var_2f8;
    int128_t var_308;
    int128_t var_2d0 = var_308;
    var_2e0 = rax;
    int64_t var_2d8 = var_310;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::hfe4358f699f5b9c3(
        &var_318, &var_2e0, &data_41440c, 4);
    void* rax_2 = clap_builder::parser::error::MatchesError::unwrap::hcb60a1c181f5a1cb(
        &data_41440c, 4, &var_318);
    int128_t* result;
    int64_t rdx_3;
    
    if (!rax_2)
        result = uu_hostname::display_hostname::hb7e83080e266b2ca(&var_2e0);
    else
        result = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::ha754b84eb7781c97(hostname::set::h6e7654145cf08af4(rax_2));
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hb1b2c5783d635b8f(&var_2e0);
    return result;
}
