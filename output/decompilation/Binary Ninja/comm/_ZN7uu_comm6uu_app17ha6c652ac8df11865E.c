
  int64_t uu_comm::uu_app::ha6c652ac8df11865(int64_t arg1)

{
    void var_a50;
    clap_builder::builder::command::Command::new::h8cb04297ccfbdc55(&var_a50, 
        uucore::util_name::h60d842bf27b05e82());
    void var_538;
    clap_builder::builder::command::Command::version::h0b8db7f7545f961f(&var_538, &var_a50, 
        "0.0.28Compare two sorted files l…");
    clap_builder::builder::command::Command::about::hcd89649185c31ce1(&var_a50, &var_538, 
        "Compare two sorted files line by…", 0x11c);
    void var_788;
    uucore::format_usage::h76fcb2d15fbabc58(&var_788, "{} [OPTION]... FILE1 FILE2suppre…", 0x1a);
    clap_builder::builder::command::Command::override_usage::h59e8652e835bd692(&var_538, &var_a50, 
        &var_788);
    memcpy(&var_a50, &var_538, 0x2bc);
    int64_t var_27c;
    int64_t var_794 = 0x8800000088 | var_27c;
    int32_t var_274;
    int32_t var_78c = var_274;
    clap_builder::builder::arg::Arg::new::h47bf6f0437181cd3(&var_538, 
        "123totalzero-terminated-0.0.28Co…");
    clap_builder::builder::arg::Arg::short::h57149b05e5532777(&var_788, &var_538, 0x31);
    clap_builder::builder::arg::Arg::help::hc6c4258c6b5f5ae1(&var_538, &var_788, 
        "suppress column 1 (lines unique …", 0x29);
    clap_builder::builder::arg::Arg::action::h63942fa244e4e2d7(&var_788, &var_538, 2);
    clap_builder::builder::command::Command::arg::hdf03a1032199929f(&var_538, &var_a50, &var_788);
    clap_builder::builder::arg::Arg::new::h47bf6f0437181cd3(&var_a50, 
        "23totalzero-terminated-0.0.28Com…");
    clap_builder::builder::arg::Arg::short::h57149b05e5532777(&var_788, &var_a50, 0x32);
    clap_builder::builder::arg::Arg::help::hc6c4258c6b5f5ae1(&var_a50, &var_788, 
        "suppress column 2 (lines unique …", 0x29);
    clap_builder::builder::arg::Arg::action::h63942fa244e4e2d7(&var_788, &var_a50, 2);
    clap_builder::builder::command::Command::arg::hdf03a1032199929f(&var_a50, &var_538, &var_788);
    clap_builder::builder::arg::Arg::new::h47bf6f0437181cd3(&var_538, 
        "3totalzero-terminated-0.0.28Comp…");
    clap_builder::builder::arg::Arg::short::h57149b05e5532777(&var_788, &var_538, 0x33);
    clap_builder::builder::arg::Arg::help::hc6c4258c6b5f5ae1(&var_538, &var_788, 
        "suppress column 3 (lines that ap…", 0x33);
    clap_builder::builder::arg::Arg::action::h63942fa244e4e2d7(&var_788, &var_538, 2);
    clap_builder::builder::command::Command::arg::hdf03a1032199929f(&var_538, &var_a50, &var_788);
    clap_builder::builder::arg::Arg::new::h47bf6f0437181cd3(&var_a50, 
        "output-delimiterPermissionDenied…");
    clap_builder::builder::arg::Arg::long::hf8a62a6ddf6ca989(&var_788, &var_a50, 
        "output-delimiterPermissionDenied…");
    clap_builder::builder::arg::Arg::help::hc6c4258c6b5f5ae1(&var_a50, &var_788, 
        "separate columns with STRSTR\tli…", 0x19);
    clap_builder::builder::arg::Arg::value_name::h48c23f45fee90993(&var_788, &var_a50);
    clap_builder::builder::arg::Arg::default_value::h76809d39c32b1ee7(&var_a50, &var_788);
    memcpy(&var_788, &var_a50, 0x248);
    int32_t var_808;
    int32_t var_540 = var_808 | 0x20;
    int32_t var_804;
    int32_t var_53c = var_804;
    clap_builder::builder::arg::Arg::action::h63942fa244e4e2d7(&var_a50, &var_788, 1);
    memcpy(&var_788, &var_a50, 0x248);
    int32_t var_540_1 = 0x400 | var_808;
    int32_t var_53c_1 = var_804;
    clap_builder::builder::command::Command::arg::hdf03a1032199929f(&var_a50, &var_538, &var_788);
    clap_builder::builder::arg::Arg::new::h47bf6f0437181cd3(&var_538, 
        "zero-terminated-0.0.28Compare tw…");
    clap_builder::builder::arg::Arg::long::hf8a62a6ddf6ca989(&var_788, &var_538, 
        "zero-terminated-0.0.28Compare tw…");
    clap_builder::builder::arg::Arg::short::h57149b05e5532777(&var_538, &var_788, 0x7a);
    clap_builder::builder::arg::Arg::overrides_with::h148f45f9c75c9d7b(&var_788, &var_538, 
        "zero-terminated-0.0.28Compare tw…");
    clap_builder::builder::arg::Arg::help::hc6c4258c6b5f5ae1(&var_538, &var_788, 
        "line delimiter is NUL, not newli…", 0x22);
    clap_builder::builder::arg::Arg::action::h63942fa244e4e2d7(&var_788, &var_538, 2);
    clap_builder::builder::command::Command::arg::hdf03a1032199929f(&var_538, &var_a50, &var_788);
    clap_builder::builder::arg::Arg::new::h47bf6f0437181cd3(&var_a50, "FILE1FILE2");
    memcpy(&var_788, &var_a50, 0x248);
    int32_t var_540_2 = var_808 | 1;
    int32_t var_53c_2 = var_804;
    void var_270;
    clap_builder::builder::arg::Arg::value_hint::hdc1c549de59681ab(&var_270, &var_788, 3);
    clap_builder::builder::command::Command::arg::hdf03a1032199929f(&var_a50, &var_538, &var_270);
    clap_builder::builder::arg::Arg::new::h47bf6f0437181cd3(&var_538, "FILE2");
    memcpy(&var_788, &var_538, 0x248);
    int32_t var_2f0;
    int32_t var_540_3 = var_2f0 | 1;
    int32_t var_2ec;
    int32_t var_53c_3 = var_2ec;
    clap_builder::builder::arg::Arg::value_hint::hdc1c549de59681ab(&var_270, &var_788, 3);
    clap_builder::builder::command::Command::arg::hdf03a1032199929f(&var_538, &var_a50, &var_270);
    clap_builder::builder::arg::Arg::new::h47bf6f0437181cd3(&var_a50, 
        "totalzero-terminated-0.0.28Compa…");
    clap_builder::builder::arg::Arg::long::hf8a62a6ddf6ca989(&var_788, &var_a50, 
        "totalzero-terminated-0.0.28Compa…");
    clap_builder::builder::arg::Arg::help::hc6c4258c6b5f5ae1(&var_a50, &var_788, 
        "output a summaryk", 0x10);
    clap_builder::builder::arg::Arg::action::h63942fa244e4e2d7(&var_788, &var_a50, 2);
    clap_builder::builder::command::Command::arg::hdf03a1032199929f(arg1, &var_538, &var_788);
    return arg1;
}
