
  int64_t uu_nice::uu_app::h9be1c328dcb05353(int64_t arg1)

{
    void var_560;
    clap_builder::builder::command::Command::new::h684fda09fb142e92(&var_560, 
        uucore::util_name::h074417a1e6395129());
    void var_aa8;
    clap_builder::builder::command::Command::about::h879b23b303bfa43b(&var_aa8, &var_560);
    void var_7e0;
    uucore::format_usage::he053403a896311ed(&var_7e0, "{} [OPTIONS] [COMMAND [ARGS]](uu…", 0x1d);
    clap_builder::builder::command::Command::override_usage::hc71ee2f5fed9b78e(&var_560, &var_aa8, 
        &var_7e0);
    memcpy(&var_aa8, &var_560, 0x2bc);
    int64_t var_2a4;
    int64_t var_7ec = 0x80000000a0 | var_2a4;
    int32_t var_29c;
    int32_t var_7e4 = var_29c;
    clap_builder::builder::command::Command::version::h73c08b61b2c9da9c(&var_560, &var_aa8);
    clap_builder::builder::arg::Arg::new::h2a25e7ae051e4a91(&var_aa8, 
        "adjustmentCOMMANDsrc/uu/nice/src…");
    clap_builder::builder::arg::Arg::short::h8f8eb42d223de4c6(&var_7e0, &var_aa8);
    clap_builder::builder::arg::Arg::long::ha8f668455442febc(&var_aa8, &var_7e0);
    clap_builder::builder::arg::Arg::help::h8f632b5cafa5f66f(&var_7e0, &var_aa8);
    clap_builder::builder::arg::Arg::action::h7d18dc444781c540(&var_aa8, &var_7e0, 0);
    clap_builder::builder::arg::Arg::overrides_with::h6d8e8ebb92d02981(&var_7e0, &var_aa8);
    void var_298;
    memcpy(&var_298, &var_7e0, 0x278);
    int32_t var_568;
    int32_t var_20 = var_568 | 0x20;
    int32_t var_564;
    int32_t var_1c = var_564;
    clap_builder::builder::command::Command::arg::hb9b3f097b6ee0774(&var_aa8, &var_560, &var_298);
    clap_builder::builder::arg::Arg::new::h2a25e7ae051e4a91(&var_560, 
        "COMMANDsrc/uu/nice/src/nice.rsRu…");
    clap_builder::builder::arg::Arg::action::h7d18dc444781c540(&var_7e0, &var_560, 1);
    clap_builder::builder::arg::Arg::value_hint::h76e442fb5a95d770(&var_560, &var_7e0);
    clap_builder::builder::command::Command::arg::hb9b3f097b6ee0774(arg1, &var_aa8, &var_560);
    return arg1;
}
