
  int64_t uu_expr::uu_app::h86f9ff8623407d10(int64_t arg1)

{
    void var_830;
    clap_builder::builder::command::Command::new::hc0e5161aa5bd7d16(&var_830, 
        uucore::util_name::h074417a1e6395129());
    void var_568;
    clap_builder::builder::command::Command::version::h76a834f190c7e1ad(&var_568, &var_830);
    clap_builder::builder::command::Command::about::hced8d3e3fa52b3e6(&var_830, &var_568);
    void var_2a0;
    uucore::format_usage::he053403a896311ed(&var_2a0, "{} [EXPRESSION]\n{} [OPTIONS]Pri…", 0x1c);
    clap_builder::builder::command::Command::override_usage::h75aa238ea17948cf(&var_568, &var_830, 
        &var_2a0);
    clap_builder::builder::command::Command::after_help::h0b7723ae8346c24c(&var_830, &var_568);
    memcpy(&var_568, &var_830, 0x2bc);
    int64_t var_574;
    int64_t var_2ac = 0x28008000280080 | var_574;
    int32_t var_56c;
    int32_t var_2a4 = var_56c;
    clap_builder::builder::arg::Arg::new::h5bb66e70f2231dfd(&var_830, 
        "versionoutput version informatio…");
    clap_builder::builder::arg::Arg::long::hd0314e17453a4952(&var_2a0, &var_830, 
        "versionoutput version informatio…");
    clap_builder::builder::arg::Arg::help::h612f93627d21296f(&var_830, &var_2a0, 
        "output version information and e…", 0x23);
    clap_builder::builder::arg::Arg::action::h8696c1470f65d99d(&var_2a0, &var_830, 8);
    clap_builder::builder::command::Command::arg::h9331b8048d11d233(&var_830, &var_568, &var_2a0);
    clap_builder::builder::arg::Arg::new::h5bb66e70f2231dfd(&var_568, 
        "helpNoneshim\x1b[0mname    "`$\E…");
    clap_builder::builder::arg::Arg::long::hd0314e17453a4952(&var_2a0, &var_568, 
        "helpNoneshim\x1b[0mname    "`$\E…");
    clap_builder::builder::arg::Arg::help::h612f93627d21296f(&var_568, &var_2a0, 
        "display this help and exitexpres…", 0x1a);
    clap_builder::builder::arg::Arg::action::h8696c1470f65d99d(&var_2a0, &var_568, 5);
    clap_builder::builder::command::Command::arg::h9331b8048d11d233(&var_568, &var_830, &var_2a0);
    clap_builder::builder::arg::Arg::new::h5bb66e70f2231dfd(&var_830, 
        "expressionInvalid content of \{\…");
    clap_builder::builder::arg::Arg::action::h8696c1470f65d99d(&var_2a0, &var_830, 1);
    memcpy(&var_830, &var_2a0, 0x278);
    int32_t var_28;
    int32_t var_5b8 = var_28 | 0x20;
    int32_t var_24;
    int32_t var_5b4 = var_24;
    clap_builder::builder::command::Command::arg::h9331b8048d11d233(arg1, &var_568, &var_830);
    return arg1;
}
