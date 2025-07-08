
  int64_t uu_shuf::uu_app::h710a705446bc3bb0(int64_t arg1)

{
    void var_7f8;
    clap_builder::builder::command::Command::new::h0bf11a27185a90ba(&var_7f8, 
        uucore::util_name::h60d842bf27b05e82());
    void var_530;
    clap_builder::builder::command::Command::about::hd597994d8cea349d(&var_530, &var_7f8, 
        "Shuffle the input by outputting …", 0xa5);
    clap_builder::builder::command::Command::version::habf91e8854255576(&var_7f8, &var_530, 
        "0.0.28treat each ARG as an input…");
    void var_a48;
    uucore::format_usage::h76fcb2d15fbabc58(&var_a48, "{} [OPTION]... [FILE]\n{} -e [OP…", 0x48);
    clap_builder::builder::command::Command::override_usage::h86fbf536ab62a2a8(&var_530, &var_7f8, 
        &var_a48);
    memcpy(&var_7f8, &var_530, 0x2bc);
    int64_t var_274;
    int64_t var_53c = 0x8000000080 | var_274;
    int32_t var_26c;
    int32_t var_534 = var_26c;
    clap_builder::builder::arg::Arg::new::hb55e6547f701c544(&var_530, 
        "echoERANGEEDEADLKENAMETOOLONGENO…");
    clap_builder::builder::arg::Arg::short::hc5895820c9001562(&var_a48, &var_530, 0x65);
    clap_builder::builder::arg::Arg::long::h4f4cbd0b31a73627(&var_530, &var_a48, 
        "echoERANGEEDEADLKENAMETOOLONGENO…");
    clap_builder::builder::arg::Arg::help::h60914f8564d33ae9(&var_a48, &var_530, 
        "treat each ARG as an input lineL…", 0x1f);
    clap_builder::builder::arg::Arg::action::haa75458d1b56b731(&var_530, &var_a48, 2);
    clap_builder::builder::arg::Arg::overrides_with::h5143f80bad1c105a(&var_a48, &var_530, 
        "echoERANGEEDEADLKENAMETOOLONGENO…");
    void var_268;
    clap_builder::builder::arg::Arg::conflicts_with::h6545cdf5d75a2560(&var_268, &var_a48, 
        "input-rangehead-countoutputrando…");
    clap_builder::builder::command::Command::arg::h1b9d832713c89b77(&var_530, &var_7f8, &var_268);
    clap_builder::builder::arg::Arg::new::hb55e6547f701c544(&var_7f8, 
        "input-rangehead-countoutputrando…");
    clap_builder::builder::arg::Arg::short::hc5895820c9001562(&var_a48, &var_7f8, 0x69);
    clap_builder::builder::arg::Arg::long::h4f4cbd0b31a73627(&var_7f8, &var_a48, 
        "input-rangehead-countoutputrando…");
    clap_builder::builder::arg::Arg::value_name::h07ba2a10b48e0628(&var_a48, &var_7f8, 
        "LO-HItreat each number LO throug…");
    clap_builder::builder::arg::Arg::help::h60914f8564d33ae9(&var_7f8, &var_a48, 
        "treat each number LO through HI …", 0x30);
    clap_builder::builder::arg::Arg::conflicts_with::h6545cdf5d75a2560(&var_a48, &var_7f8, 
        "file-or-argssrc/uu/shuf/src/shuf…");
    clap_builder::builder::command::Command::arg::h1b9d832713c89b77(&var_7f8, &var_530, &var_a48);
    clap_builder::builder::arg::Arg::new::hb55e6547f701c544(&var_530, 
        "head-countoutputrandom-sourcerep…");
    clap_builder::builder::arg::Arg::short::hc5895820c9001562(&var_a48, &var_530, 0x6e);
    clap_builder::builder::arg::Arg::long::h4f4cbd0b31a73627(&var_530, &var_a48, 
        "head-countoutputrandom-sourcerep…");
    clap_builder::builder::arg::Arg::value_name::h07ba2a10b48e0628(&var_a48, &var_530, 
        "COUNToutput at most COUNT linesw…");
    clap_builder::builder::arg::Arg::action::haa75458d1b56b731(&var_530, &var_a48, 1);
    clap_builder::builder::arg::Arg::help::h60914f8564d33ae9(&var_a48, &var_530, 
        "output at most COUNT lineswrite …", 0x1a);
    clap_builder::builder::command::Command::arg::h1b9d832713c89b77(&var_530, &var_7f8, &var_a48);
    clap_builder::builder::arg::Arg::new::hb55e6547f701c544(&var_7f8, 
        "outputrandom-sourcerepeatzero-te…");
    clap_builder::builder::arg::Arg::short::hc5895820c9001562(&var_a48, &var_7f8, 0x6f);
    clap_builder::builder::arg::Arg::long::h4f4cbd0b31a73627(&var_7f8, &var_a48, 
        "outputrandom-sourcerepeatzero-te…");
    clap_builder::builder::arg::Arg::value_name::h07ba2a10b48e0628(&var_a48, &var_7f8, 
        "FILE -> \x1b[2mAnsi -- \x1b[8mhe…");
    clap_builder::builder::arg::Arg::help::h60914f8564d33ae9(&var_7f8, &var_a48, 
        "write result to FILE instead of …", 0x2f);
    clap_builder::builder::arg::Arg::value_hint::h546644f1bcd1fd0e(&var_a48, &var_7f8, 3);
    clap_builder::builder::command::Command::arg::h1b9d832713c89b77(&var_7f8, &var_530, &var_a48);
    clap_builder::builder::arg::Arg::new::hb55e6547f701c544(&var_530, 
        "random-sourcerepeatzero-terminat…");
    clap_builder::builder::arg::Arg::long::h4f4cbd0b31a73627(&var_a48, &var_530, 
        "random-sourcerepeatzero-terminat…");
    clap_builder::builder::arg::Arg::value_name::h07ba2a10b48e0628(&var_530, &var_a48, 
        "FILE -> \x1b[2mAnsi -- \x1b[8mhe…");
    clap_builder::builder::arg::Arg::help::h60914f8564d33ae9(&var_a48, &var_530, 
        "get random bytes from FILEoutput…", 0x1a);
    clap_builder::builder::arg::Arg::value_hint::h546644f1bcd1fd0e(&var_268, &var_a48, 3);
    clap_builder::builder::command::Command::arg::h1b9d832713c89b77(&var_530, &var_7f8, &var_268);
    clap_builder::builder::arg::Arg::new::hb55e6547f701c544(&var_7f8, 
        "repeatzero-terminatedfile-or-arg…");
    clap_builder::builder::arg::Arg::short::hc5895820c9001562(&var_a48, &var_7f8, 0x72);
    clap_builder::builder::arg::Arg::long::h4f4cbd0b31a73627(&var_7f8, &var_a48, 
        "repeatzero-terminatedfile-or-arg…");
    clap_builder::builder::arg::Arg::help::h60914f8564d33ae9(&var_a48, &var_7f8, 
        "output lines can be repeatedline…", 0x1c);
    clap_builder::builder::arg::Arg::action::haa75458d1b56b731(&var_7f8, &var_a48, 2);
    clap_builder::builder::arg::Arg::overrides_with::h5143f80bad1c105a(&var_a48, &var_7f8, 
        "repeatzero-terminatedfile-or-arg…");
    clap_builder::builder::command::Command::arg::h1b9d832713c89b77(&var_7f8, &var_530, &var_a48);
    clap_builder::builder::arg::Arg::new::hb55e6547f701c544(&var_530, 
        "zero-terminatedfile-or-argssrc/u…");
    clap_builder::builder::arg::Arg::short::hc5895820c9001562(&var_a48, &var_530, 0x7a);
    clap_builder::builder::arg::Arg::long::h4f4cbd0b31a73627(&var_530, &var_a48, 
        "zero-terminatedfile-or-argssrc/u…");
    clap_builder::builder::arg::Arg::help::h60914f8564d33ae9(&var_a48, &var_530, 
        "line delimiter is NUL, not newli…", 0x22);
    clap_builder::builder::arg::Arg::action::haa75458d1b56b731(&var_530, &var_a48, 2);
    clap_builder::builder::arg::Arg::overrides_with::h5143f80bad1c105a(&var_a48, &var_530, 
        "zero-terminatedfile-or-argssrc/u…");
    clap_builder::builder::command::Command::arg::h1b9d832713c89b77(&var_530, &var_7f8, &var_a48);
    clap_builder::builder::arg::Arg::new::hb55e6547f701c544(&var_7f8, 
        "file-or-argssrc/uu/shuf/src/shuf…");
    clap_builder::builder::arg::Arg::action::haa75458d1b56b731(&var_a48, &var_7f8, 1);
    clap_builder::builder::arg::Arg::value_hint::h546644f1bcd1fd0e(&var_7f8, &var_a48, 3);
    clap_builder::builder::command::Command::arg::h1b9d832713c89b77(arg1, &var_530, &var_7f8);
    return arg1;
}
