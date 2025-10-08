
  fn uu_comm::uu_app::heda42fe78558df76(arg1: i64) -> i64

{
    let mut var_ab0: ();
    clap_builder::builder::command::Command::new::h4210ff5d8f5f28b9(&var_ab0, 
        uucore::util_name::h074417a1e6395129());
    let mut var_568: ();
    clap_builder::builder::command::Command::version::h4832842cf40b391f(&var_568, &var_ab0);
    clap_builder::builder::command::Command::about::h72620cd2763a2e9d(&var_ab0, &var_568);
    let mut var_7e8: ();
    uucore::format_usage::he053403a896311ed(&var_7e8, "{} [OPTION]... FILE1 FILE2suppre…", 0x1a);
    clap_builder::builder::command::Command::override_usage::h627e0a2b66124069(&var_568, &var_ab0, 
        &var_7e8);
    memcpy(&var_ab0, &var_568, 0x2bc);
    let var_2ac: i64;
    let var_7f4: i64 = 0x8800000088 | var_2ac;
    let var_2a4: i32;
    let var_7ec: i32 = var_2a4;
    clap_builder::builder::arg::Arg::new::h217197ba6903a0c6(&var_568, "12");
    clap_builder::builder::arg::Arg::short::hda8279a74549ac40(&var_7e8, &var_568, 0x31);
    clap_builder::builder::arg::Arg::help::h67f22269efeb3973(&var_568, &var_7e8, 
        "suppress column 1 (lines unique …", 0x29);
    clap_builder::builder::arg::Arg::action::hf13d64e6744a9d86(&var_7e8, &var_568, 2);
    clap_builder::builder::command::Command::arg::h33a7727cc5bc9e7a(&var_568, &var_ab0, &var_7e8);
    clap_builder::builder::arg::Arg::new::h217197ba6903a0c6(&var_ab0, "2");
    clap_builder::builder::arg::Arg::short::hda8279a74549ac40(&var_7e8, &var_ab0, 0x32);
    clap_builder::builder::arg::Arg::help::h67f22269efeb3973(&var_ab0, &var_7e8, 
        "suppress column 2 (lines unique …", 0x29);
    clap_builder::builder::arg::Arg::action::hf13d64e6744a9d86(&var_7e8, &var_ab0, 2);
    clap_builder::builder::command::Command::arg::h33a7727cc5bc9e7a(&var_ab0, &var_568, &var_7e8);
    clap_builder::builder::arg::Arg::new::h217197ba6903a0c6(&var_568, "3totalzero-terminated");
    clap_builder::builder::arg::Arg::short::hda8279a74549ac40(&var_7e8, &var_568, 0x33);
    clap_builder::builder::arg::Arg::help::h67f22269efeb3973(&var_568, &var_7e8, 
        "suppress column 3 (lines that ap…", 0x33);
    clap_builder::builder::arg::Arg::action::hf13d64e6744a9d86(&var_7e8, &var_568, 2);
    clap_builder::builder::command::Command::arg::h33a7727cc5bc9e7a(&var_568, &var_ab0, &var_7e8);
    clap_builder::builder::arg::Arg::new::h217197ba6903a0c6(&var_ab0, 
        "output-delimiterClapErrorWrapper…");
    clap_builder::builder::arg::Arg::long::ha0f94180dcddc4d2(&var_7e8, &var_ab0, 
        "output-delimiterClapErrorWrapper…");
    clap_builder::builder::arg::Arg::help::h67f22269efeb3973(&var_ab0, &var_7e8, 
        "separate columns with STRSTR\tli…", 0x19);
    clap_builder::builder::arg::Arg::value_name::hd09883c5175817cb(&var_7e8, &var_ab0);
    clap_builder::builder::arg::Arg::default_value::ha3f9b13ff246a678(&var_ab0, &var_7e8);
    memcpy(&var_7e8, &var_ab0, 0x278);
    let var_838: i32;
    let var_570: i32 = var_838 | 0x20;
    let var_834: i32;
    let var_56c: i32 = var_834;
    clap_builder::builder::arg::Arg::action::hf13d64e6744a9d86(&var_ab0, &var_7e8, 1);
    memcpy(&var_7e8, &var_ab0, 0x278);
    let var_570_1: i32 = 0x400 | var_838;
    let var_56c_1: i32 = var_834;
    clap_builder::builder::command::Command::arg::h33a7727cc5bc9e7a(&var_ab0, &var_568, &var_7e8);
    clap_builder::builder::arg::Arg::new::h217197ba6903a0c6(&var_568, "zero-terminated");
    clap_builder::builder::arg::Arg::long::ha0f94180dcddc4d2(&var_7e8, &var_568, "zero-terminated");
    clap_builder::builder::arg::Arg::short::hda8279a74549ac40(&var_568, &var_7e8, 0x7a);
    clap_builder::builder::arg::Arg::overrides_with::hf55d6441c269c186(&var_7e8, &var_568);
    clap_builder::builder::arg::Arg::help::h67f22269efeb3973(&var_568, &var_7e8, 
        "line delimiter is NUL, not newli…", 0x22);
    clap_builder::builder::arg::Arg::action::hf13d64e6744a9d86(&var_7e8, &var_568, 2);
    clap_builder::builder::command::Command::arg::h33a7727cc5bc9e7a(&var_568, &var_ab0, &var_7e8);
    clap_builder::builder::arg::Arg::new::h217197ba6903a0c6(&var_ab0, 
        "FILE1FILE23totalzero-terminated");
    memcpy(&var_7e8, &var_ab0, 0x278);
    let var_570_2: i32 = var_838 | 1;
    let var_56c_2: i32 = var_834;
    let mut var_2a0: ();
    clap_builder::builder::arg::Arg::value_hint::h4100dd16c0a1551d(&var_2a0, &var_7e8);
    clap_builder::builder::command::Command::arg::h33a7727cc5bc9e7a(&var_ab0, &var_568, &var_2a0);
    clap_builder::builder::arg::Arg::new::h217197ba6903a0c6(&var_568, "FILE23totalzero-terminated");
    memcpy(&var_7e8, &var_568, 0x278);
    let var_2f0: i32;
    let var_570_3: i32 = var_2f0 | 1;
    let var_2ec: i32;
    let var_56c_3: i32 = var_2ec;
    clap_builder::builder::arg::Arg::value_hint::h4100dd16c0a1551d(&var_2a0, &var_7e8);
    clap_builder::builder::command::Command::arg::h33a7727cc5bc9e7a(&var_568, &var_ab0, &var_2a0);
    clap_builder::builder::arg::Arg::new::h217197ba6903a0c6(&var_ab0, "totalzero-terminated");
    clap_builder::builder::arg::Arg::long::ha0f94180dcddc4d2(&var_7e8, &var_ab0, 
        "totalzero-terminated");
    clap_builder::builder::arg::Arg::help::h67f22269efeb3973(&var_ab0, &var_7e8, 
        "output a summaryentity not found", 0x10);
    clap_builder::builder::arg::Arg::action::hf13d64e6744a9d86(&var_7e8, &var_ab0, 2);
    clap_builder::builder::command::Command::arg::h33a7727cc5bc9e7a(&var_ab0, &var_568, &var_7e8);
    clap_builder::builder::arg::Arg::new::h217197ba6903a0c6(&var_568, 
        "check-ordernocheck-orderFILE1FIL…");
    clap_builder::builder::arg::Arg::long::ha0f94180dcddc4d2(&var_7e8, &var_568, 
        "check-ordernocheck-orderFILE1FIL…");
    clap_builder::builder::arg::Arg::help::h67f22269efeb3973(&var_568, &var_7e8, 
        "check that the input is correctl…", 0x4e);
    clap_builder::builder::arg::Arg::action::hf13d64e6744a9d86(&var_7e8, &var_568, 2);
    clap_builder::builder::command::Command::arg::h33a7727cc5bc9e7a(&var_568, &var_ab0, &var_7e8);
    clap_builder::builder::arg::Arg::new::h217197ba6903a0c6(&var_ab0, 
        "nocheck-orderFILE1FILE23totalzer…");
    clap_builder::builder::arg::Arg::long::ha0f94180dcddc4d2(&var_7e8, &var_ab0, 
        "nocheck-orderFILE1FILE23totalzer…");
    clap_builder::builder::arg::Arg::help::h67f22269efeb3973(&var_ab0, &var_7e8, 
        "do not check that the input is c…", 0x2f);
    clap_builder::builder::arg::Arg::action::hf13d64e6744a9d86(&var_7e8, &var_ab0, 2);
    clap_builder::builder::arg::Arg::conflicts_with::h5ad15656d721968d(&var_ab0, &var_7e8);
    clap_builder::builder::command::Command::arg::h33a7727cc5bc9e7a(arg1, &var_568, &var_ab0);
    arg1
}
