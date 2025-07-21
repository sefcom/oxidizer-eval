fn uu_cut::uu_app(a0: &struct712) -> long long {
    let v0: u64;  // [bp-0xa60]
    let v1: u64;  // [bp-0xa58]
    let v2: u64;  // [bp-0xa50]
    let v3: u8;  // [bp-0xa48]
    let v4: u32;  // [bp-0x800]
    let v5: u32;  // [bp-0x7fc]
    let v6: struct437;  // [bp-0x7f8]
    let v7: u32;  // [bp-0x5b0]
    let v8: u32;  // [bp-0x5ac]
    let v9: u64;  // [bp-0x53c]
    let v10: u32;  // [bp-0x534]
    let v11: u8;  // [bp-0x530]
    let v12: u32;  // [bp-0x2e8]
    let v13: u32;  // [bp-0x2e4]
    let v14: u64;  // [bp-0x274]
    let v15: u32;  // [bp-0x26c]
    let v16: u8;  // [bp-0x268]
    let v17: u64;  // [bp-0x260]
    let v18: u64;  // [bp-0x258]
    let v21: u64;  // rdx

    v6 = clap_builder::builder::command::Command::new(uucore::util_name(), v21);
    clap_builder::builder::command::Command::version(&v11, &v6, "0.0.28");
    uucore::format_usage(&v3, "{} OPTION... [FILE]...");
    clap_builder::builder::command::Command::override_usage(&v6, &v11, &v3);
    clap_builder::builder::command::Command::about(&v11, &v6, "Prints specified byte or field columns from each line of stdin or the input files");
    clap_builder::builder::command::Command::after_help(&v6, &v11, "Each call must specify a mode (what to use for columns),\na sequence (which columns to print), and provide a data source\n\n### Specifying a mode\n\nUse --bytes (-b) or --characters (-c) to specify byte mode\n\nUse --fields (-f) to specify field mode, where each line is broken into\nfields identified by a delimiter character. For example for a typical CSV\nyou could use this in combination with setting comma as the delimiter\n\n### Specifying a sequence\n\nA sequence is a group of 1 or more numbers or inclusive ranges separated\nby a commas.\n\n\ncut -f 2,5-7 some_file.txt\n\n\nwill display the 2nd, 5th, 6th, and 7th field for each source line\n\nRanges can extend to the end of the row by excluding the second number\n\n\ncut -f 3- some_file.txt\n\n\nwill display the 3rd field and all fields after for each source line\n\nThe first number of a range can be excluded, and this is effectively the\nsame as using 1 as the first number: it causes the range to begin at the\nfirst column. Ranges can also display a single column\n\n\ncut -f 1,3-5 some_file.txt\n\n\nwill display the 1st, 3rd, 4th, and 5th field for each source line\n\nThe --complement option, when used, inverts the effect of the sequence\n\n\ncut --complement -f 4-6 some_file.txt\n\n\nwill display the every field but the 4th, 5th, and 6th\n\n### Specifying a data source\n\nIf no sourcefile arguments are specified, stdin is used as the source of\nlines to print\n\nIf sourcefile arguments are specified, stdin is ignored and all files are\nread in consecutively if a sourcefile is not successfully read, a warning\nwill print to stderr, and the eventual status code will be 1, but cut\nwill continue to read through proceeding sourcefiles\n\nTo print columns from both STDIN and a file argument, use - (dash) as a\nsourcefile argument to represent stdin.\n\n### Field Mode options\n\nThe fields in each line are identified by a delimiter (separator)\n\n#### Set the delimiter\n\nSet the delimiter which separates fields in the file using the\n--delimiter (-d) option. Setting the delimiter is optional.\nIf not set, a default delimiter of Tab will be used.\n\nIf the -w option is provided, fields will be separated by any number\nof whitespace characters (Space and Tab). The output delimiter will\nbe a Tab unless explicitly specified. Only one of -d or -w option can be specified.\nThis is an extension adopted from FreeBSD.\n\n#### Optionally Filter based on delimiter\n\nIf the --only-delimited (-s) flag is provided, only lines which\ncontain the delimiter will be printed\n\n#### Replace the delimiter\n\nIf the --output-delimiter option is provided, the argument used for\nit will replace the delimiter character in each line printed. This is\nuseful for transforming tabular data - e.g. to convert a CSV to a\nTSV (tab-separated file)\n\n### Line endings\n\nWhen the --zero-terminated (-z) option is used, cut sees \\\\0 (null) as the\n'line ending' character (both for the purposes of reading lines and\nseparating printed lines) instead of \\\\n (newline). This is useful for\ntabular data where some of the cells may contain newlines\n\n\necho 'ab\\\\0cd' | cut -z -c 1\n\n\nwill result in 'a\\\\0c\\\\0'");
    memcpy(&v11, &v6, 700);
    v14 = 584115552392 | v9;
    v15 = v10;
    clap_builder::builder::arg::Arg::new(&v6, "bytes");
    clap_builder::builder::arg::Arg::short(&v3, &v6, 98);
    clap_builder::builder::arg::Arg::long(&v6, &v3, "bytes");
    clap_builder::builder::arg::Arg::help(&v3, &v6, "filter byte columns from the input source");
    memcpy(&v6, &v3, 584);
    v7 = v4 | 32;
    v8 = v5;
    clap_builder::builder::arg::Arg::value_name(&v3, &v6, "LIST");
    clap_builder::builder::arg::Arg::action(&v16, &v3, 1);
    clap_builder::builder::command::Command::arg(&v6, &v11, &v16);
    clap_builder::builder::arg::Arg::new(&v11, "characters");
    clap_builder::builder::arg::Arg::short(&v3, &v11, 99);
    clap_builder::builder::arg::Arg::long(&v11, &v3, "characters");
    clap_builder::builder::arg::Arg::help(&v3, &v11, "alias for character mode");
    memcpy(&v11, &v3, 584);
    v12 = v4 | 32;
    v13 = v5;
    clap_builder::builder::arg::Arg::value_name(&v3, &v11, "LIST");
    clap_builder::builder::arg::Arg::action(&v16, &v3, 1);
    clap_builder::builder::command::Command::arg(&v11, &v6, &v16);
    clap_builder::builder::arg::Arg::new(&v6, "delimiter");
    clap_builder::builder::arg::Arg::short(&v3, &v6, 100);
    clap_builder::builder::arg::Arg::long(&v6, &v3, "delimiter");
    v0 = 2;
    v18 = v2;
    v16 = v0;
    v17 = v1;
    clap_builder::builder::arg::Arg::value_parser(&v3, &v6, &v16);
    clap_builder::builder::arg::Arg::help(&v6, &v3, "specify the delimiter character that separates fields in the input source. Defaults to Tab.");
    clap_builder::builder::arg::Arg::value_name(&v3, &v6, "DELIM");
    clap_builder::builder::command::Command::arg(&v6, &v11, &v3);
    clap_builder::builder::arg::Arg::new(&v11, "whitespace-delimited");
    clap_builder::builder::arg::Arg::short(&v3, &v11, 119);
    clap_builder::builder::arg::Arg::help(&v11, &v3, "Use any number of whitespace (Space, Tab) to separate fields in the input source (FreeBSD extension).");
    clap_builder::builder::arg::Arg::value_name(&v3, &v11, "WHITESPACE");
    clap_builder::builder::arg::Arg::action(&v16, &v3, 2);
    clap_builder::builder::command::Command::arg(&v11, &v6, &v16);
    clap_builder::builder::arg::Arg::new(&v6, "fields");
    clap_builder::builder::arg::Arg::short(&v3, &v6, 102);
    clap_builder::builder::arg::Arg::long(&v6, &v3, "fields");
    clap_builder::builder::arg::Arg::help(&v3, &v6, "filter field columns from the input source");
    memcpy(&v6, &v3, 584);
    v7 = v4 | 32;
    v8 = v5;
    clap_builder::builder::arg::Arg::value_name(&v3, &v6, "LIST");
    clap_builder::builder::arg::Arg::action(&v16, &v3, 1);
    clap_builder::builder::command::Command::arg(&v6, &v11, &v16);
    clap_builder::builder::arg::Arg::new(&v11, "complement");
    clap_builder::builder::arg::Arg::long(&v3, &v11, "complement");
    clap_builder::builder::arg::Arg::help(&v11, &v3, "invert the filter - instead of displaying only the filtered columns, display all but those columns");
    clap_builder::builder::arg::Arg::action(&v3, &v11, 2);
    clap_builder::builder::command::Command::arg(&v11, &v6, &v3);
    clap_builder::builder::arg::Arg::new(&v6, "only-delimited");
    clap_builder::builder::arg::Arg::short(&v3, &v6, 115);
    clap_builder::builder::arg::Arg::long(&v6, &v3, "only-delimited");
    clap_builder::builder::arg::Arg::help(&v3, &v6, "in field mode, only print lines which contain the delimiter");
    clap_builder::builder::arg::Arg::action(&v16, &v3, 2);
    clap_builder::builder::command::Command::arg(&v6, &v11, &v16);
    clap_builder::builder::arg::Arg::new(&v11, "zero-terminated");
    clap_builder::builder::arg::Arg::short(&v3, &v11, 122);
    clap_builder::builder::arg::Arg::long(&v11, &v3, "zero-terminated");
    clap_builder::builder::arg::Arg::help(&v3, &v11, "instead of filtering columns based on line, filter columns based on \\0 (NULL character)");
    clap_builder::builder::arg::Arg::action(&v16, &v3, 2);
    clap_builder::builder::command::Command::arg(&v11, &v6, &v16);
    clap_builder::builder::arg::Arg::new(&v6, "output-delimiter");
    clap_builder::builder::arg::Arg::long(&v3, &v6, "output-delimiter");
    clap_builder::builder::arg::Arg::value_parser(&v6, &v3, &v0);
    clap_builder::builder::arg::Arg::help(&v3, &v6, "in field mode, replace the delimiter in output lines with this option's argument");
    clap_builder::builder::arg::Arg::value_name(&v16, &v3, "NEW_DELIM");
    clap_builder::builder::command::Command::arg(&v6, &v11, &v16);
    clap_builder::builder::arg::Arg::new(&v11, "file");
    memcpy(&v3, &v11, 584);
    v4 = v12 | 4;
    v5 = v13;
    clap_builder::builder::arg::Arg::action(&v11, &v3, 1);
    clap_builder::builder::arg::Arg::value_hint(&v3, &v11, 3);
    clap_builder::builder::command::Command::arg(a0, &v6, &v3);
    return a0;
}
