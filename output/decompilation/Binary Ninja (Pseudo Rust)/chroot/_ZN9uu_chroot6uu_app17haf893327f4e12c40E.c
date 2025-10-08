
  fn uu_chroot::uu_app::haf893327f4e12c40(arg1: i64) -> i64

{
    let mut var_568: ();
    clap_builder::builder::command::Command::new::he655d6112b264d2a(&var_568, 
        uucore::util_name::h074417a1e6395129());
    let mut var_ab0: ();
    clap_builder::builder::command::Command::version::hbc345fd020c67bdd(&var_ab0, &var_568);
    clap_builder::builder::command::Command::about::h9695584bad955640(&var_568, &var_ab0);
    let mut var_7e8: ();
    uucore::format_usage::he053403a896311ed(&var_7e8, "{} [OPTION]... NEWROOT [COMMAND …", 0x29);
    clap_builder::builder::command::Command::override_usage::h9ed9d499548e5fb2(&var_ab0, &var_568, 
        &var_7e8);
    memcpy(&var_568, &var_ab0, 0x2bc);
    let var_7f4: i32;
    let var_2ac: i32 = 0xa0 | var_7f4;
    let var_7f0: i64;
    let var_2a8: i64 = 0x80 | var_7f0;
    clap_builder::builder::arg::Arg::new::h600b3af57d23d9c0(&var_ab0, 
        "newrootgroupsskip-chdir(uutils c…");
    clap_builder::builder::arg::Arg::value_hint::h1258efaa4f04a1d2(&var_7e8, &var_ab0, 4);
    memcpy(&var_ab0, &var_7e8, 0x278);
    clap_builder::builder::arg::Arg::index::h9e2e0ba4091d6a0f(&var_7e8, &var_ab0, 1);
    clap_builder::builder::command::Command::arg::h04b6d3512805db65(&var_ab0, &var_568, &var_7e8);
    clap_builder::builder::arg::Arg::new::h600b3af57d23d9c0(&var_568, 
        "groupsskip-chdir(uutils coreutil…");
    clap_builder::builder::arg::Arg::long::hd907dc38845f9644(&var_7e8, &var_568, 
        "groupsskip-chdir(uutils coreutil…");
    clap_builder::builder::arg::Arg::overrides_with::h1311749084f12761(&var_568, &var_7e8);
    clap_builder::builder::arg::Arg::help::h4f0c1de7b41ae031(&var_7e8, &var_568, 
        "Comma-separated list of groups t…", 0x2b);
    let mut var_2a0: ();
    clap_builder::builder::arg::Arg::value_name::h3586aa0aa1c465b1(&var_2a0, &var_7e8, 
        "GROUP1,GROUP2...");
    clap_builder::builder::command::Command::arg::h04b6d3512805db65(&var_568, &var_ab0, &var_2a0);
    clap_builder::builder::arg::Arg::new::h600b3af57d23d9c0(&var_ab0, 
        "userspec\n       extern "ENOTUNI…");
    clap_builder::builder::arg::Arg::long::hd907dc38845f9644(&var_7e8, &var_ab0, 
        "userspec\n       extern "ENOTUNI…");
    clap_builder::builder::arg::Arg::help::h4f0c1de7b41ae031(&var_ab0, &var_7e8, 
        "Colon-separated user and group t…", 0x2c);
    clap_builder::builder::arg::Arg::value_name::h3586aa0aa1c465b1(&var_7e8, &var_ab0, 
        "USER:GROUPUse this option to not…");
    clap_builder::builder::command::Command::arg::h04b6d3512805db65(&var_ab0, &var_568, &var_7e8);
    clap_builder::builder::arg::Arg::new::h600b3af57d23d9c0(&var_568, 
        "skip-chdir(uutils coreutils) 0.0…");
    clap_builder::builder::arg::Arg::long::hd907dc38845f9644(&var_7e8, &var_568, 
        "skip-chdir(uutils coreutils) 0.0…");
    clap_builder::builder::arg::Arg::help::h4f0c1de7b41ae031(&var_568, &var_7e8, 
        "Use this option to not change th…", 0x7f);
    clap_builder::builder::arg::Arg::action::h77f0a6791951ab7c(&var_7e8, &var_568, 2);
    clap_builder::builder::command::Command::arg::h04b6d3512805db65(&var_568, &var_ab0, &var_7e8);
    clap_builder::builder::arg::Arg::new::h600b3af57d23d9c0(&var_ab0, 
        "command/CannotEnterCommandFailed…");
    clap_builder::builder::arg::Arg::action::h77f0a6791951ab7c(&var_7e8, &var_ab0, 1);
    clap_builder::builder::arg::Arg::value_hint::h1258efaa4f04a1d2(&var_ab0, &var_7e8, 6);
    memcpy(&var_7e8, &var_ab0, 0x278);
    let var_570: i32;
    let var_570_1: i32 = var_570 | 5 | 4;
    let var_56c: i32;
    let var_56c_1: i32 = var_56c;
    clap_builder::builder::arg::Arg::index::h9e2e0ba4091d6a0f(&var_ab0, &var_7e8, 2);
    clap_builder::builder::command::Command::arg::h04b6d3512805db65(arg1, &var_568, &var_ab0);
    arg1
}
