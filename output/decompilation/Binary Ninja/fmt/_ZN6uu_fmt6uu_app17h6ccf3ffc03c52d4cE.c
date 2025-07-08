
  int64_t uu_fmt::uu_app::h6ccf3ffc03c52d4c(int64_t arg1)

{
    void var_a48;
    clap_builder::builder::command::Command::new::h64509807afd7565f(&var_a48, 
        uucore::util_name::h60d842bf27b05e82());
    void var_530;
    clap_builder::builder::command::Command::version::h111b6abfa6bca800(&var_530, &var_a48, 
        "0.0.28Reformat paragraphs from i…");
    clap_builder::builder::command::Command::about::h0e50f99de4bec37d(&var_a48, &var_530, 
        "Reformat paragraphs from input f…", 0x3a);
    void var_780;
    uucore::format_usage::h76fcb2d15fbabc58(&var_780, "{} [-WIDTH] [OPTION]... [FILE]..…", 0x21);
    clap_builder::builder::command::Command::override_usage::hdfab36e8c8490863(&var_530, &var_a48, 
        &var_780);
    memcpy(&var_a48, &var_530, 0x2bc);
    int64_t var_274;
    int64_t var_78c = 0x8800000088 | var_274;
    int32_t var_26c;
    int32_t var_784 = var_26c;
    clap_builder::builder::arg::Arg::new::h29936642834bfc08(&var_530, 
        "crown-marginuniform-spacingquick…");
    clap_builder::builder::arg::Arg::short::h1ba77015f709dd42(&var_780, &var_530, 0x63);
    clap_builder::builder::arg::Arg::long::h84f8c5bb34180439(&var_530, &var_780, 
        "crown-marginuniform-spacingquick…");
    clap_builder::builder::arg::Arg::help::h6d505232ae71569a(&var_780, &var_530, 
        "First and second line of paragra…", 0xbc);
    void var_268;
    clap_builder::builder::arg::Arg::action::h5992498d946b2fbf(&var_268, &var_780, 2);
    clap_builder::builder::command::Command::arg::hd7dea545ae1a6041(&var_530, &var_a48, &var_268);
    clap_builder::builder::arg::Arg::new::h29936642834bfc08(&var_a48, 
        "tagged-paragraph[short aliases: …");
    clap_builder::builder::arg::Arg::short::h1ba77015f709dd42(&var_780, &var_a48, 0x74);
    clap_builder::builder::arg::Arg::long::h84f8c5bb34180439(&var_a48, &var_780, 
        "tagged-paragraph[short aliases: …");
    clap_builder::builder::arg::Arg::help::h6d505232ae71569a(&var_780, &var_a48, 
        "Like -c, except that the first a…", 0x8b);
    clap_builder::builder::arg::Arg::action::h5992498d946b2fbf(&var_268, &var_780, 2);
    clap_builder::builder::command::Command::arg::hd7dea545ae1a6041(&var_a48, &var_530, &var_268);
    clap_builder::builder::arg::Arg::new::h29936642834bfc08(&var_530, 
        "preserve-headersDOUBLE_UNDERLINE…");
    clap_builder::builder::arg::Arg::short::h1ba77015f709dd42(&var_780, &var_530, 0x6d);
    clap_builder::builder::arg::Arg::long::h84f8c5bb34180439(&var_530, &var_780, 
        "preserve-headersDOUBLE_UNDERLINE…");
    clap_builder::builder::arg::Arg::help::h6d505232ae71569a(&var_780, &var_530, 
        "Attempt to detect and preserve m…", 0x66);
    clap_builder::builder::arg::Arg::action::h5992498d946b2fbf(&var_268, &var_780, 2);
    clap_builder::builder::command::Command::arg::hd7dea545ae1a6041(&var_530, &var_a48, &var_268);
    clap_builder::builder::arg::Arg::new::h29936642834bfc08(&var_a48, 
        "split-onlyexact-prefix-read erro…");
    clap_builder::builder::arg::Arg::short::h1ba77015f709dd42(&var_780, &var_a48, 0x73);
    clap_builder::builder::arg::Arg::long::h84f8c5bb34180439(&var_a48, &var_780, 
        "split-onlyexact-prefix-read erro…");
    clap_builder::builder::arg::Arg::help::h6d505232ae71569a(&var_780, &var_a48, 
        "Split lines only, do not reflow.", 0x20);
    clap_builder::builder::arg::Arg::action::h5992498d946b2fbf(&var_268, &var_780, 2);
    clap_builder::builder::command::Command::arg::hd7dea545ae1a6041(&var_a48, &var_530, &var_268);
    clap_builder::builder::arg::Arg::new::h29936642834bfc08(&var_530, 
        "uniform-spacingquicksplit-onlyex…");
    clap_builder::builder::arg::Arg::short::h1ba77015f709dd42(&var_780, &var_530, 0x75);
    clap_builder::builder::arg::Arg::long::h84f8c5bb34180439(&var_530, &var_780, 
        "uniform-spacingquicksplit-onlyex…");
    clap_builder::builder::arg::Arg::help::h6d505232ae71569a(&var_780, &var_530, 
        "Insert exactly one space between…", 0xd4);
    clap_builder::builder::arg::Arg::action::h5992498d946b2fbf(&var_268, &var_780, 2);
    clap_builder::builder::command::Command::arg::hd7dea545ae1a6041(&var_530, &var_a48, &var_268);
    clap_builder::builder::arg::Arg::new::h29936642834bfc08(&var_a48, 
        "prefixskip-prefixinvalid goal: G…");
    clap_builder::builder::arg::Arg::short::h1ba77015f709dd42(&var_780, &var_a48, 0x70);
    clap_builder::builder::arg::Arg::long::h84f8c5bb34180439(&var_a48, &var_780, 
        "prefixskip-prefixinvalid goal: G…");
    clap_builder::builder::arg::Arg::help::h6d505232ae71569a(&var_780, &var_a48, 
        "Reformat only lines beginning wi…", 0xa4);
    clap_builder::builder::arg::Arg::value_name::h8b63a1c1086fdff9(&var_268, &var_780, 
        "PREFIXDo not reformat lines begi…");
    clap_builder::builder::command::Command::arg::hd7dea545ae1a6041(&var_a48, &var_530, &var_268);
    clap_builder::builder::arg::Arg::new::h29936642834bfc08(&var_530, 
        "skip-prefixinvalid goal: GOAL ca…");
    clap_builder::builder::arg::Arg::short::h1ba77015f709dd42(&var_780, &var_530, 0x50);
    clap_builder::builder::arg::Arg::long::h84f8c5bb34180439(&var_530, &var_780, 
        "skip-prefixinvalid goal: GOAL ca…");
    clap_builder::builder::arg::Arg::help::h6d505232ae71569a(&var_780, &var_530, 
        "Do not reformat lines beginning …", 0x7a);
    clap_builder::builder::arg::Arg::value_name::h8b63a1c1086fdff9(&var_268, &var_780, 
        "PSKIPPREFIX must match at the be…");
    clap_builder::builder::command::Command::arg::hd7dea545ae1a6041(&var_530, &var_a48, &var_268);
    clap_builder::builder::arg::Arg::new::h29936642834bfc08(&var_a48, 
        "exact-prefix-read error\nfileswi…");
    clap_builder::builder::arg::Arg::short::h1ba77015f709dd42(&var_780, &var_a48, 0x78);
    clap_builder::builder::arg::Arg::long::h84f8c5bb34180439(&var_a48, &var_780, 
        "exact-prefix-read error\nfileswi…");
    clap_builder::builder::arg::Arg::help::h6d505232ae71569a(&var_780, &var_a48, 
        "PREFIX must match at the beginni…", 0x4c);
    clap_builder::builder::arg::Arg::action::h5992498d946b2fbf(&var_268, &var_780, 2);
    clap_builder::builder::command::Command::arg::hd7dea545ae1a6041(&var_a48, &var_530, &var_268);
    clap_builder::builder::arg::Arg::new::h29936642834bfc08(&var_530, 
        "exact-skip-prefixPSKIP must matc…");
    clap_builder::builder::arg::Arg::short::h1ba77015f709dd42(&var_780, &var_530, 0x58);
    clap_builder::builder::arg::Arg::long::h84f8c5bb34180439(&var_530, &var_780, 
        "exact-skip-prefixPSKIP must matc…");
    clap_builder::builder::arg::Arg::help::h6d505232ae71569a(&var_780, &var_530, 
        "PSKIP must match at the beginnin…", 0x4b);
    clap_builder::builder::arg::Arg::action::h5992498d946b2fbf(&var_268, &var_780, 2);
    clap_builder::builder::command::Command::arg::hd7dea545ae1a6041(&var_530, &var_a48, &var_268);
    clap_builder::builder::arg::Arg::new::h29936642834bfc08(&var_a48, 
        "widthinvalid width: src/uu/fmt/s…");
    clap_builder::builder::arg::Arg::short::h1ba77015f709dd42(&var_780, &var_a48, 0x77);
    clap_builder::builder::arg::Arg::long::h84f8c5bb34180439(&var_a48, &var_780, 
        "widthinvalid width: src/uu/fmt/s…");
    clap_builder::builder::arg::Arg::help::h6d505232ae71569a(&var_780, &var_a48, 
        "Fill output lines up to a maximu…", 0x81);
    clap_builder::builder::arg::Arg::value_name::h8b63a1c1086fdff9(&var_268, &var_780, 
        "WIDTHGoal width, default of 93% …");
    clap_builder::builder::command::Command::arg::hd7dea545ae1a6041(&var_a48, &var_530, &var_268);
    clap_builder::builder::arg::Arg::new::h29936642834bfc08(&var_530, &data_414924[4]);
    clap_builder::builder::arg::Arg::short::h1ba77015f709dd42(&var_780, &var_530, 0x67);
    clap_builder::builder::arg::Arg::long::h84f8c5bb34180439(&var_530, &var_780, &data_414924[4]);
    clap_builder::builder::arg::Arg::help::h6d505232ae71569a(&var_780, &var_530, 
        "Goal width, default of 93% of WI…", 0x49);
    clap_builder::builder::arg::Arg::value_name::h8b63a1c1086fdff9(&var_268, &var_780, 
        "GOALERANGEEDEADLKENAMETOOLONGENO…");
    clap_builder::builder::command::Command::arg::hd7dea545ae1a6041(&var_530, &var_a48, &var_268);
    clap_builder::builder::arg::Arg::new::h29936642834bfc08(&var_a48, 
        "quicksplit-onlyexact-prefix-read…");
    clap_builder::builder::arg::Arg::short::h1ba77015f709dd42(&var_780, &var_a48, 0x71);
    clap_builder::builder::arg::Arg::long::h84f8c5bb34180439(&var_a48, &var_780, 
        "quicksplit-onlyexact-prefix-read…");
    clap_builder::builder::arg::Arg::help::h6d505232ae71569a(&var_780, &var_a48, 
        "Break lines more quickly at the …", 0x50);
    clap_builder::builder::arg::Arg::action::h5992498d946b2fbf(&var_268, &var_780, 2);
    clap_builder::builder::command::Command::arg::hd7dea545ae1a6041(&var_a48, &var_530, &var_268);
    clap_builder::builder::arg::Arg::new::h29936642834bfc08(&var_530, 
        "tab-width: crown-marginuniform-s…");
    clap_builder::builder::arg::Arg::short::h1ba77015f709dd42(&var_780, &var_530, 0x54);
    clap_builder::builder::arg::Arg::long::h84f8c5bb34180439(&var_530, &var_780, 
        "tab-width: crown-marginuniform-s…");
    clap_builder::builder::arg::Arg::help::h6d505232ae71569a(&var_780, &var_530, 
        "Treat tabs as TABWIDTH spaces fo…", 0xa1);
    clap_builder::builder::arg::Arg::value_name::h8b63a1c1086fdff9(&var_268, &var_780, 
        &data_414ad8[0x38]);
    clap_builder::builder::command::Command::arg::hd7dea545ae1a6041(&var_530, &var_a48, &var_268);
    clap_builder::builder::arg::Arg::new::h29936642834bfc08(&var_a48, 
        "fileswidthinvalid width: src/uu/…");
    clap_builder::builder::arg::Arg::action::h5992498d946b2fbf(&var_780, &var_a48, 1);
    clap_builder::builder::arg::Arg::value_name::h8b63a1c1086fdff9(&var_a48, &var_780, 
        "FILEScapacity overflow/rustc/8bf…");
    clap_builder::builder::arg::Arg::value_hint::hd91671787faa792c(&var_780, &var_a48, 3);
    memcpy(&var_a48, &var_780, 0x248);
    int32_t var_538;
    int32_t var_800 = var_538 | 0x40;
    int32_t var_534;
    int32_t var_7fc = var_534;
    clap_builder::builder::command::Command::arg::hd7dea545ae1a6041(arg1, &var_530, &var_a48);
    return arg1;
}
