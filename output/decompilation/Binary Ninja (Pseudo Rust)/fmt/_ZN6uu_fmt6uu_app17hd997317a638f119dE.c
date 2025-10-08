
  fn uu_fmt::uu_app::hd997317a638f119d(arg1: i64) -> i64

{
    let mut var_830: ();
    clap_builder::builder::command::Command::new::hbd1be3be1e6c5687(&var_830, 
        uucore::util_name::h074417a1e6395129());
    let mut var_568: ();
    clap_builder::builder::command::Command::version::hbd4aa12e611aeca1(&var_568, &var_830);
    clap_builder::builder::command::Command::about::h8664dc7e42c115cd(&var_830, &var_568);
    let mut var_ab0: ();
    uucore::format_usage::he053403a896311ed(&var_ab0, "{} [-WIDTH] [OPTION]... [FILE]..…", 0x21);
    clap_builder::builder::command::Command::override_usage::h7e27084a055fa1d4(&var_568, &var_830, 
        &var_ab0);
    memcpy(&var_830, &var_568, 0x2bc);
    let var_2ac: i64;
    let var_574: i64 = 0x8800000088 | var_2ac;
    let var_2a4: i32;
    let var_56c: i32 = var_2a4;
    clap_builder::builder::arg::Arg::new::h58e90980ac696a02(&var_568, 
        "crown-marginuniform-spacingquick…");
    clap_builder::builder::arg::Arg::short::ha5095fdddbfba465(&var_ab0, &var_568, 0x63);
    clap_builder::builder::arg::Arg::long::he2253374dd610985(&var_568, &var_ab0, 
        "crown-marginuniform-spacingquick…");
    clap_builder::builder::arg::Arg::help::h1c457975661ca301(&var_ab0, &var_568, 
        "First and second line of paragra…", 0xbc);
    let mut var_2a0: ();
    clap_builder::builder::arg::Arg::action::h408fbf360adf2399(&var_2a0, &var_ab0, 2);
    clap_builder::builder::command::Command::arg::h8fc4cd9d1fefc92c(&var_568, &var_830, &var_2a0);
    clap_builder::builder::arg::Arg::new::h58e90980ac696a02(&var_830, 
        "tagged-paragraph[short aliases: …");
    clap_builder::builder::arg::Arg::short::ha5095fdddbfba465(&var_ab0, &var_830, 0x74);
    clap_builder::builder::arg::Arg::long::he2253374dd610985(&var_830, &var_ab0, 
        "tagged-paragraph[short aliases: …");
    clap_builder::builder::arg::Arg::help::h1c457975661ca301(&var_ab0, &var_830, 
        "Like -c, except that the first a…", 0x8b);
    clap_builder::builder::arg::Arg::action::h408fbf360adf2399(&var_2a0, &var_ab0, 2);
    clap_builder::builder::command::Command::arg::h8fc4cd9d1fefc92c(&var_830, &var_568, &var_2a0);
    clap_builder::builder::arg::Arg::new::h58e90980ac696a02(&var_568, 
        "preserve-headersDOUBLE_UNDERLINE…");
    clap_builder::builder::arg::Arg::short::ha5095fdddbfba465(&var_ab0, &var_568, 0x6d);
    clap_builder::builder::arg::Arg::long::he2253374dd610985(&var_568, &var_ab0, 
        "preserve-headersDOUBLE_UNDERLINE…");
    clap_builder::builder::arg::Arg::help::h1c457975661ca301(&var_ab0, &var_568, 
        "Attempt to detect and preserve m…", 0x66);
    clap_builder::builder::arg::Arg::action::h408fbf360adf2399(&var_2a0, &var_ab0, 2);
    clap_builder::builder::command::Command::arg::h8fc4cd9d1fefc92c(&var_568, &var_830, &var_2a0);
    clap_builder::builder::arg::Arg::new::h58e90980ac696a02(&var_830, 
        "split-onlyexact-prefixskip-prefi…");
    clap_builder::builder::arg::Arg::short::ha5095fdddbfba465(&var_ab0, &var_830, 0x73);
    clap_builder::builder::arg::Arg::long::he2253374dd610985(&var_830, &var_ab0, 
        "split-onlyexact-prefixskip-prefi…");
    clap_builder::builder::arg::Arg::help::h1c457975661ca301(&var_ab0, &var_830, 
        "Split lines only, do not reflow.…", 0x20);
    clap_builder::builder::arg::Arg::action::h408fbf360adf2399(&var_2a0, &var_ab0, 2);
    clap_builder::builder::command::Command::arg::h8fc4cd9d1fefc92c(&var_830, &var_568, &var_2a0);
    clap_builder::builder::arg::Arg::new::h58e90980ac696a02(&var_568, 
        "uniform-spacingquicksplit-onlyex…");
    clap_builder::builder::arg::Arg::short::ha5095fdddbfba465(&var_ab0, &var_568, 0x75);
    clap_builder::builder::arg::Arg::long::he2253374dd610985(&var_568, &var_ab0, 
        "uniform-spacingquicksplit-onlyex…");
    clap_builder::builder::arg::Arg::help::h1c457975661ca301(&var_ab0, &var_568, 
        "Insert exactly one space between…", 0xd4);
    clap_builder::builder::arg::Arg::action::h408fbf360adf2399(&var_2a0, &var_ab0, 2);
    clap_builder::builder::command::Command::arg::h8fc4cd9d1fefc92c(&var_568, &var_830, &var_2a0);
    clap_builder::builder::arg::Arg::new::h58e90980ac696a02(&var_830, 
        "prefixtab-width-read errorcannot…");
    clap_builder::builder::arg::Arg::short::ha5095fdddbfba465(&var_ab0, &var_830, 0x70);
    clap_builder::builder::arg::Arg::long::he2253374dd610985(&var_830, &var_ab0, 
        "prefixtab-width-read errorcannot…");
    clap_builder::builder::arg::Arg::help::h1c457975661ca301(&var_ab0, &var_830, 
        "Reformat only lines beginning wi…", 0xa4);
    clap_builder::builder::arg::Arg::value_name::h81e6765a18e841ab(&var_2a0, &var_ab0, 
        "PREFIXDo not reformat lines begi…");
    clap_builder::builder::command::Command::arg::h8fc4cd9d1fefc92c(&var_830, &var_568, &var_2a0);
    clap_builder::builder::arg::Arg::new::h58e90980ac696a02(&var_568, 
        "skip-prefixprefixtab-width-read …");
    clap_builder::builder::arg::Arg::short::ha5095fdddbfba465(&var_ab0, &var_568, 0x50);
    clap_builder::builder::arg::Arg::long::he2253374dd610985(&var_568, &var_ab0, 
        "skip-prefixprefixtab-width-read …");
    clap_builder::builder::arg::Arg::help::h1c457975661ca301(&var_ab0, &var_568, 
        "Do not reformat lines beginning …", 0x7a);
    clap_builder::builder::arg::Arg::value_name::h81e6765a18e841ab(&var_2a0, &var_ab0, 
        "PSKIPPREFIX must match at the be…");
    clap_builder::builder::command::Command::arg::h8fc4cd9d1fefc92c(&var_568, &var_830, &var_2a0);
    clap_builder::builder::arg::Arg::new::h58e90980ac696a02(&var_830, 
        "exact-prefixskip-prefixprefixtab…");
    clap_builder::builder::arg::Arg::short::ha5095fdddbfba465(&var_ab0, &var_830, 0x78);
    clap_builder::builder::arg::Arg::long::he2253374dd610985(&var_830, &var_ab0, 
        "exact-prefixskip-prefixprefixtab…");
    clap_builder::builder::arg::Arg::help::h1c457975661ca301(&var_ab0, &var_830, 
        "PREFIX must match at the beginni…", 0x4c);
    clap_builder::builder::arg::Arg::action::h408fbf360adf2399(&var_2a0, &var_ab0, 2);
    clap_builder::builder::command::Command::arg::h8fc4cd9d1fefc92c(&var_830, &var_568, &var_2a0);
    clap_builder::builder::arg::Arg::new::h58e90980ac696a02(&var_568, 
        "exact-skip-prefixPSKIP must matc…");
    clap_builder::builder::arg::Arg::short::ha5095fdddbfba465(&var_ab0, &var_568, 0x58);
    clap_builder::builder::arg::Arg::long::he2253374dd610985(&var_568, &var_ab0, 
        "exact-skip-prefixPSKIP must matc…");
    clap_builder::builder::arg::Arg::help::h1c457975661ca301(&var_ab0, &var_568, 
        "PSKIP must match at the beginnin…", 0x4b);
    clap_builder::builder::arg::Arg::action::h408fbf360adf2399(&var_2a0, &var_ab0, 2);
    clap_builder::builder::command::Command::arg::h8fc4cd9d1fefc92c(&var_568, &var_830, &var_2a0);
    clap_builder::builder::arg::Arg::new::h58e90980ac696a02(&var_830, 
        "width(uutils coreutils) 0.0.30Re…");
    clap_builder::builder::arg::Arg::short::ha5095fdddbfba465(&var_ab0, &var_830, 0x77);
    clap_builder::builder::arg::Arg::long::he2253374dd610985(&var_830, &var_ab0, 
        "width(uutils coreutils) 0.0.30Re…");
    clap_builder::builder::arg::Arg::help::h1c457975661ca301(&var_ab0, &var_830, 
        "Fill output lines up to a maximu…", 0x81);
    clap_builder::builder::arg::Arg::value_name::h81e6765a18e841ab(&var_2a0, &var_ab0, 
        "WIDTHGoal width, default of 93% …");
    clap_builder::builder::command::Command::arg::h8fc4cd9d1fefc92c(&var_830, &var_568, &var_2a0);
    clap_builder::builder::arg::Arg::new::h58e90980ac696a02(&var_568, "goalBlue\x1b[4m");
    clap_builder::builder::arg::Arg::short::ha5095fdddbfba465(&var_ab0, &var_568, 0x67);
    clap_builder::builder::arg::Arg::long::he2253374dd610985(&var_568, &var_ab0, "goalBlue\x1b[4m");
    clap_builder::builder::arg::Arg::help::h1c457975661ca301(&var_ab0, &var_568, 
        "Goal width, default of 93% of WI…", 0x49);
    clap_builder::builder::arg::Arg::value_name::h81e6765a18e841ab(&var_2a0, &var_ab0, 
        "GOALi128 as dyn ERANGEEDEADLKENA…");
    clap_builder::builder::command::Command::arg::h8fc4cd9d1fefc92c(&var_568, &var_830, &var_2a0);
    clap_builder::builder::arg::Arg::new::h58e90980ac696a02(&var_830, 
        "quicksplit-onlyexact-prefixskip-…");
    clap_builder::builder::arg::Arg::short::ha5095fdddbfba465(&var_ab0, &var_830, 0x71);
    clap_builder::builder::arg::Arg::long::he2253374dd610985(&var_830, &var_ab0, 
        "quicksplit-onlyexact-prefixskip-…");
    clap_builder::builder::arg::Arg::help::h1c457975661ca301(&var_ab0, &var_830, 
        "Break lines more quickly at the …", 0x50);
    clap_builder::builder::arg::Arg::action::h408fbf360adf2399(&var_2a0, &var_ab0, 2);
    clap_builder::builder::command::Command::arg::h8fc4cd9d1fefc92c(&var_830, &var_568, &var_2a0);
    clap_builder::builder::arg::Arg::new::h58e90980ac696a02(&var_568, 
        "tab-width-read errorcannot open …");
    clap_builder::builder::arg::Arg::short::ha5095fdddbfba465(&var_ab0, &var_568, 0x54);
    clap_builder::builder::arg::Arg::long::he2253374dd610985(&var_568, &var_ab0, 
        "tab-width-read errorcannot open …");
    clap_builder::builder::arg::Arg::help::h1c457975661ca301(&var_ab0, &var_568, 
        "Treat tabs as TABWIDTH spaces fo…", 0xa1);
    clap_builder::builder::arg::Arg::value_name::h81e6765a18e841ab(&var_2a0, &var_ab0, 
        &data_418738);
    clap_builder::builder::command::Command::arg::h8fc4cd9d1fefc92c(&var_568, &var_830, &var_2a0);
    clap_builder::builder::arg::Arg::new::h58e90980ac696a02(&var_830, 
        "filesa negative number should be…");
    clap_builder::builder::arg::Arg::action::h408fbf360adf2399(&var_ab0, &var_830, 1);
    clap_builder::builder::arg::Arg::value_name::h81e6765a18e841ab(&var_830, &var_ab0, "FILES");
    clap_builder::builder::arg::Arg::value_hint::h628176efa5d3776d(&var_ab0, &var_830);
    memcpy(&var_830, &var_ab0, 0x278);
    let var_838: i32;
    let var_5b8: i32 = var_838 | 0x40;
    let var_834: i32;
    let var_5b4: i32 = var_834;
    clap_builder::builder::command::Command::arg::h8fc4cd9d1fefc92c(arg1, &var_568, &var_830);
    arg1
}
