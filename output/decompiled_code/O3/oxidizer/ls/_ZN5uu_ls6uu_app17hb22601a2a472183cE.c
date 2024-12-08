fn uu_ls::uu_app(a0: u32, a1: u32, a2: u32) -> u64 {
    let v0: i8;  // [bp-0xdc8]
    let v1: i4736;  // [sp-0xdb8], Other Possible Types: struct592, struct8, struct24, struct64, struct128
    let v2: i64;  // [sp-0xdb0]
    let v3: i64;  // [bp-0xda8]
    let v4: i64;  // [sp-0xda0]
    let v5: i128;  // [bp-0xd98]
    let v6: i64;  // [bp-0xd88]
    let v7: i64;  // [sp-0xd80]
    let v8: i8;  // [bp-0xd78]
    let v9: i128;  // [bp-0xd70]
    let v10: i128;  // [bp-0xd60]
    let v11: i128;  // [bp-0xd50]
    let v12: i128;  // [bp-0xd40]
    let v13: i576;  // [sp-0xb60], Other Possible Types: struct72
    let v14: struct72;  // [sp-0xb18], Other Possible Types: i576
    let v15: i64;  // [sp-0xad0], Other Possible Types: struct72
    let v16: i64;  // [sp-0xa88]
    let v17: i64;  // [sp-0xa80]
    let v18: i64;  // [sp-0xa78]
    let v19: i64;  // [sp-0xa70]
    let v20: i64;  // [sp-0xa68]
    let v21: i64;  // [sp-0xa60]
    let v22: i64;  // [sp-0xa58]
    let v23: i64;  // [sp-0xa50]
    let v24: i64;  // [sp-0xa48]
    let v25: i64;  // [sp-0xa40]
    let v26: i64;  // [sp-0xa38]
    let v27: i64;  // [sp-0xa30]
    let v28: i4736;  // [sp-0xa28], Other Possible Types: struct592, struct712, struct8, struct112, struct16
    let v29: i128;  // [bp-0xa18]
    let v30: i128;  // [bp-0xa08]
    let v31: i128;  // [bp-0x9f8]
    let v32: i8;  // [bp-0x9e8]
    let v33: i128;  // [bp-0x9e0]
    let v34: i128;  // [bp-0x9d0]
    let v35: i128;  // [bp-0x9c0]
    let v36: i64;  // [sp-0x760]
    let v37: i64;  // [sp-0x758]
    let v38: i8;  // [sp-0x750]
    let v39: i64;  // [sp-0x748]
    let v40: i64;  // [sp-0x740]
    let v41: i64;  // [sp-0x738]
    let v42: i64;  // [sp-0x730]
    let v43: i64;  // [sp-0x728]
    let v44: i64;  // [sp-0x720]
    let v45: i64;  // [sp-0x718]
    let v46: i64;  // [sp-0x710]
    let v47: i64;  // [sp-0x708]
    let v48: i64;  // [sp-0x700]
    let v49: i64;  // [sp-0x6f8]
    let v50: i64;  // [sp-0x6f0]
    let v51: i64;  // [sp-0x6e8]
    let v52: i64;  // [sp-0x6e0]
    let v53: i64;  // [sp-0x6d8]
    let v54: i64;  // [sp-0x6d0]
    let v55: i576;  // [sp-0x6c8], Other Possible Types: struct592, struct72, struct24, struct8
    let v56: i128;  // [bp-0x6b8]
    let v57: i64;  // [sp-0x6b0]
    let v58: i128;  // [sp-0x6a8]
    let v59: i64;  // [sp-0x6a0]
    let v60: i128;  // [sp-0x698]
    let v61: i64;  // [sp-0x690]
    let v62: i128;  // [sp-0x688]
    let v63: i64;  // [sp-0x680]
    let v64: i128;  // [sp-0x678]
    let v65: i64;  // [sp-0x670]
    let v66: i64;  // [sp-0x478]
    let v67: i64;  // [sp-0x470]
    let v68: i64;  // [sp-0x468]
    let v69: i64;  // [sp-0x460]
    let v70: i64;  // [sp-0x458]
    let v71: i64;  // [sp-0x450]
    let v72: i64;  // [sp-0x448]
    let v73: i64;  // [sp-0x440]
    let v74: i64;  // [sp-0x438]
    let v75: i64;  // [sp-0x430]
    let v76: i4736;  // [sp-0x428], Other Possible Types: struct592, struct712, struct437
    let v77: i64;  // [sp-0x160]
    let v78: i64;  // [sp-0x158]
    let v79: i64;  // [sp-0x150]
    let v80: i64;  // [sp-0x148]
    let v81: i64;  // [sp-0x140]
    let v82: i64;  // [sp-0x138]
    let v83: i64;  // [sp-0x130]
    let v84: i64;  // [sp-0x128]
    let v85: i64;  // [sp-0x120]
    let v86: i64;  // [sp-0x118]
    let v87: i64;  // [sp-0x110]
    let v88: i64;  // [sp-0x108]
    let v89: i64;  // [sp-0x100]
    let v90: i64;  // [sp-0xf8]
    let v91: i64;  // [sp-0xf0]
    let v92: i64;  // [sp-0xe8]
    let v93: i64;  // [sp-0xe0]
    let v94: i64;  // [sp-0xd8]
    let v95: i64;  // [sp-0xd0]
    let v96: i64;  // [sp-0xc8]
    let v97: i64;  // [sp-0xc0]
    let v98: i64;  // [sp-0xb8]
    let v99: i64;  // [sp-0xb0]
    let v100: i64;  // [sp-0xa8]
    let v101: i128;  // [sp-0xa0]
    let v102: i64;  // [sp-0x90]
    let v103: i64;  // [sp-0x88]
    let v104: i8;  // [sp-0x80]
    let v105: i64;  // [sp-0x78]
    let v106: i64;  // [sp-0x70]
    let v107: i64;  // [sp-0x68]
    let v108: i64;  // [sp-0x60]
    let v109: i128;  // [sp-0x58]
    let v110: i64;  // [sp-0x48]
    let v111: i64;  // [sp-0x40]
    let v112: i8;  // [sp-0x38]
    let v114: i64;  // rdx
    let v115: i128;  // xmm0
    let v116: i128;  // xmm1
    let v117: i128;  // xmm2
    let v118: i128;  // xmm0
    let v119: i128;  // xmm1
    let v120: i128;  // xmm2
    let v121: i128;  // xmm1
    let v122: i128;  // xmm3
    let v123: i128;  // xmm1
    let v124: i128;  // xmm3
    let v125: i128;  // xmm0
    let v126: i128;  // xmm1
    let v127: i128;  // xmm3
    let v128: i128;  // xmm1
    let v129: i128;  // xmm3
    let v130: i128;  // xmm0
    let v131: i128;  // xmm1
    let v132: i128;  // xmm2
    let v133: i128;  // xmm0
    let v134: i128;  // xmm1
    let v135: i128;  // xmm2
    let v136: i128;  // xmm1
    let v137: i128;  // xmm3
    let v138: i128;  // xmm1
    let v139: i128;  // xmm3
    let v140: i128;  // xmm0
    let v141: i128;  // xmm1
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
    let v153: i128;  // xmm2
    let v154: i128;  // xmm0
    let v155: i128;  // xmm1
    let v156: i128;  // xmm1
    let v157: i128;  // xmm3
    let v158: i128;  // xmm1
    let v159: i128;  // xmm3
    let v160: i128;  // xmm1
    let v161: i128;  // xmm3
    let v162: i128;  // xmm1
    let v163: i128;  // xmm3
    let v164: i128;  // xmm0
    let v165: i128;  // xmm1
    let v166: i128;  // xmm2
    let v167: i128;  // xmm0
    let v168: i128;  // xmm1
    let v169: i128;  // xmm2

    v76 = clap_builder::builder::command::Command::new(uucore::util_name(), v114);
    v28 = clap_builder::builder::command::Command::version(&v76, "0.0.28");
    v1 = uucore::format_usage("{} [OPTION]... [FILE]...");
    v76 = clap_builder::builder::command::Command::override_usage(&v28, &v1);
    v28 = clap_builder::builder::command::Command::about(&v76, &g_43501c, 84);
    memcpy(&v76, &v28, 700);
    v76.700 = 1126484022657160 | (stack_base)[1900] as i64;
    v76.708 = (stack_base)[1892] as i32;
    v28 = clap_builder::builder::arg::Arg::new("help");
    v1 = clap_builder::builder::arg::Arg::long(&v28, "help");
    v28 = clap_builder::builder::arg::Arg::help(&v1, "Print help information.");
    v1 = clap_builder::builder::arg::Arg::action(&v28, 5);
    v28 = clap_builder::builder::command::Command::arg(&v76, &v1);
    v76 = clap_builder::builder::arg::Arg::new("format");
    v1 = clap_builder::builder::arg::Arg::long(&v76, "format");
    v76 = clap_builder::builder::arg::Arg::help(&v1, "Set the display format.");
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
    v55 = <uucore::parser::shortcut_value_parser::ShortcutValueParser as core::convert::From<I>>::from(&v1);
    v1 = clap_builder::builder::arg::Arg::value_parser(&v76, &v55);
    memcpy(&v76, &v1, 584);
    v76.584 = 144 | v1.584;
    v76.588 = v1.588;
    v55 = &anon.34cd953b2c946f74a585889e96ce9d7a.27.llvm.16853030268703478466;
    v55.8 = 6;
    v55.field_16 = &anon.93c251adab0f837eec2f5865e5b29e23.27.llvm.10262286748963977039;
    v57 = 1;
    v58 = &anon.93c251adab0f837eec2f5865e5b29e23.26.llvm.10262286748963977039;
    v59 = 4;
    v60 = &anon.93c251adab0f837eec2f5865e5b29e23.28.llvm.10262286748963977039;
    v61 = 1;
    v62 = &anon.93c251adab0f837eec2f5865e5b29e23.27.llvm.10262286748963977039;
    v63 = 1;
    v64 = &anon.34cd953b2c946f74a585889e96ce9d7a.45.llvm.16853030268703478466;
    v65 = 5;
    v1 = clap_builder::builder::arg::Arg::overrides_with_all(&v76, &v55);
    v76 = clap_builder::builder::command::Command::arg(&v28, &v1);
    v28 = clap_builder::builder::arg::Arg::new("C");
    v1 = clap_builder::builder::arg::Arg::short(&v28, 67);
    v28 = clap_builder::builder::arg::Arg::help(&v1, "Display the files in columns.");
    v66 = &anon.34cd953b2c946f74a585889e96ce9d7a.27.llvm.16853030268703478466;
    v67 = 6;
    v68 = &anon.93c251adab0f837eec2f5865e5b29e23.27.llvm.10262286748963977039;
    v69 = 1;
    v70 = &anon.93c251adab0f837eec2f5865e5b29e23.26.llvm.10262286748963977039;
    v71 = 4;
    v72 = &anon.93c251adab0f837eec2f5865e5b29e23.28.llvm.10262286748963977039;
    v73 = 1;
    v74 = &anon.93c251adab0f837eec2f5865e5b29e23.27.llvm.10262286748963977039;
    v75 = 1;
    v62 = v74;
    v63 = v75;
    v60 = v72;
    v61 = v73;
    v58 = v70;
    v59 = v71;
    v56 = v68;
    v55 = v66;
    v1 = clap_builder::builder::arg::Arg::overrides_with_all(&v28, &v55);
    v55 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v28 = clap_builder::builder::command::Command::arg(&v76, &v55);
    v76 = clap_builder::builder::arg::Arg::new("long");
    v1 = clap_builder::builder::arg::Arg::short(&v76, 108);
    v76 = clap_builder::builder::arg::Arg::long(&v1, "long");
    v1 = clap_builder::builder::arg::Arg::help(&v76, "Display detailed information.");
    v62 = v74;
    v115 = v66;
    v116 = v68;
    v117 = v70;
    v60 = v72;
    v58 = v117;
    v56 = v116;
    v55 = v115;
    v76 = clap_builder::builder::arg::Arg::overrides_with_all(&v1, &v55);
    v1 = clap_builder::builder::arg::Arg::action(&v76, 2);
    v76 = clap_builder::builder::command::Command::arg(&v28, &v1);
    v28 = clap_builder::builder::arg::Arg::new("x");
    v1 = clap_builder::builder::arg::Arg::short(&v28, 120);
    v28 = clap_builder::builder::arg::Arg::help(&v1, "List entries in rows instead of in columns.");
    v62 = v74;
    v118 = v66;
    v119 = v68;
    v120 = v70;
    v60 = v72;
    v58 = v120;
    v56 = v119;
    v55 = v118;
    v1 = clap_builder::builder::arg::Arg::overrides_with_all(&v28, &v55);
    v55 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v28 = clap_builder::builder::command::Command::arg(&v76, &v55);
    v76 = clap_builder::builder::arg::Arg::new("tabsize");
    v1 = clap_builder::builder::arg::Arg::short(&v76, 84);
    v76 = clap_builder::builder::arg::Arg::long(&v1, "tabsize");
    v1 = clap_builder::builder::arg::Arg::env(&v76, "TABSIZE");
    v76 = clap_builder::builder::arg::Arg::value_name(&v1, "COLS");
    v1 = clap_builder::builder::arg::Arg::help(&v76, "Assume tab stops at each COLS instead of 8 (unimplemented)");
    v76 = clap_builder::builder::command::Command::arg(&v28, &v1);
    v28 = clap_builder::builder::arg::Arg::new("m");
    v1 = clap_builder::builder::arg::Arg::short(&v28, 109);
    v28 = clap_builder::builder::arg::Arg::help(&v1, "List entries separated by commas.");
    v1 = clap_builder::builder::arg::Arg::overrides_with_all(&v28, &v66);
    v55 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v28 = clap_builder::builder::command::Command::arg(&v76, &v55);
    v76 = clap_builder::builder::arg::Arg::new("zero");
    v1 = clap_builder::builder::arg::Arg::long(&v76, "zero");
    v76 = clap_builder::builder::arg::Arg::overrides_with(&v1, "zero");
    v1 = clap_builder::builder::arg::Arg::help(&v76, "List entries separated by ASCII NUL characters.");
    v55 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v76 = clap_builder::builder::command::Command::arg(&v28, &v55);
    v28 = clap_builder::builder::arg::Arg::new("dired");
    v1 = clap_builder::builder::arg::Arg::long(&v28, "dired");
    v28 = clap_builder::builder::arg::Arg::short(&v1, 68);
    v1 = clap_builder::builder::arg::Arg::help(&v28, "generate output designed for Emacs' dired (Directory Editor) mode");
    v28 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v1 = clap_builder::builder::arg::Arg::overrides_with(&v28, "hyperlink");
    v28 = clap_builder::builder::command::Command::arg(&v76, &v1);
    v76 = clap_builder::builder::arg::Arg::new("hyperlink");
    v1 = clap_builder::builder::arg::Arg::long(&v76, "hyperlink");
    v76 = clap_builder::builder::arg::Arg::help(&v1, "hyperlink file names WHEN");
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
    v55 = clap_builder::builder::possible_value::PossibleValue::alias(&v1, "yes");
    v15 = clap_builder::builder::possible_value::PossibleValue::alias(&v55, "force");
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
    v55 = clap_builder::builder::possible_value::PossibleValue::alias(&v1, "tty");
    v13 = clap_builder::builder::possible_value::PossibleValue::alias(&v55, "if-tty");
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
    v55 = clap_builder::builder::possible_value::PossibleValue::alias(&v1, "no");
    v14 = clap_builder::builder::possible_value::PossibleValue::alias(&v55, "none");
    v121 = *((&v15 as &char + 16) as &i128);
    v122 = *((&v15 as &char + 48) as &i128);
    v1 = v15;
    v3 = v121;
    *(&v5 as &struct72) = v15.field_32;
    v6 = v122;
    v8 = *((&v15 as &char + 64) as &i64);
    v123 = *((&v13 as &char + 16) as &i128);
    v124 = *((&v13 as &char + 48) as &i128);
    v9 = v13;
    v10 = v123;
    *(&v11 as &struct72) = v13.field_32;
    v12 = v124;
    v1.136 = (stack_base)[2848] as i64;
    v1.208 = (stack_base)[2776] as i64;
    v1.192 = (stack_base)[2792] as i128;
    v1.176 = v14.field_32;
    v1.160 = (stack_base)[2824] as i128;
    v1.144 = (stack_base)[2840] as i128;
    v55 = <uucore::parser::shortcut_value_parser::ShortcutValueParser as core::convert::From<I>>::from(&v1);
    v1 = clap_builder::builder::arg::Arg::value_parser(&v76, &v55);
    memcpy(&v76, &v1, 584);
    v76.584 = 128 | v1.584;
    v76.588 = v1.588;
    v36 = 0;
    v37 = 1;
    v38 = 0;
    v55.field_16 = (stack_base)[1872] as i64;
    v55 = v36;
    v55.8 = vvar_3020{stack -1880};
    v1 = clap_builder::builder::arg::Arg::num_args(&v76, &v55);
    v76 = clap_builder::builder::arg::Arg::default_missing_value(&v1, v114);
    v1 = clap_builder::builder::arg::Arg::default_value(&v76, v114);
    v76 = clap_builder::builder::arg::Arg::value_name(&v1, "WHEN");
    v1 = clap_builder::builder::arg::Arg::overrides_with(&v76, "dired");
    v76 = clap_builder::builder::command::Command::arg(&v28, &v1);
    v28 = clap_builder::builder::arg::Arg::new("1");
    v1 = clap_builder::builder::arg::Arg::short(&v28, 49);
    v28 = clap_builder::builder::arg::Arg::help(&v1, "List one file per line.");
    v1 = clap_builder::builder::arg::Arg::action(&v28, 2);
    v28 = clap_builder::builder::command::Command::arg(&v76, &v1);
    v76 = clap_builder::builder::arg::Arg::new("o");
    v1 = clap_builder::builder::arg::Arg::short(&v76, 111);
    v76 = clap_builder::builder::arg::Arg::help(&v1, "Long format without group information. Identical to --format=long with --no-group.");
    v1 = clap_builder::builder::arg::Arg::action(&v76, 2);
    v76 = clap_builder::builder::command::Command::arg(&v28, &v1);
    v28 = clap_builder::builder::arg::Arg::new("g");
    v1 = clap_builder::builder::arg::Arg::short(&v28, 103);
    v28 = clap_builder::builder::arg::Arg::help(&v1, "Long format without owner information.");
    v1 = clap_builder::builder::arg::Arg::action(&v28, 2);
    v28 = clap_builder::builder::command::Command::arg(&v76, &v1);
    v76 = clap_builder::builder::arg::Arg::new("numeric-uid-gid");
    v1 = clap_builder::builder::arg::Arg::short(&v76, 110);
    v76 = clap_builder::builder::arg::Arg::long(&v1, "numeric-uid-gid");
    v1 = clap_builder::builder::arg::Arg::help(&v76, "-l with numeric UIDs and GIDs.");
    v55 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v76 = clap_builder::builder::command::Command::arg(&v28, &v55);
    v28 = clap_builder::builder::arg::Arg::new("quoting-style");
    v1 = clap_builder::builder::arg::Arg::long(&v28, "quoting-style");
    v28 = clap_builder::builder::arg::Arg::help(&v1, "Set quoting style.");
    v102 = &g_434e50;
    v103 = 7;
    v100 = 0x8000000000000000;
    v101 = v0;
    v97 = 0;
    v98 = 8;
    v99 = 0;
    v104 = 0;
    v110 = &g_434e57;
    v111 = 5;
    v108 = 0x8000000000000000;
    v109 = v101;
    v105 = 0;
    v106 = 8;
    v107 = 0;
    v112 = 0;
    v15.field_48 = 4410984;
    v15.56 = 12;
    v15.field_24 = 0x8000000000000000;
    v15.field_32 = (stack_base)[3528] as i128;
    v15 = 0;
    v15.8 = 8;
    v15.field_16 = 0;
    v15.field_64 = 0;
    v13.field_48 = 4410972;
    v13.56 = 12;
    v13.field_24 = 0x8000000000000000;
    v13.field_32 = (stack_base)[3528] as i128;
    v13 = 0;
    v13.8 = 8;
    v13.field_16 = 0;
    v13.field_64 = 0;
    v14.field_48 = 4410996;
    v14.56 = 19;
    v14.field_24 = 0x8000000000000000;
    v125 = v0;
    v14.field_32 = vvar_735{reg 224};
    v14 = 0;
    v14.8 = 8;
    v14.field_16 = 0;
    v14.field_64 = 0;
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
    v55 = clap_builder::builder::possible_value::PossibleValue::alias(&v1, "c-maybe");
    v1.464 = (stack_base)[3528] as i128;
    v126 = v99;
    v127 = v102;
    v1 = v97;
    v3 = v126;
    v5 = v101;
    v6 = v127;
    v8 = v104;
    v128 = v107;
    v129 = v110;
    v9 = v105;
    v10 = v128;
    v11 = v109;
    v12 = v129;
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
    v1.320 = v14.field_32;
    v1.304 = (stack_base)[2824] as i128;
    v1.288 = (stack_base)[2840] as i128;
    v1.424 = v55.field_64;
    v1.408 = (stack_base)[1688] as i128;
    v1.392 = (stack_base)[1704] as i128;
    v1.376 = (stack_base)[1720] as i128;
    v1.360 = (stack_base)[1736] as i128;
    v1.432 = 0;
    v1.440 = 8;
    v1.448 = 0;
    v1.456 = 0x8000000000000000;
    v1.480 = 4411016;
    v1.488 = 6;
    v1.496 = 0;
    v55 = <uucore::parser::shortcut_value_parser::ShortcutValueParser as core::convert::From<I>>::from(&v1);
    v1 = clap_builder::builder::arg::Arg::value_parser(&v28, &v55);
    v39 = &anon.34cd953b2c946f74a585889e96ce9d7a.21.llvm.16853030268703478466;
    v40 = 13;
    v41 = &anon.fab34c35a86c36917711c18ae4d7480d.1.llvm.13771626934311262642;
    v42 = 7;
    v43 = &anon.fab34c35a86c36917711c18ae4d7480d.0.llvm.13771626934311262642;
    v44 = 6;
    v45 = &anon.fab34c35a86c36917711c18ae4d7480d.2.llvm.13771626934311262642;
    v46 = 10;
    v28.48 = vvar_3139{stack -1816};
    v28.56 = vvar_3140{stack -1808};
    v28.32 = vvar_3137{stack -1832};
    v28.40 = vvar_3138{stack -1824};
    v28.16 = vvar_3135{stack -1848};
    v28.24 = vvar_3136{stack -1840};
    v28 = v39;
    v55 = clap_builder::builder::arg::Arg::overrides_with_all(&v1, &v28);
    v28 = clap_builder::builder::command::Command::arg(&v76, &v55);
    v76 = clap_builder::builder::arg::Arg::new("literal");
    v1 = clap_builder::builder::arg::Arg::short(&v76, 78);
    v76 = clap_builder::builder::arg::Arg::long(&v1, "literal");
    v1 = clap_builder::builder::arg::Arg::alias(&v76, "l");
    v76 = clap_builder::builder::arg::Arg::help(&v1, "Use literal quoting style. Equivalent to `--quoting-style=literal`");
    v130 = v39;
    v131 = v41;
    v132 = v43;
    v60 = v45;
    v58 = v132;
    v56 = v131;
    v55 = v130;
    v1 = clap_builder::builder::arg::Arg::overrides_with_all(&v76, &v55);
    v55 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v76 = clap_builder::builder::command::Command::arg(&v28, &v55);
    v28 = clap_builder::builder::arg::Arg::new("escape");
    v1 = clap_builder::builder::arg::Arg::short(&v28, 98);
    v28 = clap_builder::builder::arg::Arg::long(&v1, "escape");
    v1 = clap_builder::builder::arg::Arg::help(&v28, "Use escape quoting style. Equivalent to `--quoting-style=escape`");
    v133 = v39;
    v134 = v41;
    v135 = v43;
    v60 = v45;
    v58 = v135;
    v56 = v134;
    v55 = v133;
    v28 = clap_builder::builder::arg::Arg::overrides_with_all(&v1, &v55);
    v1 = clap_builder::builder::arg::Arg::action(&v28, 2);
    v28 = clap_builder::builder::command::Command::arg(&v76, &v1);
    v76 = clap_builder::builder::arg::Arg::new("quote-name");
    v1 = clap_builder::builder::arg::Arg::short(&v76, 81);
    v76 = clap_builder::builder::arg::Arg::long(&v1, "quote-name");
    v1 = clap_builder::builder::arg::Arg::help(&v76, "Use C quoting style. Equivalent to `--quoting-style=c`");
    v76 = clap_builder::builder::arg::Arg::overrides_with_all(&v1, &v39);
    v1 = clap_builder::builder::arg::Arg::action(&v76, 2);
    v76 = clap_builder::builder::command::Command::arg(&v28, &v1);
    v28 = clap_builder::builder::arg::Arg::new("hide-control-chars");
    v1 = clap_builder::builder::arg::Arg::short(&v28, 113);
    v28 = clap_builder::builder::arg::Arg::long(&v1, "hide-control-chars");
    v1 = clap_builder::builder::arg::Arg::help(&v28, "Replace control characters with '?' if they are not escaped.");
    v89 = &anon.34cd953b2c946f74a585889e96ce9d7a.22.llvm.16853030268703478466;
    v90 = 18;
    v91 = &anon.34cd953b2c946f74a585889e96ce9d7a.23.llvm.16853030268703478466;
    v92 = 18;
    v55.16 = vvar_3177{stack -240};
    v55.24 = vvar_3178{stack -232};
    v55 = v89;
    v55.8 = vvar_3176{stack -248};
    v28 = clap_builder::builder::arg::Arg::overrides_with_all(&v1, &v55);
    v1 = clap_builder::builder::arg::Arg::action(&v28, 2);
    v28 = clap_builder::builder::command::Command::arg(&v76, &v1);
    v76 = clap_builder::builder::arg::Arg::new("show-control-chars");
    v1 = clap_builder::builder::arg::Arg::long(&v76, "show-control-chars");
    v76 = clap_builder::builder::arg::Arg::help(&v1, "Show control characters 'as is' if they are not escaped.");
    v1 = clap_builder::builder::arg::Arg::overrides_with_all(&v76, &v89);
    v55 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v76 = clap_builder::builder::command::Command::arg(&v28, &v55);
    v28 = clap_builder::builder::arg::Arg::new("time");
    v1 = clap_builder::builder::arg::Arg::long(&v28, "time");
    v28 = clap_builder::builder::arg::Arg::help(&v1, &g_4353e1, 124);
    v1 = clap_builder::builder::arg::Arg::value_name(&v28, "field");
    v28.48 = 4410775;
    v28.56 = 5;
    v28.24 = 0x8000000000000000;
    v30 = v0;
    *(&v28.field_0 as &struct8) = struct8 {
        field_16: 0
    };
    v28.8 = 8;
    v28.16 = 0;
    v32 = 0;
    v55 = clap_builder::builder::possible_value::PossibleValue::alias(&v28, "access");
    v13 = clap_builder::builder::possible_value::PossibleValue::alias(&v55, "use");
    v28.48 = 4410758;
    v28.56 = 5;
    v28.24 = 0x8000000000000000;
    v30 = v0;
    *(&v28.field_0 as &struct8) = struct8 {
        field_16: 0
    };
    v28.8 = 8;
    v28.16 = 0;
    v32 = 0;
    v14 = clap_builder::builder::possible_value::PossibleValue::alias(&v28, "status");
    v28.48 = 4410783;
    v28.56 = 5;
    v28.24 = 0x8000000000000000;
    v30 = v0;
    *(&v28.field_0 as &struct8) = struct8 {
        field_16: 0
    };
    v28.8 = 8;
    v28.16 = 0;
    v32 = 0;
    v55 = clap_builder::builder::possible_value::PossibleValue::alias(&v28, "creation");
    v136 = *((&v13 as &char + 16) as &i128);
    v137 = *((&v13 as &char + 48) as &i128);
    v28 = v13;
    v29 = v136;
    *(&v30 as &struct72) = v13.field_32;
    v31 = v137;
    v32 = *((&v13 as &char + 64) as &i64);
    v138 = *((&v14 as &char + 16) as &i128);
    v139 = *((&v14 as &char + 48) as &i128);
    v33 = v14;
    v34 = v138;
    *(&v35 as &struct72) = v14.field_32;
    v28.120 = vvar_1122{reg 320};
    v28.136 = (stack_base)[2776] as i64;
    v28.208 = v55.field_64;
    v28.192 = (stack_base)[1688] as i128;
    v28.176 = (stack_base)[1704] as i128;
    v28.160 = (stack_base)[1720] as i128;
    v28.144 = (stack_base)[1736] as i128;
    v55 = <uucore::parser::shortcut_value_parser::ShortcutValueParser as core::convert::From<I>>::from(&v28);
    v28 = clap_builder::builder::arg::Arg::value_parser(&v1, &v55);
    memcpy(&v1, &v28, 584);
    v1.584 = 144 | (stack_base)[2016] as i32;
    v1.588 = (stack_base)[2012] as i32;
    v77 = &anon.34cd953b2c946f74a585889e96ce9d7a.29.llvm.16853030268703478466;
    v78 = 4;
    v79 = &anon.83a0cd952aafddc6208a8708073e042c.11.llvm.14598271094969023070;
    v80 = 1;
    v81 = &anon.83a0cd952aafddc6208a8708073e042c.12.llvm.14598271094969023070;
    v82 = 1;
    v28.32 = vvar_3234{stack -320};
    v28.40 = vvar_3235{stack -312};
    v28.16 = vvar_3232{stack -336};
    v28.24 = vvar_3233{stack -328};
    v28 = v77;
    v28.8 = vvar_3231{stack -344};
    v55 = clap_builder::builder::arg::Arg::overrides_with_all(&v1, &v28);
    v28 = clap_builder::builder::command::Command::arg(&v76, &v55);
    v76 = clap_builder::builder::arg::Arg::new("c");
    v1 = clap_builder::builder::arg::Arg::short(&v76, 99);
    v76 = clap_builder::builder::arg::Arg::help(&v1, "If the long listing format (e.g., -l, -o) is being used, print the status change time (the 'ctime' in the inode) instead of the modification time. When explicitly sorting by time (--sort=time or -t) or when not using a long listing format, sort according to the status change time.");
    v140 = v77;
    v141 = v79;
    v58 = v81;
    v56 = v141;
    v55 = v140;
    v1 = clap_builder::builder::arg::Arg::overrides_with_all(&v76, &v55);
    v55 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v76 = clap_builder::builder::command::Command::arg(&v28, &v55);
    v28 = clap_builder::builder::arg::Arg::new("u");
    v1 = clap_builder::builder::arg::Arg::short(&v28, 117);
    v28 = clap_builder::builder::arg::Arg::help(&v1, "If the long listing format (e.g., -l, -o) is being used, print the status access time instead of the modification time. When explicitly sorting by time (--sort=time or -t) or when not using a long listing format, sort according to the access time.");
    v1 = clap_builder::builder::arg::Arg::overrides_with_all(&v28, &v77);
    v55 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v28 = clap_builder::builder::command::Command::arg(&v76, &v55);
    v76 = clap_builder::builder::arg::Arg::new("hide");
    v1 = clap_builder::builder::arg::Arg::long(&v76, "hide");
    v76 = clap_builder::builder::arg::Arg::action(&v1, 1);
    v1 = clap_builder::builder::arg::Arg::value_name(&v76, "PATTERN");
    v55 = clap_builder::builder::arg::Arg::help(&v1, "do not list implied entries matching shell PATTERN (overridden by -a or -A)");
    v76 = clap_builder::builder::command::Command::arg(&v28, &v55);
    v28 = clap_builder::builder::arg::Arg::new("ignore");
    v1 = clap_builder::builder::arg::Arg::short(&v28, 73);
    v28 = clap_builder::builder::arg::Arg::long(&v1, "ignore");
    v1 = clap_builder::builder::arg::Arg::action(&v28, 1);
    v28 = clap_builder::builder::arg::Arg::value_name(&v1, "PATTERN");
    v1 = clap_builder::builder::arg::Arg::help(&v28, "do not list implied entries matching shell PATTERN");
    v28 = clap_builder::builder::command::Command::arg(&v76, &v1);
    v76 = clap_builder::builder::arg::Arg::new("ignore-backups");
    v1 = clap_builder::builder::arg::Arg::short(&v76, 66);
    v76 = clap_builder::builder::arg::Arg::long(&v1, "ignore-backups");
    v1 = clap_builder::builder::arg::Arg::help(&v76, "Ignore entries which end with ~.");
    v55 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v76 = clap_builder::builder::command::Command::arg(&v28, &v55);
    v28 = clap_builder::builder::arg::Arg::new("sort");
    v1 = clap_builder::builder::arg::Arg::long(&v28, "sort");
    v28 = clap_builder::builder::arg::Arg::help(&v1, "Sort by <field>: name, none (-U), time (-t), size (-S), extension (-X) or width");
    v1 = clap_builder::builder::arg::Arg::value_name(&v28, "field");
    v28 = struct112 {
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
    v55 = <uucore::parser::shortcut_value_parser::ShortcutValueParser as core::convert::From<I>>::from(&v28);
    v28 = clap_builder::builder::arg::Arg::value_parser(&v1, &v55);
    memcpy(&v1, &v28, 584);
    v1.584 = 128 | (stack_base)[2016] as i32;
    v1.588 = (stack_base)[2012] as i32;
    v16 = &anon.34cd953b2c946f74a585889e96ce9d7a.28.llvm.16853030268703478466;
    v17 = 4;
    v18 = &anon.e216b4e3e10aba1d3c34a49b95316d36.10.llvm.1085536016573220028;
    v19 = 1;
    v20 = &anon.e216b4e3e10aba1d3c34a49b95316d36.11.llvm.1085536016573220028;
    v21 = 1;
    v22 = &anon.e216b4e3e10aba1d3c34a49b95316d36.12.llvm.1085536016573220028;
    v23 = 1;
    v24 = &anon.e216b4e3e10aba1d3c34a49b95316d36.13.llvm.1085536016573220028;
    v25 = 1;
    v26 = &anon.e216b4e3e10aba1d3c34a49b95316d36.14.llvm.1085536016573220028;
    v27 = 1;
    v28.80 = vvar_3306{stack -2616};
    v28.88 = vvar_3307{stack -2608};
    v32 = v24;
    v28.72 = vvar_3305{stack -2624};
    v28.48 = vvar_3302{stack -2648};
    v28.56 = vvar_3303{stack -2640};
    v30 = v20;
    v29 = v18;
    v28 = v16;
    v55 = clap_builder::builder::arg::Arg::overrides_with_all(&v1, &v28);
    v28 = clap_builder::builder::command::Command::arg(&v76, &v55);
    v76 = clap_builder::builder::arg::Arg::new("S");
    v1 = clap_builder::builder::arg::Arg::short(&v76, 83);
    v76 = clap_builder::builder::arg::Arg::help(&v1, "Sort by file size, largest first.");
    v64 = v26;
    v62 = v24;
    v142 = v16;
    v143 = v18;
    v144 = v20;
    v60 = v22;
    v58 = v144;
    v56 = v143;
    v55 = v142;
    v1 = clap_builder::builder::arg::Arg::overrides_with_all(&v76, &v55);
    v55 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v76 = clap_builder::builder::command::Command::arg(&v28, &v55);
    v28 = clap_builder::builder::arg::Arg::new("t");
    v1 = clap_builder::builder::arg::Arg::short(&v28, 116);
    v28 = clap_builder::builder::arg::Arg::help(&v1, "Sort by modification time (the 'mtime' in the inode), newest first.");
    v64 = v26;
    v62 = v24;
    v145 = v16;
    v146 = v18;
    v147 = v20;
    v60 = v22;
    v58 = v147;
    v56 = v146;
    v55 = v145;
    v1 = clap_builder::builder::arg::Arg::overrides_with_all(&v28, &v55);
    v55 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v28 = clap_builder::builder::command::Command::arg(&v76, &v55);
    v76 = clap_builder::builder::arg::Arg::new("v");
    v1 = clap_builder::builder::arg::Arg::short(&v76, 118);
    v76 = clap_builder::builder::arg::Arg::help(&v1, "Natural sort of (version) numbers in the filenames.");
    v64 = v26;
    v62 = v24;
    v148 = v16;
    v149 = v18;
    v150 = v20;
    v60 = v22;
    v58 = v150;
    v56 = v149;
    v55 = v148;
    v1 = clap_builder::builder::arg::Arg::overrides_with_all(&v76, &v55);
    v55 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v76 = clap_builder::builder::command::Command::arg(&v28, &v55);
    v28 = clap_builder::builder::arg::Arg::new("X");
    v1 = clap_builder::builder::arg::Arg::short(&v28, 88);
    v28 = clap_builder::builder::arg::Arg::help(&v1, "Sort alphabetically by entry extension.");
    v64 = v26;
    v62 = v24;
    v151 = v16;
    v152 = v18;
    v153 = v20;
    v60 = v22;
    v58 = v153;
    v56 = v152;
    v55 = v151;
    v1 = clap_builder::builder::arg::Arg::overrides_with_all(&v28, &v55);
    v55 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v28 = clap_builder::builder::command::Command::arg(&v76, &v55);
    v76 = clap_builder::builder::arg::Arg::new("U");
    v1 = clap_builder::builder::arg::Arg::short(&v76, 85);
    v76 = clap_builder::builder::arg::Arg::help(&v1, "Do not sort; list the files in whatever order they are stored in the directory.  This is especially useful when listing very large directories, since not doing any sorting can be noticeably faster.");
    v1 = clap_builder::builder::arg::Arg::overrides_with_all(&v76, &v16);
    v55 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v76 = clap_builder::builder::command::Command::arg(&v28, &v55);
    v28 = clap_builder::builder::arg::Arg::new("dereference");
    v1 = clap_builder::builder::arg::Arg::short(&v28, 76);
    v28 = clap_builder::builder::arg::Arg::long(&v1, "dereference");
    v1 = clap_builder::builder::arg::Arg::help(&v28, "When showing file information for a symbolic link, show information for the file the link references rather than the link itself.");
    v83 = &anon.34cd953b2c946f74a585889e96ce9d7a.17.llvm.16853030268703478466;
    v84 = 11;
    v85 = &anon.34cd953b2c946f74a585889e96ce9d7a.19.llvm.16853030268703478466;
    v86 = 39;
    v87 = &anon.34cd953b2c946f74a585889e96ce9d7a.18.llvm.16853030268703478466;
    v88 = 24;
    v55.32 = vvar_3353{stack -272};
    v55.40 = vvar_3354{stack -264};
    v55.16 = vvar_3351{stack -288};
    v55.24 = vvar_3352{stack -280};
    v55 = v83;
    v55.8 = vvar_3350{stack -296};
    v28 = clap_builder::builder::arg::Arg::overrides_with_all(&v1, &v55);
    v1 = clap_builder::builder::arg::Arg::action(&v28, 2);
    v28 = clap_builder::builder::command::Command::arg(&v76, &v1);
    v76 = clap_builder::builder::arg::Arg::new("dereference-command-line-symlink-to-dir");
    v1 = clap_builder::builder::arg::Arg::long(&v76, "dereference-command-line-symlink-to-dir");
    v76 = clap_builder::builder::arg::Arg::help(&v1, "Do not follow symlinks except when they link to directories and are given as command line arguments.");
    v154 = v83;
    v155 = v85;
    v58 = v87;
    v56 = v155;
    v55 = v154;
    v1 = clap_builder::builder::arg::Arg::overrides_with_all(&v76, &v55);
    v55 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v76 = clap_builder::builder::command::Command::arg(&v28, &v55);
    v28 = clap_builder::builder::arg::Arg::new("dereference-command-line");
    v1 = clap_builder::builder::arg::Arg::short(&v28, 72);
    v28 = clap_builder::builder::arg::Arg::long(&v1, "dereference-command-line");
    v1 = clap_builder::builder::arg::Arg::help(&v28, "Do not follow symlinks except when given as command line arguments.");
    v28 = clap_builder::builder::arg::Arg::overrides_with_all(&v1, &v83);
    v1 = clap_builder::builder::arg::Arg::action(&v28, 2);
    v28 = clap_builder::builder::command::Command::arg(&v76, &v1);
    v76 = clap_builder::builder::arg::Arg::new("no-group");
    v1 = clap_builder::builder::arg::Arg::long(&v76, "no-group");
    v76 = clap_builder::builder::arg::Arg::short(&v1, 71);
    v1 = clap_builder::builder::arg::Arg::help(&v76, "Do not show group in long format.");
    v55 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v76 = clap_builder::builder::command::Command::arg(&v28, &v55);
    v28 = clap_builder::builder::arg::Arg::new("author");
    v1 = clap_builder::builder::arg::Arg::long(&v28, "author");
    v28 = clap_builder::builder::arg::Arg::help(&v1, "Show author in long format. On the supported platforms, the author always matches the file owner.");
    v1 = clap_builder::builder::arg::Arg::action(&v28, 2);
    v28 = clap_builder::builder::command::Command::arg(&v76, &v1);
    v76 = clap_builder::builder::arg::Arg::new("all");
    v1 = clap_builder::builder::arg::Arg::short(&v76, 97);
    v76 = clap_builder::builder::arg::Arg::long(&v1, "all");
    v93 = &anon.34cd953b2c946f74a585889e96ce9d7a.15.llvm.16853030268703478466;
    v94 = 3;
    v95 = &anon.34cd953b2c946f74a585889e96ce9d7a.16.llvm.16853030268703478466;
    v96 = 10;
    v55.16 = vvar_3393{stack -208};
    v55.24 = vvar_3394{stack -200};
    v55 = v93;
    v55.8 = vvar_3392{stack -216};
    v1 = clap_builder::builder::arg::Arg::overrides_with_all(&v76, &v55);
    v76 = clap_builder::builder::arg::Arg::help(&v1, "Do not ignore hidden files (files with names that start with '.').");
    v1 = clap_builder::builder::arg::Arg::action(&v76, 2);
    v76 = clap_builder::builder::command::Command::arg(&v28, &v1);
    v28 = clap_builder::builder::arg::Arg::new("almost-all");
    v1 = clap_builder::builder::arg::Arg::short(&v28, 65);
    v28 = clap_builder::builder::arg::Arg::long(&v1, "almost-all");
    v1 = clap_builder::builder::arg::Arg::overrides_with_all(&v28, &v93);
    v28 = clap_builder::builder::arg::Arg::help(&v1, "In a directory, do not ignore all file names that start with '.', only ignore '.' and '..'.");
    v1 = clap_builder::builder::arg::Arg::action(&v28, 2);
    v28 = clap_builder::builder::command::Command::arg(&v76, &v1);
    v76 = clap_builder::builder::arg::Arg::new("directory");
    v1 = clap_builder::builder::arg::Arg::short(&v76, 100);
    v76 = clap_builder::builder::arg::Arg::long(&v1, "directory");
    v1 = clap_builder::builder::arg::Arg::help(&v76, "Only list the names of directories, rather than listing directory contents. This will not follow symbolic links unless one of `--dereference-command-line (-H)`, `--dereference (-L)`, or `--dereference-command-line-symlink-to-dir` is specified.");
    v55 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v76 = clap_builder::builder::command::Command::arg(&v28, &v55);
    v28 = clap_builder::builder::arg::Arg::new("human-readable");
    v1 = clap_builder::builder::arg::Arg::short(&v28, 104);
    v28 = clap_builder::builder::arg::Arg::long(&v1, "human-readable");
    v1 = clap_builder::builder::arg::Arg::help(&v28, "Print human readable file sizes (e.g. 1K 234M 56G).");
    v55 = &anon.1ee88fda822c10878a738d2784ca6dcb.20.llvm.3648300969967796025;
    v55.8 = 10;
    v55.16 = &anon.1ee88fda822c10878a738d2784ca6dcb.22.llvm.3648300969967796025;
    v55.24 = 2;
    v28 = clap_builder::builder::arg::Arg::overrides_with_all(&v1, &v55);
    v1 = clap_builder::builder::arg::Arg::action(&v28, 2);
    v28 = clap_builder::builder::command::Command::arg(&v76, &v1);
    v76 = clap_builder::builder::arg::Arg::new("kibibytes");
    v1 = clap_builder::builder::arg::Arg::short(&v76, 107);
    v76 = clap_builder::builder::arg::Arg::long(&v1, "kibibytes");
    v1 = clap_builder::builder::arg::Arg::help(&v76, "default to 1024-byte blocks for file system usage; used only with -s and per directory totals");
    v55 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v76 = clap_builder::builder::command::Command::arg(&v28, &v55);
    v28 = clap_builder::builder::arg::Arg::new("si");
    v1 = clap_builder::builder::arg::Arg::long(&v28, "si");
    v28 = clap_builder::builder::arg::Arg::help(&v1, "Print human readable file sizes using powers of 1000 instead of 1024.");
    v55 = &anon.1ee88fda822c10878a738d2784ca6dcb.20.llvm.3648300969967796025;
    v55.8 = 10;
    v55.16 = &anon.1ee88fda822c10878a738d2784ca6dcb.21.llvm.3648300969967796025;
    v55.24 = 14;
    v1 = clap_builder::builder::arg::Arg::overrides_with_all(&v28, &v55);
    v55 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v28 = clap_builder::builder::command::Command::arg(&v76, &v55);
    v76 = clap_builder::builder::arg::Arg::new("block-size");
    v1 = clap_builder::builder::arg::Arg::long(&v76, "block-size");
    memcpy(&v76, &v1, 584);
    v76.584 = 128 | v1.584;
    v76.588 = v1.588;
    v1 = clap_builder::builder::arg::Arg::value_name(&v76, "BLOCK_SIZE");
    v76 = clap_builder::builder::arg::Arg::help(&v1, "scale sizes by BLOCK_SIZE when printing them");
    v55 = &anon.1ee88fda822c10878a738d2784ca6dcb.22.llvm.3648300969967796025;
    v55.8 = 2;
    v55.16 = &anon.1ee88fda822c10878a738d2784ca6dcb.21.llvm.3648300969967796025;
    v55.24 = 14;
    v1 = clap_builder::builder::arg::Arg::overrides_with_all(&v76, &v55);
    v76 = clap_builder::builder::command::Command::arg(&v28, &v1);
    v28 = clap_builder::builder::arg::Arg::new("inode");
    v1 = clap_builder::builder::arg::Arg::short(&v28, 105);
    v28 = clap_builder::builder::arg::Arg::long(&v1, "inode");
    v1 = clap_builder::builder::arg::Arg::help(&v28, "print the index number of each file");
    v55 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v28 = clap_builder::builder::command::Command::arg(&v76, &v55);
    v76 = clap_builder::builder::arg::Arg::new("reverse");
    v1 = clap_builder::builder::arg::Arg::short(&v76, 114);
    v76 = clap_builder::builder::arg::Arg::long(&v1, "reverse");
    v1 = clap_builder::builder::arg::Arg::help(&v76, "Reverse whatever the sorting method is e.g., list files in reverse alphabetical order, youngest first, smallest first, or whatever.");
    v55 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v76 = clap_builder::builder::command::Command::arg(&v28, &v55);
    v28 = clap_builder::builder::arg::Arg::new("recursive");
    v1 = clap_builder::builder::arg::Arg::short(&v28, 82);
    v28 = clap_builder::builder::arg::Arg::long(&v1, "recursive");
    v1 = clap_builder::builder::arg::Arg::help(&v28, "List the contents of all directories recursively.");
    v55 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v28 = clap_builder::builder::command::Command::arg(&v76, &v55);
    v76 = clap_builder::builder::arg::Arg::new("width");
    v1 = clap_builder::builder::arg::Arg::long(&v76, "width");
    v76 = clap_builder::builder::arg::Arg::short(&v1, 119);
    v1 = clap_builder::builder::arg::Arg::help(&v76, "Assume that the terminal is COLS columns wide.");
    v55 = clap_builder::builder::arg::Arg::value_name(&v1, "COLS");
    v76 = clap_builder::builder::command::Command::arg(&v28, &v55);
    v28 = clap_builder::builder::arg::Arg::new("size");
    v1 = clap_builder::builder::arg::Arg::short(&v28, 115);
    v28 = clap_builder::builder::arg::Arg::long(&v1, "size");
    v1 = clap_builder::builder::arg::Arg::help(&v28, "print the allocated size of each file, in blocks");
    v55 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v28 = clap_builder::builder::command::Command::arg(&v76, &v55);
    v76 = clap_builder::builder::arg::Arg::new("color");
    v1 = clap_builder::builder::arg::Arg::long(&v76, "color");
    v76 = clap_builder::builder::arg::Arg::help(&v1, "Color output based on file type.");
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
    v55 = clap_builder::builder::possible_value::PossibleValue::alias(&v1, "yes");
    v15 = clap_builder::builder::possible_value::PossibleValue::alias(&v55, "force");
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
    v55 = clap_builder::builder::possible_value::PossibleValue::alias(&v1, "tty");
    v13 = clap_builder::builder::possible_value::PossibleValue::alias(&v55, "if-tty");
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
    v55 = clap_builder::builder::possible_value::PossibleValue::alias(&v1, "no");
    v14 = clap_builder::builder::possible_value::PossibleValue::alias(&v55, "none");
    v156 = *((&v15 as &char + 16) as &i128);
    v157 = *((&v15 as &char + 48) as &i128);
    v1 = v15;
    v3 = v156;
    *(&v5 as &struct72) = v15.field_32;
    v6 = v157;
    v8 = *((&v15 as &char + 64) as &i64);
    v158 = *((&v13 as &char + 16) as &i128);
    v159 = *((&v13 as &char + 48) as &i128);
    v9 = v13;
    v10 = v158;
    *(&v11 as &struct72) = v13.field_32;
    v12 = v159;
    v1.136 = (stack_base)[2848] as i64;
    v1.208 = (stack_base)[2776] as i64;
    v1.192 = (stack_base)[2792] as i128;
    v1.176 = v14.field_32;
    v1.160 = (stack_base)[2824] as i128;
    v1.144 = (stack_base)[2840] as i128;
    v55 = <uucore::parser::shortcut_value_parser::ShortcutValueParser as core::convert::From<I>>::from(&v1);
    v1 = clap_builder::builder::arg::Arg::value_parser(&v76, &v55);
    memcpy(&v76, &v1, 584);
    v76.584 = 128 | v1.584;
    v76.588 = v1.588;
    v55.field_16 = (stack_base)[1872] as i64;
    v55 = v36;
    v1 = clap_builder::builder::arg::Arg::num_args(&v76, &v55);
    v76 = clap_builder::builder::command::Command::arg(&v28, &v1);
    v28 = clap_builder::builder::arg::Arg::new("indicator-style");
    v1 = clap_builder::builder::arg::Arg::long(&v28, "indicator-style");
    v28 = clap_builder::builder::arg::Arg::help(&v1, "Append indicator with style WORD to entry names: none (default),  slash (-p), file-type (--file-type), classify (-F)");
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
    v55 = <uucore::parser::shortcut_value_parser::ShortcutValueParser as core::convert::From<I>>::from(&v1);
    v1 = clap_builder::builder::arg::Arg::value_parser(&v28, &v55);
    v47 = &anon.cfc37c807317366388c1b51bb9a73ad5.25.llvm.1151552614418493144;
    v48 = 9;
    v49 = &anon.cfc37c807317366388c1b51bb9a73ad5.24.llvm.1151552614418493144;
    v50 = 1;
    v51 = &anon.cfc37c807317366388c1b51bb9a73ad5.26.llvm.1151552614418493144;
    v52 = 8;
    v53 = &anon.34cd953b2c946f74a585889e96ce9d7a.37.llvm.16853030268703478466;
    v54 = 15;
    v28.48 = vvar_3546{stack -1752};
    v28.56 = vvar_3547{stack -1744};
    v28.32 = vvar_3544{stack -1768};
    v28.40 = vvar_3545{stack -1760};
    v28.16 = vvar_3542{stack -1784};
    v28.24 = vvar_3543{stack -1776};
    v28 = v47;
    v55 = clap_builder::builder::arg::Arg::overrides_with_all(&v1, &v28);
    v28 = clap_builder::builder::command::Command::arg(&v76, &v55);
    v76 = clap_builder::builder::arg::Arg::new("classify");
    v1 = clap_builder::builder::arg::Arg::short(&v76, 70);
    v76 = clap_builder::builder::arg::Arg::long(&v1, "classify");
    v1 = clap_builder::builder::arg::Arg::help(&v76, &g_435eac, 697);
    v76 = clap_builder::builder::arg::Arg::value_name(&v1, "when");
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
    v55 = clap_builder::builder::possible_value::PossibleValue::alias(&v1, "yes");
    v15 = clap_builder::builder::possible_value::PossibleValue::alias(&v55, "force");
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
    v55 = clap_builder::builder::possible_value::PossibleValue::alias(&v1, "tty");
    v13 = clap_builder::builder::possible_value::PossibleValue::alias(&v55, "if-tty");
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
    v55 = clap_builder::builder::possible_value::PossibleValue::alias(&v1, "no");
    v14 = clap_builder::builder::possible_value::PossibleValue::alias(&v55, "none");
    v160 = *((&v15 as &char + 16) as &i128);
    v161 = *((&v15 as &char + 48) as &i128);
    v1 = v15;
    v3 = v160;
    *(&v5 as &struct72) = v15.field_32;
    v6 = v161;
    v8 = *((&v15 as &char + 64) as &i64);
    v162 = *((&v13 as &char + 16) as &i128);
    v163 = *((&v13 as &char + 48) as &i128);
    v9 = v13;
    v10 = v162;
    *(&v11 as &struct72) = v13.field_32;
    v12 = v163;
    v1.136 = (stack_base)[2848] as i64;
    v1.208 = (stack_base)[2776] as i64;
    v1.192 = (stack_base)[2792] as i128;
    v1.176 = v14.field_32;
    v1.160 = (stack_base)[2824] as i128;
    v1.144 = (stack_base)[2840] as i128;
    v55 = <uucore::parser::shortcut_value_parser::ShortcutValueParser as core::convert::From<I>>::from(&v1);
    v1 = clap_builder::builder::arg::Arg::value_parser(&v76, &v55);
    v76 = clap_builder::builder::arg::Arg::default_missing_value(&v1, v114);
    memcpy(&v1, &v76, 584);
    v1.584 = 128 | v76.584;
    v1.588 = v76.588;
    v76 = clap_builder::builder::arg::Arg::num_args(&v1, &v36);
    v164 = v47;
    v165 = v49;
    v166 = v51;
    v60 = v53;
    v58 = v166;
    v56 = v165;
    v55 = v164;
    v1 = clap_builder::builder::arg::Arg::overrides_with_all(&v76, &v55);
    v76 = clap_builder::builder::command::Command::arg(&v28, &v1);
    v28 = clap_builder::builder::arg::Arg::new("file-type");
    v1 = clap_builder::builder::arg::Arg::long(&v28, "file-type");
    v28 = clap_builder::builder::arg::Arg::help(&v1, "Same as --classify, but do not append '*'");
    v167 = v47;
    v168 = v49;
    v169 = v51;
    v60 = v53;
    v58 = v169;
    v56 = v168;
    v55 = v167;
    v1 = clap_builder::builder::arg::Arg::overrides_with_all(&v28, &v55);
    v55 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v28 = clap_builder::builder::command::Command::arg(&v76, &v55);
    v76 = clap_builder::builder::arg::Arg::new("p");
    v1 = clap_builder::builder::arg::Arg::short(&v76, 112);
    v76 = clap_builder::builder::arg::Arg::help(&v1, "Append / indicator to directories.");
    v1 = clap_builder::builder::arg::Arg::overrides_with_all(&v76, &v47);
    v55 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v76 = clap_builder::builder::command::Command::arg(&v28, &v55);
    v28 = clap_builder::builder::arg::Arg::new("time-style");
    v1 = clap_builder::builder::arg::Arg::long(&v28, "time-style");
    v28 = clap_builder::builder::arg::Arg::help(&v1, "time/date format with -l; see TIME_STYLE below");
    v1 = clap_builder::builder::arg::Arg::value_name(&v28, "TIME_STYLE");
    v28 = clap_builder::builder::arg::Arg::env(&v1, "TIME_STYLE");
    v1 = clap_builder::builder::arg::Arg::value_parser(&v28);
    v28 = struct16 {
        field_0: &anon.34cd953b2c946f74a585889e96ce9d7a.38.llvm.16853030268703478466
        field_8: 10
    };
    v55 = clap_builder::builder::arg::Arg::overrides_with_all(&v1, &v28);
    v28 = clap_builder::builder::command::Command::arg(&v76, &v55);
    v76 = clap_builder::builder::arg::Arg::new("full-time");
    v1 = clap_builder::builder::arg::Arg::long(&v76, "full-time");
    v76 = clap_builder::builder::arg::Arg::overrides_with(&v1, "full-time");
    v1 = clap_builder::builder::arg::Arg::help(&v76, "like -l --time-style=full-iso");
    v55 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v76 = clap_builder::builder::command::Command::arg(&v28, &v55);
    v28 = clap_builder::builder::arg::Arg::new("context");
    v1 = clap_builder::builder::arg::Arg::short(&v28, 90);
    v28 = clap_builder::builder::arg::Arg::long(&v1, "context");
    v1 = clap_builder::builder::arg::Arg::help(&v28, "print any security context of each file (not enabled)");
    v55 = clap_builder::builder::arg::Arg::action(&v1, 2);
    v28 = clap_builder::builder::command::Command::arg(&v76, &v55);
    v76 = clap_builder::builder::arg::Arg::new("group-directories-first");
    v1 = clap_builder::builder::arg::Arg::long(&v76, "group-directories-first");
    v76 = clap_builder::builder::arg::Arg::help(&v1, "group directories before files; can be augmented with a --sort option, but any use of --sort=none (-U) disables grouping");
    v1 = clap_builder::builder::arg::Arg::action(&v76, 2);
    v76 = clap_builder::builder::command::Command::arg(&v28, &v1);
    v28 = clap_builder::builder::arg::Arg::new("paths");
    v1 = clap_builder::builder::arg::Arg::action(&v28, 1);
    v28 = clap_builder::builder::arg::Arg::value_hint(&v1, 2);
    v55 = struct8 {
        field_0: 2
    };
    v1 = clap_builder::builder::arg::Arg::value_parser(&v28, &v55);
    v28 = clap_builder::builder::command::Command::arg(&v76, &v1);
    clap_builder::builder::command::Command::after_help(a0, &v28, "The TIME_STYLE argument can be full-iso, long-iso, iso, locale or +FORMAT. FORMAT is interpreted like in date. Also the TIME_STYLE environment variable sets the default style to use.");
    return a0;
}
