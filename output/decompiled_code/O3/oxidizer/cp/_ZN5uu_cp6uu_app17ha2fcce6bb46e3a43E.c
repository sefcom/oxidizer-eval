fn uu_cp::uu_app(a0: u32) -> u64 {
    let v0: i192;  // [sp-0xad8], Other Possible Types: struct712, Enum, struct24, struct64, struct592, struct8
    let v1: i64;  // [sp-0xad0]
    let v2: i64;  // [sp-0xac8]
    let v3: i64;  // [sp-0xac0]
    let v4: i64;  // [sp-0xab8]
    let v5: i64;  // [sp-0xab0]
    let v6: i64;  // [sp-0xaa0]
    let v7: i128;  // [sp-0xa98]
    let v8: i64;  // [sp-0xa88]
    let v9: i128;  // [sp-0xa80]
    let v10: i64;  // [sp-0xa70], Other Possible Types: struct16
    let v11: i64;  // [sp-0xa68]
    let v12: i128;  // [bp-0xa60]
    let v13: struct16;  // [sp-0xa58]
    let v14: i64;  // [sp-0xa50]
    let v15: i128;  // [bp-0xa48]
    let v16: i64;  // [sp-0xa38]
    let v17: i128;  // [sp-0xa30]
    let v18: i64;  // [sp-0xa20]
    let v19: i128;  // [sp-0xa18]
    let v20: i64;  // [sp-0xa08]
    let v21: i128;  // [sp-0xa00]
    let v22: i64;  // [sp-0x9f0]
    let v23: i128;  // [sp-0x9e8]
    let v24: i64;  // [sp-0x9d8]
    let v25: i128;  // [sp-0x9d0]
    let v26: i64;  // [sp-0x9c0]
    let v27: i128;  // [sp-0x9b8]
    let v28: i64;  // [sp-0x9a8]
    let v29: i128;  // [sp-0x9a0]
    let v30: struct16;  // [sp-0x998]
    let v31: i64;  // [sp-0x990]
    let v32: i128;  // [bp-0x988]
    let v33: i128;  // [bp-0x980]
    let v34: i64;  // [sp-0x978]
    let v35: i128;  // [bp-0x970]
    let v36: i64;  // [sp-0x960]
    let v37: i128;  // [sp-0x958]
    let v38: i64;  // [sp-0x948]
    let v39: i128;  // [bp-0x940]
    let v40: i128;  // [bp-0x938]
    let v41: i64;  // [sp-0x930]
    let v42: i64;  // [sp-0x928]
    let v43: i64;  // [sp-0x920]
    let v44: i128;  // [sp-0x918]
    let v45: i64;  // [sp-0x908]
    let v46: i128;  // [sp-0x900]
    let v47: i128;  // [sp-0x8f0]
    let v48: i64;  // [sp-0x8e0]
    let v49: i128;  // [sp-0x8d8]
    let v50: i64;  // [sp-0x8c8]
    let v51: i64;  // [sp-0x8c0]
    let v52: i64;  // [sp-0x8b8]
    let v53: i64;  // [sp-0x8b0]
    let v54: i64;  // [sp-0x8a8]
    let v55: i64;  // [sp-0x898]
    let v56: i32;  // [sp-0x890]
    let v57: i16;  // [bp-0x88c]
    let v58: i64;  // [sp-0x878]
    let v59: i64;  // [sp-0x870]
    let v60: i64;  // [sp-0x81c]
    let v61: i32;  // [sp-0x814]
    let v62: i5696;  // [bp-0x808], Other Possible Types: struct712, Enum, struct592
    let v63: i64;  // [sp-0x800]
    let v64: i64;  // [sp-0x7f8]
    let v65: i64;  // [sp-0x7e0]
    let v66: i64;  // [sp-0x7d0]
    let v67: i64;  // [sp-0x7b8]
    let v68: i64;  // [sp-0x7a0]
    let v69: i64;  // [sp-0x798]
    let v70: i128;  // [sp-0x790]
    let v71: struct16;  // [sp-0x788]
    let v72: i64;  // [sp-0x780]
    let v73: i128;  // [bp-0x778]
    let v74: i64;  // [sp-0x768]
    let v75: i128;  // [sp-0x760]
    let v76: i64;  // [sp-0x750]
    let v77: i128;  // [sp-0x748]
    let v78: i64;  // [sp-0x738]
    let v79: i128;  // [sp-0x730]
    let v80: i64;  // [sp-0x720]
    let v81: i128;  // [sp-0x718]
    let v82: i64;  // [sp-0x708]
    let v83: i128;  // [sp-0x700]
    let v84: i64;  // [sp-0x6f0]
    let v85: i128;  // [sp-0x6e8]
    let v86: struct16;  // [sp-0x6e0]
    let v87: i64;  // [sp-0x6d8]
    let v88: i128;  // [bp-0x6d0]
    let v89: i64;  // [sp-0x6c0]
    let v90: i128;  // [bp-0x6b8]
    let v91: i128;  // [bp-0x6b0]
    let v92: i64;  // [sp-0x6a8]
    let v93: i128;  // [bp-0x6a0]
    let v94: i8;  // [bp-0x698]
    let v95: i64;  // [sp-0x690]
    let v96: i128;  // [sp-0x688]
    let v97: i64;  // [sp-0x678]
    let v98: i128;  // [bp-0x670]
    let v99: i64;  // [sp-0x668]
    let v100: i128;  // [bp-0x660]
    let v101: i64;  // [sp-0x658]
    let v102: i192;  // [sp-0x650]
    let v103: i128;  // [sp-0x648]
    let v104: i64;  // [sp-0x638]
    let v105: i64;  // [sp-0x610]
    let v106: i64;  // [sp-0x5f8]
    let v107: i64;  // [sp-0x5f0]
    let v108: i64;  // [sp-0x5e8]
    let v109: i64;  // [sp-0x5e0]
    let v110: i64;  // [bp-0x5d8]
    let v111: i128;  // [bp-0x5cb]
    let v112: i64;  // [bp-0x5c8]
    let v113: i64;  // [bp-0x5c4]
    let v114: i32;  // [sp-0x5c0]
    let v115: i16;  // [bp-0x5bc]
    let v116: i8;  // [sp-0x5bb]
    let v117: i16;  // [sp-0x5ba]
    let v118: i8;  // [bp-0x54c]
    let v119: i8;  // [bp-0x544]
    let v120: i4736;  // [sp-0x538], Other Possible Types: Enum, struct24, struct592, Argument
    let v121: i64;  // [bp-0x530], Other Possible Types: Argument
    let v122: i64;  // [sp-0x528]
    let v123: i64;  // [sp-0x520]
    let v124: i64;  // [sp-0x518]
    let v125: i64;  // [sp-0x510]
    let v126: i64;  // [sp-0x500]
    let v127: i64;  // [sp-0x4e8]
    let v128: struct16;  // [sp-0x4d0], Other Possible Types: i64
    let v129: i64;  // [sp-0x4c8]
    let v130: i64;  // [bp-0x4c0]
    let v131: struct16;  // [sp-0x4b8]
    let v132: i64;  // [sp-0x4b0]
    let v133: i128;  // [bp-0x4a8]
    let v134: i64;  // [sp-0x498]
    let v135: i128;  // [sp-0x490]
    let v136: i64;  // [sp-0x480]
    let v137: i128;  // [sp-0x478]
    let v138: i64;  // [sp-0x468]
    let v139: i128;  // [sp-0x460]
    let v140: i64;  // [sp-0x450]
    let v141: i128;  // [sp-0x448]
    let v142: i64;  // [sp-0x438]
    let v143: i128;  // [sp-0x430]
    let v144: i64;  // [sp-0x420]
    let v145: i128;  // [sp-0x418]
    let v146: i64;  // [sp-0x408]
    let v147: i128;  // [sp-0x400]
    let v148: i64;  // [sp-0x3f0]
    let v149: i128;  // [bp-0x3e8]
    let v150: i128;  // [bp-0x3e0]
    let v151: i64;  // [sp-0x3d8]
    let v152: i128;  // [bp-0x3d0]
    let v153: i64;  // [sp-0x3c0]
    let v154: i128;  // [sp-0x3b8]
    let v155: i64;  // [sp-0x3a8]
    let v156: i128;  // [sp-0x3a0]
    let v157: i64;  // [sp-0x390]
    let v158: i64;  // [sp-0x388]
    let v159: i64;  // [sp-0x380]
    let v160: i128;  // [sp-0x378]
    let v161: i64;  // [sp-0x368]
    let v162: i64;  // [sp-0x340]
    let v163: i64;  // [sp-0x328]
    let v164: i64;  // [sp-0x320]
    let v165: i64;  // [sp-0x318]
    let v166: i64;  // [sp-0x310]
    let v167: i64;  // [sp-0x308]
    let v168: i128;  // [bp-0x2fb]
    let v169: i128;  // [sp-0x2f8]
    let v170: i32;  // [sp-0x2f0]
    let v171: i8;  // [bp-0x2ec]
    let v172: i16;  // [sp-0x2eb]
    let v173: i8;  // [bp-0x2ea]
    let v174: i8;  // [sp-0x2e9]
    let v175: i64;  // [sp-0x2e0]
    let v176: i128;  // [bp-0x2d8], Other Possible Types: struct32, struct24, struct8, struct592
    let v177: i64;  // [sp-0x2d0]
    let v178: i64;  // [sp-0x2c8]
    let v179: i64;  // [sp-0x2c0]
    let v180: i64;  // [sp-0x2b8]
    let v181: i8;  // [sp-0x8c]
    let v182: i16;  // [sp-0x8b]
    let v183: i8;  // [sp-0x89]
    let v184: i192;  // [sp-0x78], Other Possible Types: String
    let v185: i8;  // [bp-0x60]
    let v186: i8;  // [bp-0x50]
    let v187: i8;  // [bp-0x40]
    let v189: i64;  // rbx
    let v190: i128;  // xmm0
    let v191: i256;  // ymm0
    let v193: i128;  // xmm0
    let v194: i256;  // ymm0
    let v195: i64;  // rbx
    let v196: i128;  // xmm0
    let v197: i128;  // xmm0
    let v198: i64;  // r14
    let v199: i64;  // rax
    let v200: i64;  // rcx
    let v201: i64;  // rbp
    let v202: i128;  // xmm0
    let v203: i128;  // xmm1
    let v204: i16;  // r13w
    let v205: i128;  // xmm0
    let v206: i64;  // rbx
    let v207: i128;  // xmm0
    let v208: i128;  // xmm1
    let v209: i64;  // r13
    let v210: i64;  // rax
    let v211: i64;  // rcx
    let v212: i64;  // r14
    let v213: i128;  // xmm0
    let v214: i256;  // ymm0
    let v215: i128;  // xmm0
    let v216: i256;  // ymm0
    let v218: i64;  // r14
    let v219: i64;  // rax
    let v220: i64;  // rcx
    let v221: i64;  // rax
    let v222: i64;  // rcx
    let v223: i64;  // rbx
    let v226: i64;  // r14
    let v227: i64;  // rax
    let v228: i64;  // rcx
    let v229: i64;  // rax
    let v230: i64;  // rcx
    let v231: i64;  // r14
    let v232: i64;  // rsi
    let v233: i64;  // rax
    let v234: i64;  // rcx
    let v235: i64;  // rax
    let v236: i64;  // rcx
    let v237: i64;  // r14
    let v238: i64;  // r14
    let v239: i64;  // rax
    let v240: i64;  // rcx
    let v241: i64;  // rax
    let v242: i64;  // rcx
    let v243: i64;  // rbx
    let v244: i64;  // r14
    let v246: i64;  // rax
    let v247: i128;  // xmm1
    let v248: i64;  // rax
    let v249: i64;  // rcx
    let v250: i64;  // rbx
    let v251: i64;  // r13
    let v252: i64;  // rax
    let v253: i64;  // rcx
    let v254: i64;  // rax
    let v255: i64;  // rcx
    let v256: i64;  // rax
    let v257: i64;  // rcx
    let v258: i64;  // rsi
    let v259: i64;  // rax
    let v260: i64;  // rcx
    let v261: i64;  // rax
    let v262: i64;  // rcx
    let v263: i64;  // rbx
    let v264: i64;  // r14
    let v265: i64;  // r14
    let v266: i64;  // rax
    let v267: i64;  // rcx
    let v268: i64;  // rbx
    let v269: i64;  // rbx
    let v270: i64;  // rsi
    let v271: i64;  // rax
    let v272: i64;  // rcx
    let v273: i64;  // rax
    let v274: i64;  // rcx
    let v275: i64;  // rbx
    let v276: i64;  // rsi
    let v277: i64;  // rax
    let v278: i64;  // rcx
    let v279: i64;  // rax
    let v280: i64;  // rcx
    let v281: i64;  // rbx
    let v282: i64;  // rax
    let v284: i32;  // r13d
    let v285: i32;  // r15d
    let v287: i64;  // r13
    let v288: i64;  // rbx
    let v289: i64;  // r14
    let v290: i64;  // rax
    let v291: i64;  // rcx
    let v292: i64;  // rax
    let v294: i32;  // ecx
    let v295: i64;  // rax
    let v296: i64;  // rcx
    let v297: i64;  // rbx
    let v298: i64;  // rbx
    let v300: i64;  // rax
    let v301: i64;  // rcx
    let v302: i64;  // rax
    let v303: i64;  // rcx
    let v304: i64;  // rbx
    let v305: i64;  // r14
    let v306: i64;  // rax
    let v307: i64;  // rcx
    let v308: i64;  // rax
    let v309: i64;  // rcx
    let v310: i64;  // r14
    let v311: i64;  // r14
    let v312: i64;  // rax
    let v313: i64;  // rcx
    let v314: i64;  // rax
    let v315: i64;  // rcx
    let v316: i64;  // rbx
    let v317: i64;  // rax
    let v318: i64;  // rcx
    let v319: i64;  // rax
    let v320: i64;  // rcx
    let v321: i64;  // rax
    let v322: i64;  // rcx
    let v323: i64;  // rax
    let v324: i64;  // rcx
    let v325: i64;  // rax
    let v326: i64;  // rcx
    let v327: i64;  // rbx
    let v328: i64;  // rbx
    let v329: i64;  // rax
    let v330: i64;  // rcx
    let v331: i64;  // rax
    let v332: i64;  // rcx
    let v333: i64;  // rbx
    let v334: i64;  // rax
    let v335: i64;  // rcx
    let v336: i64;  // rbx
    let v337: i64;  // rax
    let v338: i64;  // rcx

    if _ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 != 2 {
        once_cell::imp::OnceCell<T>::initialize(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
    }
    v0 = clap_builder::builder::command::Command::new(g_55c040, g_55c048);
    v58 = &g_425e40;
    v59 = &g_1;
    memcpy(&v62, &v0, 712);
    v0 = clap_builder::builder::command::Command::about(&v62, &g_425e46, 56);
    v120 = uucore::format_usage(&g_425e7e, 104);
    v189 = v120;
    if v189 != 0x8000000000000000 {
        v190 = *((&v120 as &char + 8) as &i128);
        v62 = v190;
    }
    v45 = v189;
    v193 = v62;
    vvar_14{reg 224} = ((((vvar_344{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_343{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_357{reg 224}))
    v46 = v193;
    memcpy(&v62, &v0, 712);
    v120 = Argument {
        value: "Do not copy a non-directory that has an existing destination with the same or newer modification timestamp;\ninstead, silently skip the file without failing. If timestamps are being preserved, the comparison is to the\nsource timestamp truncated to the resolutions of the destination file system and of the system calls used to\nupdate timestamps; this avoids duplicate work if several cp -pu commands are executed with the same source\nand destination. This option is ignored if the -n or --no-clobber option is also specified. Also, if\n--preserve=links is also specified (like with cp -au for example), that will take precedence; consequently,\ndepending on the order that files are processed from the source, newer files in the destination may be replaced,\nto mirror hard links in the source. which gives more control over which existing files in the destination are\nreplaced, and its value can be one of the following:\n\n* all    This is the default operation when an --update option is not specified, and results in all existing files in the destination being replaced.\n* none   This is similar to the --no-clobber option, in that no files in the destination are replaced, but also skipping a file does not induce a failure.\n* older  This is the default operation when --update is specified, and results in files being replaced if they’re older than the corresponding source file."
        formatter: <&T as core::fmt::Display>::fmt
    };
    v121 = Argument {
        value: <&T as core::fmt::Display>::fmt
        formatter: "The backup suffix is '~', unless set with --suffix or SIMPLE_BACKUP_SUFFIX.\nThe version control method may be selected via the --backup option or through\nthe VERSION_CONTROL environment variable.  Here are the values:\n\n  none, off       never make backups (even if --backup is given)\n  numbered, t     make numbered backups\n  existing, nil   numbered if numbered backups exist, simple otherwise\n  simple, never   always make simple backups"
    };
    v123 = <&T as core::fmt::Display>::fmt;
    v0 = struct8 {
        field_24: &g_555270
    };
    v184 = alloc::fmt::format::format_inner(&v0);
    v195 = v184;
    if v195 != 0x8000000000000000 {
        v196 = *((&v184 as &char + 8) as &i128);
        vvar_14{reg 224} = ((vvar_14{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_376{reg 224}))
        v0 = v196;
    }
    v99 = v195;
    v197 = v0;
    v100 = v197;
    memcpy(&v0, &v62, 700);
    v60 = 584115552392 | v118;
    v61 = v119;
    v130 = 0;
    v133 = 0;
    v135 = 0;
    v137 = 0;
    v139 = 0;
    v141 = 0;
    v143 = 0;
    v145 = 0;
    v147 = 0;
    v149 = 0;
    v152 = 0;
    v154 = 0;
    v156 = 0;
    v120 = 0;
    v122 = 0;
    v125 = 0;
    v126 = 0;
    v127 = &g_1;
    v128 = 0;
    v129 = &g_1;
    v132 = &g_1;
    v134 = &g_1;
    v136 = &g_1;
    v138 = &g_1;
    v140 = &g_1;
    v142 = &g_1;
    v144 = &g_1;
    v146 = &g_1;
    v148 = &g_1;
    v151 = &g_1;
    v153 = &g_1;
    v155 = &g_1;
    v157 = &g_1;
    v158 = 0;
    v159 = 0x8000000000000000;
    v161 = 0x8000000000000000;
    v175 = 9223372036854775809;
    v162 = 9223372036854775809;
    v163 = &g_418f70;
    v164 = &g_1;
    v165 = 0;
    v167 = 0;
    v169 = 4785074604081268;
    v170 = 0;
    v171 = 3337;
    v198 = v130;
    if !v198 {
        v128 = alloc::raw_vec::RawVec<T,A>::grow_one();
    }
    v199 = v129;
    v200 = v198 * &g_1;
    *((v199 + v200) as &&i64) = &g_426604;
    *((v199 + v200 + &g_1 as &u8) as &&i64) = &g_11;
    v130 = v198 + &g_1 as &u8;
    memcpy(&v62, &v120, 360);
    v201 = v152;
    memcpy(&v94, &v152, 176);
    v202 = v167;
    v203 = *((&(&v167)[1] as &char + 5) as &i128);
    v110 = v202;
    v111 = v203;
    v204 = v173;
    v93 = v201;
    v108 = &g_418f70;
    v109 = &g_1;
    v116 = v172;
    v117 = v204;
    v176 = struct32 {
        field_0: &g_418f70
        field_8: &g_1
        field_16: 0
        field_24: &g_1
    };
    v120 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v176);
    v93 = v122;
    v205 = v120;
    v91 = v205;
    memcpy(&v120, &v62, 360);
    v206 = v93;
    memcpy(&v152, &v94, 176);
    v207 = v110;
    v208 = v111;
    v167 = v207;
    v168 = v208;
    v152 = v206;
    v165 = &g_418f70;
    v166 = &g_1;
    v172 = &g_1;
    v173 = v204;
    *(&v176.field_24 as &struct8) = struct8 {
        field_0: &g_1
    };
    v62 = clap_builder::builder::arg::Arg::value_parser(&v120, &v176);
    v120 = 0;
    v121 = &g_1;
    v122 = 0;
    v120 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_20);
    v209 = v175;
    v210 = v121;
    v211 = v122;
    *((v210 + v211 + &g_11 as &u8) as &i128) = 161430769900542305735093317857520542068;
    *((v210 + v211 + &g_1 as &u8) as &i128) = 154358861582626654267935082475994706529;
    *((v210 + v211) as &i128) = 42894929792911105399975018643479097187;
    v122 = v211 + &g_20 as &u8;
    v212 = v120;
    v213 = *((&v120 as &char + 8) as &i128);
    vvar_513{reg 224} = (((((((((((((((((vvar_14{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_389{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_438{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_463{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_478{reg 224})) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | 0x79726f7463657269642d746567726174<256>) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | 0x74206f746e692073746e656d75677261<256>) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | 0x20454352554f53206c6c612079706f63<256>) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_512{reg 224}))
    v176 = v213;
    if v212 != 0x8000000000000000 {
        v215 = v176;
        vvar_518{reg 224} = ((vvar_513{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_517{reg 224}))
        v120 = v215;
    }
    v102 = v212;
    v103 = v120;
    memcpy(&v120, &v62, 592);
    v62 = clap_builder::builder::command::Command::arg(&v0, &v120);
    v12 = 0;
    v15 = 0;
    v17 = 0;
    v19 = 0;
    v21 = 0;
    v23 = 0;
    v25 = 0;
    v27 = 0;
    v29 = 0;
    v32 = 0;
    v35 = 0;
    v37 = 0;
    v39 = 0;
    v0 = 0;
    v2 = 0;
    v5 = 0;
    v6 = 0;
    v8 = &g_1;
    v10 = 0;
    v11 = &g_1;
    v14 = &g_1;
    v16 = &g_1;
    v18 = &g_1;
    v20 = &g_1;
    v22 = &g_1;
    v24 = &g_1;
    v26 = &g_1;
    v28 = &g_1;
    v31 = &g_1;
    v34 = &g_1;
    v36 = &g_1;
    v38 = &g_1;
    v41 = &g_1;
    v42 = 0;
    v43 = 0x8000000000000000;
    v45 = 0x8000000000000000;
    v48 = v209;
    v50 = &g_426604;
    v51 = &g_11;
    v52 = &g_426604;
    v53 = &g_11;
    v54 = 0;
    v55 = 4785074604081236;
    v56 = 0;
    v57 = 3337;
    v218 = v12;
    if !v218 {
        v10 = alloc::raw_vec::RawVec<T,A>::grow_one();
    }
    v219 = v11;
    v220 = v218 * &g_1;
    *((v219 + v220) as &&i64) = &g_418f70;
    *((v219 + v220 + &g_1 as &u8) as &&i64) = &g_1;
    v12 = v218 + &g_1 as &u8;
    memcpy(&v120, &v0, 592);
    v0 = 0;
    v1 = &g_1;
    v2 = 0;
    v0 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_30);
    v221 = v1;
    v222 = v2;
    *((v221 + v222 + &g_20 as &u8) as &i128) = 161430769900542305735089637495967542816;
    *((v221 + v222 + &g_1 as &u8) as &i128) = 133495922193352220710869853499235460466;
    *((v221 + v222) as &i128) = 43039606838800322000495282581741597268;
    v2 = v222 + &g_30 as &u8;
    v223 = v0;
    v176 = *((&v0 as &char + 8) as &i128);
    if v223 != 0x8000000000000000 {
        v0 = v176;
    }
    v159 = v223;
    v160 = v0;
    memcpy(&v176, &v120, 588);
    v182 = v172;
    v183 = v174;
    v181 = &g_1;
    v0 = clap_builder::builder::command::Command::arg(&v62, &v176);
    v70 = 0;
    v73 = 0;
    v75 = 0;
    v77 = 0;
    v79 = 0;
    v81 = 0;
    v83 = 0;
    v85 = 0;
    v88 = 0;
    v90 = 0;
    v93 = 0;
    v96 = 0;
    v98 = 0;
    v62 = 0;
    v64 = 0;
    v65 = 0;
    v66 = 0;
    v67 = &g_1;
    v68 = 0;
    v69 = &g_1;
    v72 = &g_1;
    v74 = &g_1;
    v76 = &g_1;
    v78 = &g_1;
    v80 = &g_1;
    v82 = &g_1;
    v84 = &g_1;
    v87 = &g_1;
    v89 = &g_1;
    v92 = &g_1;
    v95 = &g_1;
    v97 = &g_1;
    v100 = &g_1;
    v101 = 0;
    v102 = 0x8000000000000000;
    v104 = 0x8000000000000000;
    v105 = v209;
    v106 = &g_426676;
    v107 = &g_1;
    v108 = &g_426676;
    v109 = &g_1;
    v110 = 0;
    v112 = 4785074604081257;
    v114 = 0;
    v115 = 3337;
    v226 = v73;
    if v226 == *((&v70 as &char + 8) as &i64) {
        v71 = alloc::raw_vec::RawVec<T,A>::grow_one();
    }
    v227 = v72;
    v228 = v226 * &g_1;
    *((v227 + v228) as &&i64) = &g_426681;
    *((v227 + v228 + &g_1 as &u8) as &&i64) = &g_1;
    v73 = v226 + &g_1 as &u8;
    memcpy(&v120, &v62, 592);
    v62 = 0;
    v63 = &g_1;
    v64 = 0;
    v62 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_11);
    v229 = v63;
    v230 = v64;
    *((v229 + v230 + &g_1 as &u8) as &i128) = 153387840348778246421073888923402528118;
    *((v229 + v230) as &i128) = 158772111246963105513477951322514486113;
    v64 = v230 + &g_11 as &u8;
    v231 = v62;
    v176 = *((&v62 as &char + 8) as &i128);
    if v231 != 0x8000000000000000 {
        v62 = v176;
    }
    v159 = v231;
    v160 = v62;
    memcpy(&v176, &v120, 588);
    v182 = v172;
    v183 = v174;
    v181 = &g_1;
    v62 = clap_builder::builder::command::Command::arg(&v0, &v176);
    v12 = 0;
    v15 = 0;
    v17 = 0;
    v19 = 0;
    v21 = 0;
    v23 = 0;
    v25 = 0;
    v27 = 0;
    v29 = 0;
    v32 = 0;
    v35 = 0;
    v37 = 0;
    v39 = 0;
    v0 = 0;
    v2 = 0;
    v5 = 0;
    v6 = 0;
    v8 = &g_1;
    v10 = 0;
    v11 = &g_1;
    v14 = &g_1;
    v16 = &g_1;
    v18 = &g_1;
    v20 = &g_1;
    v22 = &g_1;
    v24 = &g_1;
    v26 = &g_1;
    v28 = &g_1;
    v31 = &g_1;
    v34 = &g_1;
    v36 = &g_1;
    v38 = &g_1;
    v41 = &g_1;
    v42 = 0;
    v43 = 0x8000000000000000;
    v45 = 0x8000000000000000;
    v48 = v209;
    v50 = &g_41874c;
    v51 = &g_1;
    v52 = &g_41874c;
    v53 = &g_1;
    v54 = 0;
    v55 = 4785074604081260;
    v56 = 0;
    v57 = 3337;
    v232 = v15;
    if *((&v12 as &char + 8) as &i64) - v232 <= 4 {
        v13 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v232, &g_1);
        v232 = v15;
    }
    v233 = v14;
    v234 = v232 * &g_1;
    *((v233 + v234) as &&i64) = &g_41874c;
    *((v233 + v234 + &g_1 as &u8) as &&i64) = &g_1;
    *((v233 + v234 + &g_1 as &u8) as &&i64) = &g_4266a7;
    *((v233 + v234 + &g_11 as &u8) as &&i64) = &g_1;
    *((v233 + v234 + &g_20 as &u8) as &&i64) = &g_4266ae;
    *((v233 + v234 + &g_20 as &u8) as &&i64) = &g_1;
    *((v233 + v234 + &g_30 as &u8) as &&i64) = &g_4266bb;
    *((v233 + v234 + 56) as &&i64) = &g_1;
    *((v233 + v234 + &g_3f as &u8) as &&i64) = &g_4266ca;
    *((v233 + v234 + &g_41 as &u8) as &&i64) = &g_1;
    v15 = v232 + &g_1 as &u8;
    memcpy(&v120, &v0, 592);
    v0 = 0;
    v1 = &g_1;
    v2 = 0;
    v0 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_20);
    v235 = v1;
    v236 = v2;
    *((v235 + v236 + &g_1 as &u8) as &i128) = 140199487932178714198225658778968354409;
    *((v235 + v236) as &i128) = 43134467116479723031791113048390001000;
    *((v235 + v236 + &g_20 as &u8) as &i16) = 26478;
    v2 = v236 + &g_20 as &u8;
    v237 = v0;
    v176 = *((&v0 as &char + 8) as &i128);
    if v237 != 0x8000000000000000 {
        v0 = v176;
    }
    v159 = v237;
    v160 = v0;
    memcpy(&v176, &v120, 588);
    v182 = v172;
    v183 = v174;
    v181 = &g_1;
    v0 = clap_builder::builder::command::Command::arg(&v62, &v176);
    v70 = 0;
    v73 = 0;
    v75 = 0;
    v77 = 0;
    v79 = 0;
    v81 = 0;
    v83 = 0;
    v85 = 0;
    v88 = 0;
    v90 = 0;
    v93 = 0;
    v96 = 0;
    v98 = 0;
    v62 = 0;
    v64 = 0;
    v65 = 0;
    v66 = 0;
    v67 = &g_1;
    v68 = 0;
    v69 = &g_1;
    v72 = &g_1;
    v74 = &g_1;
    v76 = &g_1;
    v78 = &g_1;
    v80 = &g_1;
    v82 = &g_1;
    v84 = &g_1;
    v87 = &g_1;
    v89 = &g_1;
    v92 = &g_1;
    v95 = &g_1;
    v97 = &g_1;
    v100 = &g_1;
    v101 = 0;
    v102 = 0x8000000000000000;
    v104 = 0x8000000000000000;
    v105 = v209;
    v106 = &g_426681;
    v107 = &g_1;
    v108 = &g_426681;
    v109 = &g_1;
    v110 = 0;
    v112 = 4785074604081262;
    v114 = 0;
    v115 = 3337;
    v238 = v73;
    if v238 == *((&v70 as &char + 8) as &i64) {
        v71 = alloc::raw_vec::RawVec<T,A>::grow_one();
    }
    v239 = v72;
    v240 = v238 * &g_1;
    *((v239 + v240) as &&i64) = &g_426676;
    *((v239 + v240 + &g_1 as &u8) as &&i64) = &g_1;
    v73 = v238 + &g_1 as &u8;
    memcpy(&v120, &v62, 592);
    v62 = 0;
    v63 = &g_1;
    v64 = 0;
    v62 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_20);
    v241 = v63;
    v242 = v64;
    *((v241 + v242 + &g_11 as &u8) as &i128) = 153465866784177305370060695322216177780;
    *((v241 + v242 + &g_1 as &u8) as &i128) = 134846147611562647482719883375539527777;
    *((v241 + v242) as &i128) = 43062078961726106628529784054260592484;
    v64 = v242 + &g_20 as &u8;
    v243 = v62;
    v176 = *((&v62 as &char + 8) as &i128);
    if v243 != 0x8000000000000000 {
        v62 = v176;
    }
    v159 = v243;
    v160 = v62;
    memcpy(&v176, &v120, 588);
    v182 = v172;
    v183 = v174;
    v181 = &g_1;
    v62 = clap_builder::builder::command::Command::arg(&v0, &v176);
    v12 = 0;
    v15 = 0;
    v17 = 0;
    v19 = 0;
    v21 = 0;
    v23 = 0;
    v25 = 0;
    v27 = 0;
    v29 = 0;
    v32 = 0;
    v35 = 0;
    v37 = 0;
    v39 = 0;
    v0 = 0;
    v2 = 0;
    v5 = 0;
    v6 = 0;
    v8 = &g_1;
    v10 = 0;
    v11 = &g_1;
    v14 = &g_1;
    v16 = &g_1;
    v18 = &g_1;
    v20 = &g_1;
    v22 = &g_1;
    v24 = &g_1;
    v26 = &g_1;
    v28 = &g_1;
    v31 = &g_1;
    v34 = &g_1;
    v36 = &g_1;
    v38 = &g_1;
    v41 = &g_1;
    v42 = 0;
    v43 = 0x8000000000000000;
    v45 = 0x8000000000000000;
    v48 = v209;
    v50 = &g_426723;
    v51 = &g_1;
    v52 = 0;
    v54 = 0;
    v55 = 4785074604081234;
    v56 = 0;
    v57 = 3337;
    v244 = v32;
    v246 = &g_1;
    if v244 == *((&v29 as &char + 8) as &i64) {
        v30 = alloc::raw_vec::RawVec<T,A>::grow_one();
        v246 = v31;
    }
    *((v246 + v244 * &g_1) as &i32) = 114;
    *((v246 + v244 * &g_1 + &g_1 as &u8) as &&i64) = &g_1;
    v32 = v244 + &g_1 as &u8;
    memcpy(&v120, &v0, 544);
    v247 = *((&v0 as &char + 576) as &i128);
    v167 = *((&v0 as &char + 560) as &i128);
    v169 = v247;
    v165 = &g_426723;
    v166 = &g_1;
    v0 = 0;
    v1 = &g_1;
    v2 = 0;
    v0 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_11);
    v248 = v1;
    v249 = v2;
    *((v248 + v249 + &g_1 as &u8) as &i128) = 161399413455625220522853877208911800690;
    *((v248 + v249) as &i128) = 153387780217489793896840178022661255011;
    v2 = v249 + &g_11 as &u8;
    v250 = v0;
    v176 = *((&v0 as &char + 8) as &i128);
    if v250 != 0x8000000000000000 {
        v0 = v176;
    }
    v251 = v175;
    v159 = v250;
    v160 = v0;
    memcpy(&v176, &v120, 588);
    v182 = *((&v169 as &char + 13) as &i16);
    v183 = v174;
    v181 = &g_1;
    v0 = clap_builder::builder::command::Command::arg(&v62, &v176);
    v70 = 0;
    v73 = 0;
    v75 = 0;
    v77 = 0;
    v79 = 0;
    v81 = 0;
    v83 = 0;
    v85 = 0;
    v88 = 0;
    v90 = 0;
    v93 = 0;
    v96 = 0;
    v98 = 0;
    v62 = 0;
    v64 = 0;
    v65 = 0;
    v66 = 0;
    v67 = &g_1;
    v68 = 0;
    v69 = &g_1;
    v72 = &g_1;
    v74 = &g_1;
    v76 = &g_1;
    v78 = &g_1;
    v80 = &g_1;
    v82 = &g_1;
    v84 = &g_1;
    v87 = &g_1;
    v89 = &g_1;
    v92 = &g_1;
    v95 = &g_1;
    v97 = &g_1;
    v100 = &g_1;
    v101 = 0;
    v102 = 0x8000000000000000;
    v104 = 0x8000000000000000;
    v105 = v251;
    v106 = &g_426748;
    v107 = &g_11;
    v108 = &g_426748;
    v109 = &g_11;
    v110 = 0;
    v112 = 0x11000000110000;
    v114 = 0;
    v115 = 3337;
    v120 = 0;
    v121 = &g_1;
    v122 = 0;
    v120 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_30);
    v252 = v121;
    v253 = v122;
    *((v252 + v253 + &g_20 as &u8) as &i128) = 137504375358187912442562309124901659936;
    *((v252 + v253 + &g_1 as &u8) as &i128) = 145464516777863614428001542874298019433;
    *((v252 + v253) as &i128) = 144103791176598672220761149993300878706;
    *((v252 + v253 + &g_20 as &u8) as &i64) = 8389754676633367137;
    v122 = v253 + &g_30 as &u8;
    v176 = *((&v120 as &char + 8) as &i128);
    if v102 != 0x8000000000000000 {
        v120 = v176;
    }
    v102 = v120;
    v103 = v120;
    memcpy(&v120, &v62, 588);
    v172 = *((&v62 as &char + 589) as &i16);
    v174 = *((&v62 as &char + 591) as &i8);
    v171 = &g_1;
    v62 = clap_builder::builder::command::Command::arg(&v0, &v120);
    v12 = 0;
    v15 = 0;
    v17 = 0;
    v19 = 0;
    v21 = 0;
    v23 = 0;
    v25 = 0;
    v27 = 0;
    v29 = 0;
    v32 = 0;
    v35 = 0;
    v37 = 0;
    v39 = 0;
    v0 = 0;
    v2 = 0;
    v5 = 0;
    v6 = 0;
    v8 = &g_1;
    v10 = 0;
    v11 = &g_1;
    v14 = &g_1;
    v16 = &g_1;
    v18 = &g_1;
    v20 = &g_1;
    v22 = &g_1;
    v24 = &g_1;
    v26 = &g_1;
    v28 = &g_1;
    v31 = &g_1;
    v34 = &g_1;
    v36 = &g_1;
    v38 = &g_1;
    v41 = &g_1;
    v42 = 0;
    v43 = 0x8000000000000000;
    v45 = 0x8000000000000000;
    v48 = v251;
    v50 = &g_426793;
    v51 = &g_1;
    v52 = &g_426793;
    v53 = &g_1;
    v54 = 0;
    v55 = 0x11000000110000;
    v56 = 0;
    v57 = 3337;
    v120 = 0;
    v121 = &g_1;
    v122 = 0;
    v120 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_20);
    v254 = v121;
    v255 = v122;
    *((v254 + v255 + &g_1 as &u8) as &i128) = 145265541923902765485468708045955556716;
    *((v254 + v255) as &i128) = 140099210569273708400399251232020002917;
    *((v254 + v255 + &g_20 as &u8) as &i64) = 8515498150422211696;
    v122 = v255 + &g_20 as &u8;
    v176 = *((&v120 as &char + 8) as &i128);
    if v43 != 0x8000000000000000 {
        v120 = v176;
    }
    v43 = v120;
    v44 = v120;
    memcpy(&v120, &v0, 588);
    v172 = *((&v0 as &char + 589) as &i16);
    v174 = *((&v0 as &char + 591) as &i8);
    v171 = &g_1;
    v0 = clap_builder::builder::command::Command::arg(&v62, &v120);
    v70 = 0;
    v73 = 0;
    v75 = 0;
    v77 = 0;
    v79 = 0;
    v81 = 0;
    v83 = 0;
    v85 = 0;
    v88 = 0;
    v90 = 0;
    v93 = 0;
    v96 = 0;
    v98 = 0;
    v62 = 0;
    v64 = 0;
    v65 = 0;
    v66 = 0;
    v67 = &g_1;
    v68 = 0;
    v69 = &g_1;
    v72 = &g_1;
    v74 = &g_1;
    v76 = &g_1;
    v78 = &g_1;
    v80 = &g_1;
    v82 = &g_1;
    v84 = &g_1;
    v87 = &g_1;
    v89 = &g_1;
    v92 = &g_1;
    v95 = &g_1;
    v97 = &g_1;
    v100 = &g_1;
    v101 = 0;
    v102 = 0x8000000000000000;
    v104 = 0x8000000000000000;
    v105 = v251;
    v106 = &g_4267c0;
    v107 = &g_1;
    v108 = &g_4267c0;
    v109 = &g_1;
    v110 = 0;
    v112 = 4785074604081270;
    v114 = 0;
    v115 = 3337;
    v120 = 0;
    v121 = &g_1;
    v122 = 0;
    v120 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_20);
    v256 = v121;
    v257 = v122;
    *((v256 + v257 + &g_1 as &u8) as &i128) = 133091050913870245395174138985109288736;
    *((v256 + v257) as &i128) = 134856310629694984197551817707016452197;
    *((v256 + v257 + &g_11 as &u8) as &i32) = 1701736292;
    v122 = v257 + &g_20 as &u8;
    v176 = *((&v120 as &char + 8) as &i128);
    if v102 != 0x8000000000000000 {
        v120 = v176;
    }
    v102 = v120;
    v103 = v120;
    memcpy(&v120, &v62, 588);
    v172 = *((&v62 as &char + 589) as &i16);
    v174 = *((&v62 as &char + 591) as &i8);
    v171 = &g_1;
    v62 = clap_builder::builder::command::Command::arg(&v0, &v120);
    v12 = 0;
    v15 = 0;
    v17 = 0;
    v19 = 0;
    v21 = 0;
    v23 = 0;
    v25 = 0;
    v27 = 0;
    v29 = 0;
    v32 = 0;
    v35 = 0;
    v37 = 0;
    v39 = 0;
    v0 = 0;
    v2 = 0;
    v5 = 0;
    v6 = 0;
    v8 = &g_1;
    v10 = 0;
    v11 = &g_1;
    v14 = &g_1;
    v16 = &g_1;
    v18 = &g_1;
    v20 = &g_1;
    v22 = &g_1;
    v24 = &g_1;
    v26 = &g_1;
    v28 = &g_1;
    v31 = &g_1;
    v34 = &g_1;
    v36 = &g_1;
    v38 = &g_1;
    v41 = &g_1;
    v42 = 0;
    v43 = 0x8000000000000000;
    v45 = 0x8000000000000000;
    v48 = v251;
    v50 = &g_4266ae;
    v51 = &g_1;
    v52 = &g_4266ae;
    v53 = &g_1;
    v54 = 0;
    v55 = 4785074604081267;
    v56 = 0;
    v57 = 3337;
    v258 = v15;
    if *((&v12 as &char + 8) as &i64) - v258 <= 4 {
        v13 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v258, &g_1);
        v258 = v15;
    }
    v259 = v14;
    v260 = v258 * &g_1;
    *((v259 + v260) as &&i64) = &g_41874c;
    *((v259 + v260 + &g_1 as &u8) as &&i64) = &g_1;
    *((v259 + v260 + &g_1 as &u8) as &&i64) = &g_4266a7;
    *((v259 + v260 + &g_11 as &u8) as &&i64) = &g_1;
    *((v259 + v260 + &g_20 as &u8) as &&i64) = &g_4266ae;
    *((v259 + v260 + &g_20 as &u8) as &&i64) = &g_1;
    *((v259 + v260 + &g_30 as &u8) as &&i64) = &g_4266bb;
    *((v259 + v260 + 56) as &&i64) = &g_1;
    *((v259 + v260 + &g_3f as &u8) as &&i64) = &g_4266ca;
    *((v259 + v260 + &g_41 as &u8) as &&i64) = &g_1;
    v15 = v258 + &g_1 as &u8;
    memcpy(&v120, &v0, 592);
    v0 = 0;
    v1 = &g_1;
    v2 = 0;
    v0 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_20);
    v261 = v1;
    v262 = v2;
    *((v261 + v262 + &g_1 as &u8) as &i128) = 131761802692310270292620257198729292654;
    *((v261 + v262) as &i128) = 140130364531460349822512615732303061357;
    *((v261 + v262 + &g_11 as &u8) as &i64) = 7453010403643056928;
    v2 = v262 + &g_20 as &u8;
    v263 = v0;
    v176 = *((&v0 as &char + 8) as &i128);
    if v263 != 0x8000000000000000 {
        v0 = v176;
    }
    v159 = v263;
    v160 = v0;
    memcpy(&v176, &v120, 588);
    v182 = v172;
    v183 = v174;
    v181 = &g_1;
    v0 = clap_builder::builder::command::Command::arg(&v62, &v176);
    v70 = 0;
    v73 = 0;
    v75 = 0;
    v77 = 0;
    v79 = 0;
    v81 = 0;
    v83 = 0;
    v85 = 0;
    v88 = 0;
    v90 = 0;
    v93 = 0;
    v96 = 0;
    v98 = 0;
    v62 = 0;
    v64 = 0;
    v65 = 0;
    v66 = 0;
    v67 = &g_1;
    v68 = 0;
    v69 = &g_1;
    v72 = &g_1;
    v74 = &g_1;
    v76 = &g_1;
    v78 = &g_1;
    v80 = &g_1;
    v82 = &g_1;
    v84 = &g_1;
    v87 = &g_1;
    v89 = &g_1;
    v92 = &g_1;
    v95 = &g_1;
    v97 = &g_1;
    v100 = &g_1;
    v101 = 0;
    v102 = 0x8000000000000000;
    v104 = 0x8000000000000000;
    v105 = v251;
    v106 = &g_426810;
    v107 = &g_1;
    v108 = &g_426810;
    v109 = &g_1;
    v110 = 0;
    v112 = 4785074604081254;
    v114 = 0;
    v115 = 3337;
    v120 = 0;
    v121 = &g_1;
    v122 = 0;
    v120 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, 170);
    v264 = v122;
    memcpy(v121 + v264, &g_426815, 170);
    v122 = v264 + 170;
    v176 = *((&v120 as &char + 8) as &i128);
    if v102 != 0x8000000000000000 {
        v120 = v176;
    }
    v102 = v120;
    v103 = v120;
    memcpy(&v120, &v62, 588);
    v172 = *((&v62 as &char + 589) as &i16);
    v174 = *((&v62 as &char + 591) as &i8);
    v171 = &g_1;
    v62 = clap_builder::builder::command::Command::arg(&v0, &v120);
    v12 = 0;
    v15 = 0;
    v17 = 0;
    v19 = 0;
    v21 = 0;
    v23 = 0;
    v25 = 0;
    v27 = 0;
    v29 = 0;
    v32 = 0;
    v35 = 0;
    v37 = 0;
    v39 = 0;
    v0 = 0;
    v2 = 0;
    v5 = 0;
    v6 = 0;
    v8 = &g_1;
    v10 = 0;
    v11 = &g_1;
    v14 = &g_1;
    v16 = &g_1;
    v18 = &g_1;
    v20 = &g_1;
    v22 = &g_1;
    v24 = &g_1;
    v26 = &g_1;
    v28 = &g_1;
    v31 = &g_1;
    v34 = &g_1;
    v36 = &g_1;
    v38 = &g_1;
    v41 = &g_1;
    v42 = 0;
    v43 = 0x8000000000000000;
    v45 = 0x8000000000000000;
    v48 = v251;
    v50 = &g_4268bf;
    v51 = &g_11;
    v52 = &g_4268bf;
    v53 = &g_11;
    v54 = 0;
    v55 = 0x11000000110000;
    v56 = 0;
    v57 = 3337;
    v265 = v15;
    if v265 == *((&v12 as &char + 8) as &i64) {
        v13 = alloc::raw_vec::RawVec<T,A>::grow_one();
    }
    v266 = v14;
    v267 = v265 * &g_1;
    *((v266 + v267) as &&i64) = &g_426810;
    *((v266 + v267 + &g_1 as &u8) as &&i64) = &g_1;
    v15 = v265 + &g_1 as &u8;
    memcpy(&v120, &v0, 592);
    v0 = 0;
    v1 = &g_1;
    v2 = 0;
    v0 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, 145);
    v268 = v2;
    memcpy(v1 + v268, &g_4268d1, 145);
    v2 = v268 + 145;
    v269 = v0;
    v176 = *((&v0 as &char + 8) as &i128);
    if v269 != 0x8000000000000000 {
        v0 = v176;
    }
    v159 = v269;
    v160 = v0;
    memcpy(&v176, &v120, 588);
    v182 = v172;
    v183 = v174;
    v181 = &g_1;
    v0 = clap_builder::builder::command::Command::arg(&v62, &v176);
    v120 = uucore::features::backup_control::arguments::backup();
    v62 = clap_builder::builder::command::Command::arg(&v0, &v120);
    v120 = uucore::features::backup_control::arguments::backup_no_args();
    v0 = clap_builder::builder::command::Command::arg(&v62, &v120);
    v120 = uucore::features::backup_control::arguments::suffix();
    v62 = clap_builder::builder::command::Command::arg(&v0, &v120);
    v120 = uucore::features::update_control::arguments::update();
    v0 = clap_builder::builder::command::Command::arg(&v62, &v120);
    v120 = uucore::features::update_control::arguments::update_no_args();
    v62 = clap_builder::builder::command::Command::arg(&v0, &v120);
    v12 = 0;
    v15 = 0;
    v17 = 0;
    v19 = 0;
    v21 = 0;
    v23 = 0;
    v25 = 0;
    v27 = 0;
    v29 = 0;
    v32 = 0;
    v37 = 0;
    v39 = 0;
    v0 = 0;
    v2 = 0;
    v5 = 0;
    v6 = 0;
    v8 = &g_1;
    v10 = 0;
    v11 = &g_1;
    v14 = &g_1;
    v16 = &g_1;
    v18 = &g_1;
    v20 = &g_1;
    v22 = &g_1;
    v24 = &g_1;
    v26 = &g_1;
    v28 = &g_1;
    v31 = &g_1;
    v34 = &g_1;
    v35 = 0;
    v36 = &g_1;
    v38 = &g_1;
    v41 = &g_1;
    v42 = 0;
    v43 = 0x8000000000000000;
    v45 = 0x8000000000000000;
    v48 = v251;
    v50 = &g_4266a7;
    v51 = &g_1;
    v52 = &g_4266a7;
    v53 = &g_1;
    v54 = 0;
    v55 = 0x11000000110000;
    v56 = 0;
    v57 = 3337;
    v176 = struct32 {
        field_0: &g_418720
        field_8: &g_1
        field_16: 0
        field_24: &g_1
    };
    v120 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v176);
    v35 = v122;
    v33 = v120;
    memcpy(&v120, &v0, 592);
    v270 = *((&v120 as &char + 144) as &i64);
    if *((&v120 as &char + 128) as &i64) - v270 <= 4 {
        v131 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v270, &g_1);
        v270 = *((&v120 as &char + 144) as &i64);
    }
    v271 = v132;
    v272 = v270 * &g_1;
    *((v271 + v272) as &&i64) = &g_41874c;
    *((v271 + v272 + &g_1 as &u8) as &&i64) = &g_1;
    *((v271 + v272 + &g_1 as &u8) as &&i64) = &g_4266a7;
    *((v271 + v272 + &g_11 as &u8) as &&i64) = &g_1;
    *((v271 + v272 + &g_20 as &u8) as &&i64) = &g_4266ae;
    *((v271 + v272 + &g_20 as &u8) as &&i64) = &g_1;
    *((v271 + v272 + &g_30 as &u8) as &&i64) = &g_4266bb;
    *((v271 + v272 + 56) as &&i64) = &g_1;
    *((v271 + v272 + &g_3f as &u8) as &&i64) = &g_4266ca;
    *((v271 + v272 + &g_41 as &u8) as &&i64) = &g_1;
    v133 = v270 + &g_1 as &u8;
    memcpy(&v0, &v120, 584);
    v56 = 128 | v170;
    v57 = *((&v120 as &char + 588) as &i32);
    v176 = struct32 {
        field_0: &g_426962
        field_8: &g_1
        field_16: 0
        field_24: &g_1
    };
    v120 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v176);
    v42 = v122;
    v40 = v120;
    memcpy(&v120, &v0, 592);
    v0 = struct64 {
        field_0: &g_41870c
        field_8: &g_1
        field_16: &g_426962
        field_24: &g_1
        field_32: &g_426968
        field_40: &g_1
        field_48: 0
        field_56: &g_1
    };
    v176 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v0);
    v0 = clap_builder::builder::arg::Arg::value_parser(&v120, &v176);
    v2 = &g_1;
    v3 = 0;
    v4 = &g_1;
    memcpy(&v120, &v0, 592);
    v0 = 0;
    v2 = 0;
    v0 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_20);
    v273 = v1;
    v274 = v2;
    *((v273 + v274 + &g_1 as &u8) as &i128) = 134761529736923125872608878589183729751;
    *((v273 + v274) as &i128) = 147893152731121334603111508875041206115;
    *((v273 + v274 + &g_11 as &u8) as &i32) = 2003790949;
    v2 = v274 + &g_20 as &u8;
    v275 = v0;
    v176 = *((&v0 as &char + 8) as &i128);
    if v275 != 0x8000000000000000 {
        v0 = v176;
    }
    v159 = v275;
    v160 = v0;
    memcpy(&v176, &v120, 592);
    v0 = clap_builder::builder::command::Command::arg(&v62, &v176);
    v70 = 0;
    v73 = 0;
    v75 = 0;
    v77 = 0;
    v79 = 0;
    v81 = 0;
    v83 = 0;
    v85 = 0;
    v88 = 0;
    v90 = 0;
    v93 = 0;
    v96 = 0;
    v98 = 0;
    v62 = 0;
    v64 = 0;
    v65 = 0;
    v66 = 0;
    v67 = &g_1;
    v68 = 0;
    v69 = &g_1;
    v72 = &g_1;
    v74 = &g_1;
    v76 = &g_1;
    v78 = &g_1;
    v80 = &g_1;
    v82 = &g_1;
    v84 = &g_1;
    v87 = &g_1;
    v89 = &g_1;
    v92 = &g_1;
    v95 = &g_1;
    v97 = &g_1;
    v100 = &g_1;
    v101 = 0;
    v102 = 0x8000000000000000;
    v104 = 0x8000000000000000;
    v105 = v251;
    v106 = &g_4266bb;
    v107 = &g_1;
    v108 = &g_4266bb;
    v109 = &g_1;
    v110 = 0;
    v112 = 0x11000000110000;
    v114 = 0;
    v115 = 3337;
    v276 = v73;
    if *((&v70 as &char + 8) as &i64) - v276 <= 4 {
        v71 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v276, &g_1);
        v276 = v73;
    }
    v277 = v72;
    v278 = v276 * &g_1;
    *((v277 + v278) as &&i64) = &g_41874c;
    *((v277 + v278 + &g_1 as &u8) as &&i64) = &g_1;
    *((v277 + v278 + &g_1 as &u8) as &&i64) = &g_4266a7;
    *((v277 + v278 + &g_11 as &u8) as &&i64) = &g_1;
    *((v277 + v278 + &g_20 as &u8) as &&i64) = &g_4266ae;
    *((v277 + v278 + &g_20 as &u8) as &&i64) = &g_1;
    *((v277 + v278 + &g_30 as &u8) as &&i64) = &g_4266bb;
    *((v277 + v278 + 56) as &&i64) = &g_1;
    *((v277 + v278 + &g_3f as &u8) as &&i64) = &g_4266ca;
    *((v277 + v278 + &g_41 as &u8) as &&i64) = &g_1;
    v73 = v276 + &g_1 as &u8;
    memcpy(&v120, &v62, 592);
    v62 = 0;
    v63 = &g_1;
    v64 = 0;
    v62 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_20);
    v279 = v63;
    v280 = v64;
    *((v279 + v280 + &g_11 as &u8) as &i128) = 153388003557643389408654800476574064756;
    *((v279 + v280 + &g_1 as &u8) as &i128) = 154358962917614112695505655620589415529;
    *((v279 + v280) as &i128) = 135749465868572924068414978664440950596;
    v64 = v280 + &g_20 as &u8;
    v281 = v62;
    v176 = *((&v62 as &char + 8) as &i128);
    if v281 != 0x8000000000000000 {
        v62 = v176;
    }
    v159 = v281;
    v160 = v62;
    memcpy(&v176, &v120, 588);
    v182 = *((&v120 as &char + 589) as &i16);
    v183 = v174;
    v181 = &g_1;
    v62 = clap_builder::builder::command::Command::arg(&v0, &v176);
    v12 = 0;
    v15 = 0;
    v17 = 0;
    v19 = 0;
    v21 = 0;
    v23 = 0;
    v25 = 0;
    v27 = 0;
    v29 = 0;
    v32 = 0;
    v35 = 0;
    v37 = 0;
    v39 = 0;
    v0 = struct24 {
        field_80: 0
        field_88: &g_1
        field_96: 0
    };
    v5 = 0;
    v6 = 0;
    v8 = &g_1;
    v10 = 0;
    v11 = &g_1;
    v14 = &g_1;
    v16 = &g_1;
    v18 = &g_1;
    v20 = &g_1;
    v22 = &g_1;
    v24 = &g_1;
    v26 = &g_1;
    v28 = &g_1;
    v31 = &g_1;
    v34 = &g_1;
    v36 = &g_1;
    v38 = &g_1;
    v41 = &g_1;
    v42 = 0;
    v43 = 0x8000000000000000;
    v45 = 0x8000000000000000;
    v48 = v251;
    v50 = &g_418820;
    v51 = &g_1;
    v52 = &g_418820;
    v53 = &g_1;
    v54 = 0;
    v55 = 0x2c00110000;
    v56 = 0;
    v57 = 3329;
    v282 = __rust_alloc(504, &g_1);
    *(v282 as &i64) = 0;
    *((v282 + &g_1 as &u8) as &&i64) = &g_1;
    *((v282 + &g_1 as &u8) as &i64) = 0;
    *((v282 + &g_11 as &u8) as &i64) = 0x8000000000000000;
    *((v282 + &g_30 as &u8) as &&i64) = &g_4187d4;
    *((v282 + 56) as &&i64) = &g_1;
    *((v282 + &g_3f as &u8) as &i8) = 0;
    *((v282 + &g_41 as &u8) as &i64) = 0;
    *((v282 + &g_41 as &u8) as &&i64) = &g_1;
    *((v282 + 88) as &i64) = 0;
    *((v282 + 96) as &i64) = 0x8000000000000000;
    *((v282 + 120) as &&i64) = &g_425e19;
    *((v282 + 128) as &&i64) = &g_1;
    *((v282 + 136) as &i8) = 0;
    *((v282 + 144) as &i64) = 0;
    *((v282 + 152) as &&i64) = &g_1;
    *((v282 + 160) as &i64) = 0;
    *((v282 + 168) as &i64) = 0x8000000000000000;
    *((v282 + 192) as &&i64) = &g_425e22;
    *((v282 + 200) as &&i64) = &g_1;
    *((v282 + 208) as &i8) = 0;
    *((v282 + 216) as &i64) = 0;
    *((v282 + 224) as &&i64) = &g_1;
    *((v282 + 232) as &i64) = 0;
    *((v282 + 240) as &i64) = 0x8000000000000000;
    *((v282 + 264) as &&i64) = &g_425e2c;
    *((v282 + 272) as &&i64) = &g_1;
    *((v282 + 280) as &i8) = 0;
    *((v282 + 288) as &i64) = 0;
    *((v282 + 296) as &&i64) = &g_1;
    *((v282 + 304) as &i64) = 0;
    *((v282 + 312) as &i64) = 0x8000000000000000;
    *((v282 + 336) as &&i64) = &g_425e33;
    *((v282 + 344) as &&i64) = &g_1;
    *((v282 + 352) as &i8) = 0;
    *((v282 + 360) as &i64) = 0;
    *((v282 + 368) as &&i64) = &g_1;
    *((v282 + 376) as &i64) = 0;
    *((v282 + 384) as &i64) = 0x8000000000000000;
    *((v282 + 408) as &&i64) = &g_425e38;
    *((v282 + 416) as &&i64) = &g_1;
    *((v282 + 424) as &i8) = 0;
    *((v282 + 432) as &i64) = 0;
    *((v282 + 440) as &&i64) = &g_1;
    *((v282 + 448) as &i64) = 0;
    *((v282 + 456) as &i64) = 0x8000000000000000;
    *((v282 + 480) as &&i64) = &g_425e3d;
    *((v282 + 488) as &&i64) = &g_1;
    *((v282 + 496) as &i8) = 0;
    v120 = &g_1;
    v121 = v282;
    v122 = &g_1;
    v176 = clap_builder::builder::arg::Arg::value_parser(&v0, &v120);
    v178 = &g_1;
    v179 = 0;
    v180 = -1;
    memcpy(&v120, &v176, 360);
    memcpy(&v120, &v176, 216);
    v284 = *((&v176 as &char + 588) as &i32);
    v285 = 128 | *((&v176 as &char + 584) as &i32);
    v152 = *((&v176 as &char + 360) as &i64);
    v170 = v285;
    v171 = v284;
    v176 = struct32 {
        field_0: &g_4269bd
        field_8: &g_1
        field_16: 0
        field_24: &g_1
    };
    v0 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v176);
    v152 = v2;
    v150 = v0;
    memcpy(&v0, &v120, 360);
    memcpy(&v35, &v120, 216);
    v35 = v152;
    v56 = v170;
    v57 = v284;
    v176 = struct32 {
        field_0: &g_4269c6
        field_8: &g_11
        field_16: 0
        field_24: &g_1
    };
    v120 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v176);
    v287 = v175;
    v42 = v122;
    v40 = v120;
    memcpy(&v120, &v0, 592);
    v0 = 0;
    v2 = 0;
    v0 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, 147);
    v288 = v2;
    memcpy(v1 + v288, &g_4269de, 147);
    v2 = v288 + 147;
    v289 = v0;
    v176 = *((&v0 as &char + 8) as &i128);
    if v289 != 0x8000000000000000 {
        v0 = v176;
    }
    v159 = v289;
    v160 = v0;
    memcpy(&v176, &v120, 592);
    v0 = clap_builder::builder::command::Command::arg(&v62, &v176);
    v70 = 0;
    v73 = 0;
    v75 = 0;
    v77 = 0;
    v79 = 0;
    v81 = 0;
    v83 = 0;
    v85 = 0;
    v88 = 0;
    v90 = 0;
    v93 = 0;
    v96 = 0;
    v98 = 0;
    v62 = 0;
    v64 = 0;
    v65 = 0;
    v66 = 0;
    v67 = &g_1;
    v68 = 0;
    v69 = &g_1;
    v72 = &g_1;
    v74 = &g_1;
    v76 = &g_1;
    v78 = &g_1;
    v80 = &g_1;
    v82 = &g_1;
    v84 = &g_1;
    v87 = &g_1;
    v89 = &g_1;
    v92 = &g_1;
    v95 = &g_1;
    v97 = &g_1;
    v100 = &g_1;
    v101 = 0;
    v102 = 0x8000000000000000;
    v104 = 0x8000000000000000;
    v105 = v287;
    v106 = &g_426a71;
    v107 = &g_11;
    v108 = &g_426a71;
    v109 = &g_11;
    v110 = 0;
    v112 = 4785074604081264;
    v114 = 0;
    v115 = 3337;
    v120 = 0;
    v121 = &g_1;
    v122 = 0;
    v120 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_30);
    v290 = v121;
    v291 = v122;
    *((v290 + v291 + &g_20 as &u8) as &i128) = 145433398969090838748488752191482701936;
    *((v290 + v291 + &g_1 as &u8) as &i128) = 140111279971210267141012740905598018934;
    *((v290 + v291) as &i128) = 152058754016758165134676144059507892595;
    *((v290 + v291 + &g_20 as &u8) as &i64) = 8318268777086281069;
    v122 = v291 + &g_30 as &u8;
    v176 = *((&v120 as &char + 8) as &i128);
    if v102 != 0x8000000000000000 {
        v120 = v176;
    }
    v102 = v120;
    v103 = v120;
    memcpy(&v120, &v62, 588);
    v172 = *((&v62 as &char + 589) as &i16);
    v174 = *((&v62 as &char + 591) as &i8);
    v171 = &g_1;
    v62 = clap_builder::builder::command::Command::arg(&v0, &v120);
    v12 = 0;
    v15 = 0;
    v17 = 0;
    v19 = 0;
    v21 = 0;
    v23 = 0;
    v25 = 0;
    v27 = 0;
    v29 = 0;
    v32 = 0;
    v35 = 0;
    v37 = 0;
    v39 = 0;
    v0 = struct24 {
        field_80: 0
        field_88: &g_1
        field_96: 0
    };
    v5 = 0;
    v6 = 0;
    v8 = &g_1;
    v10 = 0;
    v11 = &g_1;
    v14 = &g_1;
    v16 = &g_1;
    v18 = &g_1;
    v20 = &g_1;
    v22 = &g_1;
    v24 = &g_1;
    v26 = &g_1;
    v28 = &g_1;
    v31 = &g_1;
    v34 = &g_1;
    v36 = &g_1;
    v38 = &g_1;
    v41 = &g_1;
    v42 = 0;
    v43 = 0x8000000000000000;
    v45 = 0x8000000000000000;
    v48 = v287;
    v50 = &g_426ac3;
    v51 = &g_1;
    v52 = &g_426ac3;
    v53 = &g_1;
    v54 = 0;
    v55 = 0x2c00110000;
    v56 = 0;
    v57 = 3329;
    v292 = __rust_alloc(504, &g_1);
    *(v292 as &i64) = 0;
    *((v292 + &g_1 as &u8) as &&i64) = &g_1;
    *((v292 + &g_1 as &u8) as &i64) = 0;
    *((v292 + &g_11 as &u8) as &i64) = 0x8000000000000000;
    *((v292 + &g_30 as &u8) as &&i64) = &g_4187d4;
    *((v292 + 56) as &&i64) = &g_1;
    *((v292 + &g_3f as &u8) as &i8) = 0;
    *((v292 + &g_41 as &u8) as &i64) = 0;
    *((v292 + &g_41 as &u8) as &&i64) = &g_1;
    *((v292 + 88) as &i64) = 0;
    *((v292 + 96) as &i64) = 0x8000000000000000;
    *((v292 + 120) as &&i64) = &g_425e19;
    *((v292 + 128) as &&i64) = &g_1;
    *((v292 + 136) as &i8) = 0;
    *((v292 + 144) as &i64) = 0;
    *((v292 + 152) as &&i64) = &g_1;
    *((v292 + 160) as &i64) = 0;
    *((v292 + 168) as &i64) = 0x8000000000000000;
    *((v292 + 192) as &&i64) = &g_425e22;
    *((v292 + 200) as &&i64) = &g_1;
    *((v292 + 208) as &i8) = 0;
    *((v292 + 216) as &i64) = 0;
    *((v292 + 224) as &&i64) = &g_1;
    *((v292 + 232) as &i64) = 0;
    *((v292 + 240) as &i64) = 0x8000000000000000;
    *((v292 + 264) as &&i64) = &g_425e2c;
    *((v292 + 272) as &&i64) = &g_1;
    *((v292 + 280) as &i8) = 0;
    *((v292 + 288) as &i64) = 0;
    *((v292 + 296) as &&i64) = &g_1;
    *((v292 + 304) as &i64) = 0;
    *((v292 + 312) as &i64) = 0x8000000000000000;
    *((v292 + 336) as &&i64) = &g_425e33;
    *((v292 + 344) as &&i64) = &g_1;
    *((v292 + 352) as &i8) = 0;
    *((v292 + 360) as &i64) = 0;
    *((v292 + 368) as &&i64) = &g_1;
    *((v292 + 376) as &i64) = 0;
    *((v292 + 384) as &i64) = 0x8000000000000000;
    *((v292 + 408) as &&i64) = &g_425e38;
    *((v292 + 416) as &&i64) = &g_1;
    *((v292 + 424) as &i8) = 0;
    *((v292 + 432) as &i64) = 0;
    *((v292 + 440) as &&i64) = &g_1;
    *((v292 + 448) as &i64) = 0;
    *((v292 + 456) as &i64) = 0x8000000000000000;
    *((v292 + 480) as &&i64) = &g_425e3d;
    *((v292 + 488) as &&i64) = &g_1;
    *((v292 + 496) as &i8) = 0;
    v176 = &g_1;
    v177 = v292;
    v178 = &g_1;
    v120 = clap_builder::builder::arg::Arg::value_parser(&v0, &v176);
    v122 = &g_1;
    v123 = 0;
    v124 = -1;
    memcpy(&v0, &v120, 360);
    memcpy(&v35, &v120, 216);
    v294 = *((&v120 as &char + 588) as &i32);
    v35 = *((&v120 as &char + 360) as &i64);
    v56 = 128 | v170;
    v57 = v294;
    v176 = struct32 {
        field_0: &g_4269bd
        field_8: &g_1
        field_16: 0
        field_24: &g_1
    };
    v120 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v176);
    v35 = v122;
    v33 = v120;
    memcpy(&v120, &v0, 592);
    v0 = 0;
    v1 = &g_1;
    v2 = 0;
    v0 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_20);
    v295 = v1;
    v296 = v2;
    *((v295 + v296 + &g_1 as &u8) as &i128) = 154794723906744136157799288624054822248;
    *((v295 + v296) as &i128) = 154358658918220438813786473021720915812;
    *((v295 + v296 + &g_11 as &u8) as &i64) = 8315180334520562292;
    v2 = v296 + &g_20 as &u8;
    v297 = v0;
    v176 = *((&v0 as &char + 8) as &i128);
    if v297 != 0x8000000000000000 {
        v0 = v176;
    }
    v159 = v297;
    v160 = v0;
    memcpy(&v176, &v120, 592);
    v0 = clap_builder::builder::command::Command::arg(&v62, &v176);
    v70 = 0;
    v73 = 0;
    v75 = 0;
    v77 = 0;
    v79 = 0;
    v81 = 0;
    v83 = 0;
    v85 = 0;
    v88 = 0;
    v90 = 0;
    v93 = 0;
    v96 = 0;
    v98 = 0;
    v62 = 0;
    v64 = 0;
    v65 = 0;
    v66 = 0;
    v67 = &g_1;
    v68 = 0;
    v69 = &g_1;
    v72 = &g_1;
    v74 = &g_1;
    v76 = &g_1;
    v78 = &g_1;
    v80 = &g_1;
    v82 = &g_1;
    v84 = &g_1;
    v87 = &g_1;
    v89 = &g_1;
    v92 = &g_1;
    v95 = &g_1;
    v97 = &g_1;
    v100 = &g_1;
    v101 = 0;
    v102 = 0x8000000000000000;
    v104 = 0x8000000000000000;
    v105 = v287;
    v106 = &g_426af5;
    v107 = &g_1;
    v108 = &g_426af5;
    v109 = &g_1;
    v110 = 0;
    v112 = 0x11000000110000;
    v114 = 0;
    v115 = 3337;
    v298 = v88;
    v300 = &g_1;
    if v298 == *((&v85 as &char + 8) as &i64) {
        v86 = alloc::raw_vec::RawVec<T,A>::grow_one();
        v300 = v87;
    }
    v301 = v298 * &g_1;
    *((v300 + v301 * &g_1) as &&i64) = &g_426afc;
    *((v300 + v301 * &g_1 + &g_1 as &u8) as &&i64) = &g_1;
    *((v300 + v301 * &g_1 + &g_1 as &u8) as &i8) = 0;
    v88 = v298 + &g_1 as &u8;
    memcpy(&v120, &v62, 592);
    v62 = 0;
    v63 = &g_1;
    v64 = 0;
    v62 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_20);
    v302 = v63;
    v303 = v64;
    *((v302 + v303 + &g_11 as &u8) as &i128) = 118728668953601008359302669837446051104;
    *((v302 + v303 + &g_1 as &u8) as &i128) = 43129274187361446915694054892049820006;
    *((v302 + v303) as &i128) = 43061734874735094250238548282278507381;
    v64 = v303 + &g_20 as &u8;
    v304 = v62;
    v176 = *((&v62 as &char + 8) as &i128);
    if v304 != 0x8000000000000000 {
        v62 = v176;
    }
    v159 = v304;
    v160 = v62;
    memcpy(&v176, &v120, 588);
    v182 = *((&v120 as &char + 589) as &i16);
    v183 = v174;
    v181 = &g_1;
    v62 = clap_builder::builder::command::Command::arg(&v0, &v176);
    v12 = 0;
    v15 = 0;
    v17 = 0;
    v19 = 0;
    v21 = 0;
    v23 = 0;
    v25 = 0;
    v27 = 0;
    v29 = 0;
    v32 = 0;
    v35 = 0;
    v37 = 0;
    v39 = 0;
    v0 = 0;
    v2 = 0;
    v5 = 0;
    v6 = 0;
    v8 = &g_1;
    v10 = 0;
    v11 = &g_1;
    v14 = &g_1;
    v16 = &g_1;
    v18 = &g_1;
    v20 = &g_1;
    v22 = &g_1;
    v24 = &g_1;
    v26 = &g_1;
    v28 = &g_1;
    v31 = &g_1;
    v34 = &g_1;
    v36 = &g_1;
    v38 = &g_1;
    v41 = &g_1;
    v42 = 0;
    v43 = 0x8000000000000000;
    v45 = 0x8000000000000000;
    v48 = v287;
    v50 = &g_426b2b;
    v51 = &g_1;
    v52 = &g_426b2b;
    v53 = &g_1;
    v54 = 0;
    v55 = 4785074604081232;
    v56 = 0;
    v57 = 3337;
    v305 = v15;
    if v305 == *((&v12 as &char + 8) as &i64) {
        v13 = alloc::raw_vec::RawVec<T,A>::grow_one();
    }
    v306 = v14;
    v307 = v305 * &g_1;
    *((v306 + v307) as &&i64) = &g_426b39;
    *((v306 + v307 + &g_1 as &u8) as &&i64) = &g_1;
    v15 = v305 + &g_1 as &u8;
    memcpy(&v120, &v0, 592);
    v0 = 0;
    v1 = &g_1;
    v2 = 0;
    v0 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_20);
    v308 = v1;
    v309 = v2;
    *((v308 + v309 + &g_1 as &u8) as &i128) = 110494316543677651730121765402742386530;
    *((v308 + v309) as &i128) = 145516454509807583638697652514188584302;
    *((v308 + v309 + &g_11 as &u8) as &i64) = 4990923338413187182;
    v2 = v309 + &g_20 as &u8;
    v310 = v0;
    v176 = *((&v0 as &char + 8) as &i128);
    if v310 != 0x8000000000000000 {
        v0 = v176;
    }
    v159 = v310;
    v160 = v0;
    memcpy(&v176, &v120, 588);
    v182 = *((&v120 as &char + 589) as &i16);
    v183 = v174;
    v181 = &g_1;
    v0 = clap_builder::builder::command::Command::arg(&v62, &v176);
    v70 = 0;
    v73 = 0;
    v75 = 0;
    v77 = 0;
    v79 = 0;
    v81 = 0;
    v83 = 0;
    v85 = 0;
    v88 = 0;
    v90 = 0;
    v93 = 0;
    v96 = 0;
    v98 = 0;
    v62 = 0;
    v64 = 0;
    v65 = 0;
    v66 = 0;
    v67 = &g_1;
    v68 = 0;
    v69 = &g_1;
    v72 = &g_1;
    v74 = &g_1;
    v76 = &g_1;
    v78 = &g_1;
    v80 = &g_1;
    v82 = &g_1;
    v84 = &g_1;
    v87 = &g_1;
    v89 = &g_1;
    v92 = &g_1;
    v95 = &g_1;
    v97 = &g_1;
    v100 = &g_1;
    v101 = 0;
    v102 = 0x8000000000000000;
    v104 = 0x8000000000000000;
    v105 = v287;
    v106 = &g_426b39;
    v107 = &g_1;
    v108 = &g_426b39;
    v109 = &g_1;
    v110 = 0;
    v112 = 4785074604081228;
    v114 = 0;
    v115 = 3337;
    v311 = v73;
    if v311 == *((&v70 as &char + 8) as &i64) {
        v71 = alloc::raw_vec::RawVec<T,A>::grow_one();
    }
    v312 = v72;
    v313 = v311 * &g_1;
    *((v312 + v313) as &&i64) = &g_426b2b;
    *((v312 + v313 + &g_1 as &u8) as &&i64) = &g_1;
    v73 = v311 + &g_1 as &u8;
    memcpy(&v120, &v62, 592);
    v62 = 0;
    v63 = &g_1;
    v64 = 0;
    v62 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_20);
    v314 = v63;
    v315 = v64;
    *((v314 + v315 + &g_1 as &u8) as &i128) = 43108580743586375451079526265289400941;
    *((v314 + v315) as &i128) = 161434360128448893998766834754602364001;
    *((v314 + v315 + &g_11 as &u8) as &i64) = 4990923338413187182;
    v64 = v315 + &g_20 as &u8;
    v316 = v62;
    v176 = *((&v62 as &char + 8) as &i128);
    if v316 != 0x8000000000000000 {
        v62 = v176;
    }
    v159 = v316;
    v160 = v62;
    memcpy(&v176, &v120, 588);
    v182 = *((&v120 as &char + 589) as &i16);
    v183 = v174;
    v181 = &g_1;
    v62 = clap_builder::builder::command::Command::arg(&v0, &v176);
    v12 = 0;
    v15 = 0;
    v17 = 0;
    v19 = 0;
    v21 = 0;
    v23 = 0;
    v25 = 0;
    v27 = 0;
    v29 = 0;
    v32 = 0;
    v35 = 0;
    v37 = 0;
    v39 = 0;
    v0 = 0;
    v2 = 0;
    v5 = 0;
    v6 = 0;
    v8 = &g_1;
    v10 = 0;
    v11 = &g_1;
    v14 = &g_1;
    v16 = &g_1;
    v18 = &g_1;
    v20 = &g_1;
    v22 = &g_1;
    v24 = &g_1;
    v26 = &g_1;
    v28 = &g_1;
    v31 = &g_1;
    v34 = &g_1;
    v36 = &g_1;
    v38 = &g_1;
    v41 = &g_1;
    v42 = 0;
    v43 = 0x8000000000000000;
    v45 = 0x8000000000000000;
    v48 = v287;
    v50 = &g_426b8f;
    v51 = &g_11;
    v52 = 0;
    v54 = 0;
    v55 = 4785074604081224;
    v56 = 0;
    v57 = 3337;
    v120 = 0;
    v121 = &g_1;
    v122 = 0;
    v120 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_20);
    v317 = v121;
    v318 = v122;
    *((v317 + v318 + &g_11 as &u8) as &i128) = 92066285515212151602276445605186858016;
    *((v317 + v318 + &g_1 as &u8) as &i128) = 146762463772791763010912966536042212969;
    *((v317 + v318) as &i128) = 143792313889615558912701096408944242534;
    v122 = v318 + &g_20 as &u8;
    v176 = *((&v120 as &char + 8) as &i128);
    if v43 != 0x8000000000000000 {
        v120 = v176;
    }
    v43 = v120;
    memcpy(&v120, &v0, 588);
    v172 = *((&v0 as &char + 589) as &i16);
    v174 = *((&v0 as &char + 591) as &i8);
    v171 = &g_1;
    v0 = clap_builder::builder::command::Command::arg(&v62, &v120);
    v70 = 0;
    v73 = 0;
    v75 = 0;
    v77 = 0;
    v79 = 0;
    v81 = 0;
    v83 = 0;
    v85 = 0;
    v88 = 0;
    v90 = 0;
    v93 = 0;
    v96 = 0;
    v98 = 0;
    v62 = 0;
    v64 = 0;
    v65 = 0;
    v66 = 0;
    v67 = &g_1;
    v68 = 0;
    v69 = &g_1;
    v72 = &g_1;
    v74 = &g_1;
    v76 = &g_1;
    v78 = &g_1;
    v80 = &g_1;
    v82 = &g_1;
    v84 = &g_1;
    v87 = &g_1;
    v89 = &g_1;
    v92 = &g_1;
    v95 = &g_1;
    v97 = &g_1;
    v100 = &g_1;
    v101 = 0;
    v102 = 0x8000000000000000;
    v104 = 0x8000000000000000;
    v105 = v287;
    v106 = &g_426bcd;
    v107 = &g_1;
    v108 = &g_426bcd;
    v109 = &g_1;
    v110 = 0;
    v112 = 4785074604081249;
    v114 = 0;
    v115 = 3337;
    v120 = 0;
    v121 = &g_1;
    v122 = 0;
    v120 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_11);
    v319 = v121;
    v320 = v122;
    *((v319 + v320 + &g_1 as &u8) as &i128) = 144119363863543322699533927084555313234;
    *((v319 + v320) as &i128) = 152114445051338912973075221292891595091;
    v122 = v320 + &g_11 as &u8;
    v176 = *((&v120 as &char + 8) as &i128);
    if v102 != 0x8000000000000000 {
        v120 = v176;
    }
    v102 = v120;
    memcpy(&v120, &v62, 588);
    v172 = *((&v62 as &char + 589) as &i16);
    v174 = *((&v62 as &char + 591) as &i8);
    v171 = &g_1;
    v62 = clap_builder::builder::command::Command::arg(&v0, &v120);
    v12 = 0;
    v15 = 0;
    v17 = 0;
    v19 = 0;
    v21 = 0;
    v23 = 0;
    v25 = 0;
    v27 = 0;
    v29 = 0;
    v32 = 0;
    v35 = 0;
    v37 = 0;
    v39 = 0;
    v0 = 0;
    v2 = 0;
    v5 = 0;
    v6 = 0;
    v8 = &g_1;
    v10 = 0;
    v11 = &g_1;
    v14 = &g_1;
    v16 = &g_1;
    v18 = &g_1;
    v20 = &g_1;
    v22 = &g_1;
    v24 = &g_1;
    v26 = &g_1;
    v28 = &g_1;
    v31 = &g_1;
    v34 = &g_1;
    v36 = &g_1;
    v38 = &g_1;
    v41 = &g_1;
    v42 = 0;
    v43 = 0x8000000000000000;
    v45 = 0x8000000000000000;
    v48 = v287;
    v50 = &g_426bee;
    v51 = &g_11;
    v52 = 0;
    v54 = 0;
    v55 = 4785074604081252;
    v56 = 0;
    v57 = 3337;
    v120 = 0;
    v121 = &g_1;
    v122 = 0;
    v120 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_20);
    v321 = v121;
    v322 = v122;
    *((v321 + v322 + &g_11 as &u8) as &i128) = 153419034696640622301368108465569934637;
    *((v321 + v322 + &g_1 as &u8) as &i128) = 134851199303105439651379474407857940069;
    *((v321 + v322) as &i128) = 152058445342906136679713615147753628019;
    v122 = v322 + &g_20 as &u8;
    v176 = *((&v120 as &char + 8) as &i128);
    if v43 != 0x8000000000000000 {
        v120 = v176;
    }
    v43 = v120;
    memcpy(&v120, &v0, 588);
    v172 = *((&v0 as &char + 589) as &i16);
    v174 = *((&v0 as &char + 591) as &i8);
    v171 = &g_1;
    v0 = clap_builder::builder::command::Command::arg(&v62, &v120);
    v70 = 0;
    v73 = 0;
    v75 = 0;
    v77 = 0;
    v79 = 0;
    v81 = 0;
    v83 = 0;
    v85 = 0;
    v88 = 0;
    v90 = 0;
    v93 = 0;
    v96 = 0;
    v98 = 0;
    v62 = 0;
    v64 = 0;
    v65 = 0;
    v66 = 0;
    v67 = &g_1;
    v68 = 0;
    v69 = &g_1;
    v72 = &g_1;
    v74 = &g_1;
    v76 = &g_1;
    v78 = &g_1;
    v80 = &g_1;
    v82 = &g_1;
    v84 = &g_1;
    v87 = &g_1;
    v89 = &g_1;
    v92 = &g_1;
    v95 = &g_1;
    v97 = &g_1;
    v100 = &g_1;
    v101 = 0;
    v102 = 0x8000000000000000;
    v104 = 0x8000000000000000;
    v105 = v287;
    v106 = &g_426c34;
    v107 = &g_1;
    v108 = &g_426c34;
    v109 = &g_1;
    v110 = 0;
    v112 = 4785074604081272;
    v114 = 0;
    v115 = 3337;
    v120 = 0;
    v121 = &g_1;
    v122 = 0;
    v120 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_11);
    v323 = v121;
    v324 = v122;
    *((v323 + v324) as &i128) = 144103886091716050710236587639905023091;
    *((v323 + v324 + &g_1 as &u8) as &i64) = 7882834762089570405;
    v122 = v324 + &g_11 as &u8;
    v176 = *((&v120 as &char + 8) as &i128);
    if v102 != 0x8000000000000000 {
        v120 = v176;
    }
    v102 = v120;
    memcpy(&v120, &v62, 588);
    v172 = *((&v62 as &char + 589) as &i16);
    v174 = *((&v62 as &char + 591) as &i8);
    v171 = &g_1;
    v62 = clap_builder::builder::command::Command::arg(&v0, &v120);
    v12 = 0;
    v15 = 0;
    v17 = 0;
    v19 = 0;
    v21 = 0;
    v23 = 0;
    v25 = 0;
    v27 = 0;
    v29 = 0;
    v32 = 0;
    v37 = 0;
    v39 = 0;
    v0 = 0;
    v2 = 0;
    v5 = 0;
    v6 = 0;
    v8 = &g_1;
    v10 = 0;
    v11 = &g_1;
    v14 = &g_1;
    v16 = &g_1;
    v18 = &g_1;
    v20 = &g_1;
    v22 = &g_1;
    v24 = &g_1;
    v26 = &g_1;
    v28 = &g_1;
    v31 = &g_1;
    v34 = &g_1;
    v35 = 0;
    v36 = &g_1;
    v38 = &g_1;
    v41 = &g_1;
    v42 = 0;
    v43 = 0x8000000000000000;
    v45 = 0x8000000000000000;
    v48 = v287;
    v50 = &g_426c5b;
    v51 = &g_1;
    v52 = &g_426c5b;
    v53 = &g_1;
    v54 = 0;
    v55 = 0x11000000110000;
    v56 = 0;
    v57 = 3337;
    v176 = struct32 {
        field_0: &g_418720
        field_8: &g_1
        field_16: 0
        field_24: &g_1
    };
    v120 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v176);
    v35 = v122;
    v33 = v120;
    memcpy(&v120, &v0, 592);
    v0 = struct64 {
        field_0: &g_426968
        field_8: &g_1
        field_16: &g_41870c
        field_24: &g_1
        field_32: &g_426962
        field_40: &g_1
        field_48: 0
        field_56: &g_1
    };
    v176 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v0);
    v0 = clap_builder::builder::arg::Arg::value_parser(&v120, &v176);
    v120 = 0;
    v121 = &g_1;
    v122 = 0;
    v120 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_20);
    v325 = v121;
    v326 = v122;
    *((v325 + v326 + &g_11 as &u8) as &i128) = 158756674982352658480269053241993226598;
    *((v325 + v326 + &g_1 as &u8) as &i128) = 153387840348778237069217821573859667744;
    *((v325 + v326) as &i128) = 146793563361256034605037961529682456419;
    v122 = v326 + &g_20 as &u8;
    v327 = v120;
    v176 = *((&v120 as &char + 8) as &i128);
    if v327 != 0x8000000000000000 {
        v120 = v176;
    }
    v43 = v327;
    v44 = v120;
    memcpy(&v120, &v0, 592);
    v0 = clap_builder::builder::command::Command::arg(&v62, &v120);
    v70 = 0;
    v73 = 0;
    v75 = 0;
    v77 = 0;
    v79 = 0;
    v81 = 0;
    v83 = 0;
    v85 = 0;
    v88 = 0;
    v90 = 0;
    v93 = 0;
    v96 = 0;
    v98 = 0;
    v62 = 0;
    v64 = 0;
    v65 = 0;
    v66 = 0;
    v67 = &g_1;
    v68 = 0;
    v69 = &g_1;
    v72 = &g_1;
    v74 = &g_1;
    v76 = &g_1;
    v78 = &g_1;
    v80 = &g_1;
    v82 = &g_1;
    v84 = &g_1;
    v87 = &g_1;
    v89 = &g_1;
    v92 = &g_1;
    v95 = &g_1;
    v97 = &g_1;
    v100 = &g_1;
    v101 = 0;
    v102 = 0x8000000000000000;
    v104 = 0x8000000000000000;
    v105 = v287;
    v106 = &g_4266ca;
    v107 = &g_1;
    v108 = &g_4266ca;
    v109 = &g_1;
    v110 = 0;
    v112 = 0x11000000110000;
    v114 = 0;
    v115 = 3337;
    v328 = v73;
    if v328 == *((&v70 as &char + 8) as &i64) {
        v71 = alloc::raw_vec::RawVec<T,A>::grow_one();
    }
    v329 = v72;
    v330 = v328 * &g_1;
    *((v329 + v330) as &&i64) = &g_4266bb;
    *((v329 + v330 + &g_1 as &u8) as &&i64) = &g_1;
    v73 = v328 + &g_1 as &u8;
    memcpy(&v120, &v62, 592);
    v62 = 0;
    v63 = &g_1;
    v64 = 0;
    v62 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, 61);
    v331 = v63;
    v332 = v64;
    *((v331 + v332 + &g_20 as &u8) as &i128) = 134866857403253890215399348663110541427;
    *((v331 + v332 + &g_20 as &u8) as &i128) = 158346625510578737793714372590332572448;
    *((v331 + v332 + &g_1 as &u8) as &i128) = 136158258705738512983036002434215341923;
    *((v331 + v332) as &i128) = 42838485361950828999568937348934954830;
    v64 = v332 + 61;
    v333 = v62;
    v176 = *((&v62 as &char + 8) as &i128);
    if v333 != 0x8000000000000000 {
        v62 = v176;
    }
    v159 = v333;
    v160 = v62;
    memcpy(&v176, &v120, 588);
    v182 = v172;
    v183 = v174;
    v181 = &g_1;
    v62 = clap_builder::builder::command::Command::arg(&v0, &v176);
    v12 = 0;
    v15 = 0;
    v17 = 0;
    v19 = 0;
    v21 = 0;
    v23 = 0;
    v25 = 0;
    v27 = 0;
    v29 = 0;
    v32 = 0;
    v37 = 0;
    v39 = 0;
    v0 = 0;
    v2 = 0;
    v5 = 0;
    v6 = 0;
    v8 = &g_1;
    v10 = 0;
    v11 = &g_1;
    v14 = &g_1;
    v16 = &g_1;
    v18 = &g_1;
    v20 = &g_1;
    v22 = &g_1;
    v24 = &g_1;
    v26 = &g_1;
    v28 = &g_1;
    v31 = &g_1;
    v34 = &g_1;
    v35 = 0;
    v36 = &g_1;
    v38 = &g_1;
    v41 = &g_1;
    v42 = 0;
    v43 = 0x8000000000000000;
    v45 = 0x8000000000000000;
    v48 = v287;
    v50 = &g_425e2c;
    v51 = &g_1;
    v52 = &g_425e2c;
    v53 = &g_1;
    v54 = 0;
    v55 = 0x11000000110000;
    v56 = 0;
    v57 = 3337;
    v176 = struct32 {
        field_0: &g_426cc9
        field_8: &g_1
        field_16: 0
        field_24: &g_1
    };
    v120 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v176);
    v35 = v122;
    v33 = v120;
    memcpy(&v120, &v0, 592);
    v0 = 0;
    v1 = &g_1;
    v2 = 0;
    v0 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_41);
    v334 = v1;
    v335 = v2;
    *((v334 + v335 + &g_3f as &u8) as &i128) = 134836028194505565254690341424869635104;
    *((v334 + v335 + &g_30 as &u8) as &i128) = 134814933379316252709937238753615766884;
    *((v334 + v335 + &g_20 as &u8) as &i128) = 43067164063500877487332351608079280498;
    *((v334 + v335 + &g_1 as &u8) as &i128) = 156035770540487908990326244371567240563;
    *((v334 + v335) as &i128) = 42838485361950828999568937348934954830;
    v2 = v335 + &g_41 as &u8;
    v336 = v0;
    v176 = *((&v0 as &char + 8) as &i128);
    if v336 != 0x8000000000000000 {
        v0 = v176;
    }
    v159 = v336;
    v160 = v0;
    memcpy(&v176, &v120, 592);
    v0 = clap_builder::builder::command::Command::arg(&v62, &v176);
    v70 = 0;
    v73 = 0;
    v75 = 0;
    v77 = 0;
    v79 = 0;
    v81 = 0;
    v83 = 0;
    v85 = 0;
    v88 = 0;
    v90 = 0;
    v93 = 0;
    v96 = 0;
    v98 = 0;
    v62 = 0;
    v64 = 0;
    v65 = 0;
    v66 = 0;
    v67 = &g_1;
    v68 = 0;
    v69 = &g_1;
    v72 = &g_1;
    v74 = &g_1;
    v76 = &g_1;
    v78 = &g_1;
    v80 = &g_1;
    v82 = &g_1;
    v84 = &g_1;
    v87 = &g_1;
    v89 = &g_1;
    v92 = &g_1;
    v95 = &g_1;
    v97 = &g_1;
    v100 = &g_1;
    v101 = 0;
    v102 = 0x8000000000000000;
    v104 = 0x8000000000000000;
    v105 = v287;
    v106 = &g_418948;
    v107 = &g_1;
    v108 = &g_418948;
    v109 = &g_1;
    v110 = 0;
    v116 = &g_1;
    v112 = 103;
    v113 = 0x110000;
    v115 = &g_1;
    v120 = 0;
    v121 = &g_1;
    v122 = 0;
    v120 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_41);
    v337 = v121;
    v338 = v122;
    *((v337 + v338 + 62) as &i128) = 61743800800074078239158193810242478201;
    *((v337 + v338 + &g_30 as &u8) as &i128) = 43165554027513532791520829295042786415;
    *((v337 + v338 + &g_20 as &u8) as &i128) = 146383573841901506781884272749241919848;
    *((v337 + v338 + &g_1 as &u8) as &i128) = 154357785428359601915162553764183831411;
    *((v337 + v338) as &i128) = 134846047334081532437163941000538974532;
    v122 = v338 + &g_41 as &u8;
    v176 = *((&v120 as &char + 8) as &i128);
    if v102 != 0x8000000000000000 {
        v120 = v176;
    }
    v102 = v120;
    memcpy(&v120, &v62, 592);
    v62 = clap_builder::builder::command::Command::arg(&v0, &v120);
    v12 = 0;
    v15 = 0;
    v17 = 0;
    v19 = 0;
    v21 = 0;
    v23 = 0;
    v25 = 0;
    v27 = 0;
    v29 = 0;
    v32 = 0;
    v35 = 0;
    v37 = 0;
    v39 = 0;
    v0 = 0;
    v2 = &g_1;
    v3 = &g_1;
    v4 = -1;
    v5 = 0;
    v6 = 0;
    v7 = v176;
    v8 = &g_1;
    v9 = v187;
    v10 = 0;
    v11 = &g_1;
    v14 = &g_1;
    v16 = &g_1;
    v18 = &g_1;
    v20 = &g_1;
    v22 = &g_1;
    v24 = &g_1;
    v26 = &g_1;
    v28 = &g_1;
    v31 = &g_1;
    v34 = &g_1;
    v36 = &g_1;
    v38 = &g_1;
    v41 = &g_1;
    v42 = 0;
    v43 = 0x8000000000000000;
    v44 = v186;
    v45 = 0x8000000000000000;
    v47 = v122;
    v46 = v120;
    v48 = v287;
    v49 = v185;
    v50 = &g_426d6a;
    v51 = &g_1;
    v52 = 0;
    v54 = 0;
    v55 = 0x201000000010011000000110000;
    *(&v176.field_24 as &struct8) = struct8 {
        field_0: &g_1
    };
    v120 = clap_builder::builder::arg::Arg::value_parser(&v0, &v176);
    clap_builder::builder::command::Command::arg(a0, &v62, &v120);
    return a0;
}
