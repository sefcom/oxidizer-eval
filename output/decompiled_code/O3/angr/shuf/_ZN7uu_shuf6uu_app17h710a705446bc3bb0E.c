long long uu_shuf::uu_app::h710a705446bc3bb0(unsigned long long a0, unsigned long a1, unsigned long a2)
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

    clap_builder::builder::command::Command::new::h0bf11a27185a90ba(&v1, uucore::util_name::h60d842bf27b05e82(), v9);
    clap_builder::builder::command::Command::about::hd597994d8cea349d(&v4, &v1, "Shuffle the input by outputting a random permutation of input lines.\nEach output permutation is equally likely.\nWith no FILE, or when FILE is -, read standard input.", 165);
    clap_builder::builder::command::Command::version::habf91e8854255576(&v1, &v4, "0.0.28", 6);
    uucore::format_usage::h76fcb2d15fbabc58(&v0, "{} [OPTION]... [FILE]\n{} -e [OPTION]... [ARG]...\n{} -i LO-HI [OPTION]...", 72);
    clap_builder::builder::command::Command::override_usage::h86fbf536ab62a2a8(&v4, &v1, &v0);
    memcpy(&v1, &v4, 700);
    v2 = 549755814016 | *((long long *)&v5);
    v3 = *((int *)&v6);
    clap_builder::builder::arg::Arg::new::hb55e6547f701c544(&v4, "echo", 4);
    clap_builder::builder::arg::Arg::short::hc5895820c9001562(&v0, &v4, 101);
    clap_builder::builder::arg::Arg::long::h4f4cbd0b31a73627(&v4, &v0, "echo", 4);
    clap_builder::builder::arg::Arg::help::h60914f8564d33ae9(&v0, &v4, "treat each ARG as an input line", 31);
    clap_builder::builder::arg::Arg::action::haa75458d1b56b731(&v4, &v0, 2);
    clap_builder::builder::arg::Arg::overrides_with::h5143f80bad1c105a(&v0, &v4, "echo", 4);
    clap_builder::builder::arg::Arg::conflicts_with::h6545cdf5d75a2560(&v7, &v0, "input-range", 11);
    clap_builder::builder::command::Command::arg::h1b9d832713c89b77(&v4, &v1, &v7);
    clap_builder::builder::arg::Arg::new::hb55e6547f701c544(&v1, "input-range", 11);
    clap_builder::builder::arg::Arg::short::hc5895820c9001562(&v0, &v1, 105);
    clap_builder::builder::arg::Arg::long::h4f4cbd0b31a73627(&v1, &v0, "input-range", 11);
    clap_builder::builder::arg::Arg::value_name::h07ba2a10b48e0628(&v0, &v1, "LO-HI", 5);
    clap_builder::builder::arg::Arg::help::h60914f8564d33ae9(&v1, &v0, "treat each number LO through HI as an input line", 48);
    clap_builder::builder::arg::Arg::conflicts_with::h6545cdf5d75a2560(&v0, &v1, "file-or-argssrc/uu/shuf/src/shuf.rs", 12);
    clap_builder::builder::command::Command::arg::h1b9d832713c89b77(&v1, &v4, &v0);
    clap_builder::builder::arg::Arg::new::hb55e6547f701c544(&v4, "head-count", 10);
    clap_builder::builder::arg::Arg::short::hc5895820c9001562(&v0, &v4, 110);
    clap_builder::builder::arg::Arg::long::h4f4cbd0b31a73627(&v4, &v0, "head-count", 10);
    clap_builder::builder::arg::Arg::value_name::h07ba2a10b48e0628(&v0, &v4, "COUNT", 5);
    clap_builder::builder::arg::Arg::action::haa75458d1b56b731(&v4, &v0, 1);
    clap_builder::builder::arg::Arg::help::h60914f8564d33ae9(&v0, &v4, "output at most COUNT lines", 26);
    clap_builder::builder::command::Command::arg::h1b9d832713c89b77(&v4, &v1, &v0);
    clap_builder::builder::arg::Arg::new::hb55e6547f701c544(&v1, "output", 6);
    clap_builder::builder::arg::Arg::short::hc5895820c9001562(&v0, &v1, 111);
    clap_builder::builder::arg::Arg::long::h4f4cbd0b31a73627(&v1, &v0, "output", 6);
    clap_builder::builder::arg::Arg::value_name::h07ba2a10b48e0628(&v0, &v1, "FILE", 4);
    clap_builder::builder::arg::Arg::help::h60914f8564d33ae9(&v1, &v0, "write result to FILE instead of standard output", 47);
    clap_builder::builder::arg::Arg::value_hint::h546644f1bcd1fd0e(&v0, &v1, 3);
    clap_builder::builder::command::Command::arg::h1b9d832713c89b77(&v1, &v4, &v0);
    clap_builder::builder::arg::Arg::new::hb55e6547f701c544(&v4, "random-source", 13);
    clap_builder::builder::arg::Arg::long::h4f4cbd0b31a73627(&v0, &v4, "random-source", 13);
    clap_builder::builder::arg::Arg::value_name::h07ba2a10b48e0628(&v4, &v0, "FILE", 4);
    clap_builder::builder::arg::Arg::help::h60914f8564d33ae9(&v0, &v4, "get random bytes from FILE", 26);
    clap_builder::builder::arg::Arg::value_hint::h546644f1bcd1fd0e(&v7, &v0, 3);
    clap_builder::builder::command::Command::arg::h1b9d832713c89b77(&v4, &v1, &v7);
    clap_builder::builder::arg::Arg::new::hb55e6547f701c544(&v1, "repeat", 6);
    clap_builder::builder::arg::Arg::short::hc5895820c9001562(&v0, &v1, 114);
    clap_builder::builder::arg::Arg::long::h4f4cbd0b31a73627(&v1, &v0, "repeat", 6);
    clap_builder::builder::arg::Arg::help::h60914f8564d33ae9(&v0, &v1, "output lines can be repeated", 28);
    clap_builder::builder::arg::Arg::action::haa75458d1b56b731(&v1, &v0, 2);
    clap_builder::builder::arg::Arg::overrides_with::h5143f80bad1c105a(&v0, &v1, "repeat", 6);
    clap_builder::builder::command::Command::arg::h1b9d832713c89b77(&v1, &v4, &v0);
    clap_builder::builder::arg::Arg::new::hb55e6547f701c544(&v4, "zero-terminated", 15);
    clap_builder::builder::arg::Arg::short::hc5895820c9001562(&v0, &v4, 122);
    clap_builder::builder::arg::Arg::long::h4f4cbd0b31a73627(&v4, &v0, "zero-terminated", 15);
    clap_builder::builder::arg::Arg::help::h60914f8564d33ae9(&v0, &v4, "line delimiter is NUL, not newline", 34);
    clap_builder::builder::arg::Arg::action::haa75458d1b56b731(&v4, &v0, 2);
    clap_builder::builder::arg::Arg::overrides_with::h5143f80bad1c105a(&v0, &v4, "zero-terminated", 15);
    clap_builder::builder::command::Command::arg::h1b9d832713c89b77(&v4, &v1, &v0);
    clap_builder::builder::arg::Arg::new::hb55e6547f701c544(&v1, "file-or-argssrc/uu/shuf/src/shuf.rs", 12);
    clap_builder::builder::arg::Arg::action::haa75458d1b56b731(&v0, &v1, 1);
    clap_builder::builder::arg::Arg::value_hint::h546644f1bcd1fd0e(&v1, &v0, 3);
    clap_builder::builder::command::Command::arg::h1b9d832713c89b77(a0, &v4, &v1);
    return a0;
}
