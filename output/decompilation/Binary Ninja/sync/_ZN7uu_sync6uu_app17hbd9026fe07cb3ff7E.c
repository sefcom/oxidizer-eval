
  int64_t uu_sync::uu_app::hbd9026fe07cb3ff7(int64_t arg1)

{
    void var_800;
    clap_builder::builder::command::Command::new::h226173cf9d4ce7e8(&var_800, 
        uucore::util_name::h60d842bf27b05e82());
    void var_2e8;
    clap_builder::builder::command::Command::version::hffedbca79457cd14(&var_2e8, &var_800);
    clap_builder::builder::command::Command::about::he90c750c85b3f794(&var_800, &var_2e8);
    void var_538;
    uucore::format_usage::h76fcb2d15fbabc58(&var_538, "{} [OPTION]... FILE...sync the f…", 0x16);
    clap_builder::builder::command::Command::override_usage::hcd8e6c38bcf1184c(&var_2e8, &var_800, 
        &var_538);
    memcpy(&var_800, &var_2e8, 0x2bc);
    int64_t var_2c;
    int64_t var_544 = 0x8000000080 | var_2c;
    int32_t var_24;
    int32_t var_53c = var_24;
    clap_builder::builder::arg::Arg::new::hd46fc878d46291c1(&var_2e8, 
        "file-systemfilessrc/uu/sync/src/…");
    clap_builder::builder::arg::Arg::short::h816c192d055b63c9(&var_538, &var_2e8, 0x66);
    clap_builder::builder::arg::Arg::long::hceb55469d3fe56ee(&var_2e8, &var_538, 
        "file-systemfilessrc/uu/sync/src/…");
    clap_builder::builder::arg::Arg::conflicts_with::h65b70541f207a135(&var_538, &var_2e8, 
        &data_4133fc[8]);
    clap_builder::builder::arg::Arg::help::h493d35bbedfd13ea(&var_2e8, &var_538, 
        "sync the file systems that conta…", 0x45);
    clap_builder::builder::arg::Arg::action::h4fcfa1a150e8c61a(&var_538, &var_2e8, 2);
    clap_builder::builder::command::Command::arg::hd049008808d1342b(&var_2e8, &var_800, &var_538);
    clap_builder::builder::arg::Arg::new::hd46fc878d46291c1(&var_800, &data_4133fc[8]);
    clap_builder::builder::arg::Arg::short::h816c192d055b63c9(&var_538, &var_800, 0x64);
    clap_builder::builder::arg::Arg::long::hceb55469d3fe56ee(&var_800, &var_538, &data_4133fc[8]);
    clap_builder::builder::arg::Arg::conflicts_with::h65b70541f207a135(&var_538, &var_800, 
        "file-systemfilessrc/uu/sync/src/…");
    clap_builder::builder::arg::Arg::help::h493d35bbedfd13ea(&var_800, &var_538, 
        "sync only file data, no unneeded…", 0x36);
    clap_builder::builder::arg::Arg::action::h4fcfa1a150e8c61a(&var_538, &var_800, 2);
    clap_builder::builder::command::Command::arg::hd049008808d1342b(&var_800, &var_2e8, &var_538);
    clap_builder::builder::arg::Arg::new::hd46fc878d46291c1(&var_2e8, 
        "filessrc/uu/sync/src/sync.rs0.0.…");
    clap_builder::builder::arg::Arg::action::h4fcfa1a150e8c61a(&var_538, &var_2e8, 1);
    clap_builder::builder::arg::Arg::value_hint::h5e4863be2b9d894e(&var_2e8, &var_538);
    clap_builder::builder::command::Command::arg::hd049008808d1342b(arg1, &var_800, &var_2e8);
    return arg1;
}
