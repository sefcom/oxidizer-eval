long long uu_tr::uu_app::h3af701eb291f0f4d(unsigned long long a0)
{
    char v0;  // [bp-0xa48]
    char v1;  // [bp-0x7f8]
    char v2;  // [bp-0x53c]
    char v3;  // [bp-0x538]
    char v4;  // [bp-0x530]
    unsigned int v5;  // [sp-0x274]
    unsigned long long v6;  // [sp-0x270]
    char v7;  // [bp-0x268], Other Possible Types: unsigned long long
    unsigned long long v9;  // rdx

    clap_builder::builder::command::Command::new::h2b1a2506ad96ce2e(&v4, uucore::util_name::h60d842bf27b05e82(), v9);
    clap_builder::builder::command::Command::version::h1751fe121aab407e(&v1, &v4);
    clap_builder::builder::command::Command::about::h4aa2782e572a7218(&v4, &v1);
    uucore::format_usage::h76fcb2d15fbabc58(&v0, "{} [OPTION]... SET1 [SET2]", 26);
    clap_builder::builder::command::Command::override_usage::h1d9cbc076f39dace(&v1, &v4, &v0);
    memcpy(&v4, &v1, 700);
    v5 = 160 | *((int *)&v2);
    v6 = 128 | *((long long *)&v3);
    clap_builder::builder::arg::Arg::new::h17d308826a1ad663(&v1, "complement", 10);
    clap_builder::builder::arg::Arg::visible_short_alias::h79f7ab34598ca4db(&v0, &v1, 67);
    clap_builder::builder::arg::Arg::short::hc6b179fac0449cf8(&v1, &v0, 99);
    clap_builder::builder::arg::Arg::long::h4b4008770abf8107(&v0, &v1, "complement", 10);
    clap_builder::builder::arg::Arg::help::hf117a19d4ee4de0d(&v1, &v0, "use the complement of SET1", 26);
    clap_builder::builder::arg::Arg::action::h6df1ea845cf3fb37(&v0, &v1);
    clap_builder::builder::arg::Arg::overrides_with::hb91f7415621b931f(&v7, &v0, "complement", 10);
    clap_builder::builder::command::Command::arg::he1593578f80e1d63(&v1, &v4, &v7);
    clap_builder::builder::arg::Arg::new::h17d308826a1ad663(&v4, "delete", 6);
    clap_builder::builder::arg::Arg::short::hc6b179fac0449cf8(&v0, &v4, 100);
    clap_builder::builder::arg::Arg::long::h4b4008770abf8107(&v4, &v0, "delete", 6);
    clap_builder::builder::arg::Arg::help::hf117a19d4ee4de0d(&v0, &v4, "delete characters in SET1, do not translate", 43);
    clap_builder::builder::arg::Arg::action::h6df1ea845cf3fb37(&v4, &v0);
    clap_builder::builder::arg::Arg::overrides_with::hb91f7415621b931f(&v0, &v4, "delete", 6);
    clap_builder::builder::command::Command::arg::he1593578f80e1d63(&v4, &v1, &v0);
    clap_builder::builder::arg::Arg::new::h17d308826a1ad663(&v1, "squeeze-repeats", 15);
    clap_builder::builder::arg::Arg::long::h4b4008770abf8107(&v0, &v1, "squeeze-repeats", 15);
    clap_builder::builder::arg::Arg::short::hc6b179fac0449cf8(&v1, &v0, 115);
    clap_builder::builder::arg::Arg::help::hf117a19d4ee4de0d(&v0, &v1, "replace each sequence of a repeated character that is listed in the last specified SET, with a single occurrence of that character", 130);
    clap_builder::builder::arg::Arg::action::h6df1ea845cf3fb37(&v1, &v0);
    clap_builder::builder::arg::Arg::overrides_with::hb91f7415621b931f(&v0, &v1, "squeeze-repeats", 15);
    clap_builder::builder::command::Command::arg::he1593578f80e1d63(&v1, &v4, &v0);
    clap_builder::builder::arg::Arg::new::h17d308826a1ad663(&v4, "truncate-set1", 13);
    clap_builder::builder::arg::Arg::long::h4b4008770abf8107(&v0, &v4, "truncate-set1", 13);
    clap_builder::builder::arg::Arg::short::hc6b179fac0449cf8(&v4, &v0, 116);
    clap_builder::builder::arg::Arg::help::hf117a19d4ee4de0d(&v0, &v4, "first truncate SET1 to length of SET2", 37);
    clap_builder::builder::arg::Arg::action::h6df1ea845cf3fb37(&v4, &v0);
    clap_builder::builder::arg::Arg::overrides_with::hb91f7415621b931f(&v0, &v4, "truncate-set1", 13);
    clap_builder::builder::command::Command::arg::he1593578f80e1d63(&v4, &v1, &v0);
    clap_builder::builder::arg::Arg::new::h17d308826a1ad663(&v1, "sets", 4);
    clap_builder::builder::arg::Arg::num_args::h2f5839c3c8fea95f(&v0, &v1);
    v7 = 2;
    clap_builder::builder::arg::Arg::value_parser::hf95785a2d1e1359a(&v1, &v0, &v7);
    clap_builder::builder::command::Command::arg::he1593578f80e1d63(a0, &v4, &v1);
    return a0;
}
