long long uu_pr::uu_app::h8fe6cda82b850488(unsigned long long a0, unsigned long a1, unsigned long a2)
{
    char v0;  // [bp-0xa48]
    char v1;  // [bp-0x800]
    char v2;  // [bp-0x7fc]
    char v3;  // [bp-0x7f8]
    unsigned int v4;  // [sp-0x5b0]
    unsigned int v5;  // [sp-0x5ac]
    unsigned long long v6;  // [sp-0x53c]
    unsigned int v7;  // [sp-0x534]
    char v8;  // [bp-0x530]
    char v9;  // [bp-0x274]
    char v10;  // [bp-0x26c]
    char v11;  // [bp-0x268]
    unsigned long long v13;  // rdx

    clap_builder::builder::command::Command::new::h4f0deb83b4d43e3a(&v8, uucore::util_name::h412db5e565a079f3(), v13);
    clap_builder::builder::command::Command::version::h4c285cd5e4ba9e9a(&v3, &v8, "0.0.28Write content of given file or standard input to standard output with pagination filter+PAGE           Begin output at page number page of the formatted input.\n-COLUMN         Produce multi-column output. See --column\n\nThe pr utility is a printing an", 6);
    clap_builder::builder::command::Command::about::he2284c8ed9cefb67(&v8, &v3, "Write content of given file or standard input to standard output with pagination filter+PAGE           Begin output at page number page of the formatted input.\n-COLUMN         Produce multi-column output. See --column\n\nThe pr utility is a printing and pagi", 87);
    clap_builder::builder::command::Command::after_help::hd537543727903012(&v3, &v8, "+PAGE           Begin output at page number page of the formatted input.\n-COLUMN         Produce multi-column output. See --column\n\nThe pr utility is a printing and pagination filter for text files.\nWhen multiple input files are specified, each is read, formatted, and written to standard output.\nBy default, the input is separated into 66-line pages, each with\n\n* A 5-line header with the page number, date, time, and the pathname of the file.\n* A 5-line trailer consisting of blank lines.\n\nIf standard output is associated with a terminal, diagnostic messages are suppressed until the pr\nutility has completed processing.\n\nWhen multiple column output is specified, text columns are of equal width.\nBy default, text columns are separated by at least one <blank>.\nInput lines that do not fit into a text column are truncated.\nLines are not truncated under single column output.", 877);
    uucore::format_usage::h00b69bae12d8ac9c(&v0, "{} [OPTION]... [FILE]...pagesBegin and stop printing with page FIRST_PAGE[:LAST_PAGE]FIRST_PAGE[:LAST_PAGE]headerUse the string header to replace the file name in the header line.STRINGdouble-spaceProduce output that is double spaced. An extra <newline> ch", 24);
    clap_builder::builder::command::Command::override_usage::had2edce27ebbfdca(&v8, &v3, &v0);
    memcpy(&v3, &v8, 700);
    v6 = 1126484022657160 | *((long long *)&v9);
    v7 = *((int *)&v10);
    clap_builder::builder::arg::Arg::new::he09af7ac6482218d(&v8, "pagesBegin and stop printing with page FIRST_PAGE[:LAST_PAGE]FIRST_PAGE[:LAST_PAGE]headerUse the string header to replace the file name in the header line.STRINGdouble-spaceProduce output that is double spaced. An extra <newline> character is output follow", 5);
    clap_builder::builder::arg::Arg::long::hc04887159d467920(&v0, &v8, "pagesBegin and stop printing with page FIRST_PAGE[:LAST_PAGE]FIRST_PAGE[:LAST_PAGE]headerUse the string header to replace the file name in the header line.STRINGdouble-spaceProduce output that is double spaced. An extra <newline> character is output follow", 5);
    clap_builder::builder::arg::Arg::help::h24f649f3ad09e6ea(&v8, &v0, "Begin and stop printing with page FIRST_PAGE[:LAST_PAGE]FIRST_PAGE[:LAST_PAGE]headerUse the string header to replace the file name in the header line.STRINGdouble-spaceProduce output that is double spaced. An extra <newline> character is output following e", 56);
    clap_builder::builder::arg::Arg::value_name::h519e2f9e978f6422(&v0, &v8, "FIRST_PAGE[:LAST_PAGE]headerUse the string header to replace the file name in the header line.STRINGdouble-spaceProduce output that is double spaced. An extra <newline> character is output following every <newline> found in the input.number-linesProvide wi", 22);
    clap_builder::builder::command::Command::arg::h2fcec2b1abfb1661(&v8, &v3, &v0);
    clap_builder::builder::arg::Arg::new::he09af7ac6482218d(&v3, "headerUse the string header to replace the file name in the header line.STRINGdouble-spaceProduce output that is double spaced. An extra <newline> character is output following every <newline> found in the input.number-linesProvide width digit line numberi", 6);
    clap_builder::builder::arg::Arg::short::h6fbe30e3c0b90037(&v0, &v3, 104);
    clap_builder::builder::arg::Arg::long::hc04887159d467920(&v3, &v0, "headerUse the string header to replace the file name in the header line.STRINGdouble-spaceProduce output that is double spaced. An extra <newline> character is output following every <newline> found in the input.number-linesProvide width digit line numberi", 6);
    clap_builder::builder::arg::Arg::help::h24f649f3ad09e6ea(&v0, &v3, "Use the string header to replace the file name in the header line.STRINGdouble-spaceProduce output that is double spaced. An extra <newline> character is output following every <newline> found in the input.number-linesProvide width digit line numbering.  T", 66);
    clap_builder::builder::arg::Arg::value_name::h519e2f9e978f6422(&v11, &v0, "STRINGdouble-spaceProduce output that is double spaced. An extra <newline> character is output following every <newline> found in the input.number-linesProvide width digit line numbering.  The default for width, if not specified, is 5.  The number occupies", 6);
    clap_builder::builder::command::Command::arg::h2fcec2b1abfb1661(&v3, &v8, &v11);
    clap_builder::builder::arg::Arg::new::he09af7ac6482218d(&v8, "double-spaceProduce output that is double spaced. An extra <newline> character is output following every <newline> found in the input.number-linesProvide width digit line numbering.  The default for width, if not specified, is 5.  The number occupies the f", 12);
    clap_builder::builder::arg::Arg::short::h6fbe30e3c0b90037(&v0, &v8, 100);
    clap_builder::builder::arg::Arg::long::hc04887159d467920(&v8, &v0, "double-spaceProduce output that is double spaced. An extra <newline> character is output following every <newline> found in the input.number-linesProvide width digit line numbering.  The default for width, if not specified, is 5.  The number occupies the f", 12);
    clap_builder::builder::arg::Arg::help::h24f649f3ad09e6ea(&v0, &v8, "Produce output that is double spaced. An extra <newline> character is output following every <newline> found in the input.number-linesProvide width digit line numbering.  The default for width, if not specified, is 5.  The number occupies the first width c", 122);
    clap_builder::builder::arg::Arg::action::h3fba29a41f1f96e6(&v11, &v0, 2);
    clap_builder::builder::command::Command::arg::h2fcec2b1abfb1661(&v8, &v3, &v11);
    clap_builder::builder::arg::Arg::new::he09af7ac6482218d(&v3, "number-linesProvide width digit line numbering.  The default for width, if not specified, is 5.  The number occupies the first width column positions of each text column or each line of -m output.  If char (any non-digit character) is given, it is appended", 12);
    clap_builder::builder::arg::Arg::short::h6fbe30e3c0b90037(&v0, &v3, 110);
    clap_builder::builder::arg::Arg::long::hc04887159d467920(&v3, &v0, "number-linesProvide width digit line numbering.  The default for width, if not specified, is 5.  The number occupies the first width column positions of each text column or each line of -m output.  If char (any non-digit character) is given, it is appended", 12);
    clap_builder::builder::arg::Arg::help::h24f649f3ad09e6ea(&v0, &v3, "Provide width digit line numbering.  The default for width, if not specified, is 5.  The number occupies the first width column positions of each text column or each line of -m output.  If char (any non-digit character) is given, it is appended to the line number to separate it from whatever follows.  The default for char is a <tab>. Line numbers longer than width columns are truncated.", 389);
    memcpy(&v3, &v0, 584);
    v4 = *((int *)&v1) | 32;
    v5 = *((int *)&v2);
    clap_builder::builder::arg::Arg::value_name::h519e2f9e978f6422(&v0, &v3, "[char][width]first-line-numberstart counting with NUMBER at 1st line of first page printedNUMBERomit-headerWrite neither the five-line identifying header nor the five-line trailer usually supplied for each page. Quit writing after the last line of each fil", 13);
    clap_builder::builder::command::Command::arg::h2fcec2b1abfb1661(&v3, &v8, &v0);
    clap_builder::builder::arg::Arg::new::he09af7ac6482218d(&v8, "first-line-numberstart counting with NUMBER at 1st line of first page printedNUMBERomit-headerWrite neither the five-line identifying header nor the five-line trailer usually supplied for each page. Quit writing after the last line of each file without spa", 17);
    clap_builder::builder::arg::Arg::short::h6fbe30e3c0b90037(&v0, &v8, 78);
    clap_builder::builder::arg::Arg::long::hc04887159d467920(&v8, &v0, "first-line-numberstart counting with NUMBER at 1st line of first page printedNUMBERomit-headerWrite neither the five-line identifying header nor the five-line trailer usually supplied for each page. Quit writing after the last line of each file without spa", 17);
    clap_builder::builder::arg::Arg::help::h24f649f3ad09e6ea(&v0, &v8, "start counting with NUMBER at 1st line of first page printedNUMBERomit-headerWrite neither the five-line identifying header nor the five-line trailer usually supplied for each page. Quit writing after the last line of each file without spacing to the end o", 60);
    clap_builder::builder::arg::Arg::value_name::h519e2f9e978f6422(&v11, &v0, "NUMBERomit-headerWrite neither the five-line identifying header nor the five-line trailer usually supplied for each page. Quit writing after the last line of each file without spacing to the end of the page.lengthOverride the 66-line default (default numbe", 6);
    clap_builder::builder::command::Command::arg::h2fcec2b1abfb1661(&v8, &v3, &v11);
    clap_builder::builder::arg::Arg::new::he09af7ac6482218d(&v3, "omit-headerWrite neither the five-line identifying header nor the five-line trailer usually supplied for each page. Quit writing after the last line of each file without spacing to the end of the page.lengthOverride the 66-line default (default number of l", 11);
    clap_builder::builder::arg::Arg::short::h6fbe30e3c0b90037(&v0, &v3, 116);
    clap_builder::builder::arg::Arg::long::hc04887159d467920(&v3, &v0, "omit-headerWrite neither the five-line identifying header nor the five-line trailer usually supplied for each page. Quit writing after the last line of each file without spacing to the end of the page.lengthOverride the 66-line default (default number of l", 11);
    clap_builder::builder::arg::Arg::help::h24f649f3ad09e6ea(&v0, &v3, "Write neither the five-line identifying header nor the five-line trailer usually supplied for each page. Quit writing after the last line of each file without spacing to the end of the page.lengthOverride the 66-line default (default number of lines of tex", 190);
    clap_builder::builder::arg::Arg::action::h3fba29a41f1f96e6(&v11, &v0, 2);
    clap_builder::builder::command::Command::arg::h2fcec2b1abfb1661(&v3, &v8, &v11);
    clap_builder::builder::arg::Arg::new::he09af7ac6482218d(&v8, "lengthOverride the 66-line default (default number of lines of text 56, and with -F 63) and reset the page length to lines.  If lines is not greater than the sum  of  both the  header  and trailer depths (in lines), the pr utility shall suppress both the h", 6);
    clap_builder::builder::arg::Arg::short::h6fbe30e3c0b90037(&v0, &v8, 108);
    clap_builder::builder::arg::Arg::long::hc04887159d467920(&v8, &v0, "lengthOverride the 66-line default (default number of lines of text 56, and with -F 63) and reset the page length to lines.  If lines is not greater than the sum  of  both the  header  and trailer depths (in lines), the pr utility shall suppress both the h", 6);
    clap_builder::builder::arg::Arg::help::h24f649f3ad09e6ea(&v0, &v8, "Override the 66-line default (default number of lines of text 56, and with -F 63) and reset the page length to lines.  If lines is not greater than the sum  of  both the  header  and trailer depths (in lines), the pr utility shall suppress both the header and trailer, as if the -t option were in effect. ", 305);
    clap_builder::builder::arg::Arg::value_name::h519e2f9e978f6422(&v11, &v0, "PAGE_LENGTHomit warning when a file cannot be openedform-feedUse a <form-feed> for new pages, instead of the default behavior that uses a sequence of <newline>s.widthSet the width of the line to width column positions for multiple text-column output only. ", 11);
    clap_builder::builder::command::Command::arg::h2fcec2b1abfb1661(&v8, &v3, &v11);
    clap_builder::builder::arg::Arg::new::he09af7ac6482218d(&v3, "no-file-warningsArgumentConflictidsunaryoperator", 16);
    clap_builder::builder::arg::Arg::short::h6fbe30e3c0b90037(&v0, &v3, 114);
    clap_builder::builder::arg::Arg::long::hc04887159d467920(&v3, &v0, "no-file-warningsArgumentConflictidsunaryoperator", 16);
    clap_builder::builder::arg::Arg::help::h24f649f3ad09e6ea(&v0, &v3, "omit warning when a file cannot be openedform-feedUse a <form-feed> for new pages, instead of the default behavior that uses a sequence of <newline>s.widthSet the width of the line to width column positions for multiple text-column output only. If the -w o", 41);
    clap_builder::builder::arg::Arg::action::h3fba29a41f1f96e6(&v11, &v0, 2);
    clap_builder::builder::command::Command::arg::h2fcec2b1abfb1661(&v3, &v8, &v11);
    clap_builder::builder::arg::Arg::new::he09af7ac6482218d(&v8, "form-feedUse a <form-feed> for new pages, instead of the default behavior that uses a sequence of <newline>s.widthSet the width of the line to width column positions for multiple text-column output only. If the -w option is not specified and the -s option ", 9);
    clap_builder::builder::arg::Arg::short::h6fbe30e3c0b90037(&v0, &v8, 70);
    clap_builder::builder::arg::Arg::short_alias::hc7cc8cb72669c016(&v8, &v0, 102);
    clap_builder::builder::arg::Arg::long::hc04887159d467920(&v0, &v8, "form-feedUse a <form-feed> for new pages, instead of the default behavior that uses a sequence of <newline>s.widthSet the width of the line to width column positions for multiple text-column output only. If the -w option is not specified and the -s option ", 9);
    clap_builder::builder::arg::Arg::help::h24f649f3ad09e6ea(&v8, &v0, "Use a <form-feed> for new pages, instead of the default behavior that uses a sequence of <newline>s.widthSet the width of the line to width column positions for multiple text-column output only. If the -w option is not specified and the -s option is not sp", 100);
    clap_builder::builder::arg::Arg::action::h3fba29a41f1f96e6(&v0, &v8, 2);
    clap_builder::builder::command::Command::arg::h2fcec2b1abfb1661(&v8, &v3, &v0);
    clap_builder::builder::arg::Arg::new::he09af7ac6482218d(&v3, "widthSet the width of the line to width column positions for multiple text-column output only. If the -w option is not specified and the -s option is not specified, the default width shall be 72. If the -w option is not specified and the -s option is speci", 5);
    clap_builder::builder::arg::Arg::short::h6fbe30e3c0b90037(&v0, &v3, 119);
    clap_builder::builder::arg::Arg::long::hc04887159d467920(&v3, &v0, "widthSet the width of the line to width column positions for multiple text-column output only. If the -w option is not specified and the -s option is not specified, the default width shall be 72. If the -w option is not specified and the -s option is speci", 5);
    clap_builder::builder::arg::Arg::help::h24f649f3ad09e6ea(&v0, &v3, "Set the width of the line to width column positions for multiple text-column output only. If the -w option is not specified and the -s option is not specified, the default width shall be 72. If the -w option is not specified and the -s option is specified, the default width shall be 512.", 288);
    clap_builder::builder::arg::Arg::value_name::h519e2f9e978f6422(&v11, &v0, "widthSet the width of the line to width column positions for multiple text-column output only. If the -w option is not specified and the -s option is not specified, the default width shall be 72. If the -w option is not specified and the -s option is speci", 5);
    clap_builder::builder::command::Command::arg::h2fcec2b1abfb1661(&v3, &v8, &v11);
    clap_builder::builder::arg::Arg::new::he09af7ac6482218d(&v8, "page-widthset page width to PAGE_WIDTH (72) characters always, truncate lines, except -J option is set, no interference with -S or -sacrossModify the effect of the - column option so that the columns are filled across the page in a  round-robin  order (for", 10);
    clap_builder::builder::arg::Arg::short::h6fbe30e3c0b90037(&v0, &v8, 87);
    clap_builder::builder::arg::Arg::long::hc04887159d467920(&v8, &v0, "page-widthset page width to PAGE_WIDTH (72) characters always, truncate lines, except -J option is set, no interference with -S or -sacrossModify the effect of the - column option so that the columns are filled across the page in a  round-robin  order (for", 10);
    clap_builder::builder::arg::Arg::help::h24f649f3ad09e6ea(&v0, &v8, "set page width to PAGE_WIDTH (72) characters always, truncate lines, except -J option is set, no interference with -S or -sacrossModify the effect of the - column option so that the columns are filled across the page in a  round-robin  order (for example, ", 123);
    clap_builder::builder::arg::Arg::value_name::h519e2f9e978f6422(&v11, &v0, "widthSet the width of the line to width column positions for multiple text-column output only. If the -w option is not specified and the -s option is not specified, the default width shall be 72. If the -w option is not specified and the -s option is speci", 5);
    clap_builder::builder::command::Command::arg::h2fcec2b1abfb1661(&v8, &v3, &v11);
    clap_builder::builder::arg::Arg::new::he09af7ac6482218d(&v3, "acrossModify the effect of the - column option so that the columns are filled across the page in a  round-robin  order (for example, when column is 2, the first input line heads column 1, the second heads column 2, the third is the second line in column 1,", 6);
    clap_builder::builder::arg::Arg::short::h6fbe30e3c0b90037(&v0, &v3, 97);
    clap_builder::builder::arg::Arg::long::hc04887159d467920(&v3, &v0, "acrossModify the effect of the - column option so that the columns are filled across the page in a  round-robin  order (for example, when column is 2, the first input line heads column 1, the second heads column 2, the third is the second line in column 1,", 6);
    clap_builder::builder::arg::Arg::help::h24f649f3ad09e6ea(&v0, &v3, "Modify the effect of the - column option so that the columns are filled across the page in a  round-robin  order (for example, when column is 2, the first input line heads column 1, the second heads column 2, the third is the second line in column 1, and so on).", 262);
    clap_builder::builder::arg::Arg::action::h3fba29a41f1f96e6(&v11, &v0, 2);
    clap_builder::builder::command::Command::arg::h2fcec2b1abfb1661(&v3, &v8, &v11);
    clap_builder::builder::arg::Arg::new::he09af7ac6482218d(&v8, "columnProduce multi-column output that is arranged in column columns (the default shall be 1) and is written down each column  in  the order in which the text is received from the input file. This option should not be used with -m. The options -e and -i sh", 6);
    clap_builder::builder::arg::Arg::long::hc04887159d467920(&v0, &v8, "columnProduce multi-column output that is arranged in column columns (the default shall be 1) and is written down each column  in  the order in which the text is received from the input file. This option should not be used with -m. The options -e and -i sh", 6);
    clap_builder::builder::arg::Arg::help::h24f649f3ad09e6ea(&v8, &v0, "Produce multi-column output that is arranged in column columns (the default shall be 1) and is written down each column  in  the order in which the text is received from the input file. This option should not be used with -m. The options -e and -i shall be assumed for multiple text-column output.  Whether or not text columns are produced with identical vertical lengths is unspecified, but a text column shall never exceed the length of the page (see the -l option). When used with -t, use the minimum number of lines to write the output.", 540);
    clap_builder::builder::arg::Arg::value_name::h519e2f9e978f6422(&v0, &v8, "columnProduce multi-column output that is arranged in column columns (the default shall be 1) and is written down each column  in  the order in which the text is received from the input file. This option should not be used with -m. The options -e and -i sh", 6);
    clap_builder::builder::command::Command::arg::h2fcec2b1abfb1661(&v8, &v3, &v0);
    clap_builder::builder::arg::Arg::new::he09af7ac6482218d(&v3, "separatorSeparate text columns by the single character char instead of by the appropriate number of <space>s (default for char is the <tab> character).sep-stringseparate columns by STRING, without -S: Default separator <TAB> with -J and <space> otherwise (", 9);
    clap_builder::builder::arg::Arg::short::h6fbe30e3c0b90037(&v0, &v3, 115);
    clap_builder::builder::arg::Arg::long::hc04887159d467920(&v3, &v0, "separatorSeparate text columns by the single character char instead of by the appropriate number of <space>s (default for char is the <tab> character).sep-stringseparate columns by STRING, without -S: Default separator <TAB> with -J and <space> otherwise (", 9);
    clap_builder::builder::arg::Arg::help::h24f649f3ad09e6ea(&v0, &v3, "Separate text columns by the single character char instead of by the appropriate number of <space>s (default for char is the <tab> character).sep-stringseparate columns by STRING, without -S: Default separator <TAB> with -J and <space> otherwise (same as -", 142);
    clap_builder::builder::arg::Arg::value_name::h519e2f9e978f6422(&v11, &v0, "char", 4);
    clap_builder::builder::command::Command::arg::h2fcec2b1abfb1661(&v3, &v8, &v11);
    clap_builder::builder::arg::Arg::new::he09af7ac6482218d(&v8, "sep-stringseparate columns by STRING, without -S: Default separator <TAB> with -J and <space> otherwise (same as -S\" \"), no effect on column optionsstringmergeMerge files. Standard output shall be formatted so the pr utility writes one line from each file ", 10);
    clap_builder::builder::arg::Arg::short::h6fbe30e3c0b90037(&v0, &v8, 83);
    clap_builder::builder::arg::Arg::long::hc04887159d467920(&v8, &v0, "sep-stringseparate columns by STRING, without -S: Default separator <TAB> with -J and <space> otherwise (same as -S\" \"), no effect on column optionsstringmergeMerge files. Standard output shall be formatted so the pr utility writes one line from each file ", 10);
    clap_builder::builder::arg::Arg::help::h24f649f3ad09e6ea(&v0, &v8, "separate columns by STRING, without -S: Default separator <TAB> with -J and <space> otherwise (same as -S\" \"), no effect on column optionsstringmergeMerge files. Standard output shall be formatted so the pr utility writes one line from each file specified ", 138);
    clap_builder::builder::arg::Arg::value_name::h519e2f9e978f6422(&v11, &v0, "stringmergeMerge files. Standard output shall be formatted so the pr utility writes one line from each file specified by a file operand, side by side into text columns of equal fixed widths, in terms of the number of column positions. Implementations shall", 6);
    clap_builder::builder::command::Command::arg::h2fcec2b1abfb1661(&v8, &v3, &v11);
    clap_builder::builder::arg::Arg::new::he09af7ac6482218d(&v3, "mergeMerge files. Standard output shall be formatted so the pr utility writes one line from each file specified by a file operand, side by side into text columns of equal fixed widths, in terms of the number of column positions. Implementations shall suppo", 5);
    clap_builder::builder::arg::Arg::short::h6fbe30e3c0b90037(&v0, &v3, 109);
    clap_builder::builder::arg::Arg::long::hc04887159d467920(&v3, &v0, "mergeMerge files. Standard output shall be formatted so the pr utility writes one line from each file specified by a file operand, side by side into text columns of equal fixed widths, in terms of the number of column positions. Implementations shall suppo", 5);
    clap_builder::builder::arg::Arg::help::h24f649f3ad09e6ea(&v0, &v3, "Merge files. Standard output shall be formatted so the pr utility writes one line from each file specified by a file operand, side by side into text columns of equal fixed widths, in terms of the number of column positions. Implementations shall support merging of at least nine file operands.", 293);
    clap_builder::builder::arg::Arg::action::h3fba29a41f1f96e6(&v11, &v0, 2);
    clap_builder::builder::command::Command::arg::h2fcec2b1abfb1661(&v3, &v8, &v11);
    clap_builder::builder::arg::Arg::new::he09af7ac6482218d(&v8, "indentEach line of output shall be preceded by offset <space>s. If the -o option is not specified, the default offset shall be zero. The space taken is in addition to the output line width (see the -w option below).marginjoin-linesmerge full lines, turns o", 6);
    clap_builder::builder::arg::Arg::short::h6fbe30e3c0b90037(&v0, &v8, 111);
    clap_builder::builder::arg::Arg::long::hc04887159d467920(&v8, &v0, "indentEach line of output shall be preceded by offset <space>s. If the -o option is not specified, the default offset shall be zero. The space taken is in addition to the output line width (see the -w option below).marginjoin-linesmerge full lines, turns o", 6);
    clap_builder::builder::arg::Arg::help::h24f649f3ad09e6ea(&v0, &v8, "Each line of output shall be preceded by offset <space>s. If the -o option is not specified, the default offset shall be zero. The space taken is in addition to the output line width (see the -w option below).marginjoin-linesmerge full lines, turns off -W ", 209);
    clap_builder::builder::arg::Arg::value_name::h519e2f9e978f6422(&v11, &v0, "marginjoin-linesmerge full lines, turns off -W line truncation, no column alignment, --sep-string[=STRING] sets separatorsPrint help informationfiles^[-+]\\d+.*src/uu/pr/src/pr.rs", 6);
    clap_builder::builder::command::Command::arg::h2fcec2b1abfb1661(&v8, &v3, &v11);
    clap_builder::builder::arg::Arg::new::he09af7ac6482218d(&v3, "join-linesmerge full lines, turns off -W line truncation, no column alignment, --sep-string[=STRING] sets separatorsPrint help informationfiles^[-+]\\d+.*src/uu/pr/src/pr.rs", 10);
    clap_builder::builder::arg::Arg::short::h6fbe30e3c0b90037(&v0, &v3, 74);
    clap_builder::builder::arg::Arg::help::h24f649f3ad09e6ea(&v3, &v0, "merge full lines, turns off -W line truncation, no column alignment, --sep-string[=STRING] sets separatorsPrint help informationfiles^[-+]\\d+.*src/uu/pr/src/pr.rs", 106);
    clap_builder::builder::arg::Arg::action::h3fba29a41f1f96e6(&v0, &v3, 2);
    clap_builder::builder::command::Command::arg::h2fcec2b1abfb1661(&v3, &v8, &v0);
    clap_builder::builder::arg::Arg::new::he09af7ac6482218d(&v8, "helpt", 4);
    clap_builder::builder::arg::Arg::long::hc04887159d467920(&v0, &v8, "helpt", 4);
    clap_builder::builder::arg::Arg::help::h24f649f3ad09e6ea(&v8, &v0, "Print help informationfiles^[-+]\\d+.*src/uu/pr/src/pr.rs", 22);
    clap_builder::builder::arg::Arg::action::h3fba29a41f1f96e6(&v0, &v8, 5);
    clap_builder::builder::command::Command::arg::h2fcec2b1abfb1661(&v8, &v3, &v0);
    clap_builder::builder::arg::Arg::new::he09af7ac6482218d(&v3, "files^[-+]\\d+.*src/uu/pr/src/pr.rs", 5);
    clap_builder::builder::arg::Arg::action::h3fba29a41f1f96e6(&v0, &v3, 1);
    clap_builder::builder::arg::Arg::value_hint::ha0b9f5162be44e92(&v3, &v0, 3);
    clap_builder::builder::command::Command::arg::h2fcec2b1abfb1661(a0, &v8, &v3);
    return a0;
}
