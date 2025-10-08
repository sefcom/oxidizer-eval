
  fn uu_kill::uu_app::h67c2defd3341e89e(arg1: i64) -> i64

{
    let mut var_7f0: ();
    clap_builder::builder::command::Command::new::h6fa87b3300ec2930(&var_7f0, 
        uucore::util_name::h074417a1e6395129());
    let mut var_ab8: *const i8;
    clap_builder::builder::command::Command::version::hd54432e6861dc023(&var_ab8, &var_7f0);
    clap_builder::builder::command::Command::about::h44fdab56d4fece5c(&var_7f0, &var_ab8);
    let mut var_528: ();
    uucore::format_usage::he053403a896311ed(&var_528, "{} [OPTIONS]... PID...Lists sign…", 0x16);
    clap_builder::builder::command::Command::override_usage::h8eeb4b3fa81c1504(&var_ab8, &var_7f0, 
        &var_528);
    memcpy(&var_7f0, &var_ab8, 0x2bc);
    let var_7fc: i32;
    let var_534: i32 = 0x84 | var_7fc;
    let var_7f8: i64;
    let var_530: i64 = 0x80 | var_7f8;
    clap_builder::builder::arg::Arg::new::h422eccc46783c9b6(&var_ab8, 
        "listTSTPi128 as dyn ERANGEEDEADL…");
    clap_builder::builder::arg::Arg::short::h4235b86b2bd99630(&var_528, &var_ab8, 0x6c);
    clap_builder::builder::arg::Arg::long::h5ac6de4a8d5e976b(&var_ab8, &var_528, 
        "listTSTPi128 as dyn ERANGEEDEADL…");
    clap_builder::builder::arg::Arg::help::hdf0b172cc09426b6(&var_528, &var_ab8, 
        "Lists signalsLists table of sign…", 0xd);
    clap_builder::builder::arg::Arg::conflicts_with::h359c7df78d87d7e0(&var_ab8, &var_528);
    clap_builder::builder::arg::Arg::action::h3a3c0bbf65d9b33b(&var_528, &var_ab8, 2);
    clap_builder::builder::command::Command::arg::h3d2a979e69efb1fd(&var_ab8, &var_7f0, &var_528);
    clap_builder::builder::arg::Arg::new::h422eccc46783c9b6(&var_7f0, 
        "tablesignal(uutils coreutils) 0.…");
    clap_builder::builder::arg::Arg::short::h4235b86b2bd99630(&var_528, &var_7f0, 0x74);
    clap_builder::builder::arg::Arg::short_alias::h44539dfd0a463bbd(&var_7f0, &var_528, 0x4c);
    clap_builder::builder::arg::Arg::long::h5ac6de4a8d5e976b(&var_528, &var_7f0, 
        "tablesignal(uutils coreutils) 0.…");
    clap_builder::builder::arg::Arg::help::hdf0b172cc09426b6(&var_7f0, &var_528, 
        "Lists table of signalsSends give…", 0x16);
    clap_builder::builder::arg::Arg::action::h3a3c0bbf65d9b33b(&var_528, &var_7f0, 2);
    clap_builder::builder::command::Command::arg::h3d2a979e69efb1fd(&var_7f0, &var_ab8, &var_528);
    clap_builder::builder::arg::Arg::new::h422eccc46783c9b6(&var_ab8, 
        "signal(uutils coreutils) 0.0.30{…");
    clap_builder::builder::arg::Arg::short::h4235b86b2bd99630(&var_528, &var_ab8, 0x73);
    clap_builder::builder::arg::Arg::short_alias::h44539dfd0a463bbd(&var_ab8, &var_528, 0x6e);
    clap_builder::builder::arg::Arg::long::h5ac6de4a8d5e976b(&var_528, &var_ab8, 
        "signal(uutils coreutils) 0.0.30{…");
    clap_builder::builder::arg::Arg::value_name::h614ea83213447e48(&var_ab8, &var_528);
    clap_builder::builder::arg::Arg::help::hdf0b172cc09426b6(&var_528, &var_ab8, 
        "Sends given signal instead of SI…", 0x25);
    var_ab8 = "listTSTPi128 as dyn ERANGEEDEADL…";
    let var_ab0: i64 = 4;
    let var_aa8: *const i8 = "tablesignal(uutils coreutils) 0.…";
    let var_aa0: i64 = 5;
    let mut var_2a8: ();
    clap_builder::builder::arg::Arg::conflicts_with_all::hc05b378e702faecd(&var_2a8, &var_528, 
        &var_ab8);
    clap_builder::builder::command::Command::arg::h3d2a979e69efb1fd(&var_ab8, &var_7f0, &var_2a8);
    clap_builder::builder::arg::Arg::new::h422eccc46783c9b6(&var_7f0, 
        "pids_or_signalstablesignal(uutil…");
    memcpy(&var_528, &var_7f0, 0x278);
    let var_578: i32;
    let var_2b0: i32 = var_578 | 4;
    let var_574: i32;
    let var_2ac: i32 = var_574;
    clap_builder::builder::arg::Arg::action::h3a3c0bbf65d9b33b(&var_7f0, &var_528, 1);
    clap_builder::builder::command::Command::arg::h3d2a979e69efb1fd(arg1, &var_ab8, &var_7f0);
    arg1
}
