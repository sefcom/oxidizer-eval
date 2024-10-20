fn uu_mv::uu_app(a0: u32) -> u64 {
    let v0: i4736;  // [sp-0xaa8], Other Possible Types: Enum, struct592, struct24, Argument
    let v1: i64;  // [bp-0xaa0], Other Possible Types: Argument
    let v2: i64;  // [sp-0xa98]
    let v3: i64;  // [sp-0xa90]
    let v4: i64;  // [sp-0xa80]
    let v5: i64;  // [sp-0xa70]
    let v6: i64;  // [sp-0xa58]
    let v7: i64;  // [sp-0xa40], Other Possible Types: struct16
    let v8: i64;  // [sp-0xa38]
    let v9: i64;  // [bp-0xa30]
    let v10: struct16;  // [bp-0xa28], Other Possible Types: i128
    let v11: i64;  // [sp-0xa20]
    let v12: i64;  // [bp-0xa18]
    let v13: i64;  // [sp-0xa08]
    let v14: i128;  // [sp-0xa00]
    let v15: i64;  // [sp-0x9f0]
    let v16: i128;  // [sp-0x9e8]
    let v17: i64;  // [sp-0x9d8]
    let v18: i128;  // [sp-0x9d0]
    let v19: i64;  // [sp-0x9c0]
    let v20: i128;  // [sp-0x9b8]
    let v21: i64;  // [sp-0x9a8]
    let v22: i128;  // [sp-0x9a0]
    let v23: i64;  // [sp-0x990]
    let v24: i128;  // [sp-0x988]
    let v25: i64;  // [sp-0x978]
    let v26: i128;  // [sp-0x970]
    let v27: i64;  // [sp-0x960]
    let v28: i128;  // [sp-0x958]
    let v29: i64;  // [sp-0x948]
    let v30: i64;  // [bp-0x940]
    let v31: i64;  // [sp-0x930]
    let v32: i128;  // [sp-0x928]
    let v33: i64;  // [sp-0x918]
    let v34: i128;  // [sp-0x910]
    let v35: i64;  // [sp-0x900]
    let v36: i64;  // [sp-0x8f8]
    let v37: i64;  // [sp-0x8f0]
    let v38: i64;  // [sp-0x8d8]
    let v39: i64;  // [sp-0x8b0]
    let v40: i64;  // [sp-0x898]
    let v41: i64;  // [sp-0x890]
    let v42: i64;  // [sp-0x888]
    let v43: i64;  // [sp-0x880]
    let v44: i64;  // [sp-0x878]
    let v45: i64;  // [sp-0x868]
    let v46: i32;  // [sp-0x860]
    let v47: i16;  // [sp-0x85c]
    let v48: i8;  // [bp-0x85b]
    let v49: i16;  // [bp-0x85a]
    let v50: i8;  // [sp-0x859]
    let v51: i128;  // [bp-0x858], Other Possible Types: struct712
    let v52: i64;  // [sp-0x848]
    let v53: i64;  // [sp-0x830]
    let v54: i64;  // [sp-0x820]
    let v55: i64;  // [sp-0x808]
    let v56: i64;  // [sp-0x7f0]
    let v57: i64;  // [sp-0x7e8]
    let v58: i128;  // [sp-0x7e0]
    let v59: i64;  // [sp-0x7d0]
    let v60: i128;  // [sp-0x7c8]
    let v61: i64;  // [sp-0x7b8]
    let v62: i128;  // [sp-0x7b0]
    let v63: i64;  // [sp-0x7a0]
    let v64: i128;  // [sp-0x798]
    let v65: i64;  // [sp-0x788]
    let v66: i128;  // [sp-0x780]
    let v67: i64;  // [sp-0x770]
    let v68: i128;  // [sp-0x768]
    let v69: i64;  // [sp-0x758]
    let v70: i128;  // [sp-0x750]
    let v71: i64;  // [sp-0x740]
    let v72: i128;  // [sp-0x738]
    let v73: i64;  // [sp-0x728]
    let v74: i128;  // [sp-0x720]
    let v75: i64;  // [sp-0x710]
    let v76: i128;  // [sp-0x708]
    let v77: i64;  // [sp-0x6f8]
    let v78: i128;  // [sp-0x6f0]
    let v79: i64;  // [sp-0x6e0]
    let v80: i128;  // [sp-0x6d8]
    let v81: i64;  // [sp-0x6c8]
    let v82: i128;  // [bp-0x6c0]
    let v83: i64;  // [sp-0x6b8]
    let v84: i128;  // [bp-0x6b0]
    let v85: i64;  // [sp-0x6a8]
    let v86: i64;  // [sp-0x6a0]
    let v87: i64;  // [sp-0x688]
    let v88: i64;  // [sp-0x660]
    let v89: i64;  // [sp-0x648]
    let v90: i64;  // [sp-0x640]
    let v91: i64;  // [sp-0x638]
    let v92: i64;  // [sp-0x630]
    let v93: i64;  // [sp-0x628]
    let v94: i64;  // [sp-0x618]
    let v95: i32;  // [sp-0x610]
    let v96: i16;  // [sp-0x60c]
    let v97: i8;  // [bp-0x59c]
    let v98: i8;  // [bp-0x594]
    let v99: i5696;  // [sp-0x588], Other Possible Types: struct712, Enum, struct8
    let v100: i64;  // [sp-0x580]
    let v101: i64;  // [sp-0x578]
    let v102: i64;  // [sp-0x570]
    let v103: i64;  // [sp-0x568]
    let v104: i64;  // [sp-0x560]
    let v105: i64;  // [sp-0x550]
    let v106: i64;  // [sp-0x538]
    let v107: i64;  // [sp-0x520]
    let v108: i64;  // [sp-0x518]
    let v109: i128;  // [sp-0x510]
    let v110: i64;  // [sp-0x500]
    let v111: i128;  // [sp-0x4f8]
    let v112: i64;  // [sp-0x4e8]
    let v113: i128;  // [sp-0x4e0]
    let v114: i64;  // [sp-0x4d0]
    let v115: i128;  // [sp-0x4c8]
    let v116: i64;  // [sp-0x4b8]
    let v117: i128;  // [sp-0x4b0]
    let v118: i64;  // [sp-0x4a0]
    let v119: i128;  // [sp-0x498]
    let v120: i64;  // [sp-0x488]
    let v121: i128;  // [sp-0x480]
    let v122: i64;  // [sp-0x470]
    let v123: i128;  // [sp-0x468]
    let v124: i64;  // [sp-0x458]
    let v125: i128;  // [sp-0x450]
    let v126: i64;  // [sp-0x440]
    let v127: i128;  // [bp-0x438]
    let v128: i128;  // [bp-0x430]
    let v129: i64;  // [sp-0x428]
    let v130: i128;  // [bp-0x420]
    let v131: i64;  // [sp-0x410]
    let v132: i128;  // [sp-0x408]
    let v133: i64;  // [sp-0x3f8]
    let v134: i128;  // [sp-0x3f0]
    let v135: i64;  // [sp-0x3e0]
    let v136: i64;  // [sp-0x3d8]
    let v137: i64;  // [sp-0x3d0]
    let v138: i64;  // [sp-0x3b8]
    let v139: i128;  // [sp-0x3b0]
    let v140: i64;  // [sp-0x390]
    let v141: i64;  // [sp-0x378]
    let v142: i64;  // [sp-0x370]
    let v143: i64;  // [sp-0x368]
    let v144: i64;  // [sp-0x360]
    let v145: i64;  // [sp-0x358]
    let v146: i64;  // [sp-0x348]
    let v147: i32;  // [sp-0x340]
    let v148: i16;  // [bp-0x33c]
    let v149: i8;  // [sp-0x33b]
    let v150: i16;  // [sp-0x33a]
    let v151: i64;  // [sp-0x328]
    let v152: i64;  // [sp-0x320]
    let v153: i64;  // [sp-0x2cc]
    let v154: i32;  // [sp-0x2c4]
    let v155: struct24;  // [bp-0x2b8]
    let v156: i192;  // [sp-0x2a0], Other Possible Types: String
    let v157: i128;  // [bp-0x288], Other Possible Types: struct24
    let v158: i8;  // [sp-0x3c]
    let v159: i16;  // [sp-0x3b]
    let v160: i8;  // [sp-0x39]
    let v162: i64;  // rbx
    let v163: i64;  // rbx
    let v164: i64;  // rax
    let v165: i64;  // rcx
    let v166: i64;  // rsi
    let v167: i64;  // rax
    let v168: i64;  // rcx
    let v169: i64;  // rax
    let v170: i64;  // rcx
    let v171: i64;  // rsi
    let v172: i64;  // rax
    let v173: i64;  // rcx
    let v174: i64;  // rax
    let v175: i64;  // rcx
    let v176: i64;  // rsi
    let v177: i64;  // rax
    let v178: i64;  // rcx
    let v179: i64;  // rax
    let v180: i64;  // rcx
    let v181: i64;  // rcx
    let v182: i64;  // rsi
    let v184: i16;  // r12w
    let v186: i64;  // r14
    let v187: i64;  // rax
    let v188: i64;  // rcx
    let v189: i64;  // rax
    let v190: i64;  // rcx
    let v191: i64;  // rax
    let v192: i64;  // rcx
    let v193: i64;  // rax
    let v194: i64;  // rcx
    let v195: i64;  // rax
    let v196: i64;  // rcx

    if _ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 != 2 {
        once_cell::imp::OnceCell<T>::initialize(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
    }
    v99 = clap_builder::builder::command::Command::new(g_537550, g_537558);
    v151 = &g_420c3c;
    v152 = &g_1;
    memcpy(&v51, &v99, 712);
    v99 = clap_builder::builder::command::Command::about(&v51, &g_420c42, &g_3f);
    v0 = uucore::format_usage(&g_420c82, 104);
    v162 = v0;
    if v162 != 0x8000000000000000 {
        v51 = *((&v0 as &char + 8) as &i128);
    }
    v138 = v162;
    v139 = v51;
    memcpy(&v51, &v99, 712);
    v0 = Argument {
        value: "When specifying more than one of -i, -f, -n, only the final one will take effect.\n\nDo not move a non-directory that has an existing destination with the same or newer modification timestamp;\ninstead, silently skip the file without failing. If the move is across file system boundaries, the comparison is\nto the source timestamp truncated to the resolutions of the destination file system and of the system calls used\nto update timestamps; this avoids duplicate work if several mv -u commands are executed with the same source\nand destination. This option is ignored if the -n or --no-clobber option is also specified. which gives more control\nover which existing files in the destination are replaced, and its value can be one of the following:\n\n* all    This is the default operation when an --update option is not specified, and results in all existing files in the destination being replaced.\n* none   This is similar to the --no-clobber option, in that no files in the destination are replaced, but also skipping a file does not induce a failure.\n* older  This is the default operation when --update is specified, and results in files being replaced if they’re older than the corresponding source file."
        formatter: <&T as core::fmt::Display>::fmt
    };
    v1 = Argument {
        value: <&T as core::fmt::Display>::fmt
        formatter: "The backup suffix is '~', unless set with --suffix or SIMPLE_BACKUP_SUFFIX.\nThe version control method may be selected via the --backup option or through\nthe VERSION_CONTROL environment variable.  Here are the values:\n\n  none, off       never make backups (even if --backup is given)\n  numbered, t     make numbered backups\n  existing, nil   numbered if numbered backups exist, simple otherwise\n  simple, never   always make simple backups"
    };
    v3 = <&T as core::fmt::Display>::fmt;
    v99 = struct8 {
        field_24: &g_530858
    };
    v156 = alloc::fmt::format::format_inner(&v99);
    v163 = v156;
    if v163 != 0x8000000000000000 {
        v99 = *((&v156 as &char + 8) as &i128);
    }
    v83 = v163;
    v84 = v99;
    memcpy(&v99, &v51, 700);
    v153 = 549755814016 | v97;
    v154 = v98;
    v58 = 0;
    v60 = 0;
    v62 = 0;
    v64 = 0;
    v66 = 0;
    v68 = 0;
    v70 = 0;
    v72 = 0;
    v74 = 0;
    v76 = 0;
    v78 = 0;
    v80 = 0;
    v82 = 0;
    v51 = 0;
    v52 = 0;
    v53 = 0;
    v54 = 0;
    v55 = &g_1;
    v56 = 0;
    v57 = &g_1;
    v59 = &g_1;
    v61 = &g_1;
    v63 = &g_1;
    v65 = &g_1;
    v67 = &g_1;
    v69 = &g_1;
    v71 = &g_1;
    v73 = &g_1;
    v75 = &g_1;
    v77 = &g_1;
    v79 = &g_1;
    v81 = &g_1;
    v84 = &g_1;
    v85 = 0;
    v86 = 0x8000000000000000;
    v87 = 0x8000000000000000;
    v88 = 9223372036854775809;
    v89 = &g_420be8;
    v90 = &g_1;
    v91 = &g_420be8;
    v92 = &g_1;
    v93 = 0;
    v94 = 4785074604081254;
    v95 = 0;
    v96 = 3337;
    v0 = 0;
    v1 = &g_1;
    v2 = 0;
    v0 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_11);
    v164 = v1;
    v165 = v2;
    *((v164 + v165 + &g_1 as &u8) as &i128) = 137483775096394708674816896180275015526;
    *((v164 + v165) as &i128) = 134761530928781705087013879855884300132;
    v2 = v165 + &g_11 as &u8;
    v157 = *((&v0 as &char + 8) as &i128);
    if v86 != 0x8000000000000000 {
        v0 = v157;
    }
    v86 = v0;
    memcpy(&v0, &v51, 592);
    v166 = v12;
    if v10 - v166 <= 1 {
        v10 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v166, &g_1);
        v166 = v12;
    }
    v167 = v11;
    v168 = v166 * &g_1;
    *((v167 + v168) as &&i64) = &g_420bed;
    *((v167 + v168 + &g_1 as &u8) as &&i64) = &g_1;
    *((v167 + v168 + &g_1 as &u8) as &&i64) = &g_420bf8;
    *((v167 + v168 + &g_11 as &u8) as &&i64) = &g_1;
    v12 = v166 + &g_1 as &u8;
    memcpy(&v157, &v0, 588);
    v159 = v48;
    v160 = v50;
    v158 = &g_1;
    v51 = clap_builder::builder::command::Command::arg(&v99, &v157);
    v109 = 0;
    v111 = 0;
    v113 = 0;
    v115 = 0;
    v117 = 0;
    v119 = 0;
    v121 = 0;
    v123 = 0;
    v125 = 0;
    v127 = 0;
    v130 = 0;
    v132 = 0;
    v134 = 0;
    v99 = 0;
    v101 = 0;
    v104 = 0;
    v105 = 0;
    v106 = &g_1;
    v107 = 0;
    v108 = &g_1;
    v110 = &g_1;
    v112 = &g_1;
    v114 = &g_1;
    v116 = &g_1;
    v118 = &g_1;
    v120 = &g_1;
    v122 = &g_1;
    v124 = &g_1;
    v126 = &g_1;
    v129 = &g_1;
    v131 = &g_1;
    v133 = &g_1;
    v135 = &g_1;
    v136 = 0;
    v137 = 0x8000000000000000;
    v138 = 0x8000000000000000;
    v140 = 9223372036854775809;
    v141 = &g_420bed;
    v142 = &g_1;
    v143 = &g_420bed;
    v144 = &g_1;
    v145 = 0;
    v146 = 4785074604081257;
    v147 = 0;
    v148 = 3337;
    v0 = 0;
    v1 = &g_1;
    v2 = 0;
    v0 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_11);
    v169 = v1;
    v170 = v2;
    *((v169 + v170) as &i128) = 157425905528485135100751526728291021424;
    *((v169 + v170 + &g_1 as &u8) as &i64) = 7306080435768227439;
    v2 = v170 + &g_11 as &u8;
    v157 = *((&v0 as &char + 8) as &i128);
    if v137 != 0x8000000000000000 {
        v0 = v157;
    }
    v137 = v0;
    memcpy(&v0, &v99, 592);
    v171 = v12;
    if v10 - v171 <= 1 {
        v10 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v171, &g_1);
        v171 = v12;
    }
    v172 = v11;
    v173 = v171 * &g_1;
    *((v172 + v173) as &&i64) = &g_420be8;
    *((v172 + v173 + &g_1 as &u8) as &&i64) = &g_1;
    *((v172 + v173 + &g_1 as &u8) as &&i64) = &g_420bf8;
    *((v172 + v173 + &g_11 as &u8) as &&i64) = &g_1;
    v12 = v171 + &g_1 as &u8;
    memcpy(&v157, &v0, 588);
    v159 = v48;
    v160 = v50;
    v158 = &g_1;
    v99 = clap_builder::builder::command::Command::arg(&v51, &v157);
    v58 = 0;
    v60 = 0;
    v62 = 0;
    v64 = 0;
    v66 = 0;
    v68 = 0;
    v70 = 0;
    v72 = 0;
    v74 = 0;
    v76 = 0;
    v78 = 0;
    v80 = 0;
    v82 = 0;
    v51 = 0;
    v52 = 0;
    v53 = 0;
    v54 = 0;
    v55 = &g_1;
    v56 = 0;
    v57 = &g_1;
    v59 = &g_1;
    v61 = &g_1;
    v63 = &g_1;
    v65 = &g_1;
    v67 = &g_1;
    v69 = &g_1;
    v71 = &g_1;
    v73 = &g_1;
    v75 = &g_1;
    v77 = &g_1;
    v79 = &g_1;
    v81 = &g_1;
    v84 = &g_1;
    v85 = 0;
    v86 = 0x8000000000000000;
    v87 = 0x8000000000000000;
    v88 = 9223372036854775809;
    v89 = &g_420bf8;
    v90 = &g_1;
    v91 = &g_420bf8;
    v92 = &g_1;
    v93 = 0;
    v94 = 4785074604081262;
    v95 = 0;
    v96 = 3337;
    v0 = 0;
    v1 = &g_1;
    v2 = 0;
    v0 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_21);
    v174 = v1;
    v175 = v2;
    *((v174 + v175 + &g_1 as &u8) as &i128) = 144103886088008279949824385951455928608;
    *((v174 + v175) as &i128) = 134856472731852466075637280383361380196;
    *((v174 + v175 + &g_11 as &u8) as &i8) = 101;
    v2 = v175 + &g_21 as &u8;
    v157 = *((&v0 as &char + 8) as &i128);
    if v86 != 0x8000000000000000 {
        v0 = v157;
    }
    v86 = v0;
    memcpy(&v0, &v51, 592);
    v176 = v12;
    if v10 - v176 <= 1 {
        v10 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v176, &g_1);
        v176 = v12;
    }
    v177 = v11;
    v178 = v176 * &g_1;
    *((v177 + v178) as &&i64) = &g_420be8;
    *((v177 + v178 + &g_1 as &u8) as &&i64) = &g_1;
    *((v177 + v178 + &g_1 as &u8) as &&i64) = &g_420bed;
    *((v177 + v178 + &g_11 as &u8) as &&i64) = &g_1;
    v12 = v176 + &g_1 as &u8;
    memcpy(&v157, &v0, 588);
    v159 = v48;
    v160 = v50;
    v158 = &g_1;
    v51 = clap_builder::builder::command::Command::arg(&v99, &v157);
    v109 = 0;
    v111 = 0;
    v113 = 0;
    v115 = 0;
    v117 = 0;
    v119 = 0;
    v121 = 0;
    v123 = 0;
    v125 = 0;
    v127 = 0;
    v130 = 0;
    v132 = 0;
    v134 = 0;
    v99 = 0;
    v101 = 0;
    v104 = 0;
    v105 = 0;
    v106 = &g_1;
    v107 = 0;
    v108 = &g_1;
    v110 = &g_1;
    v112 = &g_1;
    v114 = &g_1;
    v116 = &g_1;
    v118 = &g_1;
    v120 = &g_1;
    v122 = &g_1;
    v124 = &g_1;
    v126 = &g_1;
    v129 = &g_1;
    v131 = &g_1;
    v133 = &g_1;
    v135 = &g_1;
    v136 = 0;
    v137 = 0x8000000000000000;
    v138 = 0x8000000000000000;
    v140 = 9223372036854775809;
    v141 = &g_420c02;
    v142 = &g_11;
    v143 = &g_420c02;
    v144 = &g_11;
    v145 = 0;
    v146 = 0x11000000110000;
    v147 = 0;
    v148 = 3337;
    v0 = 0;
    v1 = &g_1;
    v2 = 0;
    v0 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_2e);
    v179 = v1;
    v180 = v2;
    *((v179 + v180 + &g_11 as &u8) as &i128) = 137504375358187912442562309124901659936;
    *((v179 + v180 + &g_1 as &u8) as &i128) = 145464516777863614428001542874298019433;
    *((v179 + v180) as &i128) = 144103791176598672220761149993300878706;
    *((v179 + v180 + 45) as &i64) = 8389754676633367137;
    v2 = v180 + &g_2e as &u8;
    v157 = *((&v0 as &char + 8) as &i128);
    if v137 != 0x8000000000000000 {
        v0 = v157;
    }
    v137 = v0;
    memcpy(&v0, &v99, 588);
    v48 = *((&v99 as &char + 589) as &i16);
    v50 = *((&v99 as &char + 591) as &i8);
    v47 = &g_1;
    v99 = clap_builder::builder::command::Command::arg(&v51, &v0);
    v0 = uucore::features::backup_control::arguments::backup();
    v51 = clap_builder::builder::command::Command::arg(&v99, &v0);
    v0 = uucore::features::backup_control::arguments::backup_no_args();
    v99 = clap_builder::builder::command::Command::arg(&v51, &v0);
    v0 = uucore::features::backup_control::arguments::suffix();
    v51 = clap_builder::builder::command::Command::arg(&v99, &v0);
    v0 = uucore::features::update_control::arguments::update();
    v99 = clap_builder::builder::command::Command::arg(&v51, &v0);
    v0 = uucore::features::update_control::arguments::update_no_args();
    v51 = clap_builder::builder::command::Command::arg(&v99, &v0);
    v9 = 0;
    v12 = 0;
    v14 = 0;
    v16 = 0;
    v18 = 0;
    v20 = 0;
    v22 = 0;
    v24 = 0;
    v26 = 0;
    v28 = 0;
    v30 = 0;
    v32 = 0;
    v34 = 0;
    v0 = 0;
    v2 = 0;
    v4 = 0;
    v5 = 0;
    v6 = &g_1;
    v7 = 0;
    v8 = &g_1;
    v11 = &g_1;
    v13 = &g_1;
    v15 = &g_1;
    v17 = &g_1;
    v19 = &g_1;
    v21 = &g_1;
    v23 = &g_1;
    v25 = &g_1;
    v27 = &g_1;
    v29 = &g_1;
    v31 = &g_1;
    v33 = &g_1;
    v35 = &g_1;
    v36 = 0;
    v37 = 0x8000000000000000;
    v38 = 0x8000000000000000;
    v39 = 9223372036854775809;
    v40 = &g_417130;
    v41 = &g_1;
    v42 = &g_417130;
    v43 = &g_1;
    v44 = 0;
    v45 = 4785074604081268;
    v46 = 0;
    v47 = 3337;
    v99 = 0;
    v100 = &g_1;
    v101 = 0;
    v99 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, 40);
    v181 = v100;
    v182 = v101;
    *((v181 + v182 + &g_1 as &u8) as &i128) = 90555917784950692368552343582538166881;
    *((v181 + v182) as &i128) = 42894929792911105399975018643143946093;
    *((v181 + v182 + &g_11 as &u8) as &i64) = 6436294040790323785;
    v101 = v182 + 40;
    v157 = *((&v99 as &char + 8) as &i128);
    if v37 != 0x8000000000000000 {
        v99 = v157;
    }
    v37 = v99;
    memcpy(&v99, &v0, 360);
    memcpy(&v99, &v30, 221);
    v184 = *((&v0 as &char + 590) as &i16);
    v130 = v30;
    v149 = &g_1;
    v150 = v184;
    *(&v157.field_0 as &struct24) = struct24 {
        field_0: &g_4213ef
        field_8: &g_1
        field_16: 0
    };
    v0 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v157);
    v130 = v2;
    v128 = v0;
    memcpy(&v0, &v99, 360);
    memcpy(&v30, &v99, 221);
    v30 = v130;
    v48 = &g_1;
    v49 = v184;
    v186 = v9;
    if v186 == v7 {
        v7 = alloc::raw_vec::RawVec<T,A>::grow_one();
    }
    v187 = v8;
    v188 = v186 * &g_1;
    *((v187 + v188) as &&i64) = &g_420c18;
    *((v187 + v188 + &g_1 as &u8) as &&i64) = &g_11;
    v9 = v186 + &g_1 as &u8;
    memcpy(&v99, &v0, 592);
    *(&v155.field_0 as &struct24) = struct24 {
        field_0: &g_1
        field_8: <UNKNOWN>
        field_16: <UNKNOWN>
    };
    v157 = *(&v155.field_0 as &i192);
    v0 = clap_builder::builder::arg::Arg::value_parser(&v99, &v157);
    v99 = clap_builder::builder::command::Command::arg(&v51, &v0);
    v58 = 0;
    v60 = 0;
    v62 = 0;
    v64 = 0;
    v66 = 0;
    v68 = 0;
    v70 = 0;
    v72 = 0;
    v74 = 0;
    v76 = 0;
    v78 = 0;
    v80 = 0;
    v82 = 0;
    v51 = 0;
    v52 = 0;
    v53 = 0;
    v54 = 0;
    v55 = &g_1;
    v56 = 0;
    v57 = &g_1;
    v59 = &g_1;
    v61 = &g_1;
    v63 = &g_1;
    v65 = &g_1;
    v67 = &g_1;
    v69 = &g_1;
    v71 = &g_1;
    v73 = &g_1;
    v75 = &g_1;
    v77 = &g_1;
    v79 = &g_1;
    v81 = &g_1;
    v84 = &g_1;
    v85 = 0;
    v86 = 0x8000000000000000;
    v87 = 0x8000000000000000;
    v88 = 9223372036854775809;
    v89 = &g_420c18;
    v90 = &g_11;
    v91 = &g_420c18;
    v92 = &g_11;
    v93 = 0;
    v94 = 4785074604081236;
    v95 = 0;
    v96 = 3337;
    v0 = 0;
    v1 = &g_1;
    v2 = 0;
    v0 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_11);
    v189 = v1;
    v190 = v2;
    *((v189 + v190 + &g_1 as &u8) as &i128) = 134814933379313768818814050762812846945;
    *((v189 + v190) as &i128) = 43039606838800322000495282581741597300;
    v2 = v190 + &g_11 as &u8;
    v157 = *((&v0 as &char + 8) as &i128);
    if v86 != 0x8000000000000000 {
        v0 = v157;
    }
    v86 = v0;
    memcpy(&v0, &v51, 588);
    v48 = *((&v51 as &char + 589) as &i16);
    v50 = *((&v51 as &char + 591) as &i8);
    v47 = &g_1;
    v51 = clap_builder::builder::command::Command::arg(&v99, &v0);
    v109 = 0;
    v111 = 0;
    v113 = 0;
    v115 = 0;
    v117 = 0;
    v119 = 0;
    v121 = 0;
    v123 = 0;
    v125 = 0;
    v127 = 0;
    v130 = 0;
    v132 = 0;
    v134 = 0;
    v99 = 0;
    v101 = 0;
    v104 = 0;
    v105 = 0;
    v106 = &g_1;
    v107 = 0;
    v108 = &g_1;
    v110 = &g_1;
    v112 = &g_1;
    v114 = &g_1;
    v116 = &g_1;
    v118 = &g_1;
    v120 = &g_1;
    v122 = &g_1;
    v124 = &g_1;
    v126 = &g_1;
    v129 = &g_1;
    v131 = &g_1;
    v133 = &g_1;
    v135 = &g_1;
    v136 = 0;
    v137 = 0x8000000000000000;
    v138 = 0x8000000000000000;
    v140 = 9223372036854775809;
    v141 = &g_420c2b;
    v142 = &g_1;
    v143 = &g_420c2b;
    v144 = &g_1;
    v145 = 0;
    v146 = 4785074604081270;
    v147 = 0;
    v148 = 3337;
    v0 = 0;
    v1 = &g_1;
    v2 = 0;
    v0 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_11);
    v191 = v1;
    v192 = v2;
    *((v191 + v192 + &g_1 as &u8) as &i128) = 134825439509026152042503714814086378593;
    *((v191 + v192) as &i128) = 43134542228176417259448481801986668645;
    v2 = v192 + &g_11 as &u8;
    v157 = *((&v0 as &char + 8) as &i128);
    if v137 != 0x8000000000000000 {
        v0 = v157;
    }
    v137 = v0;
    memcpy(&v0, &v99, 588);
    v48 = *((&v99 as &char + 589) as &i16);
    v50 = *((&v99 as &char + 591) as &i8);
    v47 = &g_1;
    v99 = clap_builder::builder::command::Command::arg(&v51, &v0);
    v58 = 0;
    v60 = 0;
    v62 = 0;
    v64 = 0;
    v66 = 0;
    v68 = 0;
    v70 = 0;
    v72 = 0;
    v74 = 0;
    v76 = 0;
    v78 = 0;
    v80 = 0;
    v82 = 0;
    v51 = 0;
    v52 = 0;
    v53 = 0;
    v54 = 0;
    v55 = &g_1;
    v56 = 0;
    v57 = &g_1;
    v59 = &g_1;
    v61 = &g_1;
    v63 = &g_1;
    v65 = &g_1;
    v67 = &g_1;
    v69 = &g_1;
    v71 = &g_1;
    v73 = &g_1;
    v75 = &g_1;
    v77 = &g_1;
    v79 = &g_1;
    v81 = &g_1;
    v84 = &g_1;
    v85 = 0;
    v86 = 0x8000000000000000;
    v87 = 0x8000000000000000;
    v88 = 9223372036854775809;
    v89 = &g_416d00;
    v90 = &g_1;
    v91 = &g_416d00;
    v92 = &g_1;
    v93 = 0;
    v94 = 4785074604081255;
    v95 = 0;
    v96 = 3337;
    v0 = 0;
    v1 = &g_1;
    v2 = 0;
    v0 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_3f);
    v193 = v1;
    v194 = v2;
    *((v193 + v194 + 62) as &i128) = 61743800800074078239158193810242478201;
    *((v193 + v194 + &g_2e as &u8) as &i128) = 43165554027513532791520829295042786415;
    *((v193 + v194 + &g_11 as &u8) as &i128) = 146383573841901506781884272749241919848;
    *((v193 + v194 + &g_1 as &u8) as &i128) = 154357785428359601915162553764183831411;
    *((v193 + v194) as &i128) = 134846047334081532437163941000538974532;
    v2 = v194 + &g_3f as &u8;
    v157 = *((&v0 as &char + 8) as &i128);
    if v86 != 0x8000000000000000 {
        v0 = v157;
    }
    v86 = v0;
    memcpy(&v0, &v51, 588);
    v48 = *((&v51 as &char + 589) as &i16);
    v50 = *((&v51 as &char + 591) as &i8);
    v47 = &g_1;
    v51 = clap_builder::builder::command::Command::arg(&v99, &v0);
    v109 = 0;
    v111 = 0;
    v113 = 0;
    v115 = 0;
    v117 = 0;
    v119 = 0;
    v121 = 0;
    v123 = 0;
    v125 = 0;
    v127 = 0;
    v130 = 0;
    v132 = 0;
    v134 = 0;
    v99 = 0;
    v101 = &g_1;
    v102 = &g_1;
    v103 = -1;
    v104 = 0;
    v105 = 0;
    v106 = &g_1;
    v107 = 0;
    v108 = &g_1;
    v110 = &g_1;
    v112 = &g_1;
    v114 = &g_1;
    v116 = &g_1;
    v118 = &g_1;
    v120 = &g_1;
    v122 = &g_1;
    v124 = &g_1;
    v126 = &g_1;
    v129 = &g_1;
    v131 = &g_1;
    v133 = &g_1;
    v135 = &g_1;
    v136 = 0;
    v137 = 0x8000000000000000;
    v138 = 0x8000000000000000;
    v140 = 9223372036854775809;
    v141 = &g_420c32;
    v142 = &g_1;
    v143 = 0;
    v145 = 0;
    v146 = 0xd01000000010011000000110000;
    v0 = clap_builder::builder::arg::Arg::value_parser(&v99, &v155);
    v48 = &g_1;
    memcpy(&v157, &v0, 592);
    v99 = clap_builder::builder::command::Command::arg(&v51, &v157);
    v58 = 0;
    v60 = 0;
    v62 = 0;
    v64 = 0;
    v66 = 0;
    v68 = 0;
    v70 = 0;
    v72 = 0;
    v74 = 0;
    v76 = 0;
    v78 = 0;
    v80 = 0;
    v82 = 0;
    v51 = 0;
    v52 = 0;
    v53 = 0;
    v54 = 0;
    v55 = &g_1;
    v56 = 0;
    v57 = &g_1;
    v59 = &g_1;
    v61 = &g_1;
    v63 = &g_1;
    v65 = &g_1;
    v67 = &g_1;
    v69 = &g_1;
    v71 = &g_1;
    v73 = &g_1;
    v75 = &g_1;
    v77 = &g_1;
    v79 = &g_1;
    v81 = &g_1;
    v84 = &g_1;
    v85 = 0;
    v86 = 0x8000000000000000;
    v87 = 0x8000000000000000;
    v88 = 9223372036854775809;
    v89 = &g_420c37;
    v90 = &g_1;
    v91 = &g_420c37;
    v92 = &g_1;
    v93 = 0;
    v94 = 0x11000000110000;
    v95 = 0;
    v96 = 3337;
    v0 = 0;
    v1 = &g_1;
    v2 = 0;
    v0 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, 40);
    v195 = v1;
    v196 = v2;
    *((v195 + v196 + &g_1 as &u8) as &i128) = 145265541923902765485468708045955556716;
    *((v195 + v196) as &i128) = 140099210569273708400399251232020002917;
    *((v195 + v196 + &g_11 as &u8) as &i64) = 8515498150422211696;
    v2 = v196 + 40;
    v157 = *((&v0 as &char + 8) as &i128);
    if v86 != 0x8000000000000000 {
        v0 = v157;
    }
    v86 = v0;
    memcpy(&v0, &v51, 588);
    v48 = *((&v51 as &char + 589) as &i16);
    v50 = *((&v51 as &char + 591) as &i8);
    v47 = &g_1;
    clap_builder::builder::command::Command::arg(a0, &v99, &v0);
    return a0;
}
