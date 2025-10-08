
  int64_t uu_shuf::uu_app::h51a53df890e82932(int64_t arg1)

{
    void var_830;
    clap_builder::builder::command::Command::new::he525f2d16f7c592c(&var_830, 
        uucore::util_name::h074417a1e6395129());
    void var_568;
    clap_builder::builder::command::Command::about::he9dd109632940d36(&var_568, &var_830);
    clap_builder::builder::command::Command::version::h193152c0c6a36d08(&var_830, &var_568);
    void var_ab0;
    uucore::format_usage::he053403a896311ed(&var_ab0, "{} [OPTION]... [FILE]\n{} -e [OP…", 0x48);
    clap_builder::builder::command::Command::override_usage::hafa2d2fdfc5b2830(&var_568, &var_830, 
        &var_ab0);
    memcpy(&var_830, &var_568, 0x2bc);
    int64_t var_2ac;
    int64_t var_574 = 0x8000000080 | var_2ac;
    int32_t var_2a4;
    int32_t var_56c = var_2a4;
    clap_builder::builder::arg::Arg::new::h41ac3d7ddd8a32cd(&var_568, 
        "echoi128 as dyn ERANGEEDEADLKENA…");
    clap_builder::builder::arg::Arg::short::h20f82e4ce3213d68(&var_ab0, &var_568, 0x65);
    clap_builder::builder::arg::Arg::long::h6c038a8193b70b66(&var_568, &var_ab0, 
        "echoi128 as dyn ERANGEEDEADLKENA…");
    clap_builder::builder::arg::Arg::help::h89c7b37e938ef0ae(&var_ab0, &var_568, 
        "treat each ARG as an input lineL…", 0x1f);
    clap_builder::builder::arg::Arg::action::hffb57268b65c9d61(&var_568, &var_ab0, 2);
    clap_builder::builder::arg::Arg::overrides_with::hfca4cf617092ebb9(&var_ab0, &var_568, 
        "echoi128 as dyn ERANGEEDEADLKENA…");
    int64_t var_2a0;
    clap_builder::builder::arg::Arg::conflicts_with::h4e216dbb8610b680(&var_2a0, &var_ab0, 
        "input-rangehead-countoutputrando…");
    clap_builder::builder::command::Command::arg::hbddfebb704553839(&var_568, &var_830, &var_2a0);
    clap_builder::builder::arg::Arg::new::h41ac3d7ddd8a32cd(&var_830, 
        "input-rangehead-countoutputrando…");
    clap_builder::builder::arg::Arg::short::h20f82e4ce3213d68(&var_ab0, &var_830, 0x69);
    clap_builder::builder::arg::Arg::long::h6c038a8193b70b66(&var_830, &var_ab0, 
        "input-rangehead-countoutputrando…");
    clap_builder::builder::arg::Arg::value_name::h8888e4bb70a48763(&var_ab0, &var_830, 
        "LO-HItreat each number LO throug…");
    clap_builder::builder::arg::Arg::help::h89c7b37e938ef0ae(&var_830, &var_ab0, 
        "treat each number LO through HI …", 0x30);
    clap_builder::builder::arg::Arg::value_parser::h91a7f4c87881affd(&var_ab0, &var_830);
    clap_builder::builder::arg::Arg::conflicts_with::h4e216dbb8610b680(&var_2a0, &var_ab0, 
        "file-or-args(uutils coreutils) 0…");
    clap_builder::builder::command::Command::arg::hbddfebb704553839(&var_830, &var_568, &var_2a0);
    clap_builder::builder::arg::Arg::new::h41ac3d7ddd8a32cd(&var_568, 
        "head-countoutputrandom-sourcerep…");
    clap_builder::builder::arg::Arg::short::h20f82e4ce3213d68(&var_ab0, &var_568, 0x6e);
    clap_builder::builder::arg::Arg::long::h6c038a8193b70b66(&var_568, &var_ab0, 
        "head-countoutputrandom-sourcerep…");
    clap_builder::builder::arg::Arg::value_name::h8888e4bb70a48763(&var_ab0, &var_568, 
        "COUNToutput at most COUNT linesw…");
    clap_builder::builder::arg::Arg::action::hffb57268b65c9d61(&var_568, &var_ab0, 1);
    clap_builder::builder::arg::Arg::help::h89c7b37e938ef0ae(&var_ab0, &var_568, 
        "output at most COUNT lineswrite …", 0x1a);
    clap_builder::builder::arg::Arg::value_parser::h0363fe67c242e18f(&var_2a0, &var_ab0);
    clap_builder::builder::command::Command::arg::hbddfebb704553839(&var_568, &var_830, &var_2a0);
    clap_builder::builder::arg::Arg::new::h41ac3d7ddd8a32cd(&var_830, 
        "outputrandom-sourcerepeatzero-te…");
    clap_builder::builder::arg::Arg::short::h20f82e4ce3213d68(&var_ab0, &var_830, 0x6f);
    clap_builder::builder::arg::Arg::long::h6c038a8193b70b66(&var_830, &var_ab0, 
        "outputrandom-sourcerepeatzero-te…");
    clap_builder::builder::arg::Arg::value_name::h8888e4bb70a48763(&var_ab0, &var_830, 
        "FILEchar -> \x1b[2mAnsi -- \x1b[…");
    clap_builder::builder::arg::Arg::help::h89c7b37e938ef0ae(&var_830, &var_ab0, 
        "write result to FILE instead of …", 0x2f);
    int64_t var_ac8 = 3;
    clap_builder::builder::arg::Arg::value_parser::h01eabd9e29e73a60(&var_ab0, &var_830, &var_ac8);
    clap_builder::builder::arg::Arg::value_hint::h0a5cef2bf431098a(&var_2a0, &var_ab0);
    clap_builder::builder::command::Command::arg::hbddfebb704553839(&var_830, &var_568, &var_2a0);
    clap_builder::builder::arg::Arg::new::h41ac3d7ddd8a32cd(&var_568, 
        "random-sourcerepeatzero-terminat…");
    clap_builder::builder::arg::Arg::long::h6c038a8193b70b66(&var_ab0, &var_568, 
        "random-sourcerepeatzero-terminat…");
    clap_builder::builder::arg::Arg::value_name::h8888e4bb70a48763(&var_568, &var_ab0, 
        "FILEchar -> \x1b[2mAnsi -- \x1b[…");
    clap_builder::builder::arg::Arg::help::h89c7b37e938ef0ae(&var_ab0, &var_568, 
        "get random bytes from FILEoutput…", 0x1a);
    clap_builder::builder::arg::Arg::value_parser::h01eabd9e29e73a60(&var_568, &var_ab0, &var_ac8);
    clap_builder::builder::arg::Arg::value_hint::h0a5cef2bf431098a(&var_ab0, &var_568);
    clap_builder::builder::command::Command::arg::hbddfebb704553839(&var_568, &var_830, &var_ab0);
    clap_builder::builder::arg::Arg::new::h41ac3d7ddd8a32cd(&var_830, 
        "repeatzero-terminatedfile-or-arg…");
    clap_builder::builder::arg::Arg::short::h20f82e4ce3213d68(&var_ab0, &var_830, 0x72);
    clap_builder::builder::arg::Arg::long::h6c038a8193b70b66(&var_830, &var_ab0, 
        "repeatzero-terminatedfile-or-arg…");
    clap_builder::builder::arg::Arg::help::h89c7b37e938ef0ae(&var_ab0, &var_830, 
        "output lines can be repeatedline…", 0x1c);
    clap_builder::builder::arg::Arg::action::hffb57268b65c9d61(&var_830, &var_ab0, 2);
    clap_builder::builder::arg::Arg::overrides_with::hfca4cf617092ebb9(&var_ab0, &var_830, 
        "repeatzero-terminatedfile-or-arg…");
    clap_builder::builder::command::Command::arg::hbddfebb704553839(&var_830, &var_568, &var_ab0);
    clap_builder::builder::arg::Arg::new::h41ac3d7ddd8a32cd(&var_568, 
        "zero-terminatedfile-or-args(uuti…");
    clap_builder::builder::arg::Arg::short::h20f82e4ce3213d68(&var_ab0, &var_568, 0x7a);
    clap_builder::builder::arg::Arg::long::h6c038a8193b70b66(&var_568, &var_ab0, 
        "zero-terminatedfile-or-args(uuti…");
    clap_builder::builder::arg::Arg::help::h89c7b37e938ef0ae(&var_ab0, &var_568, 
        "line delimiter is NUL, not newli…", 0x22);
    clap_builder::builder::arg::Arg::action::hffb57268b65c9d61(&var_568, &var_ab0, 2);
    clap_builder::builder::arg::Arg::overrides_with::hfca4cf617092ebb9(&var_ab0, &var_568, 
        "zero-terminatedfile-or-args(uuti…");
    clap_builder::builder::command::Command::arg::hbddfebb704553839(&var_568, &var_830, &var_ab0);
    clap_builder::builder::arg::Arg::new::h41ac3d7ddd8a32cd(&var_830, 
        "file-or-args(uutils coreutils) 0…");
    clap_builder::builder::arg::Arg::action::hffb57268b65c9d61(&var_ab0, &var_830, 1);
    var_2a0 = 2;
    clap_builder::builder::arg::Arg::value_parser::h01eabd9e29e73a60(&var_830, &var_ab0, &var_2a0);
    clap_builder::builder::arg::Arg::value_hint::h0a5cef2bf431098a(&var_ab0, &var_830);
    clap_builder::builder::command::Command::arg::hbddfebb704553839(arg1, &var_568, &var_ab0);
    return arg1;
}
