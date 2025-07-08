
  fn uu_hashsum::uu_app_b3sum_opts::h6d29bf312f544a29(arg1: i64, arg2: i64) -> i64

{
    let mut var_2d8: ();
    memcpy(&var_2d8, arg2, 0x2c8);
    let mut var_778: ();
    clap_builder::builder::arg::Arg::new::h3b16b83c680bff0d(&var_778, "no-namescapacitys");
    let mut var_528: ();
    clap_builder::builder::arg::Arg::long::h5908e9ea86bf7a3b(&var_528, &var_778, 
        "no-namescapacitys");
    clap_builder::builder::arg::Arg::help::h7220c48f981ef5b5(&var_778, &var_528, 
        "Omits filenames in the output (o…", 0x43);
    clap_builder::builder::arg::Arg::action::he04288933a5d3869(&var_528, &var_778, 2);
    clap_builder::builder::command::Command::arg::h001132be747f46b6(arg1, &var_2d8, &var_528)
}
