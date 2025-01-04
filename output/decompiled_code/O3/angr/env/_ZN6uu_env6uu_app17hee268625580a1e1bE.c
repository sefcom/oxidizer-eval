long long uu_env::uu_app::hee268625580a1e1b(unsigned long long a0)
{
    unsigned long long v0;  // [sp-0xa68]
    char v1;  // [bp-0xa60]
    char v2;  // [bp-0xa58]
    char v3;  // [bp-0xa50]
    char v4;  // [bp-0x800]
    unsigned int v5;  // [sp-0x544]
    unsigned long long v6;  // [sp-0x540]
    int v7;  // [bp-0x538], Other Possible Types: char
    unsigned long long v8;  // [sp-0x528]
    char v9;  // [bp-0x27c]
    char v10;  // [bp-0x278]
    int v11;  // [bp-0x268], Other Possible Types: char, unsigned long long
    unsigned long long v12;  // [sp-0x260]
    unsigned long long v13;  // [sp-0x258]

    clap_builder::builder::command::Command::new::h82ee946e88d35563(&v7, "uu_env", 6);
    clap_builder::builder::command::Command::version::hea5eef57fa44d04c(&v4, &v7, "0.0.28", 6);
    clap_builder::builder::command::Command::about::h499a27fded82a175(&v7, &v4, "Set each NAME to VALUE in the environment and run COMMAND", 57);
    uucore::format_usage::h76fcb2d15fbabc58(&v3, "{} [OPTION]... [-] [NAME=VALUE]... [COMMAND [ARG]...]", 53);
    clap_builder::builder::command::Command::override_usage::h2d939722c7265726(&v4, &v7, &v3);
    clap_builder::builder::command::Command::after_help::h40247e36bfff4c88(&v7, &v4, "A mere - implies -i. If no COMMAND, print the resulting environment.", 68);
    memcpy(&v4, &v7, 700);
    v5 = 160 | *((int *)&v9);
    v6 = 128 | *((long long *)&v10);
    clap_builder::builder::arg::Arg::new::h34c168b44b098725(&v7, "ignore-environment", 18);
    clap_builder::builder::arg::Arg::short::he904153c6ff7f0ae(&v3, &v7, 105);
    clap_builder::builder::arg::Arg::long::hdc1abf31efe80dfc(&v7, &v3, "ignore-environment", 18);
    clap_builder::builder::arg::Arg::help::hb149cd933903096f(&v3, &v7, "start with an empty environment", 31);
    clap_builder::builder::arg::Arg::action::h7e39ad1df3936387(&v11, &v3, 2);
    clap_builder::builder::command::Command::arg::he80fb21d4daf850c(&v7, &v4, &v11);
    clap_builder::builder::arg::Arg::new::h34c168b44b098725(&v4, "chdir", 5);
    clap_builder::builder::arg::Arg::short::he904153c6ff7f0ae(&v3, &v4, 67);
    clap_builder::builder::arg::Arg::long::hdc1abf31efe80dfc(&v4, &v3, "chdir", 5);
    clap_builder::builder::arg::Arg::number_of_values::h0593b8edb9882a67(&v3, &v4, 1);
    clap_builder::builder::arg::Arg::value_name::hf84e6eac4729b848(&v4, &v3, "DIR", 3);
    v0 = 2;
    v13 = *((long long *)&v2);
    v11 = v0;
    v12 = *((long long *)&v1);
    clap_builder::builder::arg::Arg::value_parser::h1e063e34e188f6af(&v3, &v4, &v11);
    clap_builder::builder::arg::Arg::value_hint::hd2c2f8470b8dc8da(&v4, &v3, 4);
    clap_builder::builder::arg::Arg::help::hb149cd933903096f(&v3, &v4, "change working directory to DIR", 31);
    clap_builder::builder::command::Command::arg::he80fb21d4daf850c(&v4, &v7, &v3);
    clap_builder::builder::arg::Arg::new::h34c168b44b098725(&v7, "nullXCPUBOLDBlue", 4);
    clap_builder::builder::arg::Arg::short::he904153c6ff7f0ae(&v3, &v7, 48);
    clap_builder::builder::arg::Arg::long::hdc1abf31efe80dfc(&v7, &v3, "nullXCPUBOLDBlue", 4);
    clap_builder::builder::arg::Arg::help::hb149cd933903096f(&v3, &v7, "end each output line with a 0 byte rather than a newline (only valid when printing the environment)", 99);
    clap_builder::builder::arg::Arg::action::h7e39ad1df3936387(&v11, &v3, 2);
    clap_builder::builder::command::Command::arg::he80fb21d4daf850c(&v7, &v4, &v11);
    clap_builder::builder::arg::Arg::new::h34c168b44b098725(&v4, "fileTSTPi128", 4);
    clap_builder::builder::arg::Arg::short::he904153c6ff7f0ae(&v3, &v4, 102);
    clap_builder::builder::arg::Arg::long::hdc1abf31efe80dfc(&v4, &v3, "fileTSTPi128", 4);
    clap_builder::builder::arg::Arg::value_name::hf84e6eac4729b848(&v3, &v4, "PATH", 4);
    clap_builder::builder::arg::Arg::value_hint::hd2c2f8470b8dc8da(&v4, &v3, 3);
    v13 = *((long long *)&v2);
    *((int128_t *)&v11) = *((int128_t *)&v0);
    clap_builder::builder::arg::Arg::value_parser::h1e063e34e188f6af(&v3, &v4, &v11);
    clap_builder::builder::arg::Arg::action::h7e39ad1df3936387(&v4, &v3, 1);
    clap_builder::builder::arg::Arg::help::hb149cd933903096f(&v3, &v4, "read and set variables from a \".env\"-style configuration file (prior to any unset and/or set)", 93);
    clap_builder::builder::command::Command::arg::he80fb21d4daf850c(&v4, &v7, &v3);
    clap_builder::builder::arg::Arg::new::h34c168b44b098725(&v7, "unset", 5);
    clap_builder::builder::arg::Arg::short::he904153c6ff7f0ae(&v3, &v7, 117);
    clap_builder::builder::arg::Arg::long::hdc1abf31efe80dfc(&v7, &v3, "unset", 5);
    clap_builder::builder::arg::Arg::value_name::hf84e6eac4729b848(&v3, &v7, "NAMETRAPKILL", 4);
    clap_builder::builder::arg::Arg::action::h7e39ad1df3936387(&v7, &v3, 1);
    v13 = *((long long *)&v2);
    *((int128_t *)&v11) = *((int128_t *)&v0);
    clap_builder::builder::arg::Arg::value_parser::h1e063e34e188f6af(&v3, &v7, &v11);
    clap_builder::builder::arg::Arg::help::hb149cd933903096f(&v11, &v3, "remove variable from the environment", 36);
    clap_builder::builder::command::Command::arg::he80fb21d4daf850c(&v7, &v4, &v11);
    clap_builder::builder::arg::Arg::new::h34c168b44b098725(&v4, "debug", 5);
    clap_builder::builder::arg::Arg::short::he904153c6ff7f0ae(&v3, &v4, 118);
    clap_builder::builder::arg::Arg::long::hdc1abf31efe80dfc(&v4, &v3, "debug", 5);
    clap_builder::builder::arg::Arg::action::h7e39ad1df3936387(&v3, &v4, 4);
    clap_builder::builder::arg::Arg::help::hb149cd933903096f(&v11, &v3, "print verbose information for each processing step", 50);
    clap_builder::builder::command::Command::arg::he80fb21d4daf850c(&v4, &v7, &v11);
    clap_builder::builder::arg::Arg::new::h34c168b44b098725(&v7, "split-string", 12);
    clap_builder::builder::arg::Arg::short::he904153c6ff7f0ae(&v3, &v7, 83);
    clap_builder::builder::arg::Arg::long::hdc1abf31efe80dfc(&v7, &v3, "split-string", 12);
    clap_builder::builder::arg::Arg::value_name::hf84e6eac4729b848(&v3, &v7, "S", 1);
    clap_builder::builder::arg::Arg::action::h7e39ad1df3936387(&v7, &v3, 0);
    v13 = *((long long *)&v2);
    *((int128_t *)&v11) = *((int128_t *)&v0);
    clap_builder::builder::arg::Arg::value_parser::h1e063e34e188f6af(&v3, &v7, &v11);
    clap_builder::builder::arg::Arg::help::hb149cd933903096f(&v11, &v3, "process and split S into separate arguments; used to pass multiple arguments on shebang lines", 93);
    clap_builder::builder::command::Command::arg::he80fb21d4daf850c(&v7, &v4, &v11);
    clap_builder::builder::arg::Arg::new::h34c168b44b098725(&v4, "argv0", 5);
    clap_builder::builder::arg::Arg::overrides_with::h6554d17c14b8bfea(&v3, &v4, "argv0", 5);
    clap_builder::builder::arg::Arg::short::he904153c6ff7f0ae(&v4, &v3, 97);
    clap_builder::builder::arg::Arg::long::hdc1abf31efe80dfc(&v3, &v4, "argv0", 5);
    clap_builder::builder::arg::Arg::value_name::hf84e6eac4729b848(&v4, &v3, "a", 1);
    clap_builder::builder::arg::Arg::action::h7e39ad1df3936387(&v3, &v4, 0);
    v13 = *((long long *)&v2);
    *((int128_t *)&v11) = *((int128_t *)&v0);
    clap_builder::builder::arg::Arg::value_parser::h1e063e34e188f6af(&v4, &v3, &v11);
    clap_builder::builder::arg::Arg::help::hb149cd933903096f(&v3, &v4, "Override the zeroth argument passed to the command being executed. Without this option a default value of `command` is used.", 124);
    clap_builder::builder::command::Command::arg::he80fb21d4daf850c(&v4, &v7, &v3);
    clap_builder::builder::arg::Arg::new::h34c168b44b098725(&v7, "vars", 4);
    clap_builder::builder::arg::Arg::action::h7e39ad1df3936387(&v3, &v7, 1);
    v8 = *((long long *)&v2);
    *((int128_t *)&v7) = *((int128_t *)&v0);
    clap_builder::builder::arg::Arg::value_parser::h1e063e34e188f6af(&v11, &v3, &v7);
    clap_builder::builder::command::Command::arg::he80fb21d4daf850c(&v7, &v4, &v11);
    clap_builder::builder::arg::Arg::new::h34c168b44b098725(&v4, "ignore-signal", 13);
    clap_builder::builder::arg::Arg::long::hdc1abf31efe80dfc(&v3, &v4, "ignore-signal", 13);
    clap_builder::builder::arg::Arg::value_name::hf84e6eac4729b848(&v4, &v3, "SIG", 3);
    clap_builder::builder::arg::Arg::action::h7e39ad1df3936387(&v3, &v4, 1);
    clap_builder::builder::arg::Arg::value_parser::h1e063e34e188f6af(&v4, &v3, &v0);
    clap_builder::builder::arg::Arg::help::hb149cd933903096f(&v3, &v4, "set handling of SIG signal(s) to do nothing", 43);
    clap_builder::builder::command::Command::arg::he80fb21d4daf850c(a0, &v7, &v3);
    return a0;
}
