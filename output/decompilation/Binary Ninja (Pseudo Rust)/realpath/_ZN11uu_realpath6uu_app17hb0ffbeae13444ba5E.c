
  fn uu_realpath::uu_app::hb0ffbeae13444ba5(arg1: i64) -> i64

{
    let mut var_a50: ();
    clap_builder::builder::command::Command::new::h84d7059bcc77226c(&var_a50, 
        uucore::util_name::h60d842bf27b05e82());
    let mut var_538: ();
    clap_builder::builder::command::Command::version::hff33f7b38d12333f(&var_538, &var_a50, 
        "0.0.28{} [OPTION]... FILE...Do n…");
    clap_builder::builder::command::Command::about::hc7d8fe242993619b(&var_a50, &var_538, 
        "Print the resolved pathquietstri…", 0x17);
    let mut var_788: ();
    uucore::format_usage::h76fcb2d15fbabc58(&var_788, "{} [OPTION]... FILE...Do not pri…", 0x16);
    clap_builder::builder::command::Command::override_usage::hcc99de9d6052085d(&var_538, &var_a50, 
        &var_788);
    memcpy(&var_a50, &var_538, 0x2bc);
    let var_27c: i64;
    let var_794: i64 = 0x8000000080 | var_27c;
    let var_274: i32;
    let var_78c: i32 = var_274;
    clap_builder::builder::arg::Arg::new::h6504e08b710a16de(&var_538, 
        "quietstriplogicalfiles0.0.28{} […");
    clap_builder::builder::arg::Arg::short::hf61a71a8cd499090(&var_788, &var_538, 0x71);
    clap_builder::builder::arg::Arg::long::hea3b5174cb57a464(&var_538, &var_788, 
        "quietstriplogicalfiles0.0.28{} […");
    clap_builder::builder::arg::Arg::help::h1ff567aaa6dbb257(&var_788, &var_538, 
        "Do not print warnings for invali…", 0x27);
    let mut var_270: *const i8;
    clap_builder::builder::arg::Arg::action::h57bbe48e1d937193(&var_270, &var_788, 2);
    clap_builder::builder::command::Command::arg::hc56797c71f92da5c(&var_538, &var_a50, &var_270);
    clap_builder::builder::arg::Arg::new::h6504e08b710a16de(&var_a50, 
        "striplogicalfiles0.0.28{} [OPTIO…");
    clap_builder::builder::arg::Arg::short::hf61a71a8cd499090(&var_788, &var_a50, 0x73);
    clap_builder::builder::arg::Arg::long::hea3b5174cb57a464(&var_a50, &var_788, 
        "striplogicalfiles0.0.28{} [OPTIO…");
    clap_builder::builder::arg::Arg::visible_alias::h75123c17be531ca5(&var_788, &var_a50, 
        "no-symlinksOnly strip '.' and '.…");
    clap_builder::builder::arg::Arg::help::h1ff567aaa6dbb257(&var_a50, &var_788, 
        "Only strip '.' and '..' componen…", 0x44);
    clap_builder::builder::arg::Arg::action::h57bbe48e1d937193(&var_788, &var_a50, 2);
    clap_builder::builder::command::Command::arg::hc56797c71f92da5c(&var_a50, &var_538, &var_788);
    clap_builder::builder::arg::Arg::new::h6504e08b710a16de(&var_538, 
        "zero -- \x1b[8mhelpNoneshimname\x1b…");
    clap_builder::builder::arg::Arg::short::hf61a71a8cd499090(&var_788, &var_538, 0x7a);
    clap_builder::builder::arg::Arg::long::hea3b5174cb57a464(&var_538, &var_788, 
        "zero -- \x1b[8mhelpNoneshimname\x1b…");
    clap_builder::builder::arg::Arg::help::h1ff567aaa6dbb257(&var_788, &var_538, 
        "Separate output filenames with \…", 0x35);
    clap_builder::builder::arg::Arg::action::h57bbe48e1d937193(&var_270, &var_788, 2);
    clap_builder::builder::command::Command::arg::hc56797c71f92da5c(&var_538, &var_a50, &var_270);
    clap_builder::builder::arg::Arg::new::h6504e08b710a16de(&var_a50, 
        "logicalfiles0.0.28{} [OPTION]...…");
    clap_builder::builder::arg::Arg::short::hf61a71a8cd499090(&var_788, &var_a50, 0x4c);
    clap_builder::builder::arg::Arg::long::hea3b5174cb57a464(&var_a50, &var_788, 
        "logicalfiles0.0.28{} [OPTION]...…");
    clap_builder::builder::arg::Arg::help::h1ff567aaa6dbb257(&var_788, &var_a50, 
        "resolve '..' components before s…", 0x27);
    clap_builder::builder::arg::Arg::action::h57bbe48e1d937193(&var_270, &var_788, 2);
    clap_builder::builder::command::Command::arg::hc56797c71f92da5c(&var_a50, &var_538, &var_270);
    clap_builder::builder::arg::Arg::new::h6504e08b710a16de(&var_538, &data_4149b8[0x18]);
    clap_builder::builder::arg::Arg::short::hf61a71a8cd499090(&var_788, &var_538, 0x50);
    clap_builder::builder::arg::Arg::long::hea3b5174cb57a464(&var_538, &var_788, 
        &data_4149b8[0x18]);
    var_270 = "striplogicalfiles0.0.28{} [OPTIO…";
    let var_268: i64 = 5;
    let var_260: *const i8 = "logicalfiles0.0.28{} [OPTION]...…";
    let var_258: i64 = 7;
    clap_builder::builder::arg::Arg::overrides_with_all::h59dc2e0b13378d5b(&var_788, &var_538, 
        &var_270);
    clap_builder::builder::arg::Arg::help::h1ff567aaa6dbb257(&var_538, &var_788, 
        "resolve symlinks as encountered …", 0x29);
    clap_builder::builder::arg::Arg::action::h57bbe48e1d937193(&var_788, &var_538, 2);
    clap_builder::builder::command::Command::arg::hc56797c71f92da5c(&var_538, &var_a50, &var_788);
    clap_builder::builder::arg::Arg::new::h6504e08b710a16de(&var_a50, 
        "canonicalize-existingcanonicaliz…");
    clap_builder::builder::arg::Arg::short::hf61a71a8cd499090(&var_788, &var_a50, 0x65);
    clap_builder::builder::arg::Arg::long::hea3b5174cb57a464(&var_a50, &var_788, 
        "canonicalize-existingcanonicaliz…");
    clap_builder::builder::arg::Arg::help::h1ff567aaa6dbb257(&var_788, &var_a50, 
        "canonicalize by following every …", 0x73);
    clap_builder::builder::arg::Arg::action::h57bbe48e1d937193(&var_270, &var_788, 2);
    clap_builder::builder::command::Command::arg::hc56797c71f92da5c(&var_a50, &var_538, &var_270);
    clap_builder::builder::arg::Arg::new::h6504e08b710a16de(&var_538, 
        "canonicalize-missingcanonicalize…");
    clap_builder::builder::arg::Arg::short::hf61a71a8cd499090(&var_788, &var_538, 0x6d);
    clap_builder::builder::arg::Arg::long::hea3b5174cb57a464(&var_538, &var_788, 
        "canonicalize-missingcanonicalize…");
    clap_builder::builder::arg::Arg::help::h1ff567aaa6dbb257(&var_788, &var_538, 
        "canonicalize by following every …", 0x86);
    clap_builder::builder::arg::Arg::action::h57bbe48e1d937193(&var_270, &var_788, 2);
    clap_builder::builder::command::Command::arg::hc56797c71f92da5c(&var_538, &var_a50, &var_270);
    clap_builder::builder::arg::Arg::new::h6504e08b710a16de(&var_a50, 
        "relative-toDIRprint the resolved…");
    clap_builder::builder::arg::Arg::long::hea3b5174cb57a464(&var_788, &var_a50, 
        "relative-toDIRprint the resolved…");
    clap_builder::builder::arg::Arg::value_name::hc405a264fb9ab443(&var_a50, &var_788);
    clap_builder::builder::arg::Arg::value_parser::hc7794c6702212de9(&var_788, &var_a50);
    clap_builder::builder::arg::Arg::help::h1ff567aaa6dbb257(&var_270, &var_788, 
        "print the resolved path relative…", 0x27);
    clap_builder::builder::command::Command::arg::hc56797c71f92da5c(&var_a50, &var_538, &var_270);
    clap_builder::builder::arg::Arg::new::h6504e08b710a16de(&var_538, 
        "relative-baseprint absolute path…");
    clap_builder::builder::arg::Arg::long::hea3b5174cb57a464(&var_788, &var_538, 
        "relative-baseprint absolute path…");
    clap_builder::builder::arg::Arg::value_name::hc405a264fb9ab443(&var_538, &var_788);
    clap_builder::builder::arg::Arg::value_parser::hc7794c6702212de9(&var_788, &var_538);
    clap_builder::builder::arg::Arg::help::h1ff567aaa6dbb257(&var_270, &var_788, 
        "print absolute paths unless path…", 0x2b);
    clap_builder::builder::command::Command::arg::hc56797c71f92da5c(&var_538, &var_a50, &var_270);
    clap_builder::builder::arg::Arg::new::h6504e08b710a16de(&var_a50, 
        "files0.0.28{} [OPTION]... FILE..…");
    clap_builder::builder::arg::Arg::action::h57bbe48e1d937193(&var_788, &var_a50, 1);
    memcpy(&var_a50, &var_788, 0x248);
    let var_540: i32;
    let var_808: i32 = var_540 | 1;
    let var_53c: i32;
    let var_804: i32 = var_53c;
    clap_builder::builder::arg::Arg::value_parser::hc7794c6702212de9(&var_788, &var_a50);
    clap_builder::builder::arg::Arg::value_hint::h9a6c1b3f12da1918(&var_a50, &var_788, 2);
    clap_builder::builder::command::Command::arg::hc56797c71f92da5c(arg1, &var_538, &var_a50);
    arg1
}
