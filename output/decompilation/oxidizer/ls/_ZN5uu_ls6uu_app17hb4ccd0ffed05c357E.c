fn uu_ls::uu_app(a0: &struct712) -> u64 {
    let v0: i8;  // [bp-0xdc8]
    let v1: struct592;  // [sp-0xdb8], Other Possible Types: struct8, int, struct128, struct24, struct64
    let v2: i64;  // [sp-0xdb0]
    let v3: i64;  // [sp-0xda8], Other Possible Types: int
    let v4: i64;  // [sp-0xda0]
    let v5: iNone;  // [bp-0xd98]
    let v6: i64;  // [sp-0xd88], Other Possible Types: int
    let v7: i64;  // [sp-0xd80]
    let v8: i8;  // [bp-0xd78], Other Possible Types: unsigned long
    let v9: struct72;  // [sp-0xd70], Other Possible Types: int
    let v10: iNone;  // [bp-0xd60]
    let v11: iNone;  // [bp-0xd50]
    let v12: iNone;  // [bp-0xd40]
    let v13: i64;  // [sp-0xd30]
    let v14: struct72;  // [sp-0xd28], Other Possible Types: int
    let v15: iNone;  // [sp-0xd18]
    let v16: iNone;  // [sp-0xd08]
    let v17: iNone;  // [sp-0xcf8]
    let v18: i64;  // [sp-0xce8]
    let v19: iNone;  // [sp-0xce0]
    let v20: iNone;  // [sp-0xcd0]
    let v21: iNone;  // [sp-0xcc0]
    let v22: iNone;  // [sp-0xcb0]
    let v23: i64;  // [sp-0xca0]
    let v24: iNone;  // [sp-0xc98]
    let v25: iNone;  // [sp-0xc88]
    let v26: iNone;  // [sp-0xc78]
    let v27: iNone;  // [sp-0xc68]
    let v28: i64;  // [sp-0xc58]
    let v29: struct72;  // [sp-0xc50]
    let v30: i64;  // [sp-0xc08]
    let v31: i64;  // [sp-0xc00]
    let v32: i64;  // [sp-0xbf8]
    let v33: i64;  // [sp-0xbf0]
    let v34: iNone;  // [sp-0xbe8]
    let v35: i64;  // [sp-0xbd8]
    let v36: i64;  // [sp-0xbd0]
    let v37: i8;  // [sp-0xbc8]
    let v38: i32;  // [sp-0xb70]
    let v39: i32;  // [sp-0xb6c]
    let v40: struct72;  // [sp-0xb60], Other Possible Types: unsigned long
    let v41: i64;  // [sp-0xb58]
    let v42: i64;  // [sp-0xb50]
    let v43: i64;  // [sp-0xb48]
    let v44: iNone;  // [sp-0xb40]
    let v45: i64;  // [sp-0xb30]
    let v46: i64;  // [sp-0xb28]
    let v47: i8;  // [sp-0xb20]
    let v48: struct72;  // [sp-0xb18], Other Possible Types: unsigned long
    let v49: i64;  // [sp-0xb10]
    let v50: i64;  // [sp-0xb08]
    let v51: i64;  // [sp-0xb00]
    let v52: iNone;  // [sp-0xaf8]
    let v53: i64;  // [sp-0xae8]
    let v54: i64;  // [sp-0xae0]
    let v55: i8;  // [sp-0xad8]
    let v56: struct72;  // [sp-0xad0], Other Possible Types: unsigned long
    let v57: i64;  // [sp-0xac8]
    let v58: i64;  // [sp-0xac0]
    let v59: i64;  // [sp-0xab8]
    let v60: iNone;  // [sp-0xab0]
    let v61: i64;  // [sp-0xaa0]
    let v62: i64;  // [sp-0xa98]
    let v63: i8;  // [sp-0xa90]
    let v64: i64;  // [sp-0xa88]
    let v65: i64;  // [sp-0xa80]
    let v66: i64;  // [sp-0xa78]
    let v67: i64;  // [sp-0xa70]
    let v68: i64;  // [sp-0xa68]
    let v69: i64;  // [sp-0xa60]
    let v70: i64;  // [sp-0xa58]
    let v71: i64;  // [sp-0xa50]
    let v72: i64;  // [sp-0xa48]
    let v73: i64;  // [sp-0xa40]
    let v74: i64;  // [sp-0xa38]
    let v75: i64;  // [sp-0xa30]
    let v76: struct592;  // [sp-0xa28], Other Possible Types: struct712, int, struct8, struct112, unsigned long, struct16
    let v77: i64;  // [sp-0xa20]
    let v78: i64;  // [sp-0xa18], Other Possible Types: int
    let v79: i64;  // [sp-0xa10]
    let v80: iNone;  // [sp-0xa08], Other Possible Types: unsigned long
    let v81: i64;  // [sp-0xa00]
    let v82: i64;  // [sp-0x9f8], Other Possible Types: int
    let v83: i64;  // [sp-0x9f0]
    let v84: i8;  // [bp-0x9e8], Other Possible Types: unsigned long
    let v85: i64;  // [sp-0x9e0], Other Possible Types: struct72
    let v86: i64;  // [sp-0x9d8]
    let v87: i64;  // [sp-0x9d0]
    let v88: struct72;  // [sp-0x998]
    let v89: i64;  // [sp-0x760]
    let v90: i64;  // [sp-0x758]
    let v91: i8;  // [sp-0x750]
    let v92: i64;  // [sp-0x748]
    let v93: i64;  // [sp-0x740]
    let v94: i64;  // [sp-0x738]
    let v95: i64;  // [sp-0x730]
    let v96: i64;  // [sp-0x728]
    let v97: i64;  // [sp-0x720]
    let v98: i64;  // [sp-0x718]
    let v99: i64;  // [sp-0x710]
    let v100: i64;  // [sp-0x708]
    let v101: i64;  // [sp-0x700]
    let v102: i64;  // [sp-0x6f8]
    let v103: i64;  // [sp-0x6f0]
    let v104: i64;  // [sp-0x6e8]
    let v105: i64;  // [sp-0x6e0]
    let v106: i64;  // [sp-0x6d8]
    let v107: i64;  // [sp-0x6d0]
    let v108: struct592;  // [sp-0x6c8], Other Possible Types: int, struct72, struct24, unsigned long, struct8
    let v109: i64;  // [sp-0x6c0]
    let v110: iNone;  // [sp-0x6b8], Other Possible Types: unsigned long
    let v111: i64;  // [sp-0x6b0]
    let v112: iNone;  // [sp-0x6a8], Other Possible Types: unsigned long
    let v113: i64;  // [sp-0x6a0]
    let v114: iNone;  // [sp-0x698], Other Possible Types: unsigned long
    let v115: i64;  // [sp-0x690]
    let v116: iNone;  // [sp-0x688], Other Possible Types: unsigned long
    let v117: i64;  // [sp-0x680]
    let v118: iNone;  // [sp-0x678], Other Possible Types: unsigned long
    let v119: i64;  // [sp-0x670]
    let v120: i64;  // [sp-0x478]
    let v121: i64;  // [sp-0x470]
    let v122: i64;  // [sp-0x468]
    let v123: i64;  // [sp-0x460]
    let v124: i64;  // [sp-0x458]
    let v125: i64;  // [sp-0x450]
    let v126: i64;  // [sp-0x448]
    let v127: i64;  // [sp-0x440]
    let v128: i64;  // [sp-0x438]
    let v129: i64;  // [sp-0x430]
    let v130: struct592;  // [sp-0x428], Other Possible Types: struct712, struct437
    let v131: i32;  // [sp-0x1e0]
    let v132: i32;  // [sp-0x1dc]
    let v133: i64;  // [sp-0x16c]
    let v134: i32;  // [sp-0x164]
    let v135: i64;  // [sp-0x160]
    let v136: i64;  // [sp-0x158]
    let v137: i64;  // [sp-0x150]
    let v138: i64;  // [sp-0x148]
    let v139: i64;  // [sp-0x140]
    let v140: i64;  // [sp-0x138]
    let v141: i64;  // [sp-0x130]
    let v142: i64;  // [sp-0x128]
    let v143: i64;  // [sp-0x120]
    let v144: i64;  // [sp-0x118]
    let v145: i64;  // [sp-0x110]
    let v146: i64;  // [sp-0x108]
    let v147: i64;  // [sp-0x100]
    let v148: i64;  // [sp-0xf8]
    let v149: i64;  // [sp-0xf0]
    let v150: i64;  // [sp-0xe8]
    let v151: i64;  // [sp-0xe0]
    let v152: i64;  // [sp-0xd8]
    let v153: i64;  // [sp-0xd0]
    let v154: i64;  // [sp-0xc8]
    let v155: i64;  // [sp-0xc0]
    let v156: i64;  // [sp-0xb8]
    let v157: i64;  // [sp-0xb0]
    let v158: i64;  // [sp-0xa8]
    let v159: iNone;  // [sp-0xa0]
    let v160: i64;  // [sp-0x90]
    let v161: i64;  // [sp-0x88]
    let v162: i8;  // [sp-0x80]
    let v163: i64;  // [sp-0x78]
    let v164: i64;  // [sp-0x70]
    let v165: i64;  // [sp-0x68]
    let v166: i64;  // [sp-0x60]
    let v167: iNone;  // [sp-0x58]
    let v168: i64;  // [sp-0x48]
    let v169: i64;  // [sp-0x40]
    let v170: i8;  // [sp-0x38]
    let v172: i64;  // rdx
    let v173: iNone;  // xmm0
    let v174: iNone;  // xmm1
    let v175: iNone;  // xmm2
    let v176: iNone;  // xmm0
    let v177: iNone;  // xmm1
    let v178: iNone;  // xmm2
    let v179: iNone;  // xmm1
    let v180: iNone;  // xmm3
    let v181: iNone;  // xmm1
    let v182: iNone;  // xmm3
    let v184: iNone;  // xmm1
    let v185: iNone;  // xmm3
    let v186: iNone;  // xmm1
    let v187: iNone;  // xmm3
    let v188: iNone;  // xmm0
    let v189: iNone;  // xmm1
    let v190: iNone;  // xmm2
    let v191: iNone;  // xmm0
    let v192: iNone;  // xmm1
    let v193: iNone;  // xmm2
    let v194: iNone;  // xmm1
    let v195: iNone;  // xmm3
    let v196: iNone;  // xmm1
    let v197: iNone;  // xmm3
    let v198: iNone;  // xmm0
    let v199: iNone;  // xmm1
    let v200: iNone;  // xmm0
    let v201: iNone;  // xmm1
    let v202: iNone;  // xmm2
    let v203: iNone;  // xmm0
    let v204: iNone;  // xmm1
    let v205: iNone;  // xmm2
    let v206: iNone;  // xmm0
    let v207: iNone;  // xmm1
    let v208: iNone;  // xmm2
    let v209: iNone;  // xmm0
    let v210: iNone;  // xmm1
    let v211: iNone;  // xmm2
    let v212: iNone;  // xmm0
    let v213: iNone;  // xmm1
    let v214: iNone;  // xmm1
    let v215: iNone;  // xmm3
    let v216: iNone;  // xmm1
    let v217: iNone;  // xmm3
    let v218: iNone;  // xmm1
    let v219: iNone;  // xmm3
    let v220: iNone;  // xmm1
    let v221: iNone;  // xmm3
    let v222: iNone;  // xmm0
    let v223: iNone;  // xmm1
    let v224: iNone;  // xmm2
    let v225: iNone;  // xmm0
    let v226: iNone;  // xmm1
    let v227: iNone;  // xmm2

    v130 = clap_builder::builder::command::Command::new(uucore::util_name(), v172);
    v76 = clap_builder::builder::command::Command::version(&v130, "0.0.28");
    v1 = uucore::format_usage("{} [OPTION]... [FILE]...");
    v130 = clap_builder::builder::command::Command::override_usage(&v76, &v1);
    v76 = clap_builder::builder::command::Command::about(&v130, "List directory contents.
Ignore files and directories starting with a '.' by default");
    memcpy(&v130, &v76, 700);
    v133 = 1126484022657160 | *((&v76.field_0 as &char + 700) as &i64);
    v134 = *((&v76.field_0 as &char + 708) as &i32);
    v76 = clap_builder::builder::arg::Arg::new("help");
    v1 = clap_builder::builder::arg::Arg::long(&v76, "help");
    v76 = clap_builder::builder::arg::Arg::help(&v1, "Print help information.");
    v1 = clap_builder::builder::arg::Arg::action(&v76, 0x5);
    v76 = clap_builder::builder::command::Command::arg(&v130, &v1);
    v130 = clap_builder::builder::arg::Arg::new("format");
    v1 = clap_builder::builder::arg::Arg::long(&v130, "format");
    v130 = clap_builder::builder::arg::Arg::help(&v1, "Set the display format.");
    v1 = struct128 {
        field_0: &anon.8bf1419b86641518549345aedc57e906.1.llvm.11260003342554782039
        field_8: 4
        field_16: &g_434bba
        field_24: 7
        field_32: &g_434bc1
        field_40: 13
        field_48: &g_434bce
        field_56: 7
        field_64: &g_424778
        field_72: 8
        field_80: &g_434bd5
        field_88: 6
        field_96: &g_434bdb
        field_104: 10
        field_112: &g_434be5
        field_120: 6
    };
    v108 = <uucore::parser::shortcut_value_parser::ShortcutValueParser as core::convert::From<I>>::from(&v1);
    v1 = clap_builder::builder::arg::Arg::value_parser(&v130, &v108);
    memcpy(&v130, &v1, 584);
    v131 = 144 | v38;
    v132 = v39;
    v108 = &anon.3f7e092f2ea554bdd060175bd8ea63d9.20.llvm.16502254941234113161;
    v109 = 6;
    v110 = &anon.8bf1419b86641518549345aedc57e906.2.llvm.11260003342554782039;
    v111 = 1;
    v112 = &anon.8bf1419b86641518549345aedc57e906.1.llvm.11260003342554782039;
    v113 = 4;
    v114 = &anon.8bf1419b86641518549345aedc57e906.3.llvm.11260003342554782039;
    v115 = 1;
    v116 = &anon.8bf1419b86641518549345aedc57e906.2.llvm.11260003342554782039;
    v117 = 1;
    v118 = &anon.3f7e092f2ea554bdd060175bd8ea63d9.38.llvm.16502254941234113161;
    v119 = 5;
    v1 = clap_builder::builder::arg::Arg::overrides_with_all(&v130, &v108);
    v130 = clap_builder::builder::command::Command::arg(&v76, &v1);
    v76 = clap_builder::builder::arg::Arg::new("C");
    v1 = clap_builder::builder::arg::Arg::short(&v76, 0x43);
    v76 = clap_builder::builder::arg::Arg::help(&v1, "Display the files in columns.");
    v120 = &anon.3f7e092f2ea554bdd060175bd8ea63d9.20.llvm.16502254941234113161;
    v121 = 6;
    v122 = &anon.8bf1419b86641518549345aedc57e906.2.llvm.11260003342554782039;
    v123 = 1;
    v124 = &anon.8bf1419b86641518549345aedc57e906.1.llvm.11260003342554782039;
    v125 = 4;
    v126 = &anon.8bf1419b86641518549345aedc57e906.3.llvm.11260003342554782039;
    v127 = 1;
    v128 = &anon.8bf1419b86641518549345aedc57e906.2.llvm.11260003342554782039;
    v129 = 1;
    v116 = v128;
    v117 = v129;
    v114 = v126;
    v115 = v127;
    v112 = v124;
    v113 = v125;
    *(&v110 as &i128) = *(&v122 as &i128);
    *(&v108 as &i128) = *(&v120 as &i128);
    v1 = clap_builder::builder::arg::Arg::overrides_with_all(&v76, &v108);
    v108 = clap_builder::builder::arg::Arg::action(&v1, 0x2);
    v76 = clap_builder::builder::command::Command::arg(&v130, &v108);
    v130 = clap_builder::builder::arg::Arg::new("long");
    v1 = clap_builder::builder::arg::Arg::short(&v130, 0x6c);
    v130 = clap_builder::builder::arg::Arg::long(&v1, "long");
    v1 = clap_builder::builder::arg::Arg::help(&v130, "Display detailed information.");
    *(&v116 as &i128) = *(&v128 as &i128);
    v173 = *(&v120 as &i128);
    v174 = *(&v122 as &i128);
    v175 = *(&v124 as &i128);
    *(&v114 as &i128) = *(&v126 as &i128);
    v112 = v175;
    v110 = v174;
    v108 = v173;
    v130 = clap_builder::builder::arg::Arg::overrides_with_all(&v1, &v108);
    v1 = clap_builder::builder::arg::Arg::action(&v130, 0x2);
    v130 = clap_builder::builder::command::Command::arg(&v76, &v1);
    v76 = clap_builder::builder::arg::Arg::new("x");
    v1 = clap_builder::builder::arg::Arg::short(&v76, 0x78);
    v76 = clap_builder::builder::arg::Arg::help(&v1, "List entries in rows instead of in columns.");
    *(&v116 as &i128) = *(&v128 as &i128);
    v176 = *(&v120 as &i128);
    v177 = *(&v122 as &i128);
    v178 = *(&v124 as &i128);
    *(&v114 as &i128) = *(&v126 as &i128);
    v112 = v178;
    v110 = v177;
    v108 = v176;
    v1 = clap_builder::builder::arg::Arg::overrides_with_all(&v76, &v108);
    v108 = clap_builder::builder::arg::Arg::action(&v1, 0x2);
    v76 = clap_builder::builder::command::Command::arg(&v130, &v108);
    v130 = clap_builder::builder::arg::Arg::new("tabsize");
    v1 = clap_builder::builder::arg::Arg::short(&v130, 0x54);
    v130 = clap_builder::builder::arg::Arg::long(&v1, "tabsize");
    v1 = clap_builder::builder::arg::Arg::env(&v130, "TABSIZE");
    v130 = clap_builder::builder::arg::Arg::value_name(&v1, "COLS");
    v1 = clap_builder::builder::arg::Arg::help(&v130, "Assume tab stops at each COLS instead of 8 (unimplemented)");
    v130 = clap_builder::builder::command::Command::arg(&v76, &v1);
    v76 = clap_builder::builder::arg::Arg::new("m");
    v1 = clap_builder::builder::arg::Arg::short(&v76, 0x6d);
    v76 = clap_builder::builder::arg::Arg::help(&v1, "List entries separated by commas.");
    v1 = clap_builder::builder::arg::Arg::overrides_with_all(&v76, &v120);
    v108 = clap_builder::builder::arg::Arg::action(&v1, 0x2);
    v76 = clap_builder::builder::command::Command::arg(&v130, &v108);
    v130 = clap_builder::builder::arg::Arg::new("zero");
    v1 = clap_builder::builder::arg::Arg::long(&v130, "zero");
    v130 = clap_builder::builder::arg::Arg::overrides_with(&v1, "zero");
    v1 = clap_builder::builder::arg::Arg::help(&v130, "List entries separated by ASCII NUL characters.");
    v108 = clap_builder::builder::arg::Arg::action(&v1, 0x2);
    v130 = clap_builder::builder::command::Command::arg(&v76, &v108);
    v76 = clap_builder::builder::arg::Arg::new("dired");
    v1 = clap_builder::builder::arg::Arg::long(&v76, "dired");
    v76 = clap_builder::builder::arg::Arg::short(&v1, 0x44);
    v1 = clap_builder::builder::arg::Arg::help(&v76, "generate output designed for Emacs' dired (Directory Editor) mode");
    v76 = clap_builder::builder::arg::Arg::action(&v1, 0x2);
    v1 = clap_builder::builder::arg::Arg::overrides_with(&v76, "hyperlink");
    v76 = clap_builder::builder::command::Command::arg(&v130, &v1);
    v130 = clap_builder::builder::arg::Arg::new("hyperlink");
    v1 = clap_builder::builder::arg::Arg::long(&v130, "hyperlink");
    v130 = clap_builder::builder::arg::Arg::help(&v1, "hyperlink file names WHEN");
    v6 = &g_434cef;
    v7 = 6;
    v4 = 0x8000000000000000;
    *(&v5 as &i128) = *(&v0 as &i128);
    v1 = struct8 {
        field_16: 0
    };
    v2 = 8;
    v3 = 0;
    *(&v8 as &i8) = 0;
    v108 = clap_builder::builder::possible_value::PossibleValue::alias(&v1, "yes");
    v56 = clap_builder::builder::possible_value::PossibleValue::alias(&v108, "force");
    v6 = &g_423f34;
    v7 = 4;
    v4 = 0x8000000000000000;
    *(&v5 as &i128) = *(&v0 as &i128);
    v1 = struct8 {
        field_16: 0
    };
    v2 = 8;
    v3 = 0;
    *(&v8 as &i8) = 0;
    v108 = clap_builder::builder::possible_value::PossibleValue::alias(&v1, "tty");
    v40 = clap_builder::builder::possible_value::PossibleValue::alias(&v108, "if-tty");
    v6 = &g_434d06;
    v7 = 5;
    v4 = 0x8000000000000000;
    *(&v5 as &i128) = *(&v0 as &i128);
    v1 = struct8 {
        field_16: 0
    };
    v2 = 8;
    v3 = 0;
    *(&v8 as &i8) = 0;
    v108 = clap_builder::builder::possible_value::PossibleValue::alias(&v1, "no");
    v48 = clap_builder::builder::possible_value::PossibleValue::alias(&v108, "none");
    v179 = *(&v56.field_16 as &i128);
    v180 = v56.field_48;
    *(&v1 as &u128) = v56.field_0;
    v3 = v179;
    v5 = v60;
    v6 = v180;
    *(&v8 as &u64) = v56.field_64;
    v181 = *(&v40.field_16 as &i128);
    v182 = v40.field_48;
    v9 = v40;
    v14 = v48;
    v108 = <uucore::parser::shortcut_value_parser::ShortcutValueParser as core::convert::From<I>>::from(&v1);
    v1 = clap_builder::builder::arg::Arg::value_parser(&v130, &v108);
    memcpy(&v130, &v1, 584);
    v131 = 128 | v38;
    v132 = v39;
    v89 = 0;
    v90 = 1;
    v91 = 0;
    v110 = *(&v91 as &i64);
    v108 = v89;
    v109 = v90;
    v1 = clap_builder::builder::arg::Arg::num_args(&v130, &v108);
    v130 = clap_builder::builder::arg::Arg::default_missing_value(&v1);
    v1 = clap_builder::builder::arg::Arg::default_value(&v130);
    v130 = clap_builder::builder::arg::Arg::value_name(&v1, "WHEN");
    v1 = clap_builder::builder::arg::Arg::overrides_with(&v130, "dired");
    v130 = clap_builder::builder::command::Command::arg(&v76, &v1);
    v76 = clap_builder::builder::arg::Arg::new("1");
    v1 = clap_builder::builder::arg::Arg::short(&v76, 0x31);
    v76 = clap_builder::builder::arg::Arg::help(&v1, "List one file per line.");
    v1 = clap_builder::builder::arg::Arg::action(&v76, 0x2);
    v76 = clap_builder::builder::command::Command::arg(&v130, &v1);
    v130 = clap_builder::builder::arg::Arg::new("o");
    v1 = clap_builder::builder::arg::Arg::short(&v130, 0x6f);
    v130 = clap_builder::builder::arg::Arg::help(&v1, "Long format without group information. Identical to --format=long with --no-group.");
    v1 = clap_builder::builder::arg::Arg::action(&v130, 0x2);
    v130 = clap_builder::builder::command::Command::arg(&v76, &v1);
    v76 = clap_builder::builder::arg::Arg::new("g");
    v1 = clap_builder::builder::arg::Arg::short(&v76, 0x67);
    v76 = clap_builder::builder::arg::Arg::help(&v1, "Long format without owner information.");
    v1 = clap_builder::builder::arg::Arg::action(&v76, 0x2);
    v76 = clap_builder::builder::command::Command::arg(&v130, &v1);
    v130 = clap_builder::builder::arg::Arg::new("numeric-uid-gid");
    v1 = clap_builder::builder::arg::Arg::short(&v130, 0x6e);
    v130 = clap_builder::builder::arg::Arg::long(&v1, "numeric-uid-gid");
    v1 = clap_builder::builder::arg::Arg::help(&v130, "-l with numeric UIDs and GIDs.");
    v108 = clap_builder::builder::arg::Arg::action(&v1, 0x2);
    v130 = clap_builder::builder::command::Command::arg(&v76, &v108);
    v76 = clap_builder::builder::arg::Arg::new("quoting-style");
    v1 = clap_builder::builder::arg::Arg::long(&v76, "quoting-style");
    v76 = clap_builder::builder::arg::Arg::help(&v1, "Set quoting style.");
    v160 = &g_434d50;
    v161 = 7;
    v158 = 0x8000000000000000;
    v159 = *(&v0 as &i128);
    v155 = 0;
    v156 = 8;
    v157 = 0;
    v162 = 0;
    v168 = &g_434d57;
    v169 = 5;
    v166 = 0x8000000000000000;
    v167 = v159;
    v163 = 0;
    v164 = 8;
    v165 = 0;
    v170 = 0;
    v61 = &g_434d68;
    v62 = 12;
    v59 = 0x8000000000000000;
    v60 = *(&v0 as &i128);
    v56 = 0;
    v57 = 8;
    v58 = 0;
    v63 = 0;
    v45 = &g_434d5c;
    v46 = 12;
    v43 = 0x8000000000000000;
    v44 = *(&v0 as &i128);
    v40 = 0;
    v41 = 8;
    v42 = 0;
    v47 = 0;
    v53 = &g_434d74;
    v54 = 19;
    v51 = 0x8000000000000000;
    v52 = *(&v0 as &i128);
    v48 = 0;
    v49 = 8;
    v50 = 0;
    v55 = 0;
    v6 = &g_434d87;
    v7 = 1;
    v4 = 0x8000000000000000;
    *(&v5 as &i128) = *(&v0 as &i128);
    v1 = struct8 {
        field_16: 0
    };
    v2 = 8;
    v3 = 0;
    *(&v8 as &i8) = 0;
    v108 = clap_builder::builder::possible_value::PossibleValue::alias(&v1, "c-maybe");
    v34 = *(&v0 as &i128);
    v184 = *(&v157 as &i128);
    v185 = *(&v160 as &i128);
    *(&v1 as &i128) = *(&v155 as &i128);
    v3 = v184;
    v5 = v159;
    v6 = v185;
    *(&v8 as &i64) = *(&v162 as &i64);
    v186 = *(&v165 as &i128);
    v187 = *(&v168 as &i128);
    *(&v9 as &i128) = *(&v163 as &i128);
    v10 = v186;
    v11 = v167;
    v12 = v187;
    v13 = *(&v170 as &i64);
    v18 = v56.field_64;
    v17 = *(&v61 as &i128);
    v16 = v60;
    v15 = *(&v58 as &i128);
    v14 = *(&v56 as &i128);
    v23 = v40.field_64;
    v22 = *(&v45 as &i128);
    v21 = v44;
    v20 = *(&v42 as &i128);
    v19 = *(&v40 as &i128);
    v28 = v48.field_64;
    v27 = *(&v53 as &i128);
    v26 = v52;
    v25 = *(&v50 as &i128);
    v24 = *(&v48 as &i128);
    v29 = v108;
    v30 = 0;
    v31 = 8;
    v32 = 0;
    v33 = 0x8000000000000000;
    v35 = &g_434d88;
    v36 = 6;
    v37 = 0;
    v108 = <uucore::parser::shortcut_value_parser::ShortcutValueParser as core::convert::From<I>>::from(&v1);
    v1 = clap_builder::builder::arg::Arg::value_parser(&v76, &v108);
    v92 = &anon.3f7e092f2ea554bdd060175bd8ea63d9.14.llvm.16502254941234113161;
    v93 = 13;
    v94 = &anon.9938bf1084d6f67f99da587aeb78cfa9.29.llvm.7263189302602752264;
    v95 = 7;
    v96 = &anon.9938bf1084d6f67f99da587aeb78cfa9.28.llvm.7263189302602752264;
    v97 = 6;
    v98 = &anon.9938bf1084d6f67f99da587aeb78cfa9.30.llvm.7263189302602752264;
    v99 = 10;
    v82 = v98;
    v83 = v99;
    v80 = v96;
    v81 = v97;
    v78 = v94;
    v79 = v95;
    *(&v76 as &i128) = *(&v92 as &i128);
    v108 = clap_builder::builder::arg::Arg::overrides_with_all(&v1, &v76);
    v76 = clap_builder::builder::command::Command::arg(&v130, &v108);
    v130 = clap_builder::builder::arg::Arg::new("literal");
    v1 = clap_builder::builder::arg::Arg::short(&v130, 0x4e);
    v130 = clap_builder::builder::arg::Arg::long(&v1, "literal");
    v1 = clap_builder::builder::arg::Arg::alias(&v130, "l");
    v130 = clap_builder::builder::arg::Arg::help(&v1, "Use literal quoting style. Equivalent to `--quoting-style=literal`");
    v188 = *(&v92 as &i128);
    v189 = *(&v94 as &i128);
    v190 = *(&v96 as &i128);
    *(&v114 as &i128) = *(&v98 as &i128);
    v112 = v190;
    v110 = v189;
    v108 = v188;
    v1 = clap_builder::builder::arg::Arg::overrides_with_all(&v130, &v108);
    v108 = clap_builder::builder::arg::Arg::action(&v1, 0x2);
    v130 = clap_builder::builder::command::Command::arg(&v76, &v108);
    v76 = clap_builder::builder::arg::Arg::new("escape");
    v1 = clap_builder::builder::arg::Arg::short(&v76, 0x62);
    v76 = clap_builder::builder::arg::Arg::long(&v1, "escape");
    v1 = clap_builder::builder::arg::Arg::help(&v76, "Use escape quoting style. Equivalent to `--quoting-style=escape`");
    v191 = *(&v92 as &i128);
    v192 = *(&v94 as &i128);
    v193 = *(&v96 as &i128);
    *(&v114 as &i128) = *(&v98 as &i128);
    v112 = v193;
    v110 = v192;
    v108 = v191;
    v76 = clap_builder::builder::arg::Arg::overrides_with_all(&v1, &v108);
    v1 = clap_builder::builder::arg::Arg::action(&v76, 0x2);
    v76 = clap_builder::builder::command::Command::arg(&v130, &v1);
    v130 = clap_builder::builder::arg::Arg::new("quote-name");
    v1 = clap_builder::builder::arg::Arg::short(&v130, 0x51);
    v130 = clap_builder::builder::arg::Arg::long(&v1, "quote-name");
    v1 = clap_builder::builder::arg::Arg::help(&v130, "Use C quoting style. Equivalent to `--quoting-style=c`");
    v130 = clap_builder::builder::arg::Arg::overrides_with_all(&v1, &v92);
    v1 = clap_builder::builder::arg::Arg::action(&v130, 0x2);
    v130 = clap_builder::builder::command::Command::arg(&v76, &v1);
    v76 = clap_builder::builder::arg::Arg::new("hide-control-chars");
    v1 = clap_builder::builder::arg::Arg::short(&v76, 0x71);
    v76 = clap_builder::builder::arg::Arg::long(&v1, "hide-control-chars");
    v1 = clap_builder::builder::arg::Arg::help(&v76, "Replace control characters with '?' if they are not escaped.");
    v147 = &anon.3f7e092f2ea554bdd060175bd8ea63d9.15.llvm.16502254941234113161;
    v148 = 18;
    v149 = &anon.3f7e092f2ea554bdd060175bd8ea63d9.16.llvm.16502254941234113161;
    v150 = 18;
    v110 = v149;
    v111 = v150;
    v108 = v147;
    v109 = v148;
    v76 = clap_builder::builder::arg::Arg::overrides_with_all(&v1, &v108);
    v1 = clap_builder::builder::arg::Arg::action(&v76, 0x2);
    v76 = clap_builder::builder::command::Command::arg(&v130, &v1);
    v130 = clap_builder::builder::arg::Arg::new("show-control-chars");
    v1 = clap_builder::builder::arg::Arg::long(&v130, "show-control-chars");
    v130 = clap_builder::builder::arg::Arg::help(&v1, "Show control characters 'as is' if they are not escaped.");
    v1 = clap_builder::builder::arg::Arg::overrides_with_all(&v130, &v147);
    v108 = clap_builder::builder::arg::Arg::action(&v1, 0x2);
    v130 = clap_builder::builder::command::Command::arg(&v76, &v108);
    v76 = clap_builder::builder::arg::Arg::new("time");
    v1 = clap_builder::builder::arg::Arg::long(&v76, "time");
    v76 = clap_builder::builder::arg::Arg::help(&v1, "Show time in <field>:
	access time (-u): atime, access, use;
	change time (-t): ctime, status.
	birth time: birth, creation;");
    v1 = clap_builder::builder::arg::Arg::value_name(&v76, "field");
    v82 = &g_434c97;
    v83 = 5;
    v79 = 0x8000000000000000;
    *(&v80 as &i128) = *(&v0 as &i128);
    v76 = struct8 {
        field_16: 0
    };
    v77 = 8;
    v78 = 0;
    *(&v84 as &i8) = 0;
    v108 = clap_builder::builder::possible_value::PossibleValue::alias(&v76, "access");
    v40 = clap_builder::builder::possible_value::PossibleValue::alias(&v108, "use");
    v82 = &g_434c86;
    v83 = 5;
    v79 = 0x8000000000000000;
    *(&v80 as &i128) = *(&v0 as &i128);
    v76 = struct8 {
        field_16: 0
    };
    v77 = 8;
    v78 = 0;
    *(&v84 as &i8) = 0;
    v48 = clap_builder::builder::possible_value::PossibleValue::alias(&v76, "status");
    v82 = &g_434c9f;
    v83 = 5;
    v79 = 0x8000000000000000;
    *(&v80 as &i128) = *(&v0 as &i128);
    v76 = struct8 {
        field_16: 0
    };
    v77 = 8;
    v78 = 0;
    *(&v84 as &i8) = 0;
    v108 = clap_builder::builder::possible_value::PossibleValue::alias(&v76, "creation");
    v194 = *(&v40.field_16 as &i128);
    v195 = v40.field_48;
    *(&v76 as &u128) = v40.field_0;
    v78 = v194;
    v80 = v44;
    v82 = v195;
    *(&v84 as &u64) = v40.field_64;
    v196 = *(&v48.field_16 as &i128);
    v197 = v48.field_48;
    v85 = v48;
    v88 = v108;
    v108 = <uucore::parser::shortcut_value_parser::ShortcutValueParser as core::convert::From<I>>::from(&v76);
    v76 = clap_builder::builder::arg::Arg::value_parser(&v1, &v108);
    memcpy(&v1, &v76, 584);
    v38 = 144 | *((&v76.field_0 as &char + 584) as &i32);
    v39 = *((&v76.field_0 as &char + 588) as &i32);
    v135 = &anon.3f7e092f2ea554bdd060175bd8ea63d9.22.llvm.16502254941234113161;
    v136 = 4;
    v137 = &anon.8bf1419b86641518549345aedc57e906.9.llvm.11260003342554782039;
    v138 = 1;
    v139 = &anon.8bf1419b86641518549345aedc57e906.10.llvm.11260003342554782039;
    v140 = 1;
    v80 = v139;
    v81 = v140;
    v78 = v137;
    v79 = v138;
    v76 = v135;
    v77 = v136;
    v108 = clap_builder::builder::arg::Arg::overrides_with_all(&v1, &v76);
    v76 = clap_builder::builder::command::Command::arg(&v130, &v108);
    v130 = clap_builder::builder::arg::Arg::new("c");
    v1 = clap_builder::builder::arg::Arg::short(&v130, 0x63);
    v130 = clap_builder::builder::arg::Arg::help(&v1, "If the long listing format (e.g., -l, -o) is being used, print the status change time (the 'ctime' in the inode) instead of the modification time. When explicitly sorting by time (--sort=time or -t) or when not using a long listing format, sort according to the status change time.");
    v198 = *(&v135 as &i128);
    v199 = *(&v137 as &i128);
    *(&v112 as &i128) = *(&v139 as &i128);
    v110 = v199;
    v108 = v198;
    v1 = clap_builder::builder::arg::Arg::overrides_with_all(&v130, &v108);
    v108 = clap_builder::builder::arg::Arg::action(&v1, 0x2);
    v130 = clap_builder::builder::command::Command::arg(&v76, &v108);
    v76 = clap_builder::builder::arg::Arg::new("u");
    v1 = clap_builder::builder::arg::Arg::short(&v76, 0x75);
    v76 = clap_builder::builder::arg::Arg::help(&v1, "If the long listing format (e.g., -l, -o) is being used, print the status access time instead of the modification time. When explicitly sorting by time (--sort=time or -t) or when not using a long listing format, sort according to the access time.");
    v1 = clap_builder::builder::arg::Arg::overrides_with_all(&v76, &v135);
    v108 = clap_builder::builder::arg::Arg::action(&v1, 0x2);
    v76 = clap_builder::builder::command::Command::arg(&v130, &v108);
    v130 = clap_builder::builder::arg::Arg::new("hide");
    v1 = clap_builder::builder::arg::Arg::long(&v130, "hide");
    v130 = clap_builder::builder::arg::Arg::action(&v1, 0x1);
    v1 = clap_builder::builder::arg::Arg::value_name(&v130, "PATTERN");
    v108 = clap_builder::builder::arg::Arg::help(&v1, "do not list implied entries matching shell PATTERN (overridden by -a or -A)");
    v130 = clap_builder::builder::command::Command::arg(&v76, &v108);
    v76 = clap_builder::builder::arg::Arg::new("ignore");
    v1 = clap_builder::builder::arg::Arg::short(&v76, 0x49);
    v76 = clap_builder::builder::arg::Arg::long(&v1, "ignore");
    v1 = clap_builder::builder::arg::Arg::action(&v76, 0x1);
    v76 = clap_builder::builder::arg::Arg::value_name(&v1, "PATTERN");
    v1 = clap_builder::builder::arg::Arg::help(&v76, "do not list implied entries matching shell PATTERN");
    v76 = clap_builder::builder::command::Command::arg(&v130, &v1);
    v130 = clap_builder::builder::arg::Arg::new("ignore-backups");
    v1 = clap_builder::builder::arg::Arg::short(&v130, 0x42);
    v130 = clap_builder::builder::arg::Arg::long(&v1, "ignore-backups");
    v1 = clap_builder::builder::arg::Arg::help(&v130, "Ignore entries which end with ~.");
    v108 = clap_builder::builder::arg::Arg::action(&v1, 0x2);
    v130 = clap_builder::builder::command::Command::arg(&v76, &v108);
    v76 = clap_builder::builder::arg::Arg::new("sort");
    v1 = clap_builder::builder::arg::Arg::long(&v76, "sort");
    v76 = clap_builder::builder::arg::Arg::help(&v1, "Sort by <field>: name, none (-U), time (-t), size (-S), extension (-X) or width");
    v1 = clap_builder::builder::arg::Arg::value_name(&v76, "field");
    v76 = struct112 {
        field_0: &g_42400c
        field_8: 4
        field_16: &g_423ff4
        field_24: 4
        field_32: &anon.3f7e092f2ea554bdd060175bd8ea63d9.22.llvm.16502254941234113161
        field_40: 4
        field_48: &anon.0961294ef8eb7b5431de28de81a5ae4f.9.llvm.9099371528486416302
        field_56: 4
        field_64: &g_434c2f
        field_72: 7
        field_80: &g_434c36
        field_88: 9
        field_96: &g_434c3f
        field_104: 5
    };
    v108 = <uucore::parser::shortcut_value_parser::ShortcutValueParser as core::convert::From<I>>::from(&v76);
    v76 = clap_builder::builder::arg::Arg::value_parser(&v1, &v108);
    memcpy(&v1, &v76, 584);
    v38 = 128 | *((&v76.field_0 as &char + 584) as &i32);
    v39 = *((&v76.field_0 as &char + 588) as &i32);
    v64 = &anon.3f7e092f2ea554bdd060175bd8ea63d9.21.llvm.16502254941234113161;
    v65 = 4;
    v66 = &anon.f45a42eab3604eaa40558bbeffd2bfb7.11.llvm.10979288589332586409;
    v67 = 1;
    v68 = &anon.f45a42eab3604eaa40558bbeffd2bfb7.12.llvm.10979288589332586409;
    v69 = 1;
    v70 = &anon.f45a42eab3604eaa40558bbeffd2bfb7.13.llvm.10979288589332586409;
    v71 = 1;
    v72 = &anon.f45a42eab3604eaa40558bbeffd2bfb7.14.llvm.10979288589332586409;
    v73 = 1;
    v74 = &anon.f45a42eab3604eaa40558bbeffd2bfb7.15.llvm.10979288589332586409;
    v75 = 1;
    v86 = v74;
    v87 = v75;
    v84 = v72;
    v85 = v73;
    v82 = v70;
    v83 = v71;
    *(&v80 as &i128) = *(&v68 as &i128);
    *(&v78 as &i128) = *(&v66 as &i128);
    *(&v76 as &i128) = *(&v64 as &i128);
    v108 = clap_builder::builder::arg::Arg::overrides_with_all(&v1, &v76);
    v76 = clap_builder::builder::command::Command::arg(&v130, &v108);
    v130 = clap_builder::builder::arg::Arg::new("S");
    v1 = clap_builder::builder::arg::Arg::short(&v130, 0x53);
    v130 = clap_builder::builder::arg::Arg::help(&v1, "Sort by file size, largest first.");
    *(&v118 as &i128) = *(&v74 as &i128);
    *(&v116 as &i128) = *(&v72 as &i128);
    v200 = *(&v64 as &i128);
    v201 = *(&v66 as &i128);
    v202 = *(&v68 as &i128);
    *(&v114 as &i128) = *(&v70 as &i128);
    v112 = v202;
    v110 = v201;
    v108 = v200;
    v1 = clap_builder::builder::arg::Arg::overrides_with_all(&v130, &v108);
    v108 = clap_builder::builder::arg::Arg::action(&v1, 0x2);
    v130 = clap_builder::builder::command::Command::arg(&v76, &v108);
    v76 = clap_builder::builder::arg::Arg::new("t");
    v1 = clap_builder::builder::arg::Arg::short(&v76, 0x74);
    v76 = clap_builder::builder::arg::Arg::help(&v1, "Sort by modification time (the 'mtime' in the inode), newest first.");
    *(&v118 as &i128) = *(&v74 as &i128);
    *(&v116 as &i128) = *(&v72 as &i128);
    v203 = *(&v64 as &i128);
    v204 = *(&v66 as &i128);
    v205 = *(&v68 as &i128);
    *(&v114 as &i128) = *(&v70 as &i128);
    v112 = v205;
    v110 = v204;
    v108 = v203;
    v1 = clap_builder::builder::arg::Arg::overrides_with_all(&v76, &v108);
    v108 = clap_builder::builder::arg::Arg::action(&v1, 0x2);
    v76 = clap_builder::builder::command::Command::arg(&v130, &v108);
    v130 = clap_builder::builder::arg::Arg::new("v");
    v1 = clap_builder::builder::arg::Arg::short(&v130, 0x76);
    v130 = clap_builder::builder::arg::Arg::help(&v1, "Natural sort of (version) numbers in the filenames.");
    *(&v118 as &i128) = *(&v74 as &i128);
    *(&v116 as &i128) = *(&v72 as &i128);
    v206 = *(&v64 as &i128);
    v207 = *(&v66 as &i128);
    v208 = *(&v68 as &i128);
    *(&v114 as &i128) = *(&v70 as &i128);
    v112 = v208;
    v110 = v207;
    v108 = v206;
    v1 = clap_builder::builder::arg::Arg::overrides_with_all(&v130, &v108);
    v108 = clap_builder::builder::arg::Arg::action(&v1, 0x2);
    v130 = clap_builder::builder::command::Command::arg(&v76, &v108);
    v76 = clap_builder::builder::arg::Arg::new("X");
    v1 = clap_builder::builder::arg::Arg::short(&v76, 0x58);
    v76 = clap_builder::builder::arg::Arg::help(&v1, "Sort alphabetically by entry extension.");
    *(&v118 as &i128) = *(&v74 as &i128);
    *(&v116 as &i128) = *(&v72 as &i128);
    v209 = *(&v64 as &i128);
    v210 = *(&v66 as &i128);
    v211 = *(&v68 as &i128);
    *(&v114 as &i128) = *(&v70 as &i128);
    v112 = v211;
    v110 = v210;
    v108 = v209;
    v1 = clap_builder::builder::arg::Arg::overrides_with_all(&v76, &v108);
    v108 = clap_builder::builder::arg::Arg::action(&v1, 0x2);
    v76 = clap_builder::builder::command::Command::arg(&v130, &v108);
    v130 = clap_builder::builder::arg::Arg::new("U");
    v1 = clap_builder::builder::arg::Arg::short(&v130, 0x55);
    v130 = clap_builder::builder::arg::Arg::help(&v1, "Do not sort; list the files in whatever order they are stored in the directory.  This is especially useful when listing very large directories, since not doing any sorting can be noticeably faster.");
    v1 = clap_builder::builder::arg::Arg::overrides_with_all(&v130, &v64);
    v108 = clap_builder::builder::arg::Arg::action(&v1, 0x2);
    v130 = clap_builder::builder::command::Command::arg(&v76, &v108);
    v76 = clap_builder::builder::arg::Arg::new("dereference");
    v1 = clap_builder::builder::arg::Arg::short(&v76, 0x4c);
    v76 = clap_builder::builder::arg::Arg::long(&v1, "dereference");
    v1 = clap_builder::builder::arg::Arg::help(&v76, "When showing file information for a symbolic link, show information for the file the link references rather than the link itself.");
    v141 = &anon.902b05dc61fef0513c491a1430f3d56c.9.llvm.11494158254235805547;
    v142 = 11;
    v143 = &anon.902b05dc61fef0513c491a1430f3d56c.11.llvm.11494158254235805547;
    v144 = 39;
    v145 = &anon.902b05dc61fef0513c491a1430f3d56c.10.llvm.11494158254235805547;
    v146 = 24;
    v112 = v145;
    v113 = v146;
    v110 = v143;
    v111 = v144;
    v108 = v141;
    v109 = v142;
    v76 = clap_builder::builder::arg::Arg::overrides_with_all(&v1, &v108);
    v1 = clap_builder::builder::arg::Arg::action(&v76, 0x2);
    v76 = clap_builder::builder::command::Command::arg(&v130, &v1);
    v130 = clap_builder::builder::arg::Arg::new("dereference-command-line-symlink-to-dir");
    v1 = clap_builder::builder::arg::Arg::long(&v130, "dereference-command-line-symlink-to-dir");
    v130 = clap_builder::builder::arg::Arg::help(&v1, "Do not follow symlinks except when they link to directories and are given as command line arguments.");
    v212 = *(&v141 as &i128);
    v213 = *(&v143 as &i128);
    *(&v112 as &i128) = *(&v145 as &i128);
    v110 = v213;
    v108 = v212;
    v1 = clap_builder::builder::arg::Arg::overrides_with_all(&v130, &v108);
    v108 = clap_builder::builder::arg::Arg::action(&v1, 0x2);
    v130 = clap_builder::builder::command::Command::arg(&v76, &v108);
    v76 = clap_builder::builder::arg::Arg::new("dereference-command-line");
    v1 = clap_builder::builder::arg::Arg::short(&v76, 0x48);
    v76 = clap_builder::builder::arg::Arg::long(&v1, "dereference-command-line");
    v1 = clap_builder::builder::arg::Arg::help(&v76, "Do not follow symlinks except when given as command line arguments.");
    v76 = clap_builder::builder::arg::Arg::overrides_with_all(&v1, &v141);
    v1 = clap_builder::builder::arg::Arg::action(&v76, 0x2);
    v76 = clap_builder::builder::command::Command::arg(&v130, &v1);
    v130 = clap_builder::builder::arg::Arg::new("no-group");
    v1 = clap_builder::builder::arg::Arg::long(&v130, "no-group");
    v130 = clap_builder::builder::arg::Arg::short(&v1, 0x47);
    v1 = clap_builder::builder::arg::Arg::help(&v130, "Do not show group in long format.");
    v108 = clap_builder::builder::arg::Arg::action(&v1, 0x2);
    v130 = clap_builder::builder::command::Command::arg(&v76, &v108);
    v76 = clap_builder::builder::arg::Arg::new("author");
    v1 = clap_builder::builder::arg::Arg::long(&v76, "author");
    v76 = clap_builder::builder::arg::Arg::help(&v1, "Show author in long format. On the supported platforms, the author always matches the file owner.");
    v1 = clap_builder::builder::arg::Arg::action(&v76, 0x2);
    v76 = clap_builder::builder::command::Command::arg(&v130, &v1);
    v130 = clap_builder::builder::arg::Arg::new("all");
    v1 = clap_builder::builder::arg::Arg::short(&v130, 0x61);
    v130 = clap_builder::builder::arg::Arg::long(&v1, "all");
    v151 = &anon.902b05dc61fef0513c491a1430f3d56c.7.llvm.11494158254235805547;
    v152 = 3;
    v153 = &anon.902b05dc61fef0513c491a1430f3d56c.8.llvm.11494158254235805547;
    v154 = 10;
    v110 = v153;
    v111 = v154;
    v108 = v151;
    v109 = v152;
    v1 = clap_builder::builder::arg::Arg::overrides_with_all(&v130, &v108);
    v130 = clap_builder::builder::arg::Arg::help(&v1, "Do not ignore hidden files (files with names that start with '.').");
    v1 = clap_builder::builder::arg::Arg::action(&v130, 0x2);
    v130 = clap_builder::builder::command::Command::arg(&v76, &v1);
    v76 = clap_builder::builder::arg::Arg::new("almost-all");
    v1 = clap_builder::builder::arg::Arg::short(&v76, 0x41);
    v76 = clap_builder::builder::arg::Arg::long(&v1, "almost-all");
    v1 = clap_builder::builder::arg::Arg::overrides_with_all(&v76, &v151);
    v76 = clap_builder::builder::arg::Arg::help(&v1, "In a directory, do not ignore all file names that start with '.', only ignore '.' and '..'.");
    v1 = clap_builder::builder::arg::Arg::action(&v76, 0x2);
    v76 = clap_builder::builder::command::Command::arg(&v130, &v1);
    v130 = clap_builder::builder::arg::Arg::new("directory");
    v1 = clap_builder::builder::arg::Arg::short(&v130, 0x64);
    v130 = clap_builder::builder::arg::Arg::long(&v1, "directory");
    v1 = clap_builder::builder::arg::Arg::help(&v130, "Only list the names of directories, rather than listing directory contents. This will not follow symbolic links unless one of `--dereference-command-line (-H)`, `--dereference (-L)`, or `--dereference-command-line-symlink-to-dir` is specified.");
    v108 = clap_builder::builder::arg::Arg::action(&v1, 0x2);
    v130 = clap_builder::builder::command::Command::arg(&v76, &v108);
    v76 = clap_builder::builder::arg::Arg::new("human-readable");
    v1 = clap_builder::builder::arg::Arg::short(&v76, 0x68);
    v76 = clap_builder::builder::arg::Arg::long(&v1, "human-readable");
    v1 = clap_builder::builder::arg::Arg::help(&v76, "Print human readable file sizes (e.g. 1K 234M 56G).");
    v108 = &anon.0961294ef8eb7b5431de28de81a5ae4f.10.llvm.9099371528486416302;
    v109 = 10;
    v110 = &anon.0961294ef8eb7b5431de28de81a5ae4f.12.llvm.9099371528486416302;
    v111 = 2;
    v76 = clap_builder::builder::arg::Arg::overrides_with_all(&v1, &v108);
    v1 = clap_builder::builder::arg::Arg::action(&v76, 0x2);
    v76 = clap_builder::builder::command::Command::arg(&v130, &v1);
    v130 = clap_builder::builder::arg::Arg::new("kibibytes");
    v1 = clap_builder::builder::arg::Arg::short(&v130, 0x6b);
    v130 = clap_builder::builder::arg::Arg::long(&v1, "kibibytes");
    v1 = clap_builder::builder::arg::Arg::help(&v130, "default to 1024-byte blocks for file system usage; used only with -s and per directory totals");
    v108 = clap_builder::builder::arg::Arg::action(&v1, 0x2);
    v130 = clap_builder::builder::command::Command::arg(&v76, &v108);
    v76 = clap_builder::builder::arg::Arg::new("si");
    v1 = clap_builder::builder::arg::Arg::long(&v76, "si");
    v76 = clap_builder::builder::arg::Arg::help(&v1, "Print human readable file sizes using powers of 1000 instead of 1024.");
    v108 = &anon.0961294ef8eb7b5431de28de81a5ae4f.10.llvm.9099371528486416302;
    v109 = 10;
    v110 = &anon.0961294ef8eb7b5431de28de81a5ae4f.11.llvm.9099371528486416302;
    v111 = 14;
    v1 = clap_builder::builder::arg::Arg::overrides_with_all(&v76, &v108);
    v108 = clap_builder::builder::arg::Arg::action(&v1, 0x2);
    v76 = clap_builder::builder::command::Command::arg(&v130, &v108);
    v130 = clap_builder::builder::arg::Arg::new("block-size");
    v1 = clap_builder::builder::arg::Arg::long(&v130, "block-size");
    memcpy(&v130, &v1, 584);
    v131 = 128 | v38;
    v132 = v39;
    v1 = clap_builder::builder::arg::Arg::value_name(&v130, "BLOCK_SIZE");
    v130 = clap_builder::builder::arg::Arg::help(&v1, "scale sizes by BLOCK_SIZE when printing them");
    v108 = &anon.0961294ef8eb7b5431de28de81a5ae4f.12.llvm.9099371528486416302;
    v109 = 2;
    v110 = &anon.0961294ef8eb7b5431de28de81a5ae4f.11.llvm.9099371528486416302;
    v111 = 14;
    v1 = clap_builder::builder::arg::Arg::overrides_with_all(&v130, &v108);
    v130 = clap_builder::builder::command::Command::arg(&v76, &v1);
    v76 = clap_builder::builder::arg::Arg::new("inode");
    v1 = clap_builder::builder::arg::Arg::short(&v76, 0x69);
    v76 = clap_builder::builder::arg::Arg::long(&v1, "inode");
    v1 = clap_builder::builder::arg::Arg::help(&v76, "print the index number of each file");
    v108 = clap_builder::builder::arg::Arg::action(&v1, 0x2);
    v76 = clap_builder::builder::command::Command::arg(&v130, &v108);
    v130 = clap_builder::builder::arg::Arg::new("reverse");
    v1 = clap_builder::builder::arg::Arg::short(&v130, 0x72);
    v130 = clap_builder::builder::arg::Arg::long(&v1, "reverse");
    v1 = clap_builder::builder::arg::Arg::help(&v130, "Reverse whatever the sorting method is e.g., list files in reverse alphabetical order, youngest first, smallest first, or whatever.");
    v108 = clap_builder::builder::arg::Arg::action(&v1, 0x2);
    v130 = clap_builder::builder::command::Command::arg(&v76, &v108);
    v76 = clap_builder::builder::arg::Arg::new("recursive");
    v1 = clap_builder::builder::arg::Arg::short(&v76, 0x52);
    v76 = clap_builder::builder::arg::Arg::long(&v1, "recursive");
    v1 = clap_builder::builder::arg::Arg::help(&v76, "List the contents of all directories recursively.");
    v108 = clap_builder::builder::arg::Arg::action(&v1, 0x2);
    v76 = clap_builder::builder::command::Command::arg(&v130, &v108);
    v130 = clap_builder::builder::arg::Arg::new("width");
    v1 = clap_builder::builder::arg::Arg::long(&v130, "width");
    v130 = clap_builder::builder::arg::Arg::short(&v1, 0x77);
    v1 = clap_builder::builder::arg::Arg::help(&v130, "Assume that the terminal is COLS columns wide.");
    v108 = clap_builder::builder::arg::Arg::value_name(&v1, "COLS");
    v130 = clap_builder::builder::command::Command::arg(&v76, &v108);
    v76 = clap_builder::builder::arg::Arg::new("size");
    v1 = clap_builder::builder::arg::Arg::short(&v76, 0x73);
    v76 = clap_builder::builder::arg::Arg::long(&v1, "size");
    v1 = clap_builder::builder::arg::Arg::help(&v76, "print the allocated size of each file, in blocks");
    v108 = clap_builder::builder::arg::Arg::action(&v1, 0x2);
    v76 = clap_builder::builder::command::Command::arg(&v130, &v108);
    v130 = clap_builder::builder::arg::Arg::new("color");
    v1 = clap_builder::builder::arg::Arg::long(&v130, "color");
    v130 = clap_builder::builder::arg::Arg::help(&v1, "Color output based on file type.");
    v6 = &g_434cef;
    v7 = 6;
    v4 = 0x8000000000000000;
    *(&v5 as &i128) = *(&v0 as &i128);
    v1 = struct8 {
        field_16: 0
    };
    v2 = 8;
    v3 = 0;
    *(&v8 as &i8) = 0;
    v108 = clap_builder::builder::possible_value::PossibleValue::alias(&v1, "yes");
    v56 = clap_builder::builder::possible_value::PossibleValue::alias(&v108, "force");
    v6 = &g_423f34;
    v7 = 4;
    v4 = 0x8000000000000000;
    *(&v5 as &i128) = *(&v0 as &i128);
    v1 = struct8 {
        field_16: 0
    };
    v2 = 8;
    v3 = 0;
    *(&v8 as &i8) = 0;
    v108 = clap_builder::builder::possible_value::PossibleValue::alias(&v1, "tty");
    v40 = clap_builder::builder::possible_value::PossibleValue::alias(&v108, "if-tty");
    v6 = &g_434d06;
    v7 = 5;
    v4 = 0x8000000000000000;
    *(&v5 as &i128) = *(&v0 as &i128);
    v1 = struct8 {
        field_16: 0
    };
    v2 = 8;
    v3 = 0;
    *(&v8 as &i8) = 0;
    v108 = clap_builder::builder::possible_value::PossibleValue::alias(&v1, "no");
    v48 = clap_builder::builder::possible_value::PossibleValue::alias(&v108, "none");
    v214 = *(&v56.field_16 as &i128);
    v215 = v56.field_48;
    *(&v1 as &u128) = v56.field_0;
    v3 = v214;
    v5 = v60;
    v6 = v215;
    *(&v8 as &u64) = v56.field_64;
    v216 = *(&v40.field_16 as &i128);
    v217 = v40.field_48;
    v9 = v40;
    v14 = v48;
    v108 = <uucore::parser::shortcut_value_parser::ShortcutValueParser as core::convert::From<I>>::from(&v1);
    v1 = clap_builder::builder::arg::Arg::value_parser(&v130, &v108);
    memcpy(&v130, &v1, 584);
    v131 = 128 | v38;
    v132 = v39;
    v110 = *(&v91 as &i64);
    *(&v108 as &i128) = *(&v89 as &i128);
    v1 = clap_builder::builder::arg::Arg::num_args(&v130, &v108);
    v130 = clap_builder::builder::command::Command::arg(&v76, &v1);
    v76 = clap_builder::builder::arg::Arg::new("indicator-style");
    v1 = clap_builder::builder::arg::Arg::long(&v76, "indicator-style");
    v76 = clap_builder::builder::arg::Arg::help(&v1, "Append indicator with style WORD to entry names: none (default),  slash (-p), file-type (--file-type), classify (-F)");
    v1 = struct64 {
        field_0: &g_423ff4
        field_8: 4
        field_16: &g_434e32
        field_24: 5
        field_32: &g_434e29
        field_40: 9
        field_48: &anon.f45a42eab3604eaa40558bbeffd2bfb7.18.llvm.10979288589332586409
        field_56: 8
    };
    v108 = <uucore::parser::shortcut_value_parser::ShortcutValueParser as core::convert::From<I>>::from(&v1);
    v1 = clap_builder::builder::arg::Arg::value_parser(&v76, &v108);
    v100 = &anon.f45a42eab3604eaa40558bbeffd2bfb7.17.llvm.10979288589332586409;
    v101 = 9;
    v102 = &anon.f45a42eab3604eaa40558bbeffd2bfb7.16.llvm.10979288589332586409;
    v103 = 1;
    v104 = &anon.f45a42eab3604eaa40558bbeffd2bfb7.18.llvm.10979288589332586409;
    v105 = 8;
    v106 = &anon.3f7e092f2ea554bdd060175bd8ea63d9.30.llvm.16502254941234113161;
    v107 = 15;
    v82 = v106;
    v83 = v107;
    v80 = v104;
    v81 = v105;
    v78 = v102;
    v79 = v103;
    *(&v76 as &i128) = *(&v100 as &i128);
    v108 = clap_builder::builder::arg::Arg::overrides_with_all(&v1, &v76);
    v76 = clap_builder::builder::command::Command::arg(&v130, &v108);
    v130 = clap_builder::builder::arg::Arg::new("classify");
    v1 = clap_builder::builder::arg::Arg::short(&v130, 0x46);
    v130 = clap_builder::builder::arg::Arg::long(&v1, "classify");
    v1 = clap_builder::builder::arg::Arg::help(&v130, "Append a character to each file name indicating the file type. Also, for regular files that are executable, append '*'. The file type indicators are '/' for directories, '@' for symbolic links, '|' for FIFOs, '=' for sockets, '>' for doors, and nothing for regular files. when may be omitted, or one of:
	none - Do not classify. This is the default.
	auto - Only classify if standard output is a terminal.
	always - Always classify.
Specifying --classify and no when is equivalent to --classify=always. This will not follow symbolic links listed on the command line unless the --dereference-command-line (-H), --dereference (-L), or --dereference-command-line-symlink-to-dir options are specified.");
    v130 = clap_builder::builder::arg::Arg::value_name(&v1, "when");
    v6 = &g_434cef;
    v7 = 6;
    v4 = 0x8000000000000000;
    *(&v5 as &i128) = *(&v0 as &i128);
    v1 = struct8 {
        field_16: 0
    };
    v2 = 8;
    v3 = 0;
    *(&v8 as &i8) = 0;
    v108 = clap_builder::builder::possible_value::PossibleValue::alias(&v1, "yes");
    v56 = clap_builder::builder::possible_value::PossibleValue::alias(&v108, "force");
    v6 = &g_423f34;
    v7 = 4;
    v4 = 0x8000000000000000;
    *(&v5 as &i128) = *(&v0 as &i128);
    v1 = struct8 {
        field_16: 0
    };
    v2 = 8;
    v3 = 0;
    *(&v8 as &i8) = 0;
    v108 = clap_builder::builder::possible_value::PossibleValue::alias(&v1, "tty");
    v40 = clap_builder::builder::possible_value::PossibleValue::alias(&v108, "if-tty");
    v6 = &g_434d06;
    v7 = 5;
    v4 = 0x8000000000000000;
    *(&v5 as &i128) = *(&v0 as &i128);
    v1 = struct8 {
        field_16: 0
    };
    v2 = 8;
    v3 = 0;
    *(&v8 as &i8) = 0;
    v108 = clap_builder::builder::possible_value::PossibleValue::alias(&v1, "no");
    v48 = clap_builder::builder::possible_value::PossibleValue::alias(&v108, "none");
    v218 = *(&v56.field_16 as &i128);
    v219 = v56.field_48;
    *(&v1 as &u128) = v56.field_0;
    v3 = v218;
    v5 = v60;
    v6 = v219;
    *(&v8 as &u64) = v56.field_64;
    v220 = *(&v40.field_16 as &i128);
    v221 = v40.field_48;
    v9 = v40;
    v14 = v48;
    v108 = <uucore::parser::shortcut_value_parser::ShortcutValueParser as core::convert::From<I>>::from(&v1);
    v1 = clap_builder::builder::arg::Arg::value_parser(&v130, &v108);
    v130 = clap_builder::builder::arg::Arg::default_missing_value(&v1);
    memcpy(&v1, &v130, 584);
    v38 = 128 | v131;
    v39 = v132;
    v130 = clap_builder::builder::arg::Arg::num_args(&v1, &v89);
    v222 = *(&v100 as &i128);
    v223 = *(&v102 as &i128);
    v224 = *(&v104 as &i128);
    *(&v114 as &i128) = *(&v106 as &i128);
    v112 = v224;
    v110 = v223;
    v108 = v222;
    v1 = clap_builder::builder::arg::Arg::overrides_with_all(&v130, &v108);
    v130 = clap_builder::builder::command::Command::arg(&v76, &v1);
    v76 = clap_builder::builder::arg::Arg::new("file-type");
    v1 = clap_builder::builder::arg::Arg::long(&v76, "file-type");
    v76 = clap_builder::builder::arg::Arg::help(&v1, "Same as --classify, but do not append '*'");
    v225 = *(&v100 as &i128);
    v226 = *(&v102 as &i128);
    v227 = *(&v104 as &i128);
    *(&v114 as &i128) = *(&v106 as &i128);
    v112 = v227;
    v110 = v226;
    v108 = v225;
    v1 = clap_builder::builder::arg::Arg::overrides_with_all(&v76, &v108);
    v108 = clap_builder::builder::arg::Arg::action(&v1, 0x2);
    v76 = clap_builder::builder::command::Command::arg(&v130, &v108);
    v130 = clap_builder::builder::arg::Arg::new("p");
    v1 = clap_builder::builder::arg::Arg::short(&v130, 0x70);
    v130 = clap_builder::builder::arg::Arg::help(&v1, "Append / indicator to directories.");
    v1 = clap_builder::builder::arg::Arg::overrides_with_all(&v130, &v100);
    v108 = clap_builder::builder::arg::Arg::action(&v1, 0x2);
    v130 = clap_builder::builder::command::Command::arg(&v76, &v108);
    v76 = clap_builder::builder::arg::Arg::new("time-style");
    v1 = clap_builder::builder::arg::Arg::long(&v76, "time-style");
    v76 = clap_builder::builder::arg::Arg::help(&v1, "time/date format with -l; see TIME_STYLE below");
    v1 = clap_builder::builder::arg::Arg::value_name(&v76, "TIME_STYLE");
    v76 = clap_builder::builder::arg::Arg::env(&v1, "TIME_STYLE");
    v1 = clap_builder::builder::arg::Arg::value_parser(&v76);
    v76 = struct16 {
        field_0: &anon.3f7e092f2ea554bdd060175bd8ea63d9.31.llvm.16502254941234113161
        field_8: 10
    };
    v108 = clap_builder::builder::arg::Arg::overrides_with_all(&v1, &v76);
    v76 = clap_builder::builder::command::Command::arg(&v130, &v108);
    v130 = clap_builder::builder::arg::Arg::new("full-time");
    v1 = clap_builder::builder::arg::Arg::long(&v130, "full-time");
    v130 = clap_builder::builder::arg::Arg::overrides_with(&v1, "full-time");
    v1 = clap_builder::builder::arg::Arg::help(&v130, "like -l --time-style=full-iso");
    v108 = clap_builder::builder::arg::Arg::action(&v1, 0x2);
    v130 = clap_builder::builder::command::Command::arg(&v76, &v108);
    v76 = clap_builder::builder::arg::Arg::new("context");
    v1 = clap_builder::builder::arg::Arg::short(&v76, 0x5a);
    v76 = clap_builder::builder::arg::Arg::long(&v1, "context");
    v1 = clap_builder::builder::arg::Arg::help(&v76, "print any security context of each file (not enabled)");
    v108 = clap_builder::builder::arg::Arg::action(&v1, 0x2);
    v76 = clap_builder::builder::command::Command::arg(&v130, &v108);
    v130 = clap_builder::builder::arg::Arg::new("group-directories-first");
    v1 = clap_builder::builder::arg::Arg::long(&v130, "group-directories-first");
    v130 = clap_builder::builder::arg::Arg::help(&v1, "group directories before files; can be augmented with a --sort option, but any use of --sort=none (-U) disables grouping");
    v1 = clap_builder::builder::arg::Arg::action(&v130, 0x2);
    v130 = clap_builder::builder::command::Command::arg(&v76, &v1);
    v76 = clap_builder::builder::arg::Arg::new("paths");
    v1 = clap_builder::builder::arg::Arg::action(&v76, 0x1);
    v76 = clap_builder::builder::arg::Arg::value_hint(&v1, 0x2);
    *(&v108.field_16 as &struct8) = struct8 {
        field_0: 2
    };
    v1 = clap_builder::builder::arg::Arg::value_parser(&v76, &v108);
    v76 = clap_builder::builder::command::Command::arg(&v130, &v1);
    clap_builder::builder::command::Command::after_help(a0, &v76, "The TIME_STYLE argument can be full-iso, long-iso, iso, locale or +FORMAT. FORMAT is interpreted like in date. Also the TIME_STYLE environment variable sets the default style to use.");
    return a0;
}
