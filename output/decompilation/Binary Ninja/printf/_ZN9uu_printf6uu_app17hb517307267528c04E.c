
  int64_t uu_printf::uu_app::hb517307267528c04(int64_t arg1)

{
    void var_800;
    clap_builder::builder::command::Command::new::hb929ef207e30f73b(&var_800, 
        uucore::util_name::h60d842bf27b05e82());
    void var_538;
    memcpy(&var_538, &var_800, 0x2bc);
    clap_builder::builder::command::Command::version::h4a1a2c1f13d79a9f(&var_800, &var_538);
    clap_builder::builder::command::Command::about::h816a3bedc6d880bd(&var_538, &var_800);
    clap_builder::builder::command::Command::after_help::h48bb6db18ae6c072(&var_800, &var_538);
    void var_270;
    uucore::format_usage::h76fcb2d15fbabc58(&var_270, "{} FORMAT [ARGUMENT]...\n{} OPTI…", 0x21);
    clap_builder::builder::command::Command::override_usage::hdc0c293549a5ea36(&var_538, &var_800, 
        &var_270);
    memcpy(&var_800, &var_538, 0x2bc);
    int32_t var_544;
    var_544 = 0x14000000140000 | (var_544 | 2);
    int64_t var_540;
    *var_540[4] = *var_540[4];
    clap_builder::builder::arg::Arg::new::h1e35cf4a330f5bae(&var_538, 
        "helpNoneshimname\x1b[0m    "`$\E…");
    clap_builder::builder::arg::Arg::long::h4bf6946a41ac2d48(&var_270, &var_538, 
        "helpNoneshimname\x1b[0m    "`$\E…");
    clap_builder::builder::arg::Arg::help::hd2e95c0038444722(&var_538, &var_270, 
        "Print help informationversionPri…", 0x16);
    clap_builder::builder::arg::Arg::action::h41c3e58fb8362d36(&var_270, &var_538, 5);
    clap_builder::builder::command::Command::arg::h4233fc0fe841c025(&var_538, &var_800, &var_270);
    clap_builder::builder::arg::Arg::new::h1e35cf4a330f5bae(&var_800, 
        "versionPrint version information…");
    clap_builder::builder::arg::Arg::long::h4bf6946a41ac2d48(&var_270, &var_800, 
        "versionPrint version information…");
    clap_builder::builder::arg::Arg::help::hd2e95c0038444722(&var_800, &var_270, 
        "Print version informationFORMAT/…", 0x19);
    clap_builder::builder::arg::Arg::action::h41c3e58fb8362d36(&var_270, &var_800, 8);
    clap_builder::builder::command::Command::arg::h4233fc0fe841c025(&var_800, &var_538, &var_270);
    clap_builder::builder::arg::Arg::new::h1e35cf4a330f5bae(&var_270, 
        "FORMAT/rustc/8bfcae730a5db2438bb…");
    clap_builder::builder::command::Command::arg::h4233fc0fe841c025(&var_538, &var_800, &var_270);
    clap_builder::builder::arg::Arg::new::h1e35cf4a330f5bae(&var_800, "ARGUMENT");
    clap_builder::builder::arg::Arg::action::h41c3e58fb8362d36(&var_270, &var_800, 1);
    clap_builder::builder::command::Command::arg::h4233fc0fe841c025(arg1, &var_538, &var_270);
    return arg1;
}
