
  fn uu_shred::uu_app::hd2dcc3f31ff24fbd(arg1: i64) -> i64

{
    let mut var_830: ();
    clap_builder::builder::command::Command::new::h5787b64ed8d4e1d7(&var_830, 
        uucore::util_name::h074417a1e6395129());
    let mut var_568: ();
    clap_builder::builder::command::Command::version::h035a63d40d5df98e(&var_568, &var_830);
    clap_builder::builder::command::Command::about::hded723cb4a330c03(&var_830, &var_568);
    clap_builder::builder::command::Command::after_help::hbc05816b53cbfdba(&var_568, &var_830);
    let mut var_ab0: *const i8;
    uucore::format_usage::he053403a896311ed(&var_ab0, "{} [OPTION]... FILE...forcechang…", 0x16);
    clap_builder::builder::command::Command::override_usage::h9d88d80646690c9f(&var_830, &var_568, 
        &var_ab0);
    memcpy(&var_568, &var_830, 0x2bc);
    let var_574: i64;
    let var_2ac: i64 = 0x8000000080 | var_574;
    let var_56c: i32;
    let var_2a4: i32 = var_56c;
    clap_builder::builder::arg::Arg::new::h826bb93c26dbd644(&var_830, 
        "forcechange permissions to allow…");
    clap_builder::builder::arg::Arg::long::ha1c24f18a2780cb3(&var_ab0, &var_830, 
        "forcechange permissions to allow…");
    clap_builder::builder::arg::Arg::short::h80a7da4595f844f0(&var_830, &var_ab0, 0x66);
    clap_builder::builder::arg::Arg::help::h1b2448d379a4e28a(&var_ab0, &var_830, 
        "change permissions to allow writ…", 0x30);
    let mut var_2a0: ();
    clap_builder::builder::arg::Arg::action::hee4b97f47648487f(&var_2a0, &var_ab0, 2);
    clap_builder::builder::command::Command::arg::h3bb89aafa86e77c8(&var_830, &var_568, &var_2a0);
    clap_builder::builder::arg::Arg::new::h826bb93c26dbd644(&var_568, 
        "iterationsoverwrite N times inst…");
    clap_builder::builder::arg::Arg::long::ha1c24f18a2780cb3(&var_ab0, &var_568, 
        "iterationsoverwrite N times inst…");
    clap_builder::builder::arg::Arg::short::h80a7da4595f844f0(&var_568, &var_ab0, 0x6e);
    clap_builder::builder::arg::Arg::help::h1b2448d379a4e28a(&var_ab0, &var_568, 
        "overwrite N times instead of the…", 0x2c);
    clap_builder::builder::arg::Arg::value_name::hafdca14bc914f0db(&var_568, &var_ab0, 
        "NUMBER3Nshred this many bytes (s…");
    clap_builder::builder::arg::Arg::default_value::h5c0c2141adf94317(&var_ab0, &var_568);
    clap_builder::builder::command::Command::arg::h3bb89aafa86e77c8(&var_568, &var_830, &var_ab0);
    clap_builder::builder::arg::Arg::new::h826bb93c26dbd644(&var_830, 
        "sizei128 as dyn ERANGEEDEADLKENA…");
    clap_builder::builder::arg::Arg::long::ha1c24f18a2780cb3(&var_ab0, &var_830, 
        "sizei128 as dyn ERANGEEDEADLKENA…");
    clap_builder::builder::arg::Arg::short::h80a7da4595f844f0(&var_830, &var_ab0, 0x73);
    clap_builder::builder::arg::Arg::value_name::hafdca14bc914f0db(&var_ab0, &var_830, 
        "Nshred this many bytes (suffixes…");
    clap_builder::builder::arg::Arg::help::h1b2448d379a4e28a(&var_2a0, &var_ab0, 
        "shred this many bytes (suffixes …", 0x36);
    clap_builder::builder::command::Command::arg::h3bb89aafa86e77c8(&var_830, &var_568, &var_2a0);
    clap_builder::builder::arg::Arg::new::h826bb93c26dbd644(&var_568, 
        "udeallocate and remove file afte…");
    clap_builder::builder::arg::Arg::short::h80a7da4595f844f0(&var_ab0, &var_568, 0x75);
    clap_builder::builder::arg::Arg::help::h1b2448d379a4e28a(&var_568, &var_ab0, 
        "deallocate and remove file after…", 0x2c);
    clap_builder::builder::arg::Arg::action::hee4b97f47648487f(&var_ab0, &var_568, 2);
    clap_builder::builder::command::Command::arg::h3bb89aafa86e77c8(&var_568, &var_830, &var_ab0);
    clap_builder::builder::arg::Arg::new::h826bb93c26dbd644(&var_830, 
        "removeHOWunlinklike -u but give …");
    clap_builder::builder::arg::Arg::long::ha1c24f18a2780cb3(&var_ab0, &var_830, 
        "removeHOWunlinklike -u but give …");
    clap_builder::builder::arg::Arg::value_name::hafdca14bc914f0db(&var_830, &var_ab0, 
        "HOWunlinklike -u but give contro…");
    var_ab0 = "unlinklike -u but give control o…";
    let var_aa8: i64 = 6;
    let var_aa0: *const i8 = "wi";
    let var_a98: i64 = 4;
    let var_a90: *const i8 = "wipesync";
    let var_a88: i64 = 8;
    _$LT$uucore..features..parser..shortcut_value_parser..ShortcutValueParser$u20$as$u20$core..convert..From$LT$I$GT$$GT$::from::h685cf0531e84223d(&var_2a0, &var_ab0);
    clap_builder::builder::arg::Arg::value_parser::hbc44474890119c99(&var_ab0, &var_830, &var_2a0);
    clap_builder::builder::arg::Arg::num_args::ha85da491194ffe3e(&var_830, &var_ab0, 0);
    memcpy(&var_ab0, &var_830, 0x278);
    let var_5b8: i32;
    let var_838: i32 = 0x80 | var_5b8;
    let var_5b4: i32;
    let var_834: i32 = var_5b4;
    clap_builder::builder::arg::Arg::default_missing_value::hdfcae24132487aeb(&var_830, &var_ab0);
    clap_builder::builder::arg::Arg::help::h1b2448d379a4e28a(&var_ab0, &var_830, 
        "like -u but give control on HOW …", 0x35);
    clap_builder::builder::arg::Arg::action::hee4b97f47648487f(&var_2a0, &var_ab0, 0);
    clap_builder::builder::command::Command::arg::h3bb89aafa86e77c8(&var_830, &var_568, &var_2a0);
    clap_builder::builder::arg::Arg::new::h826bb93c26dbd644(&var_568, 
        "verboseshow progressexactdo not …");
    clap_builder::builder::arg::Arg::long::ha1c24f18a2780cb3(&var_ab0, &var_568, 
        "verboseshow progressexactdo not …");
    clap_builder::builder::arg::Arg::short::h80a7da4595f844f0(&var_568, &var_ab0, 0x76);
    clap_builder::builder::arg::Arg::help::h1b2448d379a4e28a(&var_ab0, &var_568, 
        "show progressexactdo not round f…", 0xd);
    clap_builder::builder::arg::Arg::action::hee4b97f47648487f(&var_2a0, &var_ab0, 2);
    clap_builder::builder::command::Command::arg::h3bb89aafa86e77c8(&var_568, &var_830, &var_2a0);
    clap_builder::builder::arg::Arg::new::h826bb93c26dbd644(&var_830, 
        "exactdo not round file sizes up …");
    clap_builder::builder::arg::Arg::long::ha1c24f18a2780cb3(&var_ab0, &var_830, 
        "exactdo not round file sizes up …");
    clap_builder::builder::arg::Arg::short::h80a7da4595f844f0(&var_830, &var_ab0, 0x78);
    clap_builder::builder::arg::Arg::help::h1b2448d379a4e28a(&var_ab0, &var_830, 
        "do not round file sizes up to th…", 0x5c);
    clap_builder::builder::arg::Arg::action::hee4b97f47648487f(&var_2a0, &var_ab0, 2);
    clap_builder::builder::command::Command::arg::h3bb89aafa86e77c8(&var_830, &var_568, &var_2a0);
    clap_builder::builder::arg::Arg::new::h826bb93c26dbd644(&var_568, 
        "zeroAnsi -- \x1b[8mhelpNoneshim\x1b…");
    clap_builder::builder::arg::Arg::long::ha1c24f18a2780cb3(&var_ab0, &var_568, 
        "zeroAnsi -- \x1b[8mhelpNoneshim\x1b…");
    clap_builder::builder::arg::Arg::short::h80a7da4595f844f0(&var_568, &var_ab0, 0x7a);
    clap_builder::builder::arg::Arg::help::h1b2448d379a4e28a(&var_ab0, &var_568, 
        "add a final overwrite with zeros…", 0x32);
    clap_builder::builder::arg::Arg::action::hee4b97f47648487f(&var_2a0, &var_ab0, 2);
    clap_builder::builder::command::Command::arg::h3bb89aafa86e77c8(&var_568, &var_830, &var_2a0);
    clap_builder::builder::arg::Arg::new::h826bb93c26dbd644(&var_830, 
        "filesizei128 as dyn ERANGEEDEADL…");
    clap_builder::builder::arg::Arg::action::hee4b97f47648487f(&var_ab0, &var_830, 1);
    clap_builder::builder::arg::Arg::value_hint::hb429941a9b1bcb70(&var_830, &var_ab0);
    clap_builder::builder::command::Command::arg::h3bb89aafa86e77c8(arg1, &var_568, &var_830);
    arg1
}
