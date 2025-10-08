
  fn uu_readlink::uu_app::h793b492da9e17ae1(arg1: i64) -> i64

{
    let mut var_830: ();
    clap_builder::builder::command::Command::new::hae6dd8ccca32a048(&var_830, 
        uucore::util_name::h074417a1e6395129());
    let mut var_568: ();
    clap_builder::builder::command::Command::version::hc553a92d57d6ad9c(&var_568, &var_830);
    clap_builder::builder::command::Command::about::h287279ac963e7bb7(&var_830, &var_568);
    let mut var_ab0: ();
    uucore::format_usage::he053403a896311ed(&var_ab0, "{} [OPTION]... [FILE]...canonica…", 0x18);
    clap_builder::builder::command::Command::override_usage::h52fcd66da236ed94(&var_568, &var_830, 
        &var_ab0);
    memcpy(&var_830, &var_568, 0x2bc);
    let var_2ac: i64;
    let var_574: i64 = 0x8000000080 | var_2ac;
    let var_2a4: i32;
    let var_56c: i32 = var_2a4;
    clap_builder::builder::arg::Arg::new::h5fa8c3f7ea4b1f5b(&var_568, 
        "canonicalizecanonicalize by foll…");
    clap_builder::builder::arg::Arg::short::h2c8669c1941c8f96(&var_ab0, &var_568, 0x66);
    clap_builder::builder::arg::Arg::long::h3808bd5444b13d75(&var_568, &var_ab0, 
        "canonicalizecanonicalize by foll…");
    clap_builder::builder::arg::Arg::help::h3ee0273fd1f3e9ee(&var_ab0, &var_568, 
        "canonicalize by following every …", 0x7f);
    let mut var_2a0: ();
    clap_builder::builder::arg::Arg::action::hd8bf0daca569f8f5(&var_2a0, &var_ab0, 2);
    clap_builder::builder::command::Command::arg::h5525f61acc7eea36(&var_568, &var_830, &var_2a0);
    clap_builder::builder::arg::Arg::new::h5fa8c3f7ea4b1f5b(&var_830, 
        "canonicalize-existingcanonicaliz…");
    clap_builder::builder::arg::Arg::short::h2c8669c1941c8f96(&var_ab0, &var_830, 0x65);
    clap_builder::builder::arg::Arg::long::h3808bd5444b13d75(&var_830, &var_ab0, 
        "canonicalize-existingcanonicaliz…");
    clap_builder::builder::arg::Arg::help::h3ee0273fd1f3e9ee(&var_ab0, &var_830, 
        "canonicalize by following every …", 0x73);
    clap_builder::builder::arg::Arg::action::hd8bf0daca569f8f5(&var_2a0, &var_ab0, 2);
    clap_builder::builder::command::Command::arg::h5525f61acc7eea36(&var_830, &var_568, &var_2a0);
    clap_builder::builder::arg::Arg::new::h5fa8c3f7ea4b1f5b(&var_568, 
        "canonicalize-missingcanonicalize…");
    clap_builder::builder::arg::Arg::short::h2c8669c1941c8f96(&var_ab0, &var_568, 0x6d);
    clap_builder::builder::arg::Arg::long::h3808bd5444b13d75(&var_568, &var_ab0, 
        "canonicalize-missingcanonicalize…");
    clap_builder::builder::arg::Arg::help::h3ee0273fd1f3e9ee(&var_ab0, &var_568, 
        "canonicalize by following every …", 0x86);
    clap_builder::builder::arg::Arg::action::hd8bf0daca569f8f5(&var_2a0, &var_ab0, 2);
    clap_builder::builder::command::Command::arg::h5525f61acc7eea36(&var_568, &var_830, &var_2a0);
    clap_builder::builder::arg::Arg::new::h5fa8c3f7ea4b1f5b(&var_830, 
        "no-newlinedo not output the trai…");
    clap_builder::builder::arg::Arg::short::h2c8669c1941c8f96(&var_ab0, &var_830, 0x6e);
    clap_builder::builder::arg::Arg::long::h3808bd5444b13d75(&var_830, &var_ab0, 
        "no-newlinedo not output the trai…");
    clap_builder::builder::arg::Arg::help::h3ee0273fd1f3e9ee(&var_ab0, &var_830, 
        "do not output the trailing delim…", 0x24);
    clap_builder::builder::arg::Arg::action::hd8bf0daca569f8f5(&var_2a0, &var_ab0, 2);
    clap_builder::builder::command::Command::arg::h5525f61acc7eea36(&var_830, &var_568, &var_2a0);
    clap_builder::builder::arg::Arg::new::h5fa8c3f7ea4b1f5b(&var_568, 
        "quietsuppress most error message…");
    clap_builder::builder::arg::Arg::short::h2c8669c1941c8f96(&var_ab0, &var_568, 0x71);
    clap_builder::builder::arg::Arg::long::h3808bd5444b13d75(&var_568, &var_ab0, 
        "quietsuppress most error message…");
    clap_builder::builder::arg::Arg::help::h3ee0273fd1f3e9ee(&var_ab0, &var_568, 
        "suppress most error messagessile…", 0x1c);
    clap_builder::builder::arg::Arg::action::hd8bf0daca569f8f5(&var_2a0, &var_ab0, 2);
    clap_builder::builder::command::Command::arg::h5525f61acc7eea36(&var_568, &var_830, &var_2a0);
    clap_builder::builder::arg::Arg::new::h5fa8c3f7ea4b1f5b(&var_830, 
        "silentverbosereport error messag…");
    clap_builder::builder::arg::Arg::short::h2c8669c1941c8f96(&var_ab0, &var_830, 0x73);
    clap_builder::builder::arg::Arg::long::h3808bd5444b13d75(&var_830, &var_ab0, 
        "silentverbosereport error messag…");
    clap_builder::builder::arg::Arg::help::h3ee0273fd1f3e9ee(&var_ab0, &var_830, 
        "suppress most error messagessile…", 0x1c);
    clap_builder::builder::arg::Arg::action::hd8bf0daca569f8f5(&var_2a0, &var_ab0, 2);
    clap_builder::builder::command::Command::arg::h5525f61acc7eea36(&var_830, &var_568, &var_2a0);
    clap_builder::builder::arg::Arg::new::h5fa8c3f7ea4b1f5b(&var_568, 
        "verbosereport error messagesepar…");
    clap_builder::builder::arg::Arg::short::h2c8669c1941c8f96(&var_ab0, &var_568, 0x76);
    clap_builder::builder::arg::Arg::long::h3808bd5444b13d75(&var_568, &var_ab0, 
        "verbosereport error messagesepar…");
    clap_builder::builder::arg::Arg::help::h3ee0273fd1f3e9ee(&var_ab0, &var_568, 
        "report error messageseparate out…", 0x14);
    clap_builder::builder::arg::Arg::action::hd8bf0daca569f8f5(&var_2a0, &var_ab0, 2);
    clap_builder::builder::command::Command::arg::h5525f61acc7eea36(&var_568, &var_830, &var_2a0);
    clap_builder::builder::arg::Arg::new::h5fa8c3f7ea4b1f5b(&var_830, 
        "zeroAnsi -- \x1b[8mhelpNoneshim\x1b…");
    clap_builder::builder::arg::Arg::short::h2c8669c1941c8f96(&var_ab0, &var_830, 0x7a);
    clap_builder::builder::arg::Arg::long::h3808bd5444b13d75(&var_830, &var_ab0, 
        "zeroAnsi -- \x1b[8mhelpNoneshim\x1b…");
    clap_builder::builder::arg::Arg::help::h3ee0273fd1f3e9ee(&var_ab0, &var_830, 
        "separate output with NUL rather …", 0x2c);
    clap_builder::builder::arg::Arg::action::hd8bf0daca569f8f5(&var_2a0, &var_ab0, 2);
    clap_builder::builder::command::Command::arg::h5525f61acc7eea36(&var_830, &var_568, &var_2a0);
    clap_builder::builder::arg::Arg::new::h5fa8c3f7ea4b1f5b(&var_568, 
        "filessrc/uu/readlink/src/readlin…");
    clap_builder::builder::arg::Arg::action::hd8bf0daca569f8f5(&var_ab0, &var_568, 1);
    clap_builder::builder::arg::Arg::value_hint::h383c9e9082bb8622(&var_568, &var_ab0);
    clap_builder::builder::command::Command::arg::h5525f61acc7eea36(arg1, &var_830, &var_568);
    arg1
}
