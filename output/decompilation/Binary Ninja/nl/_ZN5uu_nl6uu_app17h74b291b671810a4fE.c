
  int64_t uu_nl::uu_app::h74b291b671810a4f(int64_t arg1)

{
    void var_830;
    clap_builder::builder::command::Command::new::h4f4d52b8a826f509(&var_830, 
        uucore::util_name::h074417a1e6395129());
    void var_568;
    clap_builder::builder::command::Command::about::h2121ac2a316007e6(&var_568, &var_830);
    clap_builder::builder::command::Command::version::hba080bf7a8c8ac1c(&var_830, &var_568);
    void var_ab0;
    uucore::format_usage::he053403a896311ed(&var_ab0, "{} [OPTION]... [FILE]...STYLE is…", 0x18);
    clap_builder::builder::command::Command::override_usage::hb046b40a6f3b0fd8(&var_568, &var_830, 
        &var_ab0);
    clap_builder::builder::command::Command::after_help::h648fa8c408e7466b(&var_830, &var_568);
    memcpy(&var_568, &var_830, 0x2bc);
    int64_t var_574;
    int64_t var_2ac = 0x8008000080080 | var_574;
    int32_t var_56c;
    int32_t var_2a4 = var_56c;
    clap_builder::builder::arg::Arg::new::h39cbb397b1a2566a(&var_830, "helpt");
    clap_builder::builder::arg::Arg::long::h5bddb8e4a8cb4a01(&var_ab0, &var_830, "helpt");
    clap_builder::builder::arg::Arg::help::hc2a9dd8ae6533a8b(&var_830, &var_ab0, 
        "Print help information.use STYLE…", 0x17);
    clap_builder::builder::arg::Arg::action::h48f4222ff07eb634(&var_ab0, &var_830, 5);
    clap_builder::builder::command::Command::arg::h98dac3f16f43bcbc(&var_830, &var_568, &var_ab0);
    clap_builder::builder::arg::Arg::new::h39cbb397b1a2566a(&var_568, "fileEDOMmode{");
    memcpy(&var_ab0, &var_568, 0x278);
    int32_t var_2f0;
    int32_t var_838 = var_2f0 | 4;
    int32_t var_2ec;
    int32_t var_834 = var_2ec;
    clap_builder::builder::arg::Arg::action::h48f4222ff07eb634(&var_568, &var_ab0, 1);
    clap_builder::builder::arg::Arg::value_hint::h87b06a17a8ef9e45(&var_ab0, &var_568);
    clap_builder::builder::command::Command::arg::h98dac3f16f43bcbc(&var_568, &var_830, &var_ab0);
    clap_builder::builder::arg::Arg::new::h39cbb397b1a2566a(&var_830, 
        "body-numberingnumber-widthline-i…");
    clap_builder::builder::arg::Arg::short::he9b03de2d75e8b25(&var_ab0, &var_830, 0x62);
    clap_builder::builder::arg::Arg::long::h5bddb8e4a8cb4a01(&var_830, &var_ab0, 
        "body-numberingnumber-widthline-i…");
    clap_builder::builder::arg::Arg::help::hc2a9dd8ae6533a8b(&var_ab0, &var_830, 
        "use STYLE for numbering body lin…", 0x22);
    char const* const var_2a0;
    clap_builder::builder::arg::Arg::value_name::h95f67a6951ff81af(&var_2a0, &var_ab0, 
        "STYLEuse CC for separating logic…");
    clap_builder::builder::command::Command::arg::h98dac3f16f43bcbc(&var_830, &var_568, &var_2a0);
    clap_builder::builder::arg::Arg::new::h39cbb397b1a2566a(&var_568, 
        "section-delimiternumber-formatsr…");
    clap_builder::builder::arg::Arg::short::he9b03de2d75e8b25(&var_ab0, &var_568, 0x64);
    clap_builder::builder::arg::Arg::long::h5bddb8e4a8cb4a01(&var_568, &var_ab0, 
        "section-delimiternumber-formatsr…");
    clap_builder::builder::arg::Arg::help::hc2a9dd8ae6533a8b(&var_ab0, &var_568, 
        "use CC for separating logical pa…", 0x23);
    clap_builder::builder::arg::Arg::value_name::h95f67a6951ff81af(&var_2a0, &var_ab0, 
        "CCuse STYLE for numbering footer…");
    clap_builder::builder::command::Command::arg::h98dac3f16f43bcbc(&var_568, &var_830, &var_2a0);
    clap_builder::builder::arg::Arg::new::h39cbb397b1a2566a(&var_830, &data_44e410);
    clap_builder::builder::arg::Arg::short::he9b03de2d75e8b25(&var_ab0, &var_830, 0x66);
    clap_builder::builder::arg::Arg::long::h5bddb8e4a8cb4a01(&var_830, &var_ab0, &data_44e410);
    clap_builder::builder::arg::Arg::help::hc2a9dd8ae6533a8b(&var_ab0, &var_830, 
        "use STYLE for numbering footer l…", 0x24);
    clap_builder::builder::arg::Arg::value_name::h95f67a6951ff81af(&var_2a0, &var_ab0, 
        "STYLEuse CC for separating logic…");
    clap_builder::builder::command::Command::arg::h98dac3f16f43bcbc(&var_830, &var_568, &var_2a0);
    clap_builder::builder::arg::Arg::new::h39cbb397b1a2566a(&var_568, "header-numberi");
    clap_builder::builder::arg::Arg::short::he9b03de2d75e8b25(&var_ab0, &var_568, 0x68);
    clap_builder::builder::arg::Arg::long::h5bddb8e4a8cb4a01(&var_568, &var_ab0, "header-numberi");
    clap_builder::builder::arg::Arg::help::hc2a9dd8ae6533a8b(&var_ab0, &var_568, 
        "use STYLE for numbering header l…", 0x24);
    clap_builder::builder::arg::Arg::value_name::h95f67a6951ff81af(&var_2a0, &var_ab0, 
        "STYLEuse CC for separating logic…");
    clap_builder::builder::command::Command::arg::h98dac3f16f43bcbc(&var_568, &var_830, &var_2a0);
    clap_builder::builder::arg::Arg::new::h39cbb397b1a2566a(&var_830, 
        "line-incrementstarting-line-numb…");
    clap_builder::builder::arg::Arg::short::he9b03de2d75e8b25(&var_ab0, &var_830, 0x69);
    clap_builder::builder::arg::Arg::long::h5bddb8e4a8cb4a01(&var_830, &var_ab0, 
        "line-incrementstarting-line-numb…");
    clap_builder::builder::arg::Arg::help::hc2a9dd8ae6533a8b(&var_ab0, &var_830, 
        "line number increment at each li…", 0x22);
    clap_builder::builder::arg::Arg::value_name::h95f67a6951ff81af(&var_830, &var_ab0, 
        "NUMBERgroup of NUMBER empty line…");
    _$LT$i64$u20$as$u20$clap_builder..builder..value_parser..ValueParserFactory$GT$::value_parser::h99af702a0164d6f0(&var_2a0);
    clap_builder::builder::arg::Arg::value_parser::ha98036d24364b612(&var_ab0, &var_830, &var_2a0);
    clap_builder::builder::command::Command::arg::h98dac3f16f43bcbc(&var_830, &var_568, &var_ab0);
    clap_builder::builder::arg::Arg::new::h39cbb397b1a2566a(&var_568, "join-blank-lines");
    clap_builder::builder::arg::Arg::short::he9b03de2d75e8b25(&var_ab0, &var_568, 0x6c);
    clap_builder::builder::arg::Arg::long::h5bddb8e4a8cb4a01(&var_568, &var_ab0, 
        "join-blank-lines");
    clap_builder::builder::arg::Arg::help::hc2a9dd8ae6533a8b(&var_ab0, &var_568, 
        "group of NUMBER empty lines coun…", 0x2a);
    clap_builder::builder::arg::Arg::value_name::h95f67a6951ff81af(&var_568, &var_ab0, 
        "NUMBERgroup of NUMBER empty line…");
    _$LT$u64$u20$as$u20$clap_builder..builder..value_parser..ValueParserFactory$GT$::value_parser::hc43a5cf9c5a78de9(&var_2a0);
    clap_builder::builder::arg::Arg::value_parser::h6e31409384f544c4(&var_ab0, &var_568, &var_2a0);
    clap_builder::builder::command::Command::arg::h98dac3f16f43bcbc(&var_568, &var_830, &var_ab0);
    clap_builder::builder::arg::Arg::new::h39cbb397b1a2566a(&var_830, 
        "number-formatsrc/uu/nl/src/helpe…");
    clap_builder::builder::arg::Arg::short::he9b03de2d75e8b25(&var_ab0, &var_830, 0x6e);
    clap_builder::builder::arg::Arg::long::h5bddb8e4a8cb4a01(&var_830, &var_ab0, 
        "number-formatsrc/uu/nl/src/helpe…");
    clap_builder::builder::arg::Arg::help::hc2a9dd8ae6533a8b(&var_ab0, &var_830, 
        "insert line numbers according to…", 0x27);
    clap_builder::builder::arg::Arg::value_name::h95f67a6951ff81af(&var_830, &var_ab0, 
        "FORMATdo not reset line numbers …");
    var_2a0 = "lnrnrzinternal error: entered un…";
    int64_t var_298 = 2;
    char const* const var_290 = "rnrzinternal error: entered unre…";
    int64_t var_288 = 2;
    char const* const var_280 = "rzinternal error: entered unreac…";
    int64_t var_278 = 2;
    clap_builder::builder::arg::Arg::value_parser::hb7354ee9b7b275a0(&var_ab0, &var_830, &var_2a0);
    clap_builder::builder::command::Command::arg::h98dac3f16f43bcbc(&var_830, &var_568, &var_ab0);
    clap_builder::builder::arg::Arg::new::h39cbb397b1a2566a(&var_568, 
        "no-renumbersection-delimiternumb…");
    clap_builder::builder::arg::Arg::short::he9b03de2d75e8b25(&var_ab0, &var_568, 0x70);
    clap_builder::builder::arg::Arg::long::h5bddb8e4a8cb4a01(&var_568, &var_ab0, 
        "no-renumbersection-delimiternumb…");
    clap_builder::builder::arg::Arg::help::hc2a9dd8ae6533a8b(&var_ab0, &var_568, 
        "do not reset line numbers at log…", 0x2a);
    clap_builder::builder::arg::Arg::action::h48f4222ff07eb634(&var_2a0, &var_ab0, 3);
    clap_builder::builder::command::Command::arg::h98dac3f16f43bcbc(&var_568, &var_830, &var_2a0);
    clap_builder::builder::arg::Arg::new::h39cbb397b1a2566a(&var_830, 
        "number-separator0123456789abcdef…");
    clap_builder::builder::arg::Arg::short::he9b03de2d75e8b25(&var_ab0, &var_830, 0x73);
    clap_builder::builder::arg::Arg::long::h5bddb8e4a8cb4a01(&var_830, &var_ab0, 
        "number-separator0123456789abcdef…");
    clap_builder::builder::arg::Arg::help::hc2a9dd8ae6533a8b(&var_ab0, &var_830, 
        "add STRING after (possible) line…", 0x27);
    clap_builder::builder::arg::Arg::value_name::h95f67a6951ff81af(&var_2a0, &var_ab0, 
        "STRINGfirst line number on each …");
    clap_builder::builder::command::Command::arg::h98dac3f16f43bcbc(&var_830, &var_568, &var_2a0);
    clap_builder::builder::arg::Arg::new::h39cbb397b1a2566a(&var_568, 
        "starting-line-number\:\tatninval…");
    clap_builder::builder::arg::Arg::short::he9b03de2d75e8b25(&var_ab0, &var_568, 0x76);
    clap_builder::builder::arg::Arg::long::h5bddb8e4a8cb4a01(&var_568, &var_ab0, 
        "starting-line-number\:\tatninval…");
    clap_builder::builder::arg::Arg::help::hc2a9dd8ae6533a8b(&var_ab0, &var_568, 
        "first line number on each logica…", 0x26);
    clap_builder::builder::arg::Arg::value_name::h95f67a6951ff81af(&var_568, &var_ab0, 
        "NUMBERgroup of NUMBER empty line…");
    _$LT$i64$u20$as$u20$clap_builder..builder..value_parser..ValueParserFactory$GT$::value_parser::h99af702a0164d6f0(&var_2a0);
    clap_builder::builder::arg::Arg::value_parser::ha98036d24364b612(&var_ab0, &var_568, &var_2a0);
    clap_builder::builder::command::Command::arg::h98dac3f16f43bcbc(&var_568, &var_830, &var_ab0);
    clap_builder::builder::arg::Arg::new::h39cbb397b1a2566a(&var_830, 
        "number-widthline-incrementstarti…");
    clap_builder::builder::arg::Arg::short::he9b03de2d75e8b25(&var_ab0, &var_830, 0x77);
    clap_builder::builder::arg::Arg::long::h5bddb8e4a8cb4a01(&var_830, &var_ab0, 
        "number-widthline-incrementstarti…");
    clap_builder::builder::arg::Arg::help::hc2a9dd8ae6533a8b(&var_ab0, &var_830, 
        "use NUMBER columns for line numb…", 0x23);
    clap_builder::builder::arg::Arg::value_name::h95f67a6951ff81af(&var_830, &var_ab0, 
        "NUMBERgroup of NUMBER empty line…");
    uint64_t rax_4 = alloc::boxed::Box$LT$T$GT$::new::h756ec9a5e05147bc(core::num::_$LT$impl$u20$core..str..traits..FromStr$u20$for$u20$usize$GT$::from_str::he7963e1397bf94db);
    var_2a0 = 4;
    uint64_t var_298_1 = rax_4;
    void* const var_290_1 = &data_63a038;
    clap_builder::builder::arg::Arg::value_parser::hbac70b8e505e6cb7(&var_ab0, &var_830, &var_2a0);
    clap_builder::builder::command::Command::arg::h98dac3f16f43bcbc(arg1, &var_568, &var_ab0);
    return arg1;
}
