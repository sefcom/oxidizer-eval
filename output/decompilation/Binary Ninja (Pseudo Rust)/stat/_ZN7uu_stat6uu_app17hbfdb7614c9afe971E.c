
  fn uu_stat::uu_app::hbfdb7614c9afe971(arg1: i64) -> i64

{
    let mut var_830: ();
    clap_builder::builder::command::Command::new::hf04ee7269db4a35d(&var_830, 
        uucore::util_name::h074417a1e6395129());
    let mut var_568: ();
    clap_builder::builder::command::Command::version::h8f7ba9c768b8e1cc(&var_568, &var_830);
    clap_builder::builder::command::Command::about::hc5b8c863685e00c8(&var_830, &var_568);
    let mut var_ab0: ();
    uucore::format_usage::he053403a896311ed(&var_ab0, "{} [OPTION]... FILE...follow lin…", 0x16);
    clap_builder::builder::command::Command::override_usage::h6530ccc920480916(&var_568, &var_830, 
        &var_ab0);
    memcpy(&var_830, &var_568, 0x2bc);
    let var_2ac: i64;
    let var_574: i64 = 0x8000000080 | var_2ac;
    let var_2a4: i32;
    let var_56c: i32 = var_2a4;
    clap_builder::builder::arg::Arg::new::h10d836e237a10c16(&var_568, 
        "dereferencecannot read table of …");
    clap_builder::builder::arg::Arg::short::hd2f21798c755ba31(&var_ab0, &var_568, 0x4c);
    clap_builder::builder::arg::Arg::long::hd6c92cf0ef1a3cb7(&var_568, &var_ab0, 
        "dereferencecannot read table of …");
    clap_builder::builder::arg::Arg::help::h039b1eac09cebbbb(&var_ab0, &var_568, 
        "follow linksdisplay file system …", 0xc);
    let mut var_2a0: i64;
    clap_builder::builder::arg::Arg::action::h42d0aa8cc14ebe75(&var_2a0, &var_ab0, 2);
    clap_builder::builder::command::Command::arg::hc77837b9df89f70d(&var_568, &var_830, &var_2a0);
    clap_builder::builder::arg::Arg::new::h10d836e237a10c16(&var_830, 
        "file-systemdereferencecannot rea…");
    clap_builder::builder::arg::Arg::short::hd2f21798c755ba31(&var_ab0, &var_830, 0x66);
    clap_builder::builder::arg::Arg::long::hd6c92cf0ef1a3cb7(&var_830, &var_ab0, 
        "file-systemdereferencecannot rea…");
    clap_builder::builder::arg::Arg::help::h039b1eac09cebbbb(&var_ab0, &var_830, 
        "display file system status inste…", 0x31);
    clap_builder::builder::arg::Arg::action::h42d0aa8cc14ebe75(&var_2a0, &var_ab0, 2);
    clap_builder::builder::command::Command::arg::hc77837b9df89f70d(&var_830, &var_568, &var_2a0);
    clap_builder::builder::arg::Arg::new::h10d836e237a10c16(&var_568, 
        "tersefile-systemdereferencecanno…");
    clap_builder::builder::arg::Arg::short::hd2f21798c755ba31(&var_ab0, &var_568, 0x74);
    clap_builder::builder::arg::Arg::long::hd6c92cf0ef1a3cb7(&var_568, &var_ab0, 
        "tersefile-systemdereferencecanno…");
    clap_builder::builder::arg::Arg::help::h039b1eac09cebbbb(&var_ab0, &var_568, 
        "print the information in terse f…", 0x23);
    clap_builder::builder::arg::Arg::action::h42d0aa8cc14ebe75(&var_2a0, &var_ab0, 2);
    clap_builder::builder::command::Command::arg::hc77837b9df89f70d(&var_568, &var_830, &var_2a0);
    clap_builder::builder::arg::Arg::new::h10d836e237a10c16(&var_830, 
        "formattersefile-systemdereferenc…");
    clap_builder::builder::arg::Arg::short::hd2f21798c755ba31(&var_ab0, &var_830, 0x63);
    clap_builder::builder::arg::Arg::long::hd6c92cf0ef1a3cb7(&var_830, &var_ab0, 
        "formattersefile-systemdereferenc…");
    clap_builder::builder::arg::Arg::help::h039b1eac09cebbbb(&var_ab0, &var_830, 
        "use the specified FORMAT instead…", 0x5b);
    clap_builder::builder::arg::Arg::value_name::h195a05d29915983d(&var_2a0, &var_ab0);
    clap_builder::builder::command::Command::arg::hc77837b9df89f70d(&var_830, &var_568, &var_2a0);
    clap_builder::builder::arg::Arg::new::h10d836e237a10c16(&var_568, 
        "printfformattersefile-systemdere…");
    clap_builder::builder::arg::Arg::long::hd6c92cf0ef1a3cb7(&var_ab0, &var_568, 
        "printfformattersefile-systemdere…");
    clap_builder::builder::arg::Arg::value_name::h195a05d29915983d(&var_568, &var_ab0);
    clap_builder::builder::arg::Arg::help::h039b1eac09cebbbb(&var_ab0, &var_568, 
        "like --format, but interpret bac…", 0xa2);
    clap_builder::builder::command::Command::arg::hc77837b9df89f70d(&var_568, &var_830, &var_ab0);
    clap_builder::builder::arg::Arg::new::h10d836e237a10c16(&var_830, 
        "filesprintfformattersefile-syste…");
    clap_builder::builder::arg::Arg::action::h42d0aa8cc14ebe75(&var_ab0, &var_830, 1);
    var_2a0 = 2;
    clap_builder::builder::arg::Arg::value_parser::h4456a8c2318f35b3(&var_830, &var_ab0, &var_2a0);
    clap_builder::builder::arg::Arg::value_hint::h398543e52015991b(&var_ab0, &var_830);
    clap_builder::builder::command::Command::arg::hc77837b9df89f70d(arg1, &var_568, &var_ab0);
    arg1
}
