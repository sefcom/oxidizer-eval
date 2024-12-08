long long uu_shuf::uu_app::h4ef06e23a2c65fa3(unsigned long long a0, unsigned long a1, unsigned long a2)
{
    char v0;  // [bp-0xa48]
    char v1;  // [bp-0x7f8]
    unsigned long long v2;  // [sp-0x53c]
    unsigned int v3;  // [sp-0x534]
    char v4;  // [bp-0x530]
    char v5;  // [bp-0x274]
    char v6;  // [bp-0x26c]
    char v7;  // [bp-0x268]
    unsigned long long v9;  // rdx

    clap_builder::builder::command::Command::new::hef1d17b794f546a2(&v1, uucore::util_name::h412db5e565a079f3(), v9);
    clap_builder::builder::command::Command::about::hbb73a02ab7738bf4(&v4, &v1, "Shuffle the input by outputting a random permutation of input lines.\nEach output permutation is equally likely.\nWith no FILE, or when FILE is -, read standard input.", 165);
    clap_builder::builder::command::Command::version::hfcc2258ca782a26b(&v1, &v4, "0.0.28", 6);
    uucore::format_usage::h00b69bae12d8ac9c(&v0, "{} [OPTION]... [FILE]\n{} -e [OPTION]... [ARG]...\n{} -i LO-HI [OPTION]...", 72);
    clap_builder::builder::command::Command::override_usage::hfaabf6f7e53457b7(&v4, &v1, &v0);
    memcpy(&v1, &v4, 700);
    v2 = 549755814016 | *((long long *)&v5);
    v3 = *((int *)&v6);
    clap_builder::builder::arg::Arg::new::h78678e521b67b8e0(&v4, "echo", 4);
    clap_builder::builder::arg::Arg::short::h90e744207d529aa8(&v0, &v4, 101);
    clap_builder::builder::arg::Arg::long::h0a055a7467511011(&v4, &v0, "echo", 4);
    clap_builder::builder::arg::Arg::help::h61eed5c5e629b733(&v0, &v4, "treat each ARG as an input line", 31);
    clap_builder::builder::arg::Arg::action::h68ce98ee7928da5b(&v4, &v0, 2);
    clap_builder::builder::arg::Arg::overrides_with::h5846b33de7417608(&v0, &v4, "echo", 4);
    clap_builder::builder::arg::Arg::conflicts_with::h0ca17061580ce3f8(&v7, &v0, "input-range", 11);
    clap_builder::builder::command::Command::arg::h497d8c378fd86d90(&v4, &v1, &v7);
    clap_builder::builder::arg::Arg::new::h78678e521b67b8e0(&v1, "input-range", 11);
    clap_builder::builder::arg::Arg::short::h90e744207d529aa8(&v0, &v1, 105);
    clap_builder::builder::arg::Arg::long::h0a055a7467511011(&v1, &v0, "input-range", 11);
    clap_builder::builder::arg::Arg::value_name::h416b4200f41ede39(&v0, &v1, "LO-HI", 5);
    clap_builder::builder::arg::Arg::help::h61eed5c5e629b733(&v1, &v0, "treat each number LO through HI as an input line", 48);
    clap_builder::builder::arg::Arg::conflicts_with::h0ca17061580ce3f8(&v0, &v1, "file-or-args", 12);
    clap_builder::builder::command::Command::arg::h497d8c378fd86d90(&v1, &v4, &v0);
    clap_builder::builder::arg::Arg::new::h78678e521b67b8e0(&v4, "head-count", 10);
    clap_builder::builder::arg::Arg::short::h90e744207d529aa8(&v0, &v4, 110);
    clap_builder::builder::arg::Arg::long::h0a055a7467511011(&v4, &v0, "head-count", 10);
    clap_builder::builder::arg::Arg::value_name::h416b4200f41ede39(&v0, &v4, "COUNT", 5);
    clap_builder::builder::arg::Arg::action::h68ce98ee7928da5b(&v4, &v0, 1);
    clap_builder::builder::arg::Arg::help::h61eed5c5e629b733(&v0, &v4, "output at most COUNT lines", 26);
    clap_builder::builder::command::Command::arg::h497d8c378fd86d90(&v4, &v1, &v0);
    clap_builder::builder::arg::Arg::new::h78678e521b67b8e0(&v1, "output", 6);
    clap_builder::builder::arg::Arg::short::h90e744207d529aa8(&v0, &v1, 111);
    clap_builder::builder::arg::Arg::long::h0a055a7467511011(&v1, &v0, "output", 6);
    clap_builder::builder::arg::Arg::value_name::h416b4200f41ede39(&v0, &v1, "FILE", 4);
    clap_builder::builder::arg::Arg::help::h61eed5c5e629b733(&v1, &v0, "write result to FILE instead of standard output", 47);
    clap_builder::builder::arg::Arg::value_hint::hf13c950add61f1ff(&v0, &v1, 3);
    clap_builder::builder::command::Command::arg::h497d8c378fd86d90(&v1, &v4, &v0);
    clap_builder::builder::arg::Arg::new::h78678e521b67b8e0(&v4, "random-source", 13);
    clap_builder::builder::arg::Arg::long::h0a055a7467511011(&v0, &v4, "random-source", 13);
    clap_builder::builder::arg::Arg::value_name::h416b4200f41ede39(&v4, &v0, "FILE", 4);
    clap_builder::builder::arg::Arg::help::h61eed5c5e629b733(&v0, &v4, "get random bytes from FILE", 26);
    clap_builder::builder::arg::Arg::value_hint::hf13c950add61f1ff(&v7, &v0, 3);
    clap_builder::builder::command::Command::arg::h497d8c378fd86d90(&v4, &v1, &v7);
    clap_builder::builder::arg::Arg::new::h78678e521b67b8e0(&v1, "repeat", 6);
    clap_builder::builder::arg::Arg::short::h90e744207d529aa8(&v0, &v1, 114);
    clap_builder::builder::arg::Arg::long::h0a055a7467511011(&v1, &v0, "repeat", 6);
    clap_builder::builder::arg::Arg::help::h61eed5c5e629b733(&v0, &v1, "output lines can be repeated", 28);
    clap_builder::builder::arg::Arg::action::h68ce98ee7928da5b(&v1, &v0, 2);
    clap_builder::builder::arg::Arg::overrides_with::h5846b33de7417608(&v0, &v1, "repeat", 6);
    clap_builder::builder::command::Command::arg::h497d8c378fd86d90(&v1, &v4, &v0);
    clap_builder::builder::arg::Arg::new::h78678e521b67b8e0(&v4, "zero-terminated", 15);
    clap_builder::builder::arg::Arg::short::h90e744207d529aa8(&v0, &v4, 122);
    clap_builder::builder::arg::Arg::long::h0a055a7467511011(&v4, &v0, "zero-terminated", 15);
    clap_builder::builder::arg::Arg::help::h61eed5c5e629b733(&v0, &v4, "line delimiter is NUL, not newline", 34);
    clap_builder::builder::arg::Arg::action::h68ce98ee7928da5b(&v4, &v0, 2);
    clap_builder::builder::arg::Arg::overrides_with::h5846b33de7417608(&v0, &v4, "zero-terminated", 15);
    clap_builder::builder::command::Command::arg::h497d8c378fd86d90(&v4, &v1, &v0);
    clap_builder::builder::arg::Arg::new::h78678e521b67b8e0(&v1, "file-or-args", 12);
    clap_builder::builder::arg::Arg::action::h68ce98ee7928da5b(&v0, &v1, 1);
    clap_builder::builder::arg::Arg::value_hint::hf13c950add61f1ff(&v1, &v0, 3);
    clap_builder::builder::command::Command::arg::h497d8c378fd86d90(a0, &v4, &v1);
    return a0;
}
