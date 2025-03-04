fn uu_pr::uu_app(a0: &struct712) -> u64 {
    let v0: struct592;  // [sp-0xa48], Other Possible Types: struct24
    let v1: struct592;  // [sp-0x7f8], Other Possible Types: struct712
    let v2: i32;  // [sp-0x5b0]
    let v3: i32;  // [sp-0x5ac]
    let v4: i64;  // [sp-0x53c]
    let v5: i32;  // [sp-0x534]
    let v6: struct592;  // [sp-0x530], Other Possible Types: struct712, struct437
    let v7: struct592;  // [sp-0x268]
    let v9: i64;  // rdx

    v6 = clap_builder::builder::command::Command::new(uucore::util_name(), v9);
    v1 = clap_builder::builder::command::Command::version(&v6, "0.0.28");
    v6 = clap_builder::builder::command::Command::about(&v1, "Write content of given file or standard input to standard output with pagination filter");
    v1 = clap_builder::builder::command::Command::after_help(&v6, "+PAGE           Begin output at page number page of the formatted input.
-COLUMN         Produce multi-column output. See --column

The pr utility is a printing and pagination filter for text files.
When multiple input files are specified, each is read, formatted, and written to standard output.
By default, the input is separated into 66-line pages, each with

* A 5-line header with the page number, date, time, and the pathname of the file.
* A 5-line trailer consisting of blank lines.

If standard output is associated with a terminal, diagnostic messages are suppressed until the pr
utility has completed processing.

When multiple column output is specified, text columns are of equal width.
By default, text columns are separated by at least one <blank>.
Input lines that do not fit into a text column are truncated.
Lines are not truncated under single column output.");
    v0 = uucore::format_usage("{} [OPTION]... [FILE]...");
    v6 = clap_builder::builder::command::Command::override_usage(&v1, &v0);
    memcpy(&v1, &v6, 700);
    v4 = 1126484022657160 | *((&v6.field_0 as &char + 700) as &i64);
    v5 = *((&v6.field_0 as &char + 708) as &i32);
    v6 = clap_builder::builder::arg::Arg::new("pages");
    v0 = clap_builder::builder::arg::Arg::long(&v6, "pages");
    v6 = clap_builder::builder::arg::Arg::help(&v0, "Begin and stop printing with page FIRST_PAGE[:LAST_PAGE]");
    v0 = clap_builder::builder::arg::Arg::value_name(&v6, "FIRST_PAGE[:LAST_PAGE]");
    v6 = clap_builder::builder::command::Command::arg(&v1, &v0);
    v1 = clap_builder::builder::arg::Arg::new("header");
    v0 = clap_builder::builder::arg::Arg::short(&v1, 0x68);
    v1 = clap_builder::builder::arg::Arg::long(&v0, "header");
    v0 = clap_builder::builder::arg::Arg::help(&v1, "Use the string header to replace the file name in the header line.");
    v7 = clap_builder::builder::arg::Arg::value_name(&v0, "STRING");
    v1 = clap_builder::builder::command::Command::arg(&v6, &v7);
    v6 = clap_builder::builder::arg::Arg::new("double-space");
    v0 = clap_builder::builder::arg::Arg::short(&v6, 0x64);
    v6 = clap_builder::builder::arg::Arg::long(&v0, "double-space");
    v0 = clap_builder::builder::arg::Arg::help(&v6, "Produce output that is double spaced. An extra <newline> character is output following every <newline> found in the input.");
    v7 = clap_builder::builder::arg::Arg::action(&v0, 0x2);
    v6 = clap_builder::builder::command::Command::arg(&v1, &v7);
    v1 = clap_builder::builder::arg::Arg::new("number-lines");
    v0 = clap_builder::builder::arg::Arg::short(&v1, 0x6e);
    v1 = clap_builder::builder::arg::Arg::long(&v0, "number-lines");
    v0 = clap_builder::builder::arg::Arg::help(&v1, "Provide width digit line numbering.  The default for width, if not specified, is 5.  The number occupies the first width column positions of each text column or each line of -m output.  If char (any non-digit character) is given, it is appended to the line number to separate it from whatever follows.  The default for char is a <tab>. Line numbers longer than width columns are truncated.");
    memcpy(&v1, &v0, 584);
    v2 = *((&v0.field_0 as &char + 584) as &i32) | 32;
    v3 = *((&v0.field_0 as &char + 588) as &i32);
    v0 = clap_builder::builder::arg::Arg::value_name(&v1, "[char][width]");
    v1 = clap_builder::builder::command::Command::arg(&v6, &v0);
    v6 = clap_builder::builder::arg::Arg::new("first-line-number");
    v0 = clap_builder::builder::arg::Arg::short(&v6, 0x4e);
    v6 = clap_builder::builder::arg::Arg::long(&v0, "first-line-number");
    v0 = clap_builder::builder::arg::Arg::help(&v6, "start counting with NUMBER at 1st line of first page printed");
    v7 = clap_builder::builder::arg::Arg::value_name(&v0, "NUMBER");
    v6 = clap_builder::builder::command::Command::arg(&v1, &v7);
    v1 = clap_builder::builder::arg::Arg::new("omit-header");
    v0 = clap_builder::builder::arg::Arg::short(&v1, 0x74);
    v1 = clap_builder::builder::arg::Arg::long(&v0, "omit-header");
    v0 = clap_builder::builder::arg::Arg::help(&v1, "Write neither the five-line identifying header nor the five-line trailer usually supplied for each page. Quit writing after the last line of each file without spacing to the end of the page.");
    v7 = clap_builder::builder::arg::Arg::action(&v0, 0x2);
    v1 = clap_builder::builder::command::Command::arg(&v6, &v7);
    v6 = clap_builder::builder::arg::Arg::new("length");
    v0 = clap_builder::builder::arg::Arg::short(&v6, 0x6c);
    v6 = clap_builder::builder::arg::Arg::long(&v0, "length");
    v0 = clap_builder::builder::arg::Arg::help(&v6, "Override the 66-line default (default number of lines of text 56, and with -F 63) and reset the page length to lines.  If lines is not greater than the sum  of  both the  header  and trailer depths (in lines), the pr utility shall suppress both the header and trailer, as if the -t option were in effect. ");
    v7 = clap_builder::builder::arg::Arg::value_name(&v0, "PAGE_LENGTH");
    v6 = clap_builder::builder::command::Command::arg(&v1, &v7);
    v1 = clap_builder::builder::arg::Arg::new("no-file-warnings");
    v0 = clap_builder::builder::arg::Arg::short(&v1, 0x72);
    v1 = clap_builder::builder::arg::Arg::long(&v0, "no-file-warnings");
    v0 = clap_builder::builder::arg::Arg::help(&v1, "omit warning when a file cannot be opened");
    v7 = clap_builder::builder::arg::Arg::action(&v0, 0x2);
    v1 = clap_builder::builder::command::Command::arg(&v6, &v7);
    v6 = clap_builder::builder::arg::Arg::new("form-feed");
    v0 = clap_builder::builder::arg::Arg::short(&v6, 0x46);
    v6 = clap_builder::builder::arg::Arg::short_alias(&v0, 0x66);
    v0 = clap_builder::builder::arg::Arg::long(&v6, "form-feed");
    v6 = clap_builder::builder::arg::Arg::help(&v0, "Use a <form-feed> for new pages, instead of the default behavior that uses a sequence of <newline>s.");
    v0 = clap_builder::builder::arg::Arg::action(&v6, 0x2);
    v6 = clap_builder::builder::command::Command::arg(&v1, &v0);
    v1 = clap_builder::builder::arg::Arg::new("width");
    v0 = clap_builder::builder::arg::Arg::short(&v1, 0x77);
    v1 = clap_builder::builder::arg::Arg::long(&v0, "width");
    v0 = clap_builder::builder::arg::Arg::help(&v1, "Set the width of the line to width column positions for multiple text-column output only. If the -w option is not specified and the -s option is not specified, the default width shall be 72. If the -w option is not specified and the -s option is specified, the default width shall be 512.");
    v7 = clap_builder::builder::arg::Arg::value_name(&v0, "width");
    v1 = clap_builder::builder::command::Command::arg(&v6, &v7);
    v6 = clap_builder::builder::arg::Arg::new("page-width");
    v0 = clap_builder::builder::arg::Arg::short(&v6, 0x57);
    v6 = clap_builder::builder::arg::Arg::long(&v0, "page-width");
    v0 = clap_builder::builder::arg::Arg::help(&v6, "set page width to PAGE_WIDTH (72) characters always, truncate lines, except -J option is set, no interference with -S or -s");
    v7 = clap_builder::builder::arg::Arg::value_name(&v0, "width");
    v6 = clap_builder::builder::command::Command::arg(&v1, &v7);
    v1 = clap_builder::builder::arg::Arg::new("across");
    v0 = clap_builder::builder::arg::Arg::short(&v1, 0x61);
    v1 = clap_builder::builder::arg::Arg::long(&v0, "across");
    v0 = clap_builder::builder::arg::Arg::help(&v1, "Modify the effect of the - column option so that the columns are filled across the page in a  round-robin  order (for example, when column is 2, the first input line heads column 1, the second heads column 2, the third is the second line in column 1, and so on).");
    v7 = clap_builder::builder::arg::Arg::action(&v0, 0x2);
    v1 = clap_builder::builder::command::Command::arg(&v6, &v7);
    v6 = clap_builder::builder::arg::Arg::new("column");
    v0 = clap_builder::builder::arg::Arg::long(&v6, "column");
    v6 = clap_builder::builder::arg::Arg::help(&v0, "Produce multi-column output that is arranged in column columns (the default shall be 1) and is written down each column  in  the order in which the text is received from the input file. This option should not be used with -m. The options -e and -i shall be assumed for multiple text-column output.  Whether or not text columns are produced with identical vertical lengths is unspecified, but a text column shall never exceed the length of the page (see the -l option). When used with -t, use the minimum number of lines to write the output.");
    v0 = clap_builder::builder::arg::Arg::value_name(&v6, "column");
    v6 = clap_builder::builder::command::Command::arg(&v1, &v0);
    v1 = clap_builder::builder::arg::Arg::new("separator");
    v0 = clap_builder::builder::arg::Arg::short(&v1, 0x73);
    v1 = clap_builder::builder::arg::Arg::long(&v0, "separator");
    v0 = clap_builder::builder::arg::Arg::help(&v1, "Separate text columns by the single character char instead of by the appropriate number of <space>s (default for char is the <tab> character).");
    v7 = clap_builder::builder::arg::Arg::value_name(&v0, "char");
    v1 = clap_builder::builder::command::Command::arg(&v6, &v7);
    v6 = clap_builder::builder::arg::Arg::new("sep-string");
    v0 = clap_builder::builder::arg::Arg::short(&v6, 0x53);
    v6 = clap_builder::builder::arg::Arg::long(&v0, "sep-string");
    v0 = clap_builder::builder::arg::Arg::help(&v6, "separate columns by STRING, without -S: Default separator <TAB> with -J and <space> otherwise (same as -S" "), no effect on column options");
    v7 = clap_builder::builder::arg::Arg::value_name(&v0, "string");
    v6 = clap_builder::builder::command::Command::arg(&v1, &v7);
    v1 = clap_builder::builder::arg::Arg::new("merge");
    v0 = clap_builder::builder::arg::Arg::short(&v1, 0x6d);
    v1 = clap_builder::builder::arg::Arg::long(&v0, "merge");
    v0 = clap_builder::builder::arg::Arg::help(&v1, "Merge files. Standard output shall be formatted so the pr utility writes one line from each file specified by a file operand, side by side into text columns of equal fixed widths, in terms of the number of column positions. Implementations shall support merging of at least nine file operands.");
    v7 = clap_builder::builder::arg::Arg::action(&v0, 0x2);
    v1 = clap_builder::builder::command::Command::arg(&v6, &v7);
    v6 = clap_builder::builder::arg::Arg::new("indent");
    v0 = clap_builder::builder::arg::Arg::short(&v6, 0x6f);
    v6 = clap_builder::builder::arg::Arg::long(&v0, "indent");
    v0 = clap_builder::builder::arg::Arg::help(&v6, "Each line of output shall be preceded by offset <space>s. If the -o option is not specified, the default offset shall be zero. The space taken is in addition to the output line width (see the -w option below).");
    v7 = clap_builder::builder::arg::Arg::value_name(&v0, "margin");
    v6 = clap_builder::builder::command::Command::arg(&v1, &v7);
    v1 = clap_builder::builder::arg::Arg::new("join-lines");
    v0 = clap_builder::builder::arg::Arg::short(&v1, 0x4a);
    v1 = clap_builder::builder::arg::Arg::help(&v0, "merge full lines, turns off -W line truncation, no column alignment, --sep-string[=STRING] sets separators");
    v0 = clap_builder::builder::arg::Arg::action(&v1, 0x2);
    v1 = clap_builder::builder::command::Command::arg(&v6, &v0);
    v6 = clap_builder::builder::arg::Arg::new("help");
    v0 = clap_builder::builder::arg::Arg::long(&v6, "help");
    v6 = clap_builder::builder::arg::Arg::help(&v0, "Print help information");
    v0 = clap_builder::builder::arg::Arg::action(&v6, 0x5);
    v6 = clap_builder::builder::command::Command::arg(&v1, &v0);
    v1 = clap_builder::builder::arg::Arg::new("files");
    v0 = clap_builder::builder::arg::Arg::action(&v1, 0x1);
    v1 = clap_builder::builder::arg::Arg::value_hint(&v0, 0x3);
    clap_builder::builder::command::Command::arg(a0, &v6, &v1);
    return a0;
}
