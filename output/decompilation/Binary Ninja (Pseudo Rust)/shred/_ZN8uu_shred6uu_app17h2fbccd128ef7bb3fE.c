
  fn uu_shred::uu_app::h2fbccd128ef7bb3f(arg1: i64) -> i64

{
    let mut var_7f8: ();
    clap_builder::builder::command::Command::new::hee9da9b1ef1ec750(&var_7f8, 
        uucore::util_name::h60d842bf27b05e82());
    let mut var_530: ();
    clap_builder::builder::command::Command::version::h7783fc680e59f748(&var_530, &var_7f8, 
        "0.0.28Overwrite the specified FI…");
    clap_builder::builder::command::Command::about::he63b06233f612c12(&var_7f8, &var_530, 
        "Overwrite the specified FILE(s) …", 0x84);
    clap_builder::builder::command::Command::after_help::hea35ac7759581864(&var_530, &var_7f8, 
        "Delete FILE(s) if --remove (-u) …", 0x65c);
    let mut var_a48: *const i8;
    uucore::format_usage::h76fcb2d15fbabc58(&var_a48, "{} [OPTION]... FILE...forcechang…", 0x16);
    clap_builder::builder::command::Command::override_usage::he58f6dcef1d3e6e0(&var_7f8, &var_530, 
        &var_a48);
    memcpy(&var_530, &var_7f8, 0x2bc);
    let var_53c: i64;
    let var_274: i64 = 0x8000000080 | var_53c;
    let var_534: i32;
    let var_26c: i32 = var_534;
    clap_builder::builder::arg::Arg::new::h787394f0bdb79a6c(&var_7f8, 
        "forcechange permissions to allow…");
    clap_builder::builder::arg::Arg::long::h54af09972f8a2312(&var_a48, &var_7f8, 
        "forcechange permissions to allow…");
    clap_builder::builder::arg::Arg::short::hb5349c0700ed9fae(&var_7f8, &var_a48, 0x66);
    clap_builder::builder::arg::Arg::help::h813ebe724b5bbcee(&var_a48, &var_7f8, 
        "change permissions to allow writ…", 0x30);
    let mut var_268: i64;
    clap_builder::builder::arg::Arg::action::hd380c8753f077b56(&var_268, &var_a48, 2);
    clap_builder::builder::command::Command::arg::hfc176cf175abe977(&var_7f8, &var_530, &var_268);
    clap_builder::builder::arg::Arg::new::h787394f0bdb79a6c(&var_530, 
        "iterationsoverwrite N times inst…");
    clap_builder::builder::arg::Arg::long::h54af09972f8a2312(&var_a48, &var_530, 
        "iterationsoverwrite N times inst…");
    clap_builder::builder::arg::Arg::short::hb5349c0700ed9fae(&var_530, &var_a48, 0x6e);
    clap_builder::builder::arg::Arg::help::h813ebe724b5bbcee(&var_a48, &var_530, 
        "overwrite N times instead of the…", 0x2c);
    clap_builder::builder::arg::Arg::value_name::h30ff45e9fdc7cb00(&var_530, &var_a48, 
        "NUMBER3Nshred this many bytes (s…");
    clap_builder::builder::arg::Arg::default_value::hbdbc1878ca5dfd1c(&var_a48, &var_530);
    clap_builder::builder::command::Command::arg::hfc176cf175abe977(&var_530, &var_7f8, &var_a48);
    clap_builder::builder::arg::Arg::new::h787394f0bdb79a6c(&var_7f8, "sizefilei128 as dyn ");
    clap_builder::builder::arg::Arg::long::h54af09972f8a2312(&var_a48, &var_7f8, 
        "sizefilei128 as dyn ");
    clap_builder::builder::arg::Arg::short::hb5349c0700ed9fae(&var_7f8, &var_a48, 0x73);
    clap_builder::builder::arg::Arg::value_name::h30ff45e9fdc7cb00(&var_a48, &var_7f8, 
        "Nshred this many bytes (suffixes…");
    clap_builder::builder::arg::Arg::help::h813ebe724b5bbcee(&var_268, &var_a48, 
        "shred this many bytes (suffixes …", 0x36);
    clap_builder::builder::command::Command::arg::hfc176cf175abe977(&var_7f8, &var_530, &var_268);
    clap_builder::builder::arg::Arg::new::h787394f0bdb79a6c(&var_530, 
        "udeallocate and remove file afte…");
    clap_builder::builder::arg::Arg::short::hb5349c0700ed9fae(&var_a48, &var_530, 0x75);
    clap_builder::builder::arg::Arg::help::h813ebe724b5bbcee(&var_530, &var_a48, 
        "deallocate and remove file after…", 0x2c);
    clap_builder::builder::arg::Arg::action::hd380c8753f077b56(&var_a48, &var_530, 2);
    clap_builder::builder::command::Command::arg::hfc176cf175abe977(&var_530, &var_7f8, &var_a48);
    clap_builder::builder::arg::Arg::new::h787394f0bdb79a6c(&var_7f8, 
        "removeHOWunlinklike -u but give …");
    clap_builder::builder::arg::Arg::long::h54af09972f8a2312(&var_a48, &var_7f8, 
        "removeHOWunlinklike -u but give …");
    clap_builder::builder::arg::Arg::value_name::h30ff45e9fdc7cb00(&var_7f8, &var_a48, 
        "HOWunlinklike -u but give contro…");
    var_a48 = "unlinklike -u but give control o…";
    let var_a40: i64 = 6;
    let var_a38: *const i8 = "wipe -> \x1b[2mzeroAnsi -- \x1b[…";
    let var_a30: i64 = 4;
    let var_a28: *const i8 = "wipesync";
    let var_a20: i64 = 8;
    _$LT$uucore..parser..shortcut_value_parser..ShortcutValueParser$u20$as$u20$core..convert..From$LT$I$GT$$GT$::from::h635bd80678b3b13f(&var_268, &var_a48);
    clap_builder::builder::arg::Arg::value_parser::he8424d9550ce276c(&var_a48, &var_7f8, &var_268);
    var_268 = 0;
    let var_260: i64 = 1;
    let var_258: i8 = 0;
    clap_builder::builder::arg::Arg::num_args::h78f1ca1618105ed6(&var_7f8, &var_a48, &var_268);
    memcpy(&var_a48, &var_7f8, 0x248);
    let var_5b0: i32;
    let var_800: i32 = 0x80 | var_5b0;
    let var_5ac: i32;
    let var_7fc: i32 = var_5ac;
    clap_builder::builder::arg::Arg::default_missing_value::hbaf40cb40238d7f8(&var_7f8, &var_a48);
    clap_builder::builder::arg::Arg::help::h813ebe724b5bbcee(&var_a48, &var_7f8, 
        "like -u but give control on HOW …", 0x35);
    clap_builder::builder::arg::Arg::action::hd380c8753f077b56(&var_268, &var_a48, 0);
    clap_builder::builder::command::Command::arg::hfc176cf175abe977(&var_7f8, &var_530, &var_268);
    clap_builder::builder::arg::Arg::new::h787394f0bdb79a6c(&var_530, 
        "verboseshow progressexactdo not …");
    clap_builder::builder::arg::Arg::long::h54af09972f8a2312(&var_a48, &var_530, 
        "verboseshow progressexactdo not …");
    clap_builder::builder::arg::Arg::short::hb5349c0700ed9fae(&var_530, &var_a48, 0x76);
    clap_builder::builder::arg::Arg::help::h813ebe724b5bbcee(&var_a48, &var_530, 
        "show progressexactdo not round f…", 0xd);
    clap_builder::builder::arg::Arg::action::hd380c8753f077b56(&var_268, &var_a48, 2);
    clap_builder::builder::command::Command::arg::hfc176cf175abe977(&var_530, &var_7f8, &var_268);
    clap_builder::builder::arg::Arg::new::h787394f0bdb79a6c(&var_7f8, 
        "exactdo not round file sizes up …");
    clap_builder::builder::arg::Arg::long::h54af09972f8a2312(&var_a48, &var_7f8, 
        "exactdo not round file sizes up …");
    clap_builder::builder::arg::Arg::short::hb5349c0700ed9fae(&var_7f8, &var_a48, 0x78);
    clap_builder::builder::arg::Arg::help::h813ebe724b5bbcee(&var_a48, &var_7f8, 
        "do not round file sizes up to th…", 0x5c);
    clap_builder::builder::arg::Arg::action::hd380c8753f077b56(&var_268, &var_a48, 2);
    clap_builder::builder::command::Command::arg::hfc176cf175abe977(&var_7f8, &var_530, &var_268);
    clap_builder::builder::arg::Arg::new::h787394f0bdb79a6c(&var_530, 
        "zeroAnsi -- \x1b[8mhelpNoneshimn…");
    clap_builder::builder::arg::Arg::long::h54af09972f8a2312(&var_a48, &var_530, 
        "zeroAnsi -- \x1b[8mhelpNoneshimn…");
    clap_builder::builder::arg::Arg::short::hb5349c0700ed9fae(&var_530, &var_a48, 0x7a);
    clap_builder::builder::arg::Arg::help::h813ebe724b5bbcee(&var_a48, &var_530, 
        "add a final overwrite with zeros…", 0x32);
    clap_builder::builder::arg::Arg::action::hd380c8753f077b56(&var_268, &var_a48, 2);
    clap_builder::builder::command::Command::arg::hfc176cf175abe977(&var_530, &var_7f8, &var_268);
    clap_builder::builder::arg::Arg::new::h787394f0bdb79a6c(&var_7f8, "filei128 as dyn ");
    clap_builder::builder::arg::Arg::action::hd380c8753f077b56(&var_a48, &var_7f8, 1);
    clap_builder::builder::arg::Arg::value_hint::hfa864e063b6c31fd(&var_7f8, &var_a48, 3);
    clap_builder::builder::command::Command::arg::hfc176cf175abe977(arg1, &var_530, &var_7f8);
    arg1
}
