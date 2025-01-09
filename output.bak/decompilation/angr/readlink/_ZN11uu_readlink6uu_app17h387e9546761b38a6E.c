long long uu_readlink::uu_app::h387e9546761b38a6(unsigned long long a0)
{
    char v0;  // [bp-0xa50]
    char v1;  // [bp-0x800]
    unsigned long long v2;  // [sp-0x544]
    unsigned int v3;  // [sp-0x53c]
    char v4;  // [bp-0x538]
    char v5;  // [bp-0x27c]
    char v6;  // [bp-0x274]
    char v7;  // [bp-0x270]
    unsigned long long v9;  // rdx

    clap_builder::builder::command::Command::new::hd3cf78caaacb3353(&v1, uucore::util_name::h60d842bf27b05e82(), v9);
    clap_builder::builder::command::Command::version::h5769eb7fe5d5d686(&v4, &v1);
    clap_builder::builder::command::Command::about::hc4b6e58c034683c5(&v1, &v4);
    uucore::format_usage::h76fcb2d15fbabc58(&v0, "{} [OPTION]... [FILE]...", 24);
    clap_builder::builder::command::Command::override_usage::h4b8d0145a5fc5c19(&v4, &v1, &v0);
    memcpy(&v1, &v4, 700);
    v2 = 549755814016 | *((long long *)&v5);
    v3 = *((int *)&v6);
    clap_builder::builder::arg::Arg::new::h465ca0a72bbbad2e(&v4, "canonicalize", 12);
    clap_builder::builder::arg::Arg::short::h90ac967af5f5b923(&v0, &v4, 102);
    clap_builder::builder::arg::Arg::long::hff5d49378248701b(&v4, &v0, "canonicalize", 12);
    clap_builder::builder::arg::Arg::help::h2cb296bdd2950d14(&v0, &v4, "canonicalize by following every symlink in every component of the given name recursively; all but the last component must exist", 127);
    clap_builder::builder::arg::Arg::action::h53fbdacfe1f99565(&v7, &v0, 2);
    clap_builder::builder::command::Command::arg::h802601a73353d1b7(&v4, &v1, &v7);
    clap_builder::builder::arg::Arg::new::h465ca0a72bbbad2e(&v1, "canonicalize-existing", 21);
    clap_builder::builder::arg::Arg::short::h90ac967af5f5b923(&v0, &v1, 101);
    clap_builder::builder::arg::Arg::long::hff5d49378248701b(&v1, &v0, "canonicalize-existing", 21);
    clap_builder::builder::arg::Arg::help::h2cb296bdd2950d14(&v0, &v1, "canonicalize by following every symlink in every component of the given name recursively, all components must exist", 115);
    clap_builder::builder::arg::Arg::action::h53fbdacfe1f99565(&v7, &v0, 2);
    clap_builder::builder::command::Command::arg::h802601a73353d1b7(&v1, &v4, &v7);
    clap_builder::builder::arg::Arg::new::h465ca0a72bbbad2e(&v4, "canonicalize-missing", 20);
    clap_builder::builder::arg::Arg::short::h90ac967af5f5b923(&v0, &v4, 109);
    clap_builder::builder::arg::Arg::long::hff5d49378248701b(&v4, &v0, "canonicalize-missing", 20);
    clap_builder::builder::arg::Arg::help::h2cb296bdd2950d14(&v0, &v4, "canonicalize by following every symlink in every component of the given name recursively, without requirements on components existence", 134);
    clap_builder::builder::arg::Arg::action::h53fbdacfe1f99565(&v7, &v0, 2);
    clap_builder::builder::command::Command::arg::h802601a73353d1b7(&v4, &v1, &v7);
    clap_builder::builder::arg::Arg::new::h465ca0a72bbbad2e(&v1, "no-newline", 10);
    clap_builder::builder::arg::Arg::short::h90ac967af5f5b923(&v0, &v1, 110);
    clap_builder::builder::arg::Arg::long::hff5d49378248701b(&v1, &v0, "no-newline", 10);
    clap_builder::builder::arg::Arg::help::h2cb296bdd2950d14(&v0, &v1, "do not output the trailing delimiter", 36);
    clap_builder::builder::arg::Arg::action::h53fbdacfe1f99565(&v7, &v0, 2);
    clap_builder::builder::command::Command::arg::h802601a73353d1b7(&v1, &v4, &v7);
    clap_builder::builder::arg::Arg::new::h465ca0a72bbbad2e(&v4, "quiet", 5);
    clap_builder::builder::arg::Arg::short::h90ac967af5f5b923(&v0, &v4, 113);
    clap_builder::builder::arg::Arg::long::hff5d49378248701b(&v4, &v0, "quiet", 5);
    clap_builder::builder::arg::Arg::help::h2cb296bdd2950d14(&v0, &v4, "suppress most error messages", 28);
    clap_builder::builder::arg::Arg::action::h53fbdacfe1f99565(&v7, &v0, 2);
    clap_builder::builder::command::Command::arg::h802601a73353d1b7(&v4, &v1, &v7);
    clap_builder::builder::arg::Arg::new::h465ca0a72bbbad2e(&v1, "silent", 6);
    clap_builder::builder::arg::Arg::short::h90ac967af5f5b923(&v0, &v1, 115);
    clap_builder::builder::arg::Arg::long::hff5d49378248701b(&v1, &v0, "silent", 6);
    clap_builder::builder::arg::Arg::help::h2cb296bdd2950d14(&v0, &v1, "suppress most error messages", 28);
    clap_builder::builder::arg::Arg::action::h53fbdacfe1f99565(&v7, &v0, 2);
    clap_builder::builder::command::Command::arg::h802601a73353d1b7(&v1, &v4, &v7);
    clap_builder::builder::arg::Arg::new::h465ca0a72bbbad2e(&v4, "verbose", 7);
    clap_builder::builder::arg::Arg::short::h90ac967af5f5b923(&v0, &v4, 118);
    clap_builder::builder::arg::Arg::long::hff5d49378248701b(&v4, &v0, "verbose", 7);
    clap_builder::builder::arg::Arg::help::h2cb296bdd2950d14(&v0, &v4, "report error message", 20);
    clap_builder::builder::arg::Arg::action::h53fbdacfe1f99565(&v7, &v0, 2);
    clap_builder::builder::command::Command::arg::h802601a73353d1b7(&v4, &v1, &v7);
    clap_builder::builder::arg::Arg::new::h465ca0a72bbbad2e(&v1, "zero", 4);
    clap_builder::builder::arg::Arg::short::h90ac967af5f5b923(&v0, &v1, 122);
    clap_builder::builder::arg::Arg::long::hff5d49378248701b(&v1, &v0, "zero", 4);
    clap_builder::builder::arg::Arg::help::h2cb296bdd2950d14(&v0, &v1, "separate output with NUL rather than newline", 44);
    clap_builder::builder::arg::Arg::action::h53fbdacfe1f99565(&v7, &v0, 2);
    clap_builder::builder::command::Command::arg::h802601a73353d1b7(&v1, &v4, &v7);
    clap_builder::builder::arg::Arg::new::h465ca0a72bbbad2e(&v4, "filessrc/uu/readlink/src/readlink.rs", 5);
    clap_builder::builder::arg::Arg::action::h53fbdacfe1f99565(&v0, &v4, 1);
    clap_builder::builder::arg::Arg::value_hint::h8d3b916d6ea2c8c1(&v4, &v0);
    clap_builder::builder::command::Command::arg::h802601a73353d1b7(a0, &v1, &v4);
    return a0;
}
