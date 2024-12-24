long long uu_env::uu_app::hb6df0b273fd76a93(unsigned long long a0)
{
    unsigned long long v0;  // [sp-0xa68]
    char v1;  // [bp-0xa60]
    char v2;  // [bp-0xa58]
    char v3;  // [bp-0xa50]
    char v4;  // [bp-0x800]
    unsigned long long v5;  // [sp-0x544]
    unsigned int v6;  // [sp-0x53c]
    int v7;  // [bp-0x538], Other Possible Types: char
    unsigned long long v8;  // [sp-0x528]
    char v9;  // [bp-0x27c]
    char v10;  // [bp-0x274]
    int v11;  // [bp-0x268], Other Possible Types: char, unsigned long long
    unsigned long long v12;  // [sp-0x260]
    unsigned long long v13;  // [sp-0x258]

    clap_builder::builder::command::Command::new::h0bdc8b301b63cb6a(&v7, "uu_env", 6);
    clap_builder::builder::command::Command::version::h0430459842f1595a(&v4, &v7, "0.0.28", 6);
    clap_builder::builder::command::Command::about::h5c5ef8847554e6f6(&v7, &v4, "Set each NAME to VALUE in the environment and run COMMAND", 57);
    uucore::format_usage::h00b69bae12d8ac9c(&v3, "{} [OPTION]... [-] [NAME=VALUE]... [COMMAND [ARG]...]", 53);
    clap_builder::builder::command::Command::override_usage::h92ce34e644761cd9(&v4, &v7, &v3);
    clap_builder::builder::command::Command::after_help::hf06417629a06961f(&v7, &v4, "A mere - implies -i. If no COMMAND, print the resulting environment.", 68);
    memcpy(&v4, &v7, 700);
    v5 = 549755814048 | *((long long *)&v9);
    v6 = *((int *)&v10);
    clap_builder::builder::arg::Arg::new::hc98543d92f129a0c(&v7, "ignore-environment", 18);
    clap_builder::builder::arg::Arg::short::h4ff5665cc4bf9b2e(&v3, &v7, 105);
    clap_builder::builder::arg::Arg::long::h3fabf9768261c893(&v7, &v3, "ignore-environment", 18);
    clap_builder::builder::arg::Arg::help::h8a5a5e3fa3d27e36(&v3, &v7, "start with an empty environment", 31);
    clap_builder::builder::arg::Arg::action::hc9084c5d664c6794(&v11, &v3, 2);
    clap_builder::builder::command::Command::arg::hec8c44ec3ffe5ff8(&v7, &v4, &v11);
    clap_builder::builder::arg::Arg::new::hc98543d92f129a0c(&v4, "chdir", 5);
    clap_builder::builder::arg::Arg::short::h4ff5665cc4bf9b2e(&v3, &v4, 67);
    clap_builder::builder::arg::Arg::long::h3fabf9768261c893(&v4, &v3, "chdir", 5);
    clap_builder::builder::arg::Arg::number_of_values::h761da4288980c29d(&v3, &v4, 1);
    clap_builder::builder::arg::Arg::value_name::h21228619b5e7baec(&v4, &v3, "DIR", 3);
    v0 = 2;
    v13 = *((long long *)&v2);
    v11 = v0;
    v12 = *((long long *)&v1);
    clap_builder::builder::arg::Arg::value_parser::h77b1aa02441c7e68(&v3, &v4, &v11);
    clap_builder::builder::arg::Arg::value_hint::hadff7a91ea1ef1b7(&v4, &v3, 4);
    clap_builder::builder::arg::Arg::help::h8a5a5e3fa3d27e36(&v3, &v4, "change working directory to DIR", 31);
    clap_builder::builder::command::Command::arg::hec8c44ec3ffe5ff8(&v4, &v7, &v3);
    clap_builder::builder::arg::Arg::new::hc98543d92f129a0c(&v7, "nullXCPUBOLDBlue", 4);
    clap_builder::builder::arg::Arg::short::h4ff5665cc4bf9b2e(&v3, &v7, 48);
    clap_builder::builder::arg::Arg::long::h3fabf9768261c893(&v7, &v3, "nullXCPUBOLDBlue", 4);
    clap_builder::builder::arg::Arg::help::h8a5a5e3fa3d27e36(&v3, &v7, "end each output line with a 0 byte rather than a newline (only valid when printing the environment)", 99);
    clap_builder::builder::arg::Arg::action::hc9084c5d664c6794(&v11, &v3, 2);
    clap_builder::builder::command::Command::arg::hec8c44ec3ffe5ff8(&v7, &v4, &v11);
    clap_builder::builder::arg::Arg::new::hc98543d92f129a0c(&v4, "fileTSTPi128", 4);
    clap_builder::builder::arg::Arg::short::h4ff5665cc4bf9b2e(&v3, &v4, 102);
    clap_builder::builder::arg::Arg::long::h3fabf9768261c893(&v4, &v3, "fileTSTPi128", 4);
    clap_builder::builder::arg::Arg::value_name::h21228619b5e7baec(&v3, &v4, "PATH", 4);
    clap_builder::builder::arg::Arg::value_hint::hadff7a91ea1ef1b7(&v4, &v3, 3);
    v13 = *((long long *)&v2);
    *((int128_t *)&v11) = *((int128_t *)&v0);
    clap_builder::builder::arg::Arg::value_parser::h77b1aa02441c7e68(&v3, &v4, &v11);
    clap_builder::builder::arg::Arg::action::hc9084c5d664c6794(&v4, &v3, 1);
    clap_builder::builder::arg::Arg::help::h8a5a5e3fa3d27e36(&v3, &v4, "read and set variables from a \".env\"-style configuration file (prior to any unset and/or set)", 93);
    clap_builder::builder::command::Command::arg::hec8c44ec3ffe5ff8(&v4, &v7, &v3);
    clap_builder::builder::arg::Arg::new::hc98543d92f129a0c(&v7, "unset", 5);
    clap_builder::builder::arg::Arg::short::h4ff5665cc4bf9b2e(&v3, &v7, 117);
    clap_builder::builder::arg::Arg::long::h3fabf9768261c893(&v7, &v3, "unset", 5);
    clap_builder::builder::arg::Arg::value_name::h21228619b5e7baec(&v3, &v7, "NAME", 4);
    clap_builder::builder::arg::Arg::action::hc9084c5d664c6794(&v7, &v3, 1);
    v13 = *((long long *)&v2);
    *((int128_t *)&v11) = *((int128_t *)&v0);
    clap_builder::builder::arg::Arg::value_parser::h77b1aa02441c7e68(&v3, &v7, &v11);
    clap_builder::builder::arg::Arg::help::h8a5a5e3fa3d27e36(&v11, &v3, "remove variable from the environment", 36);
    clap_builder::builder::command::Command::arg::hec8c44ec3ffe5ff8(&v7, &v4, &v11);
    clap_builder::builder::arg::Arg::new::hc98543d92f129a0c(&v4, "debug", 5);
    clap_builder::builder::arg::Arg::short::h4ff5665cc4bf9b2e(&v3, &v4, 118);
    clap_builder::builder::arg::Arg::long::h3fabf9768261c893(&v4, &v3, "debug", 5);
    clap_builder::builder::arg::Arg::action::hc9084c5d664c6794(&v3, &v4, 4);
    clap_builder::builder::arg::Arg::help::h8a5a5e3fa3d27e36(&v11, &v3, "print verbose information for each processing step", 50);
    clap_builder::builder::command::Command::arg::hec8c44ec3ffe5ff8(&v4, &v7, &v11);
    clap_builder::builder::arg::Arg::new::hc98543d92f129a0c(&v7, "split-string", 12);
    clap_builder::builder::arg::Arg::short::h4ff5665cc4bf9b2e(&v3, &v7, 83);
    clap_builder::builder::arg::Arg::long::h3fabf9768261c893(&v7, &v3, "split-string", 12);
    clap_builder::builder::arg::Arg::value_name::h21228619b5e7baec(&v3, &v7, "S", 1);
    clap_builder::builder::arg::Arg::action::hc9084c5d664c6794(&v7, &v3, 0);
    v13 = *((long long *)&v2);
    *((int128_t *)&v11) = *((int128_t *)&v0);
    clap_builder::builder::arg::Arg::value_parser::h77b1aa02441c7e68(&v3, &v7, &v11);
    clap_builder::builder::arg::Arg::help::h8a5a5e3fa3d27e36(&v11, &v3, "process and split S into separate arguments; used to pass multiple arguments on shebang lines", 93);
    clap_builder::builder::command::Command::arg::hec8c44ec3ffe5ff8(&v7, &v4, &v11);
    clap_builder::builder::arg::Arg::new::hc98543d92f129a0c(&v4, "argv0", 5);
    clap_builder::builder::arg::Arg::overrides_with::h0c9169ddd27e2da4(&v3, &v4, "argv0", 5);
    clap_builder::builder::arg::Arg::short::h4ff5665cc4bf9b2e(&v4, &v3, 97);
    clap_builder::builder::arg::Arg::long::h3fabf9768261c893(&v3, &v4, "argv0", 5);
    clap_builder::builder::arg::Arg::value_name::h21228619b5e7baec(&v4, &v3, "a", 1);
    clap_builder::builder::arg::Arg::action::hc9084c5d664c6794(&v3, &v4, 0);
    v13 = *((long long *)&v2);
    *((int128_t *)&v11) = *((int128_t *)&v0);
    clap_builder::builder::arg::Arg::value_parser::h77b1aa02441c7e68(&v4, &v3, &v11);
    clap_builder::builder::arg::Arg::help::h8a5a5e3fa3d27e36(&v3, &v4, "Override the zeroth argument passed to the command being executed. Without this option a default value of `command` is used.", 124);
    clap_builder::builder::command::Command::arg::hec8c44ec3ffe5ff8(&v4, &v7, &v3);
    clap_builder::builder::arg::Arg::new::hc98543d92f129a0c(&v7, "vars", 4);
    clap_builder::builder::arg::Arg::action::hc9084c5d664c6794(&v3, &v7, 1);
    v8 = *((long long *)&v2);
    *((int128_t *)&v7) = *((int128_t *)&v0);
    clap_builder::builder::arg::Arg::value_parser::h77b1aa02441c7e68(&v11, &v3, &v7);
    clap_builder::builder::command::Command::arg::hec8c44ec3ffe5ff8(&v7, &v4, &v11);
    clap_builder::builder::arg::Arg::new::hc98543d92f129a0c(&v4, "ignore-signal", 13);
    clap_builder::builder::arg::Arg::long::h3fabf9768261c893(&v3, &v4, "ignore-signal", 13);
    clap_builder::builder::arg::Arg::value_name::h21228619b5e7baec(&v4, &v3, "SIG", 3);
    clap_builder::builder::arg::Arg::action::hc9084c5d664c6794(&v3, &v4, 1);
    clap_builder::builder::arg::Arg::value_parser::h77b1aa02441c7e68(&v4, &v3, &v0);
    clap_builder::builder::arg::Arg::help::h8a5a5e3fa3d27e36(&v3, &v4, "set handling of SIG signal(s) to do nothing", 43);
    clap_builder::builder::command::Command::arg::hec8c44ec3ffe5ff8(a0, &v7, &v3);
    return a0;
}
