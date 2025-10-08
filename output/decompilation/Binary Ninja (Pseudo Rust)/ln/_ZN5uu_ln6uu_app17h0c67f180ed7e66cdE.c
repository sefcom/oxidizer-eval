
  fn uu_ln::uu_app::h0c67f180ed7e66cd(arg1: i64) -> i64

{
    let mut var_830: ();
    clap_builder::builder::command::Command::new::h1fe578c5376c1054(&var_830, 
        uucore::util_name::h074417a1e6395129());
    let mut var_568: ();
    clap_builder::builder::command::Command::version::h5f1bf330d1a7b23c(&var_568, &var_830);
    clap_builder::builder::command::Command::about::h1d35ac200b7609eb(&var_830, &var_568);
    let mut var_ab0: ();
    uucore::format_usage::he053403a896311ed(&var_ab0, "{} [OPTION]... [-T] TARGET LINK_…", 0x83);
    clap_builder::builder::command::Command::override_usage::h9d7db7502c482d2b(&var_568, &var_830, 
        &var_ab0);
    memcpy(&var_830, &var_568, 0x2bc);
    let var_2ac: i64;
    let var_574: i64 = 0x8000000080 | var_2ac;
    let var_2a4: i32;
    let var_56c: i32 = var_2a4;
    uucore::features::backup_control::arguments::backup::h97e05fc730627326(&var_ab0);
    clap_builder::builder::command::Command::arg::hc93fd97a67522eed(&var_568, &var_830, &var_ab0);
    uucore::features::backup_control::arguments::backup_no_args::hfb21d07466a7545a(&var_ab0);
    clap_builder::builder::command::Command::arg::hc93fd97a67522eed(&var_830, &var_568, &var_ab0);
    clap_builder::builder::arg::Arg::new::h3d0033c10ba3d4cb(&var_568, 
        "forceremove existing destination…");
    clap_builder::builder::arg::Arg::short::hbe918a9232d56de2(&var_ab0, &var_568, 0x66);
    clap_builder::builder::arg::Arg::long::hab7044ee72e818d9(&var_568, &var_ab0, 
        "forceremove existing destination…");
    clap_builder::builder::arg::Arg::help::h616b41aec6e47ae1(&var_ab0, &var_568, 
        "remove existing destination file…", 0x21);
    let mut var_2a0: ();
    clap_builder::builder::arg::Arg::action::h0f6082952064c1be(&var_2a0, &var_ab0, 2);
    clap_builder::builder::command::Command::arg::hc93fd97a67522eed(&var_568, &var_830, &var_2a0);
    clap_builder::builder::arg::Arg::new::h3d0033c10ba3d4cb(&var_830, 
        "interactiveprompt whether to rem…");
    clap_builder::builder::arg::Arg::short::hbe918a9232d56de2(&var_ab0, &var_830, 0x69);
    clap_builder::builder::arg::Arg::long::hab7044ee72e818d9(&var_830, &var_ab0, 
        "interactiveprompt whether to rem…");
    clap_builder::builder::arg::Arg::help::h616b41aec6e47ae1(&var_ab0, &var_830, 
        "prompt whether to remove existin…", 0x33);
    clap_builder::builder::arg::Arg::action::h0f6082952064c1be(&var_2a0, &var_ab0, 2);
    clap_builder::builder::command::Command::arg::hc93fd97a67522eed(&var_830, &var_568, &var_2a0);
    clap_builder::builder::arg::Arg::new::h3d0033c10ba3d4cb(&var_568, 
        "no-dereferencetreat LINK_NAME as…");
    clap_builder::builder::arg::Arg::short::hbe918a9232d56de2(&var_ab0, &var_568, 0x6e);
    clap_builder::builder::arg::Arg::long::hab7044ee72e818d9(&var_568, &var_ab0, 
        "no-dereferencetreat LINK_NAME as…");
    clap_builder::builder::arg::Arg::help::h616b41aec6e47ae1(&var_ab0, &var_568, 
        "treat LINK_NAME as a normal file…", 0x48);
    clap_builder::builder::arg::Arg::action::h0f6082952064c1be(&var_2a0, &var_ab0, 2);
    clap_builder::builder::command::Command::arg::hc93fd97a67522eed(&var_568, &var_830, &var_2a0);
    clap_builder::builder::arg::Arg::new::h3d0033c10ba3d4cb(&var_830, 
        "logicalfollow TARGETs that are s…");
    clap_builder::builder::arg::Arg::short::hbe918a9232d56de2(&var_ab0, &var_830, 0x4c);
    clap_builder::builder::arg::Arg::long::hab7044ee72e818d9(&var_830, &var_ab0, 
        "logicalfollow TARGETs that are s…");
    clap_builder::builder::arg::Arg::help::h616b41aec6e47ae1(&var_ab0, &var_830, 
        "follow TARGETs that are symbolic…", 0x26);
    clap_builder::builder::arg::Arg::overrides_with::h74613fd0c73069d3(&var_830, &var_ab0, 
        "physicalNotFoundTimedOutENETDOWN…");
    clap_builder::builder::arg::Arg::action::h0f6082952064c1be(&var_ab0, &var_830, 2);
    clap_builder::builder::command::Command::arg::hc93fd97a67522eed(&var_830, &var_568, &var_ab0);
    clap_builder::builder::arg::Arg::new::h3d0033c10ba3d4cb(&var_568, 
        "physicalNotFoundTimedOutENETDOWN…");
    clap_builder::builder::arg::Arg::short::hbe918a9232d56de2(&var_ab0, &var_568, 0x50);
    clap_builder::builder::arg::Arg::long::hab7044ee72e818d9(&var_568, &var_ab0, 
        "physicalNotFoundTimedOutENETDOWN…");
    clap_builder::builder::arg::Arg::help::h616b41aec6e47ae1(&var_ab0, &var_568, 
        "make hard links directly to symb…", 0x2a);
    clap_builder::builder::arg::Arg::action::h0f6082952064c1be(&var_2a0, &var_ab0, 2);
    clap_builder::builder::command::Command::arg::hc93fd97a67522eed(&var_568, &var_830, &var_2a0);
    clap_builder::builder::arg::Arg::new::h3d0033c10ba3d4cb(&var_830, "symbolicEALREADY");
    clap_builder::builder::arg::Arg::short::hbe918a9232d56de2(&var_ab0, &var_830, 0x73);
    clap_builder::builder::arg::Arg::long::hab7044ee72e818d9(&var_830, &var_ab0, 
        "symbolicEALREADY");
    clap_builder::builder::arg::Arg::help::h616b41aec6e47ae1(&var_ab0, &var_830, 
        "make symbolic links instead of h…", 0x29);
    clap_builder::builder::arg::Arg::overrides_with::h74613fd0c73069d3(&var_830, &var_ab0, 
        "symbolicEALREADY");
    clap_builder::builder::arg::Arg::action::h0f6082952064c1be(&var_ab0, &var_830, 2);
    clap_builder::builder::command::Command::arg::hc93fd97a67522eed(&var_830, &var_568, &var_ab0);
    uucore::features::backup_control::arguments::suffix::h87e85728d219a77f(&var_ab0);
    clap_builder::builder::command::Command::arg::hc93fd97a67522eed(&var_568, &var_830, &var_ab0);
    clap_builder::builder::arg::Arg::new::h3d0033c10ba3d4cb(&var_830, &data_418fb0[0x10]);
    clap_builder::builder::arg::Arg::short::hbe918a9232d56de2(&var_ab0, &var_830, 0x74);
    clap_builder::builder::arg::Arg::long::hab7044ee72e818d9(&var_830, &var_ab0, 
        &data_418fb0[0x10]);
    clap_builder::builder::arg::Arg::help::h616b41aec6e47ae1(&var_ab0, &var_830, 
        "specify the DIRECTORY in which t…", 0x32);
    clap_builder::builder::arg::Arg::value_name::hdb554a3b64504164(&var_830, &var_ab0);
    clap_builder::builder::arg::Arg::value_hint::h108376d307e34658(&var_ab0, &var_830, 4);
    clap_builder::builder::arg::Arg::conflicts_with::h79674d7a38f2b4f0(&var_2a0, &var_ab0);
    clap_builder::builder::command::Command::arg::hc93fd97a67522eed(&var_830, &var_568, &var_2a0);
    clap_builder::builder::arg::Arg::new::h3d0033c10ba3d4cb(&var_568, 
        "no-target-directorytreat LINK_NA…");
    clap_builder::builder::arg::Arg::short::hbe918a9232d56de2(&var_ab0, &var_568, 0x54);
    clap_builder::builder::arg::Arg::long::hab7044ee72e818d9(&var_568, &var_ab0, 
        "no-target-directorytreat LINK_NA…");
    clap_builder::builder::arg::Arg::help::h616b41aec6e47ae1(&var_ab0, &var_568, 
        "treat LINK_NAME as a normal file…", 0x27);
    clap_builder::builder::arg::Arg::action::h0f6082952064c1be(&var_2a0, &var_ab0, 2);
    clap_builder::builder::command::Command::arg::hc93fd97a67522eed(&var_568, &var_830, &var_2a0);
    clap_builder::builder::arg::Arg::new::h3d0033c10ba3d4cb(&var_830, 
        "relative\n       extern "ENOTUNI…");
    clap_builder::builder::arg::Arg::short::hbe918a9232d56de2(&var_ab0, &var_830, 0x72);
    clap_builder::builder::arg::Arg::long::hab7044ee72e818d9(&var_830, &var_ab0, 
        "relative\n       extern "ENOTUNI…");
    clap_builder::builder::arg::Arg::help::h616b41aec6e47ae1(&var_ab0, &var_830, 
        "create symbolic links relative t…", 0x2f);
    clap_builder::builder::arg::Arg::requires::h3474dacfe4037fed(&var_830, &var_ab0);
    clap_builder::builder::arg::Arg::action::h0f6082952064c1be(&var_ab0, &var_830, 2);
    clap_builder::builder::command::Command::arg::hc93fd97a67522eed(&var_830, &var_568, &var_ab0);
    clap_builder::builder::arg::Arg::new::h3d0033c10ba3d4cb(&var_568, 
        "verboseprint name of each linked…");
    clap_builder::builder::arg::Arg::short::hbe918a9232d56de2(&var_ab0, &var_568, 0x76);
    clap_builder::builder::arg::Arg::long::hab7044ee72e818d9(&var_568, &var_ab0, 
        "verboseprint name of each linked…");
    clap_builder::builder::arg::Arg::help::h616b41aec6e47ae1(&var_ab0, &var_568, 
        "print name of each linked filesr…", 0x1e);
    clap_builder::builder::arg::Arg::action::h0f6082952064c1be(&var_2a0, &var_ab0, 2);
    clap_builder::builder::command::Command::arg::hc93fd97a67522eed(&var_568, &var_830, &var_2a0);
    clap_builder::builder::arg::Arg::new::h3d0033c10ba3d4cb(&var_830, 
        "files(uutils coreutils) 0.0.30Ma…");
    clap_builder::builder::arg::Arg::action::h0f6082952064c1be(&var_ab0, &var_830, 1);
    clap_builder::builder::arg::Arg::value_hint::h108376d307e34658(&var_830, &var_ab0, 2);
    memcpy(&var_ab0, &var_830, 0x278);
    let var_5b8: i32;
    let var_838: i32 = var_5b8 | 1;
    let var_5b4: i32;
    let var_834: i32 = var_5b4;
    clap_builder::builder::arg::Arg::num_args::h3dfaa0fdb01525a2(&var_830, &var_ab0);
    clap_builder::builder::command::Command::arg::hc93fd97a67522eed(arg1, &var_568, &var_830);
    arg1
}
