long long uu_seq::uu_app::hae1164401f91635b(unsigned long long a0, unsigned long a1, unsigned long a2)
{
    char v0;  // [bp-0xa48]
    unsigned int v1;  // [sp-0x78c]
    unsigned long long v2;  // [sp-0x788]
    char v3;  // [bp-0x780]
    char v4;  // [bp-0x4c4]
    char v5;  // [bp-0x4c0]
    char v6;  // [bp-0x4b8]
    char v7;  // [bp-0x268], Other Possible Types: unsigned long long
    unsigned long long v8;  // [sp-0x260]
    char v9;  // [sp-0x258]
    unsigned long long v11;  // rdx

    clap_builder::builder::command::Command::new::hfa3c618acfad19bf(&v3, uucore::util_name::h412db5e565a079f3(), v11);
    memcpy(&v0, &v3, 700);
    v1 = 164 | *((int *)&v4);
    v2 = 128 | *((long long *)&v5);
    clap_builder::builder::command::Command::version::h40f30317c820f080(&v3, &v0, "0.0.28Display numbers from FIRST to LAST, in steps of INCREMENT.{} [OPTION]... LAST\n{} [OPTION]... FIRST LAST\n{} [OPTION]... FIRST INCREMENT LASTseparatorSeparator character (defaults to \\n)terminatorTerminator character (defaults to \\n)equal-widthEqualize", 6);
    clap_builder::builder::command::Command::about::h64264ac24674ac8a(&v0, &v3, "Display numbers from FIRST to LAST, in steps of INCREMENT.{} [OPTION]... LAST\n{} [OPTION]... FIRST LAST\n{} [OPTION]... FIRST INCREMENT LASTseparatorSeparator character (defaults to \\n)terminatorTerminator character (defaults to \\n)equal-widthEqualize width", 58);
    uucore::format_usage::h00b69bae12d8ac9c(&v6, "{} [OPTION]... LAST\n{} [OPTION]... FIRST LAST\n{} [OPTION]... FIRST INCREMENT LASTseparatorSeparator character (defaults to \\n)terminatorTerminator character (defaults to \\n)equal-widthEqualize widths of all numbers by padding with zerosformatuse printf sty", 81);
    clap_builder::builder::command::Command::override_usage::hd330f23c09ec6591(&v3, &v0, &v6);
    clap_builder::builder::arg::Arg::new::hd7aab155eebbebba(&v0, "separatorSeparator character (defaults to \\n)terminatorTerminator character (defaults to \\n)equal-widthEqualize widths of all numbers by padding with zerosformatuse printf style floating-point FORMATnumbers", 9);
    clap_builder::builder::arg::Arg::short::h954a09543f38c110(&v6, &v0, 115);
    clap_builder::builder::arg::Arg::long::headec87d9cf6b69a(&v0, &v6, "separatorSeparator character (defaults to \\n)terminatorTerminator character (defaults to \\n)equal-widthEqualize widths of all numbers by padding with zerosformatuse printf style floating-point FORMATnumbers", 9);
    clap_builder::builder::arg::Arg::help::h2f53293062cc330d(&v6, &v0, "Separator character (defaults to \\n)terminatorTerminator character (defaults to \\n)equal-widthEqualize widths of all numbers by padding with zerosformatuse printf style floating-point FORMATnumbers", 36);
    clap_builder::builder::command::Command::arg::h25c49a6a84e2ba23(&v0, &v3, &v6);
    clap_builder::builder::arg::Arg::new::hd7aab155eebbebba(&v3, "terminatorTerminator character (defaults to \\n)equal-widthEqualize widths of all numbers by padding with zerosformatuse printf style floating-point FORMATnumbers", 10);
    clap_builder::builder::arg::Arg::short::h954a09543f38c110(&v6, &v3, 116);
    clap_builder::builder::arg::Arg::long::headec87d9cf6b69a(&v3, &v6, "terminatorTerminator character (defaults to \\n)equal-widthEqualize widths of all numbers by padding with zerosformatuse printf style floating-point FORMATnumbers", 10);
    clap_builder::builder::arg::Arg::help::h2f53293062cc330d(&v6, &v3, "Terminator character (defaults to \\n)equal-widthEqualize widths of all numbers by padding with zerosformatuse printf style floating-point FORMATnumbers", 37);
    clap_builder::builder::command::Command::arg::h25c49a6a84e2ba23(&v3, &v0, &v6);
    clap_builder::builder::arg::Arg::new::hd7aab155eebbebba(&v0, "equal-widthEqualize widths of all numbers by padding with zerosformatuse printf style floating-point FORMATnumbers", 11);
    clap_builder::builder::arg::Arg::short::h954a09543f38c110(&v6, &v0, 119);
    clap_builder::builder::arg::Arg::long::headec87d9cf6b69a(&v0, &v6, "equal-widthEqualize widths of all numbers by padding with zerosformatuse printf style floating-point FORMATnumbers", 11);
    clap_builder::builder::arg::Arg::help::h2f53293062cc330d(&v6, &v0, "Equalize widths of all numbers by padding with zerosformatuse printf style floating-point FORMATnumbers", 52);
    clap_builder::builder::arg::Arg::action::hb50e895cd37d9430(&v7, &v6, 2);
    clap_builder::builder::command::Command::arg::h25c49a6a84e2ba23(&v0, &v3, &v7);
    clap_builder::builder::arg::Arg::new::hd7aab155eebbebba(&v3, "formatuse printf style floating-point FORMATnumbers", 6);
    clap_builder::builder::arg::Arg::short::h954a09543f38c110(&v6, &v3, 102);
    clap_builder::builder::arg::Arg::long::headec87d9cf6b69a(&v3, &v6, "formatuse printf style floating-point FORMATnumbers", 6);
    clap_builder::builder::arg::Arg::help::h2f53293062cc330d(&v6, &v3, "use printf style floating-point FORMATnumbers", 38);
    clap_builder::builder::command::Command::arg::h25c49a6a84e2ba23(&v3, &v0, &v6);
    clap_builder::builder::arg::Arg::new::hd7aab155eebbebba(&v0, "numbers", 7);
    clap_builder::builder::arg::Arg::action::hb50e895cd37d9430(&v6, &v0, 1);
    v7 = 1;
    v8 = 3;
    v9 = 0;
    clap_builder::builder::arg::Arg::num_args::h4a62554ed6b5dfd9(&v0, &v6, &v7);
    clap_builder::builder::command::Command::arg::h25c49a6a84e2ba23(a0, &v3, &v0);
    return a0;
}
