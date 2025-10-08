
  fn uu_uniq::uu_app::hcc95d1d241a015fc(arg1: i64) -> i64

{
    let mut var_578: ();
    clap_builder::builder::command::Command::new::hde69a385a5db5eef(&var_578, 
        uucore::util_name::h074417a1e6395129());
    let mut var_840: *const i8;
    clap_builder::builder::command::Command::version::h82933b2904dfd558(&var_840, &var_578);
    clap_builder::builder::command::Command::about::h7b2b986b366d9deb(&var_578, &var_840);
    let mut var_ac0: *const i8;
    uucore::format_usage::he053403a896311ed(&var_ac0, "{} [OPTION]... [INPUT [OUTPUT]]F…", 0x1f);
    clap_builder::builder::command::Command::override_usage::h8bb5f8ed0d2dc6cc(&var_840, &var_578, 
        &var_ac0);
    memcpy(&var_578, &var_840, 0x2bc);
    let var_584: i64;
    let var_2bc: i64 = 0x8000000080 | var_584;
    let var_57c: i32;
    let var_2b4: i32 = var_57c;
    clap_builder::builder::command::Command::after_help::h245f9a5b41f23462(&var_840, &var_578);
    clap_builder::builder::arg::Arg::new::h3b7e4712a4d626b2(&var_578, 
        "all-repeatedcheck-charscountigno…");
    clap_builder::builder::arg::Arg::short::h183e18805da6d851(&var_ac0, &var_578, 0x44);
    clap_builder::builder::arg::Arg::long::ha75f5eebc05afc3a(&var_578, &var_ac0, 
        "all-repeatedcheck-charscountigno…");
    var_ac0 = "nonehelpNoneshimboth\x1b[0mnameC…";
    let var_ab8: i64 = 4;
    let var_ab0: *const i8 = "prependprint all duplicate lines…";
    let var_aa8: i64 = 7;
    let var_aa0: *const i8 = "separate\n       extern "ENOTUNI…";
    let var_a98: i64 = 8;
    let mut var_2b0: i64;
    _$LT$uucore..features..parser..shortcut_value_parser..ShortcutValueParser$u20$as$u20$core..convert..From$LT$I$GT$$GT$::from::hf8b99bb9bce6cfaf(&var_2b0, &var_ac0);
    clap_builder::builder::arg::Arg::value_parser::h3cb8544ab5861396(&var_ac0, &var_578, &var_2b0);
    clap_builder::builder::arg::Arg::help::h0eb09b9d405a57af(&var_578, &var_ac0, 
        "print all duplicate lines. Delim…", 0x4f);
    clap_builder::builder::arg::Arg::value_name::h2138a6044f1c5c61(&var_ac0, &var_578, 
        "delimit-methodappendshow all ite…");
    clap_builder::builder::arg::Arg::num_args::h289a892a01df22ca(&var_578, &var_ac0, 0);
    clap_builder::builder::arg::Arg::default_missing_value::ha83625cce24bcc81(&var_ac0, &var_578, 
        "nonehelpNoneshimboth\x1b[0mnameC…");
    memcpy(&var_2b0, &var_ac0, 0x278);
    let var_848: i32;
    let var_38: i32 = 0x80 | var_848;
    let var_844: i32;
    let var_34: i32 = var_844;
    clap_builder::builder::command::Command::arg::h0acc9ddbe8cb7ea7(&var_578, &var_840, &var_2b0);
    clap_builder::builder::arg::Arg::new::h3b7e4712a4d626b2(&var_840, 
        "groupfilessrc/uu/uniq/src/uniq.r…");
    clap_builder::builder::arg::Arg::long::ha75f5eebc05afc3a(&var_ac0, &var_840, 
        "groupfilessrc/uu/uniq/src/uniq.r…");
    var_840 = "separate\n       extern "ENOTUNI…";
    let var_838: i64 = 8;
    let var_830: *const i8 = "prependprint all duplicate lines…";
    let var_828: i64 = 7;
    let var_820: *const i8 = "appendshow all items, separating…";
    let var_818: i64 = 6;
    let var_810: *const i8 = &data_41913c[0x10];
    let var_808: i64 = 4;
    _$LT$uucore..features..parser..shortcut_value_parser..ShortcutValueParser$u20$as$u20$core..convert..From$LT$I$GT$$GT$::from::he9d0a3bbf7934a6b(&var_2b0, &var_840);
    clap_builder::builder::arg::Arg::value_parser::h3cb8544ab5861396(&var_840, &var_ac0, &var_2b0);
    clap_builder::builder::arg::Arg::help::h0eb09b9d405a57af(&var_ac0, &var_840, 
        "show all items, separating group…", 0x49);
    clap_builder::builder::arg::Arg::value_name::h2138a6044f1c5c61(&var_840, &var_ac0, 
        "group-methodcompare no more than…");
    clap_builder::builder::arg::Arg::num_args::h289a892a01df22ca(&var_ac0, &var_840, 0);
    clap_builder::builder::arg::Arg::default_missing_value::ha83625cce24bcc81(&var_840, &var_ac0, 
        "separate\n       extern "ENOTUNI…");
    memcpy(&var_ac0, &var_840, 0x278);
    var_840 = "repeatedNoEqualsargumentNO_COLOR…";
    let var_838_1: i64 = 8;
    let var_830_1: *const i8 = "all-repeatedcheck-charscountigno…";
    let var_828_1: i64 = 0xc;
    let var_820_1: *mut c_void = "uniquezero-terminatedgroupfiless…";
    let var_818_1: i64 = 6;
    let var_810_1: *const i8 = "countignore-caseskip-fieldsskip-…";
    let var_808_1: i64 = 5;
    clap_builder::builder::arg::Arg::conflicts_with_all::h974208ce44964564(&var_2b0, &var_ac0, 
        &var_840);
    clap_builder::builder::command::Command::arg::h0acc9ddbe8cb7ea7(&var_840, &var_578, &var_2b0);
    clap_builder::builder::arg::Arg::new::h3b7e4712a4d626b2(&var_578, 
        "check-charscountignore-caseskip-…");
    clap_builder::builder::arg::Arg::short::h183e18805da6d851(&var_ac0, &var_578, 0x77);
    clap_builder::builder::arg::Arg::long::ha75f5eebc05afc3a(&var_578, &var_ac0, 
        "check-charscountignore-caseskip-…");
    clap_builder::builder::arg::Arg::help::h0eb09b9d405a57af(&var_ac0, &var_578, 
        "compare no more than N character…", 0x2a);
    clap_builder::builder::arg::Arg::value_name::h2138a6044f1c5c61(&var_2b0, &var_ac0, 
        "Nprefix lines by the number of o…");
    clap_builder::builder::command::Command::arg::h0acc9ddbe8cb7ea7(&var_578, &var_840, &var_2b0);
    clap_builder::builder::arg::Arg::new::h3b7e4712a4d626b2(&var_840, 
        "countignore-caseskip-fieldsskip-…");
    clap_builder::builder::arg::Arg::short::h183e18805da6d851(&var_ac0, &var_840, 0x63);
    clap_builder::builder::arg::Arg::long::ha75f5eebc05afc3a(&var_840, &var_ac0, 
        "countignore-caseskip-fieldsskip-…");
    clap_builder::builder::arg::Arg::help::h0eb09b9d405a57af(&var_ac0, &var_840, 
        "prefix lines by the number of oc…", 0x29);
    clap_builder::builder::arg::Arg::action::h7728b7fb311eeddb(&var_2b0, &var_ac0, 2);
    clap_builder::builder::command::Command::arg::h0acc9ddbe8cb7ea7(&var_840, &var_578, &var_2b0);
    clap_builder::builder::arg::Arg::new::h3b7e4712a4d626b2(&var_578, 
        "ignore-caseskip-fieldsskip-chars…");
    clap_builder::builder::arg::Arg::short::h183e18805da6d851(&var_ac0, &var_578, 0x69);
    clap_builder::builder::arg::Arg::long::ha75f5eebc05afc3a(&var_578, &var_ac0, 
        "ignore-caseskip-fieldsskip-chars…");
    clap_builder::builder::arg::Arg::help::h0eb09b9d405a57af(&var_ac0, &var_578, 
        "ignore differences in case when …", 0x29);
    clap_builder::builder::arg::Arg::action::h7728b7fb311eeddb(&var_2b0, &var_ac0, 2);
    clap_builder::builder::command::Command::arg::h0acc9ddbe8cb7ea7(&var_578, &var_840, &var_2b0);
    clap_builder::builder::arg::Arg::new::h3b7e4712a4d626b2(&var_840, 
        "repeatedNoEqualsargumentNO_COLOR…");
    clap_builder::builder::arg::Arg::short::h183e18805da6d851(&var_ac0, &var_840, 0x64);
    clap_builder::builder::arg::Arg::long::ha75f5eebc05afc3a(&var_840, &var_ac0, 
        "repeatedNoEqualsargumentNO_COLOR…");
    clap_builder::builder::arg::Arg::help::h0eb09b9d405a57af(&var_ac0, &var_840, 
        "only print duplicate linesavoid …", 0x1a);
    clap_builder::builder::arg::Arg::action::h7728b7fb311eeddb(&var_2b0, &var_ac0, 2);
    clap_builder::builder::command::Command::arg::h0acc9ddbe8cb7ea7(&var_840, &var_578, &var_2b0);
    clap_builder::builder::arg::Arg::new::h3b7e4712a4d626b2(&var_578, 
        "skip-charsuniquezero-terminatedg…");
    clap_builder::builder::arg::Arg::short::h183e18805da6d851(&var_ac0, &var_578, 0x73);
    clap_builder::builder::arg::Arg::long::ha75f5eebc05afc3a(&var_578, &var_ac0, 
        "skip-charsuniquezero-terminatedg…");
    clap_builder::builder::arg::Arg::help::h0eb09b9d405a57af(&var_ac0, &var_578, 
        "avoid comparing the first N char…", 0x26);
    clap_builder::builder::arg::Arg::value_name::h2138a6044f1c5c61(&var_2b0, &var_ac0, 
        "Nprefix lines by the number of o…");
    clap_builder::builder::command::Command::arg::h0acc9ddbe8cb7ea7(&var_578, &var_840, &var_2b0);
    clap_builder::builder::arg::Arg::new::h3b7e4712a4d626b2(&var_840, 
        "skip-fieldsskip-charsuniquezero-…");
    clap_builder::builder::arg::Arg::short::h183e18805da6d851(&var_ac0, &var_840, 0x66);
    clap_builder::builder::arg::Arg::long::ha75f5eebc05afc3a(&var_840, &var_ac0, 
        "skip-fieldsskip-charsuniquezero-…");
    clap_builder::builder::arg::Arg::help::h0eb09b9d405a57af(&var_ac0, &var_840, 
        "avoid comparing the first N fiel…", 0x22);
    clap_builder::builder::arg::Arg::value_name::h2138a6044f1c5c61(&var_2b0, &var_ac0, 
        "Nprefix lines by the number of o…");
    clap_builder::builder::command::Command::arg::h0acc9ddbe8cb7ea7(&var_840, &var_578, &var_2b0);
    clap_builder::builder::arg::Arg::new::h3b7e4712a4d626b2(&var_578, 
        "uniquezero-terminatedgroupfiless…");
    clap_builder::builder::arg::Arg::short::h183e18805da6d851(&var_ac0, &var_578, 0x75);
    clap_builder::builder::arg::Arg::long::ha75f5eebc05afc3a(&var_578, &var_ac0, 
        "uniquezero-terminatedgroupfiless…");
    clap_builder::builder::arg::Arg::help::h0eb09b9d405a57af(&var_ac0, &var_578, 
        "only print unique linesend lines…", 0x17);
    clap_builder::builder::arg::Arg::action::h7728b7fb311eeddb(&var_2b0, &var_ac0, 2);
    clap_builder::builder::command::Command::arg::h0acc9ddbe8cb7ea7(&var_578, &var_840, &var_2b0);
    clap_builder::builder::arg::Arg::new::h3b7e4712a4d626b2(&var_840, 
        "zero-terminatedgroupfilessrc/uu/…");
    clap_builder::builder::arg::Arg::short::h183e18805da6d851(&var_ac0, &var_840, 0x7a);
    clap_builder::builder::arg::Arg::long::ha75f5eebc05afc3a(&var_840, &var_ac0, 
        "zero-terminatedgroupfilessrc/uu/…");
    clap_builder::builder::arg::Arg::help::h0eb09b9d405a57af(&var_ac0, &var_840, 
        "end lines with 0 byte, not newli…", 0x22);
    clap_builder::builder::arg::Arg::action::h7728b7fb311eeddb(&var_2b0, &var_ac0, 2);
    clap_builder::builder::command::Command::arg::h0acc9ddbe8cb7ea7(&var_840, &var_578, &var_2b0);
    clap_builder::builder::arg::Arg::new::h3b7e4712a4d626b2(&var_578, 
        "filessrc/uu/uniq/src/uniq.rsInva…");
    clap_builder::builder::arg::Arg::action::h7728b7fb311eeddb(&var_ac0, &var_578, 1);
    var_2b0 = 2;
    clap_builder::builder::arg::Arg::value_parser::hab7395ab21ef09e9(&var_578, &var_ac0, &var_2b0);
    clap_builder::builder::arg::Arg::num_args::h289a892a01df22ca(&var_ac0, &var_578, 0);
    memcpy(&var_578, &var_ac0, 0x278);
    let var_5c8: i32;
    let var_300: i32 = 0x80 | var_5c8 | 4;
    let var_5c4: i32;
    let var_2fc: i32 = var_5c4;
    clap_builder::builder::arg::Arg::value_hint::h5354491d139b2233(&var_ac0, &var_578);
    clap_builder::builder::command::Command::arg::h0acc9ddbe8cb7ea7(arg1, &var_840, &var_ac0);
    arg1
}
