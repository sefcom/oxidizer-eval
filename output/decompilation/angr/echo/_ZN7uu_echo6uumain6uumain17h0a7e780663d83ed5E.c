long long uu_echo::uumain::uumain::h0a7e780663d83ed5(unsigned long long a0, unsigned long long a1)
{
    unsigned long v0;  // [sp-0x370]
    char v1;  // [bp-0x368]
    char v2;  // [bp-0x330]
    char v3;  // [bp-0x2f0], Other Possible Types: unsigned long
    char v5;  // bl
    void* v7;  // rax
    unsigned long long v8;  // rax

    uu_echo::uu_app::hac082564844c1592(&v3);
    clap_builder::builder::command::Command::get_matches_from::hc64b423ca8b1bc86(&v1, &v3, a0, a1);
    v5 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v1, "no_newline", 10);
    v3 = std::io::stdio::stdout::h077da66234850927();
    v0 = std::io::stdio::Stderr::lock::h890f7962a170fc90(&v3);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::h12533fceda9f49bd(&v3, &v1, "STRING", 6);
    clap_builder::parser::error::MatchesError::unwrap::hb3371b5fc2ddc015(&v2, &v3);
    if (!*((long long *)&v2))
    {
        if (!(!v5) || !((v8 = _$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::h10000d12d1c1ff48(&v0, "\nTry ' --help' for more information.\n", 1), v8)))
        {
            core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::ha220d356cfc00f60(v0);
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hb403a57a7b833e43(&v1);
            return 0;
        }
        v7 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::hcd961c31063bf4fa(v8);
    }
    else
    {
        v7 = uu_echo::execute::h70a095d897960844(&v0, v5 ^ 1, (unsigned int)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h5d143567c1b61caf(&v1, "enable_backslash_escape", 23), &v2);
        if (!v7)
        {
            core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::ha220d356cfc00f60(v0);
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hb403a57a7b833e43(&v1);
            return 0;
        }
    }
    core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::ha220d356cfc00f60(v0);
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::hb403a57a7b833e43(&v1);
    return v7;
}
