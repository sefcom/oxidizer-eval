
  int64_t uu_cat::uu_app::he6c315476365ffbf(int64_t arg1)

{
    void var_568;
    clap_builder::builder::command::Command::new::h01e07be562f29f1c(&var_568, 
        uucore::util_name::h074417a1e6395129());
    void var_830;
    clap_builder::builder::command::Command::version::h0d0c00a8c1ced462(&var_830, &var_568);
    void var_ab0;
    uucore::format_usage::he053403a896311ed(&var_ab0, "{} [OPTION]... [FILE]...Concaten…", 0x18);
    clap_builder::builder::command::Command::override_usage::h4108e64acd43104a(&var_568, &var_830, 
        &var_ab0);
    clap_builder::builder::command::Command::about::hd1bcd9eb03e221a7(&var_830, &var_568);
    memcpy(&var_568, &var_830, 0x2bc);
    int64_t var_574;
    int64_t var_2ac = 0x8800000088 | var_574;
    int32_t var_56c;
    int32_t var_2a4 = var_56c;
    clap_builder::builder::arg::Arg::new::h91463a6fc3f62860(&var_830, 
        "filei128 as dyn ERANGEEDEADLKENA…");
    memcpy(&var_ab0, &var_830, 0x278);
    int32_t var_5b8;
    int32_t var_838 = var_5b8 | 4;
    int32_t var_5b4;
    int32_t var_834 = var_5b4;
    clap_builder::builder::arg::Arg::action::hbb9a0bf20dd31313(&var_830, &var_ab0, 1);
    clap_builder::builder::arg::Arg::value_hint::h053e94f0fa77bdee(&var_ab0, &var_830);
    clap_builder::builder::command::Command::arg::h72a90c0b70812c56(&var_830, &var_568, &var_ab0);
    clap_builder::builder::arg::Arg::new::h91463a6fc3f62860(&var_568, "show-all");
    clap_builder::builder::arg::Arg::short::hdcafac8d0cea540d(&var_ab0, &var_568, 0x41);
    clap_builder::builder::arg::Arg::long::h78dc98ba918450b7(&var_568, &var_ab0, "show-all");
    clap_builder::builder::arg::Arg::help::h9ac7e7fe3dd3ef8c(&var_ab0, &var_568, 
        "equivalent to -vETnumber nonempt…", 0x12);
    void var_2a0;
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
    return arg1;
}
