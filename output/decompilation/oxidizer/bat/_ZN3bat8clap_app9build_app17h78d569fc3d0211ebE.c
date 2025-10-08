fn bat::clap_app::build_app(a1: i32) -> : struct712 {
    let a0: u64;  // rdi
    let v0: struct600;  // [bp-0x1020]
    let v1: u32;  // [bp-0xdd0]
    let v2: u32;  // [bp-0xdcc]
    let v3: struct90;  // [bp-0xd58], Other Possible Types: struct712, struct600
    let v4: struct96;  // [bp-0xd58]
    let v5: u8;  // [bp-0xd00]
    let v6: u32;  // [bp-0xcff]
    let v7: u16;  // [bp-0xcfb]
    let v8: u32;  // [bp-0xb08]
    let v9: u32;  // [bp-0xb04]
    let v10: u32;  // [bp-0xa9c]
    let v11: u64;  // [bp-0xa9c]
    let v12: u64;  // [bp-0xa98]
    let v13: u32;  // [bp-0xa94]
    let v14: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0xa90], Other Possible Types: struct700, struct437, struct712, struct600
    let v15: u32;  // [bp-0x840]
    let v16: u32;  // [bp-0x83c]
    let v17: i8;  // [bp-0x7d4], Other Possible Types: u32
    let v18: u32;  // [bp-0x7cc]
    let v19: struct32;  // [bp-0x7c8], Other Possible Types: struct64, struct96, struct48, struct600
    let v20: u32;  // [bp-0x578]
    let v21: u32;  // [bp-0x574]
    let v22: u64;  // [bp-0x568]
    let v23: struct32;  // [bp-0x550], Other Possible Types: struct600, struct712
    let v24: struct32;  // [bp-0x288], Other Possible Types: struct600
    let v26: u8;  // bpl
    let v27: i64;  // rax
    let v28: u64;  // rdx
    let v29: iNone;  // xmm2
    let v30: iNone;  // xmm3

    v26 = 2;
    if a1 {
        v26 = bat::app::env_no_color() * 2;
    }
    v14 = clap_builder::builder::command::Command::new("bat");
    v27 = once_cell::sync::OnceCell<T>::get_or_try_init();
    v3 = clap_builder::builder::command::Command::version(&v14, *((v27 + 8) as &i64), *((v27 + 16) as &i64));
    v14 = clap_builder::builder::command::Command::color(&v3, v26);
    memcpy(&v3, &v14, 700);
    v11 = 0x110000001102400 | *(&v17 as &i64);
    v13 = v18;
    v14 = clap_builder::builder::command::Command::max_term_width(&v3);
    v3 = clap_builder::builder::command::Command::about(&v14, "A cat(1) clone with wings.");
    v14 = clap_builder::builder::command::Command::long_about(&v3);
    v3 = clap_builder::builder::arg::Arg::new("FILE");
    v0 = clap_builder::builder::arg::Arg::help(&v3, "File(s) to print / concatenate. Use '-' for standard input.");
    v3 = clap_builder::builder::arg::Arg::long_help(&v0, "File(s) to print / concatenate. Use a dash ('-') or no argument at all to read from standard input.");
    v0 = clap_builder::builder::arg::Arg::num_args(&v3);
    v22 = 3;
    v23 = clap_builder::builder::arg::Arg::value_parser(&v0, &v22);
    v3 = clap_builder::builder::command::Command::arg(&v14, &v23);
    v14 = clap_builder::builder::arg::Arg::new("show-all");
    v0 = clap_builder::builder::arg::Arg::long(&v14, "show-all");
    v14 = clap_builder::builder::arg::Arg::alias(&v0, "show-nonprintable");
    v0 = clap_builder::builder::arg::Arg::short(&v14, 65);
    v14 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v0 = clap_builder::builder::arg::Arg::conflicts_with(&v14, "language");
    v14 = clap_builder::builder::arg::Arg::help(&v0, "Show non-printable characters (space, tab, newline, ..).");
    v0 = clap_builder::builder::arg::Arg::long_help(&v14, "Show non-printable characters like space, tab or newline. This option can also be used to print binary files. Use '--tabs' to control the width of the tab-placeholders.");
    v14 = clap_builder::builder::command::Command::arg(&v3, &v0);
    v3 = clap_builder::builder::arg::Arg::new("nonprintable-notation");
    v0 = clap_builder::builder::arg::Arg::long(&v3, "nonprintable-notation");
    v3 = clap_builder::builder::arg::Arg::action(&v0, 0);
    v0 = clap_builder::builder::arg::Arg::default_value(&v3, "unicode");
    v23 = struct32 {
        field_0: "unicode"
        field_16: "caret"
    };
    v3 = clap_builder::builder::arg::Arg::value_parser(&v0, &v23);
    v0 = clap_builder::builder::arg::Arg::value_name(&v3, "notation");
    memcpy(&v3, &v0, 592);
    v8 = 0x400 | v1;
    v9 = v2;
    v0 = clap_builder::builder::arg::Arg::help(&v3, "Set notation for non-printable characters.");
    v23 = clap_builder::builder::arg::Arg::long_help(&v0, "Set notation for non-printable characters.\n\nPossible values:\n  * unicode (␇, ␊, ␀, ..)\n  * caret   (^G, ^J, ^@, ..)");
    v3 = clap_builder::builder::command::Command::arg(&v14, &v23);
    v14 = clap_builder::builder::arg::Arg::new("binary");
    v0 = clap_builder::builder::arg::Arg::long(&v14, "binary");
    v14 = clap_builder::builder::arg::Arg::action(&v0, 0);
    v0 = clap_builder::builder::arg::Arg::default_value(&v14, "no-printing");
    v23 = struct32 {
        field_0: "no-printing"
        field_16: "as-text"
    };
    v14 = clap_builder::builder::arg::Arg::value_parser(&v0, &v23);
    v0 = clap_builder::builder::arg::Arg::value_name(&v14, "behavior");
    memcpy(&v14, &v0, 592);
    v15 = 0x400 | v1;
    v16 = v2;
    v0 = clap_builder::builder::arg::Arg::help(&v14, "How to treat binary content. (default: no-printing)");
    v23 = clap_builder::builder::arg::Arg::long_help(&v0, "How to treat binary content. (default: no-printing)\n\nPossible values:\n  * no-printing: do not print any binary content\n  * as-text: treat binary content as normal text");
    v14 = clap_builder::builder::command::Command::arg(&v3, &v23);
    v3 = clap_builder::builder::arg::Arg::new("plain");
    v0 = clap_builder::builder::arg::Arg::overrides_with(&v3, "plain");
    v3 = clap_builder::builder::arg::Arg::overrides_with(&v0, "number");
    v0 = clap_builder::builder::arg::Arg::short(&v3, 112);
    v3 = clap_builder::builder::arg::Arg::long(&v0, "plain");
    v0 = clap_builder::builder::arg::Arg::action(&v3, 4);
    v3 = clap_builder::builder::arg::Arg::help(&v0, "Show plain style (alias for '--style=plain').");
    v0 = clap_builder::builder::arg::Arg::long_help(&v3, "Only show plain style, no decorations. This is an alias for '--style=plain'. When '-p' is used twice ('-pp'), it also disables automatic paging (alias for '--style=plain --paging=never').");
    v3 = clap_builder::builder::command::Command::arg(&v14, &v0);
    v14 = clap_builder::builder::arg::Arg::new("language");
    v0 = clap_builder::builder::arg::Arg::short(&v14, 108);
    v14 = clap_builder::builder::arg::Arg::long(&v0, "language");
    v0 = clap_builder::builder::arg::Arg::overrides_with(&v14, "language");
    v14 = clap_builder::builder::arg::Arg::help(&v0, "Set the language for syntax highlighting.");
    v0 = clap_builder::builder::arg::Arg::long_help(&v14, "Explicitly set the language for syntax highlighting. The language can be specified as a name (like 'C++' or 'LaTeX') or possible file extension (like 'cpp', 'hpp' or 'md'). Use '--list-languages' to show all supported language names and file extensions.");
    v14 = clap_builder::builder::command::Command::arg(&v3, &v0);
    v3 = clap_builder::builder::arg::Arg::new("highlight-line");
    v0 = clap_builder::builder::arg::Arg::long(&v3, "highlight-line");
    v3 = clap_builder::builder::arg::Arg::short(&v0, 72);
    v0 = clap_builder::builder::arg::Arg::action(&v3, 1);
    v3 = clap_builder::builder::arg::Arg::value_name(&v0, "N:M");
    v0 = clap_builder::builder::arg::Arg::help(&v3, "Highlight lines N through M.");
    v23 = clap_builder::builder::arg::Arg::long_help(&v0, "Highlight the specified line ranges with a different background color For example:\n  '--highlight-line 40' highlights line 40\n  '--highlight-line 30:40' highlights lines 30 to 40\n  '--highlight-line :40' highlights lines 1 to 40\n  '--highlight-line 40:' highlights lines 40 to the end of the file\n  '--highlight-line 30:+10' highlights lines 30 to 40");
    v3 = clap_builder::builder::command::Command::arg(&v14, &v23);
    v14 = clap_builder::builder::arg::Arg::new("file-name");
    v0 = clap_builder::builder::arg::Arg::long(&v14, "file-name");
    v14 = clap_builder::builder::arg::Arg::action(&v0, 1);
    v0 = clap_builder::builder::arg::Arg::value_name(&v14, "name");
    v14 = clap_builder::builder::arg::Arg::value_parser(&v0, &v22);
    v0 = clap_builder::builder::arg::Arg::help(&v14, "Specify the name to display for a file.");
    v14 = clap_builder::builder::arg::Arg::long_help(&v0, "Specify the name to display for a file. Useful when piping data to bat from STDIN when bat does not otherwise know the filename. Note that the provided file name is also used for syntax detection.");
    v23 = clap_builder::builder::command::Command::arg(&v3, &v14);
    memcpy(&v14, &v23, 712);
    v3 = clap_builder::builder::arg::Arg::new("diff");
    v0 = clap_builder::builder::arg::Arg::long(&v3, "diff");
    v3 = clap_builder::builder::arg::Arg::short(&v0, 100);
    v0 = clap_builder::builder::arg::Arg::action(&v3, 2);
    v3 = clap_builder::builder::arg::Arg::conflicts_with(&v0, "line-range");
    v0 = clap_builder::builder::arg::Arg::help(&v3, "Only show lines that have been added/removed/modified.");
    v19 = clap_builder::builder::arg::Arg::long_help(&v0, "Only show lines that have been added/removed/modified with respect to the Git index. Use --diff-context=N to control how much context you want to see.");
    v3 = clap_builder::builder::command::Command::arg(&v14, &v19);
    v14 = clap_builder::builder::arg::Arg::new("diff-context");
    v0 = clap_builder::builder::arg::Arg::long(&v14, "diff-context");
    v14 = clap_builder::builder::arg::Arg::overrides_with(&v0, "diff-context");
    v0 = clap_builder::builder::arg::Arg::value_name(&v14, "N");
    v14 = clap_builder::builder::arg::Arg::value_parser(&v0);
    memcpy(&v0, &v14, 592);
    v1 = 0x1000 | v15;
    v2 = v16;
    v14 = clap_builder::builder::arg::Arg::long_help(&v0, "Include N lines of context around added/removed/modified lines when using '--diff'.");
    v23 = clap_builder::builder::command::Command::arg(&v3, &v14);
    memcpy(&v14, &v23, 712);
    v3 = clap_builder::builder::arg::Arg::new("tabs");
    v0 = clap_builder::builder::arg::Arg::long(&v3, "tabs");
    v3 = clap_builder::builder::arg::Arg::overrides_with(&v0, "tabs");
    v0 = clap_builder::builder::arg::Arg::value_name(&v3, "T");
    v3 = clap_builder::builder::arg::Arg::value_parser(&v0);
    v0 = clap_builder::builder::arg::Arg::help(&v3, "Set the tab width to T spaces.");
    v19 = clap_builder::builder::arg::Arg::long_help(&v0, "Set the tab width to T spaces. Use a width of 0 to pass tabs through directly");
    v3 = clap_builder::builder::command::Command::arg(&v14, &v19);
    v14 = clap_builder::builder::arg::Arg::new("wrap");
    v0 = clap_builder::builder::arg::Arg::long(&v14, "wrap");
    v14 = clap_builder::builder::arg::Arg::overrides_with(&v0, "wrap");
    v0 = clap_builder::builder::arg::Arg::value_name(&v14, "mode");
    v19 = struct48 {
        field_0: "auto"
        field_16: "never"
        field_32: "character"
    };
    v14 = clap_builder::builder::arg::Arg::value_parser(&v0, &v19);
    v0 = clap_builder::builder::arg::Arg::default_value(&v14, "auto");
    memcpy(&v14, &v0, 592);
    v15 = 0x400 | v1;
    v16 = v2;
    v0 = clap_builder::builder::arg::Arg::help(&v14, "Specify the text-wrapping mode (*auto*, never, character).");
    v19 = clap_builder::builder::arg::Arg::long_help(&v0, "Specify the text-wrapping mode (*auto*, never, character). The '--terminal-width' option can be used in addition to control the output width.");
    v14 = clap_builder::builder::command::Command::arg(&v3, &v19);
    v3 = clap_builder::builder::arg::Arg::new("chop-long-lines");
    v0 = clap_builder::builder::arg::Arg::long(&v3, "chop-long-lines");
    v3 = clap_builder::builder::arg::Arg::short(&v0, 83);
    v0 = clap_builder::builder::arg::Arg::action(&v3, 2);
    v19 = clap_builder::builder::arg::Arg::help(&v0, "Truncate all lines longer than screen width. Alias for '--wrap=never'.");
    v3 = clap_builder::builder::command::Command::arg(&v14, &v19);
    v14 = clap_builder::builder::arg::Arg::new("terminal-width");
    v0 = clap_builder::builder::arg::Arg::long(&v14, "terminal-width");
    v14 = clap_builder::builder::arg::Arg::value_name(&v0, "width");
    memcpy(&v0, &v14, 592);
    v1 = 4128 | v15;
    v2 = v16;
    v14 = clap_builder::builder::arg::Arg::value_parser(&v0);
    v0 = clap_builder::builder::arg::Arg::help(&v14, "Explicitly set the width of the terminal instead of determining it automatically. If prefixed with '+' or '-', the value will be treated as an offset to the actual terminal width. See also: '--wrap'.");
    v14 = clap_builder::builder::command::Command::arg(&v3, &v0);
    v3 = clap_builder::builder::arg::Arg::new("number");
    v0 = clap_builder::builder::arg::Arg::long(&v3, "number");
    v3 = clap_builder::builder::arg::Arg::overrides_with(&v0, "number");
    v0 = clap_builder::builder::arg::Arg::short(&v3, 110);
    v3 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v0 = clap_builder::builder::arg::Arg::help(&v3, "Show line numbers (alias for '--style=numbers').");
    v19 = clap_builder::builder::arg::Arg::long_help(&v0, "Only show line numbers, no other decorations. This is an alias for '--style=numbers'");
    v3 = clap_builder::builder::command::Command::arg(&v14, &v19);
    v14 = clap_builder::builder::arg::Arg::new("color");
    v0 = clap_builder::builder::arg::Arg::long(&v14, "color");
    v14 = clap_builder::builder::arg::Arg::overrides_with(&v0, "color");
    v0 = clap_builder::builder::arg::Arg::value_name(&v14, "when");
    v19 = struct48 {
        field_0: "auto"
        field_16: "never"
        field_32: "always"
    };
    v14 = clap_builder::builder::arg::Arg::value_parser(&v0, &v19);
    memcpy(&v0, &v14, 592);
    v1 = 0x400 | v15;
    v2 = v16;
    v14 = clap_builder::builder::arg::Arg::default_value(&v0, "auto");
    v0 = clap_builder::builder::arg::Arg::help(&v14, "When to use colors (*auto*, never, always).");
    v19 = clap_builder::builder::arg::Arg::long_help(&v0, "Specify when to use colored output. The automatic mode only enables colors if an interactive terminal is detected - colors are automatically disabled if the output goes to a pipe.\nPossible values: *auto*, never, always.");
    v14 = clap_builder::builder::command::Command::arg(&v3, &v19);
    v3 = clap_builder::builder::arg::Arg::new("italic-text");
    v0 = clap_builder::builder::arg::Arg::long(&v3, "italic-text");
    v3 = clap_builder::builder::arg::Arg::value_name(&v0, "when");
    v19 = struct32 {
        field_0: "always"
        field_16: "never"
    };
    v0 = clap_builder::builder::arg::Arg::value_parser(&v3, &v19);
    v3 = clap_builder::builder::arg::Arg::default_value(&v0, "never");
    memcpy(&v0, &v3, 592);
    v1 = 0x400 | v8;
    v2 = v9;
    v3 = clap_builder::builder::arg::Arg::help(&v0, "Use italics in output (always, *never*)");
    v0 = clap_builder::builder::arg::Arg::long_help(&v3, "Specify when to use ANSI sequences for italic text in the output. Possible values: always, *never*.");
    v3 = clap_builder::builder::command::Command::arg(&v14, &v0);
    v14 = clap_builder::builder::arg::Arg::new("decorations");
    v0 = clap_builder::builder::arg::Arg::long(&v14, "decorations");
    v14 = clap_builder::builder::arg::Arg::overrides_with(&v0, "decorations");
    v0 = clap_builder::builder::arg::Arg::value_name(&v14, "when");
    v19 = struct48 {
        field_0: "auto"
        field_16: "never"
        field_32: "always"
    };
    v14 = clap_builder::builder::arg::Arg::value_parser(&v0, &v19);
    v0 = clap_builder::builder::arg::Arg::default_value(&v14, "auto");
    memcpy(&v14, &v0, 592);
    v15 = 0x400 | v1;
    v16 = v2;
    v0 = clap_builder::builder::arg::Arg::help(&v14, "When to show the decorations (*auto*, never, always).");
    v19 = clap_builder::builder::arg::Arg::long_help(&v0, "Specify when to use the decorations that have been specified via '--style'. The automatic mode only enables decorations if an interactive terminal is detected. Possible values: *auto*, never, always.");
    v14 = clap_builder::builder::command::Command::arg(&v3, &v19);
    v3 = clap_builder::builder::arg::Arg::new("force-colorization");
    v0 = clap_builder::builder::arg::Arg::long(&v3, "force-colorization");
    v3 = clap_builder::builder::arg::Arg::short(&v0, 102);
    v0 = clap_builder::builder::arg::Arg::action(&v3, 2);
    v3 = clap_builder::builder::arg::Arg::conflicts_with(&v0, "color");
    v0 = clap_builder::builder::arg::Arg::conflicts_with(&v3, "decorations");
    v3 = clap_builder::builder::arg::Arg::overrides_with(&v0, "force-colorization");
    memcpy(&v0, &v3, 592);
    v1 = 0x1000 | v8;
    v2 = v9;
    v19 = clap_builder::builder::arg::Arg::long_help(&v0, "Alias for '--decorations=always --color=always'. This is useful if the output of bat is piped to another program, but you want to keep the colorization/decorations.");
    v3 = clap_builder::builder::command::Command::arg(&v14, &v19);
    v14 = clap_builder::builder::arg::Arg::new("paging");
    v0 = clap_builder::builder::arg::Arg::long(&v14, "paging");
    v14 = clap_builder::builder::arg::Arg::overrides_with(&v0, "paging");
    v0 = clap_builder::builder::arg::Arg::overrides_with(&v14, "no-paging");
    v14 = clap_builder::builder::arg::Arg::value_name(&v0, "when");
    v19 = struct48 {
        field_0: "auto"
        field_16: "never"
        field_32: "always"
    };
    v0 = clap_builder::builder::arg::Arg::value_parser(&v14, &v19);
    v14 = clap_builder::builder::arg::Arg::default_value(&v0, "auto");
    memcpy(&v0, &v14, 592);
    v1 = 0x400 | v15;
    v2 = v16;
    v14 = clap_builder::builder::arg::Arg::help(&v0, "Specify when to use the pager, or use `-P` to disable (*auto*, never, always).");
    v0 = clap_builder::builder::arg::Arg::long_help(&v14, "Specify when to use the pager. To disable the pager, use '--paging=never' or its alias,'-P'. To disable the pager permanently, set BAT_PAGING to 'never'. To control which pager is used, see the '--pager' option. Possible values: *auto*, never, always.");
    v14 = clap_builder::builder::command::Command::arg(&v3, &v0);
    v3 = clap_builder::builder::arg::Arg::new("no-paging");
    v0 = clap_builder::builder::arg::Arg::short(&v3, 80);
    v3 = clap_builder::builder::arg::Arg::long(&v0, "no-paging");
    v0 = clap_builder::builder::arg::Arg::alias(&v3, "no-pager");
    v3 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v0 = clap_builder::builder::arg::Arg::overrides_with(&v3, "no-paging");
    memcpy(&v3, &v0, 592);
    v8 = 4100 | v1;
    v9 = v2;
    v0 = clap_builder::builder::arg::Arg::help(&v3, "Alias for '--paging=never'");
    v3 = clap_builder::builder::command::Command::arg(&v14, &v0);
    v14 = clap_builder::builder::arg::Arg::new("pager");
    v0 = clap_builder::builder::arg::Arg::long(&v14, "pager");
    v14 = clap_builder::builder::arg::Arg::overrides_with(&v0, "pager");
    v0 = clap_builder::builder::arg::Arg::value_name(&v14, "command");
    memcpy(&v14, &v0, 592);
    v15 = 0x1000 | v1;
    v16 = v2;
    v0 = clap_builder::builder::arg::Arg::help(&v14, "Determine which pager to use.");
    v19 = clap_builder::builder::arg::Arg::long_help(&v0, "Determine which pager is used. This option will override the PAGER and BAT_PAGER environment variables. The default pager is \'less\'. If you provide \'--pager=builtin\', use the built-in \'minus\' pager. To control when the pager is used, see the \'--paging\' option. Example: \'--pager \"less -RF\"\'.");
    v14 = clap_builder::builder::command::Command::arg(&v3, &v19);
    v3 = clap_builder::builder::arg::Arg::new("map-syntax");
    v0 = clap_builder::builder::arg::Arg::short(&v3, 109);
    v3 = clap_builder::builder::arg::Arg::long(&v0, "map-syntax");
    v0 = clap_builder::builder::arg::Arg::action(&v3, 1);
    v3 = clap_builder::builder::arg::Arg::value_name(&v0, "glob:syntax");
    v0 = clap_builder::builder::arg::Arg::help(&v3, "Use the specified syntax for files matching the glob pattern ('*.cpp:C++').");
    v19 = clap_builder::builder::arg::Arg::long_help(&v0, "Map a glob pattern to an existing syntax name. The glob pattern is matched on the full path and the filename. For example, to highlight *.build files with the Python syntax, use -m '*.build:Python'. To highlight files named '.myignore' with the Git Ignore syntax, use -m '.myignore:Git Ignore'. Note that the right-hand side is the *name* of the syntax, not a file extension.");
    v3 = clap_builder::builder::command::Command::arg(&v14, &v19);
    v14 = clap_builder::builder::arg::Arg::new("ignored-suffix");
    v0 = clap_builder::builder::arg::Arg::action(&v14, 1);
    v14 = clap_builder::builder::arg::Arg::long(&v0, "ignored-suffix");
    memcpy(&v0, &v14, 592);
    v1 = 0x1000 | v15;
    v2 = v16;
    v19 = clap_builder::builder::arg::Arg::help(&v0, "Ignore extension. For example:\n  \'bat --ignored-suffix \".dev\" my_file.json.dev\' will use JSON syntax, and ignore \'.dev\'");
    v14 = clap_builder::builder::command::Command::arg(&v3, &v19);
    v3 = clap_builder::builder::arg::Arg::new("theme");
    v0 = clap_builder::builder::arg::Arg::long(&v3, "theme");
    v3 = clap_builder::builder::arg::Arg::overrides_with(&v0, "theme");
    v0 = clap_builder::builder::arg::Arg::help(&v3, "Set the color theme for syntax highlighting.");
    v19 = clap_builder::builder::arg::Arg::long_help(&v0, "Set the theme for syntax highlighting. Use \'--list-themes\' to see all available themes. To set a default theme, add the \'--theme=\"...\"\' option to the configuration file or export the BAT_THEME environment variable (e.g.: export BAT_THEME=\"...\").\n\nSpecial values:\n\n  * auto: Picks a dark or light theme depending on the terminal\'s colors (default).\n          Use \'--theme-light\' and \'--theme-dark\' to customize the selected theme.\n    * auto:always: Detect the terminal\'s colors even when the output is redirected.\n    * auto:system: Detect the color scheme from the system-wide preference (macOS only).\n  * dark: Use the dark theme specified by \'--theme-dark\'.\n  * light: Use the light theme specified by \'--theme-light\'.");
    v3 = clap_builder::builder::command::Command::arg(&v14, &v19);
    v14 = clap_builder::builder::arg::Arg::new("theme-light");
    v0 = clap_builder::builder::arg::Arg::long(&v14, "theme-light");
    v14 = clap_builder::builder::arg::Arg::overrides_with(&v0, "theme-light");
    v0 = clap_builder::builder::arg::Arg::value_name(&v14, "theme");
    v14 = clap_builder::builder::arg::Arg::help(&v0, "Sets the color theme for syntax highlighting used for light backgrounds.");
    v0 = clap_builder::builder::arg::Arg::long_help(&v14, "Sets the theme name for syntax highlighting used when the terminal uses a light background. Use \'--list-themes\' to see all available themes. To set a default theme, add the \'--theme-light=\"...\" option to the configuration file or export the BAT_THEME_LIGHT environment variable (e.g. export BAT_THEME_LIGHT=\"...\").");
    v14 = clap_builder::builder::command::Command::arg(&v3, &v0);
    v3 = clap_builder::builder::arg::Arg::new("theme-dark");
    v0 = clap_builder::builder::arg::Arg::long(&v3, "theme-dark");
    v3 = clap_builder::builder::arg::Arg::overrides_with(&v0, "theme-dark");
    v0 = clap_builder::builder::arg::Arg::value_name(&v3, "theme");
    v3 = clap_builder::builder::arg::Arg::help(&v0, "Sets the color theme for syntax highlighting used for dark backgrounds.");
    v0 = clap_builder::builder::arg::Arg::long_help(&v3, "Sets the theme name for syntax highlighting used when the terminal uses a dark background. Use \'--list-themes\' to see all available themes. To set a default theme, add the \'--theme-dark=\"...\" option to the configuration file or export the BAT_THEME_DARK environment variable (e.g. export BAT_THEME_DARK=\"...\").");
    v3 = clap_builder::builder::command::Command::arg(&v14, &v0);
    v14 = clap_builder::builder::arg::Arg::new("list-themes");
    v0 = clap_builder::builder::arg::Arg::long(&v14, "list-themes");
    v14 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v0 = clap_builder::builder::arg::Arg::help(&v14, "Display all supported highlighting themes.");
    v19 = clap_builder::builder::arg::Arg::long_help(&v0, "Display a list of supported themes for syntax highlighting.");
    v14 = clap_builder::builder::command::Command::arg(&v3, &v19);
    v3 = clap_builder::builder::arg::Arg::new("squeeze-blank");
    v0 = clap_builder::builder::arg::Arg::long(&v3, "squeeze-blank");
    v3 = clap_builder::builder::arg::Arg::short(&v0, 115);
    v0 = clap_builder::builder::arg::Arg::action(&v3, 2);
    v3 = clap_builder::builder::arg::Arg::help(&v0, "Squeeze consecutive empty lines.");
    v0 = clap_builder::builder::arg::Arg::long_help(&v3, "Squeeze consecutive empty lines into a single empty line.");
    v3 = clap_builder::builder::command::Command::arg(&v14, &v0);
    v14 = clap_builder::builder::arg::Arg::new("squeeze-limit");
    v0 = clap_builder::builder::arg::Arg::long(&v14, "squeeze-limit");
    v14 = clap_builder::builder::arg::Arg::value_parser(&v0);
    v0 = clap_builder::builder::arg::Arg::long_help(&v14, "Set the maximum number of consecutive empty lines to be printed.");
    memcpy(&v19, &v0, 592);
    v20 = 0x1000 | v1;
    v21 = v2;
    v14 = clap_builder::builder::command::Command::arg(&v3, &v19);
    v3 = clap_builder::builder::arg::Arg::new("strip-ansi");
    v0 = clap_builder::builder::arg::Arg::long(&v3, "strip-ansi");
    v3 = clap_builder::builder::arg::Arg::overrides_with(&v0, "strip-ansi");
    v0 = clap_builder::builder::arg::Arg::value_name(&v3, "when");
    v19 = struct48 {
        field_0: "auto"
        field_16: "always"
        field_32: "never"
    };
    v3 = clap_builder::builder::arg::Arg::value_parser(&v0, &v19);
    v0 = clap_builder::builder::arg::Arg::default_value(&v3, "never");
    memcpy(&v3, &v0, 592);
    v8 = 0x400 | v1;
    v9 = v2;
    v0 = clap_builder::builder::arg::Arg::help(&v3, "Strip colors from the input (auto, always, *never*)");
    v3 = clap_builder::builder::arg::Arg::long_help(&v0, "Specify when to strip ANSI escape sequences from the input. The automatic mode will remove escape sequences unless the syntax highlighting language is plain text. Possible values: auto, always, *never*.");
    memcpy(&v0, &v3, 592);
    v1 = 0x1000 | v8;
    v2 = v9;
    v3 = clap_builder::builder::command::Command::arg(&v14, &v0);
    v14 = clap_builder::builder::arg::Arg::new("style");
    v0 = clap_builder::builder::arg::Arg::long(&v14, "style");
    v14 = clap_builder::builder::arg::Arg::action(&v0, 1);
    v0 = clap_builder::builder::arg::Arg::value_name(&v14, "components");
    v14 = clap_builder::builder::arg::Arg::value_parser(&v0);
    v0 = clap_builder::builder::arg::Arg::help(&v14, "Comma-separated list of style elements to display (*default*, auto, full, plain, changes, header, header-filename, header-filesize, grid, rule, numbers, snip).");
    v19 = clap_builder::builder::arg::Arg::long_help(&v0, "Configure which elements (line numbers, file headers, grid borders, Git modifications, ..) to display in addition to the file contents. The argument is a comma-separated list of components to display (e.g. \'numbers,changes,grid\') or a pre-defined style (\'full\'). To set a default style, add the \'--style=\"..\"\' option to the configuration file or export the BAT_STYLE environment variable (e.g.: export BAT_STYLE=\"..\").\n\nWhen styles are specified in multiple places, the \"nearest\" set of styles take precedence. The command-line arguments are the highest priority, followed by the BAT_STYLE environment variable, and then the configuration file. If any set of styles consists entirely of components prefixed with \"+\" or \"-\", it will modify the previous set of styles instead of replacing them.\n\nBy default, the following components are enabled:\n  changes, grid, header-filename, numbers, snip\n\nPossible values:\n\n  * default: enables recommended style components (default).\n  * full: enables all available components.\n  * auto: same as \'default\', unless the output is piped.\n  * plain: disables all available components.\n  * changes: show Git modification markers.\n  * header: alias for \'header-filename\'.\n  * header-filename: show filenames before the content.\n  * header-filesize: show file sizes before the content.\n  * grid: vertical/horizontal lines to separate side bar\n          and the header from the content.\n  * rule: horizontal lines to delimit files.\n  * numbers: show line numbers in the side bar.\n  * snip: draw separation lines between distinct line ranges.");
    v14 = clap_builder::builder::command::Command::arg(&v3, &v19);
    v3 = clap_builder::builder::arg::Arg::new("line-range");
    v0 = clap_builder::builder::arg::Arg::long(&v3, "line-range");
    v3 = clap_builder::builder::arg::Arg::short(&v0, 114);
    v0 = clap_builder::builder::arg::Arg::action(&v3, 1);
    v3 = clap_builder::builder::arg::Arg::value_name(&v0, "N:M");
    v0 = clap_builder::builder::arg::Arg::help(&v3, "Only print the lines from N to M.");
    v19 = clap_builder::builder::arg::Arg::long_help(&v0, "Only print the specified range of lines for each file. For example:\n  '--line-range 30:40' prints lines 30 to 40\n  '--line-range :40' prints lines 1 to 40\n  '--line-range 40:' prints lines 40 to the end of the file\n  '--line-range 40' only prints line 40\n  '--line-range 30:+10' prints lines 30 to 40\n  '--line-range 35::5' prints lines 30 to 40 (line 35 with 5 lines of context)\n  '--line-range 30:40:2' prints lines 28 to 42 (range 30-40 with 2 lines of context)");
    v3 = clap_builder::builder::command::Command::arg(&v14, &v19);
    v14 = clap_builder::builder::arg::Arg::new("list-languages");
    v0 = clap_builder::builder::arg::Arg::long(&v14, "list-languages");
    v14 = clap_builder::builder::arg::Arg::short(&v0, 76);
    v0 = clap_builder::builder::arg::Arg::action(&v14, 2);
    v14 = clap_builder::builder::arg::Arg::conflicts_with(&v0, "list-themes");
    v0 = clap_builder::builder::arg::Arg::help(&v14, "Display all supported languages.");
    v19 = clap_builder::builder::arg::Arg::long_help(&v0, "Display a list of supported languages for syntax highlighting.");
    v14 = clap_builder::builder::command::Command::arg(&v3, &v19);
    v3 = clap_builder::builder::arg::Arg::new("unbuffered");
    v0 = clap_builder::builder::arg::Arg::short(&v3, 117);
    v3 = clap_builder::builder::arg::Arg::long(&v0, "unbuffered");
    v0 = clap_builder::builder::arg::Arg::action(&v3, 2);
    memcpy(&v3, &v0, 592);
    v8 = 0x1000 | v1;
    v9 = v2;
    v0 = clap_builder::builder::arg::Arg::long_help(&v3, "This option exists for POSIX-compliance reasons ('u' is for 'unbuffered'). The output is always unbuffered - this option is simply ignored.");
    v3 = clap_builder::builder::command::Command::arg(&v14, &v0);
    v14 = clap_builder::builder::arg::Arg::new("no-config");
    v0 = clap_builder::builder::arg::Arg::long(&v14, "no-config");
    v14 = clap_builder::builder::arg::Arg::action(&v0, 2);
    memcpy(&v0, &v14, 592);
    v1 = v15 | 4;
    v2 = v16;
    v19 = clap_builder::builder::arg::Arg::help(&v0, "Do not use the configuration file");
    v14 = clap_builder::builder::command::Command::arg(&v3, &v19);
    v3 = clap_builder::builder::arg::Arg::new("no-custom-assets");
    v0 = clap_builder::builder::arg::Arg::long(&v3, "no-custom-assets");
    v3 = clap_builder::builder::arg::Arg::action(&v0, 2);
    memcpy(&v0, &v3, 592);
    v1 = v8 | 4;
    v2 = v9;
    v3 = clap_builder::builder::arg::Arg::help(&v0, "Do not load custom assets");
    v23 = clap_builder::builder::command::Command::arg(&v14, &v3);
    memcpy(&v14, &v23, 712);
    v3 = clap_builder::builder::arg::Arg::new("completion");
    v0 = clap_builder::builder::arg::Arg::long(&v3, "completion");
    v3 = clap_builder::builder::arg::Arg::value_name(&v0, "SHELL");
    v19 = struct64 {
        field_0: "bash"
        field_16: "fish"
        field_32: "ps1"
        field_48: "zsh"
    };
    v0 = clap_builder::builder::arg::Arg::value_parser(&v3, &v19);
    v3 = clap_builder::builder::arg::Arg::help(&v0, "Show shell completion for a certain shell. [possible values: bash, fish, zsh, ps1]");
    v23 = clap_builder::builder::command::Command::arg(&v14, &v3);
    memcpy(&v14, &v23, 712);
    v3 = clap_builder::builder::arg::Arg::new("config-file");
    v0 = clap_builder::builder::arg::Arg::long(&v3, "config-file");
    v3 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v0 = clap_builder::builder::arg::Arg::conflicts_with(&v3, "list-languages");
    v3 = clap_builder::builder::arg::Arg::conflicts_with(&v0, "list-themes");
    memcpy(&v0, &v3, 592);
    v1 = v8 | 4;
    v2 = v9;
    v19 = clap_builder::builder::arg::Arg::help(&v0, "Show path to the configuration file.");
    v3 = clap_builder::builder::command::Command::arg(&v14, &v19);
    v14 = clap_builder::builder::arg::Arg::new("generate-config-file");
    v0 = clap_builder::builder::arg::Arg::long(&v14, "generate-config-file");
    v14 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v0 = clap_builder::builder::arg::Arg::conflicts_with(&v14, "list-languages");
    v14 = clap_builder::builder::arg::Arg::conflicts_with(&v0, "list-themes");
    memcpy(&v0, &v14, 592);
    v1 = v15 | 4;
    v2 = v16;
    v19 = clap_builder::builder::arg::Arg::help(&v0, "Generates a default configuration file.");
    v14 = clap_builder::builder::command::Command::arg(&v3, &v19);
    v3 = clap_builder::builder::arg::Arg::new("config-dir");
    v0 = clap_builder::builder::arg::Arg::long(&v3, "config-dir");
    v3 = clap_builder::builder::arg::Arg::action(&v0, 2);
    memcpy(&v0, &v3, 592);
    v1 = v8 | 4;
    v2 = v9;
    v19 = clap_builder::builder::arg::Arg::help(&v0, "Show bat's configuration directory.");
    v3 = clap_builder::builder::command::Command::arg(&v14, &v19);
    v14 = clap_builder::builder::arg::Arg::new("cache-dir");
    v0 = clap_builder::builder::arg::Arg::long(&v14, "cache-dir");
    v14 = clap_builder::builder::arg::Arg::action(&v0, 2);
    memcpy(&v0, &v14, 592);
    v1 = v15 | 4;
    v2 = v16;
    v19 = clap_builder::builder::arg::Arg::help(&v0, "Show bat's cache directory.");
    v14 = clap_builder::builder::command::Command::arg(&v3, &v19);
    v3 = clap_builder::builder::arg::Arg::new("diagnostic");
    v0 = clap_builder::builder::arg::Arg::long(&v3, "diagnostic");
    v3 = clap_builder::builder::arg::Arg::alias(&v0, "diagnostics");
    v0 = clap_builder::builder::arg::Arg::action(&v3, 2);
    memcpy(&v3, &v0, 592);
    v8 = v1 | 0x1000;
    v9 = v2;
    v0 = clap_builder::builder::arg::Arg::help(&v3, "Show diagnostic information for bug reports.");
    v3 = clap_builder::builder::command::Command::arg(&v14, &v0);
    v14 = clap_builder::builder::arg::Arg::new("acknowledgements");
    v0 = clap_builder::builder::arg::Arg::long(&v14, "acknowledgements");
    v14 = clap_builder::builder::arg::Arg::action(&v0, 2);
    memcpy(&v0, &v14, 592);
    v1 = 0x1000 | v15;
    v2 = v16;
    v19 = clap_builder::builder::arg::Arg::help(&v0, "Show acknowledgements.");
    v14 = clap_builder::builder::command::Command::arg(&v3, &v19);
    v3 = clap_builder::builder::arg::Arg::new("set-terminal-title");
    v0 = clap_builder::builder::arg::Arg::long(&v3, "set-terminal-title");
    v3 = clap_builder::builder::arg::Arg::action(&v0, 2);
    memcpy(&v0, &v3, 592);
    v1 = 0x1000 | v8;
    v2 = v9;
    v3 = clap_builder::builder::arg::Arg::help(&v0, "Sets terminal title to filenames when using a pager.");
    v23 = clap_builder::builder::command::Command::arg(&v14, &v3);
    v14 = std::fs::metadata(a1, v28);
    if v14 as i64 != 2 {
        memcpy(a0, &v23, 712);
        return;
    }
    memcpy(&v0, &v23, 712);
    v14 = clap_builder::builder::command::Command::new("cache");
    memcpy(&v3, &v14, 700);
    v10 = &g_800000 | v17;
    v12 = v14.field_0;
    v14 = clap_builder::builder::command::Command::about(&v3, "Modify the syntax-definition and theme cache");
    v3 = clap_builder::builder::arg::Arg::new("build");
    v19 = clap_builder::builder::arg::Arg::long(&v3, "build");
    v3 = clap_builder::builder::arg::Arg::short(&v19, 98);
    v19 = clap_builder::builder::arg::Arg::action(&v3, 2);
    v3 = clap_builder::builder::arg::Arg::help(&v19, "Initialize (or update) the syntax/theme cache.");
    v19 = clap_builder::builder::arg::Arg::long_help(&v3, "Initialize (or update) the syntax/theme cache by loading from the source directory (default: the configuration directory).");
    v3 = clap_builder::builder::command::Command::arg(&v14, &v19);
    v14 = clap_builder::builder::arg::Arg::new("clear");
    v19 = clap_builder::builder::arg::Arg::long(&v14, "clear");
    v14 = clap_builder::builder::arg::Arg::short(&v19, 99);
    v19 = clap_builder::builder::arg::Arg::action(&v14, 2);
    v24 = clap_builder::builder::arg::Arg::help(&v19, "Remove the cached syntax definitions and themes.");
    v14 = clap_builder::builder::command::Command::arg(&v3, &v24);
    v3 = struct90 {
        field_0: 0
        field_8: 8
        field_16: 0
        field_32: 8
        field_40: 0
        field_56: ""
        field_72: ""
        field_88: 0
    };
    v19 = clap_builder::builder::arg_group::ArgGroup::id(&v3);
    v24 = struct32 {
        field_0: "build"
        field_16: "clear"
    };
    v4 = clap_builder::builder::arg_group::ArgGroup::args(&v19, &v24);
    v5 = 1;
    v29 = v4.field_32;
    v30 = v4.field_48;
    v19 = struct96 {
        field_0: v4.field_0
        field_16: 0
        field_32: v29
        field_48: v30
        field_64: *(&v4.field_64 as &i128)
        field_80: 0
        field_88: 1
        field_89: v6
        field_93: v7
        field_95: *((&v4.field_88 as &char + 7) as &i8)
    };
    v3 = clap_builder::builder::command::Command::group(&v14, &v19);
    v14 = clap_builder::builder::arg::Arg::new("source");
    v19 = clap_builder::builder::arg::Arg::long(&v14, "source");
    v14 = clap_builder::builder::arg::Arg::requires(&v19);
    v19 = clap_builder::builder::arg::Arg::value_name(&v14, "dir");
    v24 = clap_builder::builder::arg::Arg::help(&v19, "Use a different directory to load syntaxes and themes from.");
    v14 = clap_builder::builder::command::Command::arg(&v3, &v24);
    v3 = clap_builder::builder::arg::Arg::new("target");
    v19 = clap_builder::builder::arg::Arg::long(&v3, "target");
    v3 = clap_builder::builder::arg::Arg::requires(&v19);
    v19 = clap_builder::builder::arg::Arg::value_name(&v3, "dir");
    v24 = clap_builder::builder::arg::Arg::help(&v19, "Use a different directory to store the cached syntax and theme set.");
    v3 = clap_builder::builder::command::Command::arg(&v14, &v24);
    v14 = clap_builder::builder::arg::Arg::new("blank");
    v19 = clap_builder::builder::arg::Arg::long(&v14, "blank");
    v14 = clap_builder::builder::arg::Arg::action(&v19, 2);
    v19 = clap_builder::builder::arg::Arg::requires(&v14);
    v24 = clap_builder::builder::arg::Arg::help(&v19, "Create completely new syntax and theme sets (instead of appending to the default sets).");
    v14 = clap_builder::builder::command::Command::arg(&v3, &v24);
    v3 = clap_builder::builder::arg::Arg::new("acknowledgements");
    v19 = clap_builder::builder::arg::Arg::long(&v3, "acknowledgements");
    v3 = clap_builder::builder::arg::Arg::action(&v19, 2);
    v19 = clap_builder::builder::arg::Arg::requires(&v3);
    v24 = clap_builder::builder::arg::Arg::help(&v19, "Build acknowledgements.bin.");
    v3 = clap_builder::builder::command::Command::arg(&v14, &v24);
    v14 = clap_builder::builder::command::Command::subcommand(&v0, &v3);
    clap_builder::builder::command::Command::after_long_help(a0, &v14);
    return;
}
