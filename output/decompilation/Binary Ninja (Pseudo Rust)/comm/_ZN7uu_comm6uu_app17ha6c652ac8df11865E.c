
  fn uu_comm::uu_app::ha6c652ac8df11865(arg1: i64) -> i64

{
    let mut var_a50: ();
    clap_builder::builder::command::Command::new::h8cb04297ccfbdc55(&var_a50, 
        uucore::util_name::h60d842bf27b05e82());
    let mut var_538: ();
    clap_builder::builder::command::Command::version::h0b8db7f7545f961f(&var_538, &var_a50, 
        "0.0.28Compare two sorted files l…");
    clap_builder::builder::command::Command::about::hcd89649185c31ce1(&var_a50, &var_538, 
        "Compare two sorted files line by…", 0x11c);
    let mut var_788: ();
    uucore::format_usage::h76fcb2d15fbabc58(&var_788, "{} [OPTION]... FILE1 FILE2suppre…", 0x1a);
    clap_builder::builder::command::Command::override_usage::h59e8652e835bd692(&var_538, &var_a50, 
        &var_788);
    memcpy(&var_a50, &var_538, 0x2bc);
    let var_27c: i64;
    let var_794: i64 = 0x8800000088 | var_27c;
    let var_274: i32;
    let var_78c: i32 = var_274;
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
    let var_808: i32;
    let var_540: i32 = var_808 | 0x20;
    let var_804: i32;
    let var_53c: i32 = var_804;
    clap_builder::builder::arg::Arg::action::h63942fa244e4e2d7(&var_a50, &var_788, 1);
    memcpy(&var_788, &var_a50, 0x248);
    let var_540_1: i32 = 0x400 | var_808;
    let var_53c_1: i32 = var_804;
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
    let var_540_2: i32 = var_808 | 1;
    let var_53c_2: i32 = var_804;
    let mut var_270: ();
    clap_builder::builder::arg::Arg::value_hint::hdc1c549de59681ab(&var_270, &var_788, 3);
    clap_builder::builder::command::Command::arg::hdf03a1032199929f(&var_a50, &var_538, &var_270);
    clap_builder::builder::arg::Arg::new::h47bf6f0437181cd3(&var_538, "FILE2");
    memcpy(&var_788, &var_538, 0x248);
    let var_2f0: i32;
    let var_540_3: i32 = var_2f0 | 1;
    let var_2ec: i32;
    let var_53c_3: i32 = var_2ec;
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
    arg1
}
