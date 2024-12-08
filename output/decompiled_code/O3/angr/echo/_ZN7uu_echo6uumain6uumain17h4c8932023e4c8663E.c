long long uu_echo::uumain::uumain::h4c8932023e4c8663(unsigned long long a0, unsigned long long a1)
{
    unsigned long v0;  // [sp-0x370], Other Possible Types: unsigned long long
    char v1;  // [bp-0x368]
    char v2;  // [bp-0x330]
    char v3;  // [bp-0x2f0], Other Possible Types: unsigned long long
    unsigned long long v5;  // rdx
    char v6;  // bl
    unsigned long long v8;  // rsi
    void* v9;  // rax
    unsigned long long v10;  // rax

    uu_echo::uu_app::h7195cb6557b15d49(&v3, a1, v5);
    clap_builder::builder::command::Command::get_matches_from::h97024cfb7945a3c3(&v1, &v3, a0, a1);
    v6 = clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(&v1, "no_newline", 10);
    v3 = std::io::stdio::stdout::h077da66234850927();
    v0 = std::io::stdio::Stderr::lock::h890f7962a170fc90(&v3, v8, v5);
    clap_builder::parser::matches::arg_matches::ArgMatches::try_get_many::had41309fa476b706(&v3, &v1, "STRING", 6);
    clap_builder::parser::error::MatchesError::unwrap::h87c40a28df54def3(&v2, "STRING", 6, &v3);
    if (!*((long long *)&v2))
    {
        if (!(!v6) || !((v10 = _$LT$std..io..stdio..StdoutLock$u20$as$u20$std..io..Write$GT$::write_all::h10000d12d1c1ff48(&v0, "\nTry ' --help' for more information.\n", 1), v10)))
        {
            core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::h33f66423185c8c21(v0);
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h923473c15deae07f(&v1);
            return 0;
        }
        v9 = uucore::mods::error::_$LT$impl$u20$core..convert..From$LT$std..io..error..Error$GT$$u20$for$u20$alloc..boxed..Box$LT$dyn$u20$uucore..mods..error..UError$GT$$GT$::from::he9f0d7c8a30f7b86(v10);
    }
    else
    {
        v9 = uu_echo::execute::h4d664c878faca400(&v0, v6 ^ 1, (unsigned int)clap_builder::parser::matches::arg_matches::ArgMatches::get_flag::h10715e73aa3a8bf1(&v1, "enable_backslash_escape", 23), &v2);
        if (!v9)
        {
            core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::h33f66423185c8c21(v0);
            core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h923473c15deae07f(&v1);
            return 0;
        }
    }
    core::ptr::drop_in_place$LT$std..io..stdio..StdoutLock$GT$::h33f66423185c8c21(v0);
    core::ptr::drop_in_place$LT$clap_builder..parser..matches..arg_matches..ArgMatches$GT$::h923473c15deae07f(&v1);
    return v9;
}
