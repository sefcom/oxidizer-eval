
  int64_t uu_nl::uu_app::h62e86bf6f8f43d48(int64_t arg1)

{
    void var_7f8;
    clap_builder::builder::command::Command::new::hd78aab08a8b31c20(&var_7f8, 
        uucore::util_name::h60d842bf27b05e82());
    void var_530;
    clap_builder::builder::command::Command::about::h40bfd31f33fa63c5(&var_530, &var_7f8, 
        "Number lines of files0.0.28{} [O…", 0x15);
    clap_builder::builder::command::Command::version::h3a7547e439a5f2d6(&var_7f8, &var_530, 
        "0.0.28{} [OPTION]... [FILE]...ST…");
    void var_a48;
    uucore::format_usage::h76fcb2d15fbabc58(&var_a48, "{} [OPTION]... [FILE]...STYLE is…", 0x18);
    clap_builder::builder::command::Command::override_usage::hc45c9c787b169d6c(&var_530, &var_7f8, 
        &var_a48);
    clap_builder::builder::command::Command::after_help::hc7b8767b1b6b1de1(&var_7f8, &var_530, 
        "STYLE is one of:\n\n* a     numb…", 0x150);
    memcpy(&var_530, &var_7f8, 0x2bc);
    int64_t var_53c;
    int64_t var_274 = 0x4008000040080 | var_53c;
    int32_t var_534;
    int32_t var_26c = var_534;
    clap_builder::builder::arg::Arg::new::h44f368f26e40926b(&var_7f8, "helpt");
    clap_builder::builder::arg::Arg::long::he99126bf183af45a(&var_a48, &var_7f8, "helpt");
    clap_builder::builder::arg::Arg::help::h8b61f4007585e044(&var_7f8, &var_a48, 
        "Print help information.body-numb…", 0x17);
    clap_builder::builder::arg::Arg::action::he34be3aec48eea3d(&var_a48, &var_7f8, 5);
    clap_builder::builder::command::Command::arg::h47326fbf44751a69(&var_7f8, &var_530, &var_a48);
    clap_builder::builder::arg::Arg::new::h44f368f26e40926b(&var_530, "fileEDOMmode{");
    memcpy(&var_a48, &var_530, 0x248);
    int32_t var_2e8;
    int32_t var_800 = var_2e8 | 4;
    int32_t var_2e4;
    int32_t var_7fc = var_2e4;
    clap_builder::builder::arg::Arg::action::he34be3aec48eea3d(&var_530, &var_a48, 1);
    clap_builder::builder::arg::Arg::value_hint::h60190d51d1c5eb8b(&var_a48, &var_530, 3);
    clap_builder::builder::command::Command::arg::h47326fbf44751a69(&var_530, &var_7f8, &var_a48);
    clap_builder::builder::arg::Arg::new::h44f368f26e40926b(&var_7f8, 
        "body-numberinguse STYLE for numb…");
    clap_builder::builder::arg::Arg::short::hb89f1ce4d7c5bc2c(&var_a48, &var_7f8, 0x62);
    clap_builder::builder::arg::Arg::long::he99126bf183af45a(&var_7f8, &var_a48, 
        "body-numberinguse STYLE for numb…");
    clap_builder::builder::arg::Arg::help::h8b61f4007585e044(&var_a48, &var_7f8, 
        "use STYLE for numbering body lin…", 0x22);
    char const* const var_268;
    clap_builder::builder::arg::Arg::value_name::h72b97bc36a496091(&var_268, &var_a48, 
        "STYLEsection-delimiteruse CC for…");
    clap_builder::builder::command::Command::arg::h47326fbf44751a69(&var_7f8, &var_530, &var_268);
    clap_builder::builder::arg::Arg::new::h44f368f26e40926b(&var_530, 
        "section-delimiteruse CC for sepa…");
    clap_builder::builder::arg::Arg::short::hb89f1ce4d7c5bc2c(&var_a48, &var_530, 0x64);
    clap_builder::builder::arg::Arg::long::he99126bf183af45a(&var_530, &var_a48, 
        "section-delimiteruse CC for sepa…");
    clap_builder::builder::arg::Arg::help::h8b61f4007585e044(&var_a48, &var_530, 
        "use CC for separating logical pa…", 0x23);
    clap_builder::builder::arg::Arg::value_name::h72b97bc36a496091(&var_268, &var_a48, 
        "CCuse STYLE for numbering footer…");
    clap_builder::builder::command::Command::arg::h47326fbf44751a69(&var_530, &var_7f8, &var_268);
    clap_builder::builder::arg::Arg::new::h44f368f26e40926b(&var_7f8, &data_460e70);
    clap_builder::builder::arg::Arg::short::hb89f1ce4d7c5bc2c(&var_a48, &var_7f8, 0x66);
    clap_builder::builder::arg::Arg::long::he99126bf183af45a(&var_7f8, &var_a48, &data_460e70);
    clap_builder::builder::arg::Arg::help::h8b61f4007585e044(&var_a48, &var_7f8, 
        "use STYLE for numbering footer l…", 0x24);
    clap_builder::builder::arg::Arg::value_name::h72b97bc36a496091(&var_268, &var_a48, 
        "STYLEsection-delimiteruse CC for…");
    clap_builder::builder::command::Command::arg::h47326fbf44751a69(&var_7f8, &var_530, &var_268);
    clap_builder::builder::arg::Arg::new::h44f368f26e40926b(&var_530, "header-numberi");
    clap_builder::builder::arg::Arg::short::hb89f1ce4d7c5bc2c(&var_a48, &var_530, 0x68);
    clap_builder::builder::arg::Arg::long::he99126bf183af45a(&var_530, &var_a48, "header-numberi");
    clap_builder::builder::arg::Arg::help::h8b61f4007585e044(&var_a48, &var_530, 
        "use STYLE for numbering header l…", 0x24);
    clap_builder::builder::arg::Arg::value_name::h72b97bc36a496091(&var_268, &var_a48, 
        "STYLEsection-delimiteruse CC for…");
    clap_builder::builder::command::Command::arg::h47326fbf44751a69(&var_530, &var_7f8, &var_268);
    clap_builder::builder::arg::Arg::new::h44f368f26e40926b(&var_7f8, 
        "line-incrementline number increm…");
    clap_builder::builder::arg::Arg::short::hb89f1ce4d7c5bc2c(&var_a48, &var_7f8, 0x69);
    clap_builder::builder::arg::Arg::long::he99126bf183af45a(&var_7f8, &var_a48, 
        "line-incrementline number increm…");
    clap_builder::builder::arg::Arg::help::h8b61f4007585e044(&var_a48, &var_7f8, 
        "line number increment at each li…", 0x22);
    clap_builder::builder::arg::Arg::value_name::h72b97bc36a496091(&var_7f8, &var_a48, 
        "NUMBERgroup of NUMBER empty line…");
    _$LT$i64$u20$as$u20$clap_builder..builder..value_parser..ValueParserFactory$GT$::value_parser::h49a810d89a08e531(&var_268);
    clap_builder::builder::arg::Arg::value_parser::h4e017dd67ef25d56(&var_a48, &var_7f8, &var_268);
    clap_builder::builder::command::Command::arg::h47326fbf44751a69(&var_7f8, &var_530, &var_a48);
    clap_builder::builder::arg::Arg::new::h44f368f26e40926b(&var_530, "join-blank-lines");
    clap_builder::builder::arg::Arg::short::hb89f1ce4d7c5bc2c(&var_a48, &var_530, 0x6c);
    clap_builder::builder::arg::Arg::long::he99126bf183af45a(&var_530, &var_a48, 
        "join-blank-lines");
    clap_builder::builder::arg::Arg::help::h8b61f4007585e044(&var_a48, &var_530, 
        "group of NUMBER empty lines coun…", 0x2a);
    clap_builder::builder::arg::Arg::value_name::h72b97bc36a496091(&var_530, &var_a48, 
        "NUMBERgroup of NUMBER empty line…");
    _$LT$u64$u20$as$u20$clap_builder..builder..value_parser..ValueParserFactory$GT$::value_parser::hb2c940b47939cb64(&var_268);
    clap_builder::builder::arg::Arg::value_parser::hb966a35be36ae890(&var_a48, &var_530, &var_268);
    clap_builder::builder::command::Command::arg::h47326fbf44751a69(&var_530, &var_7f8, &var_a48);
    clap_builder::builder::arg::Arg::new::h44f368f26e40926b(&var_7f8, 
        "number-formatinsert line numbers…");
    clap_builder::builder::arg::Arg::short::hb89f1ce4d7c5bc2c(&var_a48, &var_7f8, 0x6e);
    clap_builder::builder::arg::Arg::long::he99126bf183af45a(&var_7f8, &var_a48, 
        "number-formatinsert line numbers…");
    clap_builder::builder::arg::Arg::help::h8b61f4007585e044(&var_a48, &var_7f8, 
        "insert line numbers according to…", 0x27);
    clap_builder::builder::arg::Arg::value_name::h72b97bc36a496091(&var_7f8, &var_a48, 
        "FORMATno-renumberdo not reset li…");
    var_268 = "lnrnrzinternal error: entered un…";
    int64_t var_260 = 2;
    char const* const var_258 = "rnrzinternal error: entered unre…";
    int64_t var_250 = 2;
    char const* const var_248 = "rzinternal error: entered unreac…";
    int64_t var_240 = 2;
    clap_builder::builder::arg::Arg::value_parser::hc89b69345b3b823d(&var_a48, &var_7f8, &var_268);
    clap_builder::builder::command::Command::arg::h47326fbf44751a69(&var_7f8, &var_530, &var_a48);
    clap_builder::builder::arg::Arg::new::h44f368f26e40926b(&var_530, 
        "no-renumberdo not reset line num…");
    clap_builder::builder::arg::Arg::short::hb89f1ce4d7c5bc2c(&var_a48, &var_530, 0x70);
    clap_builder::builder::arg::Arg::long::he99126bf183af45a(&var_530, &var_a48, 
        "no-renumberdo not reset line num…");
    clap_builder::builder::arg::Arg::help::h8b61f4007585e044(&var_a48, &var_530, 
        "do not reset line numbers at log…", 0x2a);
    clap_builder::builder::arg::Arg::action::he34be3aec48eea3d(&var_268, &var_a48, 3);
    clap_builder::builder::command::Command::arg::h47326fbf44751a69(&var_530, &var_7f8, &var_268);
    clap_builder::builder::arg::Arg::new::h44f368f26e40926b(&var_7f8, &data_461770);
    clap_builder::builder::arg::Arg::short::hb89f1ce4d7c5bc2c(&var_a48, &var_7f8, 0x73);
    clap_builder::builder::arg::Arg::long::he99126bf183af45a(&var_7f8, &var_a48, &data_461770);
    clap_builder::builder::arg::Arg::help::h8b61f4007585e044(&var_a48, &var_7f8, 
        "add STRING after (possible) line…", 0x27);
    clap_builder::builder::arg::Arg::value_name::h72b97bc36a496091(&var_268, &var_a48, 
        "STRINGstarting-line-numberfirst …");
    clap_builder::builder::command::Command::arg::h47326fbf44751a69(&var_7f8, &var_530, &var_268);
    clap_builder::builder::arg::Arg::new::h44f368f26e40926b(&var_530, 
        "starting-line-numberfirst line n…");
    clap_builder::builder::arg::Arg::short::hb89f1ce4d7c5bc2c(&var_a48, &var_530, 0x76);
    clap_builder::builder::arg::Arg::long::he99126bf183af45a(&var_530, &var_a48, 
        "starting-line-numberfirst line n…");
    clap_builder::builder::arg::Arg::help::h8b61f4007585e044(&var_a48, &var_530, 
        "first line number on each logica…", 0x26);
    clap_builder::builder::arg::Arg::value_name::h72b97bc36a496091(&var_530, &var_a48, 
        "NUMBERgroup of NUMBER empty line…");
    _$LT$i64$u20$as$u20$clap_builder..builder..value_parser..ValueParserFactory$GT$::value_parser::h49a810d89a08e531(&var_268);
    clap_builder::builder::arg::Arg::value_parser::h4e017dd67ef25d56(&var_a48, &var_530, &var_268);
    clap_builder::builder::command::Command::arg::h47326fbf44751a69(&var_530, &var_7f8, &var_a48);
    clap_builder::builder::arg::Arg::new::h44f368f26e40926b(&var_7f8, 
        "number-widthuse NUMBER columns f…");
    clap_builder::builder::arg::Arg::short::hb89f1ce4d7c5bc2c(&var_a48, &var_7f8, 0x77);
    clap_builder::builder::arg::Arg::long::he99126bf183af45a(&var_7f8, &var_a48, 
        "number-widthuse NUMBER columns f…");
    clap_builder::builder::arg::Arg::help::h8b61f4007585e044(&var_a48, &var_7f8, 
        "use NUMBER columns for line numb…", 0x23);
    clap_builder::builder::arg::Arg::value_name::h72b97bc36a496091(&var_7f8, &var_a48, 
        "NUMBERgroup of NUMBER empty line…");
    char* (** rax_4)(char* arg1, char* arg2, int64_t arg3) =
        alloc::boxed::Box$LT$T$GT$::new::h256edf188ae77d63();
    var_268 = 4;
    char* (** var_260_1)(char* arg1, char* arg2, int64_t arg3) = rax_4;
    void* const var_258_1 = &data_6d9aa8;
    clap_builder::builder::arg::Arg::value_parser::hd5dbec673a1006bb(&var_a48, &var_7f8, &var_268);
    clap_builder::builder::command::Command::arg::h47326fbf44751a69(arg1, &var_530, &var_a48);
    return arg1;
}
