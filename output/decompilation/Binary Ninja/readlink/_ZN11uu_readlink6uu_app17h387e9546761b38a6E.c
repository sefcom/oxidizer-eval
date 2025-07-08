
  int64_t uu_readlink::uu_app::h387e9546761b38a6(int64_t arg1)

{
    void var_800;
    clap_builder::builder::command::Command::new::hd3cf78caaacb3353(&var_800, 
        uucore::util_name::h60d842bf27b05e82());
    void var_538;
    clap_builder::builder::command::Command::version::h5769eb7fe5d5d686(&var_538, &var_800);
    clap_builder::builder::command::Command::about::hc4b6e58c034683c5(&var_800, &var_538);
    void var_a50;
    uucore::format_usage::h76fcb2d15fbabc58(&var_a50, "{} [OPTION]... [FILE]...canonica…", 0x18);
    clap_builder::builder::command::Command::override_usage::h4b8d0145a5fc5c19(&var_538, &var_800, 
        &var_a50);
    memcpy(&var_800, &var_538, 0x2bc);
    int64_t var_27c;
    int64_t var_544 = 0x8000000080 | var_27c;
    int32_t var_274;
    int32_t var_53c = var_274;
    clap_builder::builder::arg::Arg::new::h465ca0a72bbbad2e(&var_538, 
        "canonicalizecanonicalize by foll…");
    clap_builder::builder::arg::Arg::short::h90ac967af5f5b923(&var_a50, &var_538, 0x66);
    clap_builder::builder::arg::Arg::long::hff5d49378248701b(&var_538, &var_a50, 
        "canonicalizecanonicalize by foll…");
    clap_builder::builder::arg::Arg::help::h2cb296bdd2950d14(&var_a50, &var_538, 
        "canonicalize by following every …", 0x7f);
    void var_270;
    clap_builder::builder::arg::Arg::action::h53fbdacfe1f99565(&var_270, &var_a50, 2);
    clap_builder::builder::command::Command::arg::h802601a73353d1b7(&var_538, &var_800, &var_270);
    clap_builder::builder::arg::Arg::new::h465ca0a72bbbad2e(&var_800, 
        "canonicalize-existingcanonicaliz…");
    clap_builder::builder::arg::Arg::short::h90ac967af5f5b923(&var_a50, &var_800, 0x65);
    clap_builder::builder::arg::Arg::long::hff5d49378248701b(&var_800, &var_a50, 
        "canonicalize-existingcanonicaliz…");
    clap_builder::builder::arg::Arg::help::h2cb296bdd2950d14(&var_a50, &var_800, 
        "canonicalize by following every …", 0x73);
    clap_builder::builder::arg::Arg::action::h53fbdacfe1f99565(&var_270, &var_a50, 2);
    clap_builder::builder::command::Command::arg::h802601a73353d1b7(&var_800, &var_538, &var_270);
    clap_builder::builder::arg::Arg::new::h465ca0a72bbbad2e(&var_538, 
        "canonicalize-missingcanonicalize…");
    clap_builder::builder::arg::Arg::short::h90ac967af5f5b923(&var_a50, &var_538, 0x6d);
    clap_builder::builder::arg::Arg::long::hff5d49378248701b(&var_538, &var_a50, 
        "canonicalize-missingcanonicalize…");
    clap_builder::builder::arg::Arg::help::h2cb296bdd2950d14(&var_a50, &var_538, 
        "canonicalize by following every …", 0x86);
    clap_builder::builder::arg::Arg::action::h53fbdacfe1f99565(&var_270, &var_a50, 2);
    clap_builder::builder::command::Command::arg::h802601a73353d1b7(&var_538, &var_800, &var_270);
    clap_builder::builder::arg::Arg::new::h465ca0a72bbbad2e(&var_800, 
        "no-newlinedo not output the trai…");
    clap_builder::builder::arg::Arg::short::h90ac967af5f5b923(&var_a50, &var_800, 0x6e);
    clap_builder::builder::arg::Arg::long::hff5d49378248701b(&var_800, &var_a50, 
        "no-newlinedo not output the trai…");
    clap_builder::builder::arg::Arg::help::h2cb296bdd2950d14(&var_a50, &var_800, 
        "do not output the trailing delim…", 0x24);
    clap_builder::builder::arg::Arg::action::h53fbdacfe1f99565(&var_270, &var_a50, 2);
    clap_builder::builder::command::Command::arg::h802601a73353d1b7(&var_800, &var_538, &var_270);
    clap_builder::builder::arg::Arg::new::h465ca0a72bbbad2e(&var_538, 
        "quietsuppress most error message…");
    clap_builder::builder::arg::Arg::short::h90ac967af5f5b923(&var_a50, &var_538, 0x71);
    clap_builder::builder::arg::Arg::long::hff5d49378248701b(&var_538, &var_a50, 
        "quietsuppress most error message…");
    clap_builder::builder::arg::Arg::help::h2cb296bdd2950d14(&var_a50, &var_538, 
        "suppress most error messagessile…", 0x1c);
    clap_builder::builder::arg::Arg::action::h53fbdacfe1f99565(&var_270, &var_a50, 2);
    clap_builder::builder::command::Command::arg::h802601a73353d1b7(&var_538, &var_800, &var_270);
    clap_builder::builder::arg::Arg::new::h465ca0a72bbbad2e(&var_800, 
        "silentverbosereport error messag…");
    clap_builder::builder::arg::Arg::short::h90ac967af5f5b923(&var_a50, &var_800, 0x73);
    clap_builder::builder::arg::Arg::long::hff5d49378248701b(&var_800, &var_a50, 
        "silentverbosereport error messag…");
    clap_builder::builder::arg::Arg::help::h2cb296bdd2950d14(&var_a50, &var_800, 
        "suppress most error messagessile…", 0x1c);
    clap_builder::builder::arg::Arg::action::h53fbdacfe1f99565(&var_270, &var_a50, 2);
    clap_builder::builder::command::Command::arg::h802601a73353d1b7(&var_800, &var_538, &var_270);
    clap_builder::builder::arg::Arg::new::h465ca0a72bbbad2e(&var_538, 
        "verbosereport error messagesepar…");
    clap_builder::builder::arg::Arg::short::h90ac967af5f5b923(&var_a50, &var_538, 0x76);
    clap_builder::builder::arg::Arg::long::hff5d49378248701b(&var_538, &var_a50, 
        "verbosereport error messagesepar…");
    clap_builder::builder::arg::Arg::help::h2cb296bdd2950d14(&var_a50, &var_538, 
        "report error messageseparate out…", 0x14);
    clap_builder::builder::arg::Arg::action::h53fbdacfe1f99565(&var_270, &var_a50, 2);
    clap_builder::builder::command::Command::arg::h802601a73353d1b7(&var_538, &var_800, &var_270);
    clap_builder::builder::arg::Arg::new::h465ca0a72bbbad2e(&var_800, 
        "zeroAnsi -- \x1b[8mhelpNoneshimn…");
    clap_builder::builder::arg::Arg::short::h90ac967af5f5b923(&var_a50, &var_800, 0x7a);
    clap_builder::builder::arg::Arg::long::hff5d49378248701b(&var_800, &var_a50, 
        "zeroAnsi -- \x1b[8mhelpNoneshimn…");
    clap_builder::builder::arg::Arg::help::h2cb296bdd2950d14(&var_a50, &var_800, 
        "separate output with NUL rather …", 0x2c);
    clap_builder::builder::arg::Arg::action::h53fbdacfe1f99565(&var_270, &var_a50, 2);
    clap_builder::builder::command::Command::arg::h802601a73353d1b7(&var_800, &var_538, &var_270);
    clap_builder::builder::arg::Arg::new::h465ca0a72bbbad2e(&var_538, 
        "filessrc/uu/readlink/src/readlin…");
    clap_builder::builder::arg::Arg::action::h53fbdacfe1f99565(&var_a50, &var_538, 1);
    clap_builder::builder::arg::Arg::value_hint::h8d3b916d6ea2c8c1(&var_538, &var_a50);
    clap_builder::builder::command::Command::arg::h802601a73353d1b7(arg1, &var_800, &var_538);
    return arg1;
}
