fn uu_ls::uu_app(a0: &struct712) -> long long {
    let v0: u128;  // [bp-0xdc8]
    let v1: struct216;  // [bp-0xdb8], Other Possible Types: void*, u8
    let v2: u128;  // [bp-0xdb8]
    let v3: struct64;  // [bp-0xdb8]
    let v4: struct128;  // [bp-0xdb8]
    let v5: struct216;  // [bp-0xdb8]
    let v6: u64;  // [bp-0xdb0]
    let v7: void*;  // [bp-0xda8], Other Possible Types: u128
    let v8: u64;  // [bp-0xda0]
    let v9: u128;  // [bp-0xd98]
    let v10: u64;  // [bp-0xd88]
    let v11: u64;  // [bp-0xd80]
    let v12: u8;  // [bp-0xd78]
    let v13: u128;  // [bp-0xd70]
    let v14: u128;  // [bp-0xd60]
    let v15: u128;  // [bp-0xd50]
    let v16: u128;  // [bp-0xd40]
    let v17: u64;  // [bp-0xd30]
    let v18: u128;  // [bp-0xd28]
    let v19: u128;  // [bp-0xd18]
    let v20: u128;  // [bp-0xd08]
    let v21: u128;  // [bp-0xcf8]
    let v22: u64;  // [bp-0xce8]
    let v23: u128;  // [bp-0xce0]
    let v24: u128;  // [bp-0xcd0]
    let v25: u128;  // [bp-0xcc0]
    let v26: u128;  // [bp-0xcb0]
    let v27: u64;  // [bp-0xca0]
    let v28: u128;  // [bp-0xc98]
    let v29: u128;  // [bp-0xc88]
    let v30: u128;  // [bp-0xc78]
    let v31: u128;  // [bp-0xc68]
    let v32: u64;  // [bp-0xc58]
    let v33: u128;  // [bp-0xc50]
    let v34: u128;  // [bp-0xc40]
    let v35: u128;  // [bp-0xc30]
    let v36: u128;  // [bp-0xc20]
    let v37: u64;  // [bp-0xc10]
    let v38: void*;  // [bp-0xc08]
    let v39: u64;  // [bp-0xc00]
    let v40: void*;  // [bp-0xbf8]
    let v41: u64;  // [bp-0xbf0]
    let v42: u128;  // [bp-0xbe8]
    let v43: u64;  // [bp-0xbd8]
    let v44: u64;  // [bp-0xbd0]
    let v45: u8;  // [bp-0xbc8]
    let v46: u32;  // [bp-0xb70]
    let v47: u32;  // [bp-0xb6c]
    let v48: void*;  // [bp-0xb60], Other Possible Types: struct72
    let v49: struct72;  // [bp-0xb60]
    let v50: struct72;  // [bp-0xb60]
    let v51: struct72;  // [bp-0xb60]
    let v52: u64;  // [bp-0xb58]
    let v53: void*;  // [bp-0xb50]
    let v54: u64;  // [bp-0xb48]
    let v55: u128;  // [bp-0xb40]
    let v56: u64;  // [bp-0xb30]
    let v57: u64;  // [bp-0xb28]
    let v58: u8;  // [bp-0xb20]
    let v59: void*;  // [bp-0xb18], Other Possible Types: struct72
    let v60: struct72;  // [bp-0xb18]
    let v61: struct72;  // [bp-0xb18]
    let v62: struct72;  // [bp-0xb18]
    let v63: u64;  // [bp-0xb10]
    let v64: void*;  // [bp-0xb08]
    let v65: u64;  // [bp-0xb00]
    let v66: u128;  // [bp-0xaf8]
    let v67: u64;  // [bp-0xae8]
    let v68: u64;  // [bp-0xae0]
    let v69: u8;  // [bp-0xad8]
    let v70: void*;  // [bp-0xad0], Other Possible Types: struct72
    let v71: struct72;  // [bp-0xad0]
    let v72: struct72;  // [bp-0xad0]
    let v73: u64;  // [bp-0xac8]
    let v74: void*;  // [bp-0xac0]
    let v75: u64;  // [bp-0xab8]
    let v76: u128;  // [bp-0xab0]
    let v77: u64;  // [bp-0xaa0]
    let v78: u64;  // [bp-0xa98]
    let v79: u8;  // [bp-0xa90]
    let v80: u64;  // [bp-0xa88]
    let v81: u64;  // [bp-0xa80]
    let v82: u64;  // [bp-0xa78]
    let v83: u64;  // [bp-0xa70]
    let v84: u64;  // [bp-0xa68]
    let v85: u64;  // [bp-0xa60]
    let v86: u64;  // [bp-0xa58]
    let v87: u64;  // [bp-0xa50]
    let v88: u64;  // [bp-0xa48]
    let v89: u64;  // [bp-0xa40]
    let v90: u64;  // [bp-0xa38]
    let v91: u64;  // [bp-0xa30]
    let v92: struct216;  // [bp-0xa28], Other Possible Types: struct16, void*, u128
    let v94: u128;  // [bp-0xa28]
    let v95: u64;  // [bp-0xa20]
    let v96: void*;  // [bp-0xa18], Other Possible Types: u64
    let v97: u64;  // [bp-0xa10]
    let v98: u64;  // [bp-0xa08]
    let v99: u128;  // [bp-0xa08]
    let v100: u128;  // [bp-0xa08]
    let v101: u64;  // [bp-0xa00]
    let v102: u64;  // [bp-0x9f8]
    let v103: u64;  // [bp-0x9f0]
    let v104: u64;  // [bp-0x9e8]
    let v105: u64;  // [bp-0x9e0]
    let v106: u64;  // [bp-0x9d8]
    let v107: u64;  // [bp-0x9d0]
    let v108: u32;  // [bp-0x7e0]
    let v109: i8;  // [bp-0x7dc]
    let v110: u64;  // [bp-0x76c]
    let v111: u32;  // [bp-0x764]
    let v112: struct24;  // [bp-0x760]
    let v113: void*;  // [bp-0x760]
    let v114: u64;  // [bp-0x758]
    let v115: u8;  // [bp-0x750]
    let v116: u64;  // [bp-0x748]
    let v117: u64;  // [bp-0x740]
    let v118: u64;  // [bp-0x738]
    let v119: u64;  // [bp-0x730]
    let v120: u64;  // [bp-0x728]
    let v121: u64;  // [bp-0x720]
    let v122: u64;  // [bp-0x718]
    let v123: u64;  // [bp-0x710]
    let v124: u64;  // [bp-0x708]
    let v125: u64;  // [bp-0x700]
    let v126: u64;  // [bp-0x6f8]
    let v127: u64;  // [bp-0x6f0]
    let v128: u64;  // [bp-0x6e8]
    let v129: u64;  // [bp-0x6e0]
    let v130: u64;  // [bp-0x6d8]
    let v131: u64;  // [bp-0x6d0]
    let v132: struct32;  // [bp-0x6c8], Other Possible Types: struct24, struct72, u128
    let v133: struct72;  // [bp-0x6c8]
    let v134: struct24;  // [bp-0x6c8], Other Possible Types: u128
    let v135: u128;  // [bp-0x6c8]
    let v136: struct72;  // [bp-0x6c8]
    let v137: u128;  // [bp-0x6c8]
    let v138: u128;  // [bp-0x6c8]
    let v139: u128;  // [bp-0x6c8]
    let v140: struct72;  // [bp-0x6c8]
    let v142: u64;  // [bp-0x6c0]
    let v143: u64;  // [bp-0x6b8]
    let v144: u128;  // [bp-0x6b8]
    let v145: u128;  // [bp-0x6b8]
    let v146: u128;  // [bp-0x6b8]
    let v147: u128;  // [bp-0x6b8]
    let v148: u64;  // [bp-0x6b0]
    let v149: struct40;  // [bp-0x6a8], Other Possible Types: u128
    let v150: u128;  // [bp-0x6a8]
    let v151: u128;  // [bp-0x6a8]
    let v152: u128;  // [bp-0x6a8]
    let v153: u128;  // [bp-0x6a8]
    let v154: u64;  // [bp-0x6a8]
    let v155: u128;  // [bp-0x6a8]
    let v156: u64;  // [bp-0x6a0]
    let v157: u128;  // [bp-0x698]
    let v158: u128;  // [bp-0x698]
    let v159: u128;  // [bp-0x698]
    let v160: u128;  // [bp-0x698]
    let v161: u64;  // [bp-0x698]
    let v162: u128;  // [bp-0x698]
    let v163: u128;  // [bp-0x698]
    let v164: u64;  // [bp-0x690]
    let v165: u128;  // [bp-0x688]
    let v166: u128;  // [bp-0x688]
    let v167: u128;  // [bp-0x688]
    let v168: u64;  // [bp-0x688]
    let v169: u128;  // [bp-0x688]
    let v170: u64;  // [bp-0x680]
    let v171: u64;  // [bp-0x678]
    let v172: u128;  // [bp-0x678]
    let v173: u128;  // [bp-0x678]
    let v174: u128;  // [bp-0x678]
    let v175: u64;  // [bp-0x670]
    let v176: u64;  // [bp-0x478]
    let v177: u64;  // [bp-0x470]
    let v178: u64;  // [bp-0x468]
    let v179: u64;  // [bp-0x460]
    let v180: u64;  // [bp-0x458]
    let v181: u64;  // [bp-0x450]
    let v182: u64;  // [bp-0x448]
    let v183: u64;  // [bp-0x440]
    let v184: u64;  // [bp-0x438]
    let v185: u64;  // [bp-0x430]
    let v186: struct437;  // [bp-0x428]
    let v187: u32;  // [bp-0x1e0]
    let v188: u32;  // [bp-0x1dc]
    let v189: u64;  // [bp-0x16c]
    let v190: u32;  // [bp-0x164]
    let v191: u64;  // [bp-0x160]
    let v192: u64;  // [bp-0x158]
    let v193: u64;  // [bp-0x150]
    let v194: u64;  // [bp-0x148]
    let v195: u64;  // [bp-0x140]
    let v196: u64;  // [bp-0x138]
    let v197: u64;  // [bp-0x130]
    let v198: u64;  // [bp-0x128]
    let v199: u64;  // [bp-0x120]
    let v200: u64;  // [bp-0x118]
    let v201: u64;  // [bp-0x110]
    let v202: u64;  // [bp-0x108]
    let v203: u64;  // [bp-0x100]
    let v204: u64;  // [bp-0xf8]
    let v205: u64;  // [bp-0xf0]
    let v206: u64;  // [bp-0xe8]
    let v207: u64;  // [bp-0xe0]
    let v208: u64;  // [bp-0xd8]
    let v209: u64;  // [bp-0xd0]
    let v210: u64;  // [bp-0xc8]
    let v211: void*;  // [bp-0xc0]
    let v212: u64;  // [bp-0xb8]
    let v213: void*;  // [bp-0xb0]
    let v214: u64;  // [bp-0xa8]
    let v215: u128;  // [bp-0xa0]
    let v216: u64;  // [bp-0x90]
    let v217: u64;  // [bp-0x88]
    let v218: u8;  // [bp-0x80]
    let v219: void*;  // [bp-0x78]
    let v220: u64;  // [bp-0x70]
    let v221: void*;  // [bp-0x68]
    let v222: u64;  // [bp-0x60]
    let v223: u128;  // [bp-0x58]
    let v224: u64;  // [bp-0x48]
    let v225: u64;  // [bp-0x40]
    let v226: u8;  // [bp-0x38]
    let v229: u64;  // rdx
    let v230: u128;  // xmm0
    let v231: u128;  // xmm1
    let v232: u128;  // xmm2
    let v233: u128;  // xmm0
    let v234: u128;  // xmm1
    let v235: struct40;  // xmm2
    let v236: struct24;  // xmm1
    let v237: struct24;  // xmm3
    let v238: struct24;  // xmm1
    let v239: u128;  // xmm3
    let v240: u128;  // xmm1
    let v241: u128;  // xmm3
    let v242: u128;  // xmm1
    let v243: u128;  // xmm3
    let v244: u128;  // xmm0
    let v245: u128;  // xmm1
    let v246: u128;  // xmm2
    let v247: u128;  // xmm0
    let v248: u128;  // xmm1
    let v249: u128;  // xmm2
    let v250: u128;  // xmm1
    let v251: u128;  // xmm3
    let v252: u128;  // xmm1
    let v253: u128;  // xmm3
    let v254: u128;  // xmm0
    let v255: u128;  // xmm1
    let v256: u128;  // xmm0
    let v257: u128;  // xmm1
    let v258: u128;  // xmm2
    let v259: u128;  // xmm0
    let v260: u128;  // xmm1
    let v261: u128;  // xmm2
    let v262: u128;  // xmm0
    let v263: u128;  // xmm1
    let v264: u128;  // xmm2
    let v265: u128;  // xmm0
    let v266: u128;  // xmm1
    let v267: u128;  // xmm2
    let v268: u128;  // xmm0
    let v269: u128;  // xmm1
    let v270: u128;  // xmm1
    let v271: u128;  // xmm3
    let v272: u128;  // xmm1
    let v273: u128;  // xmm3
    let v274: u128;  // xmm1
    let v275: u128;  // xmm3
    let v276: u128;  // xmm1
    let v277: u128;  // xmm3
    let v278: u128;  // xmm0
    let v279: u128;  // xmm1
    let v280: u128;  // xmm2
    let v281: u128;  // xmm0
    let v282: u128;  // xmm1
    let v283: u128;  // xmm2

    v186 = clap_builder::builder::command::Command::new(uucore::util_name(), v229);
    clap_builder::builder::command::Command::version(&v92, &v186, "0.0.28");
    uucore::format_usage(&v1, "{} [OPTION]... [FILE]...");
    clap_builder::builder::command::Command::override_usage(&v186, &v92, &v1);
    clap_builder::builder::command::Command::about(&v92, &v186, "List directory contents.\nIgnore files and directories starting with a '.' by default");
    memcpy(&v186, &v92, 700);
    v189 = 1126484022657160 | v110;
    v190 = v111;
    clap_builder::builder::arg::Arg::new(&v92, "help");
    clap_builder::builder::arg::Arg::long(&v1, &v92, "help");
    clap_builder::builder::arg::Arg::help(&v92, &v1, "Print help information.");
    clap_builder::builder::arg::Arg::action(&v1, &v92, 5);
    clap_builder::builder::command::Command::arg(&v92, &v186, &v1);
    clap_builder::builder::arg::Arg::new(&v186, "format");
    clap_builder::builder::arg::Arg::long(&v1, &v186, "format");
    clap_builder::builder::arg::Arg::help(&v186, &v1, "Set the display format.");
    v4 = struct128 {
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
    v132 = <uucore::parser::shortcut_value_parser::ShortcutValueParser as core::convert::From<I>>::from(&v4);
    clap_builder::builder::arg::Arg::value_parser(&v4, &v186, &v132);
    memcpy(&v186, &v4, 584);
    v187 = 144 | v46;
    v188 = v47;
    v135 = &anon.3f7e092f2ea554bdd060175bd8ea63d9.20.llvm.16502254941234113161;
    v142 = 6;
    v143 = &anon.8bf1419b86641518549345aedc57e906.2.llvm.11260003342554782039;
    v148 = 1;
    v149 = &anon.8bf1419b86641518549345aedc57e906.1.llvm.11260003342554782039;
    v156 = 4;
    v157 = &anon.8bf1419b86641518549345aedc57e906.3.llvm.11260003342554782039;
    v164 = 1;
    v165 = &anon.8bf1419b86641518549345aedc57e906.2.llvm.11260003342554782039;
    v170 = 1;
    v171 = &anon.3f7e092f2ea554bdd060175bd8ea63d9.38.llvm.16502254941234113161;
    v175 = 5;
    clap_builder::builder::arg::Arg::overrides_with_all(&v4, &v186, &v135);
    clap_builder::builder::command::Command::arg(&v186, &v92, &v4);
    clap_builder::builder::arg::Arg::new(&v92, "C");
    clap_builder::builder::arg::Arg::short(&v4, &v92, 67);
    clap_builder::builder::arg::Arg::help(&v92, &v4, "Display the files in columns.");
    v176 = &anon.3f7e092f2ea554bdd060175bd8ea63d9.20.llvm.16502254941234113161;
    v177 = 6;
    v178 = &anon.8bf1419b86641518549345aedc57e906.2.llvm.11260003342554782039;
    v179 = 1;
    v180 = &anon.8bf1419b86641518549345aedc57e906.1.llvm.11260003342554782039;
    v181 = 4;
    v182 = &anon.8bf1419b86641518549345aedc57e906.3.llvm.11260003342554782039;
    v183 = 1;
    v184 = &anon.8bf1419b86641518549345aedc57e906.2.llvm.11260003342554782039;
    v185 = 1;
    v168 = v184;
    v170 = 1;
    v161 = v182;
    v164 = 1;
    v154 = v180;
    v156 = 4;
    v145 = *(&v178 as &i128);
    v135 = *(&v176 as &i128);
    clap_builder::builder::arg::Arg::overrides_with_all(&v4, &v92, &v135);
    clap_builder::builder::arg::Arg::action(&v135, &v4, 2);
    clap_builder::builder::command::Command::arg(&v92, &v186, &v135);
    clap_builder::builder::arg::Arg::new(&v186, "long");
    clap_builder::builder::arg::Arg::short(&v4, &v186, 108);
    clap_builder::builder::arg::Arg::long(&v186, &v4, "long");
    clap_builder::builder::arg::Arg::help(&v4, &v186, "Display detailed information.");
    v169 = *(&v184 as &i128);
    v230 = *(&v176 as &i128);
    v231 = *(&v178 as &i128);
    v232 = *(&v180 as &i128);
    v163 = *(&v182 as &i128);
    v155 = v232;
    v146 = v231;
    v137 = v230;
    clap_builder::builder::arg::Arg::overrides_with_all(&v186, &v4, &v135);
    clap_builder::builder::arg::Arg::action(&v4, &v186, 2);
    clap_builder::builder::command::Command::arg(&v186, &v92, &v4);
    clap_builder::builder::arg::Arg::new(&v92, "x");
    clap_builder::builder::arg::Arg::short(&v4, &v92, 120);
    clap_builder::builder::arg::Arg::help(&v92, &v4, "List entries in rows instead of in columns.");
    v165 = *(&v184 as &i128);
    v233 = *(&v176 as &i128);
    v234 = *(&v178 as &i128);
    v235 = *(&v180 as &i128);
    v157 = *(&v182 as &i128);
    v149 = v235;
    v143 = v234;
    v138 = v233;
    clap_builder::builder::arg::Arg::overrides_with_all(&v4, &v92, &v135);
    clap_builder::builder::arg::Arg::action(&v135, &v4, 2);
    clap_builder::builder::command::Command::arg(&v92, &v186, &v135);
    clap_builder::builder::arg::Arg::new(&v186, "tabsize");
    clap_builder::builder::arg::Arg::short(&v4, &v186, 84);
    clap_builder::builder::arg::Arg::long(&v186, &v4, "tabsize");
    clap_builder::builder::arg::Arg::env(&v4, &v186, "TABSIZE");
    clap_builder::builder::arg::Arg::value_name(&v186, &v4, "COLS");
    clap_builder::builder::arg::Arg::help(&v4, &v186, "Assume tab stops at each COLS instead of 8 (unimplemented)");
    clap_builder::builder::command::Command::arg(&v186, &v92, &v4);
    clap_builder::builder::arg::Arg::new(&v92, "m");
    clap_builder::builder::arg::Arg::short(&v4, &v92, 109);
    clap_builder::builder::arg::Arg::help(&v92, &v4, "List entries separated by commas.");
    clap_builder::builder::arg::Arg::overrides_with_all(&v4, &v92, &v176);
    clap_builder::builder::arg::Arg::action(&v135, &v4, 2);
    clap_builder::builder::command::Command::arg(&v92, &v186, &v135);
    clap_builder::builder::arg::Arg::new(&v186, "zero");
    clap_builder::builder::arg::Arg::long(&v4, &v186, "zero");
    clap_builder::builder::arg::Arg::overrides_with(&v186, &v4, "zero");
    clap_builder::builder::arg::Arg::help(&v4, &v186, "List entries separated by ASCII NUL characters.");
    clap_builder::builder::arg::Arg::action(&v135, &v4, 2);
    clap_builder::builder::command::Command::arg(&v186, &v92, &v135);
    clap_builder::builder::arg::Arg::new(&v92, "dired");
    clap_builder::builder::arg::Arg::long(&v4, &v92, "dired");
    clap_builder::builder::arg::Arg::short(&v92, &v4, 68);
    clap_builder::builder::arg::Arg::help(&v4, &v92, "generate output designed for Emacs' dired (Directory Editor) mode");
    clap_builder::builder::arg::Arg::action(&v92, &v4, 2);
    clap_builder::builder::arg::Arg::overrides_with(&v4, &v92, "hyperlink");
    clap_builder::builder::command::Command::arg(&v92, &v186, &v4);
    clap_builder::builder::arg::Arg::new(&v186, "hyperlink");
    clap_builder::builder::arg::Arg::long(&v4, &v186, "hyperlink");
    clap_builder::builder::arg::Arg::help(&v186, &v4, "hyperlink file names WHEN");
    v10 = &g_434cef;
    v11 = 6;
    v8 = 0x8000000000000000;
    v9 = v0;
    v1 = 0;
    v6 = 8;
    v7 = 0;
    v12 = 0;
    v132 = clap_builder::builder::possible_value::PossibleValue::alias(&v1, "yes");
    v70 = clap_builder::builder::possible_value::PossibleValue::alias(&v132, "force");
    v10 = &g_423f34;
    v11 = 4;
    v8 = 0x8000000000000000;
    v9 = v0;
    v1 = 0;
    v6 = 8;
    v7 = 0;
    v12 = 0;
    v132 = clap_builder::builder::possible_value::PossibleValue::alias(&v1, "tty");
    v48 = clap_builder::builder::possible_value::PossibleValue::alias(&v132, "if-tty");
    v10 = &g_434d06;
    v11 = 5;
    v8 = 0x8000000000000000;
    v9 = v0;
    v1 = 0;
    v6 = 8;
    v7 = 0;
    v12 = 0;
    v132 = clap_builder::builder::possible_value::PossibleValue::alias(&v1, "no");
    v59 = clap_builder::builder::possible_value::PossibleValue::alias(&v132, "none");
    v236 = *(&v70.field_16 as &i128);
    v237 = v70.field_48;
    v238 = *(&v48.field_16 as &i128);
    v239 = v48.field_48;
    v5 = struct216 {
        field_0: v70.field_0
        field_16: v236
        field_32: v76
        field_48: v237
        field_64: v70.field_64
        field_72: v48.field_0
        field_88: v238
        field_104: v55
        field_120: v239
        field_136: v48.field_64
        field_144: v59.field_0
        field_160: *(&v59.field_16 as &i128)
        field_176: v66
        field_192: v59.field_48
        field_208: v59.field_64
    };
    v132 = <uucore::parser::shortcut_value_parser::ShortcutValueParser as core::convert::From<I>>::from(&v5);
    clap_builder::builder::arg::Arg::value_parser(&v5, &v186, &v132);
    memcpy(&v186, &v5, 584);
    v187 = 128 | v46;
    v188 = v47;
    v113 = 0;
    v114 = 1;
    v115 = 0;
    v132 = struct24 {
        field_0: v113
        field_8: 1
        field_16: *(&v115 as &i64)
    };
    clap_builder::builder::arg::Arg::num_args(&v5, &v186, &v132);
    clap_builder::builder::arg::Arg::default_missing_value(&v186, &v5);
    clap_builder::builder::arg::Arg::default_value(&v5, &v186);
    clap_builder::builder::arg::Arg::value_name(&v186, &v5, "WHEN");
    clap_builder::builder::arg::Arg::overrides_with(&v5, &v186, "dired");
    clap_builder::builder::command::Command::arg(&v186, &v92, &v5);
    clap_builder::builder::arg::Arg::new(&v92, "1");
    clap_builder::builder::arg::Arg::short(&v5, &v92, 49);
    clap_builder::builder::arg::Arg::help(&v92, &v5, "List one file per line.");
    clap_builder::builder::arg::Arg::action(&v5, &v92, 2);
    clap_builder::builder::command::Command::arg(&v92, &v186, &v5);
    clap_builder::builder::arg::Arg::new(&v186, "o");
    clap_builder::builder::arg::Arg::short(&v5, &v186, 111);
    clap_builder::builder::arg::Arg::help(&v186, &v5, "Long format without group information. Identical to --format=long with --no-group.");
    clap_builder::builder::arg::Arg::action(&v5, &v186, 2);
    clap_builder::builder::command::Command::arg(&v186, &v92, &v5);
    clap_builder::builder::arg::Arg::new(&v92, "g");
    clap_builder::builder::arg::Arg::short(&v5, &v92, 103);
    clap_builder::builder::arg::Arg::help(&v92, &v5, "Long format without owner information.");
    clap_builder::builder::arg::Arg::action(&v5, &v92, 2);
    clap_builder::builder::command::Command::arg(&v92, &v186, &v5);
    clap_builder::builder::arg::Arg::new(&v186, "numeric-uid-gid");
    clap_builder::builder::arg::Arg::short(&v5, &v186, 110);
    clap_builder::builder::arg::Arg::long(&v186, &v5, "numeric-uid-gid");
    clap_builder::builder::arg::Arg::help(&v5, &v186, "-l with numeric UIDs and GIDs.");
    clap_builder::builder::arg::Arg::action(&v132, &v5, 2);
    clap_builder::builder::command::Command::arg(&v186, &v92, &v132);
    clap_builder::builder::arg::Arg::new(&v92, "quoting-style");
    clap_builder::builder::arg::Arg::long(&v5, &v92, "quoting-style");
    clap_builder::builder::arg::Arg::help(&v92, &v5, "Set quoting style.");
    v216 = &g_434d50;
    v217 = 7;
    v214 = 0x8000000000000000;
    v215 = v0;
    v211 = 0;
    v212 = 8;
    v213 = 0;
    v218 = 0;
    v224 = &g_434d57;
    v225 = 5;
    v222 = 0x8000000000000000;
    v223 = v215;
    v219 = 0;
    v220 = 8;
    v221 = 0;
    v226 = 0;
    v77 = &g_434d68;
    v78 = 12;
    v75 = 0x8000000000000000;
    v76 = v0;
    v70 = 0;
    v73 = 8;
    v74 = 0;
    v79 = 0;
    v56 = &g_434d5c;
    v57 = 12;
    v54 = 0x8000000000000000;
    v55 = v0;
    v48 = 0;
    v52 = 8;
    v53 = 0;
    v58 = 0;
    v67 = &g_434d74;
    v68 = 19;
    v65 = 0x8000000000000000;
    v66 = v0;
    v59 = 0;
    v63 = 8;
    v64 = 0;
    v69 = 0;
    v10 = &g_434d87;
    v11 = 1;
    v8 = 0x8000000000000000;
    v9 = v0;
    v2 = 0;
    v6 = 8;
    v7 = 0;
    v12 = 0;
    v133 = clap_builder::builder::possible_value::PossibleValue::alias(&v2, "c-maybe");
    v42 = v0;
    v240 = *(&v213 as &i128);
    v241 = *(&v216 as &i128);
    v2 = *(&v211 as &i128);
    v7 = v240;
    v9 = v215;
    v10 = v241;
    v12 = *(&v218 as &i64);
    v242 = *(&v221 as &i128);
    v243 = *(&v224 as &i128);
    v13 = *(&v219 as &i128);
    v14 = v242;
    v15 = v223;
    v16 = v243;
    v17 = *(&v226 as &i64);
    v22 = v70.field_64;
    v21 = *(&v77 as &i128);
    v20 = v76;
    v19 = *(&v74 as &i128);
    v18 = *(&v70 as &i128);
    v27 = v48.field_64;
    v26 = *(&v56 as &i128);
    v25 = v55;
    v24 = *(&v53 as &i128);
    v23 = *(&v48 as &i128);
    v32 = v59.field_64;
    v31 = *(&v67 as &i128);
    v30 = v66;
    v29 = *(&v64 as &i128);
    v28 = *(&v59 as &i128);
    v37 = v168;
    v36 = v133.field_48;
    v35 = v133.field_32;
    v34 = *(&v133.field_16 as &i128);
    v33 = v133.field_0;
    v38 = 0;
    v39 = 8;
    v40 = 0;
    v41 = 0x8000000000000000;
    v43 = &g_434d88;
    v44 = 6;
    v45 = 0;
    v134 = <uucore::parser::shortcut_value_parser::ShortcutValueParser as core::convert::From<I>>::from(&v2);
    clap_builder::builder::arg::Arg::value_parser(&v2, &v92, &v134);
    v116 = &anon.3f7e092f2ea554bdd060175bd8ea63d9.14.llvm.16502254941234113161;
    v117 = 13;
    v118 = &anon.9938bf1084d6f67f99da587aeb78cfa9.29.llvm.7263189302602752264;
    v119 = 7;
    v120 = &anon.9938bf1084d6f67f99da587aeb78cfa9.28.llvm.7263189302602752264;
    v121 = 6;
    v122 = &anon.9938bf1084d6f67f99da587aeb78cfa9.30.llvm.7263189302602752264;
    v123 = 10;
    v102 = v122;
    v103 = 10;
    v98 = v120;
    v101 = 6;
    v96 = v118;
    v97 = 7;
    v92 = *(&v116 as &i128);
    clap_builder::builder::arg::Arg::overrides_with_all(&v134, &v2, &v92);
    clap_builder::builder::command::Command::arg(&v92, &v186, &v134);
    clap_builder::builder::arg::Arg::new(&v186, "literal");
    clap_builder::builder::arg::Arg::short(&v2, &v186, 78);
    clap_builder::builder::arg::Arg::long(&v186, &v2, "literal");
    clap_builder::builder::arg::Arg::alias(&v2, &v186, "l");
    clap_builder::builder::arg::Arg::help(&v186, &v2, "Use literal quoting style. Equivalent to `--quoting-style=literal`");
    v244 = *(&v116 as &i128);
    v245 = *(&v118 as &i128);
    v246 = *(&v120 as &i128);
    v157 = *(&v122 as &i128);
    v149 = v246;
    v144 = v245;
    v132 = v244;
    clap_builder::builder::arg::Arg::overrides_with_all(&v2, &v186, &v134);
    clap_builder::builder::arg::Arg::action(&v134, &v2, 2);
    clap_builder::builder::command::Command::arg(&v186, &v92, &v134);
    clap_builder::builder::arg::Arg::new(&v92, "escape");
    clap_builder::builder::arg::Arg::short(&v2, &v92, 98);
    clap_builder::builder::arg::Arg::long(&v92, &v2, "escape");
    clap_builder::builder::arg::Arg::help(&v2, &v92, "Use escape quoting style. Equivalent to `--quoting-style=escape`");
    v247 = *(&v116 as &i128);
    v248 = *(&v118 as &i128);
    v249 = *(&v120 as &i128);
    v157 = *(&v122 as &i128);
    v149 = v249;
    v143 = v248;
    v135 = v247;
    clap_builder::builder::arg::Arg::overrides_with_all(&v92, &v2, &v134);
    clap_builder::builder::arg::Arg::action(&v2, &v92, 2);
    clap_builder::builder::command::Command::arg(&v92, &v186, &v2);
    clap_builder::builder::arg::Arg::new(&v186, "quote-name");
    clap_builder::builder::arg::Arg::short(&v2, &v186, 81);
    clap_builder::builder::arg::Arg::long(&v186, &v2, "quote-name");
    clap_builder::builder::arg::Arg::help(&v2, &v186, "Use C quoting style. Equivalent to `--quoting-style=c`");
    clap_builder::builder::arg::Arg::overrides_with_all(&v186, &v2, &v116);
    clap_builder::builder::arg::Arg::action(&v2, &v186, 2);
    clap_builder::builder::command::Command::arg(&v186, &v92, &v2);
    clap_builder::builder::arg::Arg::new(&v92, "hide-control-chars");
    clap_builder::builder::arg::Arg::short(&v2, &v92, 113);
    clap_builder::builder::arg::Arg::long(&v92, &v2, "hide-control-chars");
    clap_builder::builder::arg::Arg::help(&v2, &v92, "Replace control characters with '?' if they are not escaped.");
    v203 = &anon.3f7e092f2ea554bdd060175bd8ea63d9.15.llvm.16502254941234113161;
    v204 = 18;
    v205 = &anon.3f7e092f2ea554bdd060175bd8ea63d9.16.llvm.16502254941234113161;
    v206 = 18;
    v143 = &anon.3f7e092f2ea554bdd060175bd8ea63d9.16.llvm.16502254941234113161;
    v148 = 18;
    v132 = v203;
    v142 = 18;
    clap_builder::builder::arg::Arg::overrides_with_all(&v92, &v2, &v132);
    clap_builder::builder::arg::Arg::action(&v2, &v92, 2);
    clap_builder::builder::command::Command::arg(&v92, &v186, &v2);
    clap_builder::builder::arg::Arg::new(&v186, "show-control-chars");
    clap_builder::builder::arg::Arg::long(&v2, &v186, "show-control-chars");
    clap_builder::builder::arg::Arg::help(&v186, &v2, "Show control characters 'as is' if they are not escaped.");
    clap_builder::builder::arg::Arg::overrides_with_all(&v2, &v186, &v203);
    clap_builder::builder::arg::Arg::action(&v132, &v2, 2);
    clap_builder::builder::command::Command::arg(&v186, &v92, &v132);
    clap_builder::builder::arg::Arg::new(&v92, "time");
    clap_builder::builder::arg::Arg::long(&v2, &v92, "time");
    clap_builder::builder::arg::Arg::help(&v92, &v2, "Show time in <field>:\n\taccess time (-u): atime, access, use;\n\tchange time (-t): ctime, status.\n\tbirth time: birth, creation;");
    clap_builder::builder::arg::Arg::value_name(&v2, &v92, "field");
    v102 = &g_434c97;
    v103 = 5;
    v97 = 0x8000000000000000;
    v99 = v0;
    v92 = 0;
    v95 = 8;
    v96 = 0;
    v104 = 0;
    v132 = clap_builder::builder::possible_value::PossibleValue::alias(&v92, "access");
    v49 = clap_builder::builder::possible_value::PossibleValue::alias(&v132, "use");
    v102 = &g_434c86;
    v103 = 5;
    v97 = 0x8000000000000000;
    v100 = v0;
    v92 = 0;
    v95 = 8;
    v96 = 0;
    v104 = 0;
    v60 = clap_builder::builder::possible_value::PossibleValue::alias(&v92, "status");
    v102 = &g_434c9f;
    v103 = 5;
    v97 = 0x8000000000000000;
    v98 = v0;
    v92 = 0;
    v95 = 8;
    v96 = 0;
    v104 = 0;
    v136 = clap_builder::builder::possible_value::PossibleValue::alias(&v92, "creation");
    v250 = *(&v49.field_16 as &i128);
    v251 = v49.field_48;
    v252 = *(&v60.field_16 as &i128);
    v253 = v60.field_48;
    v92 = struct216 {
        field_0: v49.field_0
        field_16: v250
        field_32: v55
        field_48: v251
        field_64: v49.field_64
        field_72: v60.field_0
        field_88: v252
        field_104: v66
        field_120: v253
        field_136: v60.field_64
        field_144: v136.field_0
        field_160: *(&v136.field_16 as &i128)
        field_176: v136.field_32
        field_192: v136.field_48
        field_208: v168
    };
    v134 = <uucore::parser::shortcut_value_parser::ShortcutValueParser as core::convert::From<I>>::from(&v92);
    clap_builder::builder::arg::Arg::value_parser(&v92, &v2, &v134);
    memcpy(&v2, &v92, 584);
    v46 = 144 | v108;
    v47 = *(&v109 as &i32);
    v191 = &anon.3f7e092f2ea554bdd060175bd8ea63d9.22.llvm.16502254941234113161;
    v192 = 4;
    v193 = &anon.8bf1419b86641518549345aedc57e906.9.llvm.11260003342554782039;
    v194 = 1;
    v195 = &anon.8bf1419b86641518549345aedc57e906.10.llvm.11260003342554782039;
    v196 = 1;
    v98 = v195;
    v101 = 1;
    v96 = v193;
    v97 = 1;
    v92 = v191;
    v95 = 4;
    clap_builder::builder::arg::Arg::overrides_with_all(&v134, &v2, &v92);
    clap_builder::builder::command::Command::arg(&v92, &v186, &v134);
    clap_builder::builder::arg::Arg::new(&v186, "c");
    clap_builder::builder::arg::Arg::short(&v2, &v186, 99);
    clap_builder::builder::arg::Arg::help(&v186, &v2, "If the long listing format (e.g., -l, -o) is being used, print the status change time (the 'ctime' in the inode) instead of the modification time. When explicitly sorting by time (--sort=time or -t) or when not using a long listing format, sort according to the status change time.");
    v254 = *(&v191 as &i128);
    v255 = *(&v193 as &i128);
    v150 = *(&v195 as &i128);
    v143 = v255;
    v132 = v254;
    clap_builder::builder::arg::Arg::overrides_with_all(&v2, &v186, &v134);
    clap_builder::builder::arg::Arg::action(&v134, &v2, 2);
    clap_builder::builder::command::Command::arg(&v186, &v92, &v134);
    clap_builder::builder::arg::Arg::new(&v92, "u");
    clap_builder::builder::arg::Arg::short(&v2, &v92, 117);
    clap_builder::builder::arg::Arg::help(&v92, &v2, "If the long listing format (e.g., -l, -o) is being used, print the status access time instead of the modification time. When explicitly sorting by time (--sort=time or -t) or when not using a long listing format, sort according to the access time.");
    clap_builder::builder::arg::Arg::overrides_with_all(&v2, &v92, &v191);
    clap_builder::builder::arg::Arg::action(&v134, &v2, 2);
    clap_builder::builder::command::Command::arg(&v92, &v186, &v134);
    clap_builder::builder::arg::Arg::new(&v186, "hide");
    clap_builder::builder::arg::Arg::long(&v2, &v186, "hide");
    clap_builder::builder::arg::Arg::action(&v186, &v2, 1);
    clap_builder::builder::arg::Arg::value_name(&v2, &v186, "PATTERN");
    clap_builder::builder::arg::Arg::help(&v134, &v2, "do not list implied entries matching shell PATTERN (overridden by -a or -A)");
    clap_builder::builder::command::Command::arg(&v186, &v92, &v134);
    clap_builder::builder::arg::Arg::new(&v92, "ignore");
    clap_builder::builder::arg::Arg::short(&v2, &v92, 73);
    clap_builder::builder::arg::Arg::long(&v92, &v2, "ignore");
    clap_builder::builder::arg::Arg::action(&v2, &v92, 1);
    clap_builder::builder::arg::Arg::value_name(&v92, &v2, "PATTERN");
    clap_builder::builder::arg::Arg::help(&v2, &v92, "do not list implied entries matching shell PATTERN");
    clap_builder::builder::command::Command::arg(&v92, &v186, &v2);
    clap_builder::builder::arg::Arg::new(&v186, "ignore-backups");
    clap_builder::builder::arg::Arg::short(&v2, &v186, 66);
    clap_builder::builder::arg::Arg::long(&v186, &v2, "ignore-backups");
    clap_builder::builder::arg::Arg::help(&v2, &v186, "Ignore entries which end with ~.");
    clap_builder::builder::arg::Arg::action(&v134, &v2, 2);
    clap_builder::builder::command::Command::arg(&v186, &v92, &v134);
    clap_builder::builder::arg::Arg::new(&v92, "sort");
    clap_builder::builder::arg::Arg::long(&v2, &v92, "sort");
    clap_builder::builder::arg::Arg::help(&v92, &v2, "Sort by <field>: name, none (-U), time (-t), size (-S), extension (-X) or width");
    clap_builder::builder::arg::Arg::value_name(&v2, &v92, "field");
    v94 = struct112 {
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
    v139 = <uucore::parser::shortcut_value_parser::ShortcutValueParser as core::convert::From<I>>::from(&v94);
    clap_builder::builder::arg::Arg::value_parser(&v94, &v2, &v139);
    memcpy(&v2, &v94, 584);
    v46 = 128 | v108;
    v47 = *(&v109 as &i32);
    v80 = &anon.3f7e092f2ea554bdd060175bd8ea63d9.21.llvm.16502254941234113161;
    v81 = 4;
    v82 = &anon.f45a42eab3604eaa40558bbeffd2bfb7.11.llvm.10979288589332586409;
    v83 = 1;
    v84 = &anon.f45a42eab3604eaa40558bbeffd2bfb7.12.llvm.10979288589332586409;
    v85 = 1;
    v86 = &anon.f45a42eab3604eaa40558bbeffd2bfb7.13.llvm.10979288589332586409;
    v87 = 1;
    v88 = &anon.f45a42eab3604eaa40558bbeffd2bfb7.14.llvm.10979288589332586409;
    v89 = 1;
    v90 = &anon.f45a42eab3604eaa40558bbeffd2bfb7.15.llvm.10979288589332586409;
    v91 = 1;
    v106 = v90;
    v107 = 1;
    v104 = v88;
    v105 = 1;
    v102 = v86;
    v103 = 1;
    v98 = *(&v84 as &i128);
    v96 = *(&v82 as &i128);
    v92 = *(&v80 as &i128);
    clap_builder::builder::arg::Arg::overrides_with_all(&v139, &v2, &v94);
    clap_builder::builder::command::Command::arg(&v94, &v186, &v139);
    clap_builder::builder::arg::Arg::new(&v186, "S");
    clap_builder::builder::arg::Arg::short(&v2, &v186, 83);
    clap_builder::builder::arg::Arg::help(&v186, &v2, "Sort by file size, largest first.");
    v172 = *(&v90 as &i128);
    v165 = *(&v88 as &i128);
    v256 = *(&v80 as &i128);
    v257 = *(&v82 as &i128);
    v258 = *(&v84 as &i128);
    v158 = *(&v86 as &i128);
    v151 = v258;
    v144 = v257;
    v132 = v256;
    clap_builder::builder::arg::Arg::overrides_with_all(&v2, &v186, &v139);
    clap_builder::builder::arg::Arg::action(&v139, &v2, 2);
    clap_builder::builder::command::Command::arg(&v186, &v94, &v139);
    clap_builder::builder::arg::Arg::new(&v94, "t");
    clap_builder::builder::arg::Arg::short(&v2, &v94, 116);
    clap_builder::builder::arg::Arg::help(&v94, &v2, "Sort by modification time (the 'mtime' in the inode), newest first.");
    v173 = *(&v90 as &i128);
    v166 = *(&v88 as &i128);
    v259 = *(&v80 as &i128);
    v260 = *(&v82 as &i128);
    v261 = *(&v84 as &i128);
    v159 = *(&v86 as &i128);
    v152 = v261;
    v145 = v260;
    v137 = v259;
    clap_builder::builder::arg::Arg::overrides_with_all(&v2, &v94, &v139);
    clap_builder::builder::arg::Arg::action(&v139, &v2, 2);
    clap_builder::builder::command::Command::arg(&v94, &v186, &v139);
    clap_builder::builder::arg::Arg::new(&v186, "v");
    clap_builder::builder::arg::Arg::short(&v2, &v186, 118);
    clap_builder::builder::arg::Arg::help(&v186, &v2, "Natural sort of (version) numbers in the filenames.");
    v174 = *(&v90 as &i128);
    v167 = *(&v88 as &i128);
    v262 = *(&v80 as &i128);
    v263 = *(&v82 as &i128);
    v264 = *(&v84 as &i128);
    v160 = *(&v86 as &i128);
    v153 = v264;
    v146 = v263;
    v138 = v262;
    clap_builder::builder::arg::Arg::overrides_with_all(&v2, &v186, &v139);
    clap_builder::builder::arg::Arg::action(&v139, &v2, 2);
    clap_builder::builder::command::Command::arg(&v186, &v94, &v139);
    clap_builder::builder::arg::Arg::new(&v94, "X");
    clap_builder::builder::arg::Arg::short(&v2, &v94, 88);
    clap_builder::builder::arg::Arg::help(&v94, &v2, "Sort alphabetically by entry extension.");
    v171 = *(&v90 as &i128);
    v165 = *(&v88 as &i128);
    v265 = *(&v80 as &i128);
    v266 = *(&v82 as &i128);
    v267 = *(&v84 as &i128);
    v157 = *(&v86 as &i128);
    v149 = v267;
    v143 = v266;
    v139 = v265;
    clap_builder::builder::arg::Arg::overrides_with_all(&v2, &v94, &v139);
    clap_builder::builder::arg::Arg::action(&v139, &v2, 2);
    clap_builder::builder::command::Command::arg(&v94, &v186, &v139);
    clap_builder::builder::arg::Arg::new(&v186, "U");
    clap_builder::builder::arg::Arg::short(&v2, &v186, 85);
    clap_builder::builder::arg::Arg::help(&v186, &v2, "Do not sort; list the files in whatever order they are stored in the directory.  This is especially useful when listing very large directories, since not doing any sorting can be noticeably faster.");
    clap_builder::builder::arg::Arg::overrides_with_all(&v2, &v186, &v80);
    clap_builder::builder::arg::Arg::action(&v139, &v2, 2);
    clap_builder::builder::command::Command::arg(&v186, &v94, &v139);
    clap_builder::builder::arg::Arg::new(&v94, "dereference");
    clap_builder::builder::arg::Arg::short(&v2, &v94, 76);
    clap_builder::builder::arg::Arg::long(&v94, &v2, "dereference");
    clap_builder::builder::arg::Arg::help(&v2, &v94, "When showing file information for a symbolic link, show information for the file the link references rather than the link itself.");
    v197 = &anon.902b05dc61fef0513c491a1430f3d56c.9.llvm.11494158254235805547;
    v198 = 11;
    v199 = &anon.902b05dc61fef0513c491a1430f3d56c.11.llvm.11494158254235805547;
    v200 = 39;
    v201 = &anon.902b05dc61fef0513c491a1430f3d56c.10.llvm.11494158254235805547;
    v202 = 24;
    v149 = v201;
    v156 = 24;
    v143 = v199;
    v148 = 39;
    v134 = v197;
    v142 = 11;
    clap_builder::builder::arg::Arg::overrides_with_all(&v94, &v2, &v134);
    clap_builder::builder::arg::Arg::action(&v2, &v94, 2);
    clap_builder::builder::command::Command::arg(&v94, &v186, &v2);
    clap_builder::builder::arg::Arg::new(&v186, "dereference-command-line-symlink-to-dir");
    clap_builder::builder::arg::Arg::long(&v2, &v186, "dereference-command-line-symlink-to-dir");
    clap_builder::builder::arg::Arg::help(&v186, &v2, "Do not follow symlinks except when they link to directories and are given as command line arguments.");
    v268 = *(&v197 as &i128);
    v269 = *(&v199 as &i128);
    v149 = *(&v201 as &i128);
    v143 = v269;
    v134 = v268;
    clap_builder::builder::arg::Arg::overrides_with_all(&v2, &v186, &v134);
    clap_builder::builder::arg::Arg::action(&v134, &v2, 2);
    clap_builder::builder::command::Command::arg(&v186, &v94, &v134);
    clap_builder::builder::arg::Arg::new(&v94, "dereference-command-line");
    clap_builder::builder::arg::Arg::short(&v2, &v94, 72);
    clap_builder::builder::arg::Arg::long(&v94, &v2, "dereference-command-line");
    clap_builder::builder::arg::Arg::help(&v2, &v94, "Do not follow symlinks except when given as command line arguments.");
    clap_builder::builder::arg::Arg::overrides_with_all(&v94, &v2, &v197);
    clap_builder::builder::arg::Arg::action(&v2, &v94, 2);
    clap_builder::builder::command::Command::arg(&v94, &v186, &v2);
    clap_builder::builder::arg::Arg::new(&v186, "no-group");
    clap_builder::builder::arg::Arg::long(&v2, &v186, "no-group");
    clap_builder::builder::arg::Arg::short(&v186, &v2, 71);
    clap_builder::builder::arg::Arg::help(&v2, &v186, "Do not show group in long format.");
    clap_builder::builder::arg::Arg::action(&v134, &v2, 2);
    clap_builder::builder::command::Command::arg(&v186, &v94, &v134);
    clap_builder::builder::arg::Arg::new(&v94, "author");
    clap_builder::builder::arg::Arg::long(&v2, &v94, "author");
    clap_builder::builder::arg::Arg::help(&v94, &v2, "Show author in long format. On the supported platforms, the author always matches the file owner.");
    clap_builder::builder::arg::Arg::action(&v2, &v94, 2);
    clap_builder::builder::command::Command::arg(&v94, &v186, &v2);
    clap_builder::builder::arg::Arg::new(&v186, "all");
    clap_builder::builder::arg::Arg::short(&v2, &v186, 97);
    clap_builder::builder::arg::Arg::long(&v186, &v2, "all");
    v207 = &anon.902b05dc61fef0513c491a1430f3d56c.7.llvm.11494158254235805547;
    v208 = 3;
    v209 = &anon.902b05dc61fef0513c491a1430f3d56c.8.llvm.11494158254235805547;
    v210 = 10;
    v143 = &anon.902b05dc61fef0513c491a1430f3d56c.8.llvm.11494158254235805547;
    v148 = 10;
    v132 = v207;
    v142 = 3;
    clap_builder::builder::arg::Arg::overrides_with_all(&v2, &v186, &v132);
    clap_builder::builder::arg::Arg::help(&v186, &v2, "Do not ignore hidden files (files with names that start with '.').");
    clap_builder::builder::arg::Arg::action(&v2, &v186, 2);
    clap_builder::builder::command::Command::arg(&v186, &v94, &v2);
    clap_builder::builder::arg::Arg::new(&v94, "almost-all");
    clap_builder::builder::arg::Arg::short(&v2, &v94, 65);
    clap_builder::builder::arg::Arg::long(&v94, &v2, "almost-all");
    clap_builder::builder::arg::Arg::overrides_with_all(&v2, &v94, &v207);
    clap_builder::builder::arg::Arg::help(&v94, &v2, "In a directory, do not ignore all file names that start with '.', only ignore '.' and '..'.");
    clap_builder::builder::arg::Arg::action(&v2, &v94, 2);
    clap_builder::builder::command::Command::arg(&v94, &v186, &v2);
    clap_builder::builder::arg::Arg::new(&v186, "directory");
    clap_builder::builder::arg::Arg::short(&v2, &v186, 100);
    clap_builder::builder::arg::Arg::long(&v186, &v2, "directory");
    clap_builder::builder::arg::Arg::help(&v2, &v186, "Only list the names of directories, rather than listing directory contents. This will not follow symbolic links unless one of `--dereference-command-line (-H)`, `--dereference (-L)`, or `--dereference-command-line-symlink-to-dir` is specified.");
    clap_builder::builder::arg::Arg::action(&v132, &v2, 2);
    clap_builder::builder::command::Command::arg(&v186, &v94, &v132);
    clap_builder::builder::arg::Arg::new(&v94, "human-readable");
    clap_builder::builder::arg::Arg::short(&v2, &v94, 104);
    clap_builder::builder::arg::Arg::long(&v94, &v2, "human-readable");
    clap_builder::builder::arg::Arg::help(&v2, &v94, "Print human readable file sizes (e.g. 1K 234M 56G).");
    v132 = struct32 {
        field_0: &anon.0961294ef8eb7b5431de28de81a5ae4f.10.llvm.9099371528486416302
        field_8: 10
        field_16: &anon.0961294ef8eb7b5431de28de81a5ae4f.12.llvm.9099371528486416302
        field_24: 2
    };
    clap_builder::builder::arg::Arg::overrides_with_all(&v94, &v2, &v132);
    clap_builder::builder::arg::Arg::action(&v2, &v94, 2);
    clap_builder::builder::command::Command::arg(&v94, &v186, &v2);
    clap_builder::builder::arg::Arg::new(&v186, "kibibytes");
    clap_builder::builder::arg::Arg::short(&v2, &v186, 107);
    clap_builder::builder::arg::Arg::long(&v186, &v2, "kibibytes");
    clap_builder::builder::arg::Arg::help(&v2, &v186, "default to 1024-byte blocks for file system usage; used only with -s and per directory totals");
    clap_builder::builder::arg::Arg::action(&v132, &v2, 2);
    clap_builder::builder::command::Command::arg(&v186, &v94, &v132);
    clap_builder::builder::arg::Arg::new(&v94, "si");
    clap_builder::builder::arg::Arg::long(&v2, &v94, "si");
    clap_builder::builder::arg::Arg::help(&v94, &v2, "Print human readable file sizes using powers of 1000 instead of 1024.");
    v132 = struct32 {
        field_0: &anon.0961294ef8eb7b5431de28de81a5ae4f.10.llvm.9099371528486416302
        field_8: 10
        field_16: &anon.0961294ef8eb7b5431de28de81a5ae4f.11.llvm.9099371528486416302
        field_24: 14
    };
    clap_builder::builder::arg::Arg::overrides_with_all(&v2, &v94, &v132);
    clap_builder::builder::arg::Arg::action(&v132, &v2, 2);
    clap_builder::builder::command::Command::arg(&v94, &v186, &v132);
    clap_builder::builder::arg::Arg::new(&v186, "block-size");
    clap_builder::builder::arg::Arg::long(&v2, &v186, "block-size");
    memcpy(&v186, &v2, 584);
    v187 = 128 | v46;
    v188 = v47;
    clap_builder::builder::arg::Arg::value_name(&v2, &v186, "BLOCK_SIZE");
    clap_builder::builder::arg::Arg::help(&v186, &v2, "scale sizes by BLOCK_SIZE when printing them");
    v132 = struct32 {
        field_0: &anon.0961294ef8eb7b5431de28de81a5ae4f.12.llvm.9099371528486416302
        field_8: 2
        field_16: &anon.0961294ef8eb7b5431de28de81a5ae4f.11.llvm.9099371528486416302
        field_24: 14
    };
    clap_builder::builder::arg::Arg::overrides_with_all(&v2, &v186, &v132);
    clap_builder::builder::command::Command::arg(&v186, &v94, &v2);
    clap_builder::builder::arg::Arg::new(&v94, "inode");
    clap_builder::builder::arg::Arg::short(&v2, &v94, 105);
    clap_builder::builder::arg::Arg::long(&v94, &v2, "inode");
    clap_builder::builder::arg::Arg::help(&v2, &v94, "print the index number of each file");
    clap_builder::builder::arg::Arg::action(&v132, &v2, 2);
    clap_builder::builder::command::Command::arg(&v94, &v186, &v132);
    clap_builder::builder::arg::Arg::new(&v186, "reverse");
    clap_builder::builder::arg::Arg::short(&v2, &v186, 114);
    clap_builder::builder::arg::Arg::long(&v186, &v2, "reverse");
    clap_builder::builder::arg::Arg::help(&v2, &v186, "Reverse whatever the sorting method is e.g., list files in reverse alphabetical order, youngest first, smallest first, or whatever.");
    clap_builder::builder::arg::Arg::action(&v132, &v2, 2);
    clap_builder::builder::command::Command::arg(&v186, &v94, &v132);
    clap_builder::builder::arg::Arg::new(&v94, "recursive");
    clap_builder::builder::arg::Arg::short(&v2, &v94, 82);
    clap_builder::builder::arg::Arg::long(&v94, &v2, "recursive");
    clap_builder::builder::arg::Arg::help(&v2, &v94, "List the contents of all directories recursively.");
    clap_builder::builder::arg::Arg::action(&v132, &v2, 2);
    clap_builder::builder::command::Command::arg(&v94, &v186, &v132);
    clap_builder::builder::arg::Arg::new(&v186, "width");
    clap_builder::builder::arg::Arg::long(&v2, &v186, "width");
    clap_builder::builder::arg::Arg::short(&v186, &v2, 119);
    clap_builder::builder::arg::Arg::help(&v2, &v186, "Assume that the terminal is COLS columns wide.");
    clap_builder::builder::arg::Arg::value_name(&v132, &v2, "COLS");
    clap_builder::builder::command::Command::arg(&v186, &v94, &v132);
    clap_builder::builder::arg::Arg::new(&v94, "size");
    clap_builder::builder::arg::Arg::short(&v2, &v94, 115);
    clap_builder::builder::arg::Arg::long(&v94, &v2, "size");
    clap_builder::builder::arg::Arg::help(&v2, &v94, "print the allocated size of each file, in blocks");
    clap_builder::builder::arg::Arg::action(&v132, &v2, 2);
    clap_builder::builder::command::Command::arg(&v94, &v186, &v132);
    clap_builder::builder::arg::Arg::new(&v186, "color");
    clap_builder::builder::arg::Arg::long(&v2, &v186, "color");
    clap_builder::builder::arg::Arg::help(&v186, &v2, "Color output based on file type.");
    v10 = &g_434cef;
    v11 = 6;
    v8 = 0x8000000000000000;
    v9 = v0;
    v1 = 0;
    v6 = 8;
    v7 = 0;
    v12 = 0;
    v132 = clap_builder::builder::possible_value::PossibleValue::alias(&v1, "yes");
    v71 = clap_builder::builder::possible_value::PossibleValue::alias(&v132, "force");
    v10 = &g_423f34;
    v11 = 4;
    v8 = 0x8000000000000000;
    v9 = v0;
    v1 = 0;
    v6 = 8;
    v7 = 0;
    v12 = 0;
    v132 = clap_builder::builder::possible_value::PossibleValue::alias(&v1, "tty");
    v50 = clap_builder::builder::possible_value::PossibleValue::alias(&v132, "if-tty");
    v10 = &g_434d06;
    v11 = 5;
    v8 = 0x8000000000000000;
    v9 = v0;
    v1 = 0;
    v6 = 8;
    v7 = 0;
    v12 = 0;
    v132 = clap_builder::builder::possible_value::PossibleValue::alias(&v1, "no");
    v61 = clap_builder::builder::possible_value::PossibleValue::alias(&v132, "none");
    v270 = *(&v71.field_16 as &i128);
    v271 = v71.field_48;
    v272 = *(&v50.field_16 as &i128);
    v273 = v50.field_48;
    v1 = struct216 {
        field_0: v71.field_0
        field_16: v270
        field_32: v76
        field_48: v271
        field_64: v71.field_64
        field_72: v50.field_0
        field_88: v272
        field_104: v55
        field_120: v273
        field_136: v50.field_64
        field_144: v61.field_0
        field_160: *(&v61.field_16 as &i128)
        field_176: v66
        field_192: v61.field_48
        field_208: v61.field_64
    };
    v132 = <uucore::parser::shortcut_value_parser::ShortcutValueParser as core::convert::From<I>>::from(&v1);
    clap_builder::builder::arg::Arg::value_parser(&v1, &v186, &v132);
    memcpy(&v186, &v1, 584);
    v187 = 128 | v46;
    v188 = v47;
    v132 = v112;
    clap_builder::builder::arg::Arg::num_args(&v1, &v186, &v132);
    clap_builder::builder::command::Command::arg(&v186, &v94, &v1);
    clap_builder::builder::arg::Arg::new(&v94, "indicator-style");
    clap_builder::builder::arg::Arg::long(&v1, &v94, "indicator-style");
    clap_builder::builder::arg::Arg::help(&v94, &v1, "Append indicator with style WORD to entry names: none (default),  slash (-p), file-type (--file-type), classify (-F)");
    v3 = struct64 {
        field_0: &g_423ff4
        field_8: 4
        field_16: &g_434e32
        field_24: 5
        field_32: &g_434e29
        field_40: 9
        field_48: &anon.f45a42eab3604eaa40558bbeffd2bfb7.18.llvm.10979288589332586409
        field_56: 8
    };
    v132 = <uucore::parser::shortcut_value_parser::ShortcutValueParser as core::convert::From<I>>::from(&v3);
    clap_builder::builder::arg::Arg::value_parser(&v3, &v94, &v132);
    v124 = &anon.f45a42eab3604eaa40558bbeffd2bfb7.17.llvm.10979288589332586409;
    v125 = 9;
    v126 = &anon.f45a42eab3604eaa40558bbeffd2bfb7.16.llvm.10979288589332586409;
    v127 = 1;
    v128 = &anon.f45a42eab3604eaa40558bbeffd2bfb7.18.llvm.10979288589332586409;
    v129 = 8;
    v130 = &anon.3f7e092f2ea554bdd060175bd8ea63d9.30.llvm.16502254941234113161;
    v131 = 15;
    v102 = v130;
    v103 = 15;
    v98 = v128;
    v101 = 8;
    v96 = v126;
    v97 = 1;
    v94 = *(&v124 as &i128);
    clap_builder::builder::arg::Arg::overrides_with_all(&v132, &v3, &v94);
    clap_builder::builder::command::Command::arg(&v94, &v186, &v132);
    clap_builder::builder::arg::Arg::new(&v186, "classify");
    clap_builder::builder::arg::Arg::short(&v3, &v186, 70);
    clap_builder::builder::arg::Arg::long(&v186, &v3, "classify");
    clap_builder::builder::arg::Arg::help(&v3, &v186, "Append a character to each file name indicating the file type. Also, for regular files that are executable, append '*'. The file type indicators are '/' for directories, '@' for symbolic links, '|' for FIFOs, '=' for sockets, '>' for doors, and nothing for regular files. when may be omitted, or one of:\n\tnone - Do not classify. This is the default.\n\tauto - Only classify if standard output is a terminal.\n\talways - Always classify.\nSpecifying --classify and no when is equivalent to --classify=always. This will not follow symbolic links listed on the command line unless the --dereference-command-line (-H), --dereference (-L), or --dereference-command-line-symlink-to-dir options are specified.");
    clap_builder::builder::arg::Arg::value_name(&v186, &v3, "when");
    v10 = &g_434cef;
    v11 = 6;
    v8 = 0x8000000000000000;
    v9 = v0;
    v1 = 0;
    v6 = 8;
    v7 = 0;
    v12 = 0;
    v132 = clap_builder::builder::possible_value::PossibleValue::alias(&v1, "yes");
    v72 = clap_builder::builder::possible_value::PossibleValue::alias(&v132, "force");
    v10 = &g_423f34;
    v11 = 4;
    v8 = 0x8000000000000000;
    v9 = v0;
    v1 = 0;
    v6 = 8;
    v7 = 0;
    v12 = 0;
    v132 = clap_builder::builder::possible_value::PossibleValue::alias(&v1, "tty");
    v51 = clap_builder::builder::possible_value::PossibleValue::alias(&v132, "if-tty");
    v10 = &g_434d06;
    v11 = 5;
    v8 = 0x8000000000000000;
    v9 = v0;
    v1 = 0;
    v6 = 8;
    v7 = 0;
    v12 = 0;
    v140 = clap_builder::builder::possible_value::PossibleValue::alias(&v1, "no");
    v62 = clap_builder::builder::possible_value::PossibleValue::alias(&v140, "none");
    v274 = *(&v72.field_16 as &i128);
    v275 = v72.field_48;
    v276 = *(&v51.field_16 as &i128);
    v277 = v51.field_48;
    v1 = struct216 {
        field_0: v72.field_0
        field_16: v274
        field_32: v76
        field_48: v275
        field_64: v72.field_64
        field_72: v51.field_0
        field_88: v276
        field_104: v55
        field_120: v277
        field_136: v51.field_64
        field_144: v62.field_0
        field_160: *(&v62.field_16 as &i128)
        field_176: v66
        field_192: v62.field_48
        field_208: v62.field_64
    };
    v134 = <uucore::parser::shortcut_value_parser::ShortcutValueParser as core::convert::From<I>>::from(&v1);
    clap_builder::builder::arg::Arg::value_parser(&v1, &v186, &v134);
    clap_builder::builder::arg::Arg::default_missing_value(&v186, &v1);
    memcpy(&v1, &v186, 584);
    v46 = 128 | v187;
    v47 = v188;
    clap_builder::builder::arg::Arg::num_args(&v186, &v1, &v113);
    v278 = *(&v124 as &i128);
    v279 = *(&v126 as &i128);
    v280 = *(&v128 as &i128);
    v162 = *(&v130 as &i128);
    v150 = v280;
    v147 = v279;
    v132 = v278;
    clap_builder::builder::arg::Arg::overrides_with_all(&v1, &v186, &v134);
    clap_builder::builder::command::Command::arg(&v186, &v94, &v1);
    clap_builder::builder::arg::Arg::new(&v94, "file-type");
    clap_builder::builder::arg::Arg::long(&v1, &v94, "file-type");
    clap_builder::builder::arg::Arg::help(&v94, &v1, "Same as --classify, but do not append '*'");
    v281 = *(&v124 as &i128);
    v282 = *(&v126 as &i128);
    v283 = *(&v128 as &i128);
    v157 = *(&v130 as &i128);
    v149 = v283;
    v143 = v282;
    v134 = v281;
    clap_builder::builder::arg::Arg::overrides_with_all(&v1, &v94, &v134);
    clap_builder::builder::arg::Arg::action(&v134, &v1, 2);
    clap_builder::builder::command::Command::arg(&v94, &v186, &v134);
    clap_builder::builder::arg::Arg::new(&v186, "p");
    clap_builder::builder::arg::Arg::short(&v1, &v186, 112);
    clap_builder::builder::arg::Arg::help(&v186, &v1, "Append / indicator to directories.");
    clap_builder::builder::arg::Arg::overrides_with_all(&v1, &v186, &v124);
    clap_builder::builder::arg::Arg::action(&v134, &v1, 2);
    clap_builder::builder::command::Command::arg(&v186, &v94, &v134);
    clap_builder::builder::arg::Arg::new(&v94, "time-style");
    clap_builder::builder::arg::Arg::long(&v1, &v94, "time-style");
    clap_builder::builder::arg::Arg::help(&v94, &v1, "time/date format with -l; see TIME_STYLE below");
    clap_builder::builder::arg::Arg::value_name(&v1, &v94, "TIME_STYLE");
    clap_builder::builder::arg::Arg::env(&v94, &v1, "TIME_STYLE");
    clap_builder::builder::arg::Arg::value_parser(&v1, &v94);
    v92 = struct16 {
        field_0: &anon.3f7e092f2ea554bdd060175bd8ea63d9.31.llvm.16502254941234113161
        field_8: 10
    };
    v92 = struct16 {
        field_0: &anon.3f7e092f2ea554bdd060175bd8ea63d9.31.llvm.16502254941234113161
        field_8: 10
    };
    clap_builder::builder::arg::Arg::overrides_with_all(&v134, &v1, &v92);
    clap_builder::builder::command::Command::arg(&v92, &v186, &v134);
    clap_builder::builder::arg::Arg::new(&v186, "full-time");
    clap_builder::builder::arg::Arg::long(&v1, &v186, "full-time");
    clap_builder::builder::arg::Arg::overrides_with(&v186, &v1, "full-time");
    clap_builder::builder::arg::Arg::help(&v1, &v186, "like -l --time-style=full-iso");
    clap_builder::builder::arg::Arg::action(&v134, &v1, 2);
    clap_builder::builder::command::Command::arg(&v186, &v92, &v134);
    clap_builder::builder::arg::Arg::new(&v92, "context");
    clap_builder::builder::arg::Arg::short(&v1, &v92, 90);
    clap_builder::builder::arg::Arg::long(&v92, &v1, "context");
    clap_builder::builder::arg::Arg::help(&v1, &v92, "print any security context of each file (not enabled)");
    clap_builder::builder::arg::Arg::action(&v134, &v1, 2);
    clap_builder::builder::command::Command::arg(&v92, &v186, &v134);
    clap_builder::builder::arg::Arg::new(&v186, "group-directories-first");
    clap_builder::builder::arg::Arg::long(&v1, &v186, "group-directories-first");
    clap_builder::builder::arg::Arg::help(&v186, &v1, "group directories before files; can be augmented with a --sort option, but any use of --sort=none (-U) disables grouping");
    clap_builder::builder::arg::Arg::action(&v1, &v186, 2);
    clap_builder::builder::command::Command::arg(&v186, &v92, &v1);
    clap_builder::builder::arg::Arg::new(&v92, "paths");
    clap_builder::builder::arg::Arg::action(&v1, &v92, 1);
    clap_builder::builder::arg::Arg::value_hint(&v92, &v1, 2);
    v132 = 2;
    clap_builder::builder::arg::Arg::value_parser(&v1, &v92, &v132);
    clap_builder::builder::command::Command::arg(&v92, &v186, &v1);
    clap_builder::builder::command::Command::after_help(a0, &v92, "The TIME_STYLE argument can be full-iso, long-iso, iso, locale or +FORMAT. FORMAT is interpreted like in date. Also the TIME_STYLE environment variable sets the default style to use.");
    return a0;
}
