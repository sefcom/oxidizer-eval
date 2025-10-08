
  uint64_t uu_hostname::uumain::uumain::h101c7dae6653b598(int64_t arg1)

{
    int64_t var_2e0;
    uu_hostname::uu_app::hbac75410cf2297c2(&var_2e0);
    int64_t var_318;
    clap_builder::builder::command::Command::try_get_matches_from::h8864a067f6a4a499(&var_318, 
        &var_2e0, arg1);
    int64_t rax = var_318;
    int64_t var_310;
    
    if (-(rax) == -0x8000000000000000)
        return uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$clap_builder..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he92a37de32738e67(var_310);
    
    int64_t var_2e8;
    int64_t var_2b0_1 = var_2e8;
    int128_t var_2f8;
    int128_t var_2c0_1 = var_2f8;
    int128_t var_308;
    int128_t var_2d0_1 = var_308;
    var_2e0 = rax;
    int64_t var_2d8_1 = var_310;
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_one::h30336fc30241893d(
        &var_318, &var_2e0, &data_418294[0xc], 4);
    void* rax_2 = clap_builder::parser::error::MatchesError::unwrap::h2f6d677897803212(
        &data_418294[0xc], 4, &var_318);
    uint64_t result;
    
    if (!rax_2)
    {
        uint64_t result_1;
        void** rdx_2;
        result_1 = uu_hostname::display_hostname::h96c3f430138717a0(&var_2e0);
        result = result_1;
    }
    else
        result = _$LT$core..result..Result$LT$T$C$std..io..error..Error$GT$$u20$as$u20$uucore..mods..error..FromIo$LT$core..result..Result$LT$T$C$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$$GT$$GT$::map_err_context::hee0302ee3c19f076(hostname::set::h8f209346690fd4b1(rax_2));
    
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hb284bcbef01399f6(&var_2e0);
    return result;
}
