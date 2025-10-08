
  fn uu_dirname::uu_app::hdf88fbea4c615f4b(arg1: i64) -> i64

{
    let mut var_aa8: ();
    clap_builder::builder::command::Command::new::h8698ed02b8869454(&var_aa8, 
        uucore::util_name::h074417a1e6395129());
    let mut var_560: ();
    clap_builder::builder::command::Command::about::hf08a86bed1757cac(&var_560, &var_aa8);
    clap_builder::builder::command::Command::version::hf30d40e661062fab(&var_aa8, &var_560);
    let mut var_7e0: ();
    uucore::format_usage::he053403a896311ed(&var_7e0, "{} [OPTION] NAME...separate outp…", 0x13);
    clap_builder::builder::command::Command::override_usage::hc42bd93bfca83f27(&var_560, &var_aa8, 
        &var_7e0);
    memcpy(&var_aa8, &var_560, 0x2bc);
    let var_2a4: i64;
    let var_7ec: i64 = 0x8800000088 | var_2a4;
    let var_29c: i32;
    let var_7e4: i32 = var_29c;
    clap_builder::builder::arg::Arg::new::h5d65d1815d9b9c8f(&var_560, 
        "zeroAnsi -- \x1b[8mhelpNoneshim\x1b…");
    clap_builder::builder::arg::Arg::long::h9066a2217f62fe54(&var_7e0, &var_560);
    clap_builder::builder::arg::Arg::short::h4faa790b55975526(&var_560, &var_7e0);
    clap_builder::builder::arg::Arg::help::hb56ebc8c7a859d3e(&var_7e0, &var_560);
    let mut var_298: ();
    clap_builder::builder::arg::Arg::action::hdf1044510f6143ef(&var_298, &var_7e0, 2);
    clap_builder::builder::command::Command::arg::hdd0ae0b9144b4a0c(&var_560, &var_aa8, &var_298);
    clap_builder::builder::arg::Arg::new::h5d65d1815d9b9c8f(&var_aa8, "dir");
    memcpy(&var_7e0, &var_aa8, 0x278);
    let var_830: i32;
    let var_568: i32 = var_830 | 4;
    let var_82c: i32;
    let var_564: i32 = var_82c;
    clap_builder::builder::arg::Arg::action::hdf1044510f6143ef(&var_aa8, &var_7e0, 1);
    clap_builder::builder::arg::Arg::value_hint::h327ea077447966d7(&var_7e0, &var_aa8);
    clap_builder::builder::command::Command::arg::hdd0ae0b9144b4a0c(arg1, &var_560, &var_7e0);
    arg1
}
