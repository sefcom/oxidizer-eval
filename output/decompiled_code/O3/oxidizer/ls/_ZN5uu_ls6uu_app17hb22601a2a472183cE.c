fn uu_ls::uu_app(a0: u32, a1: u32, a2: u32) -> u64 {
    let v0: i8;  // [bp-0xdc8]
    let v1: i4736;  // [sp-0xdb8], Other Possible Types: struct592, struct8, struct64, struct128, struct24
    let v2: i64;  // [sp-0xdb0]
    let v3: i128;  // [bp-0xda8]
    let v4: i64;  // [sp-0xda0]
    let v5: i128;  // [bp-0xd98]
    let v6: i64;  // [bp-0xd88]
    let v7: i64;  // [sp-0xd80]
    let v8: i8;  // [bp-0xd78]
    let v9: i576;  // [bp-0xd70]
    let v10: i128;  // [bp-0xd60]
    let v11: i128;  // [bp-0xd50]
    let v12: i128;  // [bp-0xd40]
    let v13: i576;  // [bp-0xd28]
    let v14: i576;  // [bp-0xc50]
    let v15: i576;  // [sp-0xb60], Other Possible Types: struct72
    let v16: i576;  // [sp-0xb18], Other Possible Types: struct72
    let v17: i576;  // [sp-0xad0], Other Possible Types: struct72
    let v18: i64;  // [sp-0xa88]
    let v19: i64;  // [sp-0xa80]
    let v20: i64;  // [sp-0xa78]
    let v21: i64;  // [sp-0xa70]
    let v22: i64;  // [sp-0xa68]
    let v23: i64;  // [sp-0xa60]
    let v24: i64;  // [sp-0xa58]
    let v25: i64;  // [sp-0xa50]
    let v26: i64;  // [sp-0xa48]
    let v27: i64;  // [sp-0xa40]
    let v28: i64;  // [sp-0xa38]
    let v29: i64;  // [sp-0xa30]
    let v30: i4736;  // [sp-0xa28], Other Possible Types: struct592, struct712, struct8, struct112, struct16
    let v31: i128;  // [bp-0xa18]
    let v32: i128;  // [bp-0xa08]
    let v33: i128;  // [bp-0x9f8]
    let v34: i8;  // [bp-0x9e8]
    let v35: i576;  // [bp-0x9e0]
    let v36: i576;  // [bp-0x998]
    let v37: i64;  // [sp-0x760]
    let v38: i64;  // [sp-0x758]
    let v39: i8;  // [sp-0x750]
    let v40: i64;  // [sp-0x748]
    let v41: i64;  // [sp-0x740]
    let v42: i64;  // [sp-0x738]
    let v43: i64;  // [sp-0x730]
    let v44: i64;  // [sp-0x728]
    let v45: i64;  // [sp-0x720]
    let v46: i64;  // [sp-0x718]
    let v47: i64;  // [sp-0x710]
    let v48: i64;  // [sp-0x708]
    let v49: i64;  // [sp-0x700]
    let v50: i64;  // [sp-0x6f8]
    let v51: i64;  // [sp-0x6f0]
    let v52: i64;  // [sp-0x6e8]
    let v53: i64;  // [sp-0x6e0]
    let v54: i64;  // [sp-0x6d8]
    let v55: i64;  // [sp-0x6d0]
    let v56: i64;  // [sp-0x6c8], Other Possible Types: struct592, struct72, struct24, struct8
    let v57: i128;  // [bp-0x6b8]
    let v58: i64;  // [sp-0x6b0]
    let v59: i128;  // [sp-0x6a8]
    let v60: i64;  // [sp-0x6a0]
    let v61: i128;  // [sp-0x698]
    let v62: i64;  // [sp-0x690]
    let v63: i128;  // [sp-0x688]
    let v64: i64;  // [sp-0x680]
    let v65: i128;  // [sp-0x678]
    let v66: i64;  // [sp-0x670]
    let v67: i64;  // [sp-0x478]
    let v68: i64;  // [sp-0x470]
    let v69: i64;  // [sp-0x468]
    let v70: i64;  // [sp-0x460]
    let v71: i64;  // [sp-0x458]
    let v72: i64;  // [sp-0x450]
    let v73: i64;  // [sp-0x448]
    let v74: i64;  // [sp-0x440]
    let v75: i64;  // [sp-0x438]
    let v76: i64;  // [sp-0x430]
    let v77: i4736;  // [sp-0x428], Other Possible Types: struct592, struct712, struct437
    let v78: i64;  // [sp-0x160]
    let v79: i64;  // [sp-0x158]
    let v80: i64;  // [sp-0x150]
    let v81: i64;  // [sp-0x148]
    let v82: i64;  // [sp-0x140]
    let v83: i64;  // [sp-0x138]
    let v84: i64;  // [sp-0x130]
    let v85: i64;  // [sp-0x128]
    let v86: i64;  // [sp-0x120]
    let v87: i64;  // [sp-0x118]
    let v88: i64;  // [sp-0x110]
    let v89: i64;  // [sp-0x108]
    let v90: i64;  // [sp-0x100]
    let v91: i64;  // [sp-0xf8]
    let v92: i64;  // [sp-0xf0]
    let v93: i64;  // [sp-0xe8]
    let v94: i64;  // [sp-0xe0]
    let v95: i64;  // [sp-0xd8]
    let v96: i64;  // [sp-0xd0]
    let v97: i64;  // [sp-0xc8]
    let v98: i64;  // [sp-0xc0]
    let v99: i64;  // [sp-0xb8]
    let v100: i64;  // [sp-0xb0]
    let v101: i64;  // [sp-0xa8]
    let v102: i128;  // [sp-0xa0]
    let v103: i64;  // [sp-0x90]
    let v104: i64;  // [sp-0x88]
    let v105: i8;  // [sp-0x80]
    let v106: i64;  // [sp-0x78]
    let v107: i64;  // [sp-0x70]
    let v108: i64;  // [sp-0x68]
    let v109: i64;  // [sp-0x60]
    let v110: i128;  // [sp-0x58]
    let v111: i64;  // [sp-0x48]
    let v112: i64;  // [sp-0x40]
    let v113: i8;  // [sp-0x38]
    let v115: i64;  // rdx
    let v116: i128;  // xmm0
    let v117: i128;  // xmm1
    let v118: i128;  // xmm2
    let v119: i128;  // xmm0
    let v120: i128;  // xmm1
    let v121: i128;  // xmm2
    let v122: i128;  // xmm1
    let v123: i128;  // xmm3
    let v124: i128;  // xmm0
    let v125: i128;  // xmm1
    let v126: i128;  // xmm3
    let v127: i128;  // xmm1
    let v128: i128;  // xmm3
    let v129: i128;  // xmm0
    let v130: i128;  // xmm1
    let v131: i128;  // xmm2
    let v132: i128;  // xmm0
    let v133: i128;  // xmm1
    let v134: i128;  // xmm2
    let v135: i128;  // xmm1
    let v136: i128;  // xmm3
    let v137: i128;  // xmm0
    let v138: i128;  // xmm1
    let v139: i128;  // xmm0
    let v140: i128;  // xmm1
    let v141: i128;  // xmm2
    let v142: i128;  // xmm0
    let v143: i128;  // xmm1
    let v144: i128;  // xmm2
    let v145: i128;  // xmm0
    let v146: i128;  // xmm1
    let v147: i128;  // xmm2
    let v148: i128;  // xmm0
    let v149: i128;  // xmm1
    let v150: i128;  // xmm2
    let v151: i128;  // xmm0
    let v152: i128;  // xmm1
    let v153: i128;  // xmm1
    let v154: i128;  // xmm3
    let v155: i128;  // xmm1
    let v156: i128;  // xmm3
    let v157: i128;  // xmm0
    let v158: i128;  // xmm1
    let v159: i128;  // xmm2
    let v160: i128;  // xmm0
    let v161: i128;  // xmm1
    let v162: i128;  // xmm2

    v77 = clap_builder::builder::command::Command::new(uucore::util_name(), v115);
    v30 = clap_builder::builder::command::Command::version(&v77, "0.0.28");
    v1 = uucore::format_usage("{} [OPTION]... [FILE]...");
    v77 = clap_builder::builder::command::Command::override_usage(&v30, &v1);
    v30 = clap_builder::builder::command::Command::about(&v77, &g_43501c, 84);
    memcpy(&v77, &v30, 700);
    v77.700 = 1126484022657160 | (stack_base)[1900] as i64;
    v77.708 = (stack_base)[1892] as i32;
    v30 = clap_builder::builder::arg::Arg::new("help");
    v1 = clap_builder::builder::arg::Arg::long(&v30, "help");
    v30 = clap_builder::builder::arg::Arg::help(&v1, "Print help information.");
    v1 = clap_builder::builder::arg::Arg::action(&v30, 5);
    v30 = clap_builder::builder::command::Command::arg(&v77, &v1);
    v77 = clap_builder::builder::arg::Arg::new("format");
    v1 = clap_builder::builder::arg::Arg::long(&v77, "format");
    v77 = clap_builder::builder::arg::Arg::help(&v1, "Set the display format.");
    v1 = struct128 {
        field_0: &anon.93c251adab0f837eec2f5865e5b29e23.26.llvm.10262286748963977039
        field_8: 4
        field_16: &g_434cba
        field_24: 7
        field_32: &g_434cc1
        field_40: 13
        field_48: &g_434cce
        field_56: 7
        field_64: &g_424878
        field_72: 8
        field_80: &g_434cd5
        field_88: 6
        field_96: &g_434cdb
        field_104: 10
        field_112: &g_434ce5
        field_120: 6
    };
    v56 = <uucore::parser::shortcut_value_parser::ShortcutValueParser as core::convert::From<I>>::from(&v1);
    v1 = clap_builder::builder::arg::Arg::value_parser(&v77, &v56);
    memcpy(&v77, &v1, 584);
    v77.584 = 144 | v1.584;
    v77.588 = v1.588;
    v56 = &anon.34cd953b2c946f74a585889e96ce9d7a.27.llvm.16853030268703478466;
    v56.8 = 6;
    v56.field_16 = &anon.93c251adab0f837eec2f5865e5b29e23.27.llvm.10262286748963977039;
    v58 = 1;
    v59 = &anon.93c251adab0f837eec2f5865e5b29e23.26.llvm.10262286748963977039;
    v60 = 4;
    v61 = &anon.93c251adab0f837eec2f5865e5b29e23.28.llvm.10262286748963977039;
    v62 = 1;
    v63 = &anon.93c251adab0f837eec2f5865e5b29e23.27.llvm.10262286748963977039;
    v64 = 1;
    v65 = &anon.34cd953b2c946f74a585889e96ce9d7a.45.llvm.16853030268703478466;
    v66 = 5;
    v1 = clap_builder::builder::arg::Arg::overrides_with_all(&v77, &v56);
    v77 = clap_builder::builder::command::Command::arg(&v30, &v1);
    v30 = clap_builder::builder::arg::Arg::new("C");
    v1 = clap_builder::builder::arg::Arg::short(&v30, 67);
    v30 = clap_builder::builder::arg::Arg::help(&v1, "Display the files in columns.");
    v67 = &anon.34cd953b2c946f74a585889e96ce9d7a.27.llvm.16853030268703478466;
    v68 = 6;
    v69 = &anon.93c251adab0f837eec2f5865e5b29e23.27.llvm.10262286748963977039;
    v70 = 1;
    v71 = &anon.93c251adab0f837eec2f5865e5b29e23.26.llvm.10262286748963977039;
    v72 = 4;
    v73 = &anon.93c251adab0f837eec2f5865e5b29e23.28.llvm.10262286748963977039;
    v74 = 1;
    v75 = &anon.93c251adab0f837eec2f5865e5b29e23.27.llvm.10262286748963977039;
    v76 = 1;
    v63 = v75;
    v64 = v76;
    v61 = v73;
    v62 = v74;
    v59 = v71;
    v60 = v72;
    v57 = v69;
    v56 = v67;
    v1 = clap_builder::builder::arg::Arg::overrides_with_all(&v30, &v56);
    v56 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v30 = clap_builder::builder::command::Command::arg(&v77, &v56);
    v77 = clap_builder::builder::arg::Arg::new("long");
    v1 = clap_builder::builder::arg::Arg::short(&v77, 108);
    v77 = clap_builder::builder::arg::Arg::long(&v1, "long");
    v1 = clap_builder::builder::arg::Arg::help(&v77, "Display detailed information.");
    v63 = v75;
    v116 = v67;
    v117 = v69;
    v118 = v71;
    v61 = v73;
    v59 = v118;
    v57 = v117;
    v56 = v116;
    v77 = clap_builder::builder::arg::Arg::overrides_with_all(&v1, &v56);
    v1 = clap_builder::builder::arg::Arg::action(&v77, 2);
    v77 = clap_builder::builder::command::Command::arg(&v30, &v1);
    v30 = clap_builder::builder::arg::Arg::new("x");
    v1 = clap_builder::builder::arg::Arg::short(&v30, 120);
    v30 = clap_builder::builder::arg::Arg::help(&v1, "List entries in rows instead of in columns.");
    v63 = v75;
    v119 = v67;
    v120 = v69;
    v121 = v71;
    v61 = v73;
    v59 = v121;
    v57 = v120;
    v56 = v119;
    v1 = clap_builder::builder::arg::Arg::overrides_with_all(&v30, &v56);
    v56 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v30 = clap_builder::builder::command::Command::arg(&v77, &v56);
    v77 = clap_builder::builder::arg::Arg::new("tabsize");
    v1 = clap_builder::builder::arg::Arg::short(&v77, 84);
    v77 = clap_builder::builder::arg::Arg::long(&v1, "tabsize");
    v1 = clap_builder::builder::arg::Arg::env(&v77, "TABSIZE");
    v77 = clap_builder::builder::arg::Arg::value_name(&v1, "COLS");
    v1 = clap_builder::builder::arg::Arg::help(&v77, "Assume tab stops at each COLS instead of 8 (unimplemented)");
    v77 = clap_builder::builder::command::Command::arg(&v30, &v1);
    v30 = clap_builder::builder::arg::Arg::new("m");
    v1 = clap_builder::builder::arg::Arg::short(&v30, 109);
    v30 = clap_builder::builder::arg::Arg::help(&v1, "List entries separated by commas.");
    v1 = clap_builder::builder::arg::Arg::overrides_with_all(&v30, &v67);
    v56 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v30 = clap_builder::builder::command::Command::arg(&v77, &v56);
    v77 = clap_builder::builder::arg::Arg::new("zero");
    v1 = clap_builder::builder::arg::Arg::long(&v77, "zero");
    v77 = clap_builder::builder::arg::Arg::overrides_with(&v1, "zero");
    v1 = clap_builder::builder::arg::Arg::help(&v77, "List entries separated by ASCII NUL characters.");
    v56 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v77 = clap_builder::builder::command::Command::arg(&v30, &v56);
    v30 = clap_builder::builder::arg::Arg::new("dired");
    v1 = clap_builder::builder::arg::Arg::long(&v30, "dired");
    v30 = clap_builder::builder::arg::Arg::short(&v1, 68);
    v1 = clap_builder::builder::arg::Arg::help(&v30, "generate output designed for Emacs' dired (Directory Editor) mode");
    v30 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v1 = clap_builder::builder::arg::Arg::overrides_with(&v30, "hyperlink");
    v30 = clap_builder::builder::command::Command::arg(&v77, &v1);
    v77 = clap_builder::builder::arg::Arg::new("hyperlink");
    v1 = clap_builder::builder::arg::Arg::long(&v77, "hyperlink");
    v77 = clap_builder::builder::arg::Arg::help(&v1, "hyperlink file names WHEN");
    v1.48 = 4410863;
    v1.56 = 6;
    v1.24 = 0x8000000000000000;
    v5 = v0;
    *(&v1.field_0 as &struct8) = struct8 {
        field_16: 0
    };
    v1.8 = 8;
    v1.16 = 0;
    v8 = 0;
    v56 = clap_builder::builder::possible_value::PossibleValue::alias(&v1, "yes");
    v17 = clap_builder::builder::possible_value::PossibleValue::alias(&v56, "force");
    v1.48 = 4342176;
    v1.56 = 4;
    v1.24 = 0x8000000000000000;
    v5 = v0;
    *(&v1.field_0 as &struct8) = struct8 {
        field_16: 0
    };
    v1.8 = 8;
    v1.16 = 0;
    v8 = 0;
    v56 = clap_builder::builder::possible_value::PossibleValue::alias(&v1, "tty");
    v15 = clap_builder::builder::possible_value::PossibleValue::alias(&v56, "if-tty");
    v1.48 = &g_434e06;
    v1.56 = 5;
    v1.24 = 0x8000000000000000;
    v5 = v0;
    *(&v1.field_0 as &struct8) = struct8 {
        field_16: 0
    };
    v1.8 = 8;
    v1.16 = 0;
    v8 = 0;
    v56 = clap_builder::builder::possible_value::PossibleValue::alias(&v1, "no");
    v16 = clap_builder::builder::possible_value::PossibleValue::alias(&v56, "none");
    v122 = *((&v17 as &char + 16) as &i128);
    v123 = *((&v17 as &char + 48) as &i128);
    v1 = v17;
    v3 = v122;
    *(&v5 as &struct72) = v17.field_32;
    v6 = v123;
    v8 = *((&v17 as &char + 64) as &i64);
    v9 = v15;
    v13 = v16;
    v56 = <uucore::parser::shortcut_value_parser::ShortcutValueParser as core::convert::From<I>>::from(&v1);
    v1 = clap_builder::builder::arg::Arg::value_parser(&v77, &v56);
    memcpy(&v77, &v1, 584);
    v77.584 = 128 | v1.584;
    v77.588 = v1.588;
    v37 = 0;
    v38 = 1;
    v39 = 0;
    v56.field_16 = (stack_base)[1872] as i64;
    v56 = v37;
    v56.8 = vvar_3020{stack -1880};
    v1 = clap_builder::builder::arg::Arg::num_args(&v77, &v56);
    v77 = clap_builder::builder::arg::Arg::default_missing_value(&v1, v115);
    v1 = clap_builder::builder::arg::Arg::default_value(&v77, v115);
    v77 = clap_builder::builder::arg::Arg::value_name(&v1, "WHEN");
    v1 = clap_builder::builder::arg::Arg::overrides_with(&v77, "dired");
    v77 = clap_builder::builder::command::Command::arg(&v30, &v1);
    v30 = clap_builder::builder::arg::Arg::new("1");
    v1 = clap_builder::builder::arg::Arg::short(&v30, 49);
    v30 = clap_builder::builder::arg::Arg::help(&v1, "List one file per line.");
    v1 = clap_builder::builder::arg::Arg::action(&v30, 2);
    v30 = clap_builder::builder::command::Command::arg(&v77, &v1);
    v77 = clap_builder::builder::arg::Arg::new("o");
    v1 = clap_builder::builder::arg::Arg::short(&v77, 111);
    v77 = clap_builder::builder::arg::Arg::help(&v1, "Long format without group information. Identical to --format=long with --no-group.");
    v1 = clap_builder::builder::arg::Arg::action(&v77, 2);
    v77 = clap_builder::builder::command::Command::arg(&v30, &v1);
    v30 = clap_builder::builder::arg::Arg::new("g");
    v1 = clap_builder::builder::arg::Arg::short(&v30, 103);
    v30 = clap_builder::builder::arg::Arg::help(&v1, "Long format without owner information.");
    v1 = clap_builder::builder::arg::Arg::action(&v30, 2);
    v30 = clap_builder::builder::command::Command::arg(&v77, &v1);
    v77 = clap_builder::builder::arg::Arg::new("numeric-uid-gid");
    v1 = clap_builder::builder::arg::Arg::short(&v77, 110);
    v77 = clap_builder::builder::arg::Arg::long(&v1, "numeric-uid-gid");
    v1 = clap_builder::builder::arg::Arg::help(&v77, "-l with numeric UIDs and GIDs.");
    v56 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v77 = clap_builder::builder::command::Command::arg(&v30, &v56);
    v30 = clap_builder::builder::arg::Arg::new("quoting-style");
    v1 = clap_builder::builder::arg::Arg::long(&v30, "quoting-style");
    v30 = clap_builder::builder::arg::Arg::help(&v1, "Set quoting style.");
    v103 = &g_434e50;
    v104 = 7;
    v101 = 0x8000000000000000;
    v102 = v0;
    v98 = 0;
    v99 = 8;
    v100 = 0;
    v105 = 0;
    v111 = &g_434e57;
    v112 = 5;
    v109 = 0x8000000000000000;
    v110 = v102;
    v106 = 0;
    v107 = 8;
    v108 = 0;
    v113 = 0;
    v17.field_48 = 4410984;
    v17.56 = 12;
    v17.field_24 = 0x8000000000000000;
    v17.field_32 = (stack_base)[3528] as i128;
    v17 = 0;
    v17.8 = 8;
    v17.field_16 = 0;
    v17.field_64 = 0;
    v15.field_48 = 4410972;
    v15.56 = 12;
    v15.field_24 = 0x8000000000000000;
    v15.field_32 = (stack_base)[3528] as i128;
    v15 = 0;
    v15.8 = 8;
    v15.field_16 = 0;
    v15.field_64 = 0;
    v16.field_48 = 4410996;
    v16.56 = 19;
    v16.field_24 = 0x8000000000000000;
    v124 = v0;
    v16.field_32 = vvar_735{reg 224};
    v16 = 0;
    v16.8 = 8;
    v16.field_16 = 0;
    v16.field_64 = 0;
    v1.48 = 4411015;
    v1.56 = 1;
    v1.24 = 0x8000000000000000;
    v5 = v0;
    *(&v1.field_0 as &struct8) = struct8 {
        field_16: 0
    };
    v1.8 = 8;
    v1.16 = 0;
    v8 = 0;
    v56 = clap_builder::builder::possible_value::PossibleValue::alias(&v1, "c-maybe");
    v1.464 = (stack_base)[3528] as i128;
    v125 = v100;
    v126 = v103;
    v1 = v98;
    v3 = v125;
    v5 = v102;
    v6 = v126;
    v8 = v105;
    v127 = v108;
    v128 = v111;
    v9 = v106;
    v10 = v127;
    v11 = v110;
    v12 = v128;
    v1.136 = (stack_base)[56] as i64;
    v1.208 = (stack_base)[2704] as i64;
    v1.192 = (stack_base)[2720] as i128;
    v1.176 = vvar_3074{stack -2736};
    v1.160 = (stack_base)[2752] as i128;
    v1.144 = (stack_base)[2768] as i128;
    v1.280 = (stack_base)[2848] as i64;
    v1.264 = (stack_base)[2864] as i128;
    v1.248 = vvar_3082{stack -2880};
    v1.232 = (stack_base)[2896] as i128;
    v1.216 = (stack_base)[2912] as i128;
    v1.352 = (stack_base)[2776] as i64;
    v1.336 = (stack_base)[2792] as i128;
    v1.320 = v16.field_32;
    v1.304 = (stack_base)[2824] as i128;
    v1.288 = (stack_base)[2840] as i128;
    v14 = v56;
    v1.432 = 0;
    v1.440 = 8;
    v1.448 = 0;
    v1.456 = 0x8000000000000000;
    v1.480 = 4411016;
    v1.488 = 6;
    v1.496 = 0;
    v56 = <uucore::parser::shortcut_value_parser::ShortcutValueParser as core::convert::From<I>>::from(&v1);
    v1 = clap_builder::builder::arg::Arg::value_parser(&v30, &v56);
    v40 = &anon.34cd953b2c946f74a585889e96ce9d7a.21.llvm.16853030268703478466;
    v41 = 13;
    v42 = &anon.fab34c35a86c36917711c18ae4d7480d.1.llvm.13771626934311262642;
    v43 = 7;
    v44 = &anon.fab34c35a86c36917711c18ae4d7480d.0.llvm.13771626934311262642;
    v45 = 6;
    v46 = &anon.fab34c35a86c36917711c18ae4d7480d.2.llvm.13771626934311262642;
    v47 = 10;
    v30.48 = vvar_3139{stack -1816};
    v30.56 = vvar_3140{stack -1808};
    v30.32 = vvar_3137{stack -1832};
    v30.40 = vvar_3138{stack -1824};
    v30.16 = vvar_3135{stack -1848};
    v30.24 = vvar_3136{stack -1840};
    v30 = v40;
    v56 = clap_builder::builder::arg::Arg::overrides_with_all(&v1, &v30);
    v30 = clap_builder::builder::command::Command::arg(&v77, &v56);
    v77 = clap_builder::builder::arg::Arg::new("literal");
    v1 = clap_builder::builder::arg::Arg::short(&v77, 78);
    v77 = clap_builder::builder::arg::Arg::long(&v1, "literal");
    v1 = clap_builder::builder::arg::Arg::alias(&v77, "l");
    v77 = clap_builder::builder::arg::Arg::help(&v1, "Use literal quoting style. Equivalent to `--quoting-style=literal`");
    v129 = v40;
    v130 = v42;
    v131 = v44;
    v61 = v46;
    v59 = v131;
    v57 = v130;
    v56 = v129;
    v1 = clap_builder::builder::arg::Arg::overrides_with_all(&v77, &v56);
    v56 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v77 = clap_builder::builder::command::Command::arg(&v30, &v56);
    v30 = clap_builder::builder::arg::Arg::new("escape");
    v1 = clap_builder::builder::arg::Arg::short(&v30, 98);
    v30 = clap_builder::builder::arg::Arg::long(&v1, "escape");
    v1 = clap_builder::builder::arg::Arg::help(&v30, "Use escape quoting style. Equivalent to `--quoting-style=escape`");
    v132 = v40;
    v133 = v42;
    v134 = v44;
    v61 = v46;
    v59 = v134;
    v57 = v133;
    v56 = v132;
    v30 = clap_builder::builder::arg::Arg::overrides_with_all(&v1, &v56);
    v1 = clap_builder::builder::arg::Arg::action(&v30, 2);
    v30 = clap_builder::builder::command::Command::arg(&v77, &v1);
    v77 = clap_builder::builder::arg::Arg::new("quote-name");
    v1 = clap_builder::builder::arg::Arg::short(&v77, 81);
    v77 = clap_builder::builder::arg::Arg::long(&v1, "quote-name");
    v1 = clap_builder::builder::arg::Arg::help(&v77, "Use C quoting style. Equivalent to `--quoting-style=c`");
    v77 = clap_builder::builder::arg::Arg::overrides_with_all(&v1, &v40);
    v1 = clap_builder::builder::arg::Arg::action(&v77, 2);
    v77 = clap_builder::builder::command::Command::arg(&v30, &v1);
    v30 = clap_builder::builder::arg::Arg::new("hide-control-chars");
    v1 = clap_builder::builder::arg::Arg::short(&v30, 113);
    v30 = clap_builder::builder::arg::Arg::long(&v1, "hide-control-chars");
    v1 = clap_builder::builder::arg::Arg::help(&v30, "Replace control characters with '?' if they are not escaped.");
    v90 = &anon.34cd953b2c946f74a585889e96ce9d7a.22.llvm.16853030268703478466;
    v91 = 18;
    v92 = &anon.34cd953b2c946f74a585889e96ce9d7a.23.llvm.16853030268703478466;
    v93 = 18;
    v56.16 = vvar_3177{stack -240};
    v56.24 = vvar_3178{stack -232};
    v56 = v90;
    v56.8 = vvar_3176{stack -248};
    v30 = clap_builder::builder::arg::Arg::overrides_with_all(&v1, &v56);
    v1 = clap_builder::builder::arg::Arg::action(&v30, 2);
    v30 = clap_builder::builder::command::Command::arg(&v77, &v1);
    v77 = clap_builder::builder::arg::Arg::new("show-control-chars");
    v1 = clap_builder::builder::arg::Arg::long(&v77, "show-control-chars");
    v77 = clap_builder::builder::arg::Arg::help(&v1, "Show control characters 'as is' if they are not escaped.");
    v1 = clap_builder::builder::arg::Arg::overrides_with_all(&v77, &v90);
    v56 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v77 = clap_builder::builder::command::Command::arg(&v30, &v56);
    v30 = clap_builder::builder::arg::Arg::new("time");
    v1 = clap_builder::builder::arg::Arg::long(&v30, "time");
    v30 = clap_builder::builder::arg::Arg::help(&v1, &g_4353e1, 124);
    v1 = clap_builder::builder::arg::Arg::value_name(&v30, "field");
    v30.48 = 4410775;
    v30.56 = 5;
    v30.24 = 0x8000000000000000;
    v32 = v0;
    *(&v30.field_0 as &struct8) = struct8 {
        field_16: 0
    };
    v30.8 = 8;
    v30.16 = 0;
    v34 = 0;
    v56 = clap_builder::builder::possible_value::PossibleValue::alias(&v30, "access");
    v15 = clap_builder::builder::possible_value::PossibleValue::alias(&v56, "use");
    v30.48 = 4410758;
    v30.56 = 5;
    v30.24 = 0x8000000000000000;
    v32 = v0;
    *(&v30.field_0 as &struct8) = struct8 {
        field_16: 0
    };
    v30.8 = 8;
    v30.16 = 0;
    v34 = 0;
    v16 = clap_builder::builder::possible_value::PossibleValue::alias(&v30, "status");
    v30.48 = 4410783;
    v30.56 = 5;
    v30.24 = 0x8000000000000000;
    v32 = v0;
    *(&v30.field_0 as &struct8) = struct8 {
        field_16: 0
    };
    v30.8 = 8;
    v30.16 = 0;
    v34 = 0;
    v56 = clap_builder::builder::possible_value::PossibleValue::alias(&v30, "creation");
    v135 = *((&v15 as &char + 16) as &i128);
    v136 = *((&v15 as &char + 48) as &i128);
    v30 = v15;
    v31 = v135;
    *(&v32 as &struct72) = v15.field_32;
    v33 = v136;
    v34 = *((&v15 as &char + 64) as &i64);
    v35 = v16;
    v36 = v56;
    v56 = <uucore::parser::shortcut_value_parser::ShortcutValueParser as core::convert::From<I>>::from(&v30);
    v30 = clap_builder::builder::arg::Arg::value_parser(&v1, &v56);
    memcpy(&v1, &v30, 584);
    v1.584 = 144 | (stack_base)[2016] as i32;
    v1.588 = (stack_base)[2012] as i32;
    v78 = &anon.34cd953b2c946f74a585889e96ce9d7a.29.llvm.16853030268703478466;
    v79 = 4;
    v80 = &anon.83a0cd952aafddc6208a8708073e042c.11.llvm.14598271094969023070;
    v81 = 1;
    v82 = &anon.83a0cd952aafddc6208a8708073e042c.12.llvm.14598271094969023070;
    v83 = 1;
    v30.32 = vvar_3234{stack -320};
    v30.40 = vvar_3235{stack -312};
    v30.16 = vvar_3232{stack -336};
    v30.24 = vvar_3233{stack -328};
    v30 = v78;
    v30.8 = vvar_3231{stack -344};
    v56 = clap_builder::builder::arg::Arg::overrides_with_all(&v1, &v30);
    v30 = clap_builder::builder::command::Command::arg(&v77, &v56);
    v77 = clap_builder::builder::arg::Arg::new("c");
    v1 = clap_builder::builder::arg::Arg::short(&v77, 99);
    v77 = clap_builder::builder::arg::Arg::help(&v1, "If the long listing format (e.g., -l, -o) is being used, print the status change time (the 'ctime' in the inode) instead of the modification time. When explicitly sorting by time (--sort=time or -t) or when not using a long listing format, sort according to the status change time.");
    v137 = v78;
    v138 = v80;
    v59 = v82;
    v57 = v138;
    v56 = v137;
    v1 = clap_builder::builder::arg::Arg::overrides_with_all(&v77, &v56);
    v56 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v77 = clap_builder::builder::command::Command::arg(&v30, &v56);
    v30 = clap_builder::builder::arg::Arg::new("u");
    v1 = clap_builder::builder::arg::Arg::short(&v30, 117);
    v30 = clap_builder::builder::arg::Arg::help(&v1, "If the long listing format (e.g., -l, -o) is being used, print the status access time instead of the modification time. When explicitly sorting by time (--sort=time or -t) or when not using a long listing format, sort according to the access time.");
    v1 = clap_builder::builder::arg::Arg::overrides_with_all(&v30, &v78);
    v56 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v30 = clap_builder::builder::command::Command::arg(&v77, &v56);
    v77 = clap_builder::builder::arg::Arg::new("hide");
    v1 = clap_builder::builder::arg::Arg::long(&v77, "hide");
    v77 = clap_builder::builder::arg::Arg::action(&v1, 1);
    v1 = clap_builder::builder::arg::Arg::value_name(&v77, "PATTERN");
    v56 = clap_builder::builder::arg::Arg::help(&v1, "do not list implied entries matching shell PATTERN (overridden by -a or -A)");
    v77 = clap_builder::builder::command::Command::arg(&v30, &v56);
    v30 = clap_builder::builder::arg::Arg::new("ignore");
    v1 = clap_builder::builder::arg::Arg::short(&v30, 73);
    v30 = clap_builder::builder::arg::Arg::long(&v1, "ignore");
    v1 = clap_builder::builder::arg::Arg::action(&v30, 1);
    v30 = clap_builder::builder::arg::Arg::value_name(&v1, "PATTERN");
    v1 = clap_builder::builder::arg::Arg::help(&v30, "do not list implied entries matching shell PATTERN");
    v30 = clap_builder::builder::command::Command::arg(&v77, &v1);
    v77 = clap_builder::builder::arg::Arg::new("ignore-backups");
    v1 = clap_builder::builder::arg::Arg::short(&v77, 66);
    v77 = clap_builder::builder::arg::Arg::long(&v1, "ignore-backups");
    v1 = clap_builder::builder::arg::Arg::help(&v77, "Ignore entries which end with ~.");
    v56 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v77 = clap_builder::builder::command::Command::arg(&v30, &v56);
    v30 = clap_builder::builder::arg::Arg::new("sort");
    v1 = clap_builder::builder::arg::Arg::long(&v30, "sort");
    v30 = clap_builder::builder::arg::Arg::help(&v1, "Sort by <field>: name, none (-U), time (-t), size (-S), extension (-X) or width");
    v1 = clap_builder::builder::arg::Arg::value_name(&v30, "field");
    v30 = struct112 {
        field_0: &g_424278
        field_8: 4
        field_16: &g_424260
        field_24: 4
        field_32: &anon.34cd953b2c946f74a585889e96ce9d7a.29.llvm.16853030268703478466
        field_40: 4
        field_48: &anon.1ee88fda822c10878a738d2784ca6dcb.19.llvm.3648300969967796025
        field_56: 4
        field_64: &g_434d2f
        field_72: 7
        field_80: &g_434d36
        field_88: 9
        field_96: &g_434d3f
        field_104: 5
    };
    v56 = <uucore::parser::shortcut_value_parser::ShortcutValueParser as core::convert::From<I>>::from(&v30);
    v30 = clap_builder::builder::arg::Arg::value_parser(&v1, &v56);
    memcpy(&v1, &v30, 584);
    v1.584 = 128 | (stack_base)[2016] as i32;
    v1.588 = (stack_base)[2012] as i32;
    v18 = &anon.34cd953b2c946f74a585889e96ce9d7a.28.llvm.16853030268703478466;
    v19 = 4;
    v20 = &anon.e216b4e3e10aba1d3c34a49b95316d36.10.llvm.1085536016573220028;
    v21 = 1;
    v22 = &anon.e216b4e3e10aba1d3c34a49b95316d36.11.llvm.1085536016573220028;
    v23 = 1;
    v24 = &anon.e216b4e3e10aba1d3c34a49b95316d36.12.llvm.1085536016573220028;
    v25 = 1;
    v26 = &anon.e216b4e3e10aba1d3c34a49b95316d36.13.llvm.1085536016573220028;
    v27 = 1;
    v28 = &anon.e216b4e3e10aba1d3c34a49b95316d36.14.llvm.1085536016573220028;
    v29 = 1;
    v30.80 = vvar_3306{stack -2616};
    v30.88 = vvar_3307{stack -2608};
    v34 = v26;
    v30.72 = vvar_3305{stack -2624};
    v30.48 = vvar_3302{stack -2648};
    v30.56 = vvar_3303{stack -2640};
    v32 = v22;
    v31 = v20;
    v30 = v18;
    v56 = clap_builder::builder::arg::Arg::overrides_with_all(&v1, &v30);
    v30 = clap_builder::builder::command::Command::arg(&v77, &v56);
    v77 = clap_builder::builder::arg::Arg::new("S");
    v1 = clap_builder::builder::arg::Arg::short(&v77, 83);
    v77 = clap_builder::builder::arg::Arg::help(&v1, "Sort by file size, largest first.");
    v65 = v28;
    v63 = v26;
    v139 = v18;
    v140 = v20;
    v141 = v22;
    v61 = v24;
    v59 = v141;
    v57 = v140;
    v56 = v139;
    v1 = clap_builder::builder::arg::Arg::overrides_with_all(&v77, &v56);
    v56 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v77 = clap_builder::builder::command::Command::arg(&v30, &v56);
    v30 = clap_builder::builder::arg::Arg::new("t");
    v1 = clap_builder::builder::arg::Arg::short(&v30, 116);
    v30 = clap_builder::builder::arg::Arg::help(&v1, "Sort by modification time (the 'mtime' in the inode), newest first.");
    v65 = v28;
    v63 = v26;
    v142 = v18;
    v143 = v20;
    v144 = v22;
    v61 = v24;
    v59 = v144;
    v57 = v143;
    v56 = v142;
    v1 = clap_builder::builder::arg::Arg::overrides_with_all(&v30, &v56);
    v56 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v30 = clap_builder::builder::command::Command::arg(&v77, &v56);
    v77 = clap_builder::builder::arg::Arg::new("v");
    v1 = clap_builder::builder::arg::Arg::short(&v77, 118);
    v77 = clap_builder::builder::arg::Arg::help(&v1, "Natural sort of (version) numbers in the filenames.");
    v65 = v28;
    v63 = v26;
    v145 = v18;
    v146 = v20;
    v147 = v22;
    v61 = v24;
    v59 = v147;
    v57 = v146;
    v56 = v145;
    v1 = clap_builder::builder::arg::Arg::overrides_with_all(&v77, &v56);
    v56 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v77 = clap_builder::builder::command::Command::arg(&v30, &v56);
    v30 = clap_builder::builder::arg::Arg::new("X");
    v1 = clap_builder::builder::arg::Arg::short(&v30, 88);
    v30 = clap_builder::builder::arg::Arg::help(&v1, "Sort alphabetically by entry extension.");
    v65 = v28;
    v63 = v26;
    v148 = v18;
    v149 = v20;
    v150 = v22;
    v61 = v24;
    v59 = v150;
    v57 = v149;
    v56 = v148;
    v1 = clap_builder::builder::arg::Arg::overrides_with_all(&v30, &v56);
    v56 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v30 = clap_builder::builder::command::Command::arg(&v77, &v56);
    v77 = clap_builder::builder::arg::Arg::new("U");
    v1 = clap_builder::builder::arg::Arg::short(&v77, 85);
    v77 = clap_builder::builder::arg::Arg::help(&v1, "Do not sort; list the files in whatever order they are stored in the directory.  This is especially useful when listing very large directories, since not doing any sorting can be noticeably faster.");
    v1 = clap_builder::builder::arg::Arg::overrides_with_all(&v77, &v18);
    v56 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v77 = clap_builder::builder::command::Command::arg(&v30, &v56);
    v30 = clap_builder::builder::arg::Arg::new("dereference");
    v1 = clap_builder::builder::arg::Arg::short(&v30, 76);
    v30 = clap_builder::builder::arg::Arg::long(&v1, "dereference");
    v1 = clap_builder::builder::arg::Arg::help(&v30, "When showing file information for a symbolic link, show information for the file the link references rather than the link itself.");
    v84 = &anon.34cd953b2c946f74a585889e96ce9d7a.17.llvm.16853030268703478466;
    v85 = 11;
    v86 = &anon.34cd953b2c946f74a585889e96ce9d7a.19.llvm.16853030268703478466;
    v87 = 39;
    v88 = &anon.34cd953b2c946f74a585889e96ce9d7a.18.llvm.16853030268703478466;
    v89 = 24;
    v56.32 = vvar_3353{stack -272};
    v56.40 = vvar_3354{stack -264};
    v56.16 = vvar_3351{stack -288};
    v56.24 = vvar_3352{stack -280};
    v56 = v84;
    v56.8 = vvar_3350{stack -296};
    v30 = clap_builder::builder::arg::Arg::overrides_with_all(&v1, &v56);
    v1 = clap_builder::builder::arg::Arg::action(&v30, 2);
    v30 = clap_builder::builder::command::Command::arg(&v77, &v1);
    v77 = clap_builder::builder::arg::Arg::new("dereference-command-line-symlink-to-dir");
    v1 = clap_builder::builder::arg::Arg::long(&v77, "dereference-command-line-symlink-to-dir");
    v77 = clap_builder::builder::arg::Arg::help(&v1, "Do not follow symlinks except when they link to directories and are given as command line arguments.");
    v151 = v84;
    v152 = v86;
    v59 = v88;
    v57 = v152;
    v56 = v151;
    v1 = clap_builder::builder::arg::Arg::overrides_with_all(&v77, &v56);
    v56 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v77 = clap_builder::builder::command::Command::arg(&v30, &v56);
    v30 = clap_builder::builder::arg::Arg::new("dereference-command-line");
    v1 = clap_builder::builder::arg::Arg::short(&v30, 72);
    v30 = clap_builder::builder::arg::Arg::long(&v1, "dereference-command-line");
    v1 = clap_builder::builder::arg::Arg::help(&v30, "Do not follow symlinks except when given as command line arguments.");
    v30 = clap_builder::builder::arg::Arg::overrides_with_all(&v1, &v84);
    v1 = clap_builder::builder::arg::Arg::action(&v30, 2);
    v30 = clap_builder::builder::command::Command::arg(&v77, &v1);
    v77 = clap_builder::builder::arg::Arg::new("no-group");
    v1 = clap_builder::builder::arg::Arg::long(&v77, "no-group");
    v77 = clap_builder::builder::arg::Arg::short(&v1, 71);
    v1 = clap_builder::builder::arg::Arg::help(&v77, "Do not show group in long format.");
    v56 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v77 = clap_builder::builder::command::Command::arg(&v30, &v56);
    v30 = clap_builder::builder::arg::Arg::new("author");
    v1 = clap_builder::builder::arg::Arg::long(&v30, "author");
    v30 = clap_builder::builder::arg::Arg::help(&v1, "Show author in long format. On the supported platforms, the author always matches the file owner.");
    v1 = clap_builder::builder::arg::Arg::action(&v30, 2);
    v30 = clap_builder::builder::command::Command::arg(&v77, &v1);
    v77 = clap_builder::builder::arg::Arg::new("all");
    v1 = clap_builder::builder::arg::Arg::short(&v77, 97);
    v77 = clap_builder::builder::arg::Arg::long(&v1, "all");
    v94 = &anon.34cd953b2c946f74a585889e96ce9d7a.15.llvm.16853030268703478466;
    v95 = 3;
    v96 = &anon.34cd953b2c946f74a585889e96ce9d7a.16.llvm.16853030268703478466;
    v97 = 10;
    v56.16 = vvar_3393{stack -208};
    v56.24 = vvar_3394{stack -200};
    v56 = v94;
    v56.8 = vvar_3392{stack -216};
    v1 = clap_builder::builder::arg::Arg::overrides_with_all(&v77, &v56);
    v77 = clap_builder::builder::arg::Arg::help(&v1, "Do not ignore hidden files (files with names that start with '.').");
    v1 = clap_builder::builder::arg::Arg::action(&v77, 2);
    v77 = clap_builder::builder::command::Command::arg(&v30, &v1);
    v30 = clap_builder::builder::arg::Arg::new("almost-all");
    v1 = clap_builder::builder::arg::Arg::short(&v30, 65);
    v30 = clap_builder::builder::arg::Arg::long(&v1, "almost-all");
    v1 = clap_builder::builder::arg::Arg::overrides_with_all(&v30, &v94);
    v30 = clap_builder::builder::arg::Arg::help(&v1, "In a directory, do not ignore all file names that start with '.', only ignore '.' and '..'.");
    v1 = clap_builder::builder::arg::Arg::action(&v30, 2);
    v30 = clap_builder::builder::command::Command::arg(&v77, &v1);
    v77 = clap_builder::builder::arg::Arg::new("directory");
    v1 = clap_builder::builder::arg::Arg::short(&v77, 100);
    v77 = clap_builder::builder::arg::Arg::long(&v1, "directory");
    v1 = clap_builder::builder::arg::Arg::help(&v77, "Only list the names of directories, rather than listing directory contents. This will not follow symbolic links unless one of `--dereference-command-line (-H)`, `--dereference (-L)`, or `--dereference-command-line-symlink-to-dir` is specified.");
    v56 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v77 = clap_builder::builder::command::Command::arg(&v30, &v56);
    v30 = clap_builder::builder::arg::Arg::new("human-readable");
    v1 = clap_builder::builder::arg::Arg::short(&v30, 104);
    v30 = clap_builder::builder::arg::Arg::long(&v1, "human-readable");
    v1 = clap_builder::builder::arg::Arg::help(&v30, "Print human readable file sizes (e.g. 1K 234M 56G).");
    v56 = &anon.1ee88fda822c10878a738d2784ca6dcb.20.llvm.3648300969967796025;
    v56.8 = 10;
    v56.16 = &anon.1ee88fda822c10878a738d2784ca6dcb.22.llvm.3648300969967796025;
    v56.24 = 2;
    v30 = clap_builder::builder::arg::Arg::overrides_with_all(&v1, &v56);
    v1 = clap_builder::builder::arg::Arg::action(&v30, 2);
    v30 = clap_builder::builder::command::Command::arg(&v77, &v1);
    v77 = clap_builder::builder::arg::Arg::new("kibibytes");
    v1 = clap_builder::builder::arg::Arg::short(&v77, 107);
    v77 = clap_builder::builder::arg::Arg::long(&v1, "kibibytes");
    v1 = clap_builder::builder::arg::Arg::help(&v77, "default to 1024-byte blocks for file system usage; used only with -s and per directory totals");
    v56 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v77 = clap_builder::builder::command::Command::arg(&v30, &v56);
    v30 = clap_builder::builder::arg::Arg::new("si");
    v1 = clap_builder::builder::arg::Arg::long(&v30, "si");
    v30 = clap_builder::builder::arg::Arg::help(&v1, "Print human readable file sizes using powers of 1000 instead of 1024.");
    v56 = &anon.1ee88fda822c10878a738d2784ca6dcb.20.llvm.3648300969967796025;
    v56.8 = 10;
    v56.16 = &anon.1ee88fda822c10878a738d2784ca6dcb.21.llvm.3648300969967796025;
    v56.24 = 14;
    v1 = clap_builder::builder::arg::Arg::overrides_with_all(&v30, &v56);
    v56 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v30 = clap_builder::builder::command::Command::arg(&v77, &v56);
    v77 = clap_builder::builder::arg::Arg::new("block-size");
    v1 = clap_builder::builder::arg::Arg::long(&v77, "block-size");
    memcpy(&v77, &v1, 584);
    v77.584 = 128 | v1.584;
    v77.588 = v1.588;
    v1 = clap_builder::builder::arg::Arg::value_name(&v77, "BLOCK_SIZE");
    v77 = clap_builder::builder::arg::Arg::help(&v1, "scale sizes by BLOCK_SIZE when printing them");
    v56 = &anon.1ee88fda822c10878a738d2784ca6dcb.22.llvm.3648300969967796025;
    v56.8 = 2;
    v56.16 = &anon.1ee88fda822c10878a738d2784ca6dcb.21.llvm.3648300969967796025;
    v56.24 = 14;
    v1 = clap_builder::builder::arg::Arg::overrides_with_all(&v77, &v56);
    v77 = clap_builder::builder::command::Command::arg(&v30, &v1);
    v30 = clap_builder::builder::arg::Arg::new("inode");
    v1 = clap_builder::builder::arg::Arg::short(&v30, 105);
    v30 = clap_builder::builder::arg::Arg::long(&v1, "inode");
    v1 = clap_builder::builder::arg::Arg::help(&v30, "print the index number of each file");
    v56 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v30 = clap_builder::builder::command::Command::arg(&v77, &v56);
    v77 = clap_builder::builder::arg::Arg::new("reverse");
    v1 = clap_builder::builder::arg::Arg::short(&v77, 114);
    v77 = clap_builder::builder::arg::Arg::long(&v1, "reverse");
    v1 = clap_builder::builder::arg::Arg::help(&v77, "Reverse whatever the sorting method is e.g., list files in reverse alphabetical order, youngest first, smallest first, or whatever.");
    v56 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v77 = clap_builder::builder::command::Command::arg(&v30, &v56);
    v30 = clap_builder::builder::arg::Arg::new("recursive");
    v1 = clap_builder::builder::arg::Arg::short(&v30, 82);
    v30 = clap_builder::builder::arg::Arg::long(&v1, "recursive");
    v1 = clap_builder::builder::arg::Arg::help(&v30, "List the contents of all directories recursively.");
    v56 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v30 = clap_builder::builder::command::Command::arg(&v77, &v56);
    v77 = clap_builder::builder::arg::Arg::new("width");
    v1 = clap_builder::builder::arg::Arg::long(&v77, "width");
    v77 = clap_builder::builder::arg::Arg::short(&v1, 119);
    v1 = clap_builder::builder::arg::Arg::help(&v77, "Assume that the terminal is COLS columns wide.");
    v56 = clap_builder::builder::arg::Arg::value_name(&v1, "COLS");
    v77 = clap_builder::builder::command::Command::arg(&v30, &v56);
    v30 = clap_builder::builder::arg::Arg::new("size");
    v1 = clap_builder::builder::arg::Arg::short(&v30, 115);
    v30 = clap_builder::builder::arg::Arg::long(&v1, "size");
    v1 = clap_builder::builder::arg::Arg::help(&v30, "print the allocated size of each file, in blocks");
    v56 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v30 = clap_builder::builder::command::Command::arg(&v77, &v56);
    v77 = clap_builder::builder::arg::Arg::new("color");
    v1 = clap_builder::builder::arg::Arg::long(&v77, "color");
    v77 = clap_builder::builder::arg::Arg::help(&v1, "Color output based on file type.");
    v1.48 = 4410863;
    v1.56 = 6;
    v1.24 = 0x8000000000000000;
    v5 = v0;
    *(&v1.field_0 as &struct8) = struct8 {
        field_16: 0
    };
    v1.8 = 8;
    v1.16 = 0;
    v8 = 0;
    v56 = clap_builder::builder::possible_value::PossibleValue::alias(&v1, "yes");
    v17 = clap_builder::builder::possible_value::PossibleValue::alias(&v56, "force");
    v1.48 = 4342176;
    v1.56 = 4;
    v1.24 = 0x8000000000000000;
    v5 = v0;
    *(&v1.field_0 as &struct8) = struct8 {
        field_16: 0
    };
    v1.8 = 8;
    v1.16 = 0;
    v8 = 0;
    v56 = clap_builder::builder::possible_value::PossibleValue::alias(&v1, "tty");
    v15 = clap_builder::builder::possible_value::PossibleValue::alias(&v56, "if-tty");
    v6 = &g_434e06;
    v7 = 5;
    v4 = 0x8000000000000000;
    v5 = v0;
    *(&v1.field_0 as &struct8) = struct8 {
        field_16: 0
    };
    v2 = 8;
    v3 = 0;
    v8 = 0;
    v56 = clap_builder::builder::possible_value::PossibleValue::alias(&v1, "no");
    v16 = clap_builder::builder::possible_value::PossibleValue::alias(&v56, "none");
    v153 = *((&v17 as &char + 16) as &i128);
    v154 = *((&v17 as &char + 48) as &i128);
    v1 = v17;
    v3 = v153;
    *(&v5 as &struct72) = v17.field_32;
    v6 = v154;
    v8 = *((&v17 as &char + 64) as &i64);
    v9 = v15;
    v13 = v16;
    v56 = <uucore::parser::shortcut_value_parser::ShortcutValueParser as core::convert::From<I>>::from(&v1);
    v1 = clap_builder::builder::arg::Arg::value_parser(&v77, &v56);
    memcpy(&v77, &v1, 584);
    v77.584 = 128 | v1.584;
    v77.588 = v1.588;
    v56.field_16 = (stack_base)[1872] as i64;
    v56 = v37;
    v1 = clap_builder::builder::arg::Arg::num_args(&v77, &v56);
    v77 = clap_builder::builder::command::Command::arg(&v30, &v1);
    v30 = clap_builder::builder::arg::Arg::new("indicator-style");
    v1 = clap_builder::builder::arg::Arg::long(&v30, "indicator-style");
    v30 = clap_builder::builder::arg::Arg::help(&v1, "Append indicator with style WORD to entry names: none (default),  slash (-p), file-type (--file-type), classify (-F)");
    v1 = struct64 {
        field_0: &g_424260
        field_8: 4
        field_16: &g_434f32
        field_24: 5
        field_32: &g_434f29
        field_40: 9
        field_48: &anon.cfc37c807317366388c1b51bb9a73ad5.26.llvm.1151552614418493144
        field_56: 8
    };
    v56 = <uucore::parser::shortcut_value_parser::ShortcutValueParser as core::convert::From<I>>::from(&v1);
    v1 = clap_builder::builder::arg::Arg::value_parser(&v30, &v56);
    v48 = &anon.cfc37c807317366388c1b51bb9a73ad5.25.llvm.1151552614418493144;
    v49 = 9;
    v50 = &anon.cfc37c807317366388c1b51bb9a73ad5.24.llvm.1151552614418493144;
    v51 = 1;
    v52 = &anon.cfc37c807317366388c1b51bb9a73ad5.26.llvm.1151552614418493144;
    v53 = 8;
    v54 = &anon.34cd953b2c946f74a585889e96ce9d7a.37.llvm.16853030268703478466;
    v55 = 15;
    v30.48 = vvar_3546{stack -1752};
    v30.56 = vvar_3547{stack -1744};
    v30.32 = vvar_3544{stack -1768};
    v30.40 = vvar_3545{stack -1760};
    v30.16 = vvar_3542{stack -1784};
    v30.24 = vvar_3543{stack -1776};
    v30 = v48;
    v56 = clap_builder::builder::arg::Arg::overrides_with_all(&v1, &v30);
    v30 = clap_builder::builder::command::Command::arg(&v77, &v56);
    v77 = clap_builder::builder::arg::Arg::new("classify");
    v1 = clap_builder::builder::arg::Arg::short(&v77, 70);
    v77 = clap_builder::builder::arg::Arg::long(&v1, "classify");
    v1 = clap_builder::builder::arg::Arg::help(&v77, &g_435eac, 697);
    v77 = clap_builder::builder::arg::Arg::value_name(&v1, "when");
    v1.48 = 4410863;
    v1.56 = 6;
    v1.24 = 0x8000000000000000;
    v5 = v0;
    *(&v1.field_0 as &struct8) = struct8 {
        field_16: 0
    };
    v1.8 = 8;
    v1.16 = 0;
    v8 = 0;
    v56 = clap_builder::builder::possible_value::PossibleValue::alias(&v1, "yes");
    v17 = clap_builder::builder::possible_value::PossibleValue::alias(&v56, "force");
    v1.48 = 4342176;
    v1.56 = 4;
    v1.24 = 0x8000000000000000;
    v5 = v0;
    *(&v1.field_0 as &struct8) = struct8 {
        field_16: 0
    };
    v1.8 = 8;
    v1.16 = 0;
    v8 = 0;
    v56 = clap_builder::builder::possible_value::PossibleValue::alias(&v1, "tty");
    v15 = clap_builder::builder::possible_value::PossibleValue::alias(&v56, "if-tty");
    v6 = &g_434e06;
    v7 = 5;
    v4 = 0x8000000000000000;
    v5 = v0;
    *(&v1.field_0 as &struct8) = struct8 {
        field_16: 0
    };
    v2 = 8;
    v3 = 0;
    v8 = 0;
    v56 = clap_builder::builder::possible_value::PossibleValue::alias(&v1, "no");
    v16 = clap_builder::builder::possible_value::PossibleValue::alias(&v56, "none");
    v155 = *((&v17 as &char + 16) as &i128);
    v156 = *((&v17 as &char + 48) as &i128);
    v1 = v17;
    v3 = v155;
    *(&v5 as &struct72) = v17.field_32;
    v6 = v156;
    v8 = *((&v17 as &char + 64) as &i64);
    v9 = v15;
    v13 = v16;
    v56 = <uucore::parser::shortcut_value_parser::ShortcutValueParser as core::convert::From<I>>::from(&v1);
    v1 = clap_builder::builder::arg::Arg::value_parser(&v77, &v56);
    v77 = clap_builder::builder::arg::Arg::default_missing_value(&v1, v115);
    memcpy(&v1, &v77, 584);
    v1.584 = 128 | v77.584;
    v1.588 = v77.588;
    v77 = clap_builder::builder::arg::Arg::num_args(&v1, &v37);
    v157 = v48;
    v158 = v50;
    v159 = v52;
    v61 = v54;
    v59 = v159;
    v57 = v158;
    v56 = v157;
    v1 = clap_builder::builder::arg::Arg::overrides_with_all(&v77, &v56);
    v77 = clap_builder::builder::command::Command::arg(&v30, &v1);
    v30 = clap_builder::builder::arg::Arg::new("file-type");
    v1 = clap_builder::builder::arg::Arg::long(&v30, "file-type");
    v30 = clap_builder::builder::arg::Arg::help(&v1, "Same as --classify, but do not append '*'");
    v160 = v48;
    v161 = v50;
    v162 = v52;
    v61 = v54;
    v59 = v162;
    v57 = v161;
    v56 = v160;
    v1 = clap_builder::builder::arg::Arg::overrides_with_all(&v30, &v56);
    v56 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v30 = clap_builder::builder::command::Command::arg(&v77, &v56);
    v77 = clap_builder::builder::arg::Arg::new("p");
    v1 = clap_builder::builder::arg::Arg::short(&v77, 112);
    v77 = clap_builder::builder::arg::Arg::help(&v1, "Append / indicator to directories.");
    v1 = clap_builder::builder::arg::Arg::overrides_with_all(&v77, &v48);
    v56 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v77 = clap_builder::builder::command::Command::arg(&v30, &v56);
    v30 = clap_builder::builder::arg::Arg::new("time-style");
    v1 = clap_builder::builder::arg::Arg::long(&v30, "time-style");
    v30 = clap_builder::builder::arg::Arg::help(&v1, "time/date format with -l; see TIME_STYLE below");
    v1 = clap_builder::builder::arg::Arg::value_name(&v30, "TIME_STYLE");
    v30 = clap_builder::builder::arg::Arg::env(&v1, "TIME_STYLE");
    v1 = clap_builder::builder::arg::Arg::value_parser(&v30);
    v30 = struct16 {
        field_0: &anon.34cd953b2c946f74a585889e96ce9d7a.38.llvm.16853030268703478466
        field_8: 10
    };
    v56 = clap_builder::builder::arg::Arg::overrides_with_all(&v1, &v30);
    v30 = clap_builder::builder::command::Command::arg(&v77, &v56);
    v77 = clap_builder::builder::arg::Arg::new("full-time");
    v1 = clap_builder::builder::arg::Arg::long(&v77, "full-time");
    v77 = clap_builder::builder::arg::Arg::overrides_with(&v1, "full-time");
    v1 = clap_builder::builder::arg::Arg::help(&v77, "like -l --time-style=full-iso");
    v56 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v77 = clap_builder::builder::command::Command::arg(&v30, &v56);
    v30 = clap_builder::builder::arg::Arg::new("context");
    v1 = clap_builder::builder::arg::Arg::short(&v30, 90);
    v30 = clap_builder::builder::arg::Arg::long(&v1, "context");
    v1 = clap_builder::builder::arg::Arg::help(&v30, "print any security context of each file (not enabled)");
    v56 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v30 = clap_builder::builder::command::Command::arg(&v77, &v56);
    v77 = clap_builder::builder::arg::Arg::new("group-directories-first");
    v1 = clap_builder::builder::arg::Arg::long(&v77, "group-directories-first");
    v77 = clap_builder::builder::arg::Arg::help(&v1, "group directories before files; can be augmented with a --sort option, but any use of --sort=none (-U) disables grouping");
    v1 = clap_builder::builder::arg::Arg::action(&v77, 2);
    v77 = clap_builder::builder::command::Command::arg(&v30, &v1);
    v30 = clap_builder::builder::arg::Arg::new("paths");
    v1 = clap_builder::builder::arg::Arg::action(&v30, 1);
    v30 = clap_builder::builder::arg::Arg::value_hint(&v1, 2);
    v56 = struct8 {
        field_0: 2
    };
    v1 = clap_builder::builder::arg::Arg::value_parser(&v30, &v56);
    v30 = clap_builder::builder::command::Command::arg(&v77, &v1);
    clap_builder::builder::command::Command::after_help(a0, &v30, "The TIME_STYLE argument can be full-iso, long-iso, iso, locale or +FORMAT. FORMAT is interpreted like in date. Also the TIME_STYLE environment variable sets the default style to use.");
    return a0;
}
