
  int64_t uu_paste::uu_app::hcf547b4b95fcc990(int64_t arg1)

{
    void var_830;
    clap_builder::builder::command::Command::new::ha0006b2a09687934(&var_830, 
        uucore::util_name::h074417a1e6395129());
    void var_568;
    clap_builder::builder::command::Command::version::h6daaa4221af4aeda(&var_568, &var_830);
    clap_builder::builder::command::Command::about::h44280210000d88a1(&var_830, &var_568);
    void var_ab0;
    uucore::format_usage::he053403a896311ed(&var_ab0, "{} [OPTIONS] [FILE]...serialpast…", 0x16);
    clap_builder::builder::command::Command::override_usage::hc6c959c1ac4cfee4(&var_568, &var_830, 
        &var_ab0);
    memcpy(&var_830, &var_568, 0x2bc);
    int64_t var_2ac;
    int64_t var_574 = 0x8000000080 | var_2ac;
    int32_t var_2a4;
    int32_t var_56c = var_2a4;
    clap_builder::builder::arg::Arg::new::h1aec1364b21fe991(&var_568, 
        "serialpaste one file at a time i…");
    clap_builder::builder::arg::Arg::long::h06f45b742eca4bbd(&var_ab0, &var_568, 
        "serialpaste one file at a time i…");
    clap_builder::builder::arg::Arg::short::h7df6928530e89bc3(&var_568, &var_ab0, 0x73);
    clap_builder::builder::arg::Arg::help::h6d312ec7af59890a(&var_ab0, &var_568, 
        "paste one file at a time instead…", 0x2f);
    void var_2a0;
    clap_builder::builder::arg::Arg::action::hdb93ab76a2042cb8(&var_2a0, &var_ab0, 2);
    clap_builder::builder::command::Command::arg::hd737ec6d8b15faaa(&var_568, &var_830, &var_2a0);
    clap_builder::builder::arg::Arg::new::h1aec1364b21fe991(&var_830, 
        "delimitersreuse characters from …");
    clap_builder::builder::arg::Arg::long::h06f45b742eca4bbd(&var_ab0, &var_830, 
        "delimitersreuse characters from …");
    clap_builder::builder::arg::Arg::short::h7df6928530e89bc3(&var_830, &var_ab0, 0x64);
    clap_builder::builder::arg::Arg::help::h6d312ec7af59890a(&var_ab0, &var_830, 
        "reuse characters from LIST inste…", 0x2a);
    clap_builder::builder::arg::Arg::value_name::he92a89ccbd5c1525(&var_830, &var_ab0, 
        "LISTkindAuto/");
    clap_builder::builder::arg::Arg::default_value::h3f89a2b105195cf7(&var_ab0, &var_830, 
        "\t-zero-terminatedline delimiter…");
    memcpy(&var_2a0, &var_ab0, 0x278);
    int32_t var_838;
    int32_t var_28 = 0x400 | var_838;
    int32_t var_834;
    int32_t var_24 = var_834;
    clap_builder::builder::command::Command::arg::hd737ec6d8b15faaa(&var_830, &var_568, &var_2a0);
    clap_builder::builder::arg::Arg::new::h1aec1364b21fe991(&var_568, 
        "filei128 as dyn ERANGEEDEADLKENA…");
    clap_builder::builder::arg::Arg::value_name::he92a89ccbd5c1525(&var_ab0, &var_568, 
        "FILEchar -> \x1b[2mAnsi -- \x1b[…");
    clap_builder::builder::arg::Arg::action::hdb93ab76a2042cb8(&var_568, &var_ab0, 1);
    clap_builder::builder::arg::Arg::default_value::h3f89a2b105195cf7(&var_ab0, &var_568, 
        "-zero-terminatedline delimiter i…");
    clap_builder::builder::arg::Arg::value_hint::h140e114f9c600271(&var_2a0, &var_ab0);
    clap_builder::builder::command::Command::arg::hd737ec6d8b15faaa(&var_568, &var_830, &var_2a0);
    clap_builder::builder::arg::Arg::new::h1aec1364b21fe991(&var_830, 
        "zero-terminatedline delimiter is…");
    clap_builder::builder::arg::Arg::long::h06f45b742eca4bbd(&var_ab0, &var_830, 
        "zero-terminatedline delimiter is…");
    clap_builder::builder::arg::Arg::short::h7df6928530e89bc3(&var_830, &var_ab0, 0x7a);
    clap_builder::builder::arg::Arg::help::h6d312ec7af59890a(&var_ab0, &var_830, 
        "line delimiter is NUL, not newli…", 0x22);
    clap_builder::builder::arg::Arg::action::hdb93ab76a2042cb8(&var_830, &var_ab0, 2);
    clap_builder::builder::command::Command::arg::hd737ec6d8b15faaa(arg1, &var_568, &var_830);
    return arg1;
}
