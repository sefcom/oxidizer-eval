
  int128_t* uu_echo::uumain::uumain::h0a7e780663d83ed5(int64_t arg1)

{
    int64_t* var_2f0;
    uu_echo::uu_app::hac082564844c1592(&var_2f0);
    void var_368;
    clap_builder::builder::command::Command::get_matches_from::hc64b423ca8b1bc86(&var_368, 
        &var_2f0, arg1);
    uint64_t rbx_1 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
        &var_368, "no_newlineenable_backslash_escap…", 0xa);
    char rax_1 =
        clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(
        &var_368, "enable_backslash_escape", 0x17);
    std::io::stdio::stdout::h077da66234850927();
    var_2f0 = &std::io::stdio::STDOUT::hdbe36c11cd3014ce;
    int64_t* var_370 = std::io::stdio::Stderr::lock::h890f7962a170fc90(&var_2f0);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h12533fceda9f49bd(
        &var_2f0, &var_368, "STRINGno_newlineenable_backslash…", 6);
    int64_t var_330;
    clap_builder::parser::error::MatchesError::unwrap::hb3371b5fc2ddc015(&var_330, &var_2f0);
    int128_t* result;
    uint64_t rdx_2;
    
    if (var_330)
    {
        rbx_1 ^= 1;
        result = uu_echo::execute::h70a095d897960844(&var_370, rbx_1, rax_1, &var_330);
        
        if (result)
            goto label_45d79a;
    }
    else if (!rbx_1 &&
        _$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::h10000d12d1c1ff48(
        &var_370, "\nTry ' --help' for more informa…", 1))
    {
        result = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa();
        label_45d79a:
        core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::ha220d356cfc00f60(var_370);
        core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hb403a57a7b833e43(&var_368);
        return result;
    }
    core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::ha220d356cfc00f60(var_370);
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hb403a57a7b833e43(&var_368);
    return nullptr;
}
