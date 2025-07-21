fn uu_pr::uu_app(a0: &struct712) -> long long {
    let v0: u8;  // [bp-0xa48]
    let v1: u32;  // [bp-0x800]
    let v2: u32;  // [bp-0x7fc]
    let v3: u8;  // [bp-0x7f8]
    let v4: u32;  // [bp-0x5b0]
    let v5: u32;  // [bp-0x5ac]
    let v6: u64;  // [bp-0x53c]
    let v7: struct32;  // [bp-0x534]
    let v8: struct437;  // [bp-0x530]
    let v9: struct32;  // [bp-0x274]
    let v10: struct32;  // [bp-0x26c]
    let v11: u8;  // [bp-0x268]
    let v14: u64;  // rdx

    v8 = clap_builder::builder::command::Command::new(uucore::util_name(), v14);
    clap_builder::builder::command::Command::version(&v3, &v8, "0.0.28");
    clap_builder::builder::command::Command::about(&v8, &v3, "Write content of given file or standard input to standard output with pagination filter");
    clap_builder::builder::command::Command::after_help(&v3, &v8, "+PAGE           Begin output at page number page of the formatted input.\n-COLUMN         Produce multi-column output. See --column\n\nThe pr utility is a printing and pagination filter for text files.\nWhen multiple input files are specified, each is read, formatted, and written to standard output.\nBy default, the input is separated into 66-line pages, each with\n\n* A 5-line header with the page number, date, time, and the pathname of the file.\n* A 5-line trailer consisting of blank lines.\n\nIf standard output is associated with a terminal, diagnostic messages are suppressed until the pr\nutility has completed processing.\n\nWhen multiple column output is specified, text columns are of equal width.\nBy default, text columns are separated by at least one <blank>.\nInput lines that do not fit into a text column are truncated.\nLines are not truncated under single column output.");
    uucore::format_usage(&v0, "{} [OPTION]... [FILE]...");
    clap_builder::builder::command::Command::override_usage(&v8, &v3, &v0);
    memcpy(&v3, &v8, 700);
    v6 = 1126484022657160 | v9;
    v7 = v10;
    clap_builder::builder::arg::Arg::new(&v8, "pages");
    clap_builder::builder::arg::Arg::long(&v0, &v8, "pages");
    clap_builder::builder::arg::Arg::help(&v8, &v0, "Begin and stop printing with page FIRST_PAGE[:LAST_PAGE]");
    clap_builder::builder::arg::Arg::value_name(&v0, &v8, "FIRST_PAGE[:LAST_PAGE]");
    clap_builder::builder::command::Command::arg(&v8, &v3, &v0);
    clap_builder::builder::arg::Arg::new(&v3, "header");
    clap_builder::builder::arg::Arg::short(&v0, &v3, 104);
    clap_builder::builder::arg::Arg::long(&v3, &v0, "header");
    clap_builder::builder::arg::Arg::help(&v0, &v3, "Use the string header to replace the file name in the header line.");
    clap_builder::builder::arg::Arg::value_name(&v11, &v0, "STRING");
    clap_builder::builder::command::Command::arg(&v3, &v8, &v11);
    clap_builder::builder::arg::Arg::new(&v8, "double-space");
    clap_builder::builder::arg::Arg::short(&v0, &v8, 100);
    clap_builder::builder::arg::Arg::long(&v8, &v0, "double-space");
    clap_builder::builder::arg::Arg::help(&v0, &v8, "Produce output that is double spaced. An extra <newline> character is output following every <newline> found in the input.");
    clap_builder::builder::arg::Arg::action(&v11, &v0, 2);
    clap_builder::builder::command::Command::arg(&v8, &v3, &v11);
    clap_builder::builder::arg::Arg::new(&v3, "number-lines");
    clap_builder::builder::arg::Arg::short(&v0, &v3, 110);
    clap_builder::builder::arg::Arg::long(&v3, &v0, "number-lines");
    clap_builder::builder::arg::Arg::help(&v0, &v3, "Provide width digit line numbering.  The default for width, if not specified, is 5.  The number occupies the first width column positions of each text column or each line of -m output.  If char (any non-digit character) is given, it is appended to the line number to separate it from whatever follows.  The default for char is a <tab>. Line numbers longer than width columns are truncated.");
    memcpy(&v3, &v0, 584);
    v4 = v1 | 32;
    v5 = v2;
    clap_builder::builder::arg::Arg::value_name(&v0, &v3, "[char][width]");
    clap_builder::builder::command::Command::arg(&v3, &v8, &v0);
    clap_builder::builder::arg::Arg::new(&v8, "first-line-number");
    clap_builder::builder::arg::Arg::short(&v0, &v8, 78);
    clap_builder::builder::arg::Arg::long(&v8, &v0, "first-line-number");
    clap_builder::builder::arg::Arg::help(&v0, &v8, "start counting with NUMBER at 1st line of first page printed");
    clap_builder::builder::arg::Arg::value_name(&v11, &v0, "NUMBER");
    clap_builder::builder::command::Command::arg(&v8, &v3, &v11);
    clap_builder::builder::arg::Arg::new(&v3, "omit-header");
    clap_builder::builder::arg::Arg::short(&v0, &v3, 116);
    clap_builder::builder::arg::Arg::long(&v3, &v0, "omit-header");
    clap_builder::builder::arg::Arg::help(&v0, &v3, "Write neither the five-line identifying header nor the five-line trailer usually supplied for each page. Quit writing after the last line of each file without spacing to the end of the page.");
    clap_builder::builder::arg::Arg::action(&v11, &v0, 2);
    clap_builder::builder::command::Command::arg(&v3, &v8, &v11);
    clap_builder::builder::arg::Arg::new(&v8, "length");
    clap_builder::builder::arg::Arg::short(&v0, &v8, 108);
    clap_builder::builder::arg::Arg::long(&v8, &v0, "length");
    clap_builder::builder::arg::Arg::help(&v0, &v8, "Override the 66-line default (default number of lines of text 56, and with -F 63) and reset the page length to lines.  If lines is not greater than the sum  of  both the  header  and trailer depths (in lines), the pr utility shall suppress both the header and trailer, as if the -t option were in effect. ");
    clap_builder::builder::arg::Arg::value_name(&v11, &v0, "PAGE_LENGTH");
    clap_builder::builder::command::Command::arg(&v8, &v3, &v11);
    clap_builder::builder::arg::Arg::new(&v3, "no-file-warnings");
    clap_builder::builder::arg::Arg::short(&v0, &v3, 114);
    clap_builder::builder::arg::Arg::long(&v3, &v0, "no-file-warnings");
    clap_builder::builder::arg::Arg::help(&v0, &v3, "omit warning when a file cannot be opened");
    clap_builder::builder::arg::Arg::action(&v11, &v0, 2);
    clap_builder::builder::command::Command::arg(&v3, &v8, &v11);
    clap_builder::builder::arg::Arg::new(&v8, "form-feed");
    clap_builder::builder::arg::Arg::short(&v0, &v8, 70);
    clap_builder::builder::arg::Arg::short_alias(&v8, &v0, 102);
    clap_builder::builder::arg::Arg::long(&v0, &v8, "form-feed");
    clap_builder::builder::arg::Arg::help(&v8, &v0, "Use a <form-feed> for new pages, instead of the default behavior that uses a sequence of <newline>s.");
    clap_builder::builder::arg::Arg::action(&v0, &v8, 2);
    clap_builder::builder::command::Command::arg(&v8, &v3, &v0);
    clap_builder::builder::arg::Arg::new(&v3, "width");
    clap_builder::builder::arg::Arg::short(&v0, &v3, 119);
    clap_builder::builder::arg::Arg::long(&v3, &v0, "width");
    clap_builder::builder::arg::Arg::help(&v0, &v3, "Set the width of the line to width column positions for multiple text-column output only. If the -w option is not specified and the -s option is not specified, the default width shall be 72. If the -w option is not specified and the -s option is specified, the default width shall be 512.");
    clap_builder::builder::arg::Arg::value_name(&v11, &v0, "width");
    clap_builder::builder::command::Command::arg(&v3, &v8, &v11);
    clap_builder::builder::arg::Arg::new(&v8, "page-width");
    clap_builder::builder::arg::Arg::short(&v0, &v8, 87);
    clap_builder::builder::arg::Arg::long(&v8, &v0, "page-width");
    clap_builder::builder::arg::Arg::help(&v0, &v8, "set page width to PAGE_WIDTH (72) characters always, truncate lines, except -J option is set, no interference with -S or -s");
    clap_builder::builder::arg::Arg::value_name(&v11, &v0, "width");
    clap_builder::builder::command::Command::arg(&v8, &v3, &v11);
    clap_builder::builder::arg::Arg::new(&v3, "across");
    clap_builder::builder::arg::Arg::short(&v0, &v3, 97);
    clap_builder::builder::arg::Arg::long(&v3, &v0, "across");
    clap_builder::builder::arg::Arg::help(&v0, &v3, "Modify the effect of the - column option so that the columns are filled across the page in a  round-robin  order (for example, when column is 2, the first input line heads column 1, the second heads column 2, the third is the second line in column 1, and so on).");
    clap_builder::builder::arg::Arg::action(&v11, &v0, 2);
    clap_builder::builder::command::Command::arg(&v3, &v8, &v11);
    clap_builder::builder::arg::Arg::new(&v8, "column");
    clap_builder::builder::arg::Arg::long(&v0, &v8, "column");
    clap_builder::builder::arg::Arg::help(&v8, &v0, "Produce multi-column output that is arranged in column columns (the default shall be 1) and is written down each column  in  the order in which the text is received from the input file. This option should not be used with -m. The options -e and -i shall be assumed for multiple text-column output.  Whether or not text columns are produced with identical vertical lengths is unspecified, but a text column shall never exceed the length of the page (see the -l option). When used with -t, use the minimum number of lines to write the output.");
    clap_builder::builder::arg::Arg::value_name(&v0, &v8, "column");
    clap_builder::builder::command::Command::arg(&v8, &v3, &v0);
    clap_builder::builder::arg::Arg::new(&v3, "separator");
    clap_builder::builder::arg::Arg::short(&v0, &v3, 115);
    clap_builder::builder::arg::Arg::long(&v3, &v0, "separator");
    clap_builder::builder::arg::Arg::help(&v0, &v3, "Separate text columns by the single character char instead of by the appropriate number of <space>s (default for char is the <tab> character).");
    clap_builder::builder::arg::Arg::value_name(&v11, &v0, "char");
    clap_builder::builder::command::Command::arg(&v3, &v8, &v11);
    clap_builder::builder::arg::Arg::new(&v8, "sep-string");
    clap_builder::builder::arg::Arg::short(&v0, &v8, 83);
    clap_builder::builder::arg::Arg::long(&v8, &v0, "sep-string");
    clap_builder::builder::arg::Arg::help(&v0, &v8, "separate columns by STRING, without -S: Default separator <TAB> with -J and <space> otherwise (same as -S" "), no effect on column options");
    clap_builder::builder::arg::Arg::value_name(&v11, &v0, "string");
    clap_builder::builder::command::Command::arg(&v8, &v3, &v11);
    clap_builder::builder::arg::Arg::new(&v3, "merge");
    clap_builder::builder::arg::Arg::short(&v0, &v3, 109);
    clap_builder::builder::arg::Arg::long(&v3, &v0, "merge");
    clap_builder::builder::arg::Arg::help(&v0, &v3, "Merge files. Standard output shall be formatted so the pr utility writes one line from each file specified by a file operand, side by side into text columns of equal fixed widths, in terms of the number of column positions. Implementations shall support merging of at least nine file operands.");
    clap_builder::builder::arg::Arg::action(&v11, &v0, 2);
    clap_builder::builder::command::Command::arg(&v3, &v8, &v11);
    clap_builder::builder::arg::Arg::new(&v8, "indent");
    clap_builder::builder::arg::Arg::short(&v0, &v8, 111);
    clap_builder::builder::arg::Arg::long(&v8, &v0, "indent");
    clap_builder::builder::arg::Arg::help(&v0, &v8, "Each line of output shall be preceded by offset <space>s. If the -o option is not specified, the default offset shall be zero. The space taken is in addition to the output line width (see the -w option below).");
    clap_builder::builder::arg::Arg::value_name(&v11, &v0, "margin");
    clap_builder::builder::command::Command::arg(&v8, &v3, &v11);
    clap_builder::builder::arg::Arg::new(&v3, "join-lines");
    clap_builder::builder::arg::Arg::short(&v0, &v3, 74);
    clap_builder::builder::arg::Arg::help(&v3, &v0, "merge full lines, turns off -W line truncation, no column alignment, --sep-string[=STRING] sets separators");
    clap_builder::builder::arg::Arg::action(&v0, &v3, 2);
    clap_builder::builder::command::Command::arg(&v3, &v8, &v0);
    clap_builder::builder::arg::Arg::new(&v8, "help");
    clap_builder::builder::arg::Arg::long(&v0, &v8, "help");
    clap_builder::builder::arg::Arg::help(&v8, &v0, "Print help information");
    clap_builder::builder::arg::Arg::action(&v0, &v8, 5);
    clap_builder::builder::command::Command::arg(&v8, &v3, &v0);
    clap_builder::builder::arg::Arg::new(&v3, "files");
    clap_builder::builder::arg::Arg::action(&v0, &v3, 1);
    clap_builder::builder::arg::Arg::value_hint(&v3, &v0, 3);
    clap_builder::builder::command::Command::arg(a0, &v8, &v3);
    return a0;
}
