
  fn uu_cat::uu_app::h297ec10995593580(arg1: i64) -> i64

{
    let mut var_780: ();
    clap_builder::builder::command::Command::new::hb7751347de0bc77c(&var_780, 
        uucore::util_name::h60d842bf27b05e82());
    let mut var_a48: ();
    clap_builder::builder::command::Command::version::h62abd575415b3c83(&var_a48, &var_780, 
        "0.0.28{} [OPTION]... [FILE]...Co…");
    let mut var_4b8: ();
    uucore::format_usage::h76fcb2d15fbabc58(&var_4b8, "{} [OPTION]... [FILE]...Concaten…", 0x18);
    clap_builder::builder::command::Command::override_usage::h05aa70576fd37d7f(&var_780, &var_a48, 
        &var_4b8);
    clap_builder::builder::command::Command::about::h93fccad803b098fc(&var_a48, &var_780, 
        "Concatenate FILE(s), or standard…", 0x70);
    memcpy(&var_780, &var_a48, 0x2bc);
    let var_78c: i64;
    let var_4c4: i64 = 0x8800000088 | var_78c;
    let var_784: i32;
    let var_4bc: i32 = var_784;
    clap_builder::builder::arg::Arg::new::hb23b1cf0c4b89743(&var_a48, 
        "filei128 as dyn ERANGEEDEADLKENA…");
    memcpy(&var_4b8, &var_a48, 0x248);
    let var_800: i32;
    let var_270: i32 = var_800 | 4;
    let var_7fc: i32;
    let var_26c: i32 = var_7fc;
    clap_builder::builder::arg::Arg::action::h57f2e90371cbae81(&var_a48, &var_4b8, 1);
    clap_builder::builder::arg::Arg::value_hint::hf044cb3d24704047(&var_4b8, &var_a48, 3);
    clap_builder::builder::command::Command::arg::h191ca0900231d25c(&var_a48, &var_780, &var_4b8);
    clap_builder::builder::arg::Arg::new::hb23b1cf0c4b89743(&var_780, "show-a");
    clap_builder::builder::arg::Arg::short::ha8d1cf55182a47da(&var_4b8, &var_780, 0x41);
    clap_builder::builder::arg::Arg::long::ha5ab6f27da2dfdda(&var_780, &var_4b8, "show-a");
    clap_builder::builder::arg::Arg::help::h5a14ce4130ccf484(&var_4b8, &var_780, 
        "equivalent to -vETnumber nonempt…", 0x12);
    let mut var_268: ();
    clap_builder::builder::arg::Arg::action::h57f2e90371cbae81(&var_268, &var_4b8, 2);
    clap_builder::builder::command::Command::arg::h191ca0900231d25c(&var_780, &var_a48, &var_268);
    clap_builder::builder::arg::Arg::new::hb23b1cf0c4b89743(&var_a48, 
        "number-nonblankeshow-endsnumbers…");
    clap_builder::builder::arg::Arg::short::ha8d1cf55182a47da(&var_4b8, &var_a48, 0x62);
    clap_builder::builder::arg::Arg::long::ha5ab6f27da2dfdda(&var_a48, &var_4b8, 
        "number-nonblankeshow-endsnumbers…");
    clap_builder::builder::arg::Arg::help::h5a14ce4130ccf484(&var_4b8, &var_a48, 
        "number nonempty output lines, ov…", 0x2a);
    clap_builder::builder::arg::Arg::action::h57f2e90371cbae81(&var_268, &var_4b8, 2);
    clap_builder::builder::command::Command::arg::h191ca0900231d25c(&var_a48, &var_780, &var_268);
    clap_builder::builder::arg::Arg::new::hb23b1cf0c4b89743(&var_780, 
        "eshow-endsnumbersqueeze-blanktsh…");
    clap_builder::builder::arg::Arg::short::ha8d1cf55182a47da(&var_4b8, &var_780, 0x65);
    clap_builder::builder::arg::Arg::help::h5a14ce4130ccf484(&var_780, &var_4b8, 
        "equivalent to -vEdisplay $ at en…", 0x11);
    clap_builder::builder::arg::Arg::action::h57f2e90371cbae81(&var_4b8, &var_780, 2);
    clap_builder::builder::command::Command::arg::h191ca0900231d25c(&var_780, &var_a48, &var_4b8);
    clap_builder::builder::arg::Arg::new::hb23b1cf0c4b89743(&var_a48, 
        "show-endsnumbersqueeze-blanktsho…");
    clap_builder::builder::arg::Arg::short::ha8d1cf55182a47da(&var_4b8, &var_a48, 0x45);
    clap_builder::builder::arg::Arg::long::ha5ab6f27da2dfdda(&var_a48, &var_4b8, 
        "show-endsnumbersqueeze-blanktsho…");
    clap_builder::builder::arg::Arg::help::h5a14ce4130ccf484(&var_4b8, &var_a48, 
        "display $ at end of each linenum…", 0x1d);
    clap_builder::builder::arg::Arg::action::h57f2e90371cbae81(&var_268, &var_4b8, 2);
    clap_builder::builder::command::Command::arg::h191ca0900231d25c(&var_a48, &var_780, &var_268);
    clap_builder::builder::arg::Arg::new::hb23b1cf0c4b89743(&var_780, 
        "numbersqueeze-blanktshow-tabsign…");
    clap_builder::builder::arg::Arg::short::ha8d1cf55182a47da(&var_4b8, &var_780, 0x6e);
    clap_builder::builder::arg::Arg::long::ha5ab6f27da2dfdda(&var_780, &var_4b8, 
        "numbersqueeze-blanktshow-tabsign…");
    clap_builder::builder::arg::Arg::help::h5a14ce4130ccf484(&var_4b8, &var_780, 
        "number all output linessuppress …", 0x17);
    clap_builder::builder::arg::Arg::action::h57f2e90371cbae81(&var_268, &var_4b8, 2);
    clap_builder::builder::command::Command::arg::h191ca0900231d25c(&var_780, &var_a48, &var_268);
    clap_builder::builder::arg::Arg::new::hb23b1cf0c4b89743(&var_a48, 
        "squeeze-blanktshow-tabsignored-u…");
    clap_builder::builder::arg::Arg::short::ha8d1cf55182a47da(&var_4b8, &var_a48, 0x73);
    clap_builder::builder::arg::Arg::long::ha5ab6f27da2dfdda(&var_a48, &var_4b8, 
        "squeeze-blanktshow-tabsignored-u…");
    clap_builder::builder::arg::Arg::help::h5a14ce4130ccf484(&var_4b8, &var_a48, 
        "suppress repeated empty output l…", 0x24);
    clap_builder::builder::arg::Arg::action::h57f2e90371cbae81(&var_268, &var_4b8, 2);
    clap_builder::builder::command::Command::arg::h191ca0900231d25c(&var_a48, &var_780, &var_268);
    clap_builder::builder::arg::Arg::new::hb23b1cf0c4b89743(&var_780, 
        "tshow-tabsignored-udescription()…");
    clap_builder::builder::arg::Arg::short::ha8d1cf55182a47da(&var_4b8, &var_780, 0x74);
    clap_builder::builder::arg::Arg::help::h5a14ce4130ccf484(&var_780, &var_4b8, 
        "equivalent to -vTdisplay TAB cha…", 0x11);
    clap_builder::builder::arg::Arg::action::h57f2e90371cbae81(&var_4b8, &var_780, 2);
    clap_builder::builder::command::Command::arg::h191ca0900231d25c(&var_780, &var_a48, &var_4b8);
    clap_builder::builder::arg::Arg::new::hb23b1cf0c4b89743(&var_a48, 
        "show-tabsignored-udescription() …");
    clap_builder::builder::arg::Arg::short::ha8d1cf55182a47da(&var_4b8, &var_a48, 0x54);
    clap_builder::builder::arg::Arg::long::ha5ab6f27da2dfdda(&var_a48, &var_4b8, 
        "show-tabsignored-udescription() …");
    clap_builder::builder::arg::Arg::help::h5a14ce4130ccf484(&var_4b8, &var_a48, 
        "display TAB characters at ^Iuse …", 0x1c);
    clap_builder::builder::arg::Arg::action::h57f2e90371cbae81(&var_268, &var_4b8, 2);
    clap_builder::builder::command::Command::arg::h191ca0900231d25c(&var_a48, &var_780, &var_268);
    clap_builder::builder::arg::Arg::new::hb23b1cf0c4b89743(&var_780, 
        "show-nonprintingPossible values:…");
    clap_builder::builder::arg::Arg::short::ha8d1cf55182a47da(&var_4b8, &var_780, 0x76);
    clap_builder::builder::arg::Arg::long::ha5ab6f27da2dfdda(&var_780, &var_4b8, 
        "show-nonprintingPossible values:…");
    clap_builder::builder::arg::Arg::help::h5a14ce4130ccf484(&var_4b8, &var_780, 
        "use ^ and M- notation, except fo…", 0x36);
    clap_builder::builder::arg::Arg::action::h57f2e90371cbae81(&var_268, &var_4b8, 2);
    clap_builder::builder::command::Command::arg::h191ca0900231d25c(&var_780, &var_a48, &var_268);
    clap_builder::builder::arg::Arg::new::hb23b1cf0c4b89743(&var_a48, 
        "ignored-udescription() is deprec…");
    clap_builder::builder::arg::Arg::short::ha8d1cf55182a47da(&var_4b8, &var_a48, 0x75);
    clap_builder::builder::arg::Arg::help::h5a14ce4130ccf484(&var_a48, &var_4b8, 
        "(ignored): \r\n-src/uu/cat/src/c…", 9);
    clap_builder::builder::arg::Arg::action::h57f2e90371cbae81(&var_4b8, &var_a48, 2);
    clap_builder::builder::command::Command::arg::h191ca0900231d25c(arg1, &var_780, &var_4b8);
    arg1
}
