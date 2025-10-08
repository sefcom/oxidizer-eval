
  fn uu_cat::uu_app::he6c315476365ffbf(arg1: i64) -> i64

{
    let mut var_568: ();
    clap_builder::builder::command::Command::new::h01e07be562f29f1c(&var_568, 
        uucore::util_name::h074417a1e6395129());
    let mut var_830: ();
    clap_builder::builder::command::Command::version::h0d0c00a8c1ced462(&var_830, &var_568);
    let mut var_ab0: ();
    uucore::format_usage::he053403a896311ed(&var_ab0, "{} [OPTION]... [FILE]...Concaten…", 0x18);
    clap_builder::builder::command::Command::override_usage::h4108e64acd43104a(&var_568, &var_830, 
        &var_ab0);
    clap_builder::builder::command::Command::about::hd1bcd9eb03e221a7(&var_830, &var_568);
    memcpy(&var_568, &var_830, 0x2bc);
    let var_574: i64;
    let var_2ac: i64 = 0x8800000088 | var_574;
    let var_56c: i32;
    let var_2a4: i32 = var_56c;
    clap_builder::builder::arg::Arg::new::h91463a6fc3f62860(&var_830, 
        "filei128 as dyn ERANGEEDEADLKENA…");
    memcpy(&var_ab0, &var_830, 0x278);
    let var_5b8: i32;
    let var_838: i32 = var_5b8 | 4;
    let var_5b4: i32;
    let var_834: i32 = var_5b4;
    clap_builder::builder::arg::Arg::action::hbb9a0bf20dd31313(&var_830, &var_ab0, 1);
    clap_builder::builder::arg::Arg::value_hint::h053e94f0fa77bdee(&var_ab0, &var_830);
    clap_builder::builder::command::Command::arg::h72a90c0b70812c56(&var_830, &var_568, &var_ab0);
    clap_builder::builder::arg::Arg::new::h91463a6fc3f62860(&var_568, "show-all");
    clap_builder::builder::arg::Arg::short::hdcafac8d0cea540d(&var_ab0, &var_568, 0x41);
    clap_builder::builder::arg::Arg::long::h78dc98ba918450b7(&var_568, &var_ab0, "show-all");
    clap_builder::builder::arg::Arg::help::h9ac7e7fe3dd3ef8c(&var_ab0, &var_568, 
        "equivalent to -vETnumber nonempt…", 0x12);
    let mut var_2a0: ();
    clap_builder::builder::arg::Arg::action::hbb9a0bf20dd31313(&var_2a0, &var_ab0, 2);
    clap_builder::builder::command::Command::arg::h72a90c0b70812c56(&var_568, &var_830, &var_2a0);
    clap_builder::builder::arg::Arg::new::h91463a6fc3f62860(&var_830, 
        "number-nonblankeshow-endsnumbers…");
    clap_builder::builder::arg::Arg::short::hdcafac8d0cea540d(&var_ab0, &var_830, 0x62);
    clap_builder::builder::arg::Arg::long::h78dc98ba918450b7(&var_830, &var_ab0, 
        "number-nonblankeshow-endsnumbers…");
    clap_builder::builder::arg::Arg::help::h9ac7e7fe3dd3ef8c(&var_ab0, &var_830, 
        "number nonempty output lines, ov…", 0x2a);
    clap_builder::builder::arg::Arg::action::hbb9a0bf20dd31313(&var_2a0, &var_ab0, 2);
    clap_builder::builder::command::Command::arg::h72a90c0b70812c56(&var_830, &var_568, &var_2a0);
    clap_builder::builder::arg::Arg::new::h91463a6fc3f62860(&var_568, 
        "eshow-endsnumbersqueeze-blanktsh…");
    clap_builder::builder::arg::Arg::short::hdcafac8d0cea540d(&var_ab0, &var_568, 0x65);
    clap_builder::builder::arg::Arg::help::h9ac7e7fe3dd3ef8c(&var_568, &var_ab0, 
        "equivalent to -vEdisplay $ at en…", 0x11);
    clap_builder::builder::arg::Arg::action::hbb9a0bf20dd31313(&var_ab0, &var_568, 2);
    clap_builder::builder::command::Command::arg::h72a90c0b70812c56(&var_568, &var_830, &var_ab0);
    clap_builder::builder::arg::Arg::new::h91463a6fc3f62860(&var_830, 
        "show-endsnumbersqueeze-blanktsho…");
    clap_builder::builder::arg::Arg::short::hdcafac8d0cea540d(&var_ab0, &var_830, 0x45);
    clap_builder::builder::arg::Arg::long::h78dc98ba918450b7(&var_830, &var_ab0, 
        "show-endsnumbersqueeze-blanktsho…");
    clap_builder::builder::arg::Arg::help::h9ac7e7fe3dd3ef8c(&var_ab0, &var_830, 
        "display $ at end of each linenum…", 0x1d);
    clap_builder::builder::arg::Arg::action::hbb9a0bf20dd31313(&var_2a0, &var_ab0, 2);
    clap_builder::builder::command::Command::arg::h72a90c0b70812c56(&var_830, &var_568, &var_2a0);
    clap_builder::builder::arg::Arg::new::h91463a6fc3f62860(&var_568, 
        "numbersqueeze-blanktshow-tabsign…");
    clap_builder::builder::arg::Arg::short::hdcafac8d0cea540d(&var_ab0, &var_568, 0x6e);
    clap_builder::builder::arg::Arg::long::h78dc98ba918450b7(&var_568, &var_ab0, 
        "numbersqueeze-blanktshow-tabsign…");
    clap_builder::builder::arg::Arg::help::h9ac7e7fe3dd3ef8c(&var_ab0, &var_568, 
        "number all output linessuppress …", 0x17);
    clap_builder::builder::arg::Arg::action::hbb9a0bf20dd31313(&var_2a0, &var_ab0, 2);
    clap_builder::builder::command::Command::arg::h72a90c0b70812c56(&var_568, &var_830, &var_2a0);
    clap_builder::builder::arg::Arg::new::h91463a6fc3f62860(&var_830, 
        "squeeze-blanktshow-tabsignored-u…");
    clap_builder::builder::arg::Arg::short::hdcafac8d0cea540d(&var_ab0, &var_830, 0x73);
    clap_builder::builder::arg::Arg::long::h78dc98ba918450b7(&var_830, &var_ab0, 
        "squeeze-blanktshow-tabsignored-u…");
    clap_builder::builder::arg::Arg::help::h9ac7e7fe3dd3ef8c(&var_ab0, &var_830, 
        "suppress repeated empty output l…", 0x24);
    clap_builder::builder::arg::Arg::action::hbb9a0bf20dd31313(&var_2a0, &var_ab0, 2);
    clap_builder::builder::command::Command::arg::h72a90c0b70812c56(&var_830, &var_568, &var_2a0);
    clap_builder::builder::arg::Arg::new::h91463a6fc3f62860(&var_568, 
        "tshow-tabsignored-u(uutils coreu…");
    clap_builder::builder::arg::Arg::short::hdcafac8d0cea540d(&var_ab0, &var_568, 0x74);
    clap_builder::builder::arg::Arg::help::h9ac7e7fe3dd3ef8c(&var_568, &var_ab0, 
        "equivalent to -vTdisplay TAB cha…", 0x11);
    clap_builder::builder::arg::Arg::action::hbb9a0bf20dd31313(&var_ab0, &var_568, 2);
    clap_builder::builder::command::Command::arg::h72a90c0b70812c56(&var_568, &var_830, &var_ab0);
    clap_builder::builder::arg::Arg::new::h91463a6fc3f62860(&var_830, 
        "show-tabsignored-u(uutils coreut…");
    clap_builder::builder::arg::Arg::short::hdcafac8d0cea540d(&var_ab0, &var_830, 0x54);
    clap_builder::builder::arg::Arg::long::h78dc98ba918450b7(&var_830, &var_ab0, 
        "show-tabsignored-u(uutils coreut…");
    clap_builder::builder::arg::Arg::help::h9ac7e7fe3dd3ef8c(&var_ab0, &var_830, 
        "display TAB characters at ^Iuse …", 0x1c);
    clap_builder::builder::arg::Arg::action::hbb9a0bf20dd31313(&var_2a0, &var_ab0, 2);
    clap_builder::builder::command::Command::arg::h72a90c0b70812c56(&var_830, &var_568, &var_2a0);
    clap_builder::builder::arg::Arg::new::h91463a6fc3f62860(&var_568, "show-nonprinting");
    clap_builder::builder::arg::Arg::short::hdcafac8d0cea540d(&var_ab0, &var_568, 0x76);
    clap_builder::builder::arg::Arg::long::h78dc98ba918450b7(&var_568, &var_ab0, 
        "show-nonprinting");
    clap_builder::builder::arg::Arg::help::h9ac7e7fe3dd3ef8c(&var_ab0, &var_568, 
        "use ^ and M- notation, except fo…", 0x36);
    clap_builder::builder::arg::Arg::action::hbb9a0bf20dd31313(&var_2a0, &var_ab0, 2);
    clap_builder::builder::command::Command::arg::h72a90c0b70812c56(&var_568, &var_830, &var_2a0);
    clap_builder::builder::arg::Arg::new::h91463a6fc3f62860(&var_830, 
        "ignored-u(uutils coreutils) 0.0.…");
    clap_builder::builder::arg::Arg::short::hdcafac8d0cea540d(&var_ab0, &var_830, 0x75);
    clap_builder::builder::arg::Arg::help::h9ac7e7fe3dd3ef8c(&var_830, &var_ab0, 
        "(ignored): \r\n$\n^M\t^I^?unknow…", 9);
    clap_builder::builder::arg::Arg::action::hbb9a0bf20dd31313(&var_ab0, &var_830, 2);
    clap_builder::builder::command::Command::arg::h72a90c0b70812c56(arg1, &var_568, &var_ab0);
    arg1
}
