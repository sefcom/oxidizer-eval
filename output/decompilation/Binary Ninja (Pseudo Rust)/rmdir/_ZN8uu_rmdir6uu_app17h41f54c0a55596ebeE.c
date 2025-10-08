
  fn uu_rmdir::uu_app::h41f54c0a55596ebe(arg1: i64) -> i64

{
    let mut var_ab0: ();
    clap_builder::builder::command::Command::new::h576d2df86fc63c7a(&var_ab0, 
        uucore::util_name::h074417a1e6395129());
    let mut var_568: ();
    clap_builder::builder::command::Command::version::hd7e49546799cfb28(&var_568, &var_ab0);
    clap_builder::builder::command::Command::about::hdb56695bbe51bf91(&var_ab0, &var_568);
    let mut var_7e8: ();
    uucore::format_usage::he053403a896311ed(&var_7e8, "{} [OPTION]... DIRECTORY...ignor…", 0x1b);
    clap_builder::builder::command::Command::override_usage::hf62606498b350be2(&var_568, &var_ab0, 
        &var_7e8);
    memcpy(&var_ab0, &var_568, 0x2bc);
    let var_2ac: i64;
    let var_7f4: i64 = 0x8000000080 | var_2ac;
    let var_2a4: i32;
    let var_7ec: i32 = var_2a4;
    clap_builder::builder::arg::Arg::new::h5f1366766a2cb538(&var_568, 
        "ignore-fail-on-non-emptyparentsv…");
    clap_builder::builder::arg::Arg::long::h68cfac47167c0ac4(&var_7e8, &var_568, 
        "ignore-fail-on-non-emptyparentsv…");
    clap_builder::builder::arg::Arg::help::h63fd19df65bad6bc(&var_568, &var_7e8, 
        "ignore each failure that is sole…", 0x43);
    clap_builder::builder::arg::Arg::action::hd012108747fafac9(&var_7e8, &var_568, 2);
    clap_builder::builder::command::Command::arg::hf9a3cc80c50193c0(&var_568, &var_ab0, &var_7e8);
    clap_builder::builder::arg::Arg::new::h5f1366766a2cb538(&var_ab0, 
        "parentsverbose: removing directo…");
    clap_builder::builder::arg::Arg::short::h28b5f0ae63d184a2(&var_7e8, &var_ab0, 0x70);
    clap_builder::builder::arg::Arg::long::h68cfac47167c0ac4(&var_ab0, &var_7e8, 
        "parentsverbose: removing directo…");
    clap_builder::builder::arg::Arg::help::h63fd19df65bad6bc(&var_7e8, &var_ab0, 
        "remove DIRECTORY and its ancesto…", 0x6c);
    let mut var_2a0: i64;
    clap_builder::builder::arg::Arg::action::hd012108747fafac9(&var_2a0, &var_7e8, 2);
    clap_builder::builder::command::Command::arg::hf9a3cc80c50193c0(&var_ab0, &var_568, &var_2a0);
    clap_builder::builder::arg::Arg::new::h5f1366766a2cb538(&var_568, 
        "verbose: removing directory, \n(…");
    clap_builder::builder::arg::Arg::short::h28b5f0ae63d184a2(&var_7e8, &var_568, 0x76);
    clap_builder::builder::arg::Arg::long::h68cfac47167c0ac4(&var_568, &var_7e8, 
        "verbose: removing directory, \n(…");
    clap_builder::builder::arg::Arg::help::h63fd19df65bad6bc(&var_7e8, &var_568, 
        "output a diagnostic for every di…", 0x31);
    clap_builder::builder::arg::Arg::action::hd012108747fafac9(&var_2a0, &var_7e8, 2);
    clap_builder::builder::command::Command::arg::hf9a3cc80c50193c0(&var_568, &var_ab0, &var_2a0);
    clap_builder::builder::arg::Arg::new::h5f1366766a2cb538(&var_ab0, 
        "dirs\x1b[9m <= trueTERMmainchar …");
    clap_builder::builder::arg::Arg::action::hd012108747fafac9(&var_7e8, &var_ab0, 1);
    clap_builder::builder::arg::Arg::num_args::hb06be691b3a932ed(&var_ab0, &var_7e8);
    memcpy(&var_7e8, &var_ab0, 0x278);
    let var_838: i32;
    let var_570: i32 = var_838 | 1;
    let var_834: i32;
    let var_56c: i32 = var_834;
    var_2a0 = 2;
    clap_builder::builder::arg::Arg::value_parser::h02bae8d5a7fc4497(&var_ab0, &var_7e8, &var_2a0);
    clap_builder::builder::arg::Arg::value_hint::hd5b50e4e7b35f9fa(&var_7e8, &var_ab0);
    clap_builder::builder::command::Command::arg::hf9a3cc80c50193c0(arg1, &var_568, &var_7e8);
    arg1
}
