long long uu_seq::uu_app::h5bc20a713053c9e7(unsigned long long a0)
{
    char v0;  // [bp-0xa48]
    unsigned long long v1;  // [sp-0x78c]
    unsigned int v2;  // [sp-0x784]
    char v3;  // [bp-0x780]
    char v4;  // [bp-0x4c4]
    char v5;  // [bp-0x4bc]
    char v6;  // [bp-0x4b8]
    char v7;  // [bp-0x268]
    unsigned long long v9;  // rdx

    clap_builder::builder::command::Command::new::h70e60addb5ac5618(&v3, uucore::util_name::h60d842bf27b05e82(), v9);
    memcpy(&v0, &v3, 700);
    v1 = 549755814052 | *((long long *)&v4);
    v2 = *((int *)&v5);
    clap_builder::builder::command::Command::version::h39cda120b5e96539(&v3, &v0, "0.0.28Display numbers from FIRST to LAST, in steps of INCREMENT.{} [OPTION]... LAST\n{} [OPTION]... FIRST LAST\n{} [OPTION]... FIRST INCREMENT LASTseparatorSeparator character (defaults to \\n)terminatorTerminator character (defaults to \\n)equal-widthEqualize", 6);
    clap_builder::builder::command::Command::about::hb7cd82dead60a251(&v0, &v3, "Display numbers from FIRST to LAST, in steps of INCREMENT.{} [OPTION]... LAST\n{} [OPTION]... FIRST LAST\n{} [OPTION]... FIRST INCREMENT LASTseparatorSeparator character (defaults to \\n)terminatorTerminator character (defaults to \\n)equal-widthEqualize width", 58);
    uucore::format_usage::h76fcb2d15fbabc58(&v6, "{} [OPTION]... LAST\n{} [OPTION]... FIRST LAST\n{} [OPTION]... FIRST INCREMENT LASTseparatorSeparator character (defaults to \\n)terminatorTerminator character (defaults to \\n)equal-widthEqualize widths of all numbers by padding with zerosformatuse printf sty", 81);
    clap_builder::builder::command::Command::override_usage::hfb685ff62d43e39d(&v3, &v0, &v6);
    clap_builder::builder::arg::Arg::new::h6fdd348e62deb03d(&v0, "separatorSeparator character (defaults to \\n)terminatorTerminator character (defaults to \\n)equal-widthEqualize widths of all numbers by padding with zerosformatuse printf style floating-point FORMATnumbers", 9);
    clap_builder::builder::arg::Arg::short::h30cb111526dd9718(&v6, &v0, 115);
    clap_builder::builder::arg::Arg::long::h9872abf788435f05(&v0, &v6, "separatorSeparator character (defaults to \\n)terminatorTerminator character (defaults to \\n)equal-widthEqualize widths of all numbers by padding with zerosformatuse printf style floating-point FORMATnumbers", 9);
    clap_builder::builder::arg::Arg::help::hc6b390ea58bb10af(&v6, &v0, "Separator character (defaults to \\n)terminatorTerminator character (defaults to \\n)equal-widthEqualize widths of all numbers by padding with zerosformatuse printf style floating-point FORMATnumbers", 36);
    clap_builder::builder::command::Command::arg::h2b155dfcc00bacba(&v0, &v3, &v6);
    clap_builder::builder::arg::Arg::new::h6fdd348e62deb03d(&v3, "terminatorTerminator character (defaults to \\n)equal-widthEqualize widths of all numbers by padding with zerosformatuse printf style floating-point FORMATnumbers", 10);
    clap_builder::builder::arg::Arg::short::h30cb111526dd9718(&v6, &v3, 116);
    clap_builder::builder::arg::Arg::long::h9872abf788435f05(&v3, &v6, "terminatorTerminator character (defaults to \\n)equal-widthEqualize widths of all numbers by padding with zerosformatuse printf style floating-point FORMATnumbers", 10);
    clap_builder::builder::arg::Arg::help::hc6b390ea58bb10af(&v6, &v3, "Terminator character (defaults to \\n)equal-widthEqualize widths of all numbers by padding with zerosformatuse printf style floating-point FORMATnumbers", 37);
    clap_builder::builder::command::Command::arg::h2b155dfcc00bacba(&v3, &v0, &v6);
    clap_builder::builder::arg::Arg::new::h6fdd348e62deb03d(&v0, "equal-widthEqualize widths of all numbers by padding with zerosformatuse printf style floating-point FORMATnumbers", 11);
    clap_builder::builder::arg::Arg::short::h30cb111526dd9718(&v6, &v0, 119);
    clap_builder::builder::arg::Arg::long::h9872abf788435f05(&v0, &v6, "equal-widthEqualize widths of all numbers by padding with zerosformatuse printf style floating-point FORMATnumbers", 11);
    clap_builder::builder::arg::Arg::help::hc6b390ea58bb10af(&v6, &v0, "Equalize widths of all numbers by padding with zerosformatuse printf style floating-point FORMATnumbers", 52);
    clap_builder::builder::arg::Arg::action::h64d48ec922aa36c9(&v7, &v6, 2);
    clap_builder::builder::command::Command::arg::h2b155dfcc00bacba(&v0, &v3, &v7);
    clap_builder::builder::arg::Arg::new::h6fdd348e62deb03d(&v3, "formatuse printf style floating-point FORMATnumbers", 6);
    clap_builder::builder::arg::Arg::short::h30cb111526dd9718(&v6, &v3, 102);
    clap_builder::builder::arg::Arg::long::h9872abf788435f05(&v3, &v6, "formatuse printf style floating-point FORMATnumbers", 6);
    clap_builder::builder::arg::Arg::help::hc6b390ea58bb10af(&v6, &v3, "use printf style floating-point FORMATnumbers", 38);
    clap_builder::builder::command::Command::arg::h2b155dfcc00bacba(&v3, &v0, &v6);
    clap_builder::builder::arg::Arg::new::h6fdd348e62deb03d(&v0, "numbers", 7);
    clap_builder::builder::arg::Arg::action::h64d48ec922aa36c9(&v6, &v0, 1);
    clap_builder::builder::arg::Arg::num_args::h2e5e4b9423a09621(&v0, &v6);
    clap_builder::builder::command::Command::arg::h2b155dfcc00bacba(a0, &v3, &v0);
    return a0;
}
