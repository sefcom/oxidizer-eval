long long uu_basename::uu_app::habcea9f450e537b1(unsigned long long a0, unsigned long a1, unsigned long a2)
{
    char v0;  // [bp-0x800]
    unsigned int v1;  // [sp-0x5b8]
    unsigned int v2;  // [sp-0x5b4]
    char v3;  // [bp-0x5b0]
    char v4;  // [bp-0x368]
    char v5;  // [bp-0x364]
    unsigned long long v6;  // [sp-0x2f4]
    unsigned int v7;  // [sp-0x2ec]
    char v8;  // [bp-0x2e8]
    char v9;  // [bp-0x2c]
    char v10;  // [bp-0x24]
    unsigned long long v12;  // rdx

    clap_builder::builder::command::Command::new::h7c961156b9b135d7(&v3, uucore::util_name::h412db5e565a079f3(), v12);
    clap_builder::builder::command::Command::version::h200ba472159cb520(&v8, &v3, v12);
    clap_builder::builder::command::Command::about::hd588934835cbe829(&v3, &v8);
    uucore::format_usage::h00b69bae12d8ac9c(&v0, "{} [-z] NAME [SUFFIX]\n{} OPTION... NAME...", 42);
    clap_builder::builder::command::Command::override_usage::hd6ac1c9682ef1f98(&v8, &v3, &v0);
    memcpy(&v3, &v8, 700);
    v6 = 549755814016 | *((long long *)&v9);
    v7 = *((int *)&v10);
    clap_builder::builder::arg::Arg::new::h196c01fd867db6aa(&v8, "multiple", 8);
    clap_builder::builder::arg::Arg::short::h7cc1faec4784d1d0(&v0, &v8, 97);
    clap_builder::builder::arg::Arg::long::h6fcdbaeb661b6890(&v8, &v0, "multiple", 8);
    clap_builder::builder::arg::Arg::help::hb58807301f68c2a3(&v0, &v8, "support multiple arguments and treat each as a NAME", 51);
    clap_builder::builder::arg::Arg::action::hab0dd6f3b36efa2d(&v8, &v0, 2);
    clap_builder::builder::arg::Arg::overrides_with::hac5111be2af4e1fe(&v0, &v8, "multiple", 8);
    clap_builder::builder::command::Command::arg::h8fd20cc19b677f0d(&v8, &v3, &v0);
    clap_builder::builder::arg::Arg::new::h196c01fd867db6aa(&v3, "name", 4);
    clap_builder::builder::arg::Arg::action::hab0dd6f3b36efa2d(&v0, &v3, 1);
    clap_builder::builder::arg::Arg::value_hint::hcea0501a129bc493(&v3, &v0);
    memcpy(&v0, &v3, 584);
    v1 = 516 | *((int *)&v4);
    v2 = *((int *)&v5);
    clap_builder::builder::command::Command::arg::h8fd20cc19b677f0d(&v3, &v8, &v0);
    clap_builder::builder::arg::Arg::new::h196c01fd867db6aa(&v8, "suffix", 6);
    clap_builder::builder::arg::Arg::short::h7cc1faec4784d1d0(&v0, &v8, 115);
    clap_builder::builder::arg::Arg::long::h6fcdbaeb661b6890(&v8, &v0, "suffix", 6);
    clap_builder::builder::arg::Arg::value_name::h73a2bd86c3b56967(&v0, &v8, v12);
    clap_builder::builder::arg::Arg::help::hb58807301f68c2a3(&v8, &v0, "remove a trailing SUFFIX; implies -a", 36);
    clap_builder::builder::arg::Arg::overrides_with::hac5111be2af4e1fe(&v0, &v8, "suffix", 6);
    clap_builder::builder::command::Command::arg::h8fd20cc19b677f0d(&v8, &v3, &v0);
    clap_builder::builder::arg::Arg::new::h196c01fd867db6aa(&v3, "zero", 4);
    clap_builder::builder::arg::Arg::short::h7cc1faec4784d1d0(&v0, &v3, 122);
    clap_builder::builder::arg::Arg::long::h6fcdbaeb661b6890(&v3, &v0, "zero", 4);
    clap_builder::builder::arg::Arg::help::hb58807301f68c2a3(&v0, &v3, "end each output line with NUL, not newlinesrc/uu/basename/src/basename.rs/rustc/8bfcae730a5db2438bbda72796175bba21427be1/library/core/src/str/pattern.rs", 42);
    clap_builder::builder::arg::Arg::action::hab0dd6f3b36efa2d(&v3, &v0, 2);
    clap_builder::builder::arg::Arg::overrides_with::hac5111be2af4e1fe(&v0, &v3, "zero", 4);
    clap_builder::builder::command::Command::arg::h8fd20cc19b677f0d(a0, &v8, &v0);
    return a0;
}
