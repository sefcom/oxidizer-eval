long long uu_pr::uu_app(unsigned long long a0)
{
    char v0;  // [bp-0xab0]
    unsigned int v1;  // [bp-0x838]
    unsigned int v2;  // [bp-0x834]
    char v3;  // [bp-0x830]
    unsigned int v4;  // [bp-0x5b8]
    unsigned int v5;  // [bp-0x5b4]
    unsigned long long v6;  // [bp-0x574]
    unsigned int v7;  // [bp-0x56c]
    char v8;  // [bp-0x568]
    unsigned long v9;  // [bp-0x2ac]
    unsigned int v10;  // [bp-0x2a4]
    char v11;  // [bp-0x2a0]
    unsigned long long v14;  // rdx

    v8.new(uucore::util_name(), v14);
    v3.version(&v8);
    v8.about(&v3);
    v3.after_help(&v8);
    uucore::format_usage(&v0, "{} [OPTION]... [FILE]...pagesBegin and stop printing with page FIRST_PAGE[:LAST_PAGE]FIRST_PAGE[:LAST_PAGE]headerUse the string header to replace the file name in the header line.STRINGdouble-spaceProduce output that is double spaced. An extra <newline> ch", 24);
    v8.override_usage(&v3, &v0);
    memcpy(&v3, &v8, 700);
    v6 = 2252383929761928 | v9;
    v7 = v10;
    v8.new("pagesBegin and stop printing with page FIRST_PAGE[:LAST_PAGE]FIRST_PAGE[:LAST_PAGE]headerUse the string header to replace the file name in the header line.STRINGdouble-spaceProduce output that is double spaced. An extra <newline> character is output follow", 5);
    v0.long(&v8, "pagesBegin and stop printing with page FIRST_PAGE[:LAST_PAGE]FIRST_PAGE[:LAST_PAGE]headerUse the string header to replace the file name in the header line.STRINGdouble-spaceProduce output that is double spaced. An extra <newline> character is output follow", 5);
    v8.help(&v0, "Begin and stop printing with page FIRST_PAGE[:LAST_PAGE]FIRST_PAGE[:LAST_PAGE]headerUse the string header to replace the file name in the header line.STRINGdouble-spaceProduce output that is double spaced. An extra <newline> character is output following e", 56);
    v0.value_name(&v8, "FIRST_PAGE[:LAST_PAGE]headerUse the string header to replace the file name in the header line.STRINGdouble-spaceProduce output that is double spaced. An extra <newline> character is output following every <newline> found in the input.number-linesProvide wi", 22);
    v8.arg(&v3, &v0);
    v3.new("headerUse the string header to replace the file name in the header line.STRINGdouble-spaceProduce output that is double spaced. An extra <newline> character is output following every <newline> found in the input.number-linesProvide width digit line numberi", 6);
    v0.short(&v3, 104);
    v3.long(&v0, "headerUse the string header to replace the file name in the header line.STRINGdouble-spaceProduce output that is double spaced. An extra <newline> character is output following every <newline> found in the input.number-linesProvide width digit line numberi", 6);
    v0.help(&v3, "Use the string header to replace the file name in the header line.STRINGdouble-spaceProduce output that is double spaced. An extra <newline> character is output following every <newline> found in the input.number-linesProvide width digit line numbering.  T", 66);
    v11.value_name(&v0, "STRINGdouble-spaceProduce output that is double spaced. An extra <newline> character is output following every <newline> found in the input.number-linesProvide width digit line numbering.  The default for width, if not specified, is 5.  The number occupies", 6);
    v3.arg(&v8, &v11);
    v8.new("double-spaceProduce output that is double spaced. An extra <newline> character is output following every <newline> found in the input.number-linesProvide width digit line numbering.  The default for width, if not specified, is 5.  The number occupies the f", 12);
    v0.short(&v8, 100);
    v8.long(&v0, "double-spaceProduce output that is double spaced. An extra <newline> character is output following every <newline> found in the input.number-linesProvide width digit line numbering.  The default for width, if not specified, is 5.  The number occupies the f", 12);
    v0.help(&v8, "Produce output that is double spaced. An extra <newline> character is output following every <newline> found in the input.number-linesProvide width digit line numbering.  The default for width, if not specified, is 5.  The number occupies the first width c", 122);
    v11.action(&v0, 2);
    v8.arg(&v3, &v11);
    v3.new("number-linesProvide width digit line numbering.  The default for width, if not specified, is 5.  The number occupies the first width column positions of each text column or each line of -m output.  If char (any non-digit character) is given, it is appended", 12);
    v0.short(&v3, 110);
    v3.long(&v0, "number-linesProvide width digit line numbering.  The default for width, if not specified, is 5.  The number occupies the first width column positions of each text column or each line of -m output.  If char (any non-digit character) is given, it is appended", 12);
    v0.help(&v3, "Provide width digit line numbering.  The default for width, if not specified, is 5.  The number occupies the first width column positions of each text column or each line of -m output.  If char (any non-digit character) is given, it is appended to the line number to separate it from whatever follows.  The default for char is a <tab>. Line numbers longer than width columns are truncated.", 389);
    memcpy(&v3, &v0, 632);
    v4 = v1 | 32;
    v5 = v2;
    v0.value_name(&v3, "[char][width]first-line-numberstart counting with NUMBER at 1st line of first page printedNUMBERomit-headerWrite neither the five-line identifying header nor the five-line trailer usually supplied for each page. Quit writing after the last line of each fil", 13);
    v3.arg(&v8, &v0);
    v8.new("first-line-numberstart counting with NUMBER at 1st line of first page printedNUMBERomit-headerWrite neither the five-line identifying header nor the five-line trailer usually supplied for each page. Quit writing after the last line of each file without spa", 17);
    v0.short(&v8, 78);
    v8.long(&v0, "first-line-numberstart counting with NUMBER at 1st line of first page printedNUMBERomit-headerWrite neither the five-line identifying header nor the five-line trailer usually supplied for each page. Quit writing after the last line of each file without spa", 17);
    v0.help(&v8, "start counting with NUMBER at 1st line of first page printedNUMBERomit-headerWrite neither the five-line identifying header nor the five-line trailer usually supplied for each page. Quit writing after the last line of each file without spacing to the end o", 60);
    v11.value_name(&v0, "NUMBERomit-headerWrite neither the five-line identifying header nor the five-line trailer usually supplied for each page. Quit writing after the last line of each file without spacing to the end of the page.lengthOverride the 66-line default (default numbe", 6);
    v8.arg(&v3, &v11);
    v3.new("omit-headerWrite neither the five-line identifying header nor the five-line trailer usually supplied for each page. Quit writing after the last line of each file without spacing to the end of the page.lengthOverride the 66-line default (default number of l", 11);
    v0.short(&v3, 116);
    v3.long(&v0, "omit-headerWrite neither the five-line identifying header nor the five-line trailer usually supplied for each page. Quit writing after the last line of each file without spacing to the end of the page.lengthOverride the 66-line default (default number of l", 11);
    v0.help(&v3, "Write neither the five-line identifying header nor the five-line trailer usually supplied for each page. Quit writing after the last line of each file without spacing to the end of the page.lengthOverride the 66-line default (default number of lines of tex", 190);
    v11.action(&v0, 2);
    v3.arg(&v8, &v11);
    v8.new("lengthOverride the 66-line default (default number of lines of text 56, and with -F 63) and reset the page length to lines.  If lines is not greater than the sum  of  both the  header  and trailer depths (in lines), the pr utility shall suppress both the h", 6);
    v0.short(&v8, 108);
    v8.long(&v0, "lengthOverride the 66-line default (default number of lines of text 56, and with -F 63) and reset the page length to lines.  If lines is not greater than the sum  of  both the  header  and trailer depths (in lines), the pr utility shall suppress both the h", 6);
    v0.help(&v8, "Override the 66-line default (default number of lines of text 56, and with -F 63) and reset the page length to lines.  If lines is not greater than the sum  of  both the  header  and trailer depths (in lines), the pr utility shall suppress both the header and trailer, as if the -t option were in effect. ", 305);
    v11.value_name(&v0, "PAGE_LENGTHomit warning when a file cannot be openedform-feedUse a <form-feed> for new pages, instead of the default behavior that uses a sequence of <newline>s.widthSet the width of the line to width column positions for multiple text-column output only. ", 11);
    v8.arg(&v3, &v11);
    v3.new("no-file-warningsidsunaryoperatorArgumentConflict", 16);
    v0.short(&v3, 114);
    v3.long(&v0, "no-file-warningsidsunaryoperatorArgumentConflict", 16);
    v0.help(&v3, "omit warning when a file cannot be openedform-feedUse a <form-feed> for new pages, instead of the default behavior that uses a sequence of <newline>s.widthSet the width of the line to width column positions for multiple text-column output only. If the -w o", 41);
    v11.action(&v0, 2);
    v3.arg(&v8, &v11);
    v8.new("form-feedUse a <form-feed> for new pages, instead of the default behavior that uses a sequence of <newline>s.widthSet the width of the line to width column positions for multiple text-column output only. If the -w option is not specified and the -s option ", 9);
    v0.short(&v8, 70);
    v8.short_alias(&v0);
    v0.long(&v8, "form-feedUse a <form-feed> for new pages, instead of the default behavior that uses a sequence of <newline>s.widthSet the width of the line to width column positions for multiple text-column output only. If the -w option is not specified and the -s option ", 9);
    v8.help(&v0, "Use a <form-feed> for new pages, instead of the default behavior that uses a sequence of <newline>s.widthSet the width of the line to width column positions for multiple text-column output only. If the -w option is not specified and the -s option is not sp", 100);
    v0.action(&v8, 2);
    v8.arg(&v3, &v0);
    v3.new("widthSet the width of the line to width column positions for multiple text-column output only. If the -w option is not specified and the -s option is not specified, the default width shall be 72. If the -w option is not specified and the -s option is speci", 5);
    v0.short(&v3, 119);
    v3.long(&v0, "widthSet the width of the line to width column positions for multiple text-column output only. If the -w option is not specified and the -s option is not specified, the default width shall be 72. If the -w option is not specified and the -s option is speci", 5);
    v0.help(&v3, "Set the width of the line to width column positions for multiple text-column output only. If the -w option is not specified and the -s option is not specified, the default width shall be 72. If the -w option is not specified and the -s option is specified, the default width shall be 512.", 288);
    v11.value_name(&v0, "widthSet the width of the line to width column positions for multiple text-column output only. If the -w option is not specified and the -s option is not specified, the default width shall be 72. If the -w option is not specified and the -s option is speci", 5);
    v3.arg(&v8, &v11);
    v8.new("page-widthset page width to PAGE_WIDTH (72) characters always, truncate lines, except -J option is set, no interference with -S or -sacrossModify the effect of the - column option so that the columns are filled across the page in a  round-robin  order (for", 10);
    v0.short(&v8, 87);
    v8.long(&v0, "page-widthset page width to PAGE_WIDTH (72) characters always, truncate lines, except -J option is set, no interference with -S or -sacrossModify the effect of the - column option so that the columns are filled across the page in a  round-robin  order (for", 10);
    v0.help(&v8, "set page width to PAGE_WIDTH (72) characters always, truncate lines, except -J option is set, no interference with -S or -sacrossModify the effect of the - column option so that the columns are filled across the page in a  round-robin  order (for example, ", 123);
    v11.value_name(&v0, "widthSet the width of the line to width column positions for multiple text-column output only. If the -w option is not specified and the -s option is not specified, the default width shall be 72. If the -w option is not specified and the -s option is speci", 5);
    v8.arg(&v3, &v11);
    v3.new("acrossModify the effect of the - column option so that the columns are filled across the page in a  round-robin  order (for example, when column is 2, the first input line heads column 1, the second heads column 2, the third is the second line in column 1,", 6);
    v0.short(&v3, 97);
    v3.long(&v0, "acrossModify the effect of the - column option so that the columns are filled across the page in a  round-robin  order (for example, when column is 2, the first input line heads column 1, the second heads column 2, the third is the second line in column 1,", 6);
    v0.help(&v3, "Modify the effect of the - column option so that the columns are filled across the page in a  round-robin  order (for example, when column is 2, the first input line heads column 1, the second heads column 2, the third is the second line in column 1, and so on).", 262);
    v11.action(&v0, 2);
    v3.arg(&v8, &v11);
    v8.new("columnProduce multi-column output that is arranged in column columns (the default shall be 1) and is written down each column  in  the order in which the text is received from the input file. This option should not be used with -m. The options -e and -i sh", 6);
    v0.long(&v8, "columnProduce multi-column output that is arranged in column columns (the default shall be 1) and is written down each column  in  the order in which the text is received from the input file. This option should not be used with -m. The options -e and -i sh", 6);
    v8.help(&v0, "Produce multi-column output that is arranged in column columns (the default shall be 1) and is written down each column  in  the order in which the text is received from the input file. This option should not be used with -m. The options -e and -i shall be assumed for multiple text-column output.  Whether or not text columns are produced with identical vertical lengths is unspecified, but a text column shall never exceed the length of the page (see the -l option). When used with -t, use the minimum number of lines to write the output.", 540);
    v0.value_name(&v8, "columnProduce multi-column output that is arranged in column columns (the default shall be 1) and is written down each column  in  the order in which the text is received from the input file. This option should not be used with -m. The options -e and -i sh", 6);
    v8.arg(&v3, &v0);
    v3.new("separatorSeparate text columns by the single character char instead of by the appropriate number of <space>s (default for char is the <tab> character).sep-stringseparate columns by STRING, without -S: Default separator <TAB> with -J and <space> otherwise (", 9);
    v0.short(&v3, 115);
    v3.long(&v0, "separatorSeparate text columns by the single character char instead of by the appropriate number of <space>s (default for char is the <tab> character).sep-stringseparate columns by STRING, without -S: Default separator <TAB> with -J and <space> otherwise (", 9);
    v0.help(&v3, "Separate text columns by the single character char instead of by the appropriate number of <space>s (default for char is the <tab> character).sep-stringseparate columns by STRING, without -S: Default separator <TAB> with -J and <space> otherwise (same as -", 142);
    v11.value_name(&v0, "char", 4);
    v3.arg(&v8, &v11);
    v8.new("sep-stringseparate columns by STRING, without -S: Default separator <TAB> with -J and <space> otherwise (same as -S\" \"), no effect on column optionsstringmergeMerge files. Standard output shall be formatted so the pr utility writes one line from each file ", 10);
    v0.short(&v8, 83);
    v8.long(&v0, "sep-stringseparate columns by STRING, without -S: Default separator <TAB> with -J and <space> otherwise (same as -S\" \"), no effect on column optionsstringmergeMerge files. Standard output shall be formatted so the pr utility writes one line from each file ", 10);
    v0.help(&v8, "separate columns by STRING, without -S: Default separator <TAB> with -J and <space> otherwise (same as -S\" \"), no effect on column optionsstringmergeMerge files. Standard output shall be formatted so the pr utility writes one line from each file specified ", 138);
    v11.value_name(&v0, "stringmergeMerge files. Standard output shall be formatted so the pr utility writes one line from each file specified by a file operand, side by side into text columns of equal fixed widths, in terms of the number of column positions. Implementations shall", 6);
    v8.arg(&v3, &v11);
    v3.new("mergeMerge files. Standard output shall be formatted so the pr utility writes one line from each file specified by a file operand, side by side into text columns of equal fixed widths, in terms of the number of column positions. Implementations shall suppo", 5);
    v0.short(&v3, 109);
    v3.long(&v0, "mergeMerge files. Standard output shall be formatted so the pr utility writes one line from each file specified by a file operand, side by side into text columns of equal fixed widths, in terms of the number of column positions. Implementations shall suppo", 5);
    v0.help(&v3, "Merge files. Standard output shall be formatted so the pr utility writes one line from each file specified by a file operand, side by side into text columns of equal fixed widths, in terms of the number of column positions. Implementations shall support merging of at least nine file operands.", 293);
    v11.action(&v0, 2);
    v3.arg(&v8, &v11);
    v8.new("indentEach line of output shall be preceded by offset <space>s. If the -o option is not specified, the default offset shall be zero. The space taken is in addition to the output line width (see the -w option below).marginjoin-linesmerge full lines, turns o", 6);
    v0.short(&v8, 111);
    v8.long(&v0, "indentEach line of output shall be preceded by offset <space>s. If the -o option is not specified, the default offset shall be zero. The space taken is in addition to the output line width (see the -w option below).marginjoin-linesmerge full lines, turns o", 6);
    v0.help(&v8, "Each line of output shall be preceded by offset <space>s. If the -o option is not specified, the default offset shall be zero. The space taken is in addition to the output line width (see the -w option below).marginjoin-linesmerge full lines, turns off -W ", 209);
    v11.value_name(&v0, "marginjoin-linesmerge full lines, turns off -W line truncation, no column alignment, --sep-string[=STRING] sets separatorsPrint help informationfiles^[-+]\\d+.*src/uu/pr/src/pr.rs", 6);
    v8.arg(&v3, &v11);
    v3.new("join-linesmerge full lines, turns off -W line truncation, no column alignment, --sep-string[=STRING] sets separatorsPrint help informationfiles^[-+]\\d+.*src/uu/pr/src/pr.rs", 10);
    v0.short(&v3, 74);
    v3.help(&v0, "merge full lines, turns off -W line truncation, no column alignment, --sep-string[=STRING] sets separatorsPrint help informationfiles^[-+]\\d+.*src/uu/pr/src/pr.rs", 106);
    v0.action(&v3, 2);
    v3.arg(&v8, &v0);
    v8.new("helpt", 4);
    v0.long(&v8, "helpt", 4);
    v8.help(&v0, "Print help informationfiles^[-+]\\d+.*src/uu/pr/src/pr.rs", 22);
    v0.action(&v8, 5);
    v8.arg(&v3, &v0);
    v3.new("files^[-+]\\d+.*src/uu/pr/src/pr.rs", 5);
    v0.action(&v3, 1);
    v3.value_hint(&v0);
    a0.arg(&v8, &v3);
    return a0;
}
