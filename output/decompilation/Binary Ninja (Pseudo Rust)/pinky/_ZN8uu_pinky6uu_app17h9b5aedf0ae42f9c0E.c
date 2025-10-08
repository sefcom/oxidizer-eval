
  fn uu_pinky::uu_app::h9b5aedf0ae42f9c0(arg1: i64) -> i64

{
    let mut var_7e0: ();
    clap_builder::builder::command::Command::new::h254d9f9da90c7328(&var_7e0, 
        uucore::util_name::h074417a1e6395129());
    let mut var_aa8: ();
    clap_builder::builder::command::Command::version::hd5923f78d296cc3c(&var_aa8, &var_7e0);
    clap_builder::builder::command::Command::about::hfb44365e348c242f(&var_7e0, &var_aa8);
    let mut var_518: ();
    uucore::format_usage::he053403a896311ed(&var_518, "{} [OPTION]... [USER]...long_for…", 0x18);
    clap_builder::builder::command::Command::override_usage::h97a04b23c2e5e2dc(&var_aa8, &var_7e0, 
        &var_518);
    memcpy(&var_7e0, &var_aa8, 0x2bc);
    let var_7ec: i64;
    let var_524: i64 = 0x8008000080080 | var_7ec;
    let var_7e4: i32;
    let var_51c: i32 = var_7e4;
    clap_builder::builder::arg::Arg::new::he9dede6b11ca1b49(&var_aa8, 
        "long_formatproduce long format o…");
    clap_builder::builder::arg::Arg::short::hcd72c6e32bd4d85c(&var_518, &var_aa8, 0x6c);
    clap_builder::builder::arg::Arg::requires::h733af6e8d6d30664(&var_aa8, &var_518);
    clap_builder::builder::arg::Arg::help::h48afb46a0abc9439(&var_518, &var_aa8, 
        "produce long format output for t…", 0x32);
    let mut var_298: ();
    clap_builder::builder::arg::Arg::action::hd0adc43b30523780(&var_298, &var_518, 2);
    clap_builder::builder::command::Command::arg::hc0506198e59735c3(&var_aa8, &var_7e0, &var_298);
    clap_builder::builder::arg::Arg::new::he9dede6b11ca1b49(&var_7e0, 
        "omit_home_diromit the user's hom…");
    clap_builder::builder::arg::Arg::short::hcd72c6e32bd4d85c(&var_518, &var_7e0, 0x62);
    clap_builder::builder::arg::Arg::help::h48afb46a0abc9439(&var_7e0, &var_518, 
        "omit the user's home directory a…", 0x37);
    clap_builder::builder::arg::Arg::action::hd0adc43b30523780(&var_518, &var_7e0, 2);
    clap_builder::builder::command::Command::arg::hc0506198e59735c3(&var_7e0, &var_aa8, &var_518);
    clap_builder::builder::arg::Arg::new::he9dede6b11ca1b49(&var_aa8, 
        "omit_project_fileomit the user's…");
    clap_builder::builder::arg::Arg::short::hcd72c6e32bd4d85c(&var_518, &var_aa8, 0x68);
    clap_builder::builder::arg::Arg::help::h48afb46a0abc9439(&var_aa8, &var_518, 
        "omit the user's project file in …", 0x2b);
    clap_builder::builder::arg::Arg::action::hd0adc43b30523780(&var_518, &var_aa8, 2);
    clap_builder::builder::command::Command::arg::hc0506198e59735c3(&var_aa8, &var_7e0, &var_518);
    clap_builder::builder::arg::Arg::new::he9dede6b11ca1b49(&var_7e0, 
        "omit_plan_fileomit the user's pl…");
    clap_builder::builder::arg::Arg::short::hcd72c6e32bd4d85c(&var_518, &var_7e0, 0x70);
    clap_builder::builder::arg::Arg::help::h48afb46a0abc9439(&var_7e0, &var_518, 
        "omit the user's plan file in lon…", 0x28);
    clap_builder::builder::arg::Arg::action::hd0adc43b30523780(&var_518, &var_7e0, 2);
    clap_builder::builder::command::Command::arg::hc0506198e59735c3(&var_7e0, &var_aa8, &var_518);
    clap_builder::builder::arg::Arg::new::he9dede6b11ca1b49(&var_aa8, 
        "short_formatdo short format outp…");
    clap_builder::builder::arg::Arg::short::hcd72c6e32bd4d85c(&var_518, &var_aa8, 0x73);
    clap_builder::builder::arg::Arg::help::h48afb46a0abc9439(&var_aa8, &var_518, 
        "do short format output, this is …", 0x2b);
    clap_builder::builder::arg::Arg::action::hd0adc43b30523780(&var_518, &var_aa8, 2);
    clap_builder::builder::command::Command::arg::hc0506198e59735c3(&var_aa8, &var_7e0, &var_518);
    clap_builder::builder::arg::Arg::new::he9dede6b11ca1b49(&var_7e0, 
        "omit_headingsomit the line of co…");
    clap_builder::builder::arg::Arg::short::hcd72c6e32bd4d85c(&var_518, &var_7e0, 0x66);
    clap_builder::builder::arg::Arg::help::h48afb46a0abc9439(&var_7e0, &var_518, 
        "omit the line of column headings…", 0x30);
    clap_builder::builder::arg::Arg::action::hd0adc43b30523780(&var_518, &var_7e0, 2);
    clap_builder::builder::command::Command::arg::hc0506198e59735c3(&var_7e0, &var_aa8, &var_518);
    clap_builder::builder::arg::Arg::new::he9dede6b11ca1b49(&var_aa8, 
        "omit_nameomit the user's full na…");
    clap_builder::builder::arg::Arg::short::hcd72c6e32bd4d85c(&var_518, &var_aa8, 0x77);
    clap_builder::builder::arg::Arg::help::h48afb46a0abc9439(&var_aa8, &var_518, 
        "omit the user's full name in sho…", 0x29);
    clap_builder::builder::arg::Arg::action::hd0adc43b30523780(&var_518, &var_aa8, 2);
    clap_builder::builder::command::Command::arg::hc0506198e59735c3(&var_aa8, &var_7e0, &var_518);
    clap_builder::builder::arg::Arg::new::he9dede6b11ca1b49(&var_7e0, 
        "omit_name_hostomit the user's fu…");
    clap_builder::builder::arg::Arg::short::hcd72c6e32bd4d85c(&var_518, &var_7e0, 0x69);
    clap_builder::builder::arg::Arg::help::h48afb46a0abc9439(&var_7e0, &var_518, 
        "omit the user's full name and re…", 0x39);
    clap_builder::builder::arg::Arg::action::hd0adc43b30523780(&var_518, &var_7e0, 2);
    clap_builder::builder::command::Command::arg::hc0506198e59735c3(&var_7e0, &var_aa8, &var_518);
    clap_builder::builder::arg::Arg::new::he9dede6b11ca1b49(&var_aa8, 
        "omit_name_host_timeomit the user…");
    clap_builder::builder::arg::Arg::short::hcd72c6e32bd4d85c(&var_518, &var_aa8, 0x71);
    clap_builder::builder::arg::Arg::help::h48afb46a0abc9439(&var_aa8, &var_518, 
        "omit the user's full name, remot…", 0x44);
    clap_builder::builder::arg::Arg::action::hd0adc43b30523780(&var_518, &var_aa8, 2);
    clap_builder::builder::command::Command::arg::hc0506198e59735c3(&var_aa8, &var_7e0, &var_518);
    clap_builder::builder::arg::Arg::new::he9dede6b11ca1b49(&var_7e0, 
        "userbaseSomedumb\x1b[5mName\x1b[…");
    clap_builder::builder::arg::Arg::action::hd0adc43b30523780(&var_518, &var_7e0, 1);
    clap_builder::builder::arg::Arg::value_hint::h7347dd9d724a640a(&var_298, &var_518);
    clap_builder::builder::command::Command::arg::hc0506198e59735c3(&var_7e0, &var_aa8, &var_298);
    clap_builder::builder::arg::Arg::new::he9dede6b11ca1b49(&var_aa8, 
        "helpnoneNoneshimname\x1b[0mreprs…");
    clap_builder::builder::arg::Arg::long::h42ff1ba7c7687e6e(&var_518, &var_aa8);
    clap_builder::builder::arg::Arg::help::h48afb46a0abc9439(&var_aa8, &var_518, &data_41abb2, 
        0x16);
    clap_builder::builder::arg::Arg::action::hd0adc43b30523780(&var_518, &var_aa8, 5);
    clap_builder::builder::command::Command::arg::hc0506198e59735c3(arg1, &var_7e0, &var_518);
    arg1
}
