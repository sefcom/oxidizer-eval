
  int64_t uu_who::uu_app::h66b593fcffc444f9(int64_t arg1)

{
    void var_830;
    clap_builder::builder::command::Command::new::hb56d3e04f04358c4(&var_830, 
        uucore::util_name::h074417a1e6395129());
    void var_568;
    clap_builder::builder::command::Command::version::hfaaa4691f515a37b(&var_568, &var_830);
    clap_builder::builder::command::Command::about::h1a9e4810578678ec(&var_830, &var_568);
    void var_ab0;
    uucore::format_usage::he053403a896311ed(&var_ab0, "{} [OPTION]... [ FILE | ARG1 ARG…", 0x23);
    clap_builder::builder::command::Command::override_usage::h6e8ddfabede3b89e(&var_568, &var_830, 
        &var_ab0);
    memcpy(&var_830, &var_568, 0x2bc);
    int64_t var_2ac;
    int64_t var_574 = 0x8000000080 | var_2ac;
    int32_t var_2a4;
    int32_t var_56c = var_2a4;
    clap_builder::builder::arg::Arg::new::he857f84cdbfee477(&var_568, 
        "allsame as -b -d --login -p -r -…");
    clap_builder::builder::arg::Arg::long::h6795c1d013a66766(&var_ab0, &var_568, 
        "allsame as -b -d --login -p -r -…");
    clap_builder::builder::arg::Arg::short::h2f7e3ae00f80cc81(&var_568, &var_ab0, 0x61);
    clap_builder::builder::arg::Arg::help::h9e4d171d1ae63483(&var_ab0, &var_568, 
        "same as -b -d --login -p -r -t -…", 0x24);
    char const* const var_2a0;
    clap_builder::builder::arg::Arg::action::h5c2e56fbb657d7a1(&var_2a0, &var_ab0);
    clap_builder::builder::command::Command::arg::ha1615bb48fb395cc(&var_568, &var_830, &var_2a0);
    clap_builder::builder::arg::Arg::new::he857f84cdbfee477(&var_830, 
        "bootBlue\x1b[4mfullbaseSomedumb\x1b…");
    clap_builder::builder::arg::Arg::long::h6795c1d013a66766(&var_ab0, &var_830, 
        "bootBlue\x1b[4mfullbaseSomedumb\x1b…");
    clap_builder::builder::arg::Arg::short::h2f7e3ae00f80cc81(&var_830, &var_ab0, 0x62);
    clap_builder::builder::arg::Arg::help::h9e4d171d1ae63483(&var_ab0, &var_830, 
        "time of last system bootprint de…", 0x18);
    clap_builder::builder::arg::Arg::action::h5c2e56fbb657d7a1(&var_2a0, &var_ab0);
    clap_builder::builder::command::Command::arg::ha1615bb48fb395cc(&var_830, &var_568, &var_2a0);
    clap_builder::builder::arg::Arg::new::he857f84cdbfee477(&var_568, 
        "deadkeyscaseu128for<\x1b[1mKindb…");
    clap_builder::builder::arg::Arg::long::h6795c1d013a66766(&var_ab0, &var_568, 
        "deadkeyscaseu128for<\x1b[1mKindb…");
    clap_builder::builder::arg::Arg::short::h2f7e3ae00f80cc81(&var_568, &var_ab0, 0x64);
    clap_builder::builder::arg::Arg::help::h9e4d171d1ae63483(&var_ab0, &var_568, 
        "print dead processesheadingprint…", 0x14);
    clap_builder::builder::arg::Arg::action::h5c2e56fbb657d7a1(&var_2a0, &var_ab0);
    clap_builder::builder::command::Command::arg::ha1615bb48fb395cc(&var_568, &var_830, &var_2a0);
    clap_builder::builder::arg::Arg::new::he857f84cdbfee477(&var_830, 
        "headingprint line of column head…");
    clap_builder::builder::arg::Arg::long::h6795c1d013a66766(&var_ab0, &var_830, 
        "headingprint line of column head…");
    clap_builder::builder::arg::Arg::short::h2f7e3ae00f80cc81(&var_830, &var_ab0, 0x48);
    clap_builder::builder::arg::Arg::help::h9e4d171d1ae63483(&var_ab0, &var_830, 
        "print line of column headingslog…", 0x1d);
    clap_builder::builder::arg::Arg::action::h5c2e56fbb657d7a1(&var_2a0, &var_ab0);
    clap_builder::builder::command::Command::arg::ha1615bb48fb395cc(&var_830, &var_568, &var_2a0);
    clap_builder::builder::arg::Arg::new::he857f84cdbfee477(&var_568, 
        "loginprint system login processe…");
    clap_builder::builder::arg::Arg::long::h6795c1d013a66766(&var_ab0, &var_568, 
        "loginprint system login processe…");
    clap_builder::builder::arg::Arg::short::h2f7e3ae00f80cc81(&var_568, &var_ab0, 0x6c);
    clap_builder::builder::arg::Arg::help::h9e4d171d1ae63483(&var_ab0, &var_568, 
        "print system login processeslook…", 0x1c);
    clap_builder::builder::arg::Arg::action::h5c2e56fbb657d7a1(&var_2a0, &var_ab0);
    clap_builder::builder::command::Command::arg::ha1615bb48fb395cc(&var_568, &var_830, &var_2a0);
    clap_builder::builder::arg::Arg::new::he857f84cdbfee477(&var_830, 
        "lookupattempt to canonicalize ho…");
    clap_builder::builder::arg::Arg::long::h6795c1d013a66766(&var_ab0, &var_830, 
        "lookupattempt to canonicalize ho…");
    clap_builder::builder::arg::Arg::help::h9e4d171d1ae63483(&var_830, &var_ab0, 
        "attempt to canonicalize hostname…", 0x29);
    clap_builder::builder::arg::Arg::action::h5c2e56fbb657d7a1(&var_ab0, &var_830);
    clap_builder::builder::command::Command::arg::ha1615bb48fb395cc(&var_830, &var_568, &var_ab0);
    clap_builder::builder::arg::Arg::new::he857f84cdbfee477(&var_568, 
        "only_hostname_useronly hostname …");
    clap_builder::builder::arg::Arg::short::h2f7e3ae00f80cc81(&var_ab0, &var_568, 0x6d);
    clap_builder::builder::arg::Arg::help::h9e4d171d1ae63483(&var_568, &var_ab0, 
        "only hostname and user associate…", 0x2c);
    clap_builder::builder::arg::Arg::action::h5c2e56fbb657d7a1(&var_ab0, &var_568);
    clap_builder::builder::command::Command::arg::ha1615bb48fb395cc(&var_568, &var_830, &var_ab0);
    clap_builder::builder::arg::Arg::new::he857f84cdbfee477(&var_830, 
        "processprint active processes sp…");
    clap_builder::builder::arg::Arg::long::h6795c1d013a66766(&var_ab0, &var_830, 
        "processprint active processes sp…");
    clap_builder::builder::arg::Arg::short::h2f7e3ae00f80cc81(&var_830, &var_ab0, 0x70);
    clap_builder::builder::arg::Arg::help::h9e4d171d1ae63483(&var_ab0, &var_830, 
        "print active processes spawned b…", 0x26);
    clap_builder::builder::arg::Arg::action::h5c2e56fbb657d7a1(&var_2a0, &var_ab0);
    clap_builder::builder::command::Command::arg::ha1615bb48fb395cc(&var_830, &var_568, &var_2a0);
    clap_builder::builder::arg::Arg::new::he857f84cdbfee477(&var_568, 
        "countall login names and number …");
    clap_builder::builder::arg::Arg::long::h6795c1d013a66766(&var_ab0, &var_568, 
        "countall login names and number …");
    clap_builder::builder::arg::Arg::short::h2f7e3ae00f80cc81(&var_568, &var_ab0, 0x71);
    clap_builder::builder::arg::Arg::help::h9e4d171d1ae63483(&var_ab0, &var_568, 
        "all login names and number of us…", 0x2d);
    clap_builder::builder::arg::Arg::action::h5c2e56fbb657d7a1(&var_2a0, &var_ab0);
    clap_builder::builder::command::Command::arg::ha1615bb48fb395cc(&var_568, &var_830, &var_2a0);
    clap_builder::builder::arg::Arg::new::he857f84cdbfee477(&var_830, 
        "runlevelextern "# users=ENOTUNIQ…");
    clap_builder::builder::arg::Arg::long::h6795c1d013a66766(&var_ab0, &var_830, 
        "runlevelextern "# users=ENOTUNIQ…");
    clap_builder::builder::arg::Arg::short::h2f7e3ae00f80cc81(&var_830, &var_ab0, 0x72);
    clap_builder::builder::arg::Arg::help::h9e4d171d1ae63483(&var_ab0, &var_830, 
        "print current runlevel(uutils co…", 0x16);
    clap_builder::builder::arg::Arg::action::h5c2e56fbb657d7a1(&var_2a0, &var_ab0);
    clap_builder::builder::command::Command::arg::ha1615bb48fb395cc(&var_830, &var_568, &var_2a0);
    clap_builder::builder::arg::Arg::new::he857f84cdbfee477(&var_568, 
        "shortprint only name, line, and …");
    clap_builder::builder::arg::Arg::long::h6795c1d013a66766(&var_ab0, &var_568, 
        "shortprint only name, line, and …");
    clap_builder::builder::arg::Arg::short::h2f7e3ae00f80cc81(&var_568, &var_ab0, 0x73);
    clap_builder::builder::arg::Arg::help::h9e4d171d1ae63483(&var_ab0, &var_568, 
        "print only name, line, and time …", 0x29);
    clap_builder::builder::arg::Arg::action::h5c2e56fbb657d7a1(&var_2a0, &var_ab0);
    clap_builder::builder::command::Command::arg::ha1615bb48fb395cc(&var_568, &var_830, &var_2a0);
    clap_builder::builder::arg::Arg::new::he857f84cdbfee477(&var_830, 
        "timecodetip:\x1b[3mmesgdeadkeysc…");
    clap_builder::builder::arg::Arg::long::h6795c1d013a66766(&var_ab0, &var_830, 
        "timecodetip:\x1b[3mmesgdeadkeysc…");
    clap_builder::builder::arg::Arg::short::h2f7e3ae00f80cc81(&var_830, &var_ab0, 0x74);
    clap_builder::builder::arg::Arg::help::h9e4d171d1ae63483(&var_ab0, &var_830, 
        "print last system clock changeus…", 0x1e);
    clap_builder::builder::arg::Arg::action::h5c2e56fbb657d7a1(&var_2a0, &var_ab0);
    clap_builder::builder::command::Command::arg::ha1615bb48fb395cc(&var_830, &var_568, &var_2a0);
    clap_builder::builder::arg::Arg::new::he857f84cdbfee477(&var_568, 
        "userslist users logged inmessage…");
    clap_builder::builder::arg::Arg::long::h6795c1d013a66766(&var_ab0, &var_568, 
        "userslist users logged inmessage…");
    clap_builder::builder::arg::Arg::short::h2f7e3ae00f80cc81(&var_568, &var_ab0, 0x75);
    clap_builder::builder::arg::Arg::help::h9e4d171d1ae63483(&var_ab0, &var_568, 
        "list users logged inmessageadd u…", 0x14);
    clap_builder::builder::arg::Arg::action::h5c2e56fbb657d7a1(&var_2a0, &var_ab0);
    clap_builder::builder::command::Command::arg::ha1615bb48fb395cc(&var_568, &var_830, &var_2a0);
    clap_builder::builder::arg::Arg::new::he857f84cdbfee477(&var_830, 
        "mesgdeadkeyscaseu128for<\x1b[1mK…");
    clap_builder::builder::arg::Arg::long::h6795c1d013a66766(&var_ab0, &var_830, 
        "mesgdeadkeyscaseu128for<\x1b[1mK…");
    clap_builder::builder::arg::Arg::short::h2f7e3ae00f80cc81(&var_830, &var_ab0, 0x54);
    clap_builder::builder::arg::Arg::visible_short_alias::hf9b4dc2642d5f4ae(&var_ab0, &var_830);
    var_2a0 = "messageadd user's message status…";
    int64_t var_298 = 7;
    char const* const var_290 = "writable\n       Februaryrunleve…";
    int64_t var_288 = 8;
    clap_builder::builder::arg::Arg::visible_aliases::h9f7a8a00320c3f39(&var_830, &var_ab0, 
        &var_2a0);
    clap_builder::builder::arg::Arg::help::h9e4d171d1ae63483(&var_ab0, &var_830, 
        "add user's message status as +, …", 0x26);
    clap_builder::builder::arg::Arg::action::h5c2e56fbb657d7a1(&var_2a0, &var_ab0);
    clap_builder::builder::command::Command::arg::ha1615bb48fb395cc(&var_830, &var_568, &var_2a0);
    clap_builder::builder::arg::Arg::new::he857f84cdbfee477(&var_568, "FILEcharJu");
    clap_builder::builder::arg::Arg::num_args::h83c0589b56ffe420(&var_ab0, &var_568, 1);
    clap_builder::builder::arg::Arg::value_hint::h496899cfb4cae473(&var_568, &var_ab0);
    clap_builder::builder::command::Command::arg::ha1615bb48fb395cc(arg1, &var_830, &var_568);
    return arg1;
}
