
  fn uu_chgrp::uu_app::h6208828a4547f4ba(arg1: i64) -> i64

{
    let mut var_ab8: ();
    clap_builder::builder::command::Command::new::h5c9e62701b541373(&var_ab8, 
        uucore::util_name::h074417a1e6395129());
    let mut var_7f0: ();
    clap_builder::builder::command::Command::version::he69f8f6affdfaa7c(&var_7f0, &var_ab8);
    clap_builder::builder::command::Command::about::he7faf4f77555da3f(&var_ab8, &var_7f0);
    let mut var_528: ();
    uucore::format_usage::he053403a896311ed(&var_528, "{} [OPTION]... GROUP FILE...\n{}…", 0x45);
    clap_builder::builder::command::Command::override_usage::hd34ff91a9dc99181(&var_7f0, &var_ab8, 
        &var_528);
    memcpy(&var_ab8, &var_7f0, 0x2bc);
    let var_534: i64;
    let var_7fc: i64 = 0x8008000080080 | var_534;
    let var_52c: i32;
    let var_7f4: i32 = var_52c;
    clap_builder::builder::arg::Arg::new::h19cf1d2daaecb700(&var_7f0, 
        "helpNoneshim\x1b[0mnameCyan    "…");
    clap_builder::builder::arg::Arg::long::he0af6dfb0317af69(&var_528, &var_7f0, 
        "helpNoneshim\x1b[0mnameCyan    "…");
    clap_builder::builder::arg::Arg::help::h7b06416bbf045f94(&var_7f0, &var_528, 
        "Print help information.changesli…", 0x17);
    clap_builder::builder::arg::Arg::action::ha8eb24f67130ade1(&var_528, &var_7f0, 5);
    clap_builder::builder::command::Command::arg::he56e5b2211f53072(&var_7f0, &var_ab8, &var_528);
    clap_builder::builder::arg::Arg::new::h19cf1d2daaecb700(&var_ab8, 
        "changeslike verbose but report o…");
    clap_builder::builder::arg::Arg::short::ha7b6029c61dc3bd1(&var_528, &var_ab8, 0x63);
    clap_builder::builder::arg::Arg::long::he0af6dfb0317af69(&var_ab8, &var_528, 
        "changeslike verbose but report o…");
    clap_builder::builder::arg::Arg::help::h7b06416bbf045f94(&var_528, &var_ab8, 
        "like verbose but report only whe…", 0x32);
    let mut var_2a8: ();
    clap_builder::builder::arg::Arg::action::ha8eb24f67130ade1(&var_2a8, &var_528, 2);
    clap_builder::builder::command::Command::arg::he56e5b2211f53072(&var_ab8, &var_7f0, &var_2a8);
    clap_builder::builder::arg::Arg::new::h19cf1d2daaecb700(&var_7f0, 
        "silentquietsuppress most error m…");
    clap_builder::builder::arg::Arg::short::ha7b6029c61dc3bd1(&var_528, &var_7f0, 0x66);
    clap_builder::builder::arg::Arg::long::he0af6dfb0317af69(&var_7f0, &var_528, 
        "silentquietsuppress most error m…");
    clap_builder::builder::arg::Arg::action::ha8eb24f67130ade1(&var_528, &var_7f0, 2);
    clap_builder::builder::command::Command::arg::he56e5b2211f53072(&var_7f0, &var_ab8, &var_528);
    clap_builder::builder::arg::Arg::new::h19cf1d2daaecb700(&var_ab8, 
        "quietsuppress most error message…");
    clap_builder::builder::arg::Arg::long::he0af6dfb0317af69(&var_528, &var_ab8, 
        "quietsuppress most error message…");
    clap_builder::builder::arg::Arg::help::h7b06416bbf045f94(&var_ab8, &var_528, 
        "suppress most error messagesverb…", 0x1c);
    clap_builder::builder::arg::Arg::action::ha8eb24f67130ade1(&var_528, &var_ab8, 2);
    clap_builder::builder::command::Command::arg::he56e5b2211f53072(&var_ab8, &var_7f0, &var_528);
    clap_builder::builder::arg::Arg::new::h19cf1d2daaecb700(&var_7f0, 
        "verboseoutput a diagnostic for e…");
    clap_builder::builder::arg::Arg::short::ha7b6029c61dc3bd1(&var_528, &var_7f0, 0x76);
    clap_builder::builder::arg::Arg::long::he0af6dfb0317af69(&var_7f0, &var_528, 
        "verboseoutput a diagnostic for e…");
    clap_builder::builder::arg::Arg::help::h7b06416bbf045f94(&var_528, &var_7f0, 
        "output a diagnostic for every fi…", 0x2c);
    clap_builder::builder::arg::Arg::action::ha8eb24f67130ade1(&var_2a8, &var_528, 2);
    clap_builder::builder::command::Command::arg::he56e5b2211f53072(&var_7f0, &var_ab8, &var_2a8);
    clap_builder::builder::arg::Arg::new::h19cf1d2daaecb700(&var_ab8, 
        "preserve-rootfail to operate rec…");
    clap_builder::builder::arg::Arg::long::he0af6dfb0317af69(&var_528, &var_ab8, 
        "preserve-rootfail to operate rec…");
    clap_builder::builder::arg::Arg::help::h7b06416bbf045f94(&var_ab8, &var_528, 
        "fail to operate recursively on '…", 0x22);
    clap_builder::builder::arg::Arg::action::ha8eb24f67130ade1(&var_528, &var_ab8, 2);
    clap_builder::builder::command::Command::arg::he56e5b2211f53072(&var_ab8, &var_7f0, &var_528);
    clap_builder::builder::arg::Arg::new::h19cf1d2daaecb700(&var_7f0, "no-preserve-root");
    clap_builder::builder::arg::Arg::long::he0af6dfb0317af69(&var_528, &var_7f0, 
        "no-preserve-root");
    clap_builder::builder::arg::Arg::help::h7b06416bbf045f94(&var_7f0, &var_528, 
        "do not treat '/' specially (the …", 0x28);
    clap_builder::builder::arg::Arg::action::ha8eb24f67130ade1(&var_528, &var_7f0, 2);
    clap_builder::builder::command::Command::arg::he56e5b2211f53072(&var_7f0, &var_ab8, &var_528);
    clap_builder::builder::arg::Arg::new::h19cf1d2daaecb700(&var_ab8, 
        "referenceGROUPfailed to get attr…");
    clap_builder::builder::arg::Arg::long::he0af6dfb0317af69(&var_528, &var_ab8, 
        "referenceGROUPfailed to get attr…");
    clap_builder::builder::arg::Arg::value_name::h03f7a1afaf14cfc4(&var_ab8, &var_528, 
        "RFILEuse RFILE's group rather th…");
    clap_builder::builder::arg::Arg::value_hint::h780abdc9a8911276(&var_528, &var_ab8);
    clap_builder::builder::arg::Arg::help::h7b06416bbf045f94(&var_2a8, &var_528, 
        "use RFILE's group rather than sp…", 0x35);
    clap_builder::builder::command::Command::arg::he56e5b2211f53072(&var_ab8, &var_7f0, &var_2a8);
    clap_builder::builder::arg::Arg::new::h19cf1d2daaecb700(&var_7f0, "fromkindAuto/");
    clap_builder::builder::arg::Arg::long::he0af6dfb0317af69(&var_528, &var_7f0, "fromkindAuto/");
    clap_builder::builder::arg::Arg::value_name::h03f7a1afaf14cfc4(&var_7f0, &var_528, 
        "GROUPfailed to get attributes of…");
    clap_builder::builder::arg::Arg::help::h7b06416bbf045f94(&var_528, &var_7f0, 
        "change the group only if its cur…", 0x38);
    clap_builder::builder::command::Command::arg::he56e5b2211f53072(&var_7f0, &var_ab8, &var_528);
    clap_builder::builder::arg::Arg::new::h19cf1d2daaecb700(&var_ab8, 
        "recursiveoperate on files and di…");
    clap_builder::builder::arg::Arg::short::ha7b6029c61dc3bd1(&var_528, &var_ab8, 0x52);
    clap_builder::builder::arg::Arg::long::he0af6dfb0317af69(&var_ab8, &var_528, 
        "recursiveoperate on files and di…");
    clap_builder::builder::arg::Arg::help::h7b06416bbf045f94(&var_528, &var_ab8, 
        "operate on files and directories…", 0x2c);
    clap_builder::builder::arg::Arg::action::ha8eb24f67130ade1(&var_2a8, &var_528, 2);
    clap_builder::builder::command::Command::arg::he56e5b2211f53072(&var_ab8, &var_7f0, &var_2a8);
    uucore::features::perms::common_args::h624fd87efa47755f(&var_7f0);
    clap_builder::builder::command::Command::args::hacb627b6c4835d7a(arg1, &var_ab8, &var_7f0);
    arg1
}
