long long bat::clap_app::build_app(void* a0, unsigned int a1)
{
    char v0;  // [bp-0x1020]
    unsigned int v1;  // [bp-0xdd0]
    unsigned int v2;  // [bp-0xdcc]
    void* v3;  // [bp-0xd58], Other Possible Types: char
    unsigned long long v4;  // [bp-0xd50]
    uint128_t v5;  // [bp-0xd48]
    unsigned long long v6;  // [bp-0xd38]
    int v7;  // [bp-0xd30]
    unsigned long long v8;  // [bp-0xd20]
    void* v9;  // [bp-0xd18]
    unsigned long long v10;  // [bp-0xd10]
    void* v11;  // [bp-0xd08]
    char v12;  // [bp-0xd00], Other Possible Types: unsigned short
    unsigned int v13;  // [bp-0xcff]
    unsigned short v14;  // [bp-0xcfb]
    char v15;  // [bp-0xcf9]
    unsigned int v16;  // [bp-0xb08]
    unsigned int v17;  // [bp-0xb04]
    unsigned int v18;  // [bp-0xa9c]
    unsigned long long v19;  // [bp-0xa9c]
    unsigned long v20;  // [bp-0xa98]
    unsigned int v21;  // [bp-0xa94]
    char v22;  // [bp-0xa90]
    unsigned int v23;  // [bp-0x840]
    unsigned int v24;  // [bp-0x83c]
    char v25;  // [bp-0x7d4], Other Possible Types: unsigned int
    unsigned long v26;  // [bp-0x7d0]
    unsigned int v27;  // [bp-0x7cc]
    int v28;  // [bp-0x7c8], Other Possible Types: char, unsigned long long
    unsigned long long v30;  // [bp-0x7c0]
    int v31;  // [bp-0x7b8], Other Possible Types: unsigned long long
    unsigned long long v32;  // [bp-0x7b0]
    int v33;  // [bp-0x7a8], Other Possible Types: unsigned long long
    unsigned long long v34;  // [bp-0x7a0]
    int v35;  // [bp-0x798], Other Possible Types: unsigned long long
    unsigned long long v36;  // [bp-0x790]
    char v37;  // [bp-0x788]
    void* v38;  // [bp-0x778]
    char v39;  // [bp-0x770]
    unsigned int v40;  // [bp-0x76f]
    unsigned short v41;  // [bp-0x76b]
    char v42;  // [bp-0x769]
    unsigned int v43;  // [bp-0x578]
    unsigned int v44;  // [bp-0x574]
    unsigned long long v45;  // [bp-0x568]
    char v46;  // [bp-0x550], Other Possible Types: unsigned long long
    unsigned long long v47;  // [bp-0x548]
    unsigned long long v48;  // [bp-0x540]
    unsigned long long v49;  // [bp-0x538]
    char v50;  // [bp-0x288], Other Possible Types: unsigned long long
    unsigned long long v51;  // [bp-0x280]
    unsigned long long v52;  // [bp-0x278]
    unsigned long long v53;  // [bp-0x270]
    char v55;  // bpl
    unsigned long long v56[3];  // rax
    int v57;  // xmm2
    int v58;  // xmm3

    v55 = 2;
    if (a1)
        v55 = (char)bat::app::env_no_color() * 2;
    v22.new("batA cat(1) clone with wings.A cat(1) clone with syntax highlighting and Git integration.File(s) to print / concatenate. Use '-' for standard input.File(s) to print / concatenate. Use a dash ('-') or no argument at all to read from standard input.Show non-", 3);
    v56 = once_cell::sync::OnceCell<T>::get_or_try_init();
    v3.version(&v22, v56[1], v56[2]);
    v22.color(&v3, v55);
    ::libc.so.0::memcpy(&v3, &v22, 700);
    v19 = 0x110000001102400 | *((long long *)&v25);
    v21 = v27;
    v22.max_term_width(&v3);
    v3.about(&v22, "A cat(1) clone with wings.A cat(1) clone with syntax highlighting and Git integration.File(s) to print / concatenate. Use '-' for standard input.File(s) to print / concatenate. Use a dash ('-') or no argument at all to read from standard input.Show non-pri", 26);
    v22.long_about(&v3);
    v3.new("FILE", 4);
    v0.help(&v3, "File(s) to print / concatenate. Use '-' for standard input.File(s) to print / concatenate. Use a dash ('-') or no argument at all to read from standard input.Show non-printable characters (space, tab, newline, ..).Show non-printable characters like space, ", 59);
    v3.long_help(&v0, "File(s) to print / concatenate. Use a dash ('-') or no argument at all to read from standard input.Show non-printable characters (space, tab, newline, ..).Show non-printable characters like space, tab or newline. This option can also be used to print binar", 99);
    v0.num_args(&v3);
    v45 = 3;
    v46.value_parser(&v0, &v45);
    v3.arg(&v22, &v46);
    v22.new("show-allnotation", 8);
    v0.long(&v22, "show-allnotation", 8);
    v22.alias(&v0, "show-nonprintableMust be one file name per input type.file-name-numberstyles present", 17);
    v0.short(&v22, 65);
    v22.action(&v0, 2);
    v0.conflicts_with(&v22, "languageshow-allnotation", 8);
    v22.help(&v0, "Show non-printable characters (space, tab, newline, ..).Show non-printable characters like space, tab or newline. This option can also be used to print binary files. Use '--tabs' to control the width of the tab-placeholders.Set notation for non-printable c", 56);
    v0.long_help(&v22, "Show non-printable characters like space, tab or newline. This option can also be used to print binary files. Use '--tabs' to control the width of the tab-placeholders.Set notation for non-printable characters.", 168);
    v22.arg(&v3, &v0);
    v3.new("nonprintable-notationbinarychop-long-linesforce-colorizationcolordecorationsstrip-ansiline-rangediff-contextpageritalic-texthighlight-lineset-terminal-titlesqueeze-blanksqueeze-limitshow-nonprintableMust be one file name per input type.file-name-numberstyl", 21);
    v0.long(&v3, "nonprintable-notationbinarychop-long-linesforce-colorizationcolordecorationsstrip-ansiline-rangediff-contextpageritalic-texthighlight-lineset-terminal-titlesqueeze-blanksqueeze-limitshow-nonprintableMust be one file name per input type.file-name-numberstyl", 21);
    v3.action(&v0, 0);
    v0.default_value(&v3, "unicodecaretinternal error: entered unreachable code: other values for --nonprintable-notation are not allowed", 7);
    v46 = "unicodecaretinternal error: entered unreachable code: other values for --nonprintable-notation are not allowed";
    v47 = 7;
    v48 = "caretinternal error: entered unreachable code: other values for --nonprintable-notation are not allowed";
    v49 = 5;
    v3.value_parser(&v0, &v46);
    v0.value_name(&v3, "notation", 8);
    ::libc.so.0::memcpy(&v3, &v0, 592);
    v16 = 0x400 | v1;
    v17 = v2;
    v0.help(&v3, "Set notation for non-printable characters.", 42);
    v46.long_help(&v0, &g_4860a4, 121);
    v3.arg(&v22, &v46);
    v22.new("binarychop-long-linesforce-colorizationcolordecorationsstrip-ansiline-rangediff-contextpageritalic-texthighlight-lineset-terminal-titlesqueeze-blanksqueeze-limitshow-nonprintableMust be one file name per input type.file-name-numberstyles present", 6);
    v0.long(&v22, "binarychop-long-linesforce-colorizationcolordecorationsstrip-ansiline-rangediff-contextpageritalic-texthighlight-lineset-terminal-titlesqueeze-blanksqueeze-limitshow-nonprintableMust be one file name per input type.file-name-numberstyles present", 6);
    v22.action(&v0, 0);
    v0.default_value(&v22, "no-printinginternal error: entered unreachable code: other values for --binary are not allowed", 11);
    v46 = "no-printinginternal error: entered unreachable code: other values for --binary are not allowed";
    v47 = 11;
    v48 = "as-textno-printinginternal error: entered unreachable code: other values for --binary are not allowed";
    v49 = 7;
    v22.value_parser(&v0, &v46);
    v0.value_name(&v22, "behavior", 8);
    ::libc.so.0::memcpy(&v22, &v0, 592);
    v23 = 0x400 | v1;
    v24 = v2;
    v0.help(&v22, "How to treat binary content. (default: no-printing)How to treat binary content. (default: no-printing)\n\nPossible values:\n  * no-printing: do not print any binary content\n  * as-text: treat binary content as normal textShow plain style (alias for '--style=p", 51);
    v46.long_help(&v0, "How to treat binary content. (default: no-printing)\n\nPossible values:\n  * no-printing: do not print any binary content\n  * as-text: treat binary content as normal textShow plain style (alias for '--style=plain').Only show plain style, no decorations. This ", 167);
    v22.arg(&v3, &v46);
    v3.new("plainpagingno-paginglist-themesignored-suffixmap-syntaxterminal-widthnonprintable-notationbinarychop-long-linesforce-colorizationcolordecorationsstrip-ansiline-rangediff-contextpageritalic-texthighlight-lineset-terminal-titlesqueeze-blanksqueeze-limitshow-", 5);
    v0.overrides_with(&v3, "plainpagingno-paginglist-themesignored-suffixmap-syntaxterminal-widthnonprintable-notationbinarychop-long-linesforce-colorizationcolordecorationsstrip-ansiline-rangediff-contextpageritalic-texthighlight-lineset-terminal-titlesqueeze-blanksqueeze-limitshow-", 5);
    v3.overrides_with(&v0, "numberstyles present", 6);
    v0.short(&v3, 112);
    v3.long(&v0, "plainpagingno-paginglist-themesignored-suffixmap-syntaxterminal-widthnonprintable-notationbinarychop-long-linesforce-colorizationcolordecorationsstrip-ansiline-rangediff-contextpageritalic-texthighlight-lineset-terminal-titlesqueeze-blanksqueeze-limitshow-", 5);
    v0.action(&v3, 4);
    v3.help(&v0, "Show plain style (alias for '--style=plain').Only show plain style, no decorations. This is an alias for '--style=plain'. When '-p' is used twice ('-pp'), it also disables automatic paging (alias for '--style=plain --paging=never').Set the language for syn", 45);
    v0.long_help(&v3, "Only show plain style, no decorations. This is an alias for '--style=plain'. When '-p' is used twice ('-pp'), it also disables automatic paging (alias for '--style=plain --paging=never').Set the language for syntax highlighting.Explicitly set the language ", 187);
    v3.arg(&v22, &v0);
    v22.new("languageshow-allnotation", 8);
    v0.short(&v22, 108);
    v22.long(&v0, "languageshow-allnotation", 8);
    v0.overrides_with(&v22, "languageshow-allnotation", 8);
    v22.help(&v0, "Set the language for syntax highlighting.Explicitly set the language for syntax highlighting. The language can be specified as a name (like 'C++' or 'LaTeX') or possible file extension (like 'cpp', 'hpp' or 'md'). Use '--list-languages' to show all support", 41);
    v0.long_help(&v22, "Explicitly set the language for syntax highlighting. The language can be specified as a name (like 'C++' or 'LaTeX') or possible file extension (like 'cpp', 'hpp' or 'md'). Use '--list-languages' to show all supported language names and file extensions.N:M", 253);
    v22.arg(&v3, &v0);
    v3.new("highlight-lineset-terminal-titlesqueeze-blanksqueeze-limitshow-nonprintableMust be one file name per input type.file-name-numberstyles present", 14);
    v0.long(&v3, "highlight-lineset-terminal-titlesqueeze-blanksqueeze-limitshow-nonprintableMust be one file name per input type.file-name-numberstyles present", 14);
    v3.short(&v0, 72);
    v0.action(&v3, 1);
    v3.value_name(&v0, "N:MHighlight lines N through M.Highlight the specified line ranges with a different background color For example:\n  '--highlight-line 40' highlights line 40\n  '--highlight-line 30:40' highlights lines 30 to 40\n  '--highlight-line :40' highlights lines 1 to", 3);
    v0.help(&v3, "Highlight lines N through M.Highlight the specified line ranges with a different background color For example:\n  '--highlight-line 40' highlights line 40\n  '--highlight-line 30:40' highlights lines 30 to 40\n  '--highlight-line :40' highlights lines 1 to 40", 28);
    v46.long_help(&v0, "Highlight the specified line ranges with a different background color For example:\n  '--highlight-line 40' highlights line 40\n  '--highlight-line 30:40' highlights lines 30 to 40\n  '--highlight-line :40' highlights lines 1 to 40\n  '--highlight-line 40:' highlights lines 40 to the end of the file\n  '--highlight-line 30:+10' highlights lines 30 to 40", 350);
    v3.arg(&v22, &v46);
    v22.new("file-name-numberstyles present", 9);
    v0.long(&v22, "file-name-numberstyles present", 9);
    v22.action(&v0, 1);
    v0.value_name(&v22, "name", 4);
    v22.value_parser(&v0, &v45);
    v0.help(&v22, "Specify the name to display for a file.Specify the name to display for a file. Useful when piping data to bat from STDIN when bat does not otherwise know the filename. Note that the provided file name is also used for syntax detection.Only show lines that ", 39);
    v22.long_help(&v0, "Specify the name to display for a file. Useful when piping data to bat from STDIN when bat does not otherwise know the filename. Note that the provided file name is also used for syntax detection.Only show lines that have been added/removed/modified.Only s", 196);
    v46.arg(&v3, &v22);
    ::libc.so.0::memcpy(&v22, &v46, 712);
    v3.new("diff", 4);
    v0.long(&v3, "diff", 4);
    v3.short(&v0, 100);
    v0.action(&v3, 2);
    v3.conflicts_with(&v0, "line-rangediff-contextpageritalic-texthighlight-lineset-terminal-titlesqueeze-blanksqueeze-limitshow-nonprintableMust be one file name per input type.file-name-numberstyles present", 10);
    v0.help(&v3, "Only show lines that have been added/removed/modified.Only show lines that have been added/removed/modified with respect to the Git index. Use --diff-context=N to control how much context you want to see.NInclude N lines of context around added/removed/mod", 54);
    v28.long_help(&v0, "Only show lines that have been added/removed/modified with respect to the Git index. Use --diff-context=N to control how much context you want to see.NInclude N lines of context around added/removed/modified lines when using '--diff'.TSet the tab width to ", 150);
    v3.arg(&v22, &v28);
    v22.new("diff-contextpageritalic-texthighlight-lineset-terminal-titlesqueeze-blanksqueeze-limitshow-nonprintableMust be one file name per input type.file-name-numberstyles present", 12);
    v0.long(&v22, "diff-contextpageritalic-texthighlight-lineset-terminal-titlesqueeze-blanksqueeze-limitshow-nonprintableMust be one file name per input type.file-name-numberstyles present", 12);
    v22.overrides_with(&v0, "diff-contextpageritalic-texthighlight-lineset-terminal-titlesqueeze-blanksqueeze-limitshow-nonprintableMust be one file name per input type.file-name-numberstyles present", 12);
    v0.value_name(&v22, "NInclude N lines of context around added/removed/modified lines when using '--diff'.TSet the tab width to T spaces.Set the tab width to T spaces. Use a width of 0 to pass tabs through directlySpecify the text-wrapping mode (*auto*, never, character).Specif", 1);
    v22.value_parser(&v0);
    ::libc.so.0::memcpy(&v0, &v22, 592);
    v1 = 0x1000 | v23;
    v2 = v24;
    v22.long_help(&v0, "Include N lines of context around added/removed/modified lines when using '--diff'.TSet the tab width to T spaces.Set the tab width to T spaces. Use a width of 0 to pass tabs through directlySpecify the text-wrapping mode (*auto*, never, character).Specify", 83);
    v46.arg(&v3, &v22);
    ::libc.so.0::memcpy(&v22, &v46, 712);
    v3.new("tabsgridQuitbyten", 4);
    v0.long(&v3, "tabsgridQuitbyten", 4);
    v3.overrides_with(&v0, "tabsgridQuitbyten", 4);
    v0.value_name(&v3, "TSet the tab width to T spaces.Set the tab width to T spaces. Use a width of 0 to pass tabs through directlySpecify the text-wrapping mode (*auto*, never, character).Specify the text-wrapping mode (*auto*, never, character). The '--terminal-width' option c", 1);
    v3.value_parser(&v0);
    v0.help(&v3, "Set the tab width to T spaces.Set the tab width to T spaces. Use a width of 0 to pass tabs through directlySpecify the text-wrapping mode (*auto*, never, character).Specify the text-wrapping mode (*auto*, never, character). The '--terminal-width' option ca", 30);
    v28.long_help(&v0, "Set the tab width to T spaces. Use a width of 0 to pass tabs through directlySpecify the text-wrapping mode (*auto*, never, character).Specify the text-wrapping mode (*auto*, never, character). The '--terminal-width' option can be used in addition to contr", 77);
    v3.arg(&v22, &v28);
    v22.new("wrapRustdumb", 4);
    v0.long(&v22, "wrapRustdumb", 4);
    v22.overrides_with(&v0, "wrapRustdumb", 4);
    v0.value_name(&v22, "mode", 4);
    v28 = "auto.inf";
    v30 = 4;
    v31 = "neverinternal error: entered unreachable code: other values for --paging are not allowed";
    v32 = 5;
    v33 = "characterinternal error: entered unreachable code: other values for --wrap are not allowedinternal error: entered unreachable code: other values for --color are not allowedinternal error: entered unreachable code: other values for --strip-ansi are not allowed";
    v34 = 9;
    v22.value_parser(&v0, &v28);
    v0.default_value(&v22, "auto.inf", 4);
    ::libc.so.0::memcpy(&v22, &v0, 592);
    v23 = 0x400 | v1;
    v24 = v2;
    v0.help(&v22, "Specify the text-wrapping mode (*auto*, never, character).Specify the text-wrapping mode (*auto*, never, character). The '--terminal-width' option can be used in addition to control the output width.Truncate all lines longer than screen width. Alias for '-", 58);
    v28.long_help(&v0, "Specify the text-wrapping mode (*auto*, never, character). The '--terminal-width' option can be used in addition to control the output width.Truncate all lines longer than screen width. Alias for '--wrap=never'.widthExplicitly set the width of the terminal", 141);
    v22.arg(&v3, &v28);
    v3.new("chop-long-linesforce-colorizationcolordecorationsstrip-ansiline-rangediff-contextpageritalic-texthighlight-lineset-terminal-titlesqueeze-blanksqueeze-limitshow-nonprintableMust be one file name per input type.file-name-numberstyles present", 15);
    v0.long(&v3, "chop-long-linesforce-colorizationcolordecorationsstrip-ansiline-rangediff-contextpageritalic-texthighlight-lineset-terminal-titlesqueeze-blanksqueeze-limitshow-nonprintableMust be one file name per input type.file-name-numberstyles present", 15);
    v3.short(&v0, 83);
    v0.action(&v3, 2);
    v28.help(&v0, "Truncate all lines longer than screen width. Alias for '--wrap=never'.widthExplicitly set the width of the terminal instead of determining it automatically. If prefixed with '+' or '-', the value will be treated as an offset to the actual terminal width. S", 70);
    v3.arg(&v22, &v28);
    v22.new("terminal-widthnonprintable-notationbinarychop-long-linesforce-colorizationcolordecorationsstrip-ansiline-rangediff-contextpageritalic-texthighlight-lineset-terminal-titlesqueeze-blanksqueeze-limitshow-nonprintableMust be one file name per input type.file-n", 14);
    v0.long(&v22, "terminal-widthnonprintable-notationbinarychop-long-linesforce-colorizationcolordecorationsstrip-ansiline-rangediff-contextpageritalic-texthighlight-lineset-terminal-titlesqueeze-blanksqueeze-limitshow-nonprintableMust be one file name per input type.file-n", 14);
    v22.value_name(&v0, "widthExplicitly set the width of the terminal instead of determining it automatically. If prefixed with '+' or '-', the value will be treated as an offset to the actual terminal width. See also: '--wrap'.Show line numbers (alias for '--style=numbers').Only", 5);
    ::libc.so.0::memcpy(&v0, &v22, 592);
    v1 = 4128 | v23;
    v2 = v24;
    v22.value_parser(&v0);
    v0.help(&v22, "Explicitly set the width of the terminal instead of determining it automatically. If prefixed with '+' or '-', the value will be treated as an offset to the actual terminal width. See also: '--wrap'.Show line numbers (alias for '--style=numbers').Only show", 199);
    v22.arg(&v3, &v0);
    v3.new("numberstyles present", 6);
    v0.long(&v3, "numberstyles present", 6);
    v3.overrides_with(&v0, "numberstyles present", 6);
    v0.short(&v3, 110);
    v3.action(&v0, 2);
    v0.help(&v3, "Show line numbers (alias for '--style=numbers').Only show line numbers, no other decorations. This is an alias for '--style=numbers'When to use colors (*auto*, never, always).Specify when to use colored output. The automatic mode only enables colors if an ", 48);
    v28.long_help(&v0, "Only show line numbers, no other decorations. This is an alias for '--style=numbers'When to use colors (*auto*, never, always).Specify when to use colored output. The automatic mode only enables colors if an interactive terminal is detected - colors are au", 84);
    v3.arg(&v22, &v28);
    v22.new("colordecorationsstrip-ansiline-rangediff-contextpageritalic-texthighlight-lineset-terminal-titlesqueeze-blanksqueeze-limitshow-nonprintableMust be one file name per input type.file-name-numberstyles present", 5);
    v0.long(&v22, "colordecorationsstrip-ansiline-rangediff-contextpageritalic-texthighlight-lineset-terminal-titlesqueeze-blanksqueeze-limitshow-nonprintableMust be one file name per input type.file-name-numberstyles present", 5);
    v22.overrides_with(&v0, "colordecorationsstrip-ansiline-rangediff-contextpageritalic-texthighlight-lineset-terminal-titlesqueeze-blanksqueeze-limitshow-nonprintableMust be one file name per input type.file-name-numberstyles present", 5);
    v0.value_name(&v22, "when -- ", 4);
    v28 = "auto.inf";
    v30 = 4;
    v31 = "neverinternal error: entered unreachable code: other values for --paging are not allowed";
    v32 = 5;
    v33 = "alwaysneverinternal error: entered unreachable code: other values for --paging are not allowed";
    v34 = 6;
    v22.value_parser(&v0, &v28);
    ::libc.so.0::memcpy(&v0, &v22, 592);
    v1 = 0x400 | v23;
    v2 = v24;
    v22.default_value(&v0, "auto.inf", 4);
    v0.help(&v22, "When to use colors (*auto*, never, always).Specify when to use colored output. The automatic mode only enables colors if an interactive terminal is detected - colors are automatically disabled if the output goes to a pipe.\nPossible values: *auto*, never, a", 43);
    v28.long_help(&v0, "Specify when to use colored output. The automatic mode only enables colors if an interactive terminal is detected - colors are automatically disabled if the output goes to a pipe.\nPossible values: *auto*, never, always.Use italics in output (always, *never", 219);
    v22.arg(&v3, &v28);
    v3.new("italic-texthighlight-lineset-terminal-titlesqueeze-blanksqueeze-limitshow-nonprintableMust be one file name per input type.file-name-numberstyles present", 11);
    v0.long(&v3, "italic-texthighlight-lineset-terminal-titlesqueeze-blanksqueeze-limitshow-nonprintableMust be one file name per input type.file-name-numberstyles present", 11);
    v3.value_name(&v0, "when -- ", 4);
    v28 = "alwaysneverinternal error: entered unreachable code: other values for --paging are not allowed";
    v30 = 6;
    v31 = "neverinternal error: entered unreachable code: other values for --paging are not allowed";
    v32 = 5;
    v0.value_parser(&v3, &v28);
    v3.default_value(&v0, "neverinternal error: entered unreachable code: other values for --paging are not allowed", 5);
    ::libc.so.0::memcpy(&v0, &v3, 592);
    v1 = 0x400 | v16;
    v2 = v17;
    v3.help(&v0, "Use italics in output (always, *never*)Specify when to use ANSI sequences for italic text in the output. Possible values: always, *never*.When to show the decorations (*auto*, never, always).Specify when to use the decorations that have been specified via ", 39);
    v0.long_help(&v3, "Specify when to use ANSI sequences for italic text in the output. Possible values: always, *never*.When to show the decorations (*auto*, never, always).Specify when to use the decorations that have been specified via '--style'. The automatic mode only enab", 99);
    v3.arg(&v22, &v0);
    v22.new("decorationsstrip-ansiline-rangediff-contextpageritalic-texthighlight-lineset-terminal-titlesqueeze-blanksqueeze-limitshow-nonprintableMust be one file name per input type.file-name-numberstyles present", 11);
    v0.long(&v22, "decorationsstrip-ansiline-rangediff-contextpageritalic-texthighlight-lineset-terminal-titlesqueeze-blanksqueeze-limitshow-nonprintableMust be one file name per input type.file-name-numberstyles present", 11);
    v22.overrides_with(&v0, "decorationsstrip-ansiline-rangediff-contextpageritalic-texthighlight-lineset-terminal-titlesqueeze-blanksqueeze-limitshow-nonprintableMust be one file name per input type.file-name-numberstyles present", 11);
    v0.value_name(&v22, "when -- ", 4);
    v28 = "auto.inf";
    v30 = 4;
    v31 = "neverinternal error: entered unreachable code: other values for --paging are not allowed";
    v32 = 5;
    v33 = "alwaysneverinternal error: entered unreachable code: other values for --paging are not allowed";
    v34 = 6;
    v22.value_parser(&v0, &v28);
    v0.default_value(&v22, "auto.inf", 4);
    ::libc.so.0::memcpy(&v22, &v0, 592);
    v23 = 0x400 | v1;
    v24 = v2;
    v0.help(&v22, "When to show the decorations (*auto*, never, always).Specify when to use the decorations that have been specified via '--style'. The automatic mode only enables decorations if an interactive terminal is detected. Possible values: *auto*, never, always.Alia", 53);
    v28.long_help(&v0, "Specify when to use the decorations that have been specified via '--style'. The automatic mode only enables decorations if an interactive terminal is detected. Possible values: *auto*, never, always.Alias for '--decorations=always --color=always'. This is ", 199);
    v22.arg(&v3, &v28);
    v3.new("force-colorizationcolordecorationsstrip-ansiline-rangediff-contextpageritalic-texthighlight-lineset-terminal-titlesqueeze-blanksqueeze-limitshow-nonprintableMust be one file name per input type.file-name-numberstyles present", 18);
    v0.long(&v3, "force-colorizationcolordecorationsstrip-ansiline-rangediff-contextpageritalic-texthighlight-lineset-terminal-titlesqueeze-blanksqueeze-limitshow-nonprintableMust be one file name per input type.file-name-numberstyles present", 18);
    v3.short(&v0, 102);
    v0.action(&v3, 2);
    v3.conflicts_with(&v0, "colordecorationsstrip-ansiline-rangediff-contextpageritalic-texthighlight-lineset-terminal-titlesqueeze-blanksqueeze-limitshow-nonprintableMust be one file name per input type.file-name-numberstyles present", 5);
    v0.conflicts_with(&v3, "decorationsstrip-ansiline-rangediff-contextpageritalic-texthighlight-lineset-terminal-titlesqueeze-blanksqueeze-limitshow-nonprintableMust be one file name per input type.file-name-numberstyles present", 11);
    v3.overrides_with(&v0, "force-colorizationcolordecorationsstrip-ansiline-rangediff-contextpageritalic-texthighlight-lineset-terminal-titlesqueeze-blanksqueeze-limitshow-nonprintableMust be one file name per input type.file-name-numberstyles present", 18);
    ::libc.so.0::memcpy(&v0, &v3, 592);
    v1 = 0x1000 | v16;
    v2 = v17;
    v28.long_help(&v0, "Alias for '--decorations=always --color=always'. This is useful if the output of bat is piped to another program, but you want to keep the colorization/decorations.Specify when to use the pager, or use `-P` to disable (*auto*, never, always).Specify when t", 164);
    v3.arg(&v22, &v28);
    v22.new("pagingno-paginglist-themesignored-suffixmap-syntaxterminal-widthnonprintable-notationbinarychop-long-linesforce-colorizationcolordecorationsstrip-ansiline-rangediff-contextpageritalic-texthighlight-lineset-terminal-titlesqueeze-blanksqueeze-limitshow-nonpr", 6);
    v0.long(&v22, "pagingno-paginglist-themesignored-suffixmap-syntaxterminal-widthnonprintable-notationbinarychop-long-linesforce-colorizationcolordecorationsstrip-ansiline-rangediff-contextpageritalic-texthighlight-lineset-terminal-titlesqueeze-blanksqueeze-limitshow-nonpr", 6);
    v22.overrides_with(&v0, "pagingno-paginglist-themesignored-suffixmap-syntaxterminal-widthnonprintable-notationbinarychop-long-linesforce-colorizationcolordecorationsstrip-ansiline-rangediff-contextpageritalic-texthighlight-lineset-terminal-titlesqueeze-blanksqueeze-limitshow-nonpr", 6);
    v0.overrides_with(&v22, "no-paginglist-themesignored-suffixmap-syntaxterminal-widthnonprintable-notationbinarychop-long-linesforce-colorizationcolordecorationsstrip-ansiline-rangediff-contextpageritalic-texthighlight-lineset-terminal-titlesqueeze-blanksqueeze-limitshow-nonprintabl", 9);
    v22.value_name(&v0, "when -- ", 4);
    v28 = "auto.inf";
    v30 = 4;
    v31 = "neverinternal error: entered unreachable code: other values for --paging are not allowed";
    v32 = 5;
    v33 = "alwaysneverinternal error: entered unreachable code: other values for --paging are not allowed";
    v34 = 6;
    v0.value_parser(&v22, &v28);
    v22.default_value(&v0, "auto.inf", 4);
    ::libc.so.0::memcpy(&v0, &v22, 592);
    v1 = 0x400 | v23;
    v2 = v24;
    v22.help(&v0, "Specify when to use the pager, or use `-P` to disable (*auto*, never, always).Specify when to use the pager. To disable the pager, use '--paging=never' or its alias,'-P'. To disable the pager permanently, set BAT_PAGING to 'never'. To control which pager i", 78);
    v0.long_help(&v22, "Specify when to use the pager. To disable the pager, use '--paging=never' or its alias,'-P'. To disable the pager permanently, set BAT_PAGING to 'never'. To control which pager is used, see the '--pager' option. Possible values: *auto*, never, always.Alias", 251);
    v22.arg(&v3, &v0);
    v3.new("no-paginglist-themesignored-suffixmap-syntaxterminal-widthnonprintable-notationbinarychop-long-linesforce-colorizationcolordecorationsstrip-ansiline-rangediff-contextpageritalic-texthighlight-lineset-terminal-titlesqueeze-blanksqueeze-limitshow-nonprintabl", 9);
    v0.short(&v3, 80);
    v3.long(&v0, "no-paginglist-themesignored-suffixmap-syntaxterminal-widthnonprintable-notationbinarychop-long-linesforce-colorizationcolordecorationsstrip-ansiline-rangediff-contextpageritalic-texthighlight-lineset-terminal-titlesqueeze-blanksqueeze-limitshow-nonprintabl", 9);
    v0.alias(&v3, "no-pagercapacity", 8);
    v3.action(&v0, 2);
    v0.overrides_with(&v3, "no-paginglist-themesignored-suffixmap-syntaxterminal-widthnonprintable-notationbinarychop-long-linesforce-colorizationcolordecorationsstrip-ansiline-rangediff-contextpageritalic-texthighlight-lineset-terminal-titlesqueeze-blanksqueeze-limitshow-nonprintabl", 9);
    ::libc.so.0::memcpy(&v3, &v0, 592);
    v16 = 4100 | v1;
    v17 = v2;
    v0.help(&v3, "Alias for '--paging=never'commandDetermine which pager to use.Determine which pager is used. This option will override the PAGER and BAT_PAGER environment variables. The default pager is 'less'. If you provide '--pager=builtin', use the built-in 'minus' pa", 26);
    v3.arg(&v22, &v0);
    v22.new("pageritalic-texthighlight-lineset-terminal-titlesqueeze-blanksqueeze-limitshow-nonprintableMust be one file name per input type.file-name-numberstyles present", 5);
    v0.long(&v22, "pageritalic-texthighlight-lineset-terminal-titlesqueeze-blanksqueeze-limitshow-nonprintableMust be one file name per input type.file-name-numberstyles present", 5);
    v22.overrides_with(&v0, "pageritalic-texthighlight-lineset-terminal-titlesqueeze-blanksqueeze-limitshow-nonprintableMust be one file name per input type.file-name-numberstyles present", 5);
    v0.value_name(&v22, "commandDetermine which pager to use.Determine which pager is used. This option will override the PAGER and BAT_PAGER environment variables. The default pager is 'less'. If you provide '--pager=builtin', use the built-in 'minus' pager. To control when the p", 7);
    ::libc.so.0::memcpy(&v22, &v0, 592);
    v23 = 0x1000 | v1;
    v24 = v2;
    v0.help(&v22, "Determine which pager to use.Determine which pager is used. This option will override the PAGER and BAT_PAGER environment variables. The default pager is 'less'. If you provide '--pager=builtin', use the built-in 'minus' pager. To control when the pager is", 29);
    v28.long_help(&v0, "Determine which pager is used. This option will override the PAGER and BAT_PAGER environment variables. The default pager is \'less\'. If you provide \'--pager=builtin\', use the built-in \'minus\' pager. To control when the pager is used, see the \'--paging\' option. Example: \'--pager \"less -RF\"\'.", 291);
    v22.arg(&v3, &v28);
    v3.new("map-syntaxterminal-widthnonprintable-notationbinarychop-long-linesforce-colorizationcolordecorationsstrip-ansiline-rangediff-contextpageritalic-texthighlight-lineset-terminal-titlesqueeze-blanksqueeze-limitshow-nonprintableMust be one file name per input t", 10);
    v0.short(&v3, 109);
    v3.long(&v0, "map-syntaxterminal-widthnonprintable-notationbinarychop-long-linesforce-colorizationcolordecorationsstrip-ansiline-rangediff-contextpageritalic-texthighlight-lineset-terminal-titlesqueeze-blanksqueeze-limitshow-nonprintableMust be one file name per input t", 10);
    v0.action(&v3, 1);
    v3.value_name(&v0, "glob:syntaxUse the specified syntax for files matching the glob pattern ('*.cpp:C++').Map a glob pattern to an existing syntax name. The glob pattern is matched on the full path and the filename. For example, to highlight *.build files with the Python synt", 11);
    v0.help(&v3, "Use the specified syntax for files matching the glob pattern ('*.cpp:C++').Map a glob pattern to an existing syntax name. The glob pattern is matched on the full path and the filename. For example, to highlight *.build files with the Python syntax, use -m ", 75);
    v28.long_help(&v0, "Map a glob pattern to an existing syntax name. The glob pattern is matched on the full path and the filename. For example, to highlight *.build files with the Python syntax, use -m '*.build:Python'. To highlight files named '.myignore' with the Git Ignore syntax, use -m '.myignore:Git Ignore'. Note that the right-hand side is the *name* of the syntax, not a file extension.", 375);
    v3.arg(&v22, &v28);
    v22.new("ignored-suffixmap-syntaxterminal-widthnonprintable-notationbinarychop-long-linesforce-colorizationcolordecorationsstrip-ansiline-rangediff-contextpageritalic-texthighlight-lineset-terminal-titlesqueeze-blanksqueeze-limitshow-nonprintableMust be one file na", 14);
    v0.action(&v22, 1);
    v22.long(&v0, "ignored-suffixmap-syntaxterminal-widthnonprintable-notationbinarychop-long-linesforce-colorizationcolordecorationsstrip-ansiline-rangediff-contextpageritalic-texthighlight-lineset-terminal-titlesqueeze-blanksqueeze-limitshow-nonprintableMust be one file na", 14);
    ::libc.so.0::memcpy(&v0, &v22, 592);
    v1 = 0x1000 | v23;
    v2 = v24;
    v28.help(&v0, "Ignore extension. For example:\n  \'bat --ignored-suffix \".dev\" my_file.json.dev\' will use JSON syntax, and ignore \'.dev\'Set the color theme for syntax highlighting.Set the theme for syntax highlighting. Use \'--list-themes\' to see all available themes. To se", 119);
    v22.arg(&v3, &v28);
    v3.new("themetheme-darktheme-lightthemes.bintheme set cachesyntaxes.binmetadata.yamlmetadata fileThe binary caches for the user-customized syntaxes and themes in '' are not compatible with this version of bat (0.25.0). To solve this, either rebuild the cache (bat ", 5);
    v0.long(&v3, "themetheme-darktheme-lightthemes.bintheme set cachesyntaxes.binmetadata.yamlmetadata fileThe binary caches for the user-customized syntaxes and themes in '' are not compatible with this version of bat (0.25.0). To solve this, either rebuild the cache (bat ", 5);
    v3.overrides_with(&v0, "themetheme-darktheme-lightthemes.bintheme set cachesyntaxes.binmetadata.yamlmetadata fileThe binary caches for the user-customized syntaxes and themes in '' are not compatible with this version of bat (0.25.0). To solve this, either rebuild the cache (bat ", 5);
    v0.help(&v3, "Set the color theme for syntax highlighting.Set the theme for syntax highlighting. Use \'--list-themes\' to see all available themes. To set a default theme, add the \'--theme=\"...\"\' option to the configuration file or export the BAT_THEME environment variabl", 44);
    v28.long_help(&v0, "Set the theme for syntax highlighting. Use \'--list-themes\' to see all available themes. To set a default theme, add the \'--theme=\"...\"\' option to the configuration file or export the BAT_THEME environment variable (e.g.: export BAT_THEME=\"...\").\n\nSpecial values:\n\n  * auto: Picks a dark or light theme depending on the terminal\'s colors (default).\n          Use \'--theme-light\' and \'--theme-dark\' to customize the selected theme.\n    * auto:always: Detect the terminal\'s colors even when the output is redirected.\n    * auto:system: Detect the color scheme from the system-wide preference (macOS only).\n  * dark: Use the dark theme specified by \'--theme-dark\'.\n  * light: Use the light theme specified by \'--theme-light\'.", 721);
    v3.arg(&v22, &v28);
    v22.new("theme-lightthemes.bintheme set cachesyntaxes.binmetadata.yamlmetadata fileThe binary caches for the user-customized syntaxes and themes in '' are not compatible with this version of bat (0.25.0). To solve this, either rebuild the cache (bat cache --build) ", 11);
    v0.long(&v22, "theme-lightthemes.bintheme set cachesyntaxes.binmetadata.yamlmetadata fileThe binary caches for the user-customized syntaxes and themes in '' are not compatible with this version of bat (0.25.0). To solve this, either rebuild the cache (bat cache --build) ", 11);
    v22.overrides_with(&v0, "theme-lightthemes.bintheme set cachesyntaxes.binmetadata.yamlmetadata fileThe binary caches for the user-customized syntaxes and themes in '' are not compatible with this version of bat (0.25.0). To solve this, either rebuild the cache (bat cache --build) ", 11);
    v0.value_name(&v22, "themetheme-darktheme-lightthemes.bintheme set cachesyntaxes.binmetadata.yamlmetadata fileThe binary caches for the user-customized syntaxes and themes in '' are not compatible with this version of bat (0.25.0). To solve this, either rebuild the cache (bat ", 5);
    v22.help(&v0, "Sets the color theme for syntax highlighting used for light backgrounds.Sets the theme name for syntax highlighting used when the terminal uses a light background. Use '--list-themes' to see all available themes. To set a default theme, add the '--theme-li", 72);
    v0.long_help(&v22, "Sets the theme name for syntax highlighting used when the terminal uses a light background. Use \'--list-themes\' to see all available themes. To set a default theme, add the \'--theme-light=\"...\" option to the configuration file or export the BAT_THEME_LIGHT environment variable (e.g. export BAT_THEME_LIGHT=\"...\").", 314);
    v22.arg(&v3, &v0);
    v3.new("theme-darktheme-lightthemes.bintheme set cachesyntaxes.binmetadata.yamlmetadata fileThe binary caches for the user-customized syntaxes and themes in '' are not compatible with this version of bat (0.25.0). To solve this, either rebuild the cache (bat cache", 10);
    v0.long(&v3, "theme-darktheme-lightthemes.bintheme set cachesyntaxes.binmetadata.yamlmetadata fileThe binary caches for the user-customized syntaxes and themes in '' are not compatible with this version of bat (0.25.0). To solve this, either rebuild the cache (bat cache", 10);
    v3.overrides_with(&v0, "theme-darktheme-lightthemes.bintheme set cachesyntaxes.binmetadata.yamlmetadata fileThe binary caches for the user-customized syntaxes and themes in '' are not compatible with this version of bat (0.25.0). To solve this, either rebuild the cache (bat cache", 10);
    v0.value_name(&v3, "themetheme-darktheme-lightthemes.bintheme set cachesyntaxes.binmetadata.yamlmetadata fileThe binary caches for the user-customized syntaxes and themes in '' are not compatible with this version of bat (0.25.0). To solve this, either rebuild the cache (bat ", 5);
    v3.help(&v0, "Sets the color theme for syntax highlighting used for dark backgrounds.Sets the theme name for syntax highlighting used when the terminal uses a dark background. Use '--list-themes' to see all available themes. To set a default theme, add the '--theme-dark", 71);
    v0.long_help(&v3, "Sets the theme name for syntax highlighting used when the terminal uses a dark background. Use \'--list-themes\' to see all available themes. To set a default theme, add the \'--theme-dark=\"...\" option to the configuration file or export the BAT_THEME_DARK environment variable (e.g. export BAT_THEME_DARK=\"...\").", 310);
    v3.arg(&v22, &v0);
    v22.new("list-themesignored-suffixmap-syntaxterminal-widthnonprintable-notationbinarychop-long-linesforce-colorizationcolordecorationsstrip-ansiline-rangediff-contextpageritalic-texthighlight-lineset-terminal-titlesqueeze-blanksqueeze-limitshow-nonprintableMust be ", 11);
    v0.long(&v22, "list-themesignored-suffixmap-syntaxterminal-widthnonprintable-notationbinarychop-long-linesforce-colorizationcolordecorationsstrip-ansiline-rangediff-contextpageritalic-texthighlight-lineset-terminal-titlesqueeze-blanksqueeze-limitshow-nonprintableMust be ", 11);
    v22.action(&v0, 2);
    v0.help(&v22, "Display all supported highlighting themes.Display a list of supported themes for syntax highlighting.Squeeze consecutive empty lines into a single empty line.Set the maximum number of consecutive empty lines to be printed.Strip colors from the input (auto,", 42);
    v28.long_help(&v0, "Display a list of supported themes for syntax highlighting.Squeeze consecutive empty lines into a single empty line.Set the maximum number of consecutive empty lines to be printed.Strip colors from the input (auto, always, *never*)Specify when to strip ANS", 59);
    v22.arg(&v3, &v28);
    v3.new("squeeze-blanksqueeze-limitshow-nonprintableMust be one file name per input type.file-name-numberstyles present", 13);
    v0.long(&v3, "squeeze-blanksqueeze-limitshow-nonprintableMust be one file name per input type.file-name-numberstyles present", 13);
    v3.short(&v0, 115);
    v0.action(&v3, 2);
    v3.help(&v0, "Squeeze consecutive empty lines.struct SyntaxSet with 2 elements", 32);
    v0.long_help(&v3, "Squeeze consecutive empty lines into a single empty line.Set the maximum number of consecutive empty lines to be printed.Strip colors from the input (auto, always, *never*)Specify when to strip ANSI escape sequences from the input. The automatic mode will ", 57);
    v3.arg(&v22, &v0);
    v22.new("squeeze-limitshow-nonprintableMust be one file name per input type.file-name-numberstyles present", 13);
    v0.long(&v22, "squeeze-limitshow-nonprintableMust be one file name per input type.file-name-numberstyles present", 13);
    v22.value_parser(&v0);
    v0.long_help(&v22, "Set the maximum number of consecutive empty lines to be printed.Strip colors from the input (auto, always, *never*)Specify when to strip ANSI escape sequences from the input. The automatic mode will remove escape sequences unless the syntax highlighting la", 64);
    ::libc.so.0::memcpy(&v28, &v0, 592);
    v43 = 0x1000 | v1;
    v44 = v2;
    v22.arg(&v3, &v28);
    v3.new("strip-ansiline-rangediff-contextpageritalic-texthighlight-lineset-terminal-titlesqueeze-blanksqueeze-limitshow-nonprintableMust be one file name per input type.file-name-numberstyles present", 10);
    v0.long(&v3, "strip-ansiline-rangediff-contextpageritalic-texthighlight-lineset-terminal-titlesqueeze-blanksqueeze-limitshow-nonprintableMust be one file name per input type.file-name-numberstyles present", 10);
    v3.overrides_with(&v0, "strip-ansiline-rangediff-contextpageritalic-texthighlight-lineset-terminal-titlesqueeze-blanksqueeze-limitshow-nonprintableMust be one file name per input type.file-name-numberstyles present", 10);
    v0.value_name(&v3, "when -- ", 4);
    v28 = "auto.inf";
    v30 = 4;
    v31 = "alwaysneverinternal error: entered unreachable code: other values for --paging are not allowed";
    v32 = 6;
    v33 = "neverinternal error: entered unreachable code: other values for --paging are not allowed";
    v34 = 5;
    v3.value_parser(&v0, &v28);
    v0.default_value(&v3, "neverinternal error: entered unreachable code: other values for --paging are not allowed", 5);
    ::libc.so.0::memcpy(&v3, &v0, 592);
    v16 = 0x400 | v1;
    v17 = v2;
    v0.help(&v3, "Strip colors from the input (auto, always, *never*)Specify when to strip ANSI escape sequences from the input. The automatic mode will remove escape sequences unless the syntax highlighting language is plain text. Possible values: auto, always, *never*.com", 51);
    v3.long_help(&v0, "Specify when to strip ANSI escape sequences from the input. The automatic mode will remove escape sequences unless the syntax highlighting language is plain text. Possible values: auto, always, *never*.componentsComma-separated list of style elements to di", 202);
    ::libc.so.0::memcpy(&v0, &v3, 592);
    v1 = 0x1000 | v16;
    v2 = v17;
    v3.arg(&v22, &v0);
    v22.new("stylethemetheme-darktheme-lightthemes.bintheme set cachesyntaxes.binmetadata.yamlmetadata fileThe binary caches for the user-customized syntaxes and themes in '' are not compatible with this version of bat (0.25.0). To solve this, either rebuild the cache ", 5);
    v0.long(&v22, "stylethemetheme-darktheme-lightthemes.bintheme set cachesyntaxes.binmetadata.yamlmetadata fileThe binary caches for the user-customized syntaxes and themes in '' are not compatible with this version of bat (0.25.0). To solve this, either rebuild the cache ", 5);
    v22.action(&v0, 1);
    v0.value_name(&v22, "componentsComma-separated list of style elements to display (*default*, auto, full, plain, changes, header, header-filename, header-filesize, grid, rule, numbers, snip).Configure which elements (line numbers, file headers, grid borders, Git modifications, ", 10);
    v22.value_parser(&v0);
    v0.help(&v22, "Comma-separated list of style elements to display (*default*, auto, full, plain, changes, header, header-filename, header-filesize, grid, rule, numbers, snip).Configure which elements (line numbers, file headers, grid borders, Git modifications, ..) to dis", 159);
    v28.long_help(&v0, "Configure which elements (line numbers, file headers, grid borders, Git modifications, ..) to display in addition to the file contents. The argument is a comma-separated list of components to display (e.g. \'numbers,changes,grid\') or a pre-defined style (\'full\'). To set a default style, add the \'--style=\"..\"\' option to the configuration file or export the BAT_STYLE environment variable (e.g.: export BAT_STYLE=\"..\").\n\nWhen styles are specified in multiple places, the \"nearest\" set of styles take precedence. The command-line arguments are the highest priority, followed by the BAT_STYLE environment variable, and then the configuration file. If any set of styles consists entirely of components prefixed with \"+\" or \"-\", it will modify the previous set of styles instead of replacing them.\n\nBy default, the following components are enabled:\n  changes, grid, header-filename, numbers, snip\n\nPossible values:\n\n  * default: enables recommended style components (default).\n  * full: enables all available components.\n  * auto", 1571);
    v22.arg(&v3, &v28);
    v3.new("line-rangediff-contextpageritalic-texthighlight-lineset-terminal-titlesqueeze-blanksqueeze-limitshow-nonprintableMust be one file name per input type.file-name-numberstyles present", 10);
    v0.long(&v3, "line-rangediff-contextpageritalic-texthighlight-lineset-terminal-titlesqueeze-blanksqueeze-limitshow-nonprintableMust be one file name per input type.file-name-numberstyles present", 10);
    v3.short(&v0, 114);
    v0.action(&v3, 1);
    v3.value_name(&v0, "N:MHighlight lines N through M.Highlight the specified line ranges with a different background color For example:\n  '--highlight-line 40' highlights line 40\n  '--highlight-line 30:40' highlights lines 30 to 40\n  '--highlight-line :40' highlights lines 1 to", 3);
    v0.help(&v3, "Only print the lines from N to M.Only print the specified range of lines for each file. For example:\n  '--line-range 30:40' prints lines 30 to 40\n  '--line-range :40' prints lines 1 to 40\n  '--line-range 40:' prints lines 40 to the end of the file\n  '--lin", 33);
    v28.long_help(&v0, "Only print the specified range of lines for each file. For example:\n  '--line-range 30:40' prints lines 30 to 40\n  '--line-range :40' prints lines 1 to 40\n  '--line-range 40:' prints lines 40 to the end of the file\n  '--line-range 40' only prints line 40\n  '--line-range 30:+10' prints lines 30 to 40\n  '--line-range 35::5' prints lines 30 to 40 (line 35 with 5 lines of context)\n  '--line-range 30:40:2' prints lines 28 to 42 (range 30-40 with 2 lines of context)", 464);
    v3.arg(&v22, &v28);
    v22.new("list-languagesDisplay a list of supported languages for syntax highlighting.unbufferedThis option exists for POSIX-compliance reasons ('u' is for 'unbuffered'). The output is always unbuffered - this option is simply ignored.no-configDo not use the configu", 14);
    v0.long(&v22, "list-languagesDisplay a list of supported languages for syntax highlighting.unbufferedThis option exists for POSIX-compliance reasons ('u' is for 'unbuffered'). The output is always unbuffered - this option is simply ignored.no-configDo not use the configu", 14);
    v22.short(&v0, 76);
    v0.action(&v22, 2);
    v22.conflicts_with(&v0, "list-themesignored-suffixmap-syntaxterminal-widthnonprintable-notationbinarychop-long-linesforce-colorizationcolordecorationsstrip-ansiline-rangediff-contextpageritalic-texthighlight-lineset-terminal-titlesqueeze-blanksqueeze-limitshow-nonprintableMust be ", 11);
    v0.help(&v22, "Display all supported languages.struct ThemeItem with 2 elements", 32);
    v28.long_help(&v0, "Display a list of supported languages for syntax highlighting.unbufferedThis option exists for POSIX-compliance reasons ('u' is for 'unbuffered'). The output is always unbuffered - this option is simply ignored.no-configDo not use the configuration fileDo ", 62);
    v22.arg(&v3, &v28);
    v3.new("unbufferedThis option exists for POSIX-compliance reasons ('u' is for 'unbuffered'). The output is always unbuffered - this option is simply ignored.no-configDo not use the configuration fileDo not load custom assetscompletionSHELLps1zshShow shell completi", 10);
    v0.short(&v3, 117);
    v3.long(&v0, "unbufferedThis option exists for POSIX-compliance reasons ('u' is for 'unbuffered'). The output is always unbuffered - this option is simply ignored.no-configDo not use the configuration fileDo not load custom assetscompletionSHELLps1zshShow shell completi", 10);
    v0.action(&v3, 2);
    ::libc.so.0::memcpy(&v3, &v0, 592);
    v16 = 0x1000 | v1;
    v17 = v2;
    v0.long_help(&v3, "This option exists for POSIX-compliance reasons ('u' is for 'unbuffered'). The output is always unbuffered - this option is simply ignored.no-configDo not use the configuration fileDo not load custom assetscompletionSHELLps1zshShow shell completion for a c", 139);
    v3.arg(&v22, &v0);
    v22.new("no-configDo not use the configuration fileDo not load custom assetscompletionSHELLps1zshShow shell completion for a certain shell. [possible values: bash, fish, zsh, ps1]config-fileShow path to the configuration file.generate-config-fileGenerates a default", 9);
    v0.long(&v22, "no-configDo not use the configuration fileDo not load custom assetscompletionSHELLps1zshShow shell completion for a certain shell. [possible values: bash, fish, zsh, ps1]config-fileShow path to the configuration file.generate-config-fileGenerates a default", 9);
    v22.action(&v0, 2);
    ::libc.so.0::memcpy(&v0, &v22, 592);
    v1 = v23 | 4;
    v2 = v24;
    v28.help(&v0, "Do not use the configuration fileDo not load custom assetscompletionSHELLps1zshShow shell completion for a certain shell. [possible values: bash, fish, zsh, ps1]config-fileShow path to the configuration file.generate-config-fileGenerates a default configur", 33);
    v22.arg(&v3, &v28);
    v3.new("no-custom-assets", 16);
    v0.long(&v3, "no-custom-assets", 16);
    v3.action(&v0, 2);
    ::libc.so.0::memcpy(&v0, &v3, 592);
    v1 = v16 | 4;
    v2 = v17;
    v3.help(&v0, "Do not load custom assetscompletionSHELLps1zshShow shell completion for a certain shell. [possible values: bash, fish, zsh, ps1]config-fileShow path to the configuration file.generate-config-fileGenerates a default configuration file.config-dirShow bat's c", 25);
    v46.arg(&v22, &v3);
    ::libc.so.0::memcpy(&v22, &v46, 712);
    v3.new("completionSHELLps1zshShow shell completion for a certain shell. [possible values: bash, fish, zsh, ps1]config-fileShow path to the configuration file.generate-config-fileGenerates a default configuration file.config-dirShow bat's configuration directory.ca", 10);
    v0.long(&v3, "completionSHELLps1zshShow shell completion for a certain shell. [possible values: bash, fish, zsh, ps1]config-fileShow path to the configuration file.generate-config-fileGenerates a default configuration file.config-dirShow bat's configuration directory.ca", 10);
    v3.value_name(&v0, "SHELLps1zshShow shell completion for a certain shell. [possible values: bash, fish, zsh, ps1]config-fileShow path to the configuration file.generate-config-fileGenerates a default configuration file.config-dirShow bat's configuration directory.cache-dirSho", 5);
    *((char **)&v28) = "bashHOME";
    v30 = 4;
    v31 = "fish";
    v32 = 4;
    v33 = "ps1zshShow shell completion for a certain shell. [possible values: bash, fish, zsh, ps1]config-fileShow path to the configuration file.generate-config-fileGenerates a default configuration file.config-dirShow bat's configuration directory.cache-dirShow bat";
    v34 = 3;
    v35 = "zshShow shell completion for a certain shell. [possible values: bash, fish, zsh, ps1]config-fileShow path to the configuration file.generate-config-fileGenerates a default configuration file.config-dirShow bat's configuration directory.cache-dirShow bat's ";
    v36 = 3;
    v0.value_parser(&v3, &(unsigned long long)v28);
    v3.help(&v0, "Show shell completion for a certain shell. [possible values: bash, fish, zsh, ps1]config-fileShow path to the configuration file.generate-config-fileGenerates a default configuration file.config-dirShow bat's configuration directory.cache-dirShow bat's cac", 82);
    v46.arg(&v22, &v3);
    ::libc.so.0::memcpy(&v22, &v46, 712);
    v3.new("config-fileShow path to the configuration file.generate-config-fileGenerates a default configuration file.config-dirShow bat's configuration directory.cache-dirShow bat's cache directory.diagnosticdiagnosticsShow diagnostic information for bug reports.Show", 11);
    v0.long(&v3, "config-fileShow path to the configuration file.generate-config-fileGenerates a default configuration file.config-dirShow bat's configuration directory.cache-dirShow bat's cache directory.diagnosticdiagnosticsShow diagnostic information for bug reports.Show", 11);
    v3.action(&v0, 2);
    v0.conflicts_with(&v3, "list-languagesDisplay a list of supported languages for syntax highlighting.unbufferedThis option exists for POSIX-compliance reasons ('u' is for 'unbuffered'). The output is always unbuffered - this option is simply ignored.no-configDo not use the configu", 14);
    v3.conflicts_with(&v0, "list-themesignored-suffixmap-syntaxterminal-widthnonprintable-notationbinarychop-long-linesforce-colorizationcolordecorationsstrip-ansiline-rangediff-contextpageritalic-texthighlight-lineset-terminal-titlesqueeze-blanksqueeze-limitshow-nonprintableMust be ", 11);
    ::libc.so.0::memcpy(&v0, &v3, 592);
    v1 = v16 | 4;
    v2 = v17;
    (unsigned long long)v28.help(&v0, "Show path to the configuration file.generate-config-fileGenerates a default configuration file.config-dirShow bat's configuration directory.cache-dirShow bat's cache directory.diagnosticdiagnosticsShow diagnostic information for bug reports.Show acknowledg", 36);
    v3.arg(&v22, &(unsigned long long)v28);
    v22.new("generate-config-fileGenerates a default configuration file.config-dirShow bat's configuration directory.cache-dirShow bat's cache directory.diagnosticdiagnosticsShow diagnostic information for bug reports.Show acknowledgements.Sets terminal title to filena", 20);
    v0.long(&v22, "generate-config-fileGenerates a default configuration file.config-dirShow bat's configuration directory.cache-dirShow bat's cache directory.diagnosticdiagnosticsShow diagnostic information for bug reports.Show acknowledgements.Sets terminal title to filena", 20);
    v22.action(&v0, 2);
    v0.conflicts_with(&v22, "list-languagesDisplay a list of supported languages for syntax highlighting.unbufferedThis option exists for POSIX-compliance reasons ('u' is for 'unbuffered'). The output is always unbuffered - this option is simply ignored.no-configDo not use the configu", 14);
    v22.conflicts_with(&v0, "list-themesignored-suffixmap-syntaxterminal-widthnonprintable-notationbinarychop-long-linesforce-colorizationcolordecorationsstrip-ansiline-rangediff-contextpageritalic-texthighlight-lineset-terminal-titlesqueeze-blanksqueeze-limitshow-nonprintableMust be ", 11);
    ::libc.so.0::memcpy(&v0, &v22, 592);
    v1 = v23 | 4;
    v2 = v24;
    (unsigned long long)v28.help(&v0, "Generates a default configuration file.config-dirShow bat's configuration directory.cache-dirShow bat's cache directory.diagnosticdiagnosticsShow diagnostic information for bug reports.Show acknowledgements.Sets terminal title to filenames when using a pag", 39);
    v22.arg(&v3, &(unsigned long long)v28);
    v3.new("config-dirShow bat's configuration directory.cache-dirShow bat's cache directory.diagnosticdiagnosticsShow diagnostic information for bug reports.Show acknowledgements.Sets terminal title to filenames when using a pager.Modify the syntax-definition and the", 10);
    v0.long(&v3, "config-dirShow bat's configuration directory.cache-dirShow bat's cache directory.diagnosticdiagnosticsShow diagnostic information for bug reports.Show acknowledgements.Sets terminal title to filenames when using a pager.Modify the syntax-definition and the", 10);
    v3.action(&v0, 2);
    ::libc.so.0::memcpy(&v0, &v3, 592);
    v1 = v16 | 4;
    v2 = v17;
    (unsigned long long)v28.help(&v0, "Show bat's configuration directory.cache-dirShow bat's cache directory.diagnosticdiagnosticsShow diagnostic information for bug reports.Show acknowledgements.Sets terminal title to filenames when using a pager.Modify the syntax-definition and theme cachebu", 35);
    v3.arg(&v22, &(unsigned long long)v28);
    v22.new("cache-dirShow bat's cache directory.diagnosticdiagnosticsShow diagnostic information for bug reports.Show acknowledgements.Sets terminal title to filenames when using a pager.Modify the syntax-definition and theme cachebuildInitialize (or update) the synta", 9);
    v0.long(&v22, "cache-dirShow bat's cache directory.diagnosticdiagnosticsShow diagnostic information for bug reports.Show acknowledgements.Sets terminal title to filenames when using a pager.Modify the syntax-definition and theme cachebuildInitialize (or update) the synta", 9);
    v22.action(&v0, 2);
    ::libc.so.0::memcpy(&v0, &v22, 592);
    v1 = v23 | 4;
    v2 = v24;
    (unsigned long long)v28.help(&v0, "Show bat's cache directory.diagnosticdiagnosticsShow diagnostic information for bug reports.Show acknowledgements.Sets terminal title to filenames when using a pager.Modify the syntax-definition and theme cachebuildInitialize (or update) the syntax/theme c", 27);
    v22.arg(&v3, &(unsigned long long)v28);
    v3.new("diagnosticdiagnosticsShow diagnostic information for bug reports.Show acknowledgements.Sets terminal title to filenames when using a pager.Modify the syntax-definition and theme cachebuildInitialize (or update) the syntax/theme cache.Initialize (or update)", 10);
    v0.long(&v3, "diagnosticdiagnosticsShow diagnostic information for bug reports.Show acknowledgements.Sets terminal title to filenames when using a pager.Modify the syntax-definition and theme cachebuildInitialize (or update) the syntax/theme cache.Initialize (or update)", 10);
    v3.alias(&v0, "diagnosticsShow diagnostic information for bug reports.Show acknowledgements.Sets terminal title to filenames when using a pager.Modify the syntax-definition and theme cachebuildInitialize (or update) the syntax/theme cache.Initialize (or update) the synta", 11);
    v0.action(&v3, 2);
    ::libc.so.0::memcpy(&v3, &v0, 592);
    v16 = v1 | 0x1000;
    v17 = v2;
    v0.help(&v3, "Show diagnostic information for bug reports.Show acknowledgements.Sets terminal title to filenames when using a pager.Modify the syntax-definition and theme cachebuildInitialize (or update) the syntax/theme cache.Initialize (or update) the syntax/theme cac", 44);
    v3.arg(&v22, &v0);
    v22.new("acknowledgements", 16);
    v0.long(&v22, "acknowledgements", 16);
    v22.action(&v0, 2);
    ::libc.so.0::memcpy(&v0, &v22, 592);
    v1 = 0x1000 | v23;
    v2 = v24;
    (unsigned long long)v28.help(&v0, "Show acknowledgements.Sets terminal title to filenames when using a pager.Modify the syntax-definition and theme cachebuildInitialize (or update) the syntax/theme cache.Initialize (or update) the syntax/theme cache by loading from the source directory (def", 22);
    v22.arg(&v3, &(unsigned long long)v28);
    v3.new("set-terminal-titlesqueeze-blanksqueeze-limitshow-nonprintableMust be one file name per input type.file-name-numberstyles present", 18);
    v0.long(&v3, "set-terminal-titlesqueeze-blanksqueeze-limitshow-nonprintableMust be one file name per input type.file-name-numberstyles present", 18);
    v3.action(&v0, 2);
    ::libc.so.0::memcpy(&v0, &v3, 592);
    v1 = 0x1000 | v16;
    v2 = v17;
    v3.help(&v0, "Sets terminal title to filenames when using a pager.Modify the syntax-definition and theme cachebuildInitialize (or update) the syntax/theme cache.Initialize (or update) the syntax/theme cache by loading from the source directory (default: the configuratio", 52);
    v46.arg(&v22, &v3);
    std::fs::metadata(&v22);
    core::ptr::drop_in_place<core::result::Result<std::fs::Metadata,std::io::error::Error>>(&v22);
    if ((int)*((long long *)&v22) != 2)
        return ::libc.so.0::memcpy(a0, &v46, 712);
    ::libc.so.0::memcpy(&v0, &v46, 712);
    v22.new("cachesrc/bin/bat/app.rs", 5);
    ::libc.so.0::memcpy(&v3, &v22, 700);
    *((unsigned long *)&v18) = &g_800000 | v25;
    v20 = v26;
    v22.about(&v3, "Modify the syntax-definition and theme cachebuildInitialize (or update) the syntax/theme cache.Initialize (or update) the syntax/theme cache by loading from the source directory (default: the configuration directory).clearRemove the cached syntax definitio", 44);
    v3.new("buildInitialize (or update) the syntax/theme cache.Initialize (or update) the syntax/theme cache by loading from the source directory (default: the configuration directory).clearRemove the cached syntax definitions and themes.sourcedirUse a different direc", 5);
    (unsigned long long)v28.long(&v3, "buildInitialize (or update) the syntax/theme cache.Initialize (or update) the syntax/theme cache by loading from the source directory (default: the configuration directory).clearRemove the cached syntax definitions and themes.sourcedirUse a different direc", 5);
    v3.short(&(unsigned long long)v28, 98);
    (unsigned long long)v28.action(&v3, 2);
    v3.help(&(unsigned long long)v28, "Initialize (or update) the syntax/theme cache.Initialize (or update) the syntax/theme cache by loading from the source directory (default: the configuration directory).clearRemove the cached syntax definitions and themes.sourcedirUse a different directory ", 46);
    (unsigned long long)v28.long_help(&v3, "Initialize (or update) the syntax/theme cache by loading from the source directory (default: the configuration directory).clearRemove the cached syntax definitions and themes.sourcedirUse a different directory to load syntaxes and themes from.targetUse a d", 122);
    v3.arg(&v22, &(unsigned long long)v28);
    v22.new("clearRemove the cached syntax definitions and themes.sourcedirUse a different directory to load syntaxes and themes from.targetUse a different directory to store the cached syntax and theme set.blankCreate completely new syntax and theme sets (instead of a", 5);
    (unsigned long long)v28.long(&v22, "clearRemove the cached syntax definitions and themes.sourcedirUse a different directory to load syntaxes and themes from.targetUse a different directory to store the cached syntax and theme set.blankCreate completely new syntax and theme sets (instead of a", 5);
    v22.short(&(unsigned long long)v28, 99);
    (unsigned long long)v28.action(&v22, 2);
    v50.help(&(unsigned long long)v28, "Remove the cached syntax definitions and themes.sourcedirUse a different directory to load syntaxes and themes from.targetUse a different directory to store the cached syntax and theme set.blankCreate completely new syntax and theme sets (instead of append", 48);
    v22.arg(&v3, &v50);
    v10 = 1;
    v11 = 0;
    v3 = 0;
    v4 = 8;
    v12 = 0;
    v5 = 0;
    v6 = 8;
    *((uint128_t *)&v7) = 0;
    v8 = 8;
    v9 = 0;
    (unsigned long long)v28.id(&v3);
    v50 = "buildInitialize (or update) the syntax/theme cache.Initialize (or update) the syntax/theme cache by loading from the source directory (default: the configuration directory).clearRemove the cached syntax definitions and themes.sourcedirUse a different direc";
    v51 = 5;
    v52 = "clearRemove the cached syntax definitions and themes.sourcedirUse a different directory to load syntaxes and themes from.targetUse a different directory to store the cached syntax and theme set.blankCreate completely new syntax and theme sets (instead of a";
    v53 = 5;
    v3.args(&(unsigned long long)v28, &v50);
    v12 = 1;
    v57 = *((int128_t *)&v6);
    v58 = (int128_t)(&v7)[8];
    *((int128_t *)&v28) = *((int128_t *)&v3);
    *((uint128_t *)&v31) = 0;
    v33 = v57;
    v35 = v58;
    memcpy(&v37, &v9, 16);
    v38 = 0;
    v39 = 1;
    v40 = v13;
    v41 = v14;
    v42 = v15;
    v3.group(&v22, &(unsigned long long)v28);
    v22.new("sourcedirUse a different directory to load syntaxes and themes from.targetUse a different directory to store the cached syntax and theme set.blankCreate completely new syntax and theme sets (instead of appending to the default sets).Build acknowledgements.", 6);
    (unsigned long long)v28.long(&v22, "sourcedirUse a different directory to load syntaxes and themes from.targetUse a different directory to store the cached syntax and theme set.blankCreate completely new syntax and theme sets (instead of appending to the default sets).Build acknowledgements.", 6);
    v22.requires(&(unsigned long long)v28);
    (unsigned long long)v28.value_name(&v22, "dirUse a different directory to load syntaxes and themes from.targetUse a different directory to store the cached syntax and theme set.blankCreate completely new syntax and theme sets (instead of appending to the default sets).Build acknowledgements.bin.Yo", 3);
    v50.help(&(unsigned long long)v28, "Use a different directory to load syntaxes and themes from.targetUse a different directory to store the cached syntax and theme set.blankCreate completely new syntax and theme sets (instead of appending to the default sets).Build acknowledgements.bin.You c", 59);
    v22.arg(&v3, &v50);
    v3.new("targetUse a different directory to store the cached syntax and theme set.blankCreate completely new syntax and theme sets (instead of appending to the default sets).Build acknowledgements.bin.You can use 'bat cache' to customize syntaxes and themes. See 'b", 6);
    (unsigned long long)v28.long(&v3, "targetUse a different directory to store the cached syntax and theme set.blankCreate completely new syntax and theme sets (instead of appending to the default sets).Build acknowledgements.bin.You can use 'bat cache' to customize syntaxes and themes. See 'b", 6);
    v3.requires(&(unsigned long long)v28);
    (unsigned long long)v28.value_name(&v3, "dirUse a different directory to load syntaxes and themes from.targetUse a different directory to store the cached syntax and theme set.blankCreate completely new syntax and theme sets (instead of appending to the default sets).Build acknowledgements.bin.Yo", 3);
    v50.help(&(unsigned long long)v28, "Use a different directory to store the cached syntax and theme set.blankCreate completely new syntax and theme sets (instead of appending to the default sets).Build acknowledgements.bin.You can use 'bat cache' to customize syntaxes and themes. See 'bat cac", 67);
    v3.arg(&v22, &v50);
    v22.new("blankCreate completely new syntax and theme sets (instead of appending to the default sets).Build acknowledgements.bin.You can use 'bat cache' to customize syntaxes and themes. See 'bat cache --help' for more informationterminal width cannot be zeromust be", 5);
    (unsigned long long)v28.long(&v22, "blankCreate completely new syntax and theme sets (instead of appending to the default sets).Build acknowledgements.bin.You can use 'bat cache' to customize syntaxes and themes. See 'bat cache --help' for more informationterminal width cannot be zeromust be", 5);
    v22.action(&(unsigned long long)v28, 2);
    (unsigned long long)v28.requires(&v22);
    v50.help(&(unsigned long long)v28, "Create completely new syntax and theme sets (instead of appending to the default sets).Build acknowledgements.bin.You can use 'bat cache' to customize syntaxes and themes. See 'bat cache --help' for more informationterminal width cannot be zeromust be an o", 87);
    v22.arg(&v3, &v50);
    v3.new("acknowledgements", 16);
    (unsigned long long)v28.long(&v3, "acknowledgements", 16);
    v3.action(&(unsigned long long)v28, 2);
    (unsigned long long)v28.requires(&v3);
    v50.help(&(unsigned long long)v28, "Build acknowledgements.bin.You can use 'bat cache' to customize syntaxes and themes. See 'bat cache --help' for more informationterminal width cannot be zeromust be an offset or numberRequires a non-negative numberconfigBAT_CONFIG_PATH# This is `bat`s conf", 27);
    v3.arg(&v22, &v50);
    v22.subcommand(&v0, &v3);
    return a0.after_long_help(&v22);
}
