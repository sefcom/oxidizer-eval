
  fn uu_rm::uu_app::h97a746416a9c921d(arg1: i64) -> i64

{
    let mut var_a58: ();
    clap_builder::builder::command::Command::new::hb09e5080166a2e6c(&var_a58, 
        uucore::util_name::h60d842bf27b05e82());
    let mut var_540: ();
    clap_builder::builder::command::Command::version::he768c891b31ea1fd(&var_540, &var_a58, 
        "0.0.28Remove (unlink) the FILE(s…");
    clap_builder::builder::command::Command::about::hb9e2e17e43472c68(&var_a58, &var_540, 
        "Remove (unlink) the FILE(s){} [O…", 0x1b);
    let mut var_790: ();
    uucore::format_usage::h76fcb2d15fbabc58(&var_790, "{} [OPTION]... FILE...ignore non…", 0x16);
    clap_builder::builder::command::Command::override_usage::hc61ed0e30208189e(&var_540, &var_a58, 
        &var_790);
    memcpy(&var_a58, &var_540, 0x2bc);
    let var_284: i64;
    let var_79c: i64 = 0x8800000088 | var_284;
    let var_27c: i32;
    let var_794: i32 = var_27c;
    clap_builder::builder::arg::Arg::new::h908438ea192659ea(&var_540, 
        "forceone-file-systempreserve-roo…");
    clap_builder::builder::arg::Arg::short::h4ff022eda161f92a(&var_790, &var_540, 0x66);
    clap_builder::builder::arg::Arg::long::h234eb1cc739d687e(&var_540, &var_790, 
        "forceone-file-systempreserve-roo…");
    clap_builder::builder::arg::Arg::help::h31a015ef37afbc49(&var_790, &var_540, 
        "ignore nonexistent files and arg…", 0x34);
    let mut var_278: *const i8;
    clap_builder::builder::arg::Arg::action::hec16d8bb06f0595e(&var_278, &var_790, 2);
    clap_builder::builder::command::Command::arg::h382ae0b50af7b5c8(&var_540, &var_a58, &var_278);
    clap_builder::builder::arg::Arg::new::h908438ea192659ea(&var_a58, 
        "promptprompt-morerecursiveverbos…");
    clap_builder::builder::arg::Arg::short::h4ff022eda161f92a(&var_790, &var_a58, 0x69);
    clap_builder::builder::arg::Arg::help::h31a015ef37afbc49(&var_a58, &var_790, 
        "prompt before every removalpromp…", 0x1b);
    var_278 = "prompt-morerecursiveverbose-pres…";
    let var_270: i64 = 0xb;
    let var_268: *const i8 = "interactiveforceone-file-systemp…";
    let var_260: i64 = 0xb;
    clap_builder::builder::arg::Arg::overrides_with_all::h6995948dd6bec0cc(&var_790, &var_a58, 
        &var_278);
    clap_builder::builder::arg::Arg::action::hec16d8bb06f0595e(&var_278, &var_790, 2);
    clap_builder::builder::command::Command::arg::h382ae0b50af7b5c8(&var_a58, &var_540, &var_278);
    clap_builder::builder::arg::Arg::new::h908438ea192659ea(&var_540, 
        "prompt-morerecursiveverbose-pres…");
    clap_builder::builder::arg::Arg::short::h4ff022eda161f92a(&var_790, &var_540, 0x49);
    clap_builder::builder::arg::Arg::help::h31a015ef37afbc49(&var_540, &var_790, 
        "prompt once before removing more…", 0xa1);
    var_278 = "promptprompt-morerecursiveverbos…";
    let var_270_1: i64 = 6;
    let mut var_268_1: *const i8 = "interactiveforceone-file-systemp…";
    let var_260_1: i64 = 0xb;
    clap_builder::builder::arg::Arg::overrides_with_all::h6995948dd6bec0cc(&var_790, &var_540, 
        &var_278);
    clap_builder::builder::arg::Arg::action::hec16d8bb06f0595e(&var_278, &var_790, 2);
    clap_builder::builder::command::Command::arg::h382ae0b50af7b5c8(&var_540, &var_a58, &var_278);
    clap_builder::builder::arg::Arg::new::h908438ea192659ea(&var_a58, 
        "interactiveforceone-file-systemp…");
    clap_builder::builder::arg::Arg::long::h234eb1cc739d687e(&var_790, &var_a58, 
        "interactiveforceone-file-systemp…");
    clap_builder::builder::arg::Arg::help::h31a015ef37afbc49(&var_a58, &var_790, 
        "prompt according to WHEN: never,…", 0x58);
    clap_builder::builder::arg::Arg::value_name::he884a034805b20c7(&var_790, &var_a58);
    var_278 = nullptr;
    let var_270_2: i64 = 1;
    var_268_1 = 0;
    clap_builder::builder::arg::Arg::num_args::hb1ba2bcb33ab4c06(&var_a58, &var_790, &var_278);
    memcpy(&var_790, &var_a58, 0x248);
    let var_810: i32;
    let var_548: i32 = 0x80 | var_810;
    let var_80c: i32;
    let var_544: i32 = var_80c;
    clap_builder::builder::arg::Arg::default_missing_value::hce20ad361582aab4(&var_a58, &var_790);
    var_278 = "promptprompt-morerecursiveverbos…";
    let var_270_3: i64 = 6;
    let var_268_2: *const i8 = "prompt-morerecursiveverbose-pres…";
    let var_260_2: i64 = 0xb;
    clap_builder::builder::arg::Arg::overrides_with_all::h6995948dd6bec0cc(&var_790, &var_a58, 
        &var_278);
    clap_builder::builder::command::Command::arg::h382ae0b50af7b5c8(&var_a58, &var_540, &var_790);
    clap_builder::builder::arg::Arg::new::h908438ea192659ea(&var_540, 
        "one-file-systempreserve-rootprom…");
    clap_builder::builder::arg::Arg::long::h234eb1cc739d687e(&var_790, &var_540, 
        "one-file-systempreserve-rootprom…");
    clap_builder::builder::arg::Arg::help::h31a015ef37afbc49(&var_540, &var_790, 
        "when removing a hierarchy recurs…", 0xa3);
    clap_builder::builder::arg::Arg::action::hec16d8bb06f0595e(&var_790, &var_540, 2);
    clap_builder::builder::command::Command::arg::h382ae0b50af7b5c8(&var_540, &var_a58, &var_790);
    clap_builder::builder::arg::Arg::new::h908438ea192659ea(&var_a58, 
        "no-preserve-rootconnection reset…");
    clap_builder::builder::arg::Arg::long::h234eb1cc739d687e(&var_790, &var_a58, 
        "no-preserve-rootconnection reset…");
    clap_builder::builder::arg::Arg::help::h31a015ef37afbc49(&var_a58, &var_790, 
        "do not treat '/' speciallydo not…", 0x1a);
    clap_builder::builder::arg::Arg::action::hec16d8bb06f0595e(&var_790, &var_a58, 2);
    clap_builder::builder::command::Command::arg::h382ae0b50af7b5c8(&var_a58, &var_540, &var_790);
    clap_builder::builder::arg::Arg::new::h908438ea192659ea(&var_540, 
        "preserve-rootpromptprompt-morere…");
    clap_builder::builder::arg::Arg::long::h234eb1cc739d687e(&var_790, &var_540, 
        "preserve-rootpromptprompt-morere…");
    clap_builder::builder::arg::Arg::help::h31a015ef37afbc49(&var_540, &var_790, 
        "do not remove '/' (default)remov…", 0x1b);
    clap_builder::builder::arg::Arg::action::hec16d8bb06f0595e(&var_790, &var_540, 2);
    clap_builder::builder::command::Command::arg::h382ae0b50af7b5c8(&var_540, &var_a58, &var_790);
    clap_builder::builder::arg::Arg::new::h908438ea192659ea(&var_a58, 
        "recursiveverbose-presume-input-t…");
    clap_builder::builder::arg::Arg::short::h4ff022eda161f92a(&var_790, &var_a58, 0x72);
    clap_builder::builder::arg::Arg::visible_short_alias::h6acab0547122913a(&var_a58, &var_790, 
        0x52);
    clap_builder::builder::arg::Arg::long::h234eb1cc739d687e(&var_790, &var_a58, 
        "recursiveverbose-presume-input-t…");
    clap_builder::builder::arg::Arg::help::h31a015ef37afbc49(&var_a58, &var_790, 
        "remove directories and their con…", 0x31);
    clap_builder::builder::arg::Arg::action::hec16d8bb06f0595e(&var_790, &var_a58, 2);
    clap_builder::builder::command::Command::arg::h382ae0b50af7b5c8(&var_a58, &var_540, &var_790);
    clap_builder::builder::arg::Arg::new::h908438ea192659ea(&var_540, 
        "dirinteractiveforceone-file-syst…");
    clap_builder::builder::arg::Arg::short::h4ff022eda161f92a(&var_790, &var_540, 0x64);
    clap_builder::builder::arg::Arg::long::h234eb1cc739d687e(&var_540, &var_790, 
        "dirinteractiveforceone-file-syst…");
    clap_builder::builder::arg::Arg::help::h31a015ef37afbc49(&var_790, &var_540, 
        "remove empty directoriesexplain …", 0x18);
    clap_builder::builder::arg::Arg::action::hec16d8bb06f0595e(&var_278, &var_790, 2);
    clap_builder::builder::command::Command::arg::h382ae0b50af7b5c8(&var_540, &var_a58, &var_278);
    clap_builder::builder::arg::Arg::new::h908438ea192659ea(&var_a58, 
        "verbose-presume-input-ttyfiles0.…");
    clap_builder::builder::arg::Arg::short::h4ff022eda161f92a(&var_790, &var_a58, 0x76);
    clap_builder::builder::arg::Arg::long::h234eb1cc739d687e(&var_a58, &var_790, 
        "verbose-presume-input-ttyfiles0.…");
    clap_builder::builder::arg::Arg::help::h31a015ef37afbc49(&var_790, &var_a58, 
        "explain what is being donepresum…", 0x1a);
    clap_builder::builder::arg::Arg::action::hec16d8bb06f0595e(&var_278, &var_790, 2);
    clap_builder::builder::command::Command::arg::h382ae0b50af7b5c8(&var_a58, &var_540, &var_278);
    clap_builder::builder::arg::Arg::new::h908438ea192659ea(&var_540, 
        "-presume-input-ttyfiles0.0.28Rem…");
    clap_builder::builder::arg::Arg::long::h234eb1cc739d687e(&var_790, &var_540, 
        "presume-input-tty: cannot remove…");
    clap_builder::builder::arg::Arg::alias::h50a51483130f7d11(&var_540, &var_790, 
        "-presume-input-ttyfiles0.0.28Rem…");
    memcpy(&var_790, &var_540, 0x248);
    let var_2f8: i32;
    let var_548_1: i32 = var_2f8 | 4;
    let var_2f4: i32;
    let var_544_1: i32 = var_2f4;
    clap_builder::builder::arg::Arg::action::hec16d8bb06f0595e(&var_278, &var_790, 2);
    clap_builder::builder::command::Command::arg::h382ae0b50af7b5c8(&var_540, &var_a58, &var_278);
    clap_builder::builder::arg::Arg::new::h908438ea192659ea(&var_a58, 
        "files0.0.28Remove (unlink) the F…");
    clap_builder::builder::arg::Arg::action::hec16d8bb06f0595e(&var_790, &var_a58, 1);
    var_278 = 2;
    clap_builder::builder::arg::Arg::value_parser::hb9d8700438cc2377(&var_a58, &var_790, &var_278);
    clap_builder::builder::arg::Arg::num_args::h746b8778ba3b0804(&var_790, &var_a58);
    clap_builder::builder::arg::Arg::value_hint::h99962af29f80430a(&var_a58, &var_790, 2);
    clap_builder::builder::command::Command::arg::h382ae0b50af7b5c8(arg1, &var_540, &var_a58);
    arg1
}
