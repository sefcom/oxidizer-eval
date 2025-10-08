fn just::config::Config::app() -> : struct712 {
    let a0: u64;  // rdi
    let v0: struct96;  // [bp-0xac8], Other Possible Types: struct640, u8
    let v1: u32;  // [bp-0xac7]
    let v2: u8;  // [bp-0xac0]
    let v3: u16;  // [bp-0xabc]
    let v4: u64;  // [bp-0xaba]
    let v5: u64;  // [bp-0xab4]
    let v6: u8;  // [bp-0xaac]
    let v7: u32;  // [bp-0xaab]
    let v8: u8;  // [bp-0xaa4]
    let v9: u16;  // [bp-0xaa0]
    let v10: u8;  // [bp-0xa9e]
    let v11: u32;  // [bp-0xa9d]
    let v12: u8;  // [bp-0xa96]
    let v13: u16;  // [bp-0xa92]
    let v14: u8;  // [bp-0xa90]
    let v15: u32;  // [bp-0xa8f]
    let v16: u8;  // [bp-0xa88]
    let v17: u16;  // [bp-0xa84]
    let v18: u8;  // [bp-0xa82]
    let v19: u32;  // [bp-0xa81]
    let v20: u8;  // [bp-0xa7a]
    let v21: u16;  // [bp-0xa76]
    let v22: u32;  // [bp-0xa74]
    let v23: u8;  // [bp-0xa70]
    let v24: u8;  // [bp-0xa6c]
    let v25: u16;  // [bp-0xa68]
    let v26: u128;  // [bp-0xa66]
    let v27: iNone;  // [bp-0xa5a]
    let v28: u32;  // [bp-0x850]
    let v29: u32;  // [bp-0x84c]
    let v30: struct90;  // [bp-0x848], Other Possible Types: struct712, struct640
    let v31: u32;  // [bp-0x5d0]
    let v32: u32;  // [bp-0x5cc]
    let v33: u32;  // [bp-0x58c]
    let v34: u64;  // [bp-0x588]
    let v35: u64;  // [bp-0x580]
    let v36: struct437;  // [bp-0x568], Other Possible Types: struct712, struct640
    let v37: struct86;  // [bp-0x568]
    let v38: struct712;  // [bp-0x568]
    let v39: struct712;  // [bp-0x568]
    let v40: u64;  // [bp-0x55a]
    let v41: u32;  // [bp-0x552]
    let v42: u16;  // [bp-0x54e]
    let v43: u32;  // [bp-0x2f0]
    let v44: u32;  // [bp-0x2ac]
    let v45: u64;  // [bp-0x2a8]
    let v46: struct32;  // [bp-0x2a0], Other Possible Types: struct96, struct640, u64
    let v48: iNone;  // xmm1

    v36 = clap_builder::builder::command::Command::new();
    v30 = clap_builder::builder::command::Command::bin_name(&v36);
    v36 = clap_builder::builder::command::Command::version(&v30);
    v30 = clap_builder::builder::command::Command::author(&v36);
    v39 = clap_builder::builder::command::Command::about(&v30);
    memcpy(&v30, &v39, 700);
    v33 = v44 | 32;
    v34 = v45;
    v37 = clap_builder::builder::styling::Styles::styled();
    v40 = 0x300000100;
    v41 = 3;
    v42 = 1;
    v4 = 0x300000100;
    v5 = *((&v40 as &char + 6) as &i64);
    v48 = *((&(&v39)[13].field_0 as &char + 6) as &i128);
    v26 = *((&(&v39)[12].field_0 as &char + 2) as &i128);
    v27 = v48;
    v0 = 0;
    v1 = 50331651;
    v2 = 3;
    v3 = 1;
    v6 = 0;
    v7 = 50331651;
    v8 = 3;
    v9 = 1;
    v10 = 0;
    v11 = 50331650;
    v12 = 3;
    v13 = 0;
    v14 = 0;
    v15 = 50331654;
    v16 = 3;
    v17 = 0;
    v18 = 0;
    v19 = 50331650;
    v20 = 3;
    v21 = 0;
    v22 = 0x100;
    v23 = 3;
    v24 = 3;
    v25 = 0;
    v36 = clap_builder::builder::command::Command::styles(&v30, &v0);
    v30 = clap_builder::builder::arg::Arg::new("ALIAS_STYLE");
    v0 = clap_builder::builder::arg::Arg::long(&v30, "alias-style");
    v30 = clap_builder::builder::arg::Arg::env(&v0, "JUST_ALIAS_STYLE");
    v0 = clap_builder::builder::arg::Arg::action(&v30, 0);
    v30 = clap_builder::builder::arg::Arg::value_parser(&v0);
    v0 = clap_builder::builder::arg::Arg::default_value(&v30, "right");
    v30 = clap_builder::builder::arg::Arg::help(&v0, "Set list command alias display style");
    v0 = clap_builder::builder::arg::Arg::conflicts_with(&v30, "NO-ALIASES");
    v30 = clap_builder::builder::command::Command::arg(&v36, &v0);
    v36 = clap_builder::builder::arg::Arg::new("CEILING");
    v0 = clap_builder::builder::arg::Arg::long(&v36, "ceiling");
    v36 = clap_builder::builder::arg::Arg::env(&v0, "JUST_CEILING");
    v0 = clap_builder::builder::arg::Arg::action(&v36, 0);
    v35 = 3;
    v36 = clap_builder::builder::arg::Arg::value_parser(&v0, &v35);
    v0 = clap_builder::builder::arg::Arg::help(&v36, "Do not ascend above <CEILING> directory when searching for a justfile.");
    v36 = clap_builder::builder::command::Command::arg(&v30, &v0);
    v30 = clap_builder::builder::arg::Arg::new("CHECK");
    v0 = clap_builder::builder::arg::Arg::long(&v30, "check");
    v30 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v0 = clap_builder::builder::arg::Arg::requires(&v30, "FORMAT");
    v46 = clap_builder::builder::arg::Arg::help(&v0, "Run `--fmt` in 'check' mode. Exits with 0 if justfile is formatted correctly. Exits with 1 and prints a diff if formatting is required.");
    v30 = clap_builder::builder::command::Command::arg(&v36, &v46);
    v36 = clap_builder::builder::arg::Arg::new("CHOOSER");
    v0 = clap_builder::builder::arg::Arg::long(&v36, "chooser");
    v36 = clap_builder::builder::arg::Arg::env(&v0, "JUST_CHOOSER");
    v0 = clap_builder::builder::arg::Arg::action(&v36, 0);
    v46 = clap_builder::builder::arg::Arg::help(&v0, "Override binary invoked by `--choose`");
    v36 = clap_builder::builder::command::Command::arg(&v30, &v46);
    v30 = clap_builder::builder::arg::Arg::new("CLEAR-SHELL-ARGS");
    v0 = clap_builder::builder::arg::Arg::long(&v30, "clear-shell-args");
    v30 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v0 = clap_builder::builder::arg::Arg::overrides_with(&v30, "SHELL-ARG");
    v46 = clap_builder::builder::arg::Arg::help(&v0, "Clear shell arguments");
    v30 = clap_builder::builder::command::Command::arg(&v36, &v46);
    v36 = clap_builder::builder::arg::Arg::new("COLOR");
    v0 = clap_builder::builder::arg::Arg::long(&v36, "color");
    v36 = clap_builder::builder::arg::Arg::env(&v0, "JUST_COLOR");
    v0 = clap_builder::builder::arg::Arg::action(&v36, 0);
    v36 = clap_builder::builder::arg::Arg::value_parser(&v0);
    v0 = clap_builder::builder::arg::Arg::default_value(&v36, "auto");
    v46 = clap_builder::builder::arg::Arg::help(&v0, "Print colorful output");
    v36 = clap_builder::builder::command::Command::arg(&v30, &v46);
    v30 = clap_builder::builder::arg::Arg::new("COMMAND-COLOR");
    v0 = clap_builder::builder::arg::Arg::long(&v30, "command-color");
    v30 = clap_builder::builder::arg::Arg::env(&v0, "JUST_COMMAND_COLOR");
    v0 = clap_builder::builder::arg::Arg::action(&v30, 0);
    v30 = clap_builder::builder::arg::Arg::value_parser(&v0);
    v0 = clap_builder::builder::arg::Arg::help(&v30, "Echo recipe lines in <COMMAND-COLOR>");
    v30 = clap_builder::builder::command::Command::arg(&v36, &v0);
    v36 = clap_builder::builder::arg::Arg::new("CYGPATH");
    v0 = clap_builder::builder::arg::Arg::long(&v36, "cygpath");
    v36 = clap_builder::builder::arg::Arg::env(&v0, "JUST_CYGPATH");
    v0 = clap_builder::builder::arg::Arg::action(&v36, 0);
    v36 = clap_builder::builder::arg::Arg::value_parser(&v0, &v35);
    v0 = clap_builder::builder::arg::Arg::default_value(&v36, "cygpath");
    v46 = clap_builder::builder::arg::Arg::help(&v0, "Use binary at <CYGPATH> to convert between unix and Windows paths.");
    v36 = clap_builder::builder::command::Command::arg(&v30, &v46);
    v30 = clap_builder::builder::arg::Arg::new("DOTENV-FILENAME");
    v0 = clap_builder::builder::arg::Arg::long(&v30, "dotenv-filename");
    v30 = clap_builder::builder::arg::Arg::action(&v0, 0);
    v0 = clap_builder::builder::arg::Arg::help(&v30, "Search for environment file named <DOTENV-FILENAME> instead of `.env`");
    v46 = clap_builder::builder::arg::Arg::conflicts_with(&v0, "DOTENV-PATH");
    v30 = clap_builder::builder::command::Command::arg(&v36, &v46);
    v36 = clap_builder::builder::arg::Arg::new("DOTENV-PATH");
    v0 = clap_builder::builder::arg::Arg::short(&v36, 69);
    v36 = clap_builder::builder::arg::Arg::long(&v0, "dotenv-path");
    v0 = clap_builder::builder::arg::Arg::action(&v36, 0);
    v36 = clap_builder::builder::arg::Arg::value_parser(&v0, &v35);
    v0 = clap_builder::builder::arg::Arg::help(&v36, "Load <DOTENV-PATH> as environment file instead of searching for one");
    v36 = clap_builder::builder::command::Command::arg(&v30, &v0);
    v30 = clap_builder::builder::arg::Arg::new("DRY-RUN");
    v0 = clap_builder::builder::arg::Arg::short(&v30, 110);
    v30 = clap_builder::builder::arg::Arg::long(&v0, "dry-run");
    v0 = clap_builder::builder::arg::Arg::env(&v30, "JUST_DRY_RUN");
    v30 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v0 = clap_builder::builder::arg::Arg::help(&v30, "Print what just would do without doing it");
    v46 = clap_builder::builder::arg::Arg::conflicts_with(&v0, "QUIET");
    v30 = clap_builder::builder::command::Command::arg(&v36, &v46);
    v36 = clap_builder::builder::arg::Arg::new("DUMP-FORMAT");
    v0 = clap_builder::builder::arg::Arg::long(&v36, "dump-format");
    v36 = clap_builder::builder::arg::Arg::env(&v0, "JUST_DUMP_FORMAT");
    v0 = clap_builder::builder::arg::Arg::action(&v36, 0);
    v36 = clap_builder::builder::arg::Arg::value_parser(&v0);
    v0 = clap_builder::builder::arg::Arg::default_value(&v36, "just");
    v36 = clap_builder::builder::arg::Arg::value_name(&v0, "FORMAT");
    v0 = clap_builder::builder::arg::Arg::help(&v36, "Dump justfile as <FORMAT>");
    v36 = clap_builder::builder::command::Command::arg(&v30, &v0);
    v30 = clap_builder::builder::arg::Arg::new("EXPLAIN");
    v0 = clap_builder::builder::arg::Arg::action(&v30, 2);
    v30 = clap_builder::builder::arg::Arg::long(&v0, "explain");
    v0 = clap_builder::builder::arg::Arg::env(&v30, "JUST_EXPLAIN");
    v46 = clap_builder::builder::arg::Arg::help(&v0, "Print recipe doc comment before running it");
    v30 = clap_builder::builder::command::Command::arg(&v36, &v46);
    v36 = clap_builder::builder::arg::Arg::new("GLOBAL-JUSTFILE");
    v0 = clap_builder::builder::arg::Arg::action(&v36, 2);
    v36 = clap_builder::builder::arg::Arg::long(&v0, "global-justfile");
    v0 = clap_builder::builder::arg::Arg::short(&v36, 103);
    v36 = clap_builder::builder::arg::Arg::conflicts_with(&v0, "JUSTFILE");
    v0 = clap_builder::builder::arg::Arg::conflicts_with(&v36, "WORKING-DIRECTORY");
    v46 = clap_builder::builder::arg::Arg::help(&v0, "Use global justfile");
    v36 = clap_builder::builder::command::Command::arg(&v30, &v46);
    v30 = clap_builder::builder::arg::Arg::new("HIGHLIGHT");
    v0 = clap_builder::builder::arg::Arg::long(&v30, "highlight");
    v30 = clap_builder::builder::arg::Arg::env(&v0, "JUST_HIGHLIGHT");
    v0 = clap_builder::builder::arg::Arg::action(&v30, 2);
    v30 = clap_builder::builder::arg::Arg::help(&v0, "Highlight echoed recipe lines in bold");
    v0 = clap_builder::builder::arg::Arg::overrides_with(&v30, "NO-HIGHLIGHT");
    v30 = clap_builder::builder::command::Command::arg(&v36, &v0);
    v36 = clap_builder::builder::arg::Arg::new("JUSTFILE");
    v0 = clap_builder::builder::arg::Arg::short(&v36, 102);
    v36 = clap_builder::builder::arg::Arg::long(&v0, "justfile");
    v0 = clap_builder::builder::arg::Arg::env(&v36, "JUST_JUSTFILE");
    v36 = clap_builder::builder::arg::Arg::action(&v0, 0);
    v0 = clap_builder::builder::arg::Arg::value_parser(&v36, &v35);
    v46 = clap_builder::builder::arg::Arg::help(&v0, "Use <JUSTFILE> as justfile");
    v36 = clap_builder::builder::command::Command::arg(&v30, &v46);
    v30 = clap_builder::builder::arg::Arg::new("LIST-HEADING");
    v0 = clap_builder::builder::arg::Arg::long(&v30, "list-heading");
    v30 = clap_builder::builder::arg::Arg::env(&v0, "JUST_LIST_HEADING");
    v0 = clap_builder::builder::arg::Arg::help(&v30, "Print <TEXT> before list");
    v30 = clap_builder::builder::arg::Arg::value_name(&v0, "TEXT");
    v0 = clap_builder::builder::arg::Arg::default_value(&v30, "Available recipes:\n");
    v46 = clap_builder::builder::arg::Arg::action(&v0, 0);
    v30 = clap_builder::builder::command::Command::arg(&v36, &v46);
    v36 = clap_builder::builder::arg::Arg::new("LIST-PREFIX");
    v0 = clap_builder::builder::arg::Arg::long(&v36, "list-prefix");
    v36 = clap_builder::builder::arg::Arg::env(&v0, "JUST_LIST_PREFIX");
    v0 = clap_builder::builder::arg::Arg::help(&v36, "Print <TEXT> before each list item");
    v36 = clap_builder::builder::arg::Arg::value_name(&v0, "TEXT");
    v0 = clap_builder::builder::arg::Arg::default_value(&v36, "    ");
    v46 = clap_builder::builder::arg::Arg::action(&v0, 0);
    v36 = clap_builder::builder::command::Command::arg(&v30, &v46);
    v30 = clap_builder::builder::arg::Arg::new("LIST-SUBMODULES");
    v0 = clap_builder::builder::arg::Arg::long(&v30, "list-submodules");
    v30 = clap_builder::builder::arg::Arg::env(&v0, "JUST_LIST_SUBMODULES");
    v0 = clap_builder::builder::arg::Arg::help(&v30, "List recipes in submodules");
    v30 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v0 = clap_builder::builder::arg::Arg::requires(&v30, "LIST");
    v30 = clap_builder::builder::command::Command::arg(&v36, &v0);
    v36 = clap_builder::builder::arg::Arg::new("NO-ALIASES");
    v0 = clap_builder::builder::arg::Arg::long(&v36, "no-aliases");
    v36 = clap_builder::builder::arg::Arg::env(&v0, "JUST_NO_ALIASES");
    v0 = clap_builder::builder::arg::Arg::action(&v36, 2);
    v46 = clap_builder::builder::arg::Arg::help(&v0, "Don't show aliases in list");
    v36 = clap_builder::builder::command::Command::arg(&v30, &v46);
    v30 = clap_builder::builder::arg::Arg::new("NO-DEPS");
    v0 = clap_builder::builder::arg::Arg::long(&v30, "no-deps");
    v30 = clap_builder::builder::arg::Arg::env(&v0, "JUST_NO_DEPS");
    v0 = clap_builder::builder::arg::Arg::alias(&v30, "no-dependencies");
    v30 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v0 = clap_builder::builder::arg::Arg::help(&v30, "Don't run recipe dependencies");
    v30 = clap_builder::builder::command::Command::arg(&v36, &v0);
    v36 = clap_builder::builder::arg::Arg::new("NO-DOTENV");
    v0 = clap_builder::builder::arg::Arg::long(&v36, "no-dotenv");
    v36 = clap_builder::builder::arg::Arg::env(&v0, "JUST_NO_DOTENV");
    v0 = clap_builder::builder::arg::Arg::action(&v36, 2);
    v46 = clap_builder::builder::arg::Arg::help(&v0, "Don't load `.env` file");
    v36 = clap_builder::builder::command::Command::arg(&v30, &v46);
    v30 = clap_builder::builder::arg::Arg::new("NO-HIGHLIGHT");
    v0 = clap_builder::builder::arg::Arg::long(&v30, "no-highlight");
    v30 = clap_builder::builder::arg::Arg::env(&v0, "JUST_NO_HIGHLIGHT");
    v0 = clap_builder::builder::arg::Arg::action(&v30, 2);
    v30 = clap_builder::builder::arg::Arg::help(&v0, "Don't highlight echoed recipe lines in bold");
    v0 = clap_builder::builder::arg::Arg::overrides_with(&v30, "HIGHLIGHT");
    v30 = clap_builder::builder::command::Command::arg(&v36, &v0);
    v36 = clap_builder::builder::arg::Arg::new("ONE");
    v0 = clap_builder::builder::arg::Arg::long(&v36, "one");
    v36 = clap_builder::builder::arg::Arg::env(&v0, "JUST_ONE");
    v0 = clap_builder::builder::arg::Arg::action(&v36, 2);
    v46 = clap_builder::builder::arg::Arg::help(&v0, "Forbid multiple recipes from being invoked on the command line");
    v36 = clap_builder::builder::command::Command::arg(&v30, &v46);
    v30 = clap_builder::builder::arg::Arg::new("QUIET");
    v0 = clap_builder::builder::arg::Arg::short(&v30, 113);
    v30 = clap_builder::builder::arg::Arg::long(&v0, "quiet");
    v0 = clap_builder::builder::arg::Arg::env(&v30, "JUST_QUIET");
    v30 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v0 = clap_builder::builder::arg::Arg::help(&v30, "Suppress all output");
    v46 = clap_builder::builder::arg::Arg::conflicts_with(&v0, "DRY-RUN");
    v30 = clap_builder::builder::command::Command::arg(&v36, &v46);
    v36 = clap_builder::builder::arg::Arg::new("ALLOW-MISSING");
    v0 = clap_builder::builder::arg::Arg::long(&v36, "allow-missing");
    v36 = clap_builder::builder::arg::Arg::env(&v0, "JUST_ALLOW_MISSING");
    v0 = clap_builder::builder::arg::Arg::action(&v36, 2);
    v46 = clap_builder::builder::arg::Arg::help(&v0, "Ignore missing recipe and module errors");
    v36 = clap_builder::builder::command::Command::arg(&v30, &v46);
    v30 = clap_builder::builder::arg::Arg::new("SET");
    v0 = clap_builder::builder::arg::Arg::long(&v30, "set");
    v30 = clap_builder::builder::arg::Arg::action(&v0, 1);
    v0 = clap_builder::builder::arg::Arg::number_of_values(&v30, 2);
    v46 = struct32 {
        field_0: "VARIABLE"
        field_16: "VALUE"
    };
    v30 = clap_builder::builder::arg::Arg::value_names(&v0, &v46);
    v0 = clap_builder::builder::arg::Arg::help(&v30, "Override <VARIABLE> with <VALUE>");
    v30 = clap_builder::builder::command::Command::arg(&v36, &v0);
    v36 = clap_builder::builder::arg::Arg::new("SHELL");
    v0 = clap_builder::builder::arg::Arg::long(&v36, "shell");
    v36 = clap_builder::builder::arg::Arg::action(&v0, 0);
    v0 = clap_builder::builder::arg::Arg::help(&v36, "Invoke <SHELL> to run recipes");
    v36 = clap_builder::builder::command::Command::arg(&v30, &v0);
    v30 = clap_builder::builder::arg::Arg::new("SHELL-ARG");
    v0 = clap_builder::builder::arg::Arg::long(&v30, "shell-arg");
    v30 = clap_builder::builder::arg::Arg::action(&v0, 1);
    memcpy(&v0, &v30, 632);
    v28 = v31 | 32;
    v29 = v32;
    v30 = clap_builder::builder::arg::Arg::overrides_with(&v0, "CLEAR-SHELL-ARGS");
    v0 = clap_builder::builder::arg::Arg::help(&v30, "Invoke shell with <SHELL-ARG> as an argument");
    v30 = clap_builder::builder::command::Command::arg(&v36, &v0);
    v36 = clap_builder::builder::arg::Arg::new("SHELL-COMMAND");
    v0 = clap_builder::builder::arg::Arg::long(&v36, "shell-command");
    v36 = clap_builder::builder::arg::Arg::requires(&v0, "COMMAND");
    v0 = clap_builder::builder::arg::Arg::action(&v36, 2);
    v46 = clap_builder::builder::arg::Arg::help(&v0, "Invoke <COMMAND> with the shell used to run recipe lines and backticks");
    v36 = clap_builder::builder::command::Command::arg(&v30, &v46);
    v30 = clap_builder::builder::arg::Arg::new("TEMPDIR");
    v0 = clap_builder::builder::arg::Arg::action(&v30, 0);
    v30 = clap_builder::builder::arg::Arg::env(&v0, "JUST_TEMPDIR");
    v0 = clap_builder::builder::arg::Arg::long(&v30, "tempdir");
    v30 = clap_builder::builder::arg::Arg::value_parser(&v0, &v35);
    v0 = clap_builder::builder::arg::Arg::help(&v30, "Save temporary files to <TEMPDIR>.");
    v30 = clap_builder::builder::command::Command::arg(&v36, &v0);
    v36 = clap_builder::builder::arg::Arg::new("TIMESTAMP");
    v0 = clap_builder::builder::arg::Arg::action(&v36, 2);
    v36 = clap_builder::builder::arg::Arg::long(&v0, "timestamp");
    v0 = clap_builder::builder::arg::Arg::env(&v36, "JUST_TIMESTAMP");
    v46 = clap_builder::builder::arg::Arg::help(&v0, "Print recipe command timestamps");
    v36 = clap_builder::builder::command::Command::arg(&v30, &v46);
    v30 = clap_builder::builder::arg::Arg::new("TIMESTAMP-FORMAT");
    v0 = clap_builder::builder::arg::Arg::action(&v30, 0);
    v30 = clap_builder::builder::arg::Arg::long(&v0, "timestamp-format");
    v0 = clap_builder::builder::arg::Arg::env(&v30, "JUST_TIMESTAMP_FORMAT");
    v30 = clap_builder::builder::arg::Arg::default_value(&v0, "%H:%M:%S");
    v0 = clap_builder::builder::arg::Arg::help(&v30, "Timestamp format string");
    v30 = clap_builder::builder::command::Command::arg(&v36, &v0);
    v36 = clap_builder::builder::arg::Arg::new("UNSORTED");
    v0 = clap_builder::builder::arg::Arg::long(&v36, "unsorted");
    v36 = clap_builder::builder::arg::Arg::env(&v0, "JUST_UNSORTED");
    v0 = clap_builder::builder::arg::Arg::short(&v36, 117);
    v36 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v0 = clap_builder::builder::arg::Arg::help(&v36, "Return list and summary entries in source order");
    v36 = clap_builder::builder::command::Command::arg(&v30, &v0);
    v30 = clap_builder::builder::arg::Arg::new("UNSTABLE");
    v0 = clap_builder::builder::arg::Arg::long(&v30, "unstable");
    v30 = clap_builder::builder::arg::Arg::env(&v0, "JUST_UNSTABLE");
    v0 = clap_builder::builder::arg::Arg::action(&v30, 2);
    v30 = clap_builder::builder::arg::Arg::value_parser(&v0);
    v0 = clap_builder::builder::arg::Arg::help(&v30, "Enable unstable features");
    v30 = clap_builder::builder::command::Command::arg(&v36, &v0);
    v36 = clap_builder::builder::arg::Arg::new("VERBOSE");
    v0 = clap_builder::builder::arg::Arg::short(&v36, 118);
    v36 = clap_builder::builder::arg::Arg::long(&v0, "verbose");
    v0 = clap_builder::builder::arg::Arg::env(&v36, "JUST_VERBOSE");
    v36 = clap_builder::builder::arg::Arg::action(&v0, 4);
    v0 = clap_builder::builder::arg::Arg::help(&v36, "Use verbose output");
    v36 = clap_builder::builder::command::Command::arg(&v30, &v0);
    v30 = clap_builder::builder::arg::Arg::new("WORKING-DIRECTORY");
    v0 = clap_builder::builder::arg::Arg::short(&v30, 100);
    v30 = clap_builder::builder::arg::Arg::long(&v0, "working-directory");
    v0 = clap_builder::builder::arg::Arg::env(&v30, "JUST_WORKING_DIRECTORY");
    v30 = clap_builder::builder::arg::Arg::action(&v0, 0);
    v0 = clap_builder::builder::arg::Arg::value_parser(&v30, &v35);
    v30 = clap_builder::builder::arg::Arg::help(&v0, "Use <WORKING-DIRECTORY> as working directory. --justfile must also be set");
    v0 = clap_builder::builder::arg::Arg::requires(&v30, "JUSTFILE");
    v30 = clap_builder::builder::command::Command::arg(&v36, &v0);
    v36 = clap_builder::builder::arg::Arg::new("YES");
    v0 = clap_builder::builder::arg::Arg::long(&v36, "yes");
    v36 = clap_builder::builder::arg::Arg::env(&v0, "JUST_YES");
    v0 = clap_builder::builder::arg::Arg::action(&v36, 2);
    v46 = clap_builder::builder::arg::Arg::help(&v0, "Automatically confirm all recipes.");
    v36 = clap_builder::builder::command::Command::arg(&v30, &v46);
    v30 = clap_builder::builder::arg::Arg::new("CHANGELOG");
    v0 = clap_builder::builder::arg::Arg::long(&v30, "changelog");
    v30 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v0 = clap_builder::builder::arg::Arg::help(&v30, "Print changelog");
    v46 = clap_builder::builder::arg::Arg::help_heading(&v0, "Commands");
    v30 = clap_builder::builder::command::Command::arg(&v36, &v46);
    v36 = clap_builder::builder::arg::Arg::new("CHOOSE");
    v0 = clap_builder::builder::arg::Arg::long(&v36, "choose");
    v36 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v0 = clap_builder::builder::arg::Arg::help(&v36, "Select one or more recipes to run using a binary chooser. If `--chooser` is not passed the chooser defaults to the value of $JUST_CHOOSER, falling back to `fzf`");
    v46 = clap_builder::builder::arg::Arg::help_heading(&v0, "Commands");
    v38 = clap_builder::builder::command::Command::arg(&v30, &v46);
    v30 = clap_builder::builder::arg::Arg::new("COMMAND");
    v0 = clap_builder::builder::arg::Arg::long(&v30, "command");
    v30 = clap_builder::builder::arg::Arg::short(&v0, 99);
    v0 = clap_builder::builder::arg::Arg::num_args(&v30, 0x1);
    memcpy(&v30, &v0, 632);
    v31 = v28 | 32;
    v32 = v29;
    v0 = clap_builder::builder::arg::Arg::action(&v30, 1);
    v46 = 2;
    v30 = clap_builder::builder::arg::Arg::value_parser(&v0, &v46);
    v0 = clap_builder::builder::arg::Arg::help(&v30, "Run an arbitrary command with the working directory, `.env`, overrides, and exports set");
    v46 = clap_builder::builder::arg::Arg::help_heading(&v0, "Commands");
    v30 = clap_builder::builder::command::Command::arg(&v38, &v46);
    v36 = clap_builder::builder::arg::Arg::new("COMPLETIONS");
    v0 = clap_builder::builder::arg::Arg::long(&v36, "completions");
    v36 = clap_builder::builder::arg::Arg::action(&v0, 0);
    v0 = clap_builder::builder::arg::Arg::value_name(&v36, "SHELL");
    v36 = clap_builder::builder::arg::Arg::value_parser(&v0);
    memcpy(&v0, &v36, 632);
    v28 = 0x800 | v43;
    v29 = v43;
    v36 = clap_builder::builder::arg::Arg::help(&v0, "Print shell completion script for <SHELL>");
    v0 = clap_builder::builder::arg::Arg::help_heading(&v36, "Commands");
    v36 = clap_builder::builder::command::Command::arg(&v30, &v0);
    v30 = clap_builder::builder::arg::Arg::new("DUMP");
    v0 = clap_builder::builder::arg::Arg::long(&v30, "dump");
    v30 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v0 = clap_builder::builder::arg::Arg::help(&v30, "Print justfile");
    v46 = clap_builder::builder::arg::Arg::help_heading(&v0, "Commands");
    v30 = clap_builder::builder::command::Command::arg(&v36, &v46);
    v36 = clap_builder::builder::arg::Arg::new("EDIT");
    v0 = clap_builder::builder::arg::Arg::short(&v36, 101);
    v36 = clap_builder::builder::arg::Arg::long(&v0, "edit");
    v0 = clap_builder::builder::arg::Arg::action(&v36, 2);
    v36 = clap_builder::builder::arg::Arg::help(&v0, "Edit justfile with editor given by $VISUAL or $EDITOR, falling back to `vim`");
    v0 = clap_builder::builder::arg::Arg::help_heading(&v36, "Commands");
    v36 = clap_builder::builder::command::Command::arg(&v30, &v0);
    v30 = clap_builder::builder::arg::Arg::new("EVALUATE");
    v0 = clap_builder::builder::arg::Arg::long(&v30, "evaluate");
    v30 = clap_builder::builder::arg::Arg::alias(&v0, "eval");
    v0 = clap_builder::builder::arg::Arg::action(&v30, 2);
    v30 = clap_builder::builder::arg::Arg::help(&v0, "Evaluate and print all variables. If a variable name is given as an argument, only print that variable's value.");
    v0 = clap_builder::builder::arg::Arg::help_heading(&v30, "Commands");
    v30 = clap_builder::builder::command::Command::arg(&v36, &v0);
    v36 = clap_builder::builder::arg::Arg::new("FORMAT");
    v0 = clap_builder::builder::arg::Arg::long(&v36, "fmt");
    v36 = clap_builder::builder::arg::Arg::alias(&v0, "format");
    v0 = clap_builder::builder::arg::Arg::action(&v36, 2);
    v36 = clap_builder::builder::arg::Arg::help(&v0, "Format and overwrite justfile");
    v0 = clap_builder::builder::arg::Arg::help_heading(&v36, "Commands");
    v36 = clap_builder::builder::command::Command::arg(&v30, &v0);
    v30 = clap_builder::builder::arg::Arg::new("GROUPS");
    v0 = clap_builder::builder::arg::Arg::long(&v30, "groups");
    v30 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v0 = clap_builder::builder::arg::Arg::help(&v30, "List recipe groups");
    v46 = clap_builder::builder::arg::Arg::help_heading(&v0, "Commands");
    v30 = clap_builder::builder::command::Command::arg(&v36, &v46);
    v36 = clap_builder::builder::arg::Arg::new("INIT");
    v0 = clap_builder::builder::arg::Arg::long(&v36, "init");
    v36 = clap_builder::builder::arg::Arg::alias(&v0, "initialize");
    v0 = clap_builder::builder::arg::Arg::action(&v36, 2);
    v36 = clap_builder::builder::arg::Arg::help(&v0, "Initialize new justfile in project root");
    v0 = clap_builder::builder::arg::Arg::help_heading(&v36, "Commands");
    v36 = clap_builder::builder::command::Command::arg(&v30, &v0);
    v30 = clap_builder::builder::arg::Arg::new("LIST");
    v0 = clap_builder::builder::arg::Arg::short(&v30, 108);
    v30 = clap_builder::builder::arg::Arg::long(&v0, "list");
    v0 = clap_builder::builder::arg::Arg::num_args(&v30, None);
    v30 = clap_builder::builder::arg::Arg::value_name(&v0, "MODULE");
    v0 = clap_builder::builder::arg::Arg::action(&v30, 0);
    v30 = clap_builder::builder::arg::Arg::conflicts_with(&v0, "ARGUMENTS");
    v0 = clap_builder::builder::arg::Arg::help(&v30, "List available recipes in <MODULE> or root if omitted");
    v46 = clap_builder::builder::arg::Arg::help_heading(&v0, "Commands");
    v30 = clap_builder::builder::command::Command::arg(&v36, &v46);
    v36 = clap_builder::builder::arg::Arg::new("MAN");
    v0 = clap_builder::builder::arg::Arg::long(&v36, "man");
    v36 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v0 = clap_builder::builder::arg::Arg::help(&v36, "Print man page");
    v46 = clap_builder::builder::arg::Arg::help_heading(&v0, "Commands");
    v36 = clap_builder::builder::command::Command::arg(&v30, &v46);
    v30 = clap_builder::builder::arg::Arg::new("REQUEST");
    v0 = clap_builder::builder::arg::Arg::long(&v30, "request");
    v30 = clap_builder::builder::arg::Arg::action(&v0, 0);
    memcpy(&v0, &v30, 632);
    v28 = v31 | 4;
    v29 = v32;
    v30 = clap_builder::builder::arg::Arg::help(&v0, "Execute <REQUEST>. For internal testing purposes only. May be changed or removed at any time.");
    v0 = clap_builder::builder::arg::Arg::help_heading(&v30, "REQUEST");
    v30 = clap_builder::builder::command::Command::arg(&v36, &v0);
    v36 = clap_builder::builder::arg::Arg::new("SHOW");
    v0 = clap_builder::builder::arg::Arg::short(&v36, 115);
    v36 = clap_builder::builder::arg::Arg::long(&v0, "show");
    v0 = clap_builder::builder::arg::Arg::num_args(&v36, 0x1);
    v36 = clap_builder::builder::arg::Arg::action(&v0, 0);
    v0 = clap_builder::builder::arg::Arg::value_name(&v36, "PATH");
    v36 = clap_builder::builder::arg::Arg::conflicts_with(&v0, "ARGUMENTS");
    v0 = clap_builder::builder::arg::Arg::help(&v36, "Show recipe at <PATH>");
    v46 = clap_builder::builder::arg::Arg::help_heading(&v0, "Commands");
    v36 = clap_builder::builder::command::Command::arg(&v30, &v46);
    v30 = clap_builder::builder::arg::Arg::new("SUMMARY");
    v0 = clap_builder::builder::arg::Arg::long(&v30, "summary");
    v30 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v0 = clap_builder::builder::arg::Arg::help(&v30, "List names of available recipes");
    v46 = clap_builder::builder::arg::Arg::help_heading(&v0, "Commands");
    v30 = clap_builder::builder::command::Command::arg(&v36, &v46);
    v36 = clap_builder::builder::arg::Arg::new("VARIABLES");
    v0 = clap_builder::builder::arg::Arg::long(&v36, "variables");
    v36 = clap_builder::builder::arg::Arg::action(&v0, 2);
    v0 = clap_builder::builder::arg::Arg::help(&v36, "List names of variables");
    v46 = clap_builder::builder::arg::Arg::help_heading(&v0, "Commands");
    v36 = clap_builder::builder::command::Command::arg(&v30, &v46);
    v30 = struct90 {
        field_0: 0
        field_8: 8
        field_16: 0
        field_32: 8
        field_40: 0
        field_56: ""
        field_72: ""
        field_88: 0
    };
    v0 = clap_builder::builder::arg_group::ArgGroup::id(&v30);
    v46 = clap_builder::builder::arg_group::ArgGroup::args(&v0);
    v30 = clap_builder::builder::command::Command::group(&v36, &v46);
    v36 = clap_builder::builder::arg::Arg::new("ARGUMENTS");
    v0 = clap_builder::builder::arg::Arg::num_args(&v36, 0x1);
    v36 = clap_builder::builder::arg::Arg::action(&v0, 1);
    v0 = clap_builder::builder::arg::Arg::help(&v36, "Overrides and recipe(s) to run, defaulting to the first recipe in the justfile");
    clap_builder::builder::command::Command::arg(a0, &v30, &v0);
    return;
}
