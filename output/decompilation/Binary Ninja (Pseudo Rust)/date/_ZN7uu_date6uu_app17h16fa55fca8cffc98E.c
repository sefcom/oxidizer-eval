
  fn uu_date::uu_app::h16fa55fca8cffc98(arg1: i64) -> i64

{
    let mut var_578: ();
    clap_builder::builder::command::Command::new::hab7ef2240f500938(&var_578, 
        uucore::util_name::h074417a1e6395129());
    let mut var_840: *const i8;
    clap_builder::builder::command::Command::version::h4e38d46b7dcbbb28(&var_840, &var_578);
    clap_builder::builder::command::Command::about::ha558da4cdcdbf178(&var_578, &var_840);
    let mut var_ac0: *const i8;
    uucore::format_usage::he053403a896311ed(&var_ac0, "{} [OPTION]... [+FORMAT]...\n{} …", 0x42);
    clap_builder::builder::command::Command::override_usage::h8376e3ddd613d2c0(&var_840, &var_578, 
        &var_ac0);
    memcpy(&var_578, &var_840, 0x2bc);
    let var_584: i64;
    let var_2bc: i64 = 0x8000000080 | var_584;
    let var_57c: i32;
    let var_2b4: i32 = var_57c;
    clap_builder::builder::arg::Arg::new::h615752503a9853ff(&var_840, "datethur]");
    clap_builder::builder::arg::Arg::short::h03e506d147b5ebc6(&var_ac0, &var_840, 0x64);
    clap_builder::builder::arg::Arg::long::h39808f1106120291(&var_840, &var_ac0, "datethur]");
    clap_builder::builder::arg::Arg::value_name::h068abcc96388e07c(&var_ac0, &var_840, 
        "STRINGdisplay time described by …");
    memcpy(&var_840, &var_ac0, 0x278);
    let var_848: i32;
    let var_5c8: i32 = var_848 | 0x20;
    let var_844: i32;
    let var_5c4: i32 = var_844;
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
    let var_838: i64 = 4;
    let var_830: *const i8 = "hoursminutessecondsnssrc/uu/date…";
    let var_828: i64 = 5;
    let var_820: *const i8 = "minutessecondsnssrc/uu/date/src/…";
    let var_818: i64 = 7;
    let var_810: *const i8 = "secondsnssrc/uu/date/src/date.rs…";
    let var_808: i64 = 7;
    let var_800: *const i8 = "nssrc/uu/date/src/date.rs(uutils…";
    let var_7f8: i64 = 2;
    let mut var_2b0: ();
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
    let var_ab8: i64 = 4;
    let var_ab0: *const i8 = "secondsnssrc/uu/date/src/date.rs…";
    let var_aa8: i64 = 7;
    let var_aa0: *const i8 = "nssrc/uu/date/src/date.rs(uutils…";
    let var_a98: i64 = 2;
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
    arg1
}
