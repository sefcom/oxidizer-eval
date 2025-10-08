
  int64_t uu_date::uu_app::h16fa55fca8cffc98(int64_t arg1)

{
    void var_578;
    clap_builder::builder::command::Command::new::hab7ef2240f500938(&var_578, 
        uucore::util_name::h074417a1e6395129());
    char const* const var_840;
    clap_builder::builder::command::Command::version::h4e38d46b7dcbbb28(&var_840, &var_578);
    clap_builder::builder::command::Command::about::ha558da4cdcdbf178(&var_578, &var_840);
    char const* const var_ac0;
    uucore::format_usage::he053403a896311ed(&var_ac0, "{} [OPTION]... [+FORMAT]...\n{} …", 0x42);
    clap_builder::builder::command::Command::override_usage::h8376e3ddd613d2c0(&var_840, &var_578, 
        &var_ac0);
    memcpy(&var_578, &var_840, 0x2bc);
    int64_t var_584;
    int64_t var_2bc = 0x8000000080 | var_584;
    int32_t var_57c;
    int32_t var_2b4 = var_57c;
    clap_builder::builder::arg::Arg::new::h615752503a9853ff(&var_840, "datethur]");
    clap_builder::builder::arg::Arg::short::h03e506d147b5ebc6(&var_ac0, &var_840, 0x64);
    clap_builder::builder::arg::Arg::long::h39808f1106120291(&var_840, &var_ac0, "datethur]");
    clap_builder::builder::arg::Arg::value_name::h068abcc96388e07c(&var_ac0, &var_840, 
        "STRINGdisplay time described by …");
    memcpy(&var_840, &var_ac0, 0x278);
    int32_t var_848;
    int32_t var_5c8 = var_848 | 0x20;
    int32_t var_844;
    int32_t var_5c4 = var_844;
    clap_builder::builder::arg::Arg::help::h5ceb2bac26bddee0(&var_ac0, &var_840, 
        "display time described by STRING…", 0x2b);
    clap_builder::builder::command::Command::arg::h1ee65cc2c12a7980(&var_840, &var_578, &var_ac0);
    clap_builder::builder::arg::Arg::new::h615752503a9853ff(&var_578, "filemode{");
    clap_builder::builder::arg::Arg::short::h03e506d147b5ebc6(&var_ac0, &var_578, 0x66);
    clap_builder::builder::arg::Arg::long::h39808f1106120291(&var_578, &var_ac0, "filemode{");
    clap_builder::builder::arg::Arg::value_name::h068abcc96388e07c(&var_ac0, &var_578, "DATEFIL");
    clap_builder::builder::arg::Arg::value_hint::h7643dd654bab30b4(&var_578, &var_ac0, 3);
    clap_builder::builder::arg::Arg::help::h5ceb2bac26bddee0(&var_ac0, &var_578, 
        "like --date; once for each line …", 0x2b);
    clap_builder::builder::command::Command::arg::h1ee65cc2c12a7980(&var_578, &var_840, &var_ac0);
    clap_builder::builder::arg::Arg::new::h615752503a9853ff(&var_840, "iso-8601, group=on line");
    clap_builder::builder::arg::Arg::short::h03e506d147b5ebc6(&var_ac0, &var_840, 0x49);
    clap_builder::builder::arg::Arg::long::h39808f1106120291(&var_840, &var_ac0, 
        "iso-8601, group=on line");
    clap_builder::builder::arg::Arg::value_name::h068abcc96388e07c(&var_ac0, &var_840, 
        "FMTrfc-emaildebugannotate the pa…");
    var_840 = "datethur]";
    int64_t var_838 = 4;
    char const* const var_830 = "hoursminutessecondsnssrc/uu/date…";
    int64_t var_828 = 5;
    char const* const var_820 = "minutessecondsnssrc/uu/date/src/…";
    int64_t var_818 = 7;
    char const* const var_810 = "secondsnssrc/uu/date/src/date.rs…";
    int64_t var_808 = 7;
    char const* const var_800 = "nssrc/uu/date/src/date.rs(uutils…";
    int64_t var_7f8 = 2;
    void var_2b0;
    _$LT$uucore..features..parser..shortcut_value_parser..ShortcutValueParser$u20$as$u20$core..convert..From$LT$I$GT$$GT$::from::haf7d63bc573d8470(&var_2b0, &var_840);
    clap_builder::builder::arg::Arg::value_parser::h2f6235d1ac0059ea(&var_840, &var_ac0, &var_2b0);
    clap_builder::builder::arg::Arg::num_args::h181a76feb0251421(&var_ac0, &var_840, 0);
    clap_builder::builder::arg::Arg::default_missing_value::h4cd694e0875710c2(&var_840, &var_ac0);
    clap_builder::builder::arg::Arg::help::h5ceb2bac26bddee0(&var_ac0, &var_840, 
        "output date/time in ISO 8601 for…", 0xc8);
    clap_builder::builder::command::Command::arg::h1ee65cc2c12a7980(&var_840, &var_578, &var_ac0);
    clap_builder::builder::arg::Arg::new::h615752503a9853ff(&var_578, 
        "rfc-emaildebugannotate the parse…");
    clap_builder::builder::arg::Arg::short::h03e506d147b5ebc6(&var_ac0, &var_578, 0x52);
    clap_builder::builder::arg::Arg::long::h39808f1106120291(&var_578, &var_ac0, 
        "rfc-emaildebugannotate the parse…");
    clap_builder::builder::arg::Arg::help::h5ceb2bac26bddee0(&var_ac0, &var_578, 
        "output date and time in RFC 5322…", 0x52);
    clap_builder::builder::arg::Arg::action::h7ed963dcd895ff95(&var_2b0, &var_ac0);
    clap_builder::builder::command::Command::arg::h1ee65cc2c12a7980(&var_578, &var_840, &var_2b0);
    clap_builder::builder::arg::Arg::new::h615752503a9853ff(&var_840, "rfc-3339saturday");
    clap_builder::builder::arg::Arg::long::h39808f1106120291(&var_ac0, &var_840, 
        "rfc-3339saturday");
    clap_builder::builder::arg::Arg::value_name::h068abcc96388e07c(&var_840, &var_ac0, 
        "FMTrfc-emaildebugannotate the pa…");
    var_ac0 = "datethur]";
    int64_t var_ab8 = 4;
    char const* const var_ab0 = "secondsnssrc/uu/date/src/date.rs…";
    int64_t var_aa8 = 7;
    char const* const var_aa0 = "nssrc/uu/date/src/date.rs(uutils…";
    int64_t var_a98 = 2;
    _$LT$uucore..features..parser..shortcut_value_parser..ShortcutValueParser$u20$as$u20$core..convert..From$LT$I$GT$$GT$::from::h8934af1115705cfc(&var_2b0, &var_ac0);
    clap_builder::builder::arg::Arg::value_parser::h2f6235d1ac0059ea(&var_ac0, &var_840, &var_2b0);
    clap_builder::builder::arg::Arg::help::h5ceb2bac26bddee0(&var_2b0, &var_ac0, 
        "output date/time in RFC 3339 for…", 0x97);
    clap_builder::builder::command::Command::arg::h1ee65cc2c12a7980(&var_840, &var_578, &var_2b0);
    clap_builder::builder::arg::Arg::new::h615752503a9853ff(&var_578, 
        "debugannotate the parsed date, a…");
    clap_builder::builder::arg::Arg::long::h39808f1106120291(&var_ac0, &var_578, 
        "debugannotate the parsed date, a…");
    clap_builder::builder::arg::Arg::help::h5ceb2bac26bddee0(&var_578, &var_ac0, 
        "annotate the parsed date, and wa…", 0x45);
    clap_builder::builder::arg::Arg::action::h7ed963dcd895ff95(&var_ac0, &var_578);
    clap_builder::builder::command::Command::arg::h1ee65cc2c12a7980(&var_578, &var_840, &var_ac0);
    clap_builder::builder::arg::Arg::new::h615752503a9853ff(&var_840, 
        "referencedisplay the last modifi…");
    clap_builder::builder::arg::Arg::short::h03e506d147b5ebc6(&var_ac0, &var_840, 0x72);
    clap_builder::builder::arg::Arg::long::h39808f1106120291(&var_840, &var_ac0, 
        "referencedisplay the last modifi…");
    clap_builder::builder::arg::Arg::value_name::h068abcc96388e07c(&var_ac0, &var_840, "FI");
    clap_builder::builder::arg::Arg::value_hint::h7643dd654bab30b4(&var_840, &var_ac0, 2);
    clap_builder::builder::arg::Arg::help::h5ceb2bac26bddee0(&var_ac0, &var_840, 
        "display the last modification ti…", 0x2a);
    clap_builder::builder::command::Command::arg::h1ee65cc2c12a7980(&var_840, &var_578, &var_ac0);
    clap_builder::builder::arg::Arg::new::h615752503a9853ff(&var_578, 
        "setuniversalutcprint or set Coor…");
    clap_builder::builder::arg::Arg::short::h03e506d147b5ebc6(&var_ac0, &var_578, 0x73);
    clap_builder::builder::arg::Arg::long::h39808f1106120291(&var_578, &var_ac0, 
        "setuniversalutcprint or set Coor…");
    clap_builder::builder::arg::Arg::value_name::h068abcc96388e07c(&var_ac0, &var_578, 
        "STRINGdisplay time described by …");
    clap_builder::builder::arg::Arg::help::h5ceb2bac26bddee0(&var_2b0, &var_ac0, 
        "set time described by STRINGhour…", 0x1c);
    clap_builder::builder::command::Command::arg::h1ee65cc2c12a7980(&var_578, &var_840, &var_2b0);
    clap_builder::builder::arg::Arg::new::h615752503a9853ff(&var_840, 
        "universalutcprint or set Coordin…");
    clap_builder::builder::arg::Arg::short::h03e506d147b5ebc6(&var_ac0, &var_840, 0x75);
    clap_builder::builder::arg::Arg::long::h39808f1106120291(&var_840, &var_ac0, 
        "universalutcprint or set Coordin…");
    clap_builder::builder::arg::Arg::alias::h4d0fb02b01cfb723(&var_ac0, &var_840);
    clap_builder::builder::arg::Arg::help::h5ceb2bac26bddee0(&var_840, &var_ac0, 
        "print or set Coordinated Univers…", 0x2d);
    clap_builder::builder::arg::Arg::action::h7ed963dcd895ff95(&var_ac0, &var_840);
    clap_builder::builder::command::Command::arg::h1ee65cc2c12a7980(&var_840, &var_578, &var_ac0);
    clap_builder::builder::arg::Arg::new::h615752503a9853ff(&var_578, "format");
    clap_builder::builder::command::Command::arg::h1ee65cc2c12a7980(arg1, &var_840, &var_578);
    return arg1;
}
