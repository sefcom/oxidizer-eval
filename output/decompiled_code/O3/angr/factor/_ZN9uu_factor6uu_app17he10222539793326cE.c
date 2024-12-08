long long uu_factor::uu_app::he10222539793326c(unsigned long long a0, unsigned long a1, unsigned long a2)
{
    char v0;  // [bp-0xa50]
    unsigned long long v1;  // [sp-0x794]
    unsigned int v2;  // [sp-0x78c]
    char v3;  // [bp-0x788]
    char v4;  // [bp-0x4cc]
    char v5;  // [bp-0x4c4]
    char v6;  // [bp-0x4c0]
    char v7;  // [bp-0x270]
    unsigned long long v9;  // rdx

    clap_builder::builder::command::Command::new::h95445f4ff5859dd9(&v0, uucore::util_name::h412db5e565a079f3(), v9);
    clap_builder::builder::command::Command::version::h300384a8195e62bf(&v3, &v0, v9);
    clap_builder::builder::command::Command::about::h0bacbc54372f0bfe(&v0, &v3);
    uucore::format_usage::h00b69bae12d8ac9c(&v6, "{} [OPTION]... [NUMBER]...Print factors in the form p^ePrint help information.Only odd modulus are supported by the Montgomery form/home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/num-modular-0.5.1/src/monty.rs/home/34r7hm4n/.cargo/regis", 26);
    clap_builder::builder::command::Command::override_usage::h3fe7c10ffd92f710(&v3, &v0, &v6);
    memcpy(&v0, &v3, 700);
    v1 = 1126484022657160 | *((long long *)&v4);
    v2 = *((int *)&v5);
    clap_builder::builder::arg::Arg::new::hcd030be4d9431bb4(&v3, "NUMBER0.0.28Print the prime factors of the given NUMBER(s).\nIf none are specified, read from standard input.{} [OPTION]... [NUMBER]...Print factors in the form p^ePrint help information.Only odd modulus are supported by the Montgomery form/home/34r7hm4n/.c", 6);
    clap_builder::builder::arg::Arg::action::h3a943686fa21e675(&v6, &v3, 1);
    clap_builder::builder::command::Command::arg::h8c94662295dd0754(&v3, &v0, &v6);
    clap_builder::builder::arg::Arg::new::hcd030be4d9431bb4(&v0, "exponentsNUMBER0.0.28Print the prime factors of the given NUMBER(s).\nIf none are specified, read from standard input.{} [OPTION]... [NUMBER]...Print factors in the form p^ePrint help information.Only odd modulus are supported by the Montgomery form/home/34", 9);
    clap_builder::builder::arg::Arg::short::h9a2c39c558945e7c(&v6, &v0);
    clap_builder::builder::arg::Arg::long::h67015a598a6bc5f5(&v0, &v6, "exponentsNUMBER0.0.28Print the prime factors of the given NUMBER(s).\nIf none are specified, read from standard input.{} [OPTION]... [NUMBER]...Print factors in the form p^ePrint help information.Only odd modulus are supported by the Montgomery form/home/34", 9);
    clap_builder::builder::arg::Arg::help::h4e1cbecaf3cf321b(&v6, &v0, "Print factors in the form p^ePrint help information.Only odd modulus are supported by the Montgomery form/home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/num-modular-0.5.1/src/monty.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-6f", 29);
    clap_builder::builder::arg::Arg::action::h3a943686fa21e675(&v7, &v6, 2);
    clap_builder::builder::command::Command::arg::h8c94662295dd0754(&v0, &v3, &v7);
    clap_builder::builder::arg::Arg::new::hcd030be4d9431bb4(&v3, "helpNoneshimname", 4);
    clap_builder::builder::arg::Arg::long::h67015a598a6bc5f5(&v6, &v3, "helpNoneshimname", 4);
    clap_builder::builder::arg::Arg::help::h4e1cbecaf3cf321b(&v3, &v6, "Print help information.Only odd modulus are supported by the Montgomery form/home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/num-modular-0.5.1/src/monty.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/rand_core-0.6.", 23);
    clap_builder::builder::arg::Arg::action::h3a943686fa21e675(&v6, &v3, 5);
    clap_builder::builder::command::Command::arg::h8c94662295dd0754(a0, &v0, &v6);
    return a0;
}
