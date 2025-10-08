
  int64_t uu_dircolors::uu_app::h0ca3ae80d0f731e8(int64_t arg1)

{
    void var_568;
    clap_builder::builder::command::Command::new::h0481e77084ed4fa1(&var_568, 
        uucore::util_name::h074417a1e6395129());
    void var_830;
    clap_builder::builder::command::Command::version::h5d1bab49a16f3851(&var_830, &var_568);
    clap_builder::builder::command::Command::about::ha2ea6114e3327dfd(&var_568, &var_830);
    clap_builder::builder::command::Command::after_help::h7fda3194ef831d88(&var_830, &var_568);
    void var_ab0;
    uucore::format_usage::he053403a896311ed(&var_ab0, "{} [OPTION]... [FILE]bourne-shel…", 0x15);
    clap_builder::builder::command::Command::override_usage::h2af400fcff1c9755(&var_568, &var_830, 
        &var_ab0);
    memcpy(&var_830, &var_568, 0x2bc);
    int64_t var_2ac;
    int64_t var_574 = 0x8800000088 | var_2ac;
    int32_t var_2a4;
    int32_t var_56c = var_2a4;
    clap_builder::builder::arg::Arg::new::hfdc80a6b586b39e3(&var_568, 
        "bourne-shellshc-shelloutput Bour…");
    clap_builder::builder::arg::Arg::long::hd5d8fb053b3642de(&var_ab0, &var_568, 
        "shc-shelloutput Bourne shell cod…");
    clap_builder::builder::arg::Arg::short::hda298a5fe99b7383(&var_568, &var_ab0, 0x62);
    clap_builder::builder::arg::Arg::visible_alias::h4bb7dba027ee7519(&var_ab0, &var_568, 
        "bourne-shellshc-shelloutput Bour…");
    clap_builder::builder::arg::Arg::overrides_with::h289a151075eeea40(&var_568, &var_ab0, 
        "c-shelloutput Bourne shell code …");
    clap_builder::builder::arg::Arg::help::hc43a6b8a87e60c21(&var_ab0, &var_568, 
        "output Bourne shell code to set …", 0x29);
    void var_2a0;
    clap_builder::builder::arg::Arg::action::hc4d355298d420abe(&var_2a0, &var_ab0, 2);
    clap_builder::builder::command::Command::arg::h10f8fb720cf0f9a0(&var_568, &var_830, &var_2a0);
    clap_builder::builder::arg::Arg::new::hfdc80a6b586b39e3(&var_830, 
        "c-shelloutput Bourne shell code …");
    clap_builder::builder::arg::Arg::long::hd5d8fb053b3642de(&var_ab0, &var_830, 
        "cshsetenv LS_COLORS 'LS_COLORS='…");
    clap_builder::builder::arg::Arg::short::hda298a5fe99b7383(&var_830, &var_ab0, 0x63);
    clap_builder::builder::arg::Arg::visible_alias::h4bb7dba027ee7519(&var_ab0, &var_830, 
        "c-shelloutput Bourne shell code …");
    clap_builder::builder::arg::Arg::overrides_with::h289a151075eeea40(&var_830, &var_ab0, 
        "bourne-shellshc-shelloutput Bour…");
    clap_builder::builder::arg::Arg::help::hc43a6b8a87e60c21(&var_ab0, &var_830, 
        "output C shell code to set LS_CO…", 0x24);
    clap_builder::builder::arg::Arg::action::hc4d355298d420abe(&var_2a0, &var_ab0, 2);
    clap_builder::builder::command::Command::arg::h10f8fb720cf0f9a0(&var_830, &var_568, &var_2a0);
    clap_builder::builder::arg::Arg::new::hfdc80a6b586b39e3(&var_568, 
        "print-databaseprint the byte cou…");
    clap_builder::builder::arg::Arg::long::hd5d8fb053b3642de(&var_ab0, &var_568, 
        "print-databaseprint the byte cou…");
    clap_builder::builder::arg::Arg::short::hda298a5fe99b7383(&var_568, &var_ab0, 0x70);
    clap_builder::builder::arg::Arg::help::hc43a6b8a87e60c21(&var_ab0, &var_568, 
        "print the byte countsprint-ls-co…", 0x15);
    clap_builder::builder::arg::Arg::action::hc4d355298d420abe(&var_2a0, &var_ab0, 2);
    clap_builder::builder::command::Command::arg::h10f8fb720cf0f9a0(&var_568, &var_830, &var_2a0);
    clap_builder::builder::arg::Arg::new::hfdc80a6b586b39e3(&var_830, 
        "print-ls-colorsoutput fully esca…");
    clap_builder::builder::arg::Arg::long::hd5d8fb053b3642de(&var_ab0, &var_830, 
        "print-ls-colorsoutput fully esca…");
    clap_builder::builder::arg::Arg::help::hc43a6b8a87e60c21(&var_830, &var_ab0, 
        "output fully escaped colors for …", 0x27);
    clap_builder::builder::arg::Arg::action::hc4d355298d420abe(&var_ab0, &var_830, 2);
    clap_builder::builder::command::Command::arg::h10f8fb720cf0f9a0(&var_830, &var_568, &var_ab0);
    clap_builder::builder::arg::Arg::new::hfdc80a6b586b39e3(&var_568, 
        "FILE.alz.mpgchar'\''.svg.flcleft…");
    memcpy(&var_ab0, &var_568, 0x278);
    int32_t var_2f0;
    int32_t var_838 = var_2f0 | 4;
    int32_t var_2ec;
    int32_t var_834 = var_2ec;
    clap_builder::builder::arg::Arg::value_hint::h186ea72d8a850fe6(&var_568, &var_ab0);
    clap_builder::builder::arg::Arg::action::hc4d355298d420abe(&var_ab0, &var_568, 1);
    clap_builder::builder::command::Command::arg::h10f8fb720cf0f9a0(arg1, &var_830, &var_ab0);
    return arg1;
}
