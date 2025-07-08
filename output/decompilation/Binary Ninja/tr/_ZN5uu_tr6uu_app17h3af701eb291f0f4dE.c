
  int64_t uu_tr::uu_app::h3af701eb291f0f4d(int64_t arg1)

{
    void var_530;
    clap_builder::builder::command::Command::new::h2b1a2506ad96ce2e(&var_530, 
        uucore::util_name::h60d842bf27b05e82());
    void var_7f8;
    clap_builder::builder::command::Command::version::h1751fe121aab407e(&var_7f8, &var_530);
    clap_builder::builder::command::Command::about::h4aa2782e572a7218(&var_530, &var_7f8);
    void var_a48;
    uucore::format_usage::h76fcb2d15fbabc58(&var_a48, "{} [OPTION]... SET1 [SET2]comple…", 0x1a);
    clap_builder::builder::command::Command::override_usage::h1d9cbc076f39dace(&var_7f8, &var_530, 
        &var_a48);
    memcpy(&var_530, &var_7f8, 0x2bc);
    int32_t var_53c;
    int32_t var_274 = 0xa0 | var_53c;
    int64_t var_538;
    int64_t var_270 = 0x80 | var_538;
    clap_builder::builder::arg::Arg::new::h17d308826a1ad663(&var_7f8, 
        "complementuse the complement of …");
    clap_builder::builder::arg::Arg::visible_short_alias::h79f7ab34598ca4db(&var_a48, &var_7f8, 
        0x43);
    clap_builder::builder::arg::Arg::short::hc6b179fac0449cf8(&var_7f8, &var_a48, 0x63);
    clap_builder::builder::arg::Arg::long::h4b4008770abf8107(&var_a48, &var_7f8, 
        "complementuse the complement of …");
    clap_builder::builder::arg::Arg::help::hf117a19d4ee4de0d(&var_7f8, &var_a48, 
        "use the complement of SET1delete…", 0x1a);
    clap_builder::builder::arg::Arg::action::h6df1ea845cf3fb37(&var_a48, &var_7f8);
    int64_t var_268;
    clap_builder::builder::arg::Arg::overrides_with::hb91f7415621b931f(&var_268, &var_a48, 
        "complementuse the complement of …");
    clap_builder::builder::command::Command::arg::he1593578f80e1d63(&var_7f8, &var_530, &var_268);
    clap_builder::builder::arg::Arg::new::h17d308826a1ad663(&var_530, 
        "deletedelete characters in SET1,…");
    clap_builder::builder::arg::Arg::short::hc6b179fac0449cf8(&var_a48, &var_530, 0x64);
    clap_builder::builder::arg::Arg::long::h4b4008770abf8107(&var_530, &var_a48, 
        "deletedelete characters in SET1,…");
    clap_builder::builder::arg::Arg::help::hf117a19d4ee4de0d(&var_a48, &var_530, 
        "delete characters in SET1, do no…", 0x2b);
    clap_builder::builder::arg::Arg::action::h6df1ea845cf3fb37(&var_530, &var_a48);
    clap_builder::builder::arg::Arg::overrides_with::hb91f7415621b931f(&var_a48, &var_530, 
        "deletedelete characters in SET1,…");
    clap_builder::builder::command::Command::arg::he1593578f80e1d63(&var_530, &var_7f8, &var_a48);
    clap_builder::builder::arg::Arg::new::h17d308826a1ad663(&var_7f8, 
        "squeeze-repeatsreplace each sequ…");
    clap_builder::builder::arg::Arg::long::h4b4008770abf8107(&var_a48, &var_7f8, 
        "squeeze-repeatsreplace each sequ…");
    clap_builder::builder::arg::Arg::short::hc6b179fac0449cf8(&var_7f8, &var_a48, 0x73);
    clap_builder::builder::arg::Arg::help::hf117a19d4ee4de0d(&var_a48, &var_7f8, 
        "replace each sequence of a repea…", 0x82);
    clap_builder::builder::arg::Arg::action::h6df1ea845cf3fb37(&var_7f8, &var_a48);
    clap_builder::builder::arg::Arg::overrides_with::hb91f7415621b931f(&var_a48, &var_7f8, 
        "squeeze-repeatsreplace each sequ…");
    clap_builder::builder::command::Command::arg::he1593578f80e1d63(&var_7f8, &var_530, &var_a48);
    clap_builder::builder::arg::Arg::new::h17d308826a1ad663(&var_530, 
        "truncate-set1first truncate SET1…");
    clap_builder::builder::arg::Arg::long::h4b4008770abf8107(&var_a48, &var_530, 
        "truncate-set1first truncate SET1…");
    clap_builder::builder::arg::Arg::short::hc6b179fac0449cf8(&var_530, &var_a48, 0x74);
    clap_builder::builder::arg::Arg::help::hf117a19d4ee4de0d(&var_a48, &var_530, 
        "first truncate SET1 to length of…", 0x25);
    clap_builder::builder::arg::Arg::action::h6df1ea845cf3fb37(&var_530, &var_a48);
    clap_builder::builder::arg::Arg::overrides_with::hb91f7415621b931f(&var_a48, &var_530, 
        "truncate-set1first truncate SET1…");
    clap_builder::builder::command::Command::arg::he1593578f80e1d63(&var_530, &var_7f8, &var_a48);
    clap_builder::builder::arg::Arg::new::h17d308826a1ad663(&var_7f8, 
        "setsBOLDBlue\x1b[4mSomedumb\x1b[…");
    clap_builder::builder::arg::Arg::num_args::h2f5839c3c8fea95f(&var_a48, &var_7f8);
    var_268 = 2;
    clap_builder::builder::arg::Arg::value_parser::hf95785a2d1e1359a(&var_7f8, &var_a48, &var_268);
    clap_builder::builder::command::Command::arg::he1593578f80e1d63(arg1, &var_530, &var_7f8);
    return arg1;
}
