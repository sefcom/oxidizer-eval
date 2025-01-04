long long uu_factor::uu_app::h680fb957320d0cf8(unsigned long long a0, unsigned long a1, unsigned long a2)
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

    clap_builder::builder::command::Command::new::hb5e4f03e9e5506b0(&v0, uucore::util_name::h60d842bf27b05e82(), v9);
    clap_builder::builder::command::Command::version::h7b2f787e58b4ee93(&v3, &v0, v9);
    clap_builder::builder::command::Command::about::h7edd897f24cf3586(&v0, &v3);
    uucore::format_usage::h76fcb2d15fbabc58(&v6, "{} [OPTION]... [NUMBER]...Print factors in the form p^ePrint help information.Only odd modulus are supported by the Montgomery form/home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/num-modular-0.5.1/src/monty.rs/home/34r7hm4n/.cargo/regis", 26);
    clap_builder::builder::command::Command::override_usage::ha9e3b5847de0e11a(&v3, &v0, &v6);
    memcpy(&v0, &v3, 700);
    v1 = 1126484022657160 | *((long long *)&v4);
    v2 = *((int *)&v5);
    clap_builder::builder::arg::Arg::new::hc1edbe40a47f8a49(&v3, "NUMBER0.0.28Print the prime factors of the given NUMBER(s).\nIf none are specified, read from standard input.{} [OPTION]... [NUMBER]...Print factors in the form p^ePrint help information.Only odd modulus are supported by the Montgomery form/home/34r7hm4n/.c", 6);
    clap_builder::builder::arg::Arg::action::h326cdfe38f2ce453(&v6, &v3, 1);
    clap_builder::builder::command::Command::arg::h7e95c5092dae0378(&v3, &v0, &v6);
    clap_builder::builder::arg::Arg::new::hc1edbe40a47f8a49(&v0, "exponentsNUMBER0.0.28Print the prime factors of the given NUMBER(s).\nIf none are specified, read from standard input.{} [OPTION]... [NUMBER]...Print factors in the form p^ePrint help information.Only odd modulus are supported by the Montgomery form/home/34", 9);
    clap_builder::builder::arg::Arg::short::he98ee2dd7a709e3e(&v6, &v0);
    clap_builder::builder::arg::Arg::long::hf6fb7bfc1a444d08(&v0, &v6, "exponentsNUMBER0.0.28Print the prime factors of the given NUMBER(s).\nIf none are specified, read from standard input.{} [OPTION]... [NUMBER]...Print factors in the form p^ePrint help information.Only odd modulus are supported by the Montgomery form/home/34", 9);
    clap_builder::builder::arg::Arg::help::h09a32e7dd5808c59(&v6, &v0, "Print factors in the form p^ePrint help information.Only odd modulus are supported by the Montgomery form/home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/num-modular-0.5.1/src/monty.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-6f", 29);
    clap_builder::builder::arg::Arg::action::h326cdfe38f2ce453(&v7, &v6, 2);
    clap_builder::builder::command::Command::arg::h7e95c5092dae0378(&v0, &v3, &v7);
    clap_builder::builder::arg::Arg::new::hc1edbe40a47f8a49(&v3, "helpNoneshimname", 4);
    clap_builder::builder::arg::Arg::long::hf6fb7bfc1a444d08(&v6, &v3, "helpNoneshimname", 4);
    clap_builder::builder::arg::Arg::help::h09a32e7dd5808c59(&v3, &v6, "Print help information.Only odd modulus are supported by the Montgomery form/home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/num-modular-0.5.1/src/monty.rs/home/34r7hm4n/.cargo/registry/src/index.crates.io-6f17d22bba15001f/rand_core-0.6.", 23);
    clap_builder::builder::arg::Arg::action::h326cdfe38f2ce453(&v6, &v3, 5);
    clap_builder::builder::command::Command::arg::h7e95c5092dae0378(a0, &v0, &v6);
    return a0;
}
