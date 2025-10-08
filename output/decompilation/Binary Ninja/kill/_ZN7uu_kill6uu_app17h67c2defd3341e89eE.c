
  int64_t uu_kill::uu_app::h67c2defd3341e89e(int64_t arg1)

{
    void var_7f0;
    clap_builder::builder::command::Command::new::h6fa87b3300ec2930(&var_7f0, 
        uucore::util_name::h074417a1e6395129());
    char const* const var_ab8;
    clap_builder::builder::command::Command::version::hd54432e6861dc023(&var_ab8, &var_7f0);
    clap_builder::builder::command::Command::about::h44fdab56d4fece5c(&var_7f0, &var_ab8);
    void var_528;
    uucore::format_usage::he053403a896311ed(&var_528, "{} [OPTIONS]... PID...Lists sign…", 0x16);
    clap_builder::builder::command::Command::override_usage::h8eeb4b3fa81c1504(&var_ab8, &var_7f0, 
        &var_528);
    memcpy(&var_7f0, &var_ab8, 0x2bc);
    int32_t var_7fc;
    int32_t var_534 = 0x84 | var_7fc;
    int64_t var_7f8;
    int64_t var_530 = 0x80 | var_7f8;
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
    int64_t var_ab0 = 4;
    char const* const var_aa8 = "tablesignal(uutils coreutils) 0.…";
    int64_t var_aa0 = 5;
    void var_2a8;
    clap_builder::builder::arg::Arg::conflicts_with_all::hc05b378e702faecd(&var_2a8, &var_528, 
        &var_ab8);
    clap_builder::builder::command::Command::arg::h3d2a979e69efb1fd(&var_ab8, &var_7f0, &var_2a8);
    clap_builder::builder::arg::Arg::new::h422eccc46783c9b6(&var_7f0, 
        "pids_or_signalstablesignal(uutil…");
    memcpy(&var_528, &var_7f0, 0x278);
    int32_t var_578;
    int32_t var_2b0 = var_578 | 4;
    int32_t var_574;
    int32_t var_2ac = var_574;
    clap_builder::builder::arg::Arg::action::h3a3c0bbf65d9b33b(&var_7f0, &var_528, 1);
    clap_builder::builder::command::Command::arg::h3d2a979e69efb1fd(arg1, &var_ab8, &var_7f0);
    return arg1;
}
