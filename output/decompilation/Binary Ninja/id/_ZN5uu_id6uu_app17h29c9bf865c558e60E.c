
  int64_t uu_id::uu_app::h29c9bf865c558e60(int64_t arg1)

{
    void var_5c0;
    clap_builder::builder::command::Command::new::h6fdca7e27d29c898(&var_5c0, 
        uucore::util_name::h074417a1e6395129());
    void var_2f8;
    clap_builder::builder::command::Command::version::h99481c1494a4826c(&var_2f8, &var_5c0);
    clap_builder::builder::command::Command::about::h24aae7a90b7c5459(&var_5c0, &var_2f8);
    void var_ac0;
    uucore::format_usage::he053403a896311ed(&var_ac0, "{} [OPTION]... [USER]...auditgro…", 0x18);
    clap_builder::builder::command::Command::override_usage::h0d6bdbde830e1b1b(&var_2f8, &var_5c0, 
        &var_ac0);
    memcpy(&var_5c0, &var_2f8, 0x2bc);
    int64_t var_3c;
    int64_t var_304 = 0x8800000088 | var_3c;
    int32_t var_34;
    int32_t var_2fc = var_34;
    clap_builder::builder::arg::Arg::new::h1fb1e568bfe0d796(&var_2f8, 
        "auditgrouphuman-readablegroupsDi…");
    clap_builder::builder::arg::Arg::short::hbde74119a3cc74a8(&var_ac0, &var_2f8, 0x41);
    char const* const var_840 = "grouphuman-readablegroupsDisplay…";
    int64_t var_838 = 5;
    char const* const var_830 = "userSomedumb\x1b[5m\x1b[9m <= tr…";
    int64_t var_828 = 4;
    char const* const var_820 = "human-readablegroupsDisplay the …";
    int64_t var_818 = 0xe;
    char const* const var_810 = "passwordNO_COLORNulErrorhuman-re…";
    int64_t var_808 = 8;
    char const* const var_800 = "groupsDisplay the process audit …";
    int64_t var_7f8 = 6;
    char const* const var_7f0 = "zeroAnsi -- \x1b[8mhelpNoneshimU…";
    int64_t var_7e8 = 4;
    clap_builder::builder::arg::Arg::conflicts_with_all::ha22caf8ba8cfeef0(&var_2f8, &var_ac0, 
        &var_840);
    clap_builder::builder::arg::Arg::help::h4434d375747c7e6d(&var_ac0, &var_2f8, 
        "Display the process audit user I…", 0x78);
    clap_builder::builder::arg::Arg::action::h01f838898fb925b5(&var_840, &var_ac0, 2);
    clap_builder::builder::command::Command::arg::hb9295a6f98fbc68a(&var_2f8, &var_5c0, &var_840);
    clap_builder::builder::arg::Arg::new::h1fb1e568bfe0d796(&var_5c0, 
        "userSomedumb\x1b[5m\x1b[9m <= tr…");
    clap_builder::builder::arg::Arg::short::hbde74119a3cc74a8(&var_ac0, &var_5c0, 0x75);
    clap_builder::builder::arg::Arg::long::h6a1bc9f61ee80bad(&var_5c0, &var_ac0, 
        "userSomedumb\x1b[5m\x1b[9m <= tr…");
    clap_builder::builder::arg::Arg::conflicts_with::h50c74f617783391e(&var_ac0, &var_5c0, 
        "grouphuman-readablegroupsDisplay…");
    clap_builder::builder::arg::Arg::help::h4434d375747c7e6d(&var_5c0, &var_ac0, 
        "Display only the effective user …", 0x2f);
    clap_builder::builder::arg::Arg::action::h01f838898fb925b5(&var_ac0, &var_5c0, 2);
    clap_builder::builder::command::Command::arg::hb9295a6f98fbc68a(&var_5c0, &var_2f8, &var_ac0);
    clap_builder::builder::arg::Arg::new::h1fb1e568bfe0d796(&var_2f8, 
        "grouphuman-readablegroupsDisplay…");
    clap_builder::builder::arg::Arg::short::hbde74119a3cc74a8(&var_ac0, &var_2f8, 0x67);
    clap_builder::builder::arg::Arg::long::h6a1bc9f61ee80bad(&var_2f8, &var_ac0, 
        "grouphuman-readablegroupsDisplay…");
    clap_builder::builder::arg::Arg::conflicts_with::h50c74f617783391e(&var_ac0, &var_2f8, 
        "userSomedumb\x1b[5m\x1b[9m <= tr…");
    clap_builder::builder::arg::Arg::help::h4434d375747c7e6d(&var_2f8, &var_ac0, 
        "Display only the effective group…", 0x2f);
    clap_builder::builder::arg::Arg::action::h01f838898fb925b5(&var_ac0, &var_2f8, 2);
    clap_builder::builder::command::Command::arg::hb9295a6f98fbc68a(&var_2f8, &var_5c0, &var_ac0);
    clap_builder::builder::arg::Arg::new::h1fb1e568bfe0d796(&var_5c0, 
        "groupsDisplay the process audit …");
    clap_builder::builder::arg::Arg::short::hbde74119a3cc74a8(&var_ac0, &var_5c0, 0x47);
    clap_builder::builder::arg::Arg::long::h6a1bc9f61ee80bad(&var_5c0, &var_ac0, 
        "groupsDisplay the process audit …");
    var_840 = "grouphuman-readablegroupsDisplay…";
    int64_t var_838_1 = 5;
    char const* const var_830_1 = "userSomedumb\x1b[5m\x1b[9m <= tr…";
    int64_t var_828_1 = 4;
    char const* const var_820_1 = "contextDisplay only the differen…";
    int64_t var_818_1 = 7;
    char const* const var_810_1 = "human-readablegroupsDisplay the …";
    int64_t var_808_1 = 0xe;
    char const* const var_800_1 = "passwordNO_COLORNulErrorhuman-re…";
    int64_t var_7f8_1 = 8;
    char const* const var_7f0_1 = "auditgrouphuman-readablegroupsDi…";
    int64_t var_7e8_1 = 5;
    clap_builder::builder::arg::Arg::conflicts_with_all::ha22caf8ba8cfeef0(&var_ac0, &var_5c0, 
        &var_840);
    clap_builder::builder::arg::Arg::help::h4434d375747c7e6d(&var_5c0, &var_ac0, 
        "Display only the different group…", 0x5e);
    clap_builder::builder::arg::Arg::action::h01f838898fb925b5(&var_ac0, &var_5c0, 2);
    clap_builder::builder::command::Command::arg::hb9295a6f98fbc68a(&var_5c0, &var_2f8, &var_ac0);
    clap_builder::builder::arg::Arg::new::h1fb1e568bfe0d796(&var_2f8, 
        "human-readablegroupsDisplay the …");
    clap_builder::builder::arg::Arg::short::hbde74119a3cc74a8(&var_ac0, &var_2f8, 0x70);
    clap_builder::builder::arg::Arg::help::h4434d375747c7e6d(&var_2f8, &var_ac0, 
        "Make the output human-readable. …", 0x43);
    clap_builder::builder::arg::Arg::action::h01f838898fb925b5(&var_ac0, &var_2f8, 2);
    clap_builder::builder::command::Command::arg::hb9295a6f98fbc68a(&var_2f8, &var_5c0, &var_ac0);
    clap_builder::builder::arg::Arg::new::h1fb1e568bfe0d796(&var_5c0, &data_418978[0x10]);
    clap_builder::builder::arg::Arg::short::hbde74119a3cc74a8(&var_ac0, &var_5c0, 0x6e);
    clap_builder::builder::arg::Arg::long::h6a1bc9f61ee80bad(&var_5c0, &var_ac0, 
        &data_418978[0x10]);
    clap_builder::builder::arg::Arg::help::h4434d375747c7e6d(&var_ac0, &var_5c0, 
        "Display the name of the user or …", 0xba);
    clap_builder::builder::arg::Arg::action::h01f838898fb925b5(&var_840, &var_ac0, 2);
    clap_builder::builder::command::Command::arg::hb9295a6f98fbc68a(&var_5c0, &var_2f8, &var_840);
    clap_builder::builder::arg::Arg::new::h1fb1e568bfe0d796(&var_2f8, 
        "passwordNO_COLORNulErrorhuman-re…");
    clap_builder::builder::arg::Arg::short::hbde74119a3cc74a8(&var_ac0, &var_2f8, 0x50);
    clap_builder::builder::arg::Arg::help::h4434d375747c7e6d(&var_2f8, &var_ac0, 
        "Display the id as a password fil…", 0x28);
    clap_builder::builder::arg::Arg::conflicts_with::h50c74f617783391e(&var_ac0, &var_2f8, 
        "human-readablegroupsDisplay the …");
    clap_builder::builder::arg::Arg::action::h01f838898fb925b5(&var_840, &var_ac0, 2);
    clap_builder::builder::command::Command::arg::hb9295a6f98fbc68a(&var_2f8, &var_5c0, &var_840);
    clap_builder::builder::arg::Arg::new::h1fb1e568bfe0d796(&var_5c0, 
        "realBOLDBlue\x1b[4muserSomedumb\x1b…");
    clap_builder::builder::arg::Arg::short::hbde74119a3cc74a8(&var_ac0, &var_5c0, 0x72);
    clap_builder::builder::arg::Arg::long::h6a1bc9f61ee80bad(&var_5c0, &var_ac0, 
        "realBOLDBlue\x1b[4muserSomedumb\x1b…");
    clap_builder::builder::arg::Arg::help::h4434d375747c7e6d(&var_ac0, &var_5c0, 
        "Display the real ID for the -G, …", 0x4e);
    clap_builder::builder::arg::Arg::action::h01f838898fb925b5(&var_840, &var_ac0, 2);
    clap_builder::builder::command::Command::arg::hb9295a6f98fbc68a(&var_5c0, &var_2f8, &var_840);
    clap_builder::builder::arg::Arg::new::h1fb1e568bfe0d796(&var_2f8, 
        "zeroAnsi -- \x1b[8mhelpNoneshimU…");
    clap_builder::builder::arg::Arg::short::hbde74119a3cc74a8(&var_ac0, &var_2f8, 0x7a);
    clap_builder::builder::arg::Arg::long::h6a1bc9f61ee80bad(&var_2f8, &var_ac0, 
        "zeroAnsi -- \x1b[8mhelpNoneshimU…");
    clap_builder::builder::arg::Arg::help::h4434d375747c7e6d(&var_ac0, &var_2f8, 
        "delimit entries with NUL charact…", 0x54);
    clap_builder::builder::arg::Arg::action::h01f838898fb925b5(&var_840, &var_ac0, 2);
    clap_builder::builder::command::Command::arg::hb9295a6f98fbc68a(&var_2f8, &var_5c0, &var_840);
    clap_builder::builder::arg::Arg::new::h1fb1e568bfe0d796(&var_5c0, 
        "contextDisplay only the differen…");
    clap_builder::builder::arg::Arg::short::hbde74119a3cc74a8(&var_ac0, &var_5c0, 0x5a);
    clap_builder::builder::arg::Arg::long::h6a1bc9f61ee80bad(&var_5c0, &var_ac0, 
        "contextDisplay only the differen…");
    var_840 = "grouphuman-readablegroupsDisplay…";
    int64_t var_838_2 = 5;
    char const* const var_830_2 = "userSomedumb\x1b[5m\x1b[9m <= tr…";
    int64_t var_828_2 = 4;
    clap_builder::builder::arg::Arg::conflicts_with_all::h9bd4b71022810100(&var_ac0, &var_5c0, 
        &var_840);
    clap_builder::builder::arg::Arg::help::h4434d375747c7e6d(&var_5c0, &var_ac0, 
        "print only the security context …", 0x3c);
    clap_builder::builder::arg::Arg::action::h01f838898fb925b5(&var_ac0, &var_5c0, 2);
    clap_builder::builder::command::Command::arg::hb9295a6f98fbc68a(&var_5c0, &var_2f8, &var_ac0);
    clap_builder::builder::arg::Arg::new::h1fb1e568bfe0d796(&var_2f8, &data_418978[0xc]);
    clap_builder::builder::arg::Arg::action::h01f838898fb925b5(&var_ac0, &var_2f8, 1);
    clap_builder::builder::arg::Arg::value_name::h87d77aa84454cffd(&var_2f8, &var_ac0);
    clap_builder::builder::arg::Arg::value_hint::h0c7daf62b200c2b4(&var_ac0, &var_2f8);
    clap_builder::builder::command::Command::arg::hb9295a6f98fbc68a(arg1, &var_5c0, &var_ac0);
    return arg1;
}
