
  int64_t uu_touch::uu_app::h87dc9501cc8a91b8(int64_t arg1)

{
    void var_578;
    clap_builder::builder::command::Command::new::h10ef0288fdc1c0c3(&var_578, 
        uucore::util_name::h074417a1e6395129());
    int64_t var_ac8;
    clap_builder::builder::command::Command::version::h6651eaf8154ccc2a(&var_ac8, &var_578);
    clap_builder::builder::command::Command::about::hc8296a2180838526(&var_578, &var_ac8);
    int128_t var_7f8;
    uucore::format_usage::he053403a896311ed(&var_7f8, "{} [OPTION]... [USER]Print help …", 0x15);
    clap_builder::builder::command::Command::override_usage::h9783bb91f070d003(&var_ac8, &var_578, 
        &var_7f8);
    memcpy(&var_578, &var_ac8, 0x2bc);
    int64_t var_80c;
    int64_t var_2bc = 0x8008000080080 | var_80c;
    int32_t var_804;
    int32_t var_2b4 = var_804;
    clap_builder::builder::arg::Arg::new::h35ca4e47e2604b10(&var_ac8, "helpt");
    clap_builder::builder::arg::Arg::long::hbde78b478d4040c6(&var_7f8, &var_ac8, "helpt");
    clap_builder::builder::arg::Arg::help::h4dc1cb6f683f0dca(&var_ac8, &var_7f8, 
        "Print help information.change on…", 0x17);
    clap_builder::builder::arg::Arg::action::ha199da144e4cf889(&var_7f8, &var_ac8, 5);
    clap_builder::builder::command::Command::arg::hafb69053ac81e9df(&var_ac8, &var_578, &var_7f8);
    clap_builder::builder::arg::Arg::new::h35ca4e47e2604b10(&var_578, 
        "accessmodificationno-createno-de…");
    clap_builder::builder::arg::Arg::short::h56a23b2d61bba70e(&var_7f8, &var_578, 0x61);
    clap_builder::builder::arg::Arg::help::h4dc1cb6f683f0dca(&var_578, &var_7f8, 
        "change only the access timeuse […", 0x1b);
    clap_builder::builder::arg::Arg::action::ha199da144e4cf889(&var_7f8, &var_578, 2);
    clap_builder::builder::command::Command::arg::hafb69053ac81e9df(&var_578, &var_ac8, &var_7f8);
    clap_builder::builder::arg::Arg::new::h35ca4e47e2604b10(&var_ac8, 
        "timestampaccessmodificationno-cr…");
    clap_builder::builder::arg::Arg::short::h56a23b2d61bba70e(&var_7f8, &var_ac8, 0x74);
    clap_builder::builder::arg::Arg::help::h4dc1cb6f683f0dca(&var_ac8, &var_7f8, 
        "use [[CC]YY]MMDDhhmm[.ss] instea…", 0x35);
    clap_builder::builder::arg::Arg::value_name::h8a42aced0f5f8123(&var_7f8, &var_ac8, 
        "STAMPparse argument and use it i…");
    clap_builder::builder::command::Command::arg::hafb69053ac81e9df(&var_ac8, &var_578, &var_7f8);
    clap_builder::builder::arg::Arg::new::h35ca4e47e2604b10(&var_578, "datethur]");
    clap_builder::builder::arg::Arg::short::h56a23b2d61bba70e(&var_7f8, &var_578, 0x64);
    clap_builder::builder::arg::Arg::long::hbde78b478d4040c6(&var_578, &var_7f8, "datethur]");
    memcpy(&var_7f8, &var_578, 0x278);
    int32_t var_300;
    int32_t var_580 = var_300 | 0x20;
    int32_t var_2fc;
    int32_t var_57c = var_2fc;
    clap_builder::builder::arg::Arg::help::h4dc1cb6f683f0dca(&var_578, &var_7f8, 
        "parse argument and use it instea…", 0x31);
    clap_builder::builder::arg::Arg::value_name::h8a42aced0f5f8123(&var_7f8, &var_578, 
        "STRINGchange only the modificati…");
    char const* const var_2b0;
    clap_builder::builder::arg::Arg::conflicts_with::hd67907f812da2337(&var_2b0, &var_7f8);
    clap_builder::builder::command::Command::arg::hafb69053ac81e9df(&var_578, &var_ac8, &var_2b0);
    clap_builder::builder::arg::Arg::new::h35ca4e47e2604b10(&var_ac8, 
        "modificationno-createno-derefere…");
    clap_builder::builder::arg::Arg::short::h56a23b2d61bba70e(&var_7f8, &var_ac8, 0x6d);
    clap_builder::builder::arg::Arg::help::h4dc1cb6f683f0dca(&var_ac8, &var_7f8, 
        "change only the modification tim…", 0x21);
    clap_builder::builder::arg::Arg::action::ha199da144e4cf889(&var_7f8, &var_ac8, 2);
    clap_builder::builder::command::Command::arg::hafb69053ac81e9df(&var_ac8, &var_578, &var_7f8);
    clap_builder::builder::arg::Arg::new::h35ca4e47e2604b10(&var_578, 
        "no-createno-dereferencefilessrc/…");
    clap_builder::builder::arg::Arg::short::h56a23b2d61bba70e(&var_7f8, &var_578, 0x63);
    clap_builder::builder::arg::Arg::long::hbde78b478d4040c6(&var_578, &var_7f8, 
        "no-createno-dereferencefilessrc/…");
    clap_builder::builder::arg::Arg::help::h4dc1cb6f683f0dca(&var_7f8, &var_578, 
        "do not create any filesaffect ea…", 0x17);
    clap_builder::builder::arg::Arg::action::ha199da144e4cf889(&var_2b0, &var_7f8, 2);
    clap_builder::builder::command::Command::arg::hafb69053ac81e9df(&var_578, &var_ac8, &var_2b0);
    clap_builder::builder::arg::Arg::new::h35ca4e47e2604b10(&var_ac8, 
        "no-dereferencefilessrc/uu/touch/…");
    clap_builder::builder::arg::Arg::short::h56a23b2d61bba70e(&var_7f8, &var_ac8, 0x68);
    clap_builder::builder::arg::Arg::long::hbde78b478d4040c6(&var_ac8, &var_7f8, 
        "no-dereferencefilessrc/uu/touch/…");
    clap_builder::builder::arg::Arg::help::h4dc1cb6f683f0dca(&var_7f8, &var_ac8, 
        "affect each symbolic link instea…", 0x77);
    clap_builder::builder::arg::Arg::action::ha199da144e4cf889(&var_2b0, &var_7f8, 2);
    clap_builder::builder::command::Command::arg::hafb69053ac81e9df(&var_ac8, &var_578, &var_2b0);
    clap_builder::builder::arg::Arg::new::h35ca4e47e2604b10(&var_578, 
        "referencetimestampaccessmodifica…");
    clap_builder::builder::arg::Arg::short::h56a23b2d61bba70e(&var_7f8, &var_578, 0x72);
    clap_builder::builder::arg::Arg::long::hbde78b478d4040c6(&var_578, &var_7f8, 
        "referencetimestampaccessmodifica…");
    clap_builder::builder::arg::Arg::help::h4dc1cb6f683f0dca(&var_7f8, &var_578, 
        "use this file's times instead of…", 0x31);
    clap_builder::builder::arg::Arg::value_name::h8a42aced0f5f8123(&var_578, &var_7f8, "FILEWO");
    var_2b0 = 2;
    clap_builder::builder::arg::Arg::value_parser::h3ff96a327a237a6c(&var_7f8, &var_578, &var_2b0);
    clap_builder::builder::arg::Arg::value_hint::h5b1a7c6849c59b5a(&var_578, &var_7f8);
    clap_builder::builder::arg::Arg::conflicts_with::hd67907f812da2337(&var_7f8, &var_578);
    clap_builder::builder::command::Command::arg::hafb69053ac81e9df(&var_578, &var_ac8, &var_7f8);
    clap_builder::builder::arg::Arg::new::h35ca4e47e2604b10(&var_ac8, "timeHashj");
    clap_builder::builder::arg::Arg::long::hbde78b478d4040c6(&var_7f8, &var_ac8, "timeHashj");
    clap_builder::builder::arg::Arg::help::h4dc1cb6f683f0dca(&var_ac8, &var_7f8, 
        "change only the specified time: …", 0x7a);
    clap_builder::builder::arg::Arg::value_name::h8a42aced0f5f8123(&var_7f8, &var_ac8, "WO");
    char const* const var_a98 = "atimemtime(uutils coreutils) 0.0…";
    int64_t var_a90 = 5;
    int64_t var_ab0 = -0x8000000000000000;
    int128_t var_ad8;
    int128_t var_aa8 = var_ad8;
    var_ac8 = 0;
    int64_t var_ac0 = 8;
    int64_t var_ab8 = 0;
    char var_a88 = 0;
    clap_builder::builder::possible_value::PossibleValue::alias::h1739b203ea3aa284(&var_2b0, 
        &var_ac8, "accessmodificationno-createno-de…");
    int128_t var_b20;
    clap_builder::builder::possible_value::PossibleValue::alias::h1739b203ea3aa284(&var_b20, 
        &var_2b0, "usemodify-setting times of : No …");
    char const* const var_a98_1 = "mtime(uutils coreutils) 0.0.30Up…";
    int64_t var_a90_1 = 5;
    int64_t var_ab0_1 = -0x8000000000000000;
    int128_t var_aa8_1 = var_ad8;
    var_ac8 = 0;
    int64_t var_ac0_1 = 8;
    int64_t var_ab8_1 = 0;
    char var_a88_1 = 0;
    clap_builder::builder::possible_value::PossibleValue::alias::h1739b203ea3aa284(&var_2b0, 
        &var_ac8, "modify-setting times of : No suc…");
    var_ac8 = var_b20;
    int128_t var_b10;
    var_ab8_1 = var_b10;
    int128_t var_b00;
    int128_t var_aa8_2 = var_b00;
    int128_t var_af0;
    var_a98_1 = var_af0;
    int64_t var_ae0;
    var_a88_1 = var_ae0;
    int128_t var_a80 = var_2b0;
    int128_t var_2a0;
    int64_t var_a70 = var_2a0;
    int128_t var_290;
    int128_t var_a60 = var_290;
    int128_t var_280;
    int128_t var_a50 = var_280;
    int64_t var_270;
    int64_t var_a40 = var_270;
    _$LT$uucore..features..parser..shortcut_value_parser..ShortcutValueParser$u20$as$u20$core..convert..From$LT$I$GT$$GT$::from::h33cd046ef2339554(&var_b20, &var_ac8);
    clap_builder::builder::arg::Arg::value_parser::h20c176f928c916fd(&var_2b0, &var_7f8, &var_b20);
    clap_builder::builder::command::Command::arg::hafb69053ac81e9df(&var_ac8, &var_578, &var_2b0);
    clap_builder::builder::arg::Arg::new::h35ca4e47e2604b10(&var_578, 
        "filessrc/uu/touch/src/touch.rs19…");
    clap_builder::builder::arg::Arg::action::ha199da144e4cf889(&var_7f8, &var_578, 1);
    clap_builder::builder::arg::Arg::num_args::ha8e20b832028993f(&var_578, &var_7f8);
    clap_builder::builder::arg::Arg::value_hint::h5b1a7c6849c59b5a(&var_7f8, &var_578);
    clap_builder::builder::command::Command::arg::hafb69053ac81e9df(&var_578, &var_ac8, &var_7f8);
    var_a80 = 1;
    *var_a80[8] = 0;
    var_ac8 = 0;
    int64_t var_ac0_2 = 8;
    var_a70 = 0;
    var_ab8_1 = {0};
    var_aa8_2 = 8;
    var_aa8_2 = {0};
    int64_t var_a90_2 = 8;
    var_a88_1 = 0;
    clap_builder::builder::arg_group::ArgGroup::id::h74e134ac99b8fdff(&var_7f8, &var_ac8);
    var_2b0 = "timestampaccessmodificationno-cr…";
    int64_t var_2a8 = 9;
    var_2a0 = "datethur]";
    *var_2a0[8] = 4;
    var_290 = "referencetimestampaccessmodifica…";
    *var_290[8] = 9;
    clap_builder::builder::arg_group::ArgGroup::args::h1c3c370458aa2bd4(&var_ac8, &var_7f8, 
        &var_2b0);
    *var_a70[1] = 1;
    var_7f8 = var_ac8;
    int128_t var_7e8 = var_ab8_1;
    int128_t var_7d8 = var_aa8_2;
    int128_t var_7c8 = var_a98_1;
    int128_t var_7b8 = var_a88_1;
    int64_t var_7a8 = *var_a80[8];
    char var_7a0 = var_a70;
    char var_79f = *var_a70[1];
    int32_t var_79e = *var_a70[2];
    int16_t var_79a = *var_a70[6];
    clap_builder::builder::command::Command::group::h588dbe33da3482ed(arg1, &var_578, &var_7f8);
    return arg1;
}
