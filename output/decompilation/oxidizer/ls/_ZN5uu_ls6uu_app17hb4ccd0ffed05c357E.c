fn uu_ls::uu_app(a0: &struct712) -> long long {
    let v0: u128;  // [bp-0xdc8]
    let v1: void*;  // [bp-0xdb8], Other Possible Types: u1152
    let v2: u128;  // [bp-0xdb8]
    let v3: u512;  // [bp-0xdb8]
    let v4: u1024;  // [bp-0xdb8]
    let v5: u1152;  // [bp-0xdb8]
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
    let v18: u8;  // [bp-0xd28]
    let v19: u8;  // [bp-0xd18]
    let v20: u128;  // [bp-0xd08]
    let v21: u8;  // [bp-0xcf8]
    let v22: u64;  // [bp-0xce8]
    let v23: u8;  // [bp-0xce0]
    let v24: u8;  // [bp-0xcd0]
    let v25: u128;  // [bp-0xcc0]
    let v26: u8;  // [bp-0xcb0]
    let v27: u64;  // [bp-0xca0]
    let v28: u8;  // [bp-0xc98]
    let v29: u8;  // [bp-0xc88]
    let v30: u128;  // [bp-0xc78]
    let v31: u8;  // [bp-0xc68]
    let v32: u64;  // [bp-0xc58]
    let v33: u8;  // [bp-0xc50]
    let v34: u8;  // [bp-0xc40]
    let v35: u8;  // [bp-0xc30]
    let v36: u8;  // [bp-0xc20]
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
    let v59: struct72;  // [bp-0xb18], Other Possible Types: void*
    let v60: struct72;  // [bp-0xb18]
    let v61: struct72;  // [bp-0xb18]
    let v62: u64;  // [bp-0xb10]
    let v63: void*;  // [bp-0xb08]
    let v64: u64;  // [bp-0xb00]
    let v65: u128;  // [bp-0xaf8]
    let v66: u64;  // [bp-0xae8]
    let v67: u64;  // [bp-0xae0]
    let v68: u8;  // [bp-0xad8]
    let v69: struct72;  // [bp-0xad0], Other Possible Types: void*
    let v70: struct72;  // [bp-0xad0]
    let v71: struct72;  // [bp-0xad0]
    let v72: u64;  // [bp-0xac8]
    let v73: void*;  // [bp-0xac0]
    let v74: u64;  // [bp-0xab8]
    let v75: u128;  // [bp-0xab0]
    let v76: u64;  // [bp-0xaa0]
    let v77: u64;  // [bp-0xa98]
    let v78: u8;  // [bp-0xa90]
    let v79: u64;  // [bp-0xa88]
    let v80: u64;  // [bp-0xa80]
    let v81: u64;  // [bp-0xa78]
    let v82: u64;  // [bp-0xa70]
    let v83: u64;  // [bp-0xa68]
    let v84: u64;  // [bp-0xa60]
    let v85: u64;  // [bp-0xa58]
    let v86: u64;  // [bp-0xa50]
    let v87: u64;  // [bp-0xa48]
    let v88: u64;  // [bp-0xa40]
    let v89: u64;  // [bp-0xa38]
    let v90: u64;  // [bp-0xa30]
    let v91: u128;  // [bp-0xa28], Other Possible Types: void*
    let v93: u128;  // [bp-0xa28]
    let v94: u64;  // [bp-0xa20]
    let v95: u64;  // [bp-0xa18], Other Possible Types: void*
    let v96: u64;  // [bp-0xa10]
    let v97: u128;  // [bp-0xa08]
    let v98: u128;  // [bp-0xa08]
    let v99: u128;  // [bp-0xa08]
    let v100: u64;  // [bp-0xa00]
    let v101: u64;  // [bp-0x9f8]
    let v102: u64;  // [bp-0x9f0]
    let v103: u64;  // [bp-0x9e8]
    let v104: u64;  // [bp-0x9e0]
    let v105: u64;  // [bp-0x9d8]
    let v106: u64;  // [bp-0x9d0]
    let v107: u8;  // [bp-0x998]
    let v108: u8;  // [bp-0x988]
    let v109: u8;  // [bp-0x978]
    let v110: u8;  // [bp-0x968]
    let v111: u64;  // [bp-0x958]
    let v112: u32;  // [bp-0x7e0]
    let v113: i8;  // [bp-0x7dc]
    let v114: u64;  // [bp-0x76c]
    let v115: u32;  // [bp-0x764]
    let v116: u192;  // [bp-0x760]
    let v117: void*;  // [bp-0x760]
    let v118: u64;  // [bp-0x758]
    let v119: u8;  // [bp-0x750]
    let v120: u64;  // [bp-0x748]
    let v121: u64;  // [bp-0x740]
    let v122: u64;  // [bp-0x738]
    let v123: u64;  // [bp-0x730]
    let v124: u64;  // [bp-0x728]
    let v125: u64;  // [bp-0x720]
    let v126: u64;  // [bp-0x718]
    let v127: u64;  // [bp-0x710]
    let v128: u64;  // [bp-0x708]
    let v129: u64;  // [bp-0x700]
    let v130: u64;  // [bp-0x6f8]
    let v131: u64;  // [bp-0x6f0]
    let v132: u64;  // [bp-0x6e8]
    let v133: u64;  // [bp-0x6e0]
    let v134: u64;  // [bp-0x6d8]
    let v135: u64;  // [bp-0x6d0]
    let v136: u64;  // [bp-0x6c8], Other Possible Types: struct72, struct24
    let v137: struct72;  // [bp-0x6c8]
    let v138: u128;  // [bp-0x6c8], Other Possible Types: struct24
    let v139: u128;  // [bp-0x6c8]
    let v140: struct72;  // [bp-0x6c8]
    let v141: u128;  // [bp-0x6c8]
    let v142: u128;  // [bp-0x6c8]
    let v143: u128;  // [bp-0x6c8]
    let v144: struct72;  // [bp-0x6c8]
    let v145: struct24;  // [bp-0x6c8]
    let v146: u64;  // [bp-0x6c0]
    let v147: u128;  // [bp-0x6b8]
    let v148: u128;  // [bp-0x6b8]
    let v149: u128;  // [bp-0x6b8]
    let v150: u128;  // [bp-0x6b8]
    let v151: u128;  // [bp-0x6b8]
    let v152: u64;  // [bp-0x6b0]
    let v153: u64;  // [bp-0x6a8]
    let v154: u128;  // [bp-0x6a8]
    let v155: u128;  // [bp-0x6a8]
    let v156: u128;  // [bp-0x6a8]
    let v157: u128;  // [bp-0x6a8]
    let v158: u64;  // [bp-0x6a8]
    let v159: u128;  // [bp-0x6a8]
    let v160: u64;  // [bp-0x6a0]
    let v161: u64;  // [bp-0x698]
    let v162: u128;  // [bp-0x698]
    let v163: u128;  // [bp-0x698]
    let v164: u128;  // [bp-0x698]
    let v166: u128;  // [bp-0x698]
    let v167: u128;  // [bp-0x698]
    let v168: u64;  // [bp-0x690]
    let v169: u128;  // [bp-0x688]
    let v170: u128;  // [bp-0x688]
    let v171: u128;  // [bp-0x688]
    let v172: u64;  // [bp-0x688]
    let v173: u128;  // [bp-0x688]
    let v174: u64;  // [bp-0x680]
    let v175: u128;  // [bp-0x678]
    let v176: u128;  // [bp-0x678]
    let v177: u128;  // [bp-0x678]
    let v178: u128;  // [bp-0x678]
    let v179: u64;  // [bp-0x670]
    let v180: u64;  // [bp-0x478]
    let v181: u64;  // [bp-0x470]
    let v182: u64;  // [bp-0x468]
    let v183: u64;  // [bp-0x460]
    let v184: u64;  // [bp-0x458]
    let v185: u64;  // [bp-0x450]
    let v186: u64;  // [bp-0x448]
    let v187: u64;  // [bp-0x440]
    let v188: u64;  // [bp-0x438]
    let v189: u64;  // [bp-0x430]
    let v190: struct437;  // [bp-0x428]
    let v191: u32;  // [bp-0x1e0]
    let v192: u32;  // [bp-0x1dc]
    let v193: u64;  // [bp-0x16c]
    let v194: u32;  // [bp-0x164]
    let v195: u64;  // [bp-0x160]
    let v196: u64;  // [bp-0x158]
    let v197: u64;  // [bp-0x150]
    let v198: u64;  // [bp-0x148]
    let v199: u64;  // [bp-0x140]
    let v200: u64;  // [bp-0x138]
    let v201: u64;  // [bp-0x130]
    let v202: u64;  // [bp-0x128]
    let v203: u64;  // [bp-0x120]
    let v204: u64;  // [bp-0x118]
    let v205: u64;  // [bp-0x110]
    let v206: u64;  // [bp-0x108]
    let v207: u64;  // [bp-0x100]
    let v208: u64;  // [bp-0xf8]
    let v209: u64;  // [bp-0xf0]
    let v210: u64;  // [bp-0xe8]
    let v211: u64;  // [bp-0xe0]
    let v212: u64;  // [bp-0xd8]
    let v213: u64;  // [bp-0xd0]
    let v214: u64;  // [bp-0xc8]
    let v215: void*;  // [bp-0xc0]
    let v216: u64;  // [bp-0xb8]
    let v217: void*;  // [bp-0xb0]
    let v218: u64;  // [bp-0xa8]
    let v219: u128;  // [bp-0xa0]
    let v220: u64;  // [bp-0x90]
    let v221: u64;  // [bp-0x88]
    let v222: u8;  // [bp-0x80]
    let v223: void*;  // [bp-0x78]
    let v224: u64;  // [bp-0x70]
    let v225: void*;  // [bp-0x68]
    let v226: u64;  // [bp-0x60]
    let v227: u128;  // [bp-0x58]
    let v228: u64;  // [bp-0x48]
    let v229: u64;  // [bp-0x40]
    let v230: u8;  // [bp-0x38]
    let v233: u64;  // rdx
    let v234: u128;  // xmm0
    let v235: u128;  // xmm1
    let v236: u128;  // xmm2
    let v237: u128;  // xmm0
    let v238: u128;  // xmm1
    let v239: u128;  // xmm2
    let v240: Result<struct40, struct16>;  // xmm1
    let v241: struct24;  // xmm3
    let v242: u128;  // xmm1
    let v243: u128;  // xmm3
    let v244: u128;  // xmm1
    let v245: u128;  // xmm3
    let v246: u128;  // xmm1
    let v247: u128;  // xmm3
    let v248: u128;  // xmm0
    let v249: u128;  // xmm1
    let v250: u128;  // xmm2
    let v251: u128;  // xmm0
    let v252: u128;  // xmm1
    let v253: u128;  // xmm2
    let v254: u128;  // xmm1
    let v255: u128;  // xmm3
    let v256: u128;  // xmm1
    let v257: u128;  // xmm3
    let v258: u128;  // xmm0
    let v259: u128;  // xmm1
    let v260: u128;  // xmm0
    let v261: u128;  // xmm1
    let v262: u128;  // xmm2
    let v263: u128;  // xmm0
    let v264: u128;  // xmm1
    let v265: u128;  // xmm2
    let v266: u128;  // xmm0
    let v267: u128;  // xmm1
    let v268: u128;  // xmm2
    let v269: u128;  // xmm0
    let v270: u128;  // xmm1
    let v271: u128;  // xmm2
    let v272: u128;  // xmm0
    let v273: u128;  // xmm1
    let v274: u128;  // xmm1
    let v275: u128;  // xmm3
    let v276: u128;  // xmm1
    let v277: u128;  // xmm3
    let v278: u128;  // xmm1
    let v279: u128;  // xmm3
    let v280: u128;  // xmm1
    let v281: u128;  // xmm3
    let v282: u128;  // xmm0
    let v283: u128;  // xmm1
    let v284: u128;  // xmm2
    let v285: u128;  // xmm0
    let v286: u128;  // xmm1

    v190 = clap_builder::builder::command::Command::new(uucore::util_name(), v233);
    clap_builder::builder::command::Command::version(&v91, &v190, "0.0.28");
    uucore::format_usage(&v1, "{} [OPTION]... [FILE]...");
    clap_builder::builder::command::Command::override_usage(&v190, &v91, &v1);
    clap_builder::builder::command::Command::about(&v91, &v190, "List directory contents.\nIgnore files and directories starting with a '.' by default");
    memcpy(&v190, &v91, 700);
    v193 = 1126484022657160 | v114;
    v194 = v115;
    clap_builder::builder::arg::Arg::new(&v91, "help");
    clap_builder::builder::arg::Arg::long(&v1, &v91, "help");
    clap_builder::builder::arg::Arg::help(&v91, &v1, "Print help information.");
    clap_builder::builder::arg::Arg::action(&v1, &v91, 5);
    clap_builder::builder::command::Command::arg(&v91, &v190, &v1);
    clap_builder::builder::arg::Arg::new(&v190, "format");
    clap_builder::builder::arg::Arg::long(&v1, &v190, "format");
    clap_builder::builder::arg::Arg::help(&v190, &v1, "Set the display format.");
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
    v136 = <uucore::parser::shortcut_value_parser::ShortcutValueParser as core::convert::From<I>>::from(&v4);
    clap_builder::builder::arg::Arg::value_parser(&v4, &v190, &v136);
    memcpy(&v190, &v4, 584);
    v191 = 144 | v46;
    v192 = v47;
    v139 = &anon.3f7e092f2ea554bdd060175bd8ea63d9.20.llvm.16502254941234113161;
    v146 = 6;
    v147 = &anon.8bf1419b86641518549345aedc57e906.2.llvm.11260003342554782039;
    v152 = 1;
    v153 = &anon.8bf1419b86641518549345aedc57e906.1.llvm.11260003342554782039;
    v160 = 4;
    v161 = &anon.8bf1419b86641518549345aedc57e906.3.llvm.11260003342554782039;
    v168 = 1;
    v169 = &anon.8bf1419b86641518549345aedc57e906.2.llvm.11260003342554782039;
    v174 = 1;
    v175 = &anon.3f7e092f2ea554bdd060175bd8ea63d9.38.llvm.16502254941234113161;
    v179 = 5;
    clap_builder::builder::arg::Arg::overrides_with_all(&v4, &v190, &v139);
    clap_builder::builder::command::Command::arg(&v190, &v91, &v4);
    clap_builder::builder::arg::Arg::new(&v91, "C");
    clap_builder::builder::arg::Arg::short(&v4, &v91, 67);
    clap_builder::builder::arg::Arg::help(&v91, &v4, "Display the files in columns.");
    v180 = &anon.3f7e092f2ea554bdd060175bd8ea63d9.20.llvm.16502254941234113161;
    v181 = 6;
    v182 = &anon.8bf1419b86641518549345aedc57e906.2.llvm.11260003342554782039;
    v183 = 1;
    v184 = &anon.8bf1419b86641518549345aedc57e906.1.llvm.11260003342554782039;
    v185 = 4;
    v186 = &anon.8bf1419b86641518549345aedc57e906.3.llvm.11260003342554782039;
    v187 = 1;
    v188 = &anon.8bf1419b86641518549345aedc57e906.2.llvm.11260003342554782039;
    v189 = 1;
    v172 = v188;
    v174 = 1;
    v166 = v186;
    v168 = 1;
    v158 = v184;
    v160 = 4;
    v149 = *(&v182 as &i128);
    v139 = *(&v180 as &i128);
    clap_builder::builder::arg::Arg::overrides_with_all(&v4, &v91, &v139);
    clap_builder::builder::arg::Arg::action(&v139, &v4, 2);
    clap_builder::builder::command::Command::arg(&v91, &v190, &v139);
    clap_builder::builder::arg::Arg::new(&v190, "long");
    clap_builder::builder::arg::Arg::short(&v4, &v190, 108);
    clap_builder::builder::arg::Arg::long(&v190, &v4, "long");
    clap_builder::builder::arg::Arg::help(&v4, &v190, "Display detailed information.");
    v173 = *(&v188 as &i128);
    v234 = *(&v180 as &i128);
    v235 = *(&v182 as &i128);
    v236 = *(&v184 as &i128);
    v167 = *(&v186 as &i128);
    v159 = v236;
    v150 = v235;
    v141 = v234;
    clap_builder::builder::arg::Arg::overrides_with_all(&v190, &v4, &v139);
    clap_builder::builder::arg::Arg::action(&v4, &v190, 2);
    clap_builder::builder::command::Command::arg(&v190, &v91, &v4);
    clap_builder::builder::arg::Arg::new(&v91, "x");
    clap_builder::builder::arg::Arg::short(&v4, &v91, 120);
    clap_builder::builder::arg::Arg::help(&v91, &v4, "List entries in rows instead of in columns.");
    v169 = *(&v188 as &i128);
    v237 = *(&v180 as &i128);
    v238 = *(&v182 as &i128);
    v239 = *(&v184 as &i128);
    v161 = *(&v186 as &i128);
    v153 = v239;
    v147 = v238;
    v142 = v237;
    clap_builder::builder::arg::Arg::overrides_with_all(&v4, &v91, &v139);
    clap_builder::builder::arg::Arg::action(&v139, &v4, 2);
    clap_builder::builder::command::Command::arg(&v91, &v190, &v139);
    clap_builder::builder::arg::Arg::new(&v190, "tabsize");
    clap_builder::builder::arg::Arg::short(&v4, &v190, 84);
    clap_builder::builder::arg::Arg::long(&v190, &v4, "tabsize");
    clap_builder::builder::arg::Arg::env(&v4, &v190, "TABSIZE");
    clap_builder::builder::arg::Arg::value_name(&v190, &v4, "COLS");
    clap_builder::builder::arg::Arg::help(&v4, &v190, "Assume tab stops at each COLS instead of 8 (unimplemented)");
    clap_builder::builder::command::Command::arg(&v190, &v91, &v4);
    clap_builder::builder::arg::Arg::new(&v91, "m");
    clap_builder::builder::arg::Arg::short(&v4, &v91, 109);
    clap_builder::builder::arg::Arg::help(&v91, &v4, "List entries separated by commas.");
    clap_builder::builder::arg::Arg::overrides_with_all(&v4, &v91, &v180);
    clap_builder::builder::arg::Arg::action(&v139, &v4, 2);
    clap_builder::builder::command::Command::arg(&v91, &v190, &v139);
    clap_builder::builder::arg::Arg::new(&v190, "zero");
    clap_builder::builder::arg::Arg::long(&v4, &v190, "zero");
    clap_builder::builder::arg::Arg::overrides_with(&v190, &v4, "zero");
    clap_builder::builder::arg::Arg::help(&v4, &v190, "List entries separated by ASCII NUL characters.");
    clap_builder::builder::arg::Arg::action(&v139, &v4, 2);
    clap_builder::builder::command::Command::arg(&v190, &v91, &v139);
    clap_builder::builder::arg::Arg::new(&v91, "dired");
    clap_builder::builder::arg::Arg::long(&v4, &v91, "dired");
    clap_builder::builder::arg::Arg::short(&v91, &v4, 68);
    clap_builder::builder::arg::Arg::help(&v4, &v91, "generate output designed for Emacs' dired (Directory Editor) mode");
    clap_builder::builder::arg::Arg::action(&v91, &v4, 2);
    clap_builder::builder::arg::Arg::overrides_with(&v4, &v91, "hyperlink");
    clap_builder::builder::command::Command::arg(&v91, &v190, &v4);
    clap_builder::builder::arg::Arg::new(&v190, "hyperlink");
    clap_builder::builder::arg::Arg::long(&v4, &v190, "hyperlink");
    clap_builder::builder::arg::Arg::help(&v190, &v4, "hyperlink file names WHEN");
    v10 = &g_434cef;
    v11 = 6;
    v8 = 0x8000000000000000;
    v9 = v0;
    v1 = 0;
    v6 = 8;
    v7 = 0;
    v12 = 0;
    v136 = clap_builder::builder::possible_value::PossibleValue::alias(&v1, "yes");
    v69 = clap_builder::builder::possible_value::PossibleValue::alias(&v136, "force");
    v10 = &g_423f34;
    v11 = 4;
    v8 = 0x8000000000000000;
    v9 = v0;
    v1 = 0;
    v6 = 8;
    v7 = 0;
    v12 = 0;
    v136 = clap_builder::builder::possible_value::PossibleValue::alias(&v1, "tty");
    v48 = clap_builder::builder::possible_value::PossibleValue::alias(&v136, "if-tty");
    v10 = &g_434d06;
    v11 = 5;
    v8 = 0x8000000000000000;
    v9 = v0;
    v1 = 0;
    v6 = 8;
    v7 = 0;
    v12 = 0;
    v136 = clap_builder::builder::possible_value::PossibleValue::alias(&v1, "no");
    v59 = clap_builder::builder::possible_value::PossibleValue::alias(&v136, "none");
    v240 = *(&v69.field_16 as &i128);
    v241 = v69.field_48;
    v242 = *(&v48.field_16 as &i128);
    v243 = v48.field_48;
    v5 = struct144 {
        field_0: v69.field_0
        field_16: v240
        field_32: v75
        field_48: v241
        field_64: v69.field_64
        field_72: v48.field_0
        field_88: v242
        field_104: v55
        field_120: v243
        field_136: v48.field_64
    };
    v22 = v59.field_64;
    memcpy(&v21, &v59, 16);
    v20 = v65;
    memcpy(&v19, &v59, 16);
    memcpy(&v18, &v59, 16);
    v136 = <uucore::parser::shortcut_value_parser::ShortcutValueParser as core::convert::From<I>>::from(&v5);
    clap_builder::builder::arg::Arg::value_parser(&v5, &v190, &v136);
    memcpy(&v190, &v5, 584);
    v191 = 128 | v46;
    v192 = v47;
    v117 = 0;
    v118 = 1;
    v119 = 0;
    v136 = struct24 {
        field_0: v117
        field_8: 1
        field_16: *(&v119 as &i64)
    };
    clap_builder::builder::arg::Arg::num_args(&v5, &v190, &v136);
    clap_builder::builder::arg::Arg::default_missing_value(&v190, &v5);
    clap_builder::builder::arg::Arg::default_value(&v5, &v190);
    clap_builder::builder::arg::Arg::value_name(&v190, &v5, "WHEN");
    clap_builder::builder::arg::Arg::overrides_with(&v5, &v190, "dired");
    clap_builder::builder::command::Command::arg(&v190, &v91, &v5);
    clap_builder::builder::arg::Arg::new(&v91, "1");
    clap_builder::builder::arg::Arg::short(&v5, &v91, 49);
    clap_builder::builder::arg::Arg::help(&v91, &v5, "List one file per line.");
    clap_builder::builder::arg::Arg::action(&v5, &v91, 2);
    clap_builder::builder::command::Command::arg(&v91, &v190, &v5);
    clap_builder::builder::arg::Arg::new(&v190, "o");
    clap_builder::builder::arg::Arg::short(&v5, &v190, 111);
    clap_builder::builder::arg::Arg::help(&v190, &v5, "Long format without group information. Identical to --format=long with --no-group.");
    clap_builder::builder::arg::Arg::action(&v5, &v190, 2);
    clap_builder::builder::command::Command::arg(&v190, &v91, &v5);
    clap_builder::builder::arg::Arg::new(&v91, "g");
    clap_builder::builder::arg::Arg::short(&v5, &v91, 103);
    clap_builder::builder::arg::Arg::help(&v91, &v5, "Long format without owner information.");
    clap_builder::builder::arg::Arg::action(&v5, &v91, 2);
    clap_builder::builder::command::Command::arg(&v91, &v190, &v5);
    clap_builder::builder::arg::Arg::new(&v190, "numeric-uid-gid");
    clap_builder::builder::arg::Arg::short(&v5, &v190, 110);
    clap_builder::builder::arg::Arg::long(&v190, &v5, "numeric-uid-gid");
    clap_builder::builder::arg::Arg::help(&v5, &v190, "-l with numeric UIDs and GIDs.");
    clap_builder::builder::arg::Arg::action(&v136, &v5, 2);
    clap_builder::builder::command::Command::arg(&v190, &v91, &v136);
    clap_builder::builder::arg::Arg::new(&v91, "quoting-style");
    clap_builder::builder::arg::Arg::long(&v5, &v91, "quoting-style");
    clap_builder::builder::arg::Arg::help(&v91, &v5, "Set quoting style.");
    v220 = &g_434d50;
    v221 = 7;
    v218 = 0x8000000000000000;
    v219 = v0;
    v215 = 0;
    v216 = 8;
    v217 = 0;
    v222 = 0;
    v228 = &g_434d57;
    v229 = 5;
    v226 = 0x8000000000000000;
    v227 = v219;
    v223 = 0;
    v224 = 8;
    v225 = 0;
    v230 = 0;
    v76 = &g_434d68;
    v77 = 12;
    v74 = 0x8000000000000000;
    v75 = v0;
    v69 = 0;
    v72 = 8;
    v73 = 0;
    v78 = 0;
    v56 = &g_434d5c;
    v57 = 12;
    v54 = 0x8000000000000000;
    v55 = v0;
    v48 = 0;
    v52 = 8;
    v53 = 0;
    v58 = 0;
    v66 = &g_434d74;
    v67 = 19;
    v64 = 0x8000000000000000;
    v65 = v0;
    v59 = 0;
    v62 = 8;
    v63 = 0;
    v68 = 0;
    v10 = &g_434d87;
    v11 = 1;
    v8 = 0x8000000000000000;
    v9 = v0;
    v2 = 0;
    v6 = 8;
    v7 = 0;
    v12 = 0;
    v137 = clap_builder::builder::possible_value::PossibleValue::alias(&v2, "c-maybe");
    v42 = v0;
    v244 = *(&v217 as &i128);
    v245 = *(&v220 as &i128);
    v2 = *(&v215 as &i128);
    v7 = v244;
    v9 = v219;
    v10 = v245;
    v12 = *(&v222 as &i64);
    v246 = *(&v225 as &i128);
    v247 = *(&v228 as &i128);
    v13 = *(&v223 as &i128);
    v14 = v246;
    v15 = v227;
    v16 = v247;
    v17 = *(&v230 as &i64);
    v22 = v69.field_64;
    memcpy(&v21, &v76, 16);
    v20 = v75;
    memcpy(&v19, &v73, 16);
    memcpy(&v18, &v69, 16);
    v27 = v48.field_64;
    memcpy(&v26, &v56, 16);
    v25 = v55;
    memcpy(&v24, &v53, 16);
    memcpy(&v23, &v48, 16);
    v32 = v59.field_64;
    memcpy(&v31, &v66, 16);
    v30 = v65;
    memcpy(&v29, &v63, 16);
    memcpy(&v28, &v59, 16);
    v37 = v172;
    memcpy(&v36, &v137, 16);
    memcpy(&v35, &v137, 16);
    memcpy(&v34, &v137, 16);
    memcpy(&v33, &v137, 16);
    v38 = 0;
    v39 = 8;
    v40 = 0;
    v41 = 0x8000000000000000;
    v43 = &g_434d88;
    v44 = 6;
    v45 = 0;
    v138 = <uucore::parser::shortcut_value_parser::ShortcutValueParser as core::convert::From<I>>::from(&v2);
    clap_builder::builder::arg::Arg::value_parser(&v2, &v91, &v138);
    v120 = &anon.3f7e092f2ea554bdd060175bd8ea63d9.14.llvm.16502254941234113161;
    v121 = 13;
    v122 = &anon.9938bf1084d6f67f99da587aeb78cfa9.29.llvm.7263189302602752264;
    v123 = 7;
    v124 = &anon.9938bf1084d6f67f99da587aeb78cfa9.28.llvm.7263189302602752264;
    v125 = 6;
    v126 = &anon.9938bf1084d6f67f99da587aeb78cfa9.30.llvm.7263189302602752264;
    v127 = 10;
    v101 = v126;
    v102 = 10;
    v97 = v124;
    v100 = 6;
    v95 = v122;
    v96 = 7;
    v91 = *(&v120 as &i128);
    clap_builder::builder::arg::Arg::overrides_with_all(&v138, &v2, &v91);
    clap_builder::builder::command::Command::arg(&v91, &v190, &v138);
    clap_builder::builder::arg::Arg::new(&v190, "literal");
    clap_builder::builder::arg::Arg::short(&v2, &v190, 78);
    clap_builder::builder::arg::Arg::long(&v190, &v2, "literal");
    clap_builder::builder::arg::Arg::alias(&v2, &v190, "l");
    clap_builder::builder::arg::Arg::help(&v190, &v2, "Use literal quoting style. Equivalent to `--quoting-style=literal`");
    v248 = *(&v120 as &i128);
    v249 = *(&v122 as &i128);
    v250 = *(&v124 as &i128);
    v161 = *(&v126 as &i128);
    v153 = v250;
    v148 = v249;
    v136 = v248;
    clap_builder::builder::arg::Arg::overrides_with_all(&v2, &v190, &v138);
    clap_builder::builder::arg::Arg::action(&v138, &v2, 2);
    clap_builder::builder::command::Command::arg(&v190, &v91, &v138);
    clap_builder::builder::arg::Arg::new(&v91, "escape");
    clap_builder::builder::arg::Arg::short(&v2, &v91, 98);
    clap_builder::builder::arg::Arg::long(&v91, &v2, "escape");
    clap_builder::builder::arg::Arg::help(&v2, &v91, "Use escape quoting style. Equivalent to `--quoting-style=escape`");
    v251 = *(&v120 as &i128);
    v252 = *(&v122 as &i128);
    v253 = *(&v124 as &i128);
    v161 = *(&v126 as &i128);
    v153 = v253;
    v147 = v252;
    v139 = v251;
    clap_builder::builder::arg::Arg::overrides_with_all(&v91, &v2, &v138);
    clap_builder::builder::arg::Arg::action(&v2, &v91, 2);
    clap_builder::builder::command::Command::arg(&v91, &v190, &v2);
    clap_builder::builder::arg::Arg::new(&v190, "quote-name");
    clap_builder::builder::arg::Arg::short(&v2, &v190, 81);
    clap_builder::builder::arg::Arg::long(&v190, &v2, "quote-name");
    clap_builder::builder::arg::Arg::help(&v2, &v190, "Use C quoting style. Equivalent to `--quoting-style=c`");
    clap_builder::builder::arg::Arg::overrides_with_all(&v190, &v2, &v120);
    clap_builder::builder::arg::Arg::action(&v2, &v190, 2);
    clap_builder::builder::command::Command::arg(&v190, &v91, &v2);
    clap_builder::builder::arg::Arg::new(&v91, "hide-control-chars");
    clap_builder::builder::arg::Arg::short(&v2, &v91, 113);
    clap_builder::builder::arg::Arg::long(&v91, &v2, "hide-control-chars");
    clap_builder::builder::arg::Arg::help(&v2, &v91, "Replace control characters with '?' if they are not escaped.");
    v207 = &anon.3f7e092f2ea554bdd060175bd8ea63d9.15.llvm.16502254941234113161;
    v208 = 18;
    v209 = &anon.3f7e092f2ea554bdd060175bd8ea63d9.16.llvm.16502254941234113161;
    v210 = 18;
    v147 = &anon.3f7e092f2ea554bdd060175bd8ea63d9.16.llvm.16502254941234113161;
    v152 = 18;
    v136 = v207;
    v146 = 18;
    clap_builder::builder::arg::Arg::overrides_with_all(&v91, &v2, &v136);
    clap_builder::builder::arg::Arg::action(&v2, &v91, 2);
    clap_builder::builder::command::Command::arg(&v91, &v190, &v2);
    clap_builder::builder::arg::Arg::new(&v190, "show-control-chars");
    clap_builder::builder::arg::Arg::long(&v2, &v190, "show-control-chars");
    clap_builder::builder::arg::Arg::help(&v190, &v2, "Show control characters 'as is' if they are not escaped.");
    clap_builder::builder::arg::Arg::overrides_with_all(&v2, &v190, &v207);
    clap_builder::builder::arg::Arg::action(&v136, &v2, 2);
    clap_builder::builder::command::Command::arg(&v190, &v91, &v136);
    clap_builder::builder::arg::Arg::new(&v91, "time");
    clap_builder::builder::arg::Arg::long(&v2, &v91, "time");
    clap_builder::builder::arg::Arg::help(&v91, &v2, "Show time in <field>:\n\taccess time (-u): atime, access, use;\n\tchange time (-t): ctime, status.\n\tbirth time: birth, creation;");
    clap_builder::builder::arg::Arg::value_name(&v2, &v91, "field");
    v101 = &g_434c97;
    v102 = 5;
    v96 = 0x8000000000000000;
    v98 = v0;
    v91 = 0;
    v94 = 8;
    v95 = 0;
    v103 = 0;
    v136 = clap_builder::builder::possible_value::PossibleValue::alias(&v91, "access");
    v49 = clap_builder::builder::possible_value::PossibleValue::alias(&v136, "use");
    v101 = &g_434c86;
    v102 = 5;
    v96 = 0x8000000000000000;
    v99 = v0;
    v91 = 0;
    v94 = 8;
    v95 = 0;
    v103 = 0;
    v60 = clap_builder::builder::possible_value::PossibleValue::alias(&v91, "status");
    v101 = &g_434c9f;
    v102 = 5;
    v96 = 0x8000000000000000;
    v97 = v0;
    v91 = 0;
    v94 = 8;
    v95 = 0;
    v103 = 0;
    v140 = clap_builder::builder::possible_value::PossibleValue::alias(&v91, "creation");
    v254 = *(&v49.field_16 as &i128);
    v255 = v49.field_48;
    v256 = *(&v60.field_16 as &i128);
    v257 = v60.field_48;
    v91 = struct144 {
        field_0: v49.field_0
        field_16: v254
        field_32: v55
        field_48: v255
        field_64: v49.field_64
        field_72: v60.field_0
        field_88: v256
        field_104: v65
        field_120: v257
        field_136: v60.field_64
    };
    v111 = v172;
    memcpy(&v110, &v140, 16);
    memcpy(&v109, &v140, 16);
    memcpy(&v108, &v140, 16);
    memcpy(&v107, &v140, 16);
    v138 = <uucore::parser::shortcut_value_parser::ShortcutValueParser as core::convert::From<I>>::from(&v91);
    clap_builder::builder::arg::Arg::value_parser(&v91, &v2, &v138);
    memcpy(&v2, &v91, 584);
    v46 = 144 | v112;
    v47 = *(&v113 as &i32);
    v195 = &anon.3f7e092f2ea554bdd060175bd8ea63d9.22.llvm.16502254941234113161;
    v196 = 4;
    v197 = &anon.8bf1419b86641518549345aedc57e906.9.llvm.11260003342554782039;
    v198 = 1;
    v199 = &anon.8bf1419b86641518549345aedc57e906.10.llvm.11260003342554782039;
    v200 = 1;
    v97 = v199;
    v100 = 1;
    v95 = v197;
    v96 = 1;
    v91 = v195;
    v94 = 4;
    clap_builder::builder::arg::Arg::overrides_with_all(&v138, &v2, &v91);
    clap_builder::builder::command::Command::arg(&v91, &v190, &v138);
    clap_builder::builder::arg::Arg::new(&v190, "c");
    clap_builder::builder::arg::Arg::short(&v2, &v190, 99);
    clap_builder::builder::arg::Arg::help(&v190, &v2, "If the long listing format (e.g., -l, -o) is being used, print the status change time (the 'ctime' in the inode) instead of the modification time. When explicitly sorting by time (--sort=time or -t) or when not using a long listing format, sort according to the status change time.");
    v258 = *(&v195 as &i128);
    v259 = *(&v197 as &i128);
    v154 = *(&v199 as &i128);
    v147 = v259;
    v136 = v258;
    clap_builder::builder::arg::Arg::overrides_with_all(&v2, &v190, &v138);
    clap_builder::builder::arg::Arg::action(&v138, &v2, 2);
    clap_builder::builder::command::Command::arg(&v190, &v91, &v138);
    clap_builder::builder::arg::Arg::new(&v91, "u");
    clap_builder::builder::arg::Arg::short(&v2, &v91, 117);
    clap_builder::builder::arg::Arg::help(&v91, &v2, "If the long listing format (e.g., -l, -o) is being used, print the status access time instead of the modification time. When explicitly sorting by time (--sort=time or -t) or when not using a long listing format, sort according to the access time.");
    clap_builder::builder::arg::Arg::overrides_with_all(&v2, &v91, &v195);
    clap_builder::builder::arg::Arg::action(&v138, &v2, 2);
    clap_builder::builder::command::Command::arg(&v91, &v190, &v138);
    clap_builder::builder::arg::Arg::new(&v190, "hide");
    clap_builder::builder::arg::Arg::long(&v2, &v190, "hide");
    clap_builder::builder::arg::Arg::action(&v190, &v2, 1);
    clap_builder::builder::arg::Arg::value_name(&v2, &v190, "PATTERN");
    clap_builder::builder::arg::Arg::help(&v138, &v2, "do not list implied entries matching shell PATTERN (overridden by -a or -A)");
    clap_builder::builder::command::Command::arg(&v190, &v91, &v138);
    clap_builder::builder::arg::Arg::new(&v91, "ignore");
    clap_builder::builder::arg::Arg::short(&v2, &v91, 73);
    clap_builder::builder::arg::Arg::long(&v91, &v2, "ignore");
    clap_builder::builder::arg::Arg::action(&v2, &v91, 1);
    clap_builder::builder::arg::Arg::value_name(&v91, &v2, "PATTERN");
    clap_builder::builder::arg::Arg::help(&v2, &v91, "do not list implied entries matching shell PATTERN");
    clap_builder::builder::command::Command::arg(&v91, &v190, &v2);
    clap_builder::builder::arg::Arg::new(&v190, "ignore-backups");
    clap_builder::builder::arg::Arg::short(&v2, &v190, 66);
    clap_builder::builder::arg::Arg::long(&v190, &v2, "ignore-backups");
    clap_builder::builder::arg::Arg::help(&v2, &v190, "Ignore entries which end with ~.");
    clap_builder::builder::arg::Arg::action(&v138, &v2, 2);
    clap_builder::builder::command::Command::arg(&v190, &v91, &v138);
    clap_builder::builder::arg::Arg::new(&v91, "sort");
    clap_builder::builder::arg::Arg::long(&v2, &v91, "sort");
    clap_builder::builder::arg::Arg::help(&v91, &v2, "Sort by <field>: name, none (-U), time (-t), size (-S), extension (-X) or width");
    clap_builder::builder::arg::Arg::value_name(&v2, &v91, "field");
    v93 = struct112 {
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
    v143 = <uucore::parser::shortcut_value_parser::ShortcutValueParser as core::convert::From<I>>::from(&v93);
    clap_builder::builder::arg::Arg::value_parser(&v93, &v2, &v143);
    memcpy(&v2, &v93, 584);
    v46 = 128 | v112;
    v47 = *(&v113 as &i32);
    v79 = &anon.3f7e092f2ea554bdd060175bd8ea63d9.21.llvm.16502254941234113161;
    v80 = 4;
    v81 = &anon.f45a42eab3604eaa40558bbeffd2bfb7.11.llvm.10979288589332586409;
    v82 = 1;
    v83 = &anon.f45a42eab3604eaa40558bbeffd2bfb7.12.llvm.10979288589332586409;
    v84 = 1;
    v85 = &anon.f45a42eab3604eaa40558bbeffd2bfb7.13.llvm.10979288589332586409;
    v86 = 1;
    v87 = &anon.f45a42eab3604eaa40558bbeffd2bfb7.14.llvm.10979288589332586409;
    v88 = 1;
    v89 = &anon.f45a42eab3604eaa40558bbeffd2bfb7.15.llvm.10979288589332586409;
    v90 = 1;
    v105 = v89;
    v106 = 1;
    v103 = v87;
    v104 = 1;
    v101 = v85;
    v102 = 1;
    v97 = *(&v83 as &i128);
    v95 = *(&v81 as &i128);
    v91 = *(&v79 as &i128);
    clap_builder::builder::arg::Arg::overrides_with_all(&v143, &v2, &v93);
    clap_builder::builder::command::Command::arg(&v93, &v190, &v143);
    clap_builder::builder::arg::Arg::new(&v190, "S");
    clap_builder::builder::arg::Arg::short(&v2, &v190, 83);
    clap_builder::builder::arg::Arg::help(&v190, &v2, "Sort by file size, largest first.");
    v176 = *(&v89 as &i128);
    v169 = *(&v87 as &i128);
    v260 = *(&v79 as &i128);
    v261 = *(&v81 as &i128);
    v262 = *(&v83 as &i128);
    v162 = *(&v85 as &i128);
    v155 = v262;
    v148 = v261;
    v136 = v260;
    clap_builder::builder::arg::Arg::overrides_with_all(&v2, &v190, &v143);
    clap_builder::builder::arg::Arg::action(&v143, &v2, 2);
    clap_builder::builder::command::Command::arg(&v190, &v93, &v143);
    clap_builder::builder::arg::Arg::new(&v93, "t");
    clap_builder::builder::arg::Arg::short(&v2, &v93, 116);
    clap_builder::builder::arg::Arg::help(&v93, &v2, "Sort by modification time (the 'mtime' in the inode), newest first.");
    v177 = *(&v89 as &i128);
    v170 = *(&v87 as &i128);
    v263 = *(&v79 as &i128);
    v264 = *(&v81 as &i128);
    v265 = *(&v83 as &i128);
    v163 = *(&v85 as &i128);
    v156 = v265;
    v149 = v264;
    v141 = v263;
    clap_builder::builder::arg::Arg::overrides_with_all(&v2, &v93, &v143);
    clap_builder::builder::arg::Arg::action(&v143, &v2, 2);
    clap_builder::builder::command::Command::arg(&v93, &v190, &v143);
    clap_builder::builder::arg::Arg::new(&v190, "v");
    clap_builder::builder::arg::Arg::short(&v2, &v190, 118);
    clap_builder::builder::arg::Arg::help(&v190, &v2, "Natural sort of (version) numbers in the filenames.");
    v178 = *(&v89 as &i128);
    v171 = *(&v87 as &i128);
    v266 = *(&v79 as &i128);
    v267 = *(&v81 as &i128);
    v268 = *(&v83 as &i128);
    v164 = *(&v85 as &i128);
    v157 = v268;
    v150 = v267;
    v142 = v266;
    clap_builder::builder::arg::Arg::overrides_with_all(&v2, &v190, &v143);
    clap_builder::builder::arg::Arg::action(&v143, &v2, 2);
    clap_builder::builder::command::Command::arg(&v190, &v93, &v143);
    clap_builder::builder::arg::Arg::new(&v93, "X");
    clap_builder::builder::arg::Arg::short(&v2, &v93, 88);
    clap_builder::builder::arg::Arg::help(&v93, &v2, "Sort alphabetically by entry extension.");
    v175 = *(&v89 as &i128);
    v169 = *(&v87 as &i128);
    v269 = *(&v79 as &i128);
    v270 = *(&v81 as &i128);
    v271 = *(&v83 as &i128);
    v161 = *(&v85 as &i128);
    v153 = v271;
    v147 = v270;
    v143 = v269;
    clap_builder::builder::arg::Arg::overrides_with_all(&v2, &v93, &v143);
    clap_builder::builder::arg::Arg::action(&v143, &v2, 2);
    clap_builder::builder::command::Command::arg(&v93, &v190, &v143);
    clap_builder::builder::arg::Arg::new(&v190, "U");
    clap_builder::builder::arg::Arg::short(&v2, &v190, 85);
    clap_builder::builder::arg::Arg::help(&v190, &v2, "Do not sort; list the files in whatever order they are stored in the directory.  This is especially useful when listing very large directories, since not doing any sorting can be noticeably faster.");
    clap_builder::builder::arg::Arg::overrides_with_all(&v2, &v190, &v79);
    clap_builder::builder::arg::Arg::action(&v143, &v2, 2);
    clap_builder::builder::command::Command::arg(&v190, &v93, &v143);
    clap_builder::builder::arg::Arg::new(&v93, "dereference");
    clap_builder::builder::arg::Arg::short(&v2, &v93, 76);
    clap_builder::builder::arg::Arg::long(&v93, &v2, "dereference");
    clap_builder::builder::arg::Arg::help(&v2, &v93, "When showing file information for a symbolic link, show information for the file the link references rather than the link itself.");
    v201 = &anon.902b05dc61fef0513c491a1430f3d56c.9.llvm.11494158254235805547;
    v202 = 11;
    v203 = &anon.902b05dc61fef0513c491a1430f3d56c.11.llvm.11494158254235805547;
    v204 = 39;
    v205 = &anon.902b05dc61fef0513c491a1430f3d56c.10.llvm.11494158254235805547;
    v206 = 24;
    v153 = v205;
    v160 = 24;
    v147 = v203;
    v152 = 39;
    v138 = v201;
    v146 = 11;
    clap_builder::builder::arg::Arg::overrides_with_all(&v93, &v2, &v138);
    clap_builder::builder::arg::Arg::action(&v2, &v93, 2);
    clap_builder::builder::command::Command::arg(&v93, &v190, &v2);
    clap_builder::builder::arg::Arg::new(&v190, "dereference-command-line-symlink-to-dir");
    clap_builder::builder::arg::Arg::long(&v2, &v190, "dereference-command-line-symlink-to-dir");
    clap_builder::builder::arg::Arg::help(&v190, &v2, "Do not follow symlinks except when they link to directories and are given as command line arguments.");
    v272 = *(&v201 as &i128);
    v273 = *(&v203 as &i128);
    v153 = *(&v205 as &i128);
    v147 = v273;
    v138 = v272;
    clap_builder::builder::arg::Arg::overrides_with_all(&v2, &v190, &v138);
    clap_builder::builder::arg::Arg::action(&v138, &v2, 2);
    clap_builder::builder::command::Command::arg(&v190, &v93, &v138);
    clap_builder::builder::arg::Arg::new(&v93, "dereference-command-line");
    clap_builder::builder::arg::Arg::short(&v2, &v93, 72);
    clap_builder::builder::arg::Arg::long(&v93, &v2, "dereference-command-line");
    clap_builder::builder::arg::Arg::help(&v2, &v93, "Do not follow symlinks except when given as command line arguments.");
    clap_builder::builder::arg::Arg::overrides_with_all(&v93, &v2, &v201);
    clap_builder::builder::arg::Arg::action(&v2, &v93, 2);
    clap_builder::builder::command::Command::arg(&v93, &v190, &v2);
    clap_builder::builder::arg::Arg::new(&v190, "no-group");
    clap_builder::builder::arg::Arg::long(&v2, &v190, "no-group");
    clap_builder::builder::arg::Arg::short(&v190, &v2, 71);
    clap_builder::builder::arg::Arg::help(&v2, &v190, "Do not show group in long format.");
    clap_builder::builder::arg::Arg::action(&v138, &v2, 2);
    clap_builder::builder::command::Command::arg(&v190, &v93, &v138);
    clap_builder::builder::arg::Arg::new(&v93, "author");
    clap_builder::builder::arg::Arg::long(&v2, &v93, "author");
    clap_builder::builder::arg::Arg::help(&v93, &v2, "Show author in long format. On the supported platforms, the author always matches the file owner.");
    clap_builder::builder::arg::Arg::action(&v2, &v93, 2);
    clap_builder::builder::command::Command::arg(&v93, &v190, &v2);
    clap_builder::builder::arg::Arg::new(&v190, "all");
    clap_builder::builder::arg::Arg::short(&v2, &v190, 97);
    clap_builder::builder::arg::Arg::long(&v190, &v2, "all");
    v211 = &anon.902b05dc61fef0513c491a1430f3d56c.7.llvm.11494158254235805547;
    v212 = 3;
    v213 = &anon.902b05dc61fef0513c491a1430f3d56c.8.llvm.11494158254235805547;
    v214 = 10;
    v147 = &anon.902b05dc61fef0513c491a1430f3d56c.8.llvm.11494158254235805547;
    v152 = 10;
    v136 = v211;
    v146 = 3;
    clap_builder::builder::arg::Arg::overrides_with_all(&v2, &v190, &v136);
    clap_builder::builder::arg::Arg::help(&v190, &v2, "Do not ignore hidden files (files with names that start with '.').");
    clap_builder::builder::arg::Arg::action(&v2, &v190, 2);
    clap_builder::builder::command::Command::arg(&v190, &v93, &v2);
    clap_builder::builder::arg::Arg::new(&v93, "almost-all");
    clap_builder::builder::arg::Arg::short(&v2, &v93, 65);
    clap_builder::builder::arg::Arg::long(&v93, &v2, "almost-all");
    clap_builder::builder::arg::Arg::overrides_with_all(&v2, &v93, &v211);
    clap_builder::builder::arg::Arg::help(&v93, &v2, "In a directory, do not ignore all file names that start with '.', only ignore '.' and '..'.");
    clap_builder::builder::arg::Arg::action(&v2, &v93, 2);
    clap_builder::builder::command::Command::arg(&v93, &v190, &v2);
    clap_builder::builder::arg::Arg::new(&v190, "directory");
    clap_builder::builder::arg::Arg::short(&v2, &v190, 100);
    clap_builder::builder::arg::Arg::long(&v190, &v2, "directory");
    clap_builder::builder::arg::Arg::help(&v2, &v190, "Only list the names of directories, rather than listing directory contents. This will not follow symbolic links unless one of `--dereference-command-line (-H)`, `--dereference (-L)`, or `--dereference-command-line-symlink-to-dir` is specified.");
    clap_builder::builder::arg::Arg::action(&v136, &v2, 2);
    clap_builder::builder::command::Command::arg(&v190, &v93, &v136);
    clap_builder::builder::arg::Arg::new(&v93, "human-readable");
    clap_builder::builder::arg::Arg::short(&v2, &v93, 104);
    clap_builder::builder::arg::Arg::long(&v93, &v2, "human-readable");
    clap_builder::builder::arg::Arg::help(&v2, &v93, "Print human readable file sizes (e.g. 1K 234M 56G).");
    v136 = &anon.0961294ef8eb7b5431de28de81a5ae4f.10.llvm.9099371528486416302;
    v146 = 10;
    v147 = &anon.0961294ef8eb7b5431de28de81a5ae4f.12.llvm.9099371528486416302;
    v152 = 2;
    clap_builder::builder::arg::Arg::overrides_with_all(&v93, &v2, &v136);
    clap_builder::builder::arg::Arg::action(&v2, &v93, 2);
    clap_builder::builder::command::Command::arg(&v93, &v190, &v2);
    clap_builder::builder::arg::Arg::new(&v190, "kibibytes");
    clap_builder::builder::arg::Arg::short(&v2, &v190, 107);
    clap_builder::builder::arg::Arg::long(&v190, &v2, "kibibytes");
    clap_builder::builder::arg::Arg::help(&v2, &v190, "default to 1024-byte blocks for file system usage; used only with -s and per directory totals");
    clap_builder::builder::arg::Arg::action(&v136, &v2, 2);
    clap_builder::builder::command::Command::arg(&v190, &v93, &v136);
    clap_builder::builder::arg::Arg::new(&v93, "si");
    clap_builder::builder::arg::Arg::long(&v2, &v93, "si");
    clap_builder::builder::arg::Arg::help(&v93, &v2, "Print human readable file sizes using powers of 1000 instead of 1024.");
    v136 = &anon.0961294ef8eb7b5431de28de81a5ae4f.10.llvm.9099371528486416302;
    v146 = 10;
    v147 = &anon.0961294ef8eb7b5431de28de81a5ae4f.11.llvm.9099371528486416302;
    v152 = 14;
    clap_builder::builder::arg::Arg::overrides_with_all(&v2, &v93, &v136);
    clap_builder::builder::arg::Arg::action(&v136, &v2, 2);
    clap_builder::builder::command::Command::arg(&v93, &v190, &v136);
    clap_builder::builder::arg::Arg::new(&v190, "block-size");
    clap_builder::builder::arg::Arg::long(&v2, &v190, "block-size");
    memcpy(&v190, &v2, 584);
    v191 = 128 | v46;
    v192 = v47;
    clap_builder::builder::arg::Arg::value_name(&v2, &v190, "BLOCK_SIZE");
    clap_builder::builder::arg::Arg::help(&v190, &v2, "scale sizes by BLOCK_SIZE when printing them");
    v136 = &anon.0961294ef8eb7b5431de28de81a5ae4f.12.llvm.9099371528486416302;
    v146 = 2;
    v147 = &anon.0961294ef8eb7b5431de28de81a5ae4f.11.llvm.9099371528486416302;
    v152 = 14;
    clap_builder::builder::arg::Arg::overrides_with_all(&v2, &v190, &v136);
    clap_builder::builder::command::Command::arg(&v190, &v93, &v2);
    clap_builder::builder::arg::Arg::new(&v93, "inode");
    clap_builder::builder::arg::Arg::short(&v2, &v93, 105);
    clap_builder::builder::arg::Arg::long(&v93, &v2, "inode");
    clap_builder::builder::arg::Arg::help(&v2, &v93, "print the index number of each file");
    clap_builder::builder::arg::Arg::action(&v136, &v2, 2);
    clap_builder::builder::command::Command::arg(&v93, &v190, &v136);
    clap_builder::builder::arg::Arg::new(&v190, "reverse");
    clap_builder::builder::arg::Arg::short(&v2, &v190, 114);
    clap_builder::builder::arg::Arg::long(&v190, &v2, "reverse");
    clap_builder::builder::arg::Arg::help(&v2, &v190, "Reverse whatever the sorting method is e.g., list files in reverse alphabetical order, youngest first, smallest first, or whatever.");
    clap_builder::builder::arg::Arg::action(&v136, &v2, 2);
    clap_builder::builder::command::Command::arg(&v190, &v93, &v136);
    clap_builder::builder::arg::Arg::new(&v93, "recursive");
    clap_builder::builder::arg::Arg::short(&v2, &v93, 82);
    clap_builder::builder::arg::Arg::long(&v93, &v2, "recursive");
    clap_builder::builder::arg::Arg::help(&v2, &v93, "List the contents of all directories recursively.");
    clap_builder::builder::arg::Arg::action(&v136, &v2, 2);
    clap_builder::builder::command::Command::arg(&v93, &v190, &v136);
    clap_builder::builder::arg::Arg::new(&v190, "width");
    clap_builder::builder::arg::Arg::long(&v2, &v190, "width");
    clap_builder::builder::arg::Arg::short(&v190, &v2, 119);
    clap_builder::builder::arg::Arg::help(&v2, &v190, "Assume that the terminal is COLS columns wide.");
    clap_builder::builder::arg::Arg::value_name(&v136, &v2, "COLS");
    clap_builder::builder::command::Command::arg(&v190, &v93, &v136);
    clap_builder::builder::arg::Arg::new(&v93, "size");
    clap_builder::builder::arg::Arg::short(&v2, &v93, 115);
    clap_builder::builder::arg::Arg::long(&v93, &v2, "size");
    clap_builder::builder::arg::Arg::help(&v2, &v93, "print the allocated size of each file, in blocks");
    clap_builder::builder::arg::Arg::action(&v136, &v2, 2);
    clap_builder::builder::command::Command::arg(&v93, &v190, &v136);
    clap_builder::builder::arg::Arg::new(&v190, "color");
    clap_builder::builder::arg::Arg::long(&v2, &v190, "color");
    clap_builder::builder::arg::Arg::help(&v190, &v2, "Color output based on file type.");
    v10 = &g_434cef;
    v11 = 6;
    v8 = 0x8000000000000000;
    v9 = v0;
    v1 = 0;
    v6 = 8;
    v7 = 0;
    v12 = 0;
    v136 = clap_builder::builder::possible_value::PossibleValue::alias(&v1, "yes");
    v70 = clap_builder::builder::possible_value::PossibleValue::alias(&v136, "force");
    v10 = &g_423f34;
    v11 = 4;
    v8 = 0x8000000000000000;
    v9 = v0;
    v1 = 0;
    v6 = 8;
    v7 = 0;
    v12 = 0;
    v136 = clap_builder::builder::possible_value::PossibleValue::alias(&v1, "tty");
    v50 = clap_builder::builder::possible_value::PossibleValue::alias(&v136, "if-tty");
    v10 = &g_434d06;
    v11 = 5;
    v8 = 0x8000000000000000;
    v9 = v0;
    v1 = 0;
    v6 = 8;
    v7 = 0;
    v12 = 0;
    v136 = clap_builder::builder::possible_value::PossibleValue::alias(&v1, "no");
    v59 = clap_builder::builder::possible_value::PossibleValue::alias(&v136, "none");
    v274 = *(&v70.field_16 as &i128);
    v275 = v70.field_48;
    v276 = *(&v50.field_16 as &i128);
    v277 = v50.field_48;
    v1 = struct144 {
        field_0: v70.field_0
        field_16: v274
        field_32: v75
        field_48: v275
        field_64: v70.field_64
        field_72: v50.field_0
        field_88: v276
        field_104: v55
        field_120: v277
        field_136: v50.field_64
    };
    v22 = v59.field_64;
    memcpy(&v21, &v59, 16);
    v20 = v65;
    memcpy(&v19, &v59, 16);
    memcpy(&v18, &v59, 16);
    v136 = <uucore::parser::shortcut_value_parser::ShortcutValueParser as core::convert::From<I>>::from(&v1);
    clap_builder::builder::arg::Arg::value_parser(&v1, &v190, &v136);
    memcpy(&v190, &v1, 584);
    v191 = 128 | v46;
    v192 = v47;
    v136 = v116;
    clap_builder::builder::arg::Arg::num_args(&v1, &v190, &v136);
    clap_builder::builder::command::Command::arg(&v190, &v93, &v1);
    clap_builder::builder::arg::Arg::new(&v93, "indicator-style");
    clap_builder::builder::arg::Arg::long(&v1, &v93, "indicator-style");
    clap_builder::builder::arg::Arg::help(&v93, &v1, "Append indicator with style WORD to entry names: none (default),  slash (-p), file-type (--file-type), classify (-F)");
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
    v136 = <uucore::parser::shortcut_value_parser::ShortcutValueParser as core::convert::From<I>>::from(&v3);
    clap_builder::builder::arg::Arg::value_parser(&v3, &v93, &v136);
    v128 = &anon.f45a42eab3604eaa40558bbeffd2bfb7.17.llvm.10979288589332586409;
    v129 = 9;
    v130 = &anon.f45a42eab3604eaa40558bbeffd2bfb7.16.llvm.10979288589332586409;
    v131 = 1;
    v132 = &anon.f45a42eab3604eaa40558bbeffd2bfb7.18.llvm.10979288589332586409;
    v133 = 8;
    v134 = &anon.3f7e092f2ea554bdd060175bd8ea63d9.30.llvm.16502254941234113161;
    v135 = 15;
    v101 = v134;
    v102 = 15;
    v97 = v132;
    v100 = 8;
    v95 = v130;
    v96 = 1;
    v93 = *(&v128 as &i128);
    clap_builder::builder::arg::Arg::overrides_with_all(&v136, &v3, &v93);
    clap_builder::builder::command::Command::arg(&v93, &v190, &v136);
    clap_builder::builder::arg::Arg::new(&v190, "classify");
    clap_builder::builder::arg::Arg::short(&v3, &v190, 70);
    clap_builder::builder::arg::Arg::long(&v190, &v3, "classify");
    clap_builder::builder::arg::Arg::help(&v3, &v190, "Append a character to each file name indicating the file type. Also, for regular files that are executable, append '*'. The file type indicators are '/' for directories, '@' for symbolic links, '|' for FIFOs, '=' for sockets, '>' for doors, and nothing for regular files. when may be omitted, or one of:\n\tnone - Do not classify. This is the default.\n\tauto - Only classify if standard output is a terminal.\n\talways - Always classify.\nSpecifying --classify and no when is equivalent to --classify=always. This will not follow symbolic links listed on the command line unless the --dereference-command-line (-H), --dereference (-L), or --dereference-command-line-symlink-to-dir options are specified.");
    clap_builder::builder::arg::Arg::value_name(&v190, &v3, "when");
    v10 = &g_434cef;
    v11 = 6;
    v8 = 0x8000000000000000;
    v9 = v0;
    v1 = 0;
    v6 = 8;
    v7 = 0;
    v12 = 0;
    v136 = clap_builder::builder::possible_value::PossibleValue::alias(&v1, "yes");
    v71 = clap_builder::builder::possible_value::PossibleValue::alias(&v136, "force");
    v10 = &g_423f34;
    v11 = 4;
    v8 = 0x8000000000000000;
    v9 = v0;
    v1 = 0;
    v6 = 8;
    v7 = 0;
    v12 = 0;
    v136 = clap_builder::builder::possible_value::PossibleValue::alias(&v1, "tty");
    v51 = clap_builder::builder::possible_value::PossibleValue::alias(&v136, "if-tty");
    v10 = &g_434d06;
    v11 = 5;
    v8 = 0x8000000000000000;
    v9 = v0;
    v1 = 0;
    v6 = 8;
    v7 = 0;
    v12 = 0;
    v144 = clap_builder::builder::possible_value::PossibleValue::alias(&v1, "no");
    v61 = clap_builder::builder::possible_value::PossibleValue::alias(&v144, "none");
    v278 = *(&v71.field_16 as &i128);
    v279 = v71.field_48;
    v280 = *(&v51.field_16 as &i128);
    v281 = v51.field_48;
    v1 = struct144 {
        field_0: v71.field_0
        field_16: v278
        field_32: v75
        field_48: v279
        field_64: v71.field_64
        field_72: v51.field_0
        field_88: v280
        field_104: v55
        field_120: v281
        field_136: v51.field_64
    };
    v22 = v61.field_64;
    memcpy(&v21, &v61, 16);
    v20 = v65;
    memcpy(&v19, &v61, 16);
    memcpy(&v18, &v61, 16);
    v145 = <uucore::parser::shortcut_value_parser::ShortcutValueParser as core::convert::From<I>>::from(&v1);
    clap_builder::builder::arg::Arg::value_parser(&v1, &v190, &v145);
    clap_builder::builder::arg::Arg::default_missing_value(&v190, &v1);
    memcpy(&v1, &v190, 584);
    v46 = 128 | v191;
    v47 = v192;
    clap_builder::builder::arg::Arg::num_args(&v190, &v1, &v117);
    v282 = *(&v128 as &i128);
    v283 = *(&v130 as &i128);
    v284 = *(&v132 as &i128);
    v166 = *(&v134 as &i128);
    v154 = v284;
    v151 = v283;
    v136 = v282;
    clap_builder::builder::arg::Arg::overrides_with_all(&v1, &v190, &v145);
    clap_builder::builder::command::Command::arg(&v190, &v93, &v1);
    clap_builder::builder::arg::Arg::new(&v93, "file-type");
    clap_builder::builder::arg::Arg::long(&v1, &v93, "file-type");
    clap_builder::builder::arg::Arg::help(&v93, &v1, "Same as --classify, but do not append '*'");
    v285 = *(&v128 as &i128);
    v286 = *(&v130 as &i128);
    memcpy(&v166, &v134, 16);
    v153 = *(&v132 as &i128);
    v147 = v286;
    v138 = v285;
    clap_builder::builder::arg::Arg::overrides_with_all(&v1, &v93, &v145);
    clap_builder::builder::arg::Arg::action(&v145, &v1, 2);
    clap_builder::builder::command::Command::arg(&v93, &v190, &v145);
    clap_builder::builder::arg::Arg::new(&v190, "p");
    clap_builder::builder::arg::Arg::short(&v1, &v190, 112);
    clap_builder::builder::arg::Arg::help(&v190, &v1, "Append / indicator to directories.");
    clap_builder::builder::arg::Arg::overrides_with_all(&v1, &v190, &v128);
    clap_builder::builder::arg::Arg::action(&v145, &v1, 2);
    clap_builder::builder::command::Command::arg(&v190, &v93, &v145);
    clap_builder::builder::arg::Arg::new(&v93, "time-style");
    clap_builder::builder::arg::Arg::long(&v1, &v93, "time-style");
    clap_builder::builder::arg::Arg::help(&v93, &v1, "time/date format with -l; see TIME_STYLE below");
    clap_builder::builder::arg::Arg::value_name(&v1, &v93, "TIME_STYLE");
    clap_builder::builder::arg::Arg::env(&v93, &v1, "TIME_STYLE");
    clap_builder::builder::arg::Arg::value_parser(&v1, &v93);
    v91 = struct16 {
        field_0: &anon.3f7e092f2ea554bdd060175bd8ea63d9.31.llvm.16502254941234113161
        field_8: 10
    };
    clap_builder::builder::arg::Arg::overrides_with_all(&v145, &v1, &v91);
    clap_builder::builder::command::Command::arg(&v91, &v190, &v145);
    clap_builder::builder::arg::Arg::new(&v190, "full-time");
    clap_builder::builder::arg::Arg::long(&v1, &v190, "full-time");
    clap_builder::builder::arg::Arg::overrides_with(&v190, &v1, "full-time");
    clap_builder::builder::arg::Arg::help(&v1, &v190, "like -l --time-style=full-iso");
    clap_builder::builder::arg::Arg::action(&v145, &v1, 2);
    clap_builder::builder::command::Command::arg(&v190, &v91, &v145);
    clap_builder::builder::arg::Arg::new(&v91, "context");
    clap_builder::builder::arg::Arg::short(&v1, &v91, 90);
    clap_builder::builder::arg::Arg::long(&v91, &v1, "context");
    clap_builder::builder::arg::Arg::help(&v1, &v91, "print any security context of each file (not enabled)");
    clap_builder::builder::arg::Arg::action(&v145, &v1, 2);
    clap_builder::builder::command::Command::arg(&v91, &v190, &v145);
    clap_builder::builder::arg::Arg::new(&v190, "group-directories-first");
    clap_builder::builder::arg::Arg::long(&v1, &v190, "group-directories-first");
    clap_builder::builder::arg::Arg::help(&v190, &v1, "group directories before files; can be augmented with a --sort option, but any use of --sort=none (-U) disables grouping");
    clap_builder::builder::arg::Arg::action(&v1, &v190, 2);
    clap_builder::builder::command::Command::arg(&v190, &v91, &v1);
    clap_builder::builder::arg::Arg::new(&v91, "paths");
    clap_builder::builder::arg::Arg::action(&v1, &v91, 1);
    clap_builder::builder::arg::Arg::value_hint(&v91, &v1, 2);
    v136 = 2;
    clap_builder::builder::arg::Arg::value_parser(&v1, &v91, &v136);
    clap_builder::builder::command::Command::arg(&v91, &v190, &v1);
    clap_builder::builder::command::Command::after_help(a0, &v91, "The TIME_STYLE argument can be full-iso, long-iso, iso, locale or +FORMAT. FORMAT is interpreted like in date. Also the TIME_STYLE environment variable sets the default style to use.");
    return a0;
}
