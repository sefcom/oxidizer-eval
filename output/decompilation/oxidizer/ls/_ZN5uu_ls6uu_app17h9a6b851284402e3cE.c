fn uu_ls::uu_app(a0: i64) -> u64 {
    let v0: u128;  // [bp-0xc48]
    let v1: struct128;  // [bp-0xc38], Other Possible Types: struct24, struct64, struct216, void*, struct640
    let v2: struct640;  // [bp-0xc38]
    let v3: u128;  // [bp-0xc38]
    let v4: struct640;  // [bp-0xc38]
    let v5: struct640;  // [bp-0xc38]
    let v6: struct640;  // [bp-0xc38]
    let v7: u64;  // [bp-0xc30]
    let v8: void*;  // [bp-0xc28], Other Possible Types: u128
    let v9: u64;  // [bp-0xc20]
    let v10: u128;  // [bp-0xc18]
    let v11: &str;  // [bp-0xc08], Other Possible Types: u128
    let v12: &str;  // [bp-0xc08]
    let v13: u8;  // [bp-0xbf8]
    let v14: u128;  // [bp-0xbf0]
    let v15: u128;  // [bp-0xbe0]
    let v16: u128;  // [bp-0xbd0]
    let v17: iNone;  // [bp-0xbc0]
    let v18: u64;  // [bp-0xbb0]
    let v19: iNone;  // [bp-0xba8]
    let v20: iNone;  // [bp-0xb98]
    let v21: u128;  // [bp-0xb88]
    let v22: iNone;  // [bp-0xb78]
    let v23: u64;  // [bp-0xb68]
    let v24: iNone;  // [bp-0xb60]
    let v25: iNone;  // [bp-0xb50]
    let v26: u128;  // [bp-0xb40]
    let v27: iNone;  // [bp-0xb30]
    let v28: u64;  // [bp-0xb20]
    let v29: iNone;  // [bp-0xb18]
    let v30: iNone;  // [bp-0xb08]
    let v31: u128;  // [bp-0xaf8]
    let v32: iNone;  // [bp-0xae8]
    let v33: u64;  // [bp-0xad8]
    let v34: iNone;  // [bp-0xad0]
    let v35: iNone;  // [bp-0xac0]
    let v36: iNone;  // [bp-0xab0]
    let v37: iNone;  // [bp-0xaa0]
    let v38: u64;  // [bp-0xa90]
    let v39: void*;  // [bp-0xa88]
    let v40: u64;  // [bp-0xa80]
    let v41: void*;  // [bp-0xa78]
    let v42: u64;  // [bp-0xa70]
    let v43: iNone;  // [bp-0xa68]
    let v44: &str;  // [bp-0xa58]
    let v45: u8;  // [bp-0xa48]
    let v46: u32;  // [bp-0x9c0]
    let v47: u32;  // [bp-0x9bc]
    let v48: void*;  // [bp-0x9b0], Other Possible Types: struct72
    let v49: struct72;  // [bp-0x9b0]
    let v50: struct72;  // [bp-0x9b0]
    let v51: struct72;  // [bp-0x9b0]
    let v52: u64;  // [bp-0x9a8]
    let v53: void*;  // [bp-0x9a0]
    let v54: u64;  // [bp-0x998]
    let v55: u128;  // [bp-0x990]
    let v56: &str;  // [bp-0x980]
    let v57: u8;  // [bp-0x970]
    let v58: void*;  // [bp-0x968], Other Possible Types: struct72
    let v59: struct72;  // [bp-0x968]
    let v60: struct72;  // [bp-0x968]
    let v61: struct72;  // [bp-0x968]
    let v62: u64;  // [bp-0x960]
    let v63: void*;  // [bp-0x958]
    let v64: u64;  // [bp-0x950]
    let v65: u128;  // [bp-0x948]
    let v66: &str;  // [bp-0x938]
    let v67: u8;  // [bp-0x928]
    let v68: void*;  // [bp-0x920], Other Possible Types: struct72
    let v69: struct72;  // [bp-0x920]
    let v70: struct72;  // [bp-0x920]
    let v71: struct72;  // [bp-0x920]
    let v72: u64;  // [bp-0x918]
    let v73: void*;  // [bp-0x910]
    let v74: u64;  // [bp-0x908]
    let v75: u128;  // [bp-0x900]
    let v76: &str;  // [bp-0x8f0]
    let v77: u8;  // [bp-0x8e0]
    let v78: struct80;  // [bp-0x8d8], Other Possible Types: struct48, struct64, struct96, struct32, struct72, struct640, u64
    let v79: struct72;  // [bp-0x8d8]
    let v80: struct72;  // [bp-0x8d8]
    let v81: u64;  // [bp-0x898]
    let v82: struct112;  // [bp-0x658], Other Possible Types: struct16, struct288, struct48, struct96, struct64, void*, struct712, struct640
    let v83: struct712;  // [bp-0x658]
    let v84: struct640;  // [bp-0x658]
    let v85: u64;  // [bp-0x650]
    let v86: void*;  // [bp-0x648]
    let v87: u64;  // [bp-0x640]
    let v88: u128;  // [bp-0x638]
    let v89: &str;  // [bp-0x628]
    let v90: u8;  // [bp-0x618]
    let v91: u32;  // [bp-0x3e0]
    let v92: u64;  // [bp-0x39c]
    let v93: u32;  // [bp-0x394]
    let v94: struct437;  // [bp-0x390], Other Possible Types: struct712, struct640
    let v95: u32;  // [bp-0x118]
    let v96: u32;  // [bp-0x114]
    let v97: u64;  // [bp-0xd4]
    let v98: u32;  // [bp-0xcc]
    let v99: u64;  // [bp-0xc8]
    let v100: void*;  // [bp-0xc0]
    let v101: u64;  // [bp-0xb8]
    let v102: void*;  // [bp-0xb0]
    let v103: u64;  // [bp-0xa8]
    let v104: u128;  // [bp-0xa0]
    let v105: &str;  // [bp-0x90]
    let v106: u8;  // [bp-0x80]
    let v107: void*;  // [bp-0x78]
    let v108: u64;  // [bp-0x70]
    let v109: void*;  // [bp-0x68]
    let v110: u64;  // [bp-0x60]
    let v111: u128;  // [bp-0x58]
    let v112: &str;  // [bp-0x48]
    let v113: u8;  // [bp-0x38]
    let v116: u64;  // rdx
    let v117: iNone;  // xmm1
    let v118: iNone;  // xmm3
    let v119: iNone;  // xmm1
    let v120: iNone;  // xmm3
    let v121: iNone;  // xmm1
    let v122: iNone;  // xmm3
    let v123: u128;  // xmm1
    let v124: iNone;  // xmm3
    let v125: iNone;  // xmm1
    let v126: iNone;  // xmm3
    let v127: core::option::Option<char>;  // xmm1
    let v128: iNone;  // xmm3
    let v129: iNone;  // xmm1
    let v130: iNone;  // xmm3
    let v131: iNone;  // xmm1
    let v132: iNone;  // xmm3
    let v133: iNone;  // xmm1
    let v134: iNone;  // xmm3
    let v135: iNone;  // xmm1
    let v136: iNone;  // xmm3

    v94 = clap_builder::builder::command::Command::new(uucore::util_name(), v116);
    v82 = clap_builder::builder::command::Command::version(&v94);
    v1 = uucore::format_usage("{} [OPTION]... [FILE]...");
    v94 = clap_builder::builder::command::Command::override_usage(&v82, &v1);
    v82 = clap_builder::builder::command::Command::about(&v94);
    memcpy(&v94, &v82, 700);
    v97 = 2252383929761928 | v92;
    v98 = v93;
    v82 = clap_builder::builder::arg::Arg::new("help");
    v1 = clap_builder::builder::arg::Arg::long(&v82, "help");
    v82 = clap_builder::builder::arg::Arg::help(&v1, "Print help information.");
    v1 = clap_builder::builder::arg::Arg::action(&v82, 5);
    v82 = clap_builder::builder::command::Command::arg(&v94, &v1);
    v94 = clap_builder::builder::arg::Arg::new("format");
    v1 = clap_builder::builder::arg::Arg::long(&v94, "format");
    v94 = clap_builder::builder::arg::Arg::help(&v1, "Set the display format.");
    v1 = struct128 {
        field_0: "long"
        field_16: "verbose"
        field_32: "single-column"
        field_48: "columns"
        field_64: "vertical"
        field_80: "across"
        field_96: "horizontal"
        field_112: "commas"
    };
    <uucore::features::parser::shortcut_value_parser::ShortcutValueParser as core::convert::From<I>>::from(&v78, &v1);
    v1 = clap_builder::builder::arg::Arg::value_parser(&v94, &v78);
    memcpy(&v94, &v1, 632);
    v95 = 144 | v46;
    v96 = v47;
    v78 = struct96 {
        field_0: "format"
        field_16: "C"
        field_32: "long"
        field_48: "x"
        field_64: "C"
        field_80: "dired"
    };
    v1 = clap_builder::builder::arg::Arg::overrides_with_all(&v94, &v78);
    v94 = clap_builder::builder::command::Command::arg(&v82, &v1);
    v82 = clap_builder::builder::arg::Arg::new("C");
    v1 = clap_builder::builder::arg::Arg::short(&v82, 67);
    v82 = clap_builder::builder::arg::Arg::help(&v1, "Display the files in columns.");
    v78 = struct80 {
        field_0: "format"
        field_16: "C"
        field_32: "long"
        field_48: "x"
        field_64: "C"
    };
    v1 = clap_builder::builder::arg::Arg::overrides_with_all(&v82, &v78);
    v78 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v82 = clap_builder::builder::command::Command::arg(&v94, &v78);
    v94 = clap_builder::builder::arg::Arg::new("long");
    v1 = clap_builder::builder::arg::Arg::short(&v94, 108);
    v94 = clap_builder::builder::arg::Arg::long(&v1, "long");
    v1 = clap_builder::builder::arg::Arg::help(&v94, "Display detailed information.");
    v78 = struct80 {
        field_0: "format"
        field_16: "C"
        field_32: "long"
        field_48: "x"
        field_64: "C"
    };
    v94 = clap_builder::builder::arg::Arg::overrides_with_all(&v1, &v78);
    v1 = clap_builder::builder::arg::Arg::action(&v94, 2);
    v94 = clap_builder::builder::command::Command::arg(&v82, &v1);
    v82 = clap_builder::builder::arg::Arg::new("x");
    v1 = clap_builder::builder::arg::Arg::short(&v82, 120);
    v82 = clap_builder::builder::arg::Arg::help(&v1, "List entries in rows instead of in columns.");
    v78 = struct80 {
        field_0: "format"
        field_16: "C"
        field_32: "long"
        field_48: "x"
        field_64: "C"
    };
    v1 = clap_builder::builder::arg::Arg::overrides_with_all(&v82, &v78);
    v78 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v82 = clap_builder::builder::command::Command::arg(&v94, &v78);
    v94 = clap_builder::builder::arg::Arg::new("tabsize");
    v1 = clap_builder::builder::arg::Arg::short(&v94, 84);
    v94 = clap_builder::builder::arg::Arg::long(&v1, "tabsize");
    v1 = clap_builder::builder::arg::Arg::env(&v94, "TABSIZE");
    v94 = clap_builder::builder::arg::Arg::value_name(&v1, "COLS");
    v1 = clap_builder::builder::arg::Arg::help(&v94, "Assume tab stops at each COLS instead of 8");
    v94 = clap_builder::builder::command::Command::arg(&v82, &v1);
    v82 = clap_builder::builder::arg::Arg::new("m");
    v1 = clap_builder::builder::arg::Arg::short(&v82, 109);
    v82 = clap_builder::builder::arg::Arg::help(&v1, "List entries separated by commas.");
    v78 = struct80 {
        field_0: "format"
        field_16: "C"
        field_32: "long"
        field_48: "x"
        field_64: "C"
    };
    v1 = clap_builder::builder::arg::Arg::overrides_with_all(&v82, &v78);
    v78 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v82 = clap_builder::builder::command::Command::arg(&v94, &v78);
    v94 = clap_builder::builder::arg::Arg::new("zero");
    v1 = clap_builder::builder::arg::Arg::long(&v94, "zero");
    v94 = clap_builder::builder::arg::Arg::overrides_with(&v1, "zero");
    v1 = clap_builder::builder::arg::Arg::help(&v94, "List entries separated by ASCII NUL characters.");
    v78 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v94 = clap_builder::builder::command::Command::arg(&v82, &v78);
    v82 = clap_builder::builder::arg::Arg::new("dired");
    v1 = clap_builder::builder::arg::Arg::long(&v82, "dired");
    v82 = clap_builder::builder::arg::Arg::short(&v1, 68);
    v1 = clap_builder::builder::arg::Arg::help(&v82, "generate output designed for Emacs' dired (Directory Editor) mode");
    v82 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v1 = clap_builder::builder::arg::Arg::overrides_with(&v82, "hyperlink");
    v82 = clap_builder::builder::command::Command::arg(&v94, &v1);
    v94 = clap_builder::builder::arg::Arg::new("hyperlink");
    v6 = clap_builder::builder::arg::Arg::long(&v94, "hyperlink");
    v94 = clap_builder::builder::arg::Arg::help(&v6, "hyperlink file names WHEN");
    v12 = "always";
    v9 = 0x8000000000000000;
    v10 = v0;
    v1 = 0;
    v7 = 8;
    v8 = 0;
    v13 = 0;
    v78 = clap_builder::builder::possible_value::PossibleValue::alias(&v1, "yes");
    v48 = clap_builder::builder::possible_value::PossibleValue::alias(&v78, "force");
    v12 = "auto";
    v9 = 0x8000000000000000;
    v10 = v0;
    v1 = 0;
    v7 = 8;
    v8 = 0;
    v13 = 0;
    v78 = clap_builder::builder::possible_value::PossibleValue::alias(&v1, "tty");
    v58 = clap_builder::builder::possible_value::PossibleValue::alias(&v78, "if-tty");
    v12 = "never";
    v9 = 0x8000000000000000;
    v10 = v0;
    v1 = 0;
    v7 = 8;
    v8 = 0;
    v13 = 0;
    v78 = clap_builder::builder::possible_value::PossibleValue::alias(&v1, "no");
    v68 = clap_builder::builder::possible_value::PossibleValue::alias(&v78, "none");
    v117 = *(&v48.field_16 as &i128);
    v118 = v48.field_48;
    v119 = *(&v58.field_16 as &i128);
    v120 = v58.field_48;
    v1 = struct216 {
        field_0: v48.field_0
        field_16: v117
        field_32: v55
        field_48: v118
        field_64: v48.field_64
        field_72: v58.field_0
        field_88: v119
        field_104: v65
        field_120: v120
        field_136: v58.field_64
        field_144: v68.field_0
        field_160: *(&v68.field_16 as &i128)
        field_176: v75
        field_192: v68.field_48
        field_208: v68.field_64
    };
    <uucore::features::parser::shortcut_value_parser::ShortcutValueParser as core::convert::From<I>>::from(&v78, &v1);
    v1 = clap_builder::builder::arg::Arg::value_parser(&v94, &v78);
    memcpy(&v94, &v1, 632);
    v95 = 128 | v46;
    v96 = v47;
    v1 = clap_builder::builder::arg::Arg::num_args(&v94, None, 1);
    v94 = clap_builder::builder::arg::Arg::default_missing_value(&v1);
    v1 = clap_builder::builder::arg::Arg::default_value(&v94);
    v94 = clap_builder::builder::arg::Arg::value_name(&v1, "WHEN");
    v1 = clap_builder::builder::arg::Arg::overrides_with(&v94, "dired");
    v94 = clap_builder::builder::command::Command::arg(&v82, &v1);
    v82 = clap_builder::builder::arg::Arg::new("1");
    v1 = clap_builder::builder::arg::Arg::short(&v82, 49);
    v82 = clap_builder::builder::arg::Arg::help(&v1, "List one file per line.");
    v1 = clap_builder::builder::arg::Arg::action(&v82, 2);
    v82 = clap_builder::builder::command::Command::arg(&v94, &v1);
    v94 = clap_builder::builder::arg::Arg::new("o");
    v1 = clap_builder::builder::arg::Arg::short(&v94, 111);
    v94 = clap_builder::builder::arg::Arg::help(&v1, "Long format without group information. Identical to --format=long with --no-group.");
    v1 = clap_builder::builder::arg::Arg::action(&v94, 2);
    v94 = clap_builder::builder::command::Command::arg(&v82, &v1);
    v82 = clap_builder::builder::arg::Arg::new("g");
    v1 = clap_builder::builder::arg::Arg::short(&v82, 103);
    v82 = clap_builder::builder::arg::Arg::help(&v1, "Long format without owner information.");
    v1 = clap_builder::builder::arg::Arg::action(&v82, 2);
    v82 = clap_builder::builder::command::Command::arg(&v94, &v1);
    v94 = clap_builder::builder::arg::Arg::new("numeric-uid-gid");
    v1 = clap_builder::builder::arg::Arg::short(&v94, 110);
    v94 = clap_builder::builder::arg::Arg::long(&v1, "numeric-uid-gid");
    v1 = clap_builder::builder::arg::Arg::help(&v94, "-l with numeric UIDs and GIDs.");
    v78 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v94 = clap_builder::builder::command::Command::arg(&v82, &v78);
    v82 = clap_builder::builder::arg::Arg::new("quoting-style");
    v2 = clap_builder::builder::arg::Arg::long(&v82, "quoting-style");
    v82 = clap_builder::builder::arg::Arg::help(&v2, "Set quoting style.");
    v105 = "literal";
    v103 = 0x8000000000000000;
    v104 = v0;
    v100 = 0;
    v101 = 8;
    v102 = 0;
    v106 = 0;
    v112 = "shell";
    v110 = 0x8000000000000000;
    v111 = v104;
    v107 = 0;
    v108 = 8;
    v109 = 0;
    v113 = 0;
    v56 = "shell-escape";
    v54 = 0x8000000000000000;
    v55 = v0;
    v48 = 0;
    v52 = 8;
    v53 = 0;
    v57 = 0;
    v66 = "shell-always";
    v64 = 0x8000000000000000;
    v65 = v0;
    v58 = 0;
    v62 = 8;
    v63 = 0;
    v67 = 0;
    v76 = "shell-escape-always";
    v74 = 0x8000000000000000;
    v75 = v0;
    v68 = 0;
    v72 = 8;
    v73 = 0;
    v77 = 0;
    v11 = "c";
    v9 = 0x8000000000000000;
    v10 = v0;
    v1 = 0;
    v7 = 8;
    v8 = 0;
    v13 = 0;
    v79 = clap_builder::builder::possible_value::PossibleValue::alias(&v1, "c-maybe");
    v43 = v0;
    v121 = *(&v102 as &i128);
    v122 = *(&v105.ptr as &i128);
    v3 = *(&v100 as &i128);
    *(&v8 as void*) = v121;
    v10 = v104;
    *(&v11 as void*) = v122;
    v13 = *(&v106 as &i64);
    v123 = *(&v109 as &i128);
    v124 = *(&v112.ptr as &i128);
    v14 = *(&v107 as &i128);
    v15 = v123;
    v16 = v111;
    v17 = v124;
    v18 = *(&v113 as &i64);
    v23 = v48.field_64;
    v22 = *(&v56.ptr as &i128);
    v21 = v55;
    v20 = *(&v53 as &i128);
    v19 = *(&v48 as &i128);
    v28 = v58.field_64;
    v27 = *(&v66.ptr as &i128);
    v26 = v65;
    v25 = *(&v63 as &i128);
    v24 = *(&v58 as &i128);
    v33 = v68.field_64;
    v32 = *(&v76.ptr as &i128);
    v31 = v75;
    v30 = *(&v73 as &i128);
    v29 = *(&v68 as &i128);
    v38 = v81;
    v37 = v79.field_48;
    v36 = v79.field_32;
    v35 = *(&v79.field_16 as &i128);
    v34 = v79.field_0;
    v39 = 0;
    v40 = 8;
    v41 = 0;
    v42 = 0x8000000000000000;
    v44 = "escape";
    v45 = 0;
    <uucore::features::parser::shortcut_value_parser::ShortcutValueParser as core::convert::From<I>>::from(&v79, &v1);
    v1 = clap_builder::builder::arg::Arg::value_parser(&v82, &v79);
    v82 = struct64 {
        field_0: "quoting-style"
        field_16: "literal"
        field_32: "escape"
        field_48: "quote-name"
    };
    v78 = clap_builder::builder::arg::Arg::overrides_with_all(&v1, &v82);
    v82 = clap_builder::builder::command::Command::arg(&v94, &v78);
    v94 = clap_builder::builder::arg::Arg::new("literal");
    v1 = clap_builder::builder::arg::Arg::short(&v94, 78);
    v94 = clap_builder::builder::arg::Arg::long(&v1, "literal");
    v1 = clap_builder::builder::arg::Arg::alias(&v94);
    v94 = clap_builder::builder::arg::Arg::help(&v1, "Use literal quoting style. Equivalent to `--quoting-style=literal`");
    v78 = struct64 {
        field_0: "quoting-style"
        field_16: "literal"
        field_32: "escape"
        field_48: "quote-name"
    };
    v1 = clap_builder::builder::arg::Arg::overrides_with_all(&v94, &v78);
    v78 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v94 = clap_builder::builder::command::Command::arg(&v82, &v78);
    v82 = clap_builder::builder::arg::Arg::new("escape");
    v1 = clap_builder::builder::arg::Arg::short(&v82, 98);
    v82 = clap_builder::builder::arg::Arg::long(&v1, "escape");
    v1 = clap_builder::builder::arg::Arg::help(&v82, "Use escape quoting style. Equivalent to `--quoting-style=escape`");
    v78 = struct64 {
        field_0: "quoting-style"
        field_16: "literal"
        field_32: "escape"
        field_48: "quote-name"
    };
    v82 = clap_builder::builder::arg::Arg::overrides_with_all(&v1, &v78);
    v1 = clap_builder::builder::arg::Arg::action(&v82, 2);
    v82 = clap_builder::builder::command::Command::arg(&v94, &v1);
    v94 = clap_builder::builder::arg::Arg::new("quote-name");
    v1 = clap_builder::builder::arg::Arg::short(&v94, 81);
    v94 = clap_builder::builder::arg::Arg::long(&v1, "quote-name");
    v1 = clap_builder::builder::arg::Arg::help(&v94, "Use C quoting style. Equivalent to `--quoting-style=c`");
    v78 = struct64 {
        field_0: "quoting-style"
        field_16: "literal"
        field_32: "escape"
        field_48: "quote-name"
    };
    v94 = clap_builder::builder::arg::Arg::overrides_with_all(&v1, &v78);
    v1 = clap_builder::builder::arg::Arg::action(&v94, 2);
    v94 = clap_builder::builder::command::Command::arg(&v82, &v1);
    v82 = clap_builder::builder::arg::Arg::new("hide-control-chars");
    v1 = clap_builder::builder::arg::Arg::short(&v82, 113);
    v82 = clap_builder::builder::arg::Arg::long(&v1, "hide-control-chars");
    v1 = clap_builder::builder::arg::Arg::help(&v82, "Replace control characters with '?' if they are not escaped.");
    v78 = struct32 {
        field_0: "hide-control-chars"
        field_16: "show-control-chars"
    };
    v82 = clap_builder::builder::arg::Arg::overrides_with_all(&v1, &v78);
    v1 = clap_builder::builder::arg::Arg::action(&v82, 2);
    v83 = clap_builder::builder::command::Command::arg(&v94, &v1);
    v94 = clap_builder::builder::arg::Arg::new("show-control-chars");
    v1 = clap_builder::builder::arg::Arg::long(&v94, "show-control-chars");
    v94 = clap_builder::builder::arg::Arg::help(&v1, "Show control characters 'as is' if they are not escaped.");
    v78 = struct32 {
        field_0: "hide-control-chars"
        field_16: "show-control-chars"
    };
    v1 = clap_builder::builder::arg::Arg::overrides_with_all(&v94, &v78);
    v78 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v94 = clap_builder::builder::command::Command::arg(&v83, &v78);
    v82 = clap_builder::builder::arg::Arg::new("time");
    v1 = clap_builder::builder::arg::Arg::long(&v82, "time");
    v84 = clap_builder::builder::arg::Arg::help(&v1, "Show time in <field>:\n\taccess time (-u): atime, access, use;\n\tchange time (-t): ctime, status.\n\tmodification time: mtime, modification.\n\tbirth time: birth, creation;");
    v1 = clap_builder::builder::arg::Arg::value_name(&v84, "field");
    v89 = "atime";
    v87 = 0x8000000000000000;
    v88 = v0;
    v82 = 0;
    v85 = 8;
    v86 = 0;
    v90 = 0;
    v78 = clap_builder::builder::possible_value::PossibleValue::alias(&v82, "access");
    v49 = clap_builder::builder::possible_value::PossibleValue::alias(&v78, "use");
    v89 = "ctime";
    v87 = 0x8000000000000000;
    v88 = v0;
    v82 = 0;
    v85 = 8;
    v86 = 0;
    v90 = 0;
    v59 = clap_builder::builder::possible_value::PossibleValue::alias(&v82, "status");
    v89 = "mtime";
    v87 = 0x8000000000000000;
    v88 = v0;
    v82 = 0;
    v85 = 8;
    v86 = 0;
    v90 = 0;
    v69 = clap_builder::builder::possible_value::PossibleValue::alias(&v82, "modification");
    v89 = "birth";
    v87 = 0x8000000000000000;
    v88 = v0;
    v82 = 0;
    v85 = 8;
    v86 = 0;
    v90 = 0;
    v80 = clap_builder::builder::possible_value::PossibleValue::alias(&v82, "creation");
    v125 = *(&v49.field_16 as &i128);
    v126 = v49.field_48;
    v127 = *(&v59.field_16 as &i128);
    v128 = v59.field_48;
    v82 = struct288 {
        field_0: v49.field_0
        field_16: v125
        field_32: v55
        field_48: v126
        field_64: v49.field_64
        field_72: v59.field_0
        field_88: v127
        field_104: v65
        field_120: v128
        field_136: v59.field_64
        field_144: v69.field_0
        field_160: *(&v69.field_16 as &i128)
        field_176: v75
        field_192: v69.field_48
        field_208: v69.field_64
        field_216: v80.field_0
        field_232: *(&v80.field_16 as &i128)
        field_248: v80.field_32
        field_264: v80.field_48
        field_280: v81
    };
    <uucore::features::parser::shortcut_value_parser::ShortcutValueParser as core::convert::From<I>>::from(&v80, &v82);
    v82 = clap_builder::builder::arg::Arg::value_parser(&v1, &v80);
    memcpy(&v1, &v82, 632);
    v46 = 144 | v91;
    v47 = v91;
    v82 = struct48 {
        field_0: "time"
        field_16: "u"
        field_32: "c"
    };
    v78 = clap_builder::builder::arg::Arg::overrides_with_all(&v1, &v82);
    v82 = clap_builder::builder::command::Command::arg(&v94, &v78);
    v94 = clap_builder::builder::arg::Arg::new("c");
    v1 = clap_builder::builder::arg::Arg::short(&v94, 99);
    v94 = clap_builder::builder::arg::Arg::help(&v1, "If the long listing format (e.g., -l, -o) is being used, print the status change time (the 'ctime' in the inode) instead of the modification time. When explicitly sorting by time (--sort=time or -t) or when not using a long listing format, sort according to the status change time.");
    v78 = struct48 {
        field_0: "time"
        field_16: "u"
        field_32: "c"
    };
    v1 = clap_builder::builder::arg::Arg::overrides_with_all(&v94, &v78);
    v78 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v94 = clap_builder::builder::command::Command::arg(&v82, &v78);
    v82 = clap_builder::builder::arg::Arg::new("u");
    v1 = clap_builder::builder::arg::Arg::short(&v82, 117);
    v82 = clap_builder::builder::arg::Arg::help(&v1, "If the long listing format (e.g., -l, -o) is being used, print the status access time instead of the modification time. When explicitly sorting by time (--sort=time or -t) or when not using a long listing format, sort according to the access time.");
    v78 = struct48 {
        field_0: "time"
        field_16: "u"
        field_32: "c"
    };
    v1 = clap_builder::builder::arg::Arg::overrides_with_all(&v82, &v78);
    v78 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v82 = clap_builder::builder::command::Command::arg(&v94, &v78);
    v94 = clap_builder::builder::arg::Arg::new("hide");
    v1 = clap_builder::builder::arg::Arg::long(&v94, "hide");
    v94 = clap_builder::builder::arg::Arg::action(&v1, 1);
    v1 = clap_builder::builder::arg::Arg::value_name(&v94, "PATTERN");
    v78 = clap_builder::builder::arg::Arg::help(&v1, "do not list implied entries matching shell PATTERN (overridden by -a or -A)");
    v94 = clap_builder::builder::command::Command::arg(&v82, &v78);
    v82 = clap_builder::builder::arg::Arg::new("ignore");
    v1 = clap_builder::builder::arg::Arg::short(&v82, 73);
    v82 = clap_builder::builder::arg::Arg::long(&v1, "ignore");
    v1 = clap_builder::builder::arg::Arg::action(&v82, 1);
    v82 = clap_builder::builder::arg::Arg::value_name(&v1, "PATTERN");
    v1 = clap_builder::builder::arg::Arg::help(&v82, "do not list implied entries matching shell PATTERN");
    v82 = clap_builder::builder::command::Command::arg(&v94, &v1);
    v94 = clap_builder::builder::arg::Arg::new("ignore-backups");
    v1 = clap_builder::builder::arg::Arg::short(&v94, 66);
    v94 = clap_builder::builder::arg::Arg::long(&v1, "ignore-backups");
    v1 = clap_builder::builder::arg::Arg::help(&v94, "Ignore entries which end with ~.");
    v78 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v94 = clap_builder::builder::command::Command::arg(&v82, &v78);
    v82 = clap_builder::builder::arg::Arg::new("sort");
    v1 = clap_builder::builder::arg::Arg::long(&v82, "sort");
    v82 = clap_builder::builder::arg::Arg::help(&v1, "Sort by <field>: name, none (-U), time (-t), size (-S), extension (-X) or width");
    v1 = clap_builder::builder::arg::Arg::value_name(&v82, "field");
    v82 = struct112 {
        field_0: "name"
        field_16: "none"
        field_32: "time"
        field_48: "size"
        field_64: "version"
        field_80: "extension"
        field_96: "width"
    };
    <uucore::features::parser::shortcut_value_parser::ShortcutValueParser as core::convert::From<I>>::from(&v78, &v82);
    v82 = clap_builder::builder::arg::Arg::value_parser(&v1, &v78);
    memcpy(&v1, &v82, 632);
    v46 = 128 | v91;
    v47 = (&v91)[1];
    v82 = struct96 {
        field_0: "sort"
        field_16: "S"
        field_32: "t"
        field_48: "U"
        field_64: "v"
        field_80: "X"
    };
    v78 = clap_builder::builder::arg::Arg::overrides_with_all(&v1, &v82);
    v82 = clap_builder::builder::command::Command::arg(&v94, &v78);
    v94 = clap_builder::builder::arg::Arg::new("S");
    v1 = clap_builder::builder::arg::Arg::short(&v94, 83);
    v94 = clap_builder::builder::arg::Arg::help(&v1, "Sort by file size, largest first.");
    v78 = struct96 {
        field_0: "sort"
        field_16: "S"
        field_32: "t"
        field_48: "U"
        field_64: "v"
        field_80: "X"
    };
    v1 = clap_builder::builder::arg::Arg::overrides_with_all(&v94, &v78);
    v78 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v94 = clap_builder::builder::command::Command::arg(&v82, &v78);
    v82 = clap_builder::builder::arg::Arg::new("t");
    v1 = clap_builder::builder::arg::Arg::short(&v82, 116);
    v82 = clap_builder::builder::arg::Arg::help(&v1, "Sort by modification time (the 'mtime' in the inode), newest first.");
    v78 = struct96 {
        field_0: "sort"
        field_16: "S"
        field_32: "t"
        field_48: "U"
        field_64: "v"
        field_80: "X"
    };
    v1 = clap_builder::builder::arg::Arg::overrides_with_all(&v82, &v78);
    v78 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v82 = clap_builder::builder::command::Command::arg(&v94, &v78);
    v94 = clap_builder::builder::arg::Arg::new("v");
    v1 = clap_builder::builder::arg::Arg::short(&v94, 118);
    v94 = clap_builder::builder::arg::Arg::help(&v1, "Natural sort of (version) numbers in the filenames.");
    v78 = struct96 {
        field_0: "sort"
        field_16: "S"
        field_32: "t"
        field_48: "U"
        field_64: "v"
        field_80: "X"
    };
    v1 = clap_builder::builder::arg::Arg::overrides_with_all(&v94, &v78);
    v78 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v94 = clap_builder::builder::command::Command::arg(&v82, &v78);
    v82 = clap_builder::builder::arg::Arg::new("X");
    v1 = clap_builder::builder::arg::Arg::short(&v82, 88);
    v82 = clap_builder::builder::arg::Arg::help(&v1, "Sort alphabetically by entry extension.");
    v78 = struct96 {
        field_0: "sort"
        field_16: "S"
        field_32: "t"
        field_48: "U"
        field_64: "v"
        field_80: "X"
    };
    v1 = clap_builder::builder::arg::Arg::overrides_with_all(&v82, &v78);
    v78 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v82 = clap_builder::builder::command::Command::arg(&v94, &v78);
    v94 = clap_builder::builder::arg::Arg::new("U");
    v1 = clap_builder::builder::arg::Arg::short(&v94, 85);
    v94 = clap_builder::builder::arg::Arg::help(&v1, "Do not sort; list the files in whatever order they are stored in the directory.  This is especially useful when listing very large directories, since not doing any sorting can be noticeably faster.");
    v78 = struct96 {
        field_0: "sort"
        field_16: "S"
        field_32: "t"
        field_48: "U"
        field_64: "v"
        field_80: "X"
    };
    v1 = clap_builder::builder::arg::Arg::overrides_with_all(&v94, &v78);
    v78 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v94 = clap_builder::builder::command::Command::arg(&v82, &v78);
    v82 = clap_builder::builder::arg::Arg::new("dereference");
    v1 = clap_builder::builder::arg::Arg::short(&v82, 76);
    v82 = clap_builder::builder::arg::Arg::long(&v1, "dereference");
    v1 = clap_builder::builder::arg::Arg::help(&v82, "When showing file information for a symbolic link, show information for the file the link references rather than the link itself.");
    v78 = struct48 {
        field_0: "dereference"
        field_16: "dereference-command-line-symlink-to-dir"
        field_32: "dereference-command-line"
    };
    v82 = clap_builder::builder::arg::Arg::overrides_with_all(&v1, &v78);
    v1 = clap_builder::builder::arg::Arg::action(&v82, 2);
    v82 = clap_builder::builder::command::Command::arg(&v94, &v1);
    v94 = clap_builder::builder::arg::Arg::new("dereference-command-line-symlink-to-dir");
    v1 = clap_builder::builder::arg::Arg::long(&v94, "dereference-command-line-symlink-to-dir");
    v94 = clap_builder::builder::arg::Arg::help(&v1, "Do not follow symlinks except when they link to directories and are given as command line arguments.");
    v78 = struct48 {
        field_0: "dereference"
        field_16: "dereference-command-line-symlink-to-dir"
        field_32: "dereference-command-line"
    };
    v1 = clap_builder::builder::arg::Arg::overrides_with_all(&v94, &v78);
    v78 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v94 = clap_builder::builder::command::Command::arg(&v82, &v78);
    v82 = clap_builder::builder::arg::Arg::new("dereference-command-line");
    v1 = clap_builder::builder::arg::Arg::short(&v82, 72);
    v82 = clap_builder::builder::arg::Arg::long(&v1, "dereference-command-line");
    v1 = clap_builder::builder::arg::Arg::help(&v82, "Do not follow symlinks except when given as command line arguments.");
    v78 = struct48 {
        field_0: "dereference"
        field_16: "dereference-command-line-symlink-to-dir"
        field_32: "dereference-command-line"
    };
    v82 = clap_builder::builder::arg::Arg::overrides_with_all(&v1, &v78);
    v1 = clap_builder::builder::arg::Arg::action(&v82, 2);
    v82 = clap_builder::builder::command::Command::arg(&v94, &v1);
    v94 = clap_builder::builder::arg::Arg::new("no-group");
    v1 = clap_builder::builder::arg::Arg::long(&v94, "no-group");
    v94 = clap_builder::builder::arg::Arg::short(&v1, 71);
    v1 = clap_builder::builder::arg::Arg::help(&v94, "Do not show group in long format.");
    v78 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v94 = clap_builder::builder::command::Command::arg(&v82, &v78);
    v82 = clap_builder::builder::arg::Arg::new("author");
    v1 = clap_builder::builder::arg::Arg::long(&v82, "author");
    v82 = clap_builder::builder::arg::Arg::help(&v1, "Show author in long format. On the supported platforms, the author always matches the file owner.");
    v1 = clap_builder::builder::arg::Arg::action(&v82, 2);
    v82 = clap_builder::builder::command::Command::arg(&v94, &v1);
    v94 = clap_builder::builder::arg::Arg::new("all");
    v1 = clap_builder::builder::arg::Arg::short(&v94, 97);
    v94 = clap_builder::builder::arg::Arg::long(&v1, "all");
    v78 = struct32 {
        field_0: "all"
        field_16: "almost-all"
    };
    v1 = clap_builder::builder::arg::Arg::overrides_with_all(&v94, &v78);
    v94 = clap_builder::builder::arg::Arg::help(&v1, "Do not ignore hidden files (files with names that start with '.').");
    v1 = clap_builder::builder::arg::Arg::action(&v94, 2);
    v94 = clap_builder::builder::command::Command::arg(&v82, &v1);
    v82 = clap_builder::builder::arg::Arg::new("almost-all");
    v1 = clap_builder::builder::arg::Arg::short(&v82, 65);
    v82 = clap_builder::builder::arg::Arg::long(&v1, "almost-all");
    v78 = struct32 {
        field_0: "all"
        field_16: "almost-all"
    };
    v1 = clap_builder::builder::arg::Arg::overrides_with_all(&v82, &v78);
    v82 = clap_builder::builder::arg::Arg::help(&v1, "In a directory, do not ignore all file names that start with '.', only ignore '.' and '..'.");
    v1 = clap_builder::builder::arg::Arg::action(&v82, 2);
    v82 = clap_builder::builder::command::Command::arg(&v94, &v1);
    v94 = clap_builder::builder::arg::Arg::new("directory");
    v1 = clap_builder::builder::arg::Arg::short(&v94, 100);
    v94 = clap_builder::builder::arg::Arg::long(&v1, "directory");
    v1 = clap_builder::builder::arg::Arg::help(&v94, "Only list the names of directories, rather than listing directory contents. This will not follow symbolic links unless one of `--dereference-command-line (-H)`, `--dereference (-L)`, or `--dereference-command-line-symlink-to-dir` is specified.");
    v78 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v94 = clap_builder::builder::command::Command::arg(&v82, &v78);
    v82 = clap_builder::builder::arg::Arg::new("human-readable");
    v1 = clap_builder::builder::arg::Arg::short(&v82, 104);
    v82 = clap_builder::builder::arg::Arg::long(&v1, "human-readable");
    v1 = clap_builder::builder::arg::Arg::help(&v82, "Print human readable file sizes (e.g. 1K 234M 56G).");
    v78 = struct32 {
        field_0: "block-size"
        field_16: "si"
    };
    v82 = clap_builder::builder::arg::Arg::overrides_with_all(&v1, &v78);
    v1 = clap_builder::builder::arg::Arg::action(&v82, 2);
    v82 = clap_builder::builder::command::Command::arg(&v94, &v1);
    v94 = clap_builder::builder::arg::Arg::new("kibibytes");
    v1 = clap_builder::builder::arg::Arg::short(&v94, 107);
    v94 = clap_builder::builder::arg::Arg::long(&v1, "kibibytes");
    v1 = clap_builder::builder::arg::Arg::help(&v94, "default to 1024-byte blocks for file system usage; used only with -s and per directory totals");
    v78 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v94 = clap_builder::builder::command::Command::arg(&v82, &v78);
    v82 = clap_builder::builder::arg::Arg::new("si");
    v1 = clap_builder::builder::arg::Arg::long(&v82, "si");
    v82 = clap_builder::builder::arg::Arg::help(&v1, "Print human readable file sizes using powers of 1000 instead of 1024.");
    v78 = struct32 {
        field_0: "block-size"
        field_16: "human-readable"
    };
    v1 = clap_builder::builder::arg::Arg::overrides_with_all(&v82, &v78);
    v78 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v82 = clap_builder::builder::command::Command::arg(&v94, &v78);
    v94 = clap_builder::builder::arg::Arg::new("block-size");
    v1 = clap_builder::builder::arg::Arg::long(&v94, "block-size");
    memcpy(&v94, &v1, 632);
    v95 = 128 | v46;
    v96 = v47;
    v1 = clap_builder::builder::arg::Arg::value_name(&v94, "BLOCK_SIZE");
    v94 = clap_builder::builder::arg::Arg::help(&v1, "scale sizes by BLOCK_SIZE when printing them");
    v78 = struct32 {
        field_0: "si"
        field_16: "human-readable"
    };
    v1 = clap_builder::builder::arg::Arg::overrides_with_all(&v94, &v78);
    v94 = clap_builder::builder::command::Command::arg(&v82, &v1);
    v82 = clap_builder::builder::arg::Arg::new("inode");
    v1 = clap_builder::builder::arg::Arg::short(&v82, 105);
    v82 = clap_builder::builder::arg::Arg::long(&v1, "inode");
    v1 = clap_builder::builder::arg::Arg::help(&v82, "print the index number of each file");
    v78 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v82 = clap_builder::builder::command::Command::arg(&v94, &v78);
    v94 = clap_builder::builder::arg::Arg::new("reverse");
    v1 = clap_builder::builder::arg::Arg::short(&v94, 114);
    v94 = clap_builder::builder::arg::Arg::long(&v1, "reverse");
    v1 = clap_builder::builder::arg::Arg::help(&v94, "Reverse whatever the sorting method is e.g., list files in reverse alphabetical order, youngest first, smallest first, or whatever.");
    v78 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v94 = clap_builder::builder::command::Command::arg(&v82, &v78);
    v82 = clap_builder::builder::arg::Arg::new("recursive");
    v1 = clap_builder::builder::arg::Arg::short(&v82, 82);
    v82 = clap_builder::builder::arg::Arg::long(&v1, "recursive");
    v1 = clap_builder::builder::arg::Arg::help(&v82, "List the contents of all directories recursively.");
    v78 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v82 = clap_builder::builder::command::Command::arg(&v94, &v78);
    v94 = clap_builder::builder::arg::Arg::new("width");
    v1 = clap_builder::builder::arg::Arg::long(&v94, "width");
    v94 = clap_builder::builder::arg::Arg::short(&v1, 119);
    v1 = clap_builder::builder::arg::Arg::help(&v94, "Assume that the terminal is COLS columns wide.");
    v78 = clap_builder::builder::arg::Arg::value_name(&v1, "COLS");
    v94 = clap_builder::builder::command::Command::arg(&v82, &v78);
    v82 = clap_builder::builder::arg::Arg::new("size");
    v1 = clap_builder::builder::arg::Arg::short(&v82, 115);
    v82 = clap_builder::builder::arg::Arg::long(&v1, "size");
    v1 = clap_builder::builder::arg::Arg::help(&v82, "print the allocated size of each file, in blocks");
    v78 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v82 = clap_builder::builder::command::Command::arg(&v94, &v78);
    v94 = clap_builder::builder::arg::Arg::new("color");
    v4 = clap_builder::builder::arg::Arg::long(&v94, "color");
    v94 = clap_builder::builder::arg::Arg::help(&v4, "Color output based on file type.");
    v11 = "always";
    v9 = 0x8000000000000000;
    v10 = v0;
    v1 = 0;
    v7 = 8;
    v8 = 0;
    v13 = 0;
    v78 = clap_builder::builder::possible_value::PossibleValue::alias(&v1, "yes");
    v50 = clap_builder::builder::possible_value::PossibleValue::alias(&v78, "force");
    v11 = "auto";
    v9 = 0x8000000000000000;
    v10 = v0;
    v1 = 0;
    v7 = 8;
    v8 = 0;
    v13 = 0;
    v78 = clap_builder::builder::possible_value::PossibleValue::alias(&v1, "tty");
    v60 = clap_builder::builder::possible_value::PossibleValue::alias(&v78, "if-tty");
    v11 = "never";
    v9 = 0x8000000000000000;
    v10 = v0;
    v1 = 0;
    v7 = 8;
    v8 = 0;
    v13 = 0;
    v78 = clap_builder::builder::possible_value::PossibleValue::alias(&v1, "no");
    v70 = clap_builder::builder::possible_value::PossibleValue::alias(&v78, "none");
    v129 = *(&v50.field_16 as &i128);
    v130 = v50.field_48;
    v131 = *(&v60.field_16 as &i128);
    v132 = v60.field_48;
    v1 = struct216 {
        field_0: v50.field_0
        field_16: v129
        field_32: v55
        field_48: v130
        field_64: v50.field_64
        field_72: v60.field_0
        field_88: v131
        field_104: v65
        field_120: v132
        field_136: v60.field_64
        field_144: v70.field_0
        field_160: *(&v70.field_16 as &i128)
        field_176: v75
        field_192: v70.field_48
        field_208: v70.field_64
    };
    <uucore::features::parser::shortcut_value_parser::ShortcutValueParser as core::convert::From<I>>::from(&v78, &v1);
    v1 = clap_builder::builder::arg::Arg::value_parser(&v94, &v78);
    memcpy(&v94, &v1, 632);
    v95 = 128 | v46;
    v96 = v47;
    v1 = clap_builder::builder::arg::Arg::num_args(&v94, None, 1);
    v94 = clap_builder::builder::command::Command::arg(&v82, &v1);
    v82 = clap_builder::builder::arg::Arg::new("indicator-style");
    v1 = clap_builder::builder::arg::Arg::long(&v82, "indicator-style");
    v82 = clap_builder::builder::arg::Arg::help(&v1, "Append indicator with style WORD to entry names: none (default),  slash (-p), file-type (--file-type), classify (-F)");
    v1 = struct64 {
        field_0: "none"
        field_16: "slash"
        field_32: "file-type"
        field_48: "classify"
    };
    <uucore::features::parser::shortcut_value_parser::ShortcutValueParser as core::convert::From<I>>::from(&v78, &v1);
    v1 = clap_builder::builder::arg::Arg::value_parser(&v82, &v78);
    v82 = struct64 {
        field_0: "file-type"
        field_16: "p"
        field_32: "classify"
        field_48: "indicator-style"
    };
    v78 = clap_builder::builder::arg::Arg::overrides_with_all(&v1, &v82);
    v82 = clap_builder::builder::command::Command::arg(&v94, &v78);
    v94 = clap_builder::builder::arg::Arg::new("classify");
    v1 = clap_builder::builder::arg::Arg::short(&v94, 70);
    v94 = clap_builder::builder::arg::Arg::long(&v1, "classify");
    v5 = clap_builder::builder::arg::Arg::help(&v94, "Append a character to each file name indicating the file type. Also, for regular files that are executable, append '*'. The file type indicators are '/' for directories, '@' for symbolic links, '|' for FIFOs, '=' for sockets, '>' for doors, and nothing for regular files. when may be omitted, or one of:\n\tnone - Do not classify. This is the default.\n\tauto - Only classify if standard output is a terminal.\n\talways - Always classify.\nSpecifying --classify and no when is equivalent to --classify=always. This will not follow symbolic links listed on the command line unless the --dereference-command-line (-H), --dereference (-L), or --dereference-command-line-symlink-to-dir options are specified.");
    v94 = clap_builder::builder::arg::Arg::value_name(&v5, "when");
    v11 = "always";
    v9 = 0x8000000000000000;
    v10 = v0;
    v1 = 0;
    v7 = 8;
    v8 = 0;
    v13 = 0;
    v78 = clap_builder::builder::possible_value::PossibleValue::alias(&v1, "yes");
    v51 = clap_builder::builder::possible_value::PossibleValue::alias(&v78, "force");
    v11 = "auto";
    v9 = 0x8000000000000000;
    v10 = v0;
    v1 = 0;
    v7 = 8;
    v8 = 0;
    v13 = 0;
    v78 = clap_builder::builder::possible_value::PossibleValue::alias(&v1, "tty");
    v61 = clap_builder::builder::possible_value::PossibleValue::alias(&v78, "if-tty");
    v11 = "never";
    v9 = 0x8000000000000000;
    v10 = v0;
    v1 = 0;
    v7 = 8;
    v8 = 0;
    v13 = 0;
    v78 = clap_builder::builder::possible_value::PossibleValue::alias(&v1, "no");
    v71 = clap_builder::builder::possible_value::PossibleValue::alias(&v78, "none");
    v133 = *(&v51.field_16 as &i128);
    v134 = v51.field_48;
    v135 = *(&v61.field_16 as &i128);
    v136 = v61.field_48;
    v1 = struct216 {
        field_0: v51.field_0
        field_16: v133
        field_32: v55
        field_48: v134
        field_64: v51.field_64
        field_72: v61.field_0
        field_88: v135
        field_104: v65
        field_120: v136
        field_136: v61.field_64
        field_144: v71.field_0
        field_160: *(&v71.field_16 as &i128)
        field_176: v75
        field_192: v71.field_48
        field_208: v71.field_64
    };
    <uucore::features::parser::shortcut_value_parser::ShortcutValueParser as core::convert::From<I>>::from(&v78, &v1);
    v1 = clap_builder::builder::arg::Arg::value_parser(&v94, &v78);
    v94 = clap_builder::builder::arg::Arg::default_missing_value(&v1);
    memcpy(&v1, &v94, 632);
    v46 = 128 | v95;
    v47 = v96;
    v94 = clap_builder::builder::arg::Arg::num_args(&v1, None, 1);
    v78 = struct64 {
        field_0: "file-type"
        field_16: "p"
        field_32: "classify"
        field_48: "indicator-style"
    };
    v1 = clap_builder::builder::arg::Arg::overrides_with_all(&v94, &v78);
    v94 = clap_builder::builder::command::Command::arg(&v82, &v1);
    v82 = clap_builder::builder::arg::Arg::new("file-type");
    v1 = clap_builder::builder::arg::Arg::long(&v82, "file-type");
    v82 = clap_builder::builder::arg::Arg::help(&v1, "Same as --classify, but do not append '*'");
    v78 = struct64 {
        field_0: "file-type"
        field_16: "p"
        field_32: "classify"
        field_48: "indicator-style"
    };
    v1 = clap_builder::builder::arg::Arg::overrides_with_all(&v82, &v78);
    v78 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v82 = clap_builder::builder::command::Command::arg(&v94, &v78);
    v94 = clap_builder::builder::arg::Arg::new("p");
    v1 = clap_builder::builder::arg::Arg::short(&v94, 112);
    v94 = clap_builder::builder::arg::Arg::help(&v1, "Append / indicator to directories.");
    v78 = struct64 {
        field_0: "file-type"
        field_16: "p"
        field_32: "classify"
        field_48: "indicator-style"
    };
    v1 = clap_builder::builder::arg::Arg::overrides_with_all(&v94, &v78);
    v78 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v94 = clap_builder::builder::command::Command::arg(&v82, &v78);
    v82 = clap_builder::builder::arg::Arg::new("time-style");
    v1 = clap_builder::builder::arg::Arg::long(&v82, "time-style");
    v82 = clap_builder::builder::arg::Arg::help(&v1, "time/date format with -l; see TIME_STYLE below");
    v1 = clap_builder::builder::arg::Arg::value_name(&v82, "TIME_STYLE");
    v82 = clap_builder::builder::arg::Arg::env(&v1, "TIME_STYLE");
    v1 = clap_builder::builder::arg::Arg::value_parser(&v82);
    v82 = struct16 {
        field_0: "time-style"
    };
    v78 = clap_builder::builder::arg::Arg::overrides_with_all(&v1, &v82);
    v82 = clap_builder::builder::command::Command::arg(&v94, &v78);
    v94 = clap_builder::builder::arg::Arg::new("full-time");
    v1 = clap_builder::builder::arg::Arg::long(&v94, "full-time");
    v94 = clap_builder::builder::arg::Arg::overrides_with(&v1, "full-time");
    v1 = clap_builder::builder::arg::Arg::help(&v94, "like -l --time-style=full-iso");
    v78 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v94 = clap_builder::builder::command::Command::arg(&v82, &v78);
    v82 = clap_builder::builder::arg::Arg::new("context");
    v1 = clap_builder::builder::arg::Arg::short(&v82, 90);
    v82 = clap_builder::builder::arg::Arg::long(&v1, "context");
    v1 = clap_builder::builder::arg::Arg::help(&v82, "print any security context of each file (not enabled)");
    v78 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v82 = clap_builder::builder::command::Command::arg(&v94, &v78);
    v94 = clap_builder::builder::arg::Arg::new("group-directories-first");
    v1 = clap_builder::builder::arg::Arg::long(&v94, "group-directories-first");
    v94 = clap_builder::builder::arg::Arg::help(&v1, "group directories before files; can be augmented with a --sort option, but any use of --sort=none (-U) disables grouping");
    v1 = clap_builder::builder::arg::Arg::action(&v94, 2);
    v94 = clap_builder::builder::command::Command::arg(&v82, &v1);
    v82 = clap_builder::builder::arg::Arg::new("paths");
    v1 = clap_builder::builder::arg::Arg::action(&v82, 1);
    v82 = clap_builder::builder::arg::Arg::value_hint(&v1);
    v78 = 2;
    v1 = clap_builder::builder::arg::Arg::value_parser(&v82, &v78);
    v82 = clap_builder::builder::command::Command::arg(&v94, &v1);
    clap_builder::builder::command::Command::after_help(v99, &v82);
    return a0;
}
