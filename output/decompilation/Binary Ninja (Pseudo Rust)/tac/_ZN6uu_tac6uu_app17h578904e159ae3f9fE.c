
  fn uu_tac::uu_app::h578904e159ae3f9f(arg1: i64) -> i64

{
    let mut var_530: ();
    clap_builder::builder::command::Command::new::h23398bef088cfbaf(&var_530, 
        uucore::util_name::h60d842bf27b05e82());
    let mut var_a48: ();
    clap_builder::builder::command::Command::version::ha59cf6e08d71e0f9(&var_a48, &var_530, 
        "0.0.28attach the separator befor…");
    let mut var_780: ();
    uucore::format_usage::h76fcb2d15fbabc58(&var_780, "{} [OPTION]... [FILE]...Write ea…", 0x18);
    clap_builder::builder::command::Command::override_usage::h26239a61e5e501ea(&var_530, &var_a48, 
        &var_780);
    clap_builder::builder::command::Command::about::he1a280a914cac709(&var_a48, &var_530, 
        "Write each file to standard outp…", 0x34);
    memcpy(&var_530, &var_a48, 0x2bc);
    let var_78c: i64;
    let var_274: i64 = 0x8000000080 | var_78c;
    let var_784: i32;
    let var_26c: i32 = var_784;
    clap_builder::builder::arg::Arg::new::hc200d9bf5b1367b6(&var_a48, "beforeregexseparator");
    clap_builder::builder::arg::Arg::short::h2ad4688907a0f87f(&var_780, &var_a48, 0x62);
    clap_builder::builder::arg::Arg::long::h840fb1f251239f03(&var_a48, &var_780, 
        "beforeregexseparator");
    clap_builder::builder::arg::Arg::help::h00e43a10ba33f9ed(&var_780, &var_a48, 
        "attach the separator before inst…", 0x2c);
    let mut var_268: ();
    clap_builder::builder::arg::Arg::action::h8da4d4706cdca830(&var_268, &var_780, 2);
    clap_builder::builder::command::Command::arg::h9b586f807a88755e(&var_a48, &var_530, &var_268);
    clap_builder::builder::arg::Arg::new::hc200d9bf5b1367b6(&var_530, "regexseparator");
    clap_builder::builder::arg::Arg::short::h2ad4688907a0f87f(&var_780, &var_530, 0x72);
    clap_builder::builder::arg::Arg::long::h840fb1f251239f03(&var_530, &var_780, "regexseparator");
    clap_builder::builder::arg::Arg::help::h00e43a10ba33f9ed(&var_780, &var_530, 
        "interpret the sequence as a regu…", 0x2e);
    clap_builder::builder::arg::Arg::action::h8da4d4706cdca830(&var_268, &var_780, 2);
    clap_builder::builder::command::Command::arg::h9b586f807a88755e(&var_530, &var_a48, &var_268);
    clap_builder::builder::arg::Arg::new::hc200d9bf5b1367b6(&var_a48, "separator");
    clap_builder::builder::arg::Arg::short::h2ad4688907a0f87f(&var_780, &var_a48, 0x73);
    clap_builder::builder::arg::Arg::long::h840fb1f251239f03(&var_a48, &var_780, "separator");
    clap_builder::builder::arg::Arg::help::h00e43a10ba33f9ed(&var_780, &var_a48, 
        "use STRING as the separator inst…", 0x2e);
    clap_builder::builder::arg::Arg::value_name::ha4f3f4b83ea98725(&var_268, &var_780);
    clap_builder::builder::command::Command::arg::h9b586f807a88755e(&var_a48, &var_530, &var_268);
    clap_builder::builder::arg::Arg::new::hc200d9bf5b1367b6(&var_530, "filemode{");
    memcpy(&var_780, &var_530, 0x248);
    let var_2e8: i32;
    let var_538: i32 = var_2e8 | 4;
    let var_2e4: i32;
    let var_534: i32 = var_2e4;
    clap_builder::builder::arg::Arg::action::h8da4d4706cdca830(&var_530, &var_780, 1);
    clap_builder::builder::arg::Arg::value_hint::h3cf408ab9ed62d11(&var_780, &var_530, 3);
    clap_builder::builder::command::Command::arg::h9b586f807a88755e(arg1, &var_a48, &var_780);
    arg1
}
