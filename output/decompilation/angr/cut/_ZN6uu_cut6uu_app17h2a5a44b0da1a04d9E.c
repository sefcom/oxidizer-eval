long long uu_cut::uu_app::h2a5a44b0da1a04d9(unsigned long long a0)
{
    unsigned long long v0;  // [sp-0xa60]
    char v1;  // [bp-0xa58]
    char v2;  // [bp-0xa50]
    char v3;  // [bp-0xa48]
    unsigned int v4;  // [sp-0x800]
    unsigned int v5;  // [sp-0x7fc]
    char v6;  // [bp-0x7f8]
    unsigned int v7;  // [sp-0x5b0]
    unsigned int v8;  // [sp-0x5ac]
    char v9;  // [bp-0x53c]
    char v10;  // [bp-0x534]
    char v11;  // [bp-0x530]
    unsigned int v12;  // [sp-0x2e8]
    unsigned int v13;  // [sp-0x2e4]
    unsigned long long v14;  // [sp-0x274]
    unsigned int v15;  // [sp-0x26c]
    char v16;  // [bp-0x268], Other Possible Types: unsigned long
    unsigned long long v17;  // [sp-0x260]
    unsigned long long v18;  // [sp-0x258]
    unsigned long long v20;  // rdx

    clap_builder::builder::command::Command::new::h9a8f3ee55af8c901(&v6, uucore::util_name::h60d842bf27b05e82(), v20);
    clap_builder::builder::command::Command::version::h000f49d8f9d72961(&v11, &v6, "0.0.28", 6);
    uucore::format_usage::h76fcb2d15fbabc58(&v3, "{} OPTION... [FILE]...", 22);
    clap_builder::builder::command::Command::override_usage::h61d50ed17fd5192c(&v6, &v11, &v3);
    clap_builder::builder::command::Command::about::h9b454bf679160896(&v11, &v6, "Prints specified byte or field columns from each line of stdin or the input files", 81);
    clap_builder::builder::command::Command::after_help::h3c9450aca7021bb3(&v6, &v11, "Each call must specify a mode (what to use for columns),\na sequence (which columns to print), and provide a data source\n\n### Specifying a mode\n\nUse --bytes (-b) or --characters (-c) to specify byte mode\n\nUse --fields (-f) to specify field mode, where each line is broken into\nfields identified by a delimiter character. For example for a typical CSV\nyou could use this in combination with setting comma as the delimiter\n\n### Specifying a sequence\n\nA sequence is a group of 1 or more numbers or inclusive ranges separated\nby a commas.\n\n\ncut -f 2,5-7 some_file.txt\n\n\nwill display the 2nd, 5th, 6th, and 7th field for each source line\n\nRanges can extend to the end of the row by excluding the second number\n\n\ncut -f 3- some_file.txt\n\n\nwill display the 3rd field and all fields after for each source line\n\nThe first number of a range can be excluded, and this is effectively the\nsame as using 1 as the first number: it causes the range to begin at the\nfirst column. Ranges can also display a single column\n\n\ncut -f 1,3-5 some_fi", 3083);
    memcpy(&v11, &v6, 700);
    v14 = 584115552392 | *((long long *)&v9);
    v15 = *((int *)&v10);
    clap_builder::builder::arg::Arg::new::hb8ba1c2db8ac019e(&v6, "bytes", 5);
    clap_builder::builder::arg::Arg::short::hfb3a8ccc6277d940(&v3, &v6, 98);
    clap_builder::builder::arg::Arg::long::hb1fc0d277df3e81e(&v6, &v3, "bytes", 5);
    clap_builder::builder::arg::Arg::help::h6f87bca85c8439b4(&v3, &v6, "filter byte columns from the input source", 41);
    memcpy(&v6, &v3, 584);
    v7 = v4 | 32;
    v8 = v5;
    clap_builder::builder::arg::Arg::value_name::h1390c70eac450fe9(&v3, &v6, "LISTAuto", 4);
    clap_builder::builder::arg::Arg::action::h37fd892093594a74(&v16, &v3, 1);
    clap_builder::builder::command::Command::arg::hc176e8913b4d502b(&v6, &v11, &v16);
    clap_builder::builder::arg::Arg::new::hb8ba1c2db8ac019e(&v11, "characters", 10);
    clap_builder::builder::arg::Arg::short::hfb3a8ccc6277d940(&v3, &v11, 99);
    clap_builder::builder::arg::Arg::long::hb1fc0d277df3e81e(&v11, &v3, "characters", 10);
    clap_builder::builder::arg::Arg::help::h6f87bca85c8439b4(&v3, &v11, "alias for character mode", 24);
    memcpy(&v11, &v3, 584);
    v12 = v4 | 32;
    v13 = v5;
    clap_builder::builder::arg::Arg::value_name::h1390c70eac450fe9(&v3, &v11, "LISTAuto", 4);
    clap_builder::builder::arg::Arg::action::h37fd892093594a74(&v16, &v3, 1);
    clap_builder::builder::command::Command::arg::hc176e8913b4d502b(&v11, &v6, &v16);
    clap_builder::builder::arg::Arg::new::hb8ba1c2db8ac019e(&v6, "delimiter", 9);
    clap_builder::builder::arg::Arg::short::hfb3a8ccc6277d940(&v3, &v6, 100);
    clap_builder::builder::arg::Arg::long::hb1fc0d277df3e81e(&v6, &v3, "delimiter", 9);
    v0 = 2;
    v18 = *((long long *)&v2);
    v16 = v0;
    v17 = *((long long *)&v1);
    clap_builder::builder::arg::Arg::value_parser::h2cda3b3bd319a7fa(&v3, &v6, &v16);
    clap_builder::builder::arg::Arg::help::h6f87bca85c8439b4(&v6, &v3, "specify the delimiter character that separates fields in the input source. Defaults to Tab.", 91);
    clap_builder::builder::arg::Arg::value_name::h1390c70eac450fe9(&v3, &v6, "DELIM", 5);
    clap_builder::builder::command::Command::arg::hc176e8913b4d502b(&v6, &v11, &v3);
    clap_builder::builder::arg::Arg::new::hb8ba1c2db8ac019e(&v11, "whitespace-delimited", 20);
    clap_builder::builder::arg::Arg::short::hfb3a8ccc6277d940(&v3, &v11, 119);
    clap_builder::builder::arg::Arg::help::h6f87bca85c8439b4(&v11, &v3, "Use any number of whitespace (Space, Tab) to separate fields in the input source (FreeBSD extension).", 101);
    clap_builder::builder::arg::Arg::value_name::h1390c70eac450fe9(&v3, &v11, "WHITESPACE", 10);
    clap_builder::builder::arg::Arg::action::h37fd892093594a74(&v16, &v3, 2);
    clap_builder::builder::command::Command::arg::hc176e8913b4d502b(&v11, &v6, &v16);
    clap_builder::builder::arg::Arg::new::hb8ba1c2db8ac019e(&v6, "fields", 6);
    clap_builder::builder::arg::Arg::short::hfb3a8ccc6277d940(&v3, &v6, 102);
    clap_builder::builder::arg::Arg::long::hb1fc0d277df3e81e(&v6, &v3, "fields", 6);
    clap_builder::builder::arg::Arg::help::h6f87bca85c8439b4(&v3, &v6, "filter field columns from the input source", 42);
    memcpy(&v6, &v3, 584);
    v7 = v4 | 32;
    v8 = v5;
    clap_builder::builder::arg::Arg::value_name::h1390c70eac450fe9(&v3, &v6, "LISTAuto", 4);
    clap_builder::builder::arg::Arg::action::h37fd892093594a74(&v16, &v3, 1);
    clap_builder::builder::command::Command::arg::hc176e8913b4d502b(&v6, &v11, &v16);
    clap_builder::builder::arg::Arg::new::hb8ba1c2db8ac019e(&v11, "complement", 10);
    clap_builder::builder::arg::Arg::long::hb1fc0d277df3e81e(&v3, &v11, "complement", 10);
    clap_builder::builder::arg::Arg::help::h6f87bca85c8439b4(&v11, &v3, "invert the filter - instead of displaying only the filtered columns, display all but those columns", 98);
    clap_builder::builder::arg::Arg::action::h37fd892093594a74(&v3, &v11, 2);
    clap_builder::builder::command::Command::arg::hc176e8913b4d502b(&v11, &v6, &v3);
    clap_builder::builder::arg::Arg::new::hb8ba1c2db8ac019e(&v6, "only-delimited", 14);
    clap_builder::builder::arg::Arg::short::hfb3a8ccc6277d940(&v3, &v6, 115);
    clap_builder::builder::arg::Arg::long::hb1fc0d277df3e81e(&v6, &v3, "only-delimited", 14);
    clap_builder::builder::arg::Arg::help::h6f87bca85c8439b4(&v3, &v6, "in field mode, only print lines which contain the delimiter", 59);
    clap_builder::builder::arg::Arg::action::h37fd892093594a74(&v16, &v3, 2);
    clap_builder::builder::command::Command::arg::hc176e8913b4d502b(&v6, &v11, &v16);
    clap_builder::builder::arg::Arg::new::hb8ba1c2db8ac019e(&v11, "zero-terminated", 15);
    clap_builder::builder::arg::Arg::short::hfb3a8ccc6277d940(&v3, &v11, 122);
    clap_builder::builder::arg::Arg::long::hb1fc0d277df3e81e(&v11, &v3, "zero-terminated", 15);
    clap_builder::builder::arg::Arg::help::h6f87bca85c8439b4(&v3, &v11, "instead of filtering columns based on line, filter columns based on \\0 (NULL character)", 87);
    clap_builder::builder::arg::Arg::action::h37fd892093594a74(&v16, &v3, 2);
    clap_builder::builder::command::Command::arg::hc176e8913b4d502b(&v11, &v6, &v16);
    clap_builder::builder::arg::Arg::new::hb8ba1c2db8ac019e(&v6, "output-delimiterPermissionDenied", 16);
    clap_builder::builder::arg::Arg::long::hb1fc0d277df3e81e(&v3, &v6, "output-delimiterPermissionDenied", 16);
    clap_builder::builder::arg::Arg::value_parser::h2cda3b3bd319a7fa(&v6, &v3, &v0);
    clap_builder::builder::arg::Arg::help::h6f87bca85c8439b4(&v3, &v6, "in field mode, replace the delimiter in output lines with this option's argument", 80);
    clap_builder::builder::arg::Arg::value_name::h1390c70eac450fe9(&v16, &v3, "NEW_DELIM", 9);
    clap_builder::builder::command::Command::arg::hc176e8913b4d502b(&v6, &v11, &v16);
    clap_builder::builder::arg::Arg::new::hb8ba1c2db8ac019e(&v11, "filei128", 4);
    memcpy(&v3, &v11, 584);
    v4 = v12 | 4;
    v5 = v13;
    clap_builder::builder::arg::Arg::action::h37fd892093594a74(&v11, &v3, 1);
    clap_builder::builder::arg::Arg::value_hint::h6e24acd5b6e1d083(&v3, &v11, 3);
    clap_builder::builder::command::Command::arg::hc176e8913b4d502b(a0, &v6, &v3);
    return a0;
}
