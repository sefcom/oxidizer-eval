
  fn uu_chown::uu_app::h7079829ae89435de(arg1: i64) -> i64

{
    let mut var_ab8: ();
    clap_builder::builder::command::Command::new::he84976e68bf9751f(&var_ab8, 
        uucore::util_name::h074417a1e6395129());
    let mut var_7f0: ();
    clap_builder::builder::command::Command::version::he6d09115f1abe4b4(&var_7f0, &var_ab8);
    clap_builder::builder::command::Command::about::h5d49ab93355817e2(&var_ab8, &var_7f0);
    let mut var_528: ();
    uucore::format_usage::he053403a896311ed(&var_528, "{} [OPTION]... [OWNER][:[GROUP]]…", 0x51);
    clap_builder::builder::command::Command::override_usage::hf74fadb7db654dbe(&var_7f0, &var_ab8, 
        &var_528);
    memcpy(&var_ab8, &var_7f0, 0x2bc);
    let var_534: i64;
    let var_7fc: i64 = 0x8008000080080 | var_534;
    let var_52c: i32;
    let var_7f4: i32 = var_52c;
    clap_builder::builder::arg::Arg::new::hf74b138bbe56f1eb(&var_7f0, 
        "helpNoneshim\x1b[0mnameCyan    "…");
    clap_builder::builder::arg::Arg::long::h416db7d698e07d33(&var_528, &var_7f0, 
        "helpNoneshim\x1b[0mnameCyan    "…");
    clap_builder::builder::arg::Arg::help::hc3aff765a442d3de(&var_7f0, &var_528, 
        "Print help information.changesli…", 0x17);
    clap_builder::builder::arg::Arg::action::h9a5083a81a500870(&var_528, &var_7f0, 5);
    clap_builder::builder::command::Command::arg::h0075d72f8abe0bbf(&var_7f0, &var_ab8, &var_528);
    clap_builder::builder::arg::Arg::new::hf74b138bbe56f1eb(&var_ab8, 
        "changeslike verbose but report o…");
    clap_builder::builder::arg::Arg::short::h023b35eec73eba08(&var_528, &var_ab8, 0x63);
    clap_builder::builder::arg::Arg::long::h416db7d698e07d33(&var_ab8, &var_528, 
        "changeslike verbose but report o…");
    clap_builder::builder::arg::Arg::help::hc3aff765a442d3de(&var_528, &var_ab8, 
        "like verbose but report only whe…", 0x32);
    let mut var_2a8: ();
    clap_builder::builder::arg::Arg::action::h9a5083a81a500870(&var_2a8, &var_528, 2);
    clap_builder::builder::command::Command::arg::h0075d72f8abe0bbf(&var_ab8, &var_7f0, &var_2a8);
    clap_builder::builder::arg::Arg::new::hf74b138bbe56f1eb(&var_7f0, "fromkindAuto/");
    clap_builder::builder::arg::Arg::long::h416db7d698e07d33(&var_528, &var_7f0, "fromkindAuto/");
    clap_builder::builder::arg::Arg::help::hc3aff765a442d3de(&var_7f0, &var_528, 
        "change the owner and/or group of…", 0xc4);
    clap_builder::builder::arg::Arg::value_name::h1161217eea0dd428(&var_528, &var_7f0, 
        "CURRENT_OWNER:CURRENT_GROUPprese…");
    clap_builder::builder::command::Command::arg::h0075d72f8abe0bbf(&var_7f0, &var_ab8, &var_528);
    clap_builder::builder::arg::Arg::new::hf74b138bbe56f1eb(&var_ab8, 
        "preserve-rootfail to operate rec…");
    clap_builder::builder::arg::Arg::long::h416db7d698e07d33(&var_528, &var_ab8, 
        "preserve-rootfail to operate rec…");
    clap_builder::builder::arg::Arg::help::hc3aff765a442d3de(&var_ab8, &var_528, 
        "fail to operate recursively on '…", 0x22);
    clap_builder::builder::arg::Arg::action::h9a5083a81a500870(&var_528, &var_ab8, 2);
    clap_builder::builder::command::Command::arg::h0075d72f8abe0bbf(&var_ab8, &var_7f0, &var_528);
    clap_builder::builder::arg::Arg::new::hf74b138bbe56f1eb(&var_7f0, "no-preserve-root");
    clap_builder::builder::arg::Arg::long::h416db7d698e07d33(&var_528, &var_7f0, 
        "no-preserve-root");
    clap_builder::builder::arg::Arg::help::hc3aff765a442d3de(&var_7f0, &var_528, 
        "do not treat '/' specially (the …", 0x28);
    clap_builder::builder::arg::Arg::action::h9a5083a81a500870(&var_528, &var_7f0, 2);
    clap_builder::builder::command::Command::arg::h0075d72f8abe0bbf(&var_7f0, &var_ab8, &var_528);
    clap_builder::builder::arg::Arg::new::hf74b138bbe56f1eb(&var_ab8, 
        "quietsuppress most error message…");
    clap_builder::builder::arg::Arg::long::h416db7d698e07d33(&var_528, &var_ab8, 
        "quietsuppress most error message…");
    clap_builder::builder::arg::Arg::help::hc3aff765a442d3de(&var_ab8, &var_528, 
        "suppress most error messagesrecu…", 0x1c);
    clap_builder::builder::arg::Arg::action::h9a5083a81a500870(&var_528, &var_ab8, 2);
    clap_builder::builder::command::Command::arg::h0075d72f8abe0bbf(&var_ab8, &var_7f0, &var_528);
    clap_builder::builder::arg::Arg::new::hf74b138bbe56f1eb(&var_7f0, 
        "recursiveoperate on files and di…");
    clap_builder::builder::arg::Arg::short::h023b35eec73eba08(&var_528, &var_7f0, 0x52);
    clap_builder::builder::arg::Arg::long::h416db7d698e07d33(&var_7f0, &var_528, 
        "recursiveoperate on files and di…");
    clap_builder::builder::arg::Arg::help::hc3aff765a442d3de(&var_528, &var_7f0, 
        "operate on files and directories…", 0x2c);
    clap_builder::builder::arg::Arg::action::h9a5083a81a500870(&var_2a8, &var_528, 2);
    clap_builder::builder::command::Command::arg::h0075d72f8abe0bbf(&var_7f0, &var_ab8, &var_2a8);
    clap_builder::builder::arg::Arg::new::hf74b138bbe56f1eb(&var_ab8, 
        "referenceOWNERsrc/uu/chown/src/c…");
    clap_builder::builder::arg::Arg::long::h416db7d698e07d33(&var_528, &var_ab8, 
        "referenceOWNERsrc/uu/chown/src/c…");
    clap_builder::builder::arg::Arg::help::hc3aff765a442d3de(&var_ab8, &var_528, 
        "use RFILE's owner and group rath…", 0x45);
    clap_builder::builder::arg::Arg::value_name::h1161217eea0dd428(&var_528, &var_ab8, 
        "RFILEsilentverboseoutput a diagn…");
    clap_builder::builder::arg::Arg::value_hint::head2676a54ba14e3(&var_ab8, &var_528);
    clap_builder::builder::arg::Arg::num_args::hcd1625a1d55df35b(&var_528, &var_ab8);
    clap_builder::builder::command::Command::arg::h0075d72f8abe0bbf(&var_ab8, &var_7f0, &var_528);
    clap_builder::builder::arg::Arg::new::hf74b138bbe56f1eb(&var_7f0, 
        "silentverboseoutput a diagnostic…");
    clap_builder::builder::arg::Arg::short::h023b35eec73eba08(&var_528, &var_7f0, 0x66);
    clap_builder::builder::arg::Arg::long::h416db7d698e07d33(&var_7f0, &var_528, 
        "silentverboseoutput a diagnostic…");
    clap_builder::builder::arg::Arg::action::h9a5083a81a500870(&var_528, &var_7f0, 2);
    clap_builder::builder::command::Command::arg::h0075d72f8abe0bbf(&var_7f0, &var_ab8, &var_528);
    clap_builder::builder::arg::Arg::new::hf74b138bbe56f1eb(&var_ab8, 
        "verboseoutput a diagnostic for e…");
    clap_builder::builder::arg::Arg::long::h416db7d698e07d33(&var_528, &var_ab8, 
        "verboseoutput a diagnostic for e…");
    clap_builder::builder::arg::Arg::short::h023b35eec73eba08(&var_ab8, &var_528, 0x76);
    clap_builder::builder::arg::Arg::help::hc3aff765a442d3de(&var_528, &var_ab8, 
        "output a diagnostic for every fi…", 0x2c);
    clap_builder::builder::arg::Arg::action::h9a5083a81a500870(&var_2a8, &var_528, 2);
    clap_builder::builder::command::Command::arg::h0075d72f8abe0bbf(&var_ab8, &var_7f0, &var_2a8);
    uucore::features::perms::common_args::h624fd87efa47755f(&var_7f0);
    clap_builder::builder::command::Command::args::h6d978477c76bd577(arg1, &var_ab8, &var_7f0);
    arg1
}
