
  fn uu_tr::uu_app::hb3fe02f7dda5c29e(arg1: i64) -> i64

{
    let mut var_830: ();
    clap_builder::builder::command::Command::new::hf6b5217b571cfc36(&var_830, 
        uucore::util_name::h074417a1e6395129());
    let mut var_568: ();
    clap_builder::builder::command::Command::version::he59be18cac18fb88(&var_568, &var_830);
    clap_builder::builder::command::Command::about::h70cc0b6c72480c67(&var_830, &var_568);
    let mut var_ab0: ();
    uucore::format_usage::he053403a896311ed(&var_ab0, "{} [OPTION]... SET1 [SET2]comple…", 0x1a);
    clap_builder::builder::command::Command::override_usage::hc9680a393529db81(&var_568, &var_830, 
        &var_ab0);
    memcpy(&var_830, &var_568, 0x2bc);
    let var_2ac: i32;
    let var_574: i32 = 0xa0 | var_2ac;
    let var_2a8: i64;
    let var_570: i64 = 0x80 | var_2a8;
    clap_builder::builder::arg::Arg::new::hdbf5f3c818aaa1bd(&var_568, 
        "complementuse the complement of …");
    clap_builder::builder::arg::Arg::visible_short_alias::h8bc91419bad83a32(&var_ab0, &var_568);
    clap_builder::builder::arg::Arg::short::hc815e1e027380631(&var_568, &var_ab0, 0x63);
    clap_builder::builder::arg::Arg::long::h24e3c52d467d1682(&var_ab0, &var_568, 
        "complementuse the complement of …");
    clap_builder::builder::arg::Arg::help::had42866d35738224(&var_568, &var_ab0, 
        "use the complement of SET1delete…", 0x1a);
    clap_builder::builder::arg::Arg::action::h1fe4d170f312104e(&var_ab0, &var_568);
    let mut var_2a0: i64;
    clap_builder::builder::arg::Arg::overrides_with::h1d8337fa5d51364f(&var_2a0, &var_ab0, 
        "complementuse the complement of …");
    clap_builder::builder::command::Command::arg::h9e0927a5770c3f42(&var_568, &var_830, &var_2a0);
    clap_builder::builder::arg::Arg::new::hdbf5f3c818aaa1bd(&var_830, 
        "deletedelete characters in SET1,…");
    clap_builder::builder::arg::Arg::short::hc815e1e027380631(&var_ab0, &var_830, 0x64);
    clap_builder::builder::arg::Arg::long::h24e3c52d467d1682(&var_830, &var_ab0, 
        "deletedelete characters in SET1,…");
    clap_builder::builder::arg::Arg::help::had42866d35738224(&var_ab0, &var_830, 
        "delete characters in SET1, do no…", 0x2b);
    clap_builder::builder::arg::Arg::action::h1fe4d170f312104e(&var_830, &var_ab0);
    clap_builder::builder::arg::Arg::overrides_with::h1d8337fa5d51364f(&var_ab0, &var_830, 
        "deletedelete characters in SET1,…");
    clap_builder::builder::command::Command::arg::h9e0927a5770c3f42(&var_830, &var_568, &var_ab0);
    clap_builder::builder::arg::Arg::new::hdbf5f3c818aaa1bd(&var_568, 
        "squeeze-repeatsreplace each sequ…");
    clap_builder::builder::arg::Arg::long::h24e3c52d467d1682(&var_ab0, &var_568, 
        "squeeze-repeatsreplace each sequ…");
    clap_builder::builder::arg::Arg::short::hc815e1e027380631(&var_568, &var_ab0, 0x73);
    clap_builder::builder::arg::Arg::help::had42866d35738224(&var_ab0, &var_568, 
        "replace each sequence of a repea…", 0x82);
    clap_builder::builder::arg::Arg::action::h1fe4d170f312104e(&var_568, &var_ab0);
    clap_builder::builder::arg::Arg::overrides_with::h1d8337fa5d51364f(&var_ab0, &var_568, 
        "squeeze-repeatsreplace each sequ…");
    clap_builder::builder::command::Command::arg::h9e0927a5770c3f42(&var_568, &var_830, &var_ab0);
    clap_builder::builder::arg::Arg::new::hdbf5f3c818aaa1bd(&var_830, 
        "truncate-set1first truncate SET1…");
    clap_builder::builder::arg::Arg::long::h24e3c52d467d1682(&var_ab0, &var_830, 
        "truncate-set1first truncate SET1…");
    clap_builder::builder::arg::Arg::short::hc815e1e027380631(&var_830, &var_ab0, 0x74);
    clap_builder::builder::arg::Arg::help::had42866d35738224(&var_ab0, &var_830, 
        "first truncate SET1 to length of…", 0x25);
    clap_builder::builder::arg::Arg::action::h1fe4d170f312104e(&var_830, &var_ab0);
    clap_builder::builder::arg::Arg::overrides_with::h1d8337fa5d51364f(&var_ab0, &var_830, 
        "truncate-set1first truncate SET1…");
    clap_builder::builder::command::Command::arg::h9e0927a5770c3f42(&var_830, &var_568, &var_ab0);
    clap_builder::builder::arg::Arg::new::hdbf5f3c818aaa1bd(&var_568, 
        "setsBOLDBlue\x1b[4mSomedumb\x1b[…");
    clap_builder::builder::arg::Arg::num_args::h7f3365883499be02(&var_ab0, &var_568);
    var_2a0 = 2;
    clap_builder::builder::arg::Arg::value_parser::h19bdfe0c92a9be7b(&var_568, &var_ab0, &var_2a0);
    clap_builder::builder::command::Command::arg::h9e0927a5770c3f42(arg1, &var_830, &var_568);
    arg1
}
