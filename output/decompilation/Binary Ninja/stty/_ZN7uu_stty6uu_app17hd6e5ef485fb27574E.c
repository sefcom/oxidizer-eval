
  int64_t uu_stty::uu_app::hd6e5ef485fb27574(int64_t arg1)

{
    void var_568;
    clap_builder::builder::command::Command::new::hda51f2c03f6c5a23(&var_568, 
        uucore::util_name::h074417a1e6395129());
    void var_ab0;
    clap_builder::builder::command::Command::version::h7b6a0d3675479830(&var_ab0, &var_568);
    void var_7e8;
    uucore::format_usage::he053403a896311ed(&var_7e8, "{} [-F DEVICE | --file=DEVICE] […", 0x80);
    clap_builder::builder::command::Command::override_usage::hbdf2b92e35e386f0(&var_568, &var_ab0, 
        &var_7e8);
    clap_builder::builder::command::Command::about::h517b88dabecf8643(&var_ab0, &var_568);
    memcpy(&var_568, &var_ab0, 0x2bc);
    int64_t var_7f4;
    int64_t var_2ac = 0x8000000080 | var_7f4;
    int32_t var_7ec;
    int32_t var_2a4 = var_7ec;
    clap_builder::builder::arg::Arg::new::hf636dcc93de60b13(&var_ab0, 
        "allthe options for verbose and s…");
    clap_builder::builder::arg::Arg::short::h8d098838df0f4f22(&var_7e8, &var_ab0, 0x61);
    clap_builder::builder::arg::Arg::long::hfab8d6ba0693c341(&var_ab0, &var_7e8, 
        "allthe options for verbose and s…");
    clap_builder::builder::arg::Arg::help::h4897139ac14d5f73(&var_7e8, &var_ab0, 
        "print all current settings in hu…", 0x31);
    void var_2a0;
    clap_builder::builder::arg::Arg::action::h4c18f5c57b6b0550(&var_2a0, &var_7e8, 2);
    clap_builder::builder::command::Command::arg::h95b66e83f28ce007(&var_ab0, &var_568, &var_2a0);
    clap_builder::builder::arg::Arg::new::hf636dcc93de60b13(&var_568, 
        "save\x1b[0mnameCyan    stopEADVt…");
    clap_builder::builder::arg::Arg::short::h8d098838df0f4f22(&var_7e8, &var_568, 0x67);
    clap_builder::builder::arg::Arg::long::hfab8d6ba0693c341(&var_568, &var_7e8, 
        "save\x1b[0mnameCyan    stopEADVt…");
    clap_builder::builder::arg::Arg::help::h4897139ac14d5f73(&var_7e8, &var_568, 
        "print all current settings in a …", 0x32);
    clap_builder::builder::arg::Arg::action::h4c18f5c57b6b0550(&var_2a0, &var_7e8, 2);
    clap_builder::builder::command::Command::arg::h95b66e83f28ce007(&var_568, &var_ab0, &var_2a0);
    clap_builder::builder::arg::Arg::new::hf636dcc93de60b13(&var_ab0, 
        "filequitechoi128 as dyn isigERAN…");
    clap_builder::builder::arg::Arg::short::h8d098838df0f4f22(&var_7e8, &var_ab0, 0x46);
    clap_builder::builder::arg::Arg::long::hfab8d6ba0693c341(&var_ab0, &var_7e8, 
        "filequitechoi128 as dyn isigERAN…");
    clap_builder::builder::arg::Arg::value_hint::h594396eae1bf45c6(&var_7e8, &var_ab0);
    clap_builder::builder::arg::Arg::value_name::h5556da447cd8907e(&var_ab0, &var_7e8);
    clap_builder::builder::arg::Arg::help::h4897139ac14d5f73(&var_7e8, &var_ab0, 
        "open and use the specified DEVIC…", 0x32);
    clap_builder::builder::command::Command::arg::h95b66e83f28ce007(&var_ab0, &var_568, &var_7e8);
    clap_builder::builder::arg::Arg::new::hf636dcc93de60b13(&var_568, "settings");
    clap_builder::builder::arg::Arg::action::h4c18f5c57b6b0550(&var_7e8, &var_568, 1);
    clap_builder::builder::arg::Arg::help::h4897139ac14d5f73(&var_568, &var_7e8, 
        "settings to change", 0x12);
    clap_builder::builder::command::Command::arg::h95b66e83f28ce007(arg1, &var_ab0, &var_568);
    return arg1;
}
