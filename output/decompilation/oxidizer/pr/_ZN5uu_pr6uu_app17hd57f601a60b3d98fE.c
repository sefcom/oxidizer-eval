fn uu_pr::uu_app() -> : struct712 {
    let a0: u64;  // rdi
    let v0: struct24;  // [bp-0xab0], Other Possible Types: struct640
    let v1: u32;  // [bp-0x838]
    let v2: u32;  // [bp-0x834]
    let v3: struct712;  // [bp-0x830], Other Possible Types: struct640
    let v4: u32;  // [bp-0x5b8]
    let v5: u32;  // [bp-0x5b4]
    let v6: u64;  // [bp-0x574]
    let v7: u32;  // [bp-0x56c]
    let v8: struct437;  // [bp-0x568], Other Possible Types: struct712, struct640
    let v9: u64;  // [bp-0x2ac]
    let v10: u32;  // [bp-0x2a4]
    let v11: struct640;  // [bp-0x2a0]
    let v14: u64;  // rdx

    v8 = clap_builder::builder::command::Command::new(uucore::util_name(), v14);
    v3 = clap_builder::builder::command::Command::version(&v8);
    v8 = clap_builder::builder::command::Command::about(&v3);
    v3 = clap_builder::builder::command::Command::after_help(&v8);
    v0 = uucore::format_usage("{} [OPTION]... [FILE]...");
    v8 = clap_builder::builder::command::Command::override_usage(&v3, &v0);
    memcpy(&v3, &v8, 700);
    v6 = 2252383929761928 | v9;
    v7 = v10;
    v8 = clap_builder::builder::arg::Arg::new("pages");
    v0 = clap_builder::builder::arg::Arg::long(&v8, "pages");
    v8 = clap_builder::builder::arg::Arg::help(&v0, "Begin and stop printing with page FIRST_PAGE[:LAST_PAGE]");
    v0 = clap_builder::builder::arg::Arg::value_name(&v8, "FIRST_PAGE[:LAST_PAGE]");
    v8 = clap_builder::builder::command::Command::arg(&v3, &v0);
    v3 = clap_builder::builder::arg::Arg::new("header");
    v0 = clap_builder::builder::arg::Arg::short(&v3, 104);
    v3 = clap_builder::builder::arg::Arg::long(&v0, "header");
    v0 = clap_builder::builder::arg::Arg::help(&v3, "Use the string header to replace the file name in the header line.");
    v11 = clap_builder::builder::arg::Arg::value_name(&v0, "STRING");
    v3 = clap_builder::builder::command::Command::arg(&v8, &v11);
    v8 = clap_builder::builder::arg::Arg::new("double-space");
    v0 = clap_builder::builder::arg::Arg::short(&v8, 100);
    v8 = clap_builder::builder::arg::Arg::long(&v0, "double-space");
    v0 = clap_builder::builder::arg::Arg::help(&v8, "Produce output that is double spaced. An extra <newline> character is output following every <newline> found in the input.");
    v11 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v8 = clap_builder::builder::command::Command::arg(&v3, &v11);
    v3 = clap_builder::builder::arg::Arg::new("number-lines");
    v0 = clap_builder::builder::arg::Arg::short(&v3, 110);
    v3 = clap_builder::builder::arg::Arg::long(&v0, "number-lines");
    v0 = clap_builder::builder::arg::Arg::help(&v3, "Provide width digit line numbering.  The default for width, if not specified, is 5.  The number occupies the first width column positions of each text column or each line of -m output.  If char (any non-digit character) is given, it is appended to the line number to separate it from whatever follows.  The default for char is a <tab>. Line numbers longer than width columns are truncated.");
    memcpy(&v3, &v0, 632);
    v4 = v1 | 32;
    v5 = v2;
    v0 = clap_builder::builder::arg::Arg::value_name(&v3, "[char][width]");
    v3 = clap_builder::builder::command::Command::arg(&v8, &v0);
    v8 = clap_builder::builder::arg::Arg::new("first-line-number");
    v0 = clap_builder::builder::arg::Arg::short(&v8, 78);
    v8 = clap_builder::builder::arg::Arg::long(&v0, "first-line-number");
    v0 = clap_builder::builder::arg::Arg::help(&v8, "start counting with NUMBER at 1st line of first page printed");
    v11 = clap_builder::builder::arg::Arg::value_name(&v0, "NUMBER");
    v8 = clap_builder::builder::command::Command::arg(&v3, &v11);
    v3 = clap_builder::builder::arg::Arg::new("omit-header");
    v0 = clap_builder::builder::arg::Arg::short(&v3, 116);
    v3 = clap_builder::builder::arg::Arg::long(&v0, "omit-header");
    v0 = clap_builder::builder::arg::Arg::help(&v3, "Write neither the five-line identifying header nor the five-line trailer usually supplied for each page. Quit writing after the last line of each file without spacing to the end of the page.");
    v11 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v3 = clap_builder::builder::command::Command::arg(&v8, &v11);
    v8 = clap_builder::builder::arg::Arg::new("length");
    v0 = clap_builder::builder::arg::Arg::short(&v8, 108);
    v8 = clap_builder::builder::arg::Arg::long(&v0, "length");
    v0 = clap_builder::builder::arg::Arg::help(&v8, "Override the 66-line default (default number of lines of text 56, and with -F 63) and reset the page length to lines.  If lines is not greater than the sum  of  both the  header  and trailer depths (in lines), the pr utility shall suppress both the header and trailer, as if the -t option were in effect. ");
    v11 = clap_builder::builder::arg::Arg::value_name(&v0, "PAGE_LENGTH");
    v8 = clap_builder::builder::command::Command::arg(&v3, &v11);
    v3 = clap_builder::builder::arg::Arg::new("no-file-warnings");
    v0 = clap_builder::builder::arg::Arg::short(&v3, 114);
    v3 = clap_builder::builder::arg::Arg::long(&v0, "no-file-warnings");
    v0 = clap_builder::builder::arg::Arg::help(&v3, "omit warning when a file cannot be opened");
    v11 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v3 = clap_builder::builder::command::Command::arg(&v8, &v11);
    v8 = clap_builder::builder::arg::Arg::new("form-feed");
    v0 = clap_builder::builder::arg::Arg::short(&v8, 70);
    v8 = clap_builder::builder::arg::Arg::short_alias(&v0);
    v0 = clap_builder::builder::arg::Arg::long(&v8, "form-feed");
    v8 = clap_builder::builder::arg::Arg::help(&v0, "Use a <form-feed> for new pages, instead of the default behavior that uses a sequence of <newline>s.");
    v0 = clap_builder::builder::arg::Arg::action(&v8, 2);
    v8 = clap_builder::builder::command::Command::arg(&v3, &v0);
    v3 = clap_builder::builder::arg::Arg::new("width");
    v0 = clap_builder::builder::arg::Arg::short(&v3, 119);
    v3 = clap_builder::builder::arg::Arg::long(&v0, "width");
    v0 = clap_builder::builder::arg::Arg::help(&v3, "Set the width of the line to width column positions for multiple text-column output only. If the -w option is not specified and the -s option is not specified, the default width shall be 72. If the -w option is not specified and the -s option is specified, the default width shall be 512.");
    v11 = clap_builder::builder::arg::Arg::value_name(&v0, "width");
    v3 = clap_builder::builder::command::Command::arg(&v8, &v11);
    v8 = clap_builder::builder::arg::Arg::new("page-width");
    v0 = clap_builder::builder::arg::Arg::short(&v8, 87);
    v8 = clap_builder::builder::arg::Arg::long(&v0, "page-width");
    v0 = clap_builder::builder::arg::Arg::help(&v8, "set page width to PAGE_WIDTH (72) characters always, truncate lines, except -J option is set, no interference with -S or -s");
    v11 = clap_builder::builder::arg::Arg::value_name(&v0, "width");
    v8 = clap_builder::builder::command::Command::arg(&v3, &v11);
    v3 = clap_builder::builder::arg::Arg::new("across");
    v0 = clap_builder::builder::arg::Arg::short(&v3, 97);
    v3 = clap_builder::builder::arg::Arg::long(&v0, "across");
    v0 = clap_builder::builder::arg::Arg::help(&v3, "Modify the effect of the - column option so that the columns are filled across the page in a  round-robin  order (for example, when column is 2, the first input line heads column 1, the second heads column 2, the third is the second line in column 1, and so on).");
    v11 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v3 = clap_builder::builder::command::Command::arg(&v8, &v11);
    v8 = clap_builder::builder::arg::Arg::new("column");
    v0 = clap_builder::builder::arg::Arg::long(&v8, "column");
    v8 = clap_builder::builder::arg::Arg::help(&v0, "Produce multi-column output that is arranged in column columns (the default shall be 1) and is written down each column  in  the order in which the text is received from the input file. This option should not be used with -m. The options -e and -i shall be assumed for multiple text-column output.  Whether or not text columns are produced with identical vertical lengths is unspecified, but a text column shall never exceed the length of the page (see the -l option). When used with -t, use the minimum number of lines to write the output.");
    v0 = clap_builder::builder::arg::Arg::value_name(&v8, "column");
    v8 = clap_builder::builder::command::Command::arg(&v3, &v0);
    v3 = clap_builder::builder::arg::Arg::new("separator");
    v0 = clap_builder::builder::arg::Arg::short(&v3, 115);
    v3 = clap_builder::builder::arg::Arg::long(&v0, "separator");
    v0 = clap_builder::builder::arg::Arg::help(&v3, "Separate text columns by the single character char instead of by the appropriate number of <space>s (default for char is the <tab> character).");
    v11 = clap_builder::builder::arg::Arg::value_name(&v0, "char");
    v3 = clap_builder::builder::command::Command::arg(&v8, &v11);
    v8 = clap_builder::builder::arg::Arg::new("sep-string");
    v0 = clap_builder::builder::arg::Arg::short(&v8, 83);
    v8 = clap_builder::builder::arg::Arg::long(&v0, "sep-string");
    v0 = clap_builder::builder::arg::Arg::help(&v8, "separate columns by STRING, without -S: Default separator <TAB> with -J and <space> otherwise (same as -S\" \"), no effect on column options");
    v11 = clap_builder::builder::arg::Arg::value_name(&v0, "string");
    v8 = clap_builder::builder::command::Command::arg(&v3, &v11);
    v3 = clap_builder::builder::arg::Arg::new("merge");
    v0 = clap_builder::builder::arg::Arg::short(&v3, 109);
    v3 = clap_builder::builder::arg::Arg::long(&v0, "merge");
    v0 = clap_builder::builder::arg::Arg::help(&v3, "Merge files. Standard output shall be formatted so the pr utility writes one line from each file specified by a file operand, side by side into text columns of equal fixed widths, in terms of the number of column positions. Implementations shall support merging of at least nine file operands.");
    v11 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v3 = clap_builder::builder::command::Command::arg(&v8, &v11);
    v8 = clap_builder::builder::arg::Arg::new("indent");
    v0 = clap_builder::builder::arg::Arg::short(&v8, 111);
    v8 = clap_builder::builder::arg::Arg::long(&v0, "indent");
    v0 = clap_builder::builder::arg::Arg::help(&v8, "Each line of output shall be preceded by offset <space>s. If the -o option is not specified, the default offset shall be zero. The space taken is in addition to the output line width (see the -w option below).");
    v11 = clap_builder::builder::arg::Arg::value_name(&v0, "margin");
    v8 = clap_builder::builder::command::Command::arg(&v3, &v11);
    v3 = clap_builder::builder::arg::Arg::new("join-lines");
    v0 = clap_builder::builder::arg::Arg::short(&v3, 74);
    v3 = clap_builder::builder::arg::Arg::help(&v0, "merge full lines, turns off -W line truncation, no column alignment, --sep-string[=STRING] sets separators");
    v0 = clap_builder::builder::arg::Arg::action(&v3, 2);
    v3 = clap_builder::builder::command::Command::arg(&v8, &v0);
    v8 = clap_builder::builder::arg::Arg::new("help");
    v0 = clap_builder::builder::arg::Arg::long(&v8, "help");
    v8 = clap_builder::builder::arg::Arg::help(&v0, "Print help information");
    v0 = clap_builder::builder::arg::Arg::action(&v8, 5);
    v8 = clap_builder::builder::command::Command::arg(&v3, &v0);
    v3 = clap_builder::builder::arg::Arg::new("files");
    v0 = clap_builder::builder::arg::Arg::action(&v3, 1);
    v3 = clap_builder::builder::arg::Arg::value_hint(&v0);
    clap_builder::builder::command::Command::arg(a0, &v8, &v3);
    return;
}
