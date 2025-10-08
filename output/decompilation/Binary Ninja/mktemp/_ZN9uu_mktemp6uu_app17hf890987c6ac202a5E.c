
  int64_t uu_mktemp::uu_app::hf890987c6ac202a5(int64_t arg1)

{
    void var_830;
    clap_builder::builder::command::Command::new::h5db50cac6bb2c0c5(&var_830, 
        uucore::util_name::h074417a1e6395129());
    void var_568;
    clap_builder::builder::command::Command::version::h16e0c3d9a351c218(&var_568, &var_830);
    clap_builder::builder::command::Command::about::hd3333a05ba94c313(&var_830, &var_568);
    void var_ab0;
    uucore::format_usage::he053403a896311ed(&var_ab0, "{} [OPTION]... [TEMPLATE]Make a …", 0x19);
    clap_builder::builder::command::Command::override_usage::hdd1d88fcfe1a7150(&var_568, &var_830, 
        &var_ab0);
    memcpy(&var_830, &var_568, 0x2bc);
    int64_t var_2ac;
    int64_t var_574 = 0x8000000080 | var_2ac;
    int32_t var_2a4;
    int32_t var_56c = var_2a4;
    clap_builder::builder::arg::Arg::new::h818570739cffec02(&var_568, 
        "directorydry-runquietsuffixtmpdi…");
    clap_builder::builder::arg::Arg::short::h9c8d68eeb82284f5(&var_ab0, &var_568, 0x64);
    clap_builder::builder::arg::Arg::long::h3183e585d2873c7f(&var_568, &var_ab0, 
        "directorydry-runquietsuffixtmpdi…");
    clap_builder::builder::arg::Arg::help::heac2a5ae67bb5eab(&var_ab0, &var_568, 
        "Make a directory instead of a fi…", 0x22);
    void var_2a0;
    clap_builder::builder::arg::Arg::action::h0cd1618274b163e9(&var_2a0, &var_ab0);
    clap_builder::builder::command::Command::arg::h4729d43e59919395(&var_568, &var_830, &var_2a0);
    clap_builder::builder::arg::Arg::new::h818570739cffec02(&var_830, 
        "dry-runquietsuffixtmpdirptTMPDIR…");
    clap_builder::builder::arg::Arg::short::h9c8d68eeb82284f5(&var_ab0, &var_830, 0x75);
    clap_builder::builder::arg::Arg::long::h3183e585d2873c7f(&var_830, &var_ab0, 
        "dry-runquietsuffixtmpdirptTMPDIR…");
    clap_builder::builder::arg::Arg::help::heac2a5ae67bb5eab(&var_ab0, &var_830, 
        "do not create anything; merely p…", 0x34);
    clap_builder::builder::arg::Arg::action::h0cd1618274b163e9(&var_2a0, &var_ab0);
    clap_builder::builder::command::Command::arg::h4729d43e59919395(&var_830, &var_568, &var_2a0);
    clap_builder::builder::arg::Arg::new::h818570739cffec02(&var_568, 
        "quietsuffixtmpdirptTMPDIRXXXsrc/…");
    clap_builder::builder::arg::Arg::short::h9c8d68eeb82284f5(&var_ab0, &var_568, 0x71);
    clap_builder::builder::arg::Arg::long::h3183e585d2873c7f(&var_568, &var_ab0, 
        "quietsuffixtmpdirptTMPDIRXXXsrc/…");
    clap_builder::builder::arg::Arg::help::heac2a5ae67bb5eab(&var_ab0, &var_568, 
        "Fail silently if an error occurs…", 0x21);
    clap_builder::builder::arg::Arg::action::h0cd1618274b163e9(&var_2a0, &var_ab0);
    clap_builder::builder::command::Command::arg::h4729d43e59919395(&var_568, &var_830, &var_2a0);
    clap_builder::builder::arg::Arg::new::h818570739cffec02(&var_830, 
        "suffixtmpdirptTMPDIRXXXsrc/uu/mk…");
    clap_builder::builder::arg::Arg::long::h3183e585d2873c7f(&var_ab0, &var_830, 
        "suffixtmpdirptTMPDIRXXXsrc/uu/mk…");
    clap_builder::builder::arg::Arg::help::heac2a5ae67bb5eab(&var_830, &var_ab0, 
        "append SUFFIX to TEMPLATE; SUFFI…", 0x7c);
    clap_builder::builder::arg::Arg::value_name::h5a7e638e0cfa072b(&var_ab0, &var_830, 
        "SUFFIXshort form of --tmpdirDIRi…");
    clap_builder::builder::command::Command::arg::h4729d43e59919395(&var_830, &var_568, &var_ab0);
    clap_builder::builder::arg::Arg::new::h818570739cffec02(&var_568, 
        "ptTMPDIRXXXsrc/uu/mktemp/src/mkt…");
    clap_builder::builder::arg::Arg::short::h9c8d68eeb82284f5(&var_ab0, &var_568, 0x70);
    clap_builder::builder::arg::Arg::help::heac2a5ae67bb5eab(&var_568, &var_ab0, 
        "short form of --tmpdirDIRinterpr…", 0x16);
    clap_builder::builder::arg::Arg::value_name::h5a7e638e0cfa072b(&var_ab0, &var_568, 
        "DIRinterpret TEMPLATE relative t…");
    clap_builder::builder::arg::Arg::num_args::h4725b88c15ee3b35(&var_568, &var_ab0);
    int64_t var_ac8 = 3;
    clap_builder::builder::arg::Arg::value_parser::h53c071e9fea324d0(&var_ab0, &var_568, &var_ac8);
    clap_builder::builder::arg::Arg::value_hint::h38dc1041fdb80014(&var_2a0, &var_ab0);
    clap_builder::builder::command::Command::arg::h4729d43e59919395(&var_568, &var_830, &var_2a0);
    clap_builder::builder::arg::Arg::new::h818570739cffec02(&var_830, 
        "tmpdirptTMPDIRXXXsrc/uu/mktemp/s…");
    clap_builder::builder::arg::Arg::long::h3183e585d2873c7f(&var_ab0, &var_830, 
        "tmpdirptTMPDIRXXXsrc/uu/mktemp/s…");
    clap_builder::builder::arg::Arg::help::heac2a5ae67bb5eab(&var_830, &var_ab0, 
        "interpret TEMPLATE relative to D…", 0x100);
    clap_builder::builder::arg::Arg::value_name::h5a7e638e0cfa072b(&var_ab0, &var_830, 
        "DIRinterpret TEMPLATE relative t…");
    clap_builder::builder::arg::Arg::num_args::h8f8560e5ead6f6eb(&var_830, &var_ab0, 0);
    memcpy(&var_ab0, &var_830, 0x278);
    int32_t var_5b8;
    int32_t var_838 = 0x80 | var_5b8;
    int32_t var_5b4;
    int32_t var_834 = var_5b4;
    clap_builder::builder::arg::Arg::overrides_with::h2c577479195a85f1(&var_830, &var_ab0);
    clap_builder::builder::arg::Arg::value_parser::h53c071e9fea324d0(&var_ab0, &var_830, &var_ac8);
    clap_builder::builder::arg::Arg::value_hint::h38dc1041fdb80014(&var_2a0, &var_ab0);
    clap_builder::builder::command::Command::arg::h4729d43e59919395(&var_830, &var_568, &var_2a0);
    clap_builder::builder::arg::Arg::new::h818570739cffec02(&var_568, 
        "tTMPDIRXXXsrc/uu/mktemp/src/mkte…");
    clap_builder::builder::arg::Arg::short::h9c8d68eeb82284f5(&var_ab0, &var_568, 0x74);
    clap_builder::builder::arg::Arg::help::heac2a5ae67bb5eab(&var_568, &var_ab0, 
        "Generate a template (using the s…", 0x7d);
    clap_builder::builder::arg::Arg::action::h0cd1618274b163e9(&var_ab0, &var_568);
    clap_builder::builder::command::Command::arg::h4729d43e59919395(&var_568, &var_830, &var_ab0);
    clap_builder::builder::arg::Arg::new::h818570739cffec02(&var_830, "template");
    clap_builder::builder::arg::Arg::num_args::hcf42f6fcb8c68822(&var_ab0, &var_830);
    clap_builder::builder::command::Command::arg::h4729d43e59919395(arg1, &var_568, &var_ab0);
    return arg1;
}
