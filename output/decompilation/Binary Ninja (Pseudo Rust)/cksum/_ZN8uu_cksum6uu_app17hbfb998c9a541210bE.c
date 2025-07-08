
  fn uu_cksum::uu_app::hbfb998c9a541210b(arg1: i64) -> i64

{
    let mut var_7f8: ();
    clap_builder::builder::command::Command::new::hc4791226d997769f(&var_7f8, 
        uucore::util_name::h60d842bf27b05e82());
    let mut var_530: ();
    clap_builder::builder::command::Command::version::h6af4f4fec42e0bfc(&var_530, &var_7f8, 
        "0.0.28{} [OPTIONS] [FILE]...algo…");
    clap_builder::builder::command::Command::about::h465eee02d36c0f6b(&var_7f8, &var_530, 
        "Print CRC and size for each file…", 0x20);
    let mut var_a48: ();
    uucore::format_usage::h76fcb2d15fbabc58(&var_a48, "{} [OPTIONS] [FILE]...algorithms…", 0x16);
    clap_builder::builder::command::Command::override_usage::h7dcdf9dabc732f96(&var_530, &var_7f8, 
        &var_a48);
    memcpy(&var_7f8, &var_530, 0x2bc);
    let var_274: i64;
    let var_53c: i64 = 0x8800000088 | var_274;
    let var_26c: i32;
    let var_534: i32 = var_26c;
    clap_builder::builder::arg::Arg::new::hbda368a754bfeeca(&var_530, "filemode{");
    memcpy(&var_a48, &var_530, 0x248);
    let var_2e8: i32;
    let var_800: i32 = var_2e8 | 4;
    let var_2e4: i32;
    let var_7fc: i32 = var_2e4;
    clap_builder::builder::arg::Arg::action::h32c9b645fd3f4279(&var_530, &var_a48, 1);
    let mut var_268: i64 = 2;
    clap_builder::builder::arg::Arg::value_parser::h2cb6f9793451f7a9(&var_a48, &var_530, &var_268);
    clap_builder::builder::arg::Arg::value_hint::h307fea4c41f31510(&var_268, &var_a48, 3);
    clap_builder::builder::command::Command::arg::h5efeed937d3b5e7d(&var_530, &var_7f8, &var_268);
    clap_builder::builder::arg::Arg::new::hbda368a754bfeeca(&var_7f8, 
        "algorithmselect the digest type …");
    clap_builder::builder::arg::Arg::long::hafaa49ca8618007e(&var_a48, &var_7f8, 
        "algorithmselect the digest type …");
    clap_builder::builder::arg::Arg::short::h76f2a3ae4a7efd56(&var_7f8, &var_a48, 0x61);
    clap_builder::builder::arg::Arg::help::h44dbe5bb7ba0ac97(&var_a48, &var_7f8, 
        "select the digest type to use. S…", 0x2f);
    clap_builder::builder::arg::Arg::value_name::hb6cf57d750a55842(&var_7f8, &var_a48);
    memcpy(&var_268, &data_755678, 0xf0);
    clap_builder::builder::arg::Arg::value_parser::h461944c7bd2494a6(&var_a48, &var_7f8, &var_268);
    clap_builder::builder::command::Command::arg::h5efeed937d3b5e7d(&var_7f8, &var_530, &var_a48);
    clap_builder::builder::arg::Arg::new::hbda368a754bfeeca(&var_530, "untagged0");
    clap_builder::builder::arg::Arg::long::hafaa49ca8618007e(&var_a48, &var_530, "untagged0");
    clap_builder::builder::arg::Arg::help::h44dbe5bb7ba0ac97(&var_530, &var_a48, 
        "create a reversed style checksum…", 0x35);
    clap_builder::builder::arg::Arg::action::h32c9b645fd3f4279(&var_a48, &var_530, 2);
    clap_builder::builder::arg::Arg::overrides_with::hed4a0bb1cdf80f12(&var_268, &var_a48, 
        "tagbinary0.0.28{} [OPTIONS] [FIL…");
    clap_builder::builder::command::Command::arg::h5efeed937d3b5e7d(&var_530, &var_7f8, &var_268);
    clap_builder::builder::arg::Arg::new::hbda368a754bfeeca(&var_7f8, 
        "tagbinary0.0.28{} [OPTIONS] [FIL…");
    clap_builder::builder::arg::Arg::long::hafaa49ca8618007e(&var_a48, &var_7f8, 
        "tagbinary0.0.28{} [OPTIONS] [FIL…");
    clap_builder::builder::arg::Arg::help::h44dbe5bb7ba0ac97(&var_7f8, &var_a48, 
        "create a BSD style checksum, und…", 0x36);
    clap_builder::builder::arg::Arg::action::h32c9b645fd3f4279(&var_a48, &var_7f8, 2);
    clap_builder::builder::arg::Arg::overrides_with::hed4a0bb1cdf80f12(&var_268, &var_a48, 
        "untagged0");
    clap_builder::builder::command::Command::arg::h5efeed937d3b5e7d(&var_7f8, &var_530, &var_268);
    clap_builder::builder::arg::Arg::new::hbda368a754bfeeca(&var_530, 
        "lengthdigest length in bits; mus…");
    clap_builder::builder::arg::Arg::long::hafaa49ca8618007e(&var_a48, &var_530, 
        "lengthdigest length in bits; mus…");
    let rax_4: *mut fn(arg1: *mut i8, arg2: *mut i8, arg3: i64) -> *mut i8 =
        alloc::boxed::Box$LT$T$GT$::new::h1b8fa5609220b983();
    var_268 = 4;
    let var_260: *mut fn(arg1: *mut i8, arg2: *mut i8, arg3: i64) -> *mut i8 = rax_4;
    let var_258: *mut c_void = &data_755768;
    clap_builder::builder::arg::Arg::value_parser::h0c2b0b6f80eb2588(&var_530, &var_a48, &var_268);
    clap_builder::builder::arg::Arg::short::h76f2a3ae4a7efd56(&var_a48, &var_530, 0x6c);
    clap_builder::builder::arg::Arg::help::h44dbe5bb7ba0ac97(&var_530, &var_a48, 
        "digest length in bits; must not …", 0x63);
    clap_builder::builder::arg::Arg::action::h32c9b645fd3f4279(&var_a48, &var_530, 0);
    clap_builder::builder::command::Command::arg::h5efeed937d3b5e7d(&var_530, &var_7f8, &var_a48);
    clap_builder::builder::arg::Arg::new::hbda368a754bfeeca(&var_7f8, 
        "rawemit a raw binary digest, not…");
    clap_builder::builder::arg::Arg::long::hafaa49ca8618007e(&var_a48, &var_7f8, 
        "rawemit a raw binary digest, not…");
    clap_builder::builder::arg::Arg::help::h44dbe5bb7ba0ac97(&var_7f8, &var_a48, 
        "emit a raw binary digest, not he…", 0x29);
    clap_builder::builder::arg::Arg::action::h32c9b645fd3f4279(&var_a48, &var_7f8, 2);
    clap_builder::builder::command::Command::arg::h5efeed937d3b5e7d(&var_7f8, &var_530, &var_a48);
    clap_builder::builder::arg::Arg::new::hbda368a754bfeeca(&var_530, 
        "strictexit non-zero for improper…");
    clap_builder::builder::arg::Arg::long::hafaa49ca8618007e(&var_a48, &var_530, 
        "strictexit non-zero for improper…");
    clap_builder::builder::arg::Arg::help::h44dbe5bb7ba0ac97(&var_530, &var_a48, 
        "exit non-zero for improperly for…", 0x35);
    clap_builder::builder::arg::Arg::action::h32c9b645fd3f4279(&var_a48, &var_530, 2);
    clap_builder::builder::command::Command::arg::h5efeed937d3b5e7d(&var_530, &var_7f8, &var_a48);
    clap_builder::builder::arg::Arg::new::hbda368a754bfeeca(&var_7f8, 
        "checkread hashsums from the FILE…");
    clap_builder::builder::arg::Arg::short::h76f2a3ae4a7efd56(&var_a48, &var_7f8, 0x63);
    clap_builder::builder::arg::Arg::long::hafaa49ca8618007e(&var_7f8, &var_a48, 
        "checkread hashsums from the FILE…");
    clap_builder::builder::arg::Arg::help::h44dbe5bb7ba0ac97(&var_a48, &var_7f8, 
        "read hashsums from the FILEs and…", 0x2b);
    clap_builder::builder::arg::Arg::action::h32c9b645fd3f4279(&var_7f8, &var_a48, 2);
    clap_builder::builder::arg::Arg::conflicts_with::h674f2147962b758e(&var_a48, &var_7f8, 
        "tagbinary0.0.28{} [OPTIONS] [FIL…");
    clap_builder::builder::command::Command::arg::h5efeed937d3b5e7d(&var_7f8, &var_530, &var_a48);
    clap_builder::builder::arg::Arg::new::hbda368a754bfeeca(&var_530, 
        "base64emit a base64 digest, not …");
    clap_builder::builder::arg::Arg::long::hafaa49ca8618007e(&var_a48, &var_530, 
        "base64emit a base64 digest, not …");
    clap_builder::builder::arg::Arg::help::h44dbe5bb7ba0ac97(&var_530, &var_a48, 
        "emit a base64 digest, not hexade…", 0x25);
    clap_builder::builder::arg::Arg::action::h32c9b645fd3f4279(&var_a48, &var_530, 2);
    clap_builder::builder::arg::Arg::conflicts_with::h674f2147962b758e(&var_268, &var_a48, 
        "rawemit a raw binary digest, not…");
    clap_builder::builder::command::Command::arg::h5efeed937d3b5e7d(&var_530, &var_7f8, &var_268);
    clap_builder::builder::arg::Arg::new::hbda368a754bfeeca(&var_7f8, "textSomee");
    clap_builder::builder::arg::Arg::long::hafaa49ca8618007e(&var_a48, &var_7f8, "textSomee");
    clap_builder::builder::arg::Arg::short::h76f2a3ae4a7efd56(&var_7f8, &var_a48, 0x74);
    memcpy(&var_a48, &var_7f8, 0x248);
    let var_5b0: i32;
    let var_800_1: i32 = var_5b0 | 4;
    let var_5ac: i32;
    let var_7fc_1: i32 = var_5ac;
    clap_builder::builder::arg::Arg::overrides_with::hed4a0bb1cdf80f12(&var_7f8, &var_a48, 
        "binary0.0.28{} [OPTIONS] [FILE].…");
    clap_builder::builder::arg::Arg::action::h32c9b645fd3f4279(&var_a48, &var_7f8, 2);
    clap_builder::builder::command::Command::arg::h5efeed937d3b5e7d(&var_7f8, &var_530, &var_a48);
    clap_builder::builder::arg::Arg::new::hbda368a754bfeeca(&var_530, 
        "binary0.0.28{} [OPTIONS] [FILE].…");
    clap_builder::builder::arg::Arg::long::hafaa49ca8618007e(&var_a48, &var_530, 
        "binary0.0.28{} [OPTIONS] [FILE].…");
    clap_builder::builder::arg::Arg::short::h76f2a3ae4a7efd56(&var_530, &var_a48, 0x62);
    memcpy(&var_a48, &var_530, 0x248);
    let var_800_2: i32 = var_2e8 | 4;
    let var_7fc_2: i32 = var_2e4;
    clap_builder::builder::arg::Arg::overrides_with::hed4a0bb1cdf80f12(&var_530, &var_a48, 
        "textSomee");
    clap_builder::builder::arg::Arg::action::h32c9b645fd3f4279(&var_a48, &var_530, 2);
    clap_builder::builder::command::Command::arg::h5efeed937d3b5e7d(&var_530, &var_7f8, &var_a48);
    clap_builder::builder::arg::Arg::new::hbda368a754bfeeca(&var_7f8, "warnZeroV");
    clap_builder::builder::arg::Arg::short::h76f2a3ae4a7efd56(&var_a48, &var_7f8, 0x77);
    clap_builder::builder::arg::Arg::long::hafaa49ca8618007e(&var_7f8, &var_a48, "warnZeroV");
    clap_builder::builder::arg::Arg::help::h44dbe5bb7ba0ac97(&var_a48, &var_7f8, 
        "warn about improperly formatted …", 0x2e);
    clap_builder::builder::arg::Arg::action::h32c9b645fd3f4279(&var_268, &var_a48, 2);
    clap_builder::builder::command::Command::arg::h5efeed937d3b5e7d(&var_7f8, &var_530, &var_268);
    clap_builder::builder::arg::Arg::new::hbda368a754bfeeca(&var_530, 
        "statusdon't output anything, sta…");
    clap_builder::builder::arg::Arg::long::hafaa49ca8618007e(&var_a48, &var_530, 
        "statusdon't output anything, sta…");
    clap_builder::builder::arg::Arg::help::h44dbe5bb7ba0ac97(&var_530, &var_a48, 
        "don't output anything, status co…", 0x30);
    clap_builder::builder::arg::Arg::action::h32c9b645fd3f4279(&var_a48, &var_530, 2);
    clap_builder::builder::command::Command::arg::h5efeed937d3b5e7d(&var_530, &var_7f8, &var_a48);
    clap_builder::builder::arg::Arg::new::hbda368a754bfeeca(&var_7f8, 
        "quietdon't print OK for each suc…");
    clap_builder::builder::arg::Arg::long::hafaa49ca8618007e(&var_a48, &var_7f8, 
        "quietdon't print OK for each suc…");
    clap_builder::builder::arg::Arg::help::h44dbe5bb7ba0ac97(&var_7f8, &var_a48, 
        "don't print OK for each successf…", 0x32);
    clap_builder::builder::arg::Arg::action::h32c9b645fd3f4279(&var_a48, &var_7f8, 2);
    clap_builder::builder::command::Command::arg::h5efeed937d3b5e7d(&var_7f8, &var_530, &var_a48);
    clap_builder::builder::arg::Arg::new::hbda368a754bfeeca(&var_530, 
        "ignore-missingdon't fail or repo…");
    clap_builder::builder::arg::Arg::long::hafaa49ca8618007e(&var_a48, &var_530, 
        "ignore-missingdon't fail or repo…");
    clap_builder::builder::arg::Arg::help::h44dbe5bb7ba0ac97(&var_530, &var_a48, 
        "don't fail or report status for …", 0x2d);
    clap_builder::builder::arg::Arg::action::h32c9b645fd3f4279(&var_a48, &var_530, 2);
    clap_builder::builder::command::Command::arg::h5efeed937d3b5e7d(&var_530, &var_7f8, &var_a48);
    clap_builder::builder::arg::Arg::new::hbda368a754bfeeca(&var_7f8, "zeroAnsib");
    clap_builder::builder::arg::Arg::long::hafaa49ca8618007e(&var_a48, &var_7f8, "zeroAnsib");
    clap_builder::builder::arg::Arg::short::h76f2a3ae4a7efd56(&var_7f8, &var_a48, 0x7a);
    clap_builder::builder::arg::Arg::help::h44dbe5bb7ba0ac97(&var_a48, &var_7f8, 
        "end each output line with NUL, n…", 0x4b);
    clap_builder::builder::arg::Arg::action::h32c9b645fd3f4279(&var_268, &var_a48, 2);
    clap_builder::builder::command::Command::arg::h5efeed937d3b5e7d(&var_7f8, &var_530, &var_268);
    clap_builder::builder::command::Command::after_help::h1bf004b88ccc38aa(arg1, &var_7f8, 
        "DIGEST determines the digest alg…", 0x1cb);
    arg1
}
