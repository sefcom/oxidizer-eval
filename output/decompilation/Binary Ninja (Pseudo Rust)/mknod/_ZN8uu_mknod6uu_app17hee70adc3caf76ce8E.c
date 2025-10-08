
  fn uu_mknod::uu_app::hee70adc3caf76ce8(arg1: i64) -> i64

{
    let mut var_830: ();
    clap_builder::builder::command::Command::new::h798e8f5589914cd1(&var_830, 
        uucore::util_name::h074417a1e6395129());
    let mut var_568: ();
    clap_builder::builder::command::Command::version::h46a133896b236d86(&var_568, &var_830);
    let mut var_ab0: ();
    uucore::format_usage::he053403a896311ed(&var_ab0, "{} [OPTION]... NAME TYPE [MAJOR …", 0x26);
    clap_builder::builder::command::Command::override_usage::he64daacbb0f28d7b(&var_830, &var_568, 
        &var_ab0);
    clap_builder::builder::command::Command::after_help::ha08818f55e995f35(&var_568, &var_830);
    clap_builder::builder::command::Command::about::h1984dbc4754ccff9(&var_830, &var_568);
    memcpy(&var_568, &var_830, 0x2bc);
    let var_574: i64;
    let var_2ac: i64 = 0x8000000080 | var_574;
    let var_56c: i32;
    let var_2a4: i32 = var_56c;
    clap_builder::builder::arg::Arg::new::h7fb456389be2838a(&var_830, 
        "modei128 as dyn ERANGEEDEADLKENA…");
    clap_builder::builder::arg::Arg::short::h2a19e4e47b869cc2(&var_ab0, &var_830, 0x6d);
    clap_builder::builder::arg::Arg::long::hed845466523ffc14(&var_830, &var_ab0, 
        "modei128 as dyn ERANGEEDEADLKENA…");
    clap_builder::builder::arg::Arg::value_name::hef7850b820aea9cd(&var_ab0, &var_830, 
        &data_417aa8[0x14]);
    let mut var_2a0: i64;
    clap_builder::builder::arg::Arg::help::hc128733667074f60(&var_2a0, &var_ab0, 
        "set file permission bits to MODE…", 0x32);
    clap_builder::builder::command::Command::arg::h20f370cdfd64909d(&var_830, &var_568, &var_2a0);
    clap_builder::builder::arg::Arg::new::h7fb456389be2838a(&var_568, 
        "name\x1b[0mtypeCyan    TYPE"`$\M…");
    clap_builder::builder::arg::Arg::value_name::hef7850b820aea9cd(&var_ab0, &var_568, 
        "NAMEAnsi -- \x1b[8mhelpNoneshimn…");
    clap_builder::builder::arg::Arg::help::hc128733667074f60(&var_568, &var_ab0, 
        "name of the new filetype of the …", 0x14);
    memcpy(&var_ab0, &var_568, 0x278);
    let var_2f0: i32;
    let var_838: i32 = var_2f0 | 1;
    let var_2ec: i32;
    let var_834: i32 = var_2ec;
    clap_builder::builder::arg::Arg::value_hint::hbccc3529f708f314(&var_2a0, &var_ab0);
    clap_builder::builder::command::Command::arg::h20f370cdfd64909d(&var_568, &var_830, &var_2a0);
    clap_builder::builder::arg::Arg::new::h7fb456389be2838a(&var_830, &data_417aa8);
    clap_builder::builder::arg::Arg::value_name::hef7850b820aea9cd(&var_ab0, &var_830, 
        &data_417aa8[0xc]);
    clap_builder::builder::arg::Arg::help::hc128733667074f60(&var_830, &var_ab0, 
        "type of the new file (b, c, u or…", 0x23);
    memcpy(&var_ab0, &var_830, 0x278);
    let var_5b8: i32;
    let var_838_1: i32 = var_5b8 | 1;
    let var_5b4: i32;
    let var_834_1: i32 = var_5b4;
    clap_builder::builder::arg::Arg::value_parser::h731231a26ed22bc7(&var_2a0, &var_ab0);
    clap_builder::builder::command::Command::arg::h20f370cdfd64909d(&var_830, &var_568, &var_2a0);
    clap_builder::builder::arg::Arg::new::h7fb456389be2838a(&var_568, 
        "majormajor file typeminorminor f…");
    clap_builder::builder::arg::Arg::value_name::hef7850b820aea9cd(&var_ab0, &var_568, 
        "majormajor file typeminorminor f…");
    clap_builder::builder::arg::Arg::help::hc128733667074f60(&var_568, &var_ab0, 
        "major file typeminorminor file t…", 0xf);
    _$LT$u64$u20$as$u20$clap_builder..builder..value_parser..ValueParserFactory$GT$::value_parser::hc43a5cf9c5a78de9(&var_2a0);
    clap_builder::builder::arg::Arg::value_parser::haea02f2eaf28966d(&var_ab0, &var_568, &var_2a0);
    clap_builder::builder::command::Command::arg::h20f370cdfd64909d(&var_568, &var_830, &var_ab0);
    clap_builder::builder::arg::Arg::new::h7fb456389be2838a(&var_830, 
        "minorminor file typezset SELinux…");
    clap_builder::builder::arg::Arg::value_name::hef7850b820aea9cd(&var_ab0, &var_830, 
        "minorminor file typezset SELinux…");
    clap_builder::builder::arg::Arg::help::hc128733667074f60(&var_830, &var_ab0, 
        "minor file typezset SELinux secu…", 0xf);
    _$LT$u64$u20$as$u20$clap_builder..builder..value_parser..ValueParserFactory$GT$::value_parser::hc43a5cf9c5a78de9(&var_2a0);
    clap_builder::builder::arg::Arg::value_parser::haea02f2eaf28966d(&var_ab0, &var_830, &var_2a0);
    clap_builder::builder::command::Command::arg::h20f370cdfd64909d(&var_830, &var_568, &var_ab0);
    clap_builder::builder::arg::Arg::new::h7fb456389be2838a(&var_568, 
        "zset SELinux security context of…");
    clap_builder::builder::arg::Arg::short::h2a19e4e47b869cc2(&var_ab0, &var_568, 0x5a);
    clap_builder::builder::arg::Arg::help::hc128733667074f60(&var_568, &var_ab0, 
        "set SELinux security context of …", 0x4a);
    clap_builder::builder::arg::Arg::action::haf1b539228126a88(&var_ab0, &var_568);
    clap_builder::builder::command::Command::arg::h20f370cdfd64909d(&var_568, &var_830, &var_ab0);
    clap_builder::builder::arg::Arg::new::h7fb456389be2838a(&var_830, 
        "contextCTXlike -Z, or if CTX is …");
    clap_builder::builder::arg::Arg::long::hed845466523ffc14(&var_ab0, &var_830, 
        "contextCTXlike -Z, or if CTX is …");
    clap_builder::builder::arg::Arg::value_name::hef7850b820aea9cd(&var_830, &var_ab0, 
        "CTXlike -Z, or if CTX is specifi…");
    var_2a0 = 1;
    clap_builder::builder::arg::Arg::value_parser::habbd166a826087b1(&var_ab0, &var_830, &var_2a0);
    clap_builder::builder::arg::Arg::num_args::h6bc20e6b44061eec(&var_830, &var_ab0, 0);
    memcpy(&var_ab0, &var_830, 0x278);
    let var_838_2: i32 = 0x80 | var_5b8;
    let var_834_2: i32 = var_5b4;
    clap_builder::builder::arg::Arg::help::hc128733667074f60(&var_830, &var_ab0, 
        "like -Z, or if CTX is specified …", 0x55);
    clap_builder::builder::command::Command::arg::h20f370cdfd64909d(arg1, &var_568, &var_830);
    arg1
}
