
  int64_t alacritty::cli::Options::new::h88f1eeef51587883(int64_t arg1)

{
    void var_208;
    clap_builder::derive::Parser::parse::h6f10a5aab5ea27c7(&var_208);
    int128_t var_220;
    void* var_1c8;
    int64_t var_1c0;
    alacritty::cli::WindowOptions::config_overrides::h363042409a39fcc3(&var_220, var_1c8, var_1c0);
    int128_t var_88;
    core::ptr::drop_in_place$LT$alacritty..cli..ParsedOptions$GT$::h0ec9507b6108d3fc(&var_88);
    int64_t var_210;
    int64_t var_78 = var_210;
    var_88 = var_220;
    return memcpy(arg1, &var_208, 0x1f0);
}
