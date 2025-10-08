
  fn uu_install::uu_app::hc6c3e3f673447f2b(arg1: i64) -> i64

{
    let mut var_830: ();
    clap_builder::builder::command::Command::new::h46e25ca664e85eaa(&var_830, 
        uucore::util_name::h074417a1e6395129());
    let mut var_568: ();
    clap_builder::builder::command::Command::version::hc894d1ecd0f5766a(&var_568, &var_830);
    clap_builder::builder::command::Command::about::h45ff5e39201c53f3(&var_830, &var_568);
    let mut var_ab0: ();
    uucore::format_usage::he053403a896311ed(&var_ab0, "{} [OPTION]... [FILE]...compare …", 0x18);
    clap_builder::builder::command::Command::override_usage::he69e42135cf535b6(&var_568, &var_830, 
        &var_ab0);
    memcpy(&var_830, &var_568, 0x2bc);
    let var_2ac: i64;
    let var_574: i64 = 0x8000000080 | var_2ac;
    let var_2a4: i32;
    let var_56c: i32 = var_2a4;
    uucore::features::backup_control::arguments::backup::h97e05fc730627326(&var_ab0);
    clap_builder::builder::command::Command::arg::h0ec9153d3af233ec(&var_568, &var_830, &var_ab0);
    uucore::features::backup_control::arguments::backup_no_args::hfb21d07466a7545a(&var_ab0);
    clap_builder::builder::command::Command::arg::h0ec9153d3af233ec(&var_830, &var_568, &var_ab0);
    clap_builder::builder::arg::Arg::new::hb449c7693a811bdf(&var_568, 
        "ignoredcreate-leadingownerpreser…");
    clap_builder::builder::arg::Arg::short::hf6c650c84c3048c7(&var_ab0, &var_568, 0x63);
    clap_builder::builder::arg::Arg::help::h8e5a9a796f2f652d(&var_568, &var_ab0, 
        "ignoredcreate-leadingownerpreser…", 7);
    clap_builder::builder::arg::Arg::action::hf82c138f6e0125eb(&var_ab0, &var_568, 2);
    clap_builder::builder::command::Command::arg::h0ec9153d3af233ec(&var_568, &var_830, &var_ab0);
    clap_builder::builder::arg::Arg::new::hb449c7693a811bdf(&var_830, 
        "comparedirectoryignoredcreate-le…");
    clap_builder::builder::arg::Arg::short::hf6c650c84c3048c7(&var_ab0, &var_830, 0x43);
    clap_builder::builder::arg::Arg::long::h58058337003763d4(&var_830, &var_ab0, 
        "comparedirectoryignoredcreate-le…");
    clap_builder::builder::arg::Arg::help::h8e5a9a796f2f652d(&var_ab0, &var_830, 
        "compare each pair of source and …", 0x6a);
    let mut var_2a0: ();
    clap_builder::builder::arg::Arg::action::hf82c138f6e0125eb(&var_2a0, &var_ab0, 2);
    clap_builder::builder::command::Command::arg::h0ec9153d3af233ec(&var_830, &var_568, &var_2a0);
    clap_builder::builder::arg::Arg::new::hb449c7693a811bdf(&var_568, 
        "directoryignoredcreate-leadingow…");
    clap_builder::builder::arg::Arg::short::hf6c650c84c3048c7(&var_ab0, &var_568, 0x64);
    clap_builder::builder::arg::Arg::long::h58058337003763d4(&var_568, &var_ab0, 
        "directoryignoredcreate-leadingow…");
    clap_builder::builder::arg::Arg::help::h8e5a9a796f2f652d(&var_ab0, &var_568, 
        "treat all arguments as directory…", 0x5a);
    clap_builder::builder::arg::Arg::action::hf82c138f6e0125eb(&var_2a0, &var_ab0, 2);
    clap_builder::builder::command::Command::arg::h0ec9153d3af233ec(&var_568, &var_830, &var_2a0);
    clap_builder::builder::arg::Arg::new::hb449c7693a811bdf(&var_830, 
        "create-leadingownerpreserve-time…");
    clap_builder::builder::arg::Arg::short::hf6c650c84c3048c7(&var_ab0, &var_830, 0x44);
    clap_builder::builder::arg::Arg::help::h8e5a9a796f2f652d(&var_830, &var_ab0, 
        "create all leading components of…", 0x4f);
    clap_builder::builder::arg::Arg::action::hf82c138f6e0125eb(&var_ab0, &var_830, 2);
    clap_builder::builder::command::Command::arg::h0ec9153d3af233ec(&var_830, &var_568, &var_ab0);
    clap_builder::builder::arg::Arg::new::hb449c7693a811bdf(&var_568, 
        "group/home/34r7hm4n/dev/oxidizer…");
    clap_builder::builder::arg::Arg::short::hf6c650c84c3048c7(&var_ab0, &var_568, 0x67);
    clap_builder::builder::arg::Arg::long::h58058337003763d4(&var_568, &var_ab0, 
        "group/home/34r7hm4n/dev/oxidizer…");
    clap_builder::builder::arg::Arg::help::h8e5a9a796f2f652d(&var_ab0, &var_568, 
        "set group ownership, instead of …", 0x37);
    clap_builder::builder::arg::Arg::value_name::h85015b029d6c4cc6(&var_2a0, &var_ab0, 
        "GROUPset permission mode (as in …");
    clap_builder::builder::command::Command::arg::h0ec9153d3af233ec(&var_568, &var_830, &var_2a0);
    clap_builder::builder::arg::Arg::new::hb449c7693a811bdf(&var_830, 
        "modei128 as dyn ERANGEEDEADLKENA…");
    clap_builder::builder::arg::Arg::short::hf6c650c84c3048c7(&var_ab0, &var_830, 0x6d);
    clap_builder::builder::arg::Arg::long::h58058337003763d4(&var_830, &var_ab0, 
        "modei128 as dyn ERANGEEDEADLKENA…");
    clap_builder::builder::arg::Arg::help::h8e5a9a796f2f652d(&var_ab0, &var_830, 
        "set permission mode (as in chmod…", 0x37);
    clap_builder::builder::arg::Arg::value_name::h85015b029d6c4cc6(&var_2a0, &var_ab0, 
        &data_41ad44[0x14]);
    clap_builder::builder::command::Command::arg::h0ec9153d3af233ec(&var_830, &var_568, &var_2a0);
    clap_builder::builder::arg::Arg::new::hb449c7693a811bdf(&var_568, 
        "ownerpreserve-timestampsstripstr…");
    clap_builder::builder::arg::Arg::short::hf6c650c84c3048c7(&var_ab0, &var_568, 0x6f);
    clap_builder::builder::arg::Arg::long::h58058337003763d4(&var_568, &var_ab0, 
        "ownerpreserve-timestampsstripstr…");
    clap_builder::builder::arg::Arg::help::h8e5a9a796f2f652d(&var_ab0, &var_568, 
        "set ownership (super-user only)O…", 0x1f);
    clap_builder::builder::arg::Arg::value_name::h85015b029d6c4cc6(&var_568, &var_ab0, 
        "OWNERapply access/modification t…");
    clap_builder::builder::arg::Arg::value_hint::h441a06941cda7fe1(&var_ab0, &var_568, 9);
    clap_builder::builder::command::Command::arg::h0ec9153d3af233ec(&var_568, &var_830, &var_ab0);
    clap_builder::builder::arg::Arg::new::hb449c7693a811bdf(&var_830, 
        "preserve-timestampsstripstrip-pr…");
    clap_builder::builder::arg::Arg::short::hf6c650c84c3048c7(&var_ab0, &var_830, 0x70);
    clap_builder::builder::arg::Arg::long::h58058337003763d4(&var_830, &var_ab0, 
        "preserve-timestampsstripstrip-pr…");
    clap_builder::builder::arg::Arg::help::h8e5a9a796f2f652d(&var_ab0, &var_830, 
        "apply access/modification times …", 0x52);
    clap_builder::builder::arg::Arg::action::hf82c138f6e0125eb(&var_2a0, &var_ab0, 2);
    clap_builder::builder::command::Command::arg::h0ec9153d3af233ec(&var_830, &var_568, &var_2a0);
    clap_builder::builder::arg::Arg::new::hb449c7693a811bdf(&var_568, 
        "stripstrip-programno-target-dire…");
    clap_builder::builder::arg::Arg::short::hf6c650c84c3048c7(&var_ab0, &var_568, 0x73);
    clap_builder::builder::arg::Arg::long::h58058337003763d4(&var_568, &var_ab0, 
        "stripstrip-programno-target-dire…");
    clap_builder::builder::arg::Arg::help::h8e5a9a796f2f652d(&var_ab0, &var_568, 
        "strip symbol tables (no action W…", 0x27);
    clap_builder::builder::arg::Arg::action::hf82c138f6e0125eb(&var_2a0, &var_ab0, 2);
    clap_builder::builder::command::Command::arg::h0ec9153d3af233ec(&var_568, &var_830, &var_2a0);
    clap_builder::builder::arg::Arg::new::hb449c7693a811bdf(&var_830, 
        "strip-programno-target-directory…");
    clap_builder::builder::arg::Arg::long::h58058337003763d4(&var_ab0, &var_830, 
        "strip-programno-target-directory…");
    clap_builder::builder::arg::Arg::help::h8e5a9a796f2f652d(&var_830, &var_ab0, 
        "program used to strip binaries (…", 0x32);
    clap_builder::builder::arg::Arg::value_name::h85015b029d6c4cc6(&var_ab0, &var_830, 
        "PROGRAMmove all SOURCE arguments…");
    clap_builder::builder::arg::Arg::value_hint::h441a06941cda7fe1(&var_2a0, &var_ab0, 6);
    clap_builder::builder::command::Command::arg::h0ec9153d3af233ec(&var_830, &var_568, &var_2a0);
    uucore::features::backup_control::arguments::suffix::h87e85728d219a77f(&var_ab0);
    clap_builder::builder::command::Command::arg::h0ec9153d3af233ec(&var_568, &var_830, &var_ab0);
    clap_builder::builder::arg::Arg::new::hb449c7693a811bdf(&var_830, 
        "target-directoryfailed to chmod …");
    clap_builder::builder::arg::Arg::short::hf6c650c84c3048c7(&var_ab0, &var_830, 0x74);
    clap_builder::builder::arg::Arg::long::h58058337003763d4(&var_830, &var_ab0, 
        "target-directoryfailed to chmod …");
    clap_builder::builder::arg::Arg::help::h8e5a9a796f2f652d(&var_ab0, &var_830, 
        "move all SOURCE arguments into D…", 0x28);
    clap_builder::builder::arg::Arg::value_name::h85015b029d6c4cc6(&var_830, &var_ab0, 
        "DIRECTORYtreat DEST as a normal …");
    clap_builder::builder::arg::Arg::value_hint::h441a06941cda7fe1(&var_ab0, &var_830, 4);
    clap_builder::builder::command::Command::arg::h0ec9153d3af233ec(&var_830, &var_568, &var_ab0);
    clap_builder::builder::arg::Arg::new::hb449c7693a811bdf(&var_568, 
        "no-target-directoryverbosefiles(…");
    clap_builder::builder::arg::Arg::short::hf6c650c84c3048c7(&var_ab0, &var_568, 0x54);
    clap_builder::builder::arg::Arg::long::h58058337003763d4(&var_568, &var_ab0, 
        "no-target-directoryverbosefiles(…");
    clap_builder::builder::arg::Arg::help::h8e5a9a796f2f652d(&var_ab0, &var_568, 
        "treat DEST as a normal fileexpla…", 0x1b);
    clap_builder::builder::arg::Arg::action::hf82c138f6e0125eb(&var_2a0, &var_ab0, 2);
    clap_builder::builder::command::Command::arg::h0ec9153d3af233ec(&var_568, &var_830, &var_2a0);
    clap_builder::builder::arg::Arg::new::hb449c7693a811bdf(&var_830, 
        "verbosefiles(uutils coreutils) 0…");
    clap_builder::builder::arg::Arg::short::hf6c650c84c3048c7(&var_ab0, &var_830, 0x76);
    clap_builder::builder::arg::Arg::long::h58058337003763d4(&var_830, &var_ab0, 
        "verbosefiles(uutils coreutils) 0…");
    clap_builder::builder::arg::Arg::help::h8e5a9a796f2f652d(&var_ab0, &var_830, 
        "explain what is being done(unimp…", 0x1a);
    clap_builder::builder::arg::Arg::action::hf82c138f6e0125eb(&var_2a0, &var_ab0, 2);
    clap_builder::builder::command::Command::arg::h0ec9153d3af233ec(&var_830, &var_568, &var_2a0);
    clap_builder::builder::arg::Arg::new::hb449c7693a811bdf(&var_568, "preserve-context");
    clap_builder::builder::arg::Arg::short::hf6c650c84c3048c7(&var_ab0, &var_568, 0x50);
    clap_builder::builder::arg::Arg::long::h58058337003763d4(&var_568, &var_ab0, 
        "preserve-context");
    clap_builder::builder::arg::Arg::help::h8e5a9a796f2f652d(&var_ab0, &var_568, 
        "(unimplemented) preserve securit…", 0x29);
    clap_builder::builder::arg::Arg::action::hf82c138f6e0125eb(&var_2a0, &var_ab0, 2);
    clap_builder::builder::command::Command::arg::h0ec9153d3af233ec(&var_568, &var_830, &var_2a0);
    clap_builder::builder::arg::Arg::new::hb449c7693a811bdf(&var_830, 
        "contextinnerUUsageErrormessagech…");
    clap_builder::builder::arg::Arg::short::hf6c650c84c3048c7(&var_ab0, &var_830, 0x5a);
    clap_builder::builder::arg::Arg::long::h58058337003763d4(&var_830, &var_ab0, 
        "contextinnerUUsageErrormessagech…");
    clap_builder::builder::arg::Arg::help::h8e5a9a796f2f652d(&var_ab0, &var_830, 
        "(unimplemented) set security con…", 0x3d);
    clap_builder::builder::arg::Arg::value_name::h85015b029d6c4cc6(&var_830, &var_ab0, 
        "CONTEXT--preserve-context, -P--c…");
    clap_builder::builder::arg::Arg::action::hf82c138f6e0125eb(&var_ab0, &var_830, 2);
    clap_builder::builder::command::Command::arg::h0ec9153d3af233ec(&var_830, &var_568, &var_ab0);
    clap_builder::builder::arg::Arg::new::hb449c7693a811bdf(&var_568, 
        "files(uutils coreutils) 0.0.30Co…");
    clap_builder::builder::arg::Arg::action::hf82c138f6e0125eb(&var_ab0, &var_568, 1);
    clap_builder::builder::arg::Arg::num_args::h038d881881927931(&var_568, &var_ab0);
    clap_builder::builder::arg::Arg::value_hint::h441a06941cda7fe1(&var_ab0, &var_568, 2);
    clap_builder::builder::command::Command::arg::h0ec9153d3af233ec(arg1, &var_830, &var_ab0);
    arg1
}
