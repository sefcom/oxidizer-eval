
  fn uu_csplit::uu_app::h42f8ce6b5616d423(arg1: i64) -> i64

{
    let mut var_570: ();
    clap_builder::builder::command::Command::new::h5a6ba2d3539a27eb(&var_570, 
        uucore::util_name::h074417a1e6395129());
    let mut var_838: ();
    clap_builder::builder::command::Command::version::hf5894aa04f40a972(&var_838, &var_570);
    clap_builder::builder::command::Command::about::h2dbfc5197ccfd120(&var_570, &var_838);
    let mut var_ab8: ();
    uucore::format_usage::he053403a896311ed(&var_ab8, "{} [OPTION]... FILE PATTERN...FO…", 0x1e);
    clap_builder::builder::command::Command::override_usage::h936a8d0018dd6f8a(&var_838, &var_570, 
        &var_ab8);
    memcpy(&var_570, &var_838, 0x2bc);
    let var_57c: i64;
    let var_2b4: i64 = 0x8800000088 | var_57c;
    let var_574: i32;
    let var_2ac: i32 = var_574;
    clap_builder::builder::arg::Arg::new::h729e94e24d1ea6ad(&var_838, 
        "suffix-formatdigitsstream did no…");
    clap_builder::builder::arg::Arg::short::h5aad91a10d636568(&var_ab8, &var_838, 0x62);
    clap_builder::builder::arg::Arg::long::h9e4de3590b8c1812(&var_838, &var_ab8, 
        "suffix-formatdigitsstream did no…");
    clap_builder::builder::arg::Arg::value_name::hdcfc0949d8f230b8(&var_ab8, &var_838, 
        "FORMATuse sprintf FORMAT instead…");
    let mut var_2a8: ();
    clap_builder::builder::arg::Arg::help::h4ee47e970b7a47e9(&var_2a8, &var_ab8, 
        "use sprintf FORMAT instead of %0…", 0x22);
    clap_builder::builder::command::Command::arg::h0f06af1b398bdcce(&var_838, &var_570, &var_2a8);
    clap_builder::builder::arg::Arg::new::h729e94e24d1ea6ad(&var_570, 
        "prefixsuffix-formatdigitsstream …");
    clap_builder::builder::arg::Arg::short::h5aad91a10d636568(&var_ab8, &var_570, 0x66);
    clap_builder::builder::arg::Arg::long::h9e4de3590b8c1812(&var_570, &var_ab8, 
        "prefixsuffix-formatdigitsstream …");
    clap_builder::builder::arg::Arg::value_name::hdcfc0949d8f230b8(&var_ab8, &var_570, 
        "PREFIXuse PREFIX instead of 'xx'…");
    clap_builder::builder::arg::Arg::help::h4ee47e970b7a47e9(&var_2a8, &var_ab8, 
        "use PREFIX instead of 'xx'do not…", 0x1a);
    clap_builder::builder::command::Command::arg::h0f06af1b398bdcce(&var_570, &var_838, &var_2a8);
    clap_builder::builder::arg::Arg::new::h729e94e24d1ea6ad(&var_838, 
        "keep-filesquietelide-empty-files…");
    clap_builder::builder::arg::Arg::short::h5aad91a10d636568(&var_ab8, &var_838, 0x6b);
    clap_builder::builder::arg::Arg::long::h9e4de3590b8c1812(&var_838, &var_ab8, 
        "keep-filesquietelide-empty-files…");
    clap_builder::builder::arg::Arg::help::h4ee47e970b7a47e9(&var_ab8, &var_838, 
        "do not remove output files on er…", 0x24);
    clap_builder::builder::arg::Arg::action::hf8ec2a46c2017d05(&var_2a8, &var_ab8, 2);
    clap_builder::builder::command::Command::arg::h0f06af1b398bdcce(&var_838, &var_570, &var_2a8);
    clap_builder::builder::arg::Arg::new::h729e94e24d1ea6ad(&var_570, 
        "suppress-matcheduespemosarenegyl…");
    clap_builder::builder::arg::Arg::long::h9e4de3590b8c1812(&var_ab8, &var_570, 
        "suppress-matcheduespemosarenegyl…");
    clap_builder::builder::arg::Arg::help::h4ee47e970b7a47e9(&var_570, &var_ab8, 
        "suppress the lines matching PATT…", 0x23);
    clap_builder::builder::arg::Arg::action::hf8ec2a46c2017d05(&var_ab8, &var_570, 2);
    clap_builder::builder::command::Command::arg::h0f06af1b398bdcce(&var_570, &var_838, &var_ab8);
    clap_builder::builder::arg::Arg::new::h729e94e24d1ea6ad(&var_838, 
        "digitsstream did not contain val…");
    clap_builder::builder::arg::Arg::short::h5aad91a10d636568(&var_ab8, &var_838, 0x6e);
    clap_builder::builder::arg::Arg::long::h9e4de3590b8c1812(&var_838, &var_ab8, 
        "digitsstream did not contain val…");
    clap_builder::builder::arg::Arg::value_name::hdcfc0949d8f230b8(&var_ab8, &var_838, 
        "DIGITSuse specified number of di…");
    clap_builder::builder::arg::Arg::help::h4ee47e970b7a47e9(&var_2a8, &var_ab8, 
        "use specified number of digits i…", 0x2b);
    clap_builder::builder::command::Command::arg::h0f06af1b398bdcce(&var_838, &var_570, &var_2a8);
    clap_builder::builder::arg::Arg::new::h729e94e24d1ea6ad(&var_570, 
        "quietelide-empty-filesprefixsuff…");
    clap_builder::builder::arg::Arg::short::h5aad91a10d636568(&var_ab8, &var_570, 0x71);
    clap_builder::builder::arg::Arg::long::h9e4de3590b8c1812(&var_570, &var_ab8, 
        "quietelide-empty-filesprefixsuff…");
    clap_builder::builder::arg::Arg::visible_short_alias::hd2a084eafea17228(&var_ab8, &var_570);
    clap_builder::builder::arg::Arg::visible_alias::hfed137be98bf7791(&var_570, &var_ab8);
    clap_builder::builder::arg::Arg::help::h4ee47e970b7a47e9(&var_ab8, &var_570, 
        "do not print counts of output fi…", 0x28);
    clap_builder::builder::arg::Arg::action::hf8ec2a46c2017d05(&var_2a8, &var_ab8, 2);
    clap_builder::builder::command::Command::arg::h0f06af1b398bdcce(&var_570, &var_838, &var_2a8);
    clap_builder::builder::arg::Arg::new::h729e94e24d1ea6ad(&var_838, 
        "elide-empty-filesprefixsuffix-fo…");
    clap_builder::builder::arg::Arg::short::h5aad91a10d636568(&var_ab8, &var_838, 0x7a);
    clap_builder::builder::arg::Arg::long::h9e4de3590b8c1812(&var_838, &var_ab8, 
        "elide-empty-filesprefixsuffix-fo…");
    clap_builder::builder::arg::Arg::help::h4ee47e970b7a47e9(&var_ab8, &var_838, 
        "remove empty output filespattern…", 0x19);
    clap_builder::builder::arg::Arg::action::hf8ec2a46c2017d05(&var_2a8, &var_ab8, 2);
    clap_builder::builder::command::Command::arg::h0f06af1b398bdcce(&var_838, &var_570, &var_2a8);
    clap_builder::builder::arg::Arg::new::h729e94e24d1ea6ad(&var_570, "filemode{");
    memcpy(&var_ab8, &var_570, 0x278);
    let var_2f8: i32;
    let var_840: i32 = var_2f8 | 5;
    let var_2f4: i32;
    let var_83c: i32 = var_2f4;
    clap_builder::builder::arg::Arg::value_hint::h5feeb2e351cda2f9(&var_2a8, &var_ab8);
    clap_builder::builder::command::Command::arg::h0f06af1b398bdcce(&var_570, &var_838, &var_2a8);
    clap_builder::builder::arg::Arg::new::h729e94e24d1ea6ad(&var_838, 
        "patternOutput pieces of FILE sep…");
    memcpy(&var_ab8, &var_838, 0x278);
    let var_5c0: i32;
    let var_840_1: i32 = var_5c0 | 4;
    let var_5bc: i32;
    let var_83c_1: i32 = var_5bc;
    clap_builder::builder::arg::Arg::action::hf8ec2a46c2017d05(&var_838, &var_ab8, 1);
    memcpy(&var_ab8, &var_838, 0x278);
    let var_840_2: i32 = var_5c0 | 1;
    let var_83c_2: i32 = var_5bc;
    clap_builder::builder::command::Command::arg::h0f06af1b398bdcce(&var_838, &var_570, &var_ab8);
    clap_builder::builder::command::Command::after_help::h604e4921132b5c6d(arg1, &var_838);
    arg1
}
