fn uu_uniq::uu_app(a0: u32) -> u64 {
    let v0: i128;  // [sp-0xa98], Other Possible Types: struct24, Enum, struct592, struct64, struct80
    let v1: i64;  // [sp-0xa90]
    let v2: i64;  // [bp-0xa88]
    let v3: i64;  // [sp-0xa80]
    let v4: i64;  // [sp-0xa78]
    let v5: i64;  // [sp-0xa70]
    let v6: i64;  // [sp-0xa60]
    let v7: i64;  // [sp-0xa48]
    let v8: i64;  // [sp-0xa30], Other Possible Types: struct16
    let v9: i64;  // [sp-0xa28]
    let v10: i128;  // [bp-0xa20]
    let v11: i64;  // [sp-0xa10]
    let v12: i128;  // [sp-0xa08]
    let v13: i64;  // [sp-0x9f8]
    let v14: i128;  // [sp-0x9f0]
    let v15: i64;  // [sp-0x9e0]
    let v16: i128;  // [sp-0x9d8]
    let v17: i64;  // [sp-0x9c8]
    let v18: i128;  // [sp-0x9c0]
    let v19: i64;  // [sp-0x9b0]
    let v20: i128;  // [sp-0x9a8]
    let v21: i64;  // [sp-0x998]
    let v22: i128;  // [sp-0x990]
    let v23: i64;  // [sp-0x980]
    let v24: i128;  // [sp-0x978]
    let v25: i64;  // [sp-0x968]
    let v26: i128;  // [sp-0x960]
    let v27: i64;  // [sp-0x950]
    let v28: i128;  // [bp-0x948]
    let v29: i128;  // [bp-0x940]
    let v30: i64;  // [sp-0x938]
    let v31: i64;  // [bp-0x930]
    let v32: i8;  // [bp-0x928]
    let v33: i64;  // [sp-0x920]
    let v34: i128;  // [sp-0x918]
    let v35: i64;  // [sp-0x908]
    let v36: i128;  // [sp-0x900]
    let v37: i64;  // [sp-0x8f0]
    let v38: i64;  // [sp-0x8e8]
    let v39: i64;  // [sp-0x8e0]
    let v40: i64;  // [sp-0x8c8]
    let v41: i64;  // [sp-0x8a0]
    let v42: i64;  // [sp-0x888]
    let v43: i64;  // [sp-0x880]
    let v44: i64;  // [sp-0x878]
    let v45: i64;  // [sp-0x870]
    let v46: i64;  // [sp-0x868]
    let v47: i64;  // [sp-0x858]
    let v48: i32;  // [sp-0x850]
    let v49: i32;  // [bp-0x84c]
    let v50: i16;  // [sp-0x84b]
    let v51: i8;  // [sp-0x849]
    let v52: i128;  // [bp-0x848], Other Possible Types: struct712, Enum, struct24
    let v53: i64;  // [sp-0x840]
    let v54: i64;  // [sp-0x838]
    let v55: i64;  // [sp-0x830]
    let v56: i64;  // [sp-0x828]
    let v57: i64;  // [sp-0x820]
    let v58: i64;  // [sp-0x810]
    let v59: i64;  // [sp-0x7f8]
    let v60: i64;  // [sp-0x7e0]
    let v61: i64;  // [sp-0x7d8]
    let v62: i128;  // [sp-0x7d0]
    let v63: i64;  // [sp-0x7c0]
    let v64: i128;  // [sp-0x7b8]
    let v65: i64;  // [sp-0x7a8]
    let v66: i128;  // [sp-0x7a0]
    let v67: i64;  // [sp-0x790]
    let v68: i128;  // [sp-0x788]
    let v69: i64;  // [sp-0x778]
    let v70: i128;  // [sp-0x770]
    let v71: i64;  // [sp-0x760]
    let v72: i128;  // [sp-0x758]
    let v73: i64;  // [sp-0x748]
    let v74: i128;  // [sp-0x740]
    let v75: i64;  // [sp-0x730]
    let v76: i128;  // [sp-0x728]
    let v77: i64;  // [sp-0x718]
    let v78: i128;  // [sp-0x710]
    let v79: i64;  // [sp-0x700]
    let v80: i128;  // [bp-0x6f8]
    let v81: i128;  // [bp-0x6f0]
    let v82: i64;  // [sp-0x6e8]
    let v83: i128;  // [bp-0x6e0]
    let v84: i64;  // [sp-0x6d0]
    let v85: i128;  // [sp-0x6c8]
    let v86: i64;  // [sp-0x6b8]
    let v87: i128;  // [bp-0x6b0]
    let v88: i128;  // [bp-0x6a8]
    let v89: i64;  // [sp-0x6a0]
    let v90: i64;  // [sp-0x698]
    let v91: i192;  // [sp-0x690]
    let v92: i64;  // [sp-0x678]
    let v93: i64;  // [sp-0x650]
    let v94: i64;  // [sp-0x638]
    let v95: i64;  // [sp-0x630]
    let v96: i64;  // [sp-0x628]
    let v97: i64;  // [sp-0x620]
    let v98: i64;  // [sp-0x618]
    let v99: i64;  // [sp-0x608]
    let v100: i32;  // [sp-0x600]
    let v101: i16;  // [bp-0x5fc]
    let v102: i64;  // [sp-0x58c]
    let v103: i32;  // [sp-0x584]
    let v104: i5696;  // [sp-0x578], Other Possible Types: struct712, Enum, struct24
    let v105: i64;  // [sp-0x570]
    let v106: i64;  // [sp-0x568]
    let v107: i64;  // [sp-0x560]
    let v108: i64;  // [sp-0x558]
    let v109: i64;  // [sp-0x550]
    let v110: i64;  // [sp-0x540]
    let v111: i64;  // [sp-0x528]
    let v112: i64;  // [sp-0x510]
    let v113: i64;  // [sp-0x508]
    let v114: i128;  // [sp-0x500]
    let v115: i64;  // [sp-0x4f0]
    let v116: i128;  // [sp-0x4e8]
    let v117: i64;  // [sp-0x4d8]
    let v118: i128;  // [sp-0x4d0]
    let v119: i64;  // [sp-0x4c0]
    let v120: i128;  // [sp-0x4b8]
    let v121: i64;  // [sp-0x4a8]
    let v122: i128;  // [sp-0x4a0]
    let v123: i64;  // [sp-0x490]
    let v124: i128;  // [sp-0x488]
    let v125: i64;  // [sp-0x478]
    let v126: i128;  // [sp-0x470]
    let v127: i64;  // [sp-0x460]
    let v128: i128;  // [sp-0x458]
    let v129: i64;  // [sp-0x448]
    let v130: i128;  // [sp-0x440]
    let v131: i64;  // [sp-0x430]
    let v132: i128;  // [bp-0x428]
    let v133: i128;  // [bp-0x420]
    let v134: i64;  // [sp-0x418]
    let v135: i64;  // [bp-0x410]
    let v136: i64;  // [sp-0x400]
    let v137: i128;  // [sp-0x3f8]
    let v138: i64;  // [sp-0x3e8]
    let v139: i128;  // [bp-0x3e0]
    let v140: i128;  // [bp-0x3d8]
    let v141: i64;  // [sp-0x3d0]
    let v142: i64;  // [sp-0x3c8]
    let v143: i64;  // [sp-0x3c0]
    let v144: i64;  // [sp-0x3a8]
    let v145: i128;  // [sp-0x3a0]
    let v146: i64;  // [sp-0x380]
    let v147: i64;  // [sp-0x368]
    let v148: i64;  // [sp-0x360]
    let v149: i64;  // [sp-0x358]
    let v150: i64;  // [sp-0x350]
    let v151: i64;  // [sp-0x348]
    let v152: i64;  // [sp-0x338]
    let v153: i32;  // [sp-0x330]
    let v154: i16;  // [sp-0x32c]
    let v155: i64;  // [sp-0x318]
    let v156: i64;  // [sp-0x310]
    let v157: i64;  // [sp-0x2b0]
    let v158: struct24;  // [sp-0x2a0], Other Possible Types: i192
    let v159: i128;  // [sp-0x288], Other Possible Types: struct32, struct592, struct8
    let v160: i64;  // [sp-0xd0]
    let v161: i128;  // [sp-0xc8]
    let v163: i64;  // rbx
    let v164: i64;  // rax
    let v165: i64;  // rcx
    let v166: i64;  // rbx
    let v167: i64;  // rbx
    let v168: i64;  // r13
    let v170: i64;  // rax
    let v171: i64;  // rcx
    let v172: i64;  // r14
    let v173: i64;  // r13
    let v174: i64;  // rbp
    let v175: i64;  // r13
    let v177: i64;  // rsi
    let v178: i64;  // rax
    let v179: i64;  // rcx
    let v180: i64;  // rax
    let v181: i64;  // rcx
    let v183: i64;  // rax
    let v184: i64;  // rcx
    let v185: i64;  // rax
    let v186: i64;  // rcx
    let v187: i64;  // rax
    let v188: i64;  // rcx
    let v189: i64;  // rax
    let v190: i64;  // rcx
    let v192: i64;  // rax
    let v193: i64;  // rcx
    let v195: i64;  // rax
    let v196: i64;  // rcx
    let v197: i64;  // rax
    let v198: i64;  // rcx

    if _ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 != 2 {
        once_cell::imp::OnceCell<T>::initialize(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
    }
    v104 = clap_builder::builder::command::Command::new(g_4f7f78, g_4f7f80);
    v155 = &g_41ab6a;
    v156 = &g_1;
    memcpy(&v52, &v104, 712);
    v104 = clap_builder::builder::command::Command::about(&v52, &g_41ab70, &g_11);
    v0 = uucore::format_usage(&g_41ab8e, &g_11);
    v163 = v0;
    if v163 != 0x8000000000000000 {
        v52 = *((&v0 as &char + 8) as &i128);
    }
    v144 = v163;
    v145 = v52;
    memcpy(&v52, &v104, 700);
    v102 = 549755814016 | *((&v104 as &char + 700) as &i64);
    v103 = *((&v104 as &char + 708) as &i32);
    v104 = clap_builder::builder::command::Command::after_help(&v52, &g_41abad, 238);
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
    v83 = 0;
    v85 = 0;
    v87 = 0;
    v52 = struct24 {
        field_80: 0
        field_88: <UNKNOWN>
        field_96: 0
    };
    v57 = 0;
    v58 = 0;
    v59 = &g_1;
    v60 = 0;
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
    v82 = &g_1;
    v84 = &g_1;
    v86 = &g_1;
    v89 = &g_1;
    v90 = 0;
    v91 = 0x8000000000000000;
    v92 = 0x8000000000000000;
    v93 = 9223372036854775809;
    v94 = &anon.f9427813c0255ce4c25516664eb43cb9.8.llvm.11736109415790202195;
    v95 = &g_1;
    v96 = &anon.f9427813c0255ce4c25516664eb43cb9.8.llvm.11736109415790202195;
    v97 = &g_1;
    v98 = 0;
    v99 = 4785074604081220;
    v100 = 0;
    v101 = 3337;
    v0 = struct64 {
        field_0: &g_411d68
        field_8: &g_1
        field_16: &g_41ac9b
        field_24: &g_1
        field_32: &g_411db0
        field_40: &g_1
        field_48: 0
        field_56: &g_1
    };
    v158 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v0);
    v159 = clap_builder::builder::arg::Arg::value_parser(&v52, &v158);
    v52 = 0;
    v53 = &g_1;
    v54 = 0;
    v52 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_40);
    v164 = v53;
    v165 = v54;
    *((v164 + v165 + &g_31 as &u8) as &i128) = 124144865484173947289092948320177117984;
    *((v164 + v165 + &g_21 as &u8) as &i128) = 42776482033929542791655765473037936756;
    *((v164 + v165 + &g_11 as &u8) as &i128) = 140187479956911556618432026189461288041;
    *((v164 + v165 + &g_1 as &u8) as &i128) = 145433241234067481020236363381747315809;
    *((v164 + v165) as &i128) = 132140962162975016143328404523209814640;
    v54 = v165 + &g_40 as &u8;
    v166 = v52;
    v0 = *((&v52 as &char + 8) as &i128);
    if v166 != 0x8000000000000000 {
        v52 = v0;
    }
    v157 = 9223372036854775809;
    v160 = v166;
    v161 = v52;
    v0 = v159;
    v167 = *((&v159 as &char + 32) as &i64);
    memcpy(&v0, &v159, 320);
    v168 = *((&v159 as &char + 360) as &i64);
    memcpy(&v32, &v159, 224);
    v2 = *((&v159 as &char + 16) as &i128);
    v4 = v167;
    v31 = v168;
    v159 = struct32 {
        field_0: &g_41acf1
        field_8: &g_1
        field_16: 0
        field_24: &g_1
    };
    v52 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v159);
    v31 = v54;
    v29 = v52;
    v52 = v0;
    memcpy(&v57, &v0, 320);
    memcpy(&v83, &v32, 224);
    v54 = &g_1;
    v55 = 0;
    v56 = &g_1;
    v83 = v31;
    v159 = struct32 {
        field_0: &g_411d68
        field_8: &g_1
        field_16: 0
        field_24: &g_1
    };
    v0 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v159);
    v90 = v2;
    v88 = v0;
    memcpy(&v0, &v52, 584);
    v48 = 128 | v100;
    v49 = v101;
    v52 = clap_builder::builder::command::Command::arg(&v104, &v0);
    v114 = 0;
    v116 = 0;
    v118 = 0;
    v120 = 0;
    v122 = 0;
    v124 = 0;
    v126 = 0;
    v128 = 0;
    v130 = 0;
    v132 = 0;
    v135 = 0;
    v137 = 0;
    v139 = 0;
    v104 = struct24 {
        field_80: 0
        field_88: <UNKNOWN>
        field_96: 0
    };
    v109 = 0;
    v110 = 0;
    v111 = &g_1;
    v112 = 0;
    v113 = &g_1;
    v115 = &g_1;
    v117 = &g_1;
    v119 = &g_1;
    v121 = &g_1;
    v123 = &g_1;
    v125 = &g_1;
    v127 = &g_1;
    v129 = &g_1;
    v131 = &g_1;
    v134 = &g_1;
    v136 = &g_1;
    v138 = &g_1;
    v141 = &g_1;
    v142 = 0;
    v143 = 0x8000000000000000;
    v144 = 0x8000000000000000;
    v146 = v157;
    v147 = &anon.f9427813c0255ce4c25516664eb43cb9.17.llvm.11736109415790202195;
    v148 = &g_1;
    v149 = &anon.f9427813c0255ce4c25516664eb43cb9.17.llvm.11736109415790202195;
    v150 = &g_1;
    v151 = 0;
    v152 = 0x11000000110000;
    v153 = 0;
    v154 = 3337;
    v0 = struct80 {
        field_0: &g_411db0
        field_8: &g_1
        field_16: &g_41ac9b
        field_24: &g_1
        field_32: &g_41acff
        field_40: &g_1
        field_48: &g_411d78
        field_56: &g_1
        field_64: 0
        field_72: &g_1
    };
    v158 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v0);
    v159 = clap_builder::builder::arg::Arg::value_parser(&v104, &v158);
    v104 = 0;
    v105 = &g_1;
    v106 = 0;
    v104 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_40);
    v170 = v105;
    v171 = v106;
    *((v170 + v171 + &g_31 as &u8) as &i128) = 124144986070754068948544445685062525286;
    *((v170 + v171 + &g_21 as &u8) as &i128) = 42838810435395398575028037929499781484;
    *((v170 + v171 + &g_11 as &u8) as &i128) = 43165925451924367997524702987350909043;
    *((v170 + v171 + &g_1 as &u8) as &i128) = 149483294671751814637630602139740956019;
    *((v170 + v171) as &i128) = 42766098071265692179109106240218687603;
    v106 = v171 + &g_40 as &u8;
    v172 = v104;
    v0 = *((&v104 as &char + 8) as &i128);
    if v172 != 0x8000000000000000 {
        v104 = v0;
    }
    v160 = v172;
    v161 = v104;
    v0 = v159;
    v173 = *((&v159 as &char + 32) as &i64);
    memcpy(&v0, &v159, 320);
    v174 = *((&v159 as &char + 360) as &i64);
    memcpy(&v32, &v159, 224);
    v2 = *((&v159 as &char + 16) as &i128);
    v4 = v173;
    v31 = v174;
    v159 = struct32 {
        field_0: &g_41ad4e
        field_8: &g_1
        field_16: 0
        field_24: &g_1
    };
    v104 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v159);
    v175 = v157;
    v31 = v106;
    v29 = v104;
    v104 = v0;
    memcpy(&v109, &v0, 320);
    memcpy(&v135, &v32, 224);
    v106 = &g_1;
    v107 = 0;
    v108 = &g_1;
    v135 = v31;
    v159 = struct32 {
        field_0: &g_411db0
        field_8: &g_1
        field_16: 0
        field_24: &g_1
    };
    v0 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v159);
    v142 = v2;
    v140 = v0;
    memcpy(&v0, &v104, 584);
    v48 = 128 | v153;
    v49 = *((&v104 as &char + 588) as &i32);
    v177 = v10;
    if v8 - v177 <= 3 {
        v8 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v177, &g_1);
        v177 = v10;
    }
    v178 = v9;
    v179 = v177 * &g_1;
    *((v178 + v179) as &&i64) = &anon.f9427813c0255ce4c25516664eb43cb9.12.llvm.11736109415790202195;
    *((v178 + v179 + &g_1 as &u8) as &&i64) = &g_1;
    *((v178 + v179 + &g_1 as &u8) as &&i64) = &anon.f9427813c0255ce4c25516664eb43cb9.8.llvm.11736109415790202195;
    *((v178 + v179 + &g_11 as &u8) as &&i64) = &g_1;
    *((v178 + v179 + &g_11 as &u8) as &&i64) = &anon.f9427813c0255ce4c25516664eb43cb9.15.llvm.11736109415790202195;
    *((v178 + v179 + &g_21 as &u8) as &&i64) = &g_1;
    *((v178 + v179 + &g_21 as &u8) as &&i64) = &anon.f9427813c0255ce4c25516664eb43cb9.10.llvm.11736109415790202195;
    *((v178 + v179 + &g_31 as &u8) as &&i64) = &g_1;
    v10 = v177 + &g_1 as &u8;
    memcpy(&v159, &v0, 592);
    v104 = clap_builder::builder::command::Command::arg(&v52, &v159);
    v10 = 0;
    v12 = 0;
    v14 = 0;
    v16 = 0;
    v18 = 0;
    v20 = 0;
    v22 = 0;
    v24 = 0;
    v26 = 0;
    v28 = 0;
    v31 = 0;
    v34 = 0;
    v36 = 0;
    v0 = 0;
    v2 = 0;
    v5 = 0;
    v6 = 0;
    v7 = &g_1;
    v8 = 0;
    v9 = &g_1;
    v11 = &g_1;
    v13 = &g_1;
    v15 = &g_1;
    v17 = &g_1;
    v19 = &g_1;
    v21 = &g_1;
    v23 = &g_1;
    v25 = &g_1;
    v27 = &g_1;
    v30 = &g_1;
    v33 = &g_1;
    v35 = &g_1;
    v37 = &g_1;
    v38 = 0;
    v39 = 0x8000000000000000;
    v40 = 0x8000000000000000;
    v41 = v175;
    v42 = &anon.f9427813c0255ce4c25516664eb43cb9.9.llvm.11736109415790202195;
    v43 = &g_1;
    v44 = &anon.f9427813c0255ce4c25516664eb43cb9.9.llvm.11736109415790202195;
    v45 = &g_1;
    v46 = 0;
    v47 = 4785074604081271;
    v48 = 0;
    v49 = 3337;
    v52 = 0;
    v53 = &g_1;
    v54 = 0;
    v52 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_21);
    v180 = v53;
    v181 = v54;
    *((v180 + v181 + &g_11 as &u8) as &i128) = 153387880915454396742413990949195833714;
    *((v180 + v181 + &g_1 as &u8) as &i128) = 152058774135452863098713740967017539700;
    *((v180 + v181) as &i128) = 43062038870623258808083333936193564515;
    v54 = v181 + &g_21 as &u8;
    v159 = *((&v52 as &char + 8) as &i128);
    if v39 != 0x8000000000000000 {
        v52 = v159;
    }
    v39 = v52;
    memcpy(&v52, &v0, 360);
    memcpy(&v52, &v31, 224);
    v83 = v31;
    v159 = struct32 {
        field_0: &g_41ad84
        field_8: &g_1
        field_16: 0
        field_24: &g_1
    };
    v0 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v159);
    v83 = v2;
    v81 = v0;
    memcpy(&v0, &v52, 592);
    v52 = clap_builder::builder::command::Command::arg(&v104, &v0);
    v114 = 0;
    v116 = 0;
    v118 = 0;
    v120 = 0;
    v122 = 0;
    v124 = 0;
    v126 = 0;
    v128 = 0;
    v130 = 0;
    v132 = 0;
    v135 = 0;
    v137 = 0;
    v139 = 0;
    v104 = 0;
    v106 = 0;
    v109 = 0;
    v110 = 0;
    v111 = &g_1;
    v112 = 0;
    v113 = &g_1;
    v115 = &g_1;
    v117 = &g_1;
    v119 = &g_1;
    v121 = &g_1;
    v123 = &g_1;
    v125 = &g_1;
    v127 = &g_1;
    v129 = &g_1;
    v131 = &g_1;
    v134 = &g_1;
    v136 = &g_1;
    v138 = &g_1;
    v141 = &g_1;
    v142 = 0;
    v143 = 0x8000000000000000;
    v144 = 0x8000000000000000;
    v146 = v175;
    v147 = &anon.f9427813c0255ce4c25516664eb43cb9.10.llvm.11736109415790202195;
    v148 = &g_1;
    v149 = &anon.f9427813c0255ce4c25516664eb43cb9.10.llvm.11736109415790202195;
    v150 = &g_1;
    v151 = 0;
    v152 = 4785074604081251;
    v153 = 0;
    v154 = 3337;
    v0 = 0;
    v1 = &g_1;
    v2 = 0;
    v0 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_21);
    v183 = v1;
    v184 = v2;
    *((v183 + v184 + &g_11 as &u8) as &i128) = 153387658203022325109470211577291415666;
    *((v183 + v184 + &g_1 as &u8) as &i128) = 132170573686775992529049408364110768244;
    *((v183 + v184) as &i128) = 43165554032155779438382729408746451568;
    v2 = v184 + &g_21 as &u8;
    v159 = *((&v0 as &char + 8) as &i128);
    if v143 != 0x8000000000000000 {
        v0 = v159;
    }
    v143 = v0;
    memcpy(&v0, &v104, 588);
    v50 = *((&v104 as &char + 589) as &i16);
    v51 = *((&v104 as &char + 591) as &i8);
    v49 = &g_1;
    v104 = clap_builder::builder::command::Command::arg(&v52, &v0);
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
    v83 = 0;
    v85 = 0;
    v87 = 0;
    v52 = 0;
    v54 = 0;
    v57 = 0;
    v58 = 0;
    v59 = &g_1;
    v60 = 0;
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
    v82 = &g_1;
    v84 = &g_1;
    v86 = &g_1;
    v89 = &g_1;
    v90 = 0;
    v91 = 0x8000000000000000;
    v92 = 0x8000000000000000;
    v93 = v175;
    v94 = &anon.f9427813c0255ce4c25516664eb43cb9.11.llvm.11736109415790202195;
    v95 = &g_1;
    v96 = &anon.f9427813c0255ce4c25516664eb43cb9.11.llvm.11736109415790202195;
    v97 = &g_1;
    v98 = 0;
    v99 = 4785074604081257;
    v100 = 0;
    v101 = 3337;
    v0 = 0;
    v1 = &g_1;
    v2 = 0;
    v0 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_21);
    v185 = v1;
    v186 = v2;
    *((v185 + v186 + &g_11 as &u8) as &i128) = 137483774935460038436904847428277444709;
    *((v185 + v186 + &g_1 as &u8) as &i128) = 43108505319522890156639666851696112485;
    *((v185 + v186) as &i128) = 132166781823907777952523360605913900905;
    v2 = v186 + &g_21 as &u8;
    v159 = *((&v0 as &char + 8) as &i128);
    if v91 != 0x8000000000000000 {
        v0 = v159;
    }
    v91 = v0;
    memcpy(&v0, &v52, 588);
    v50 = *((&v52 as &char + 589) as &i16);
    v51 = *((&v52 as &char + 591) as &i8);
    v49 = &g_1;
    v52 = clap_builder::builder::command::Command::arg(&v104, &v0);
    v114 = 0;
    v116 = 0;
    v118 = 0;
    v120 = 0;
    v122 = 0;
    v124 = 0;
    v126 = 0;
    v128 = 0;
    v130 = 0;
    v132 = 0;
    v135 = 0;
    v137 = 0;
    v139 = 0;
    v104 = 0;
    v106 = 0;
    v109 = 0;
    v110 = 0;
    v111 = &g_1;
    v112 = 0;
    v113 = &g_1;
    v115 = &g_1;
    v117 = &g_1;
    v119 = &g_1;
    v121 = &g_1;
    v123 = &g_1;
    v125 = &g_1;
    v127 = &g_1;
    v129 = &g_1;
    v131 = &g_1;
    v134 = &g_1;
    v136 = &g_1;
    v138 = &g_1;
    v141 = &g_1;
    v142 = 0;
    v143 = 0x8000000000000000;
    v144 = 0x8000000000000000;
    v146 = v175;
    v147 = &anon.f9427813c0255ce4c25516664eb43cb9.12.llvm.11736109415790202195;
    v148 = &g_1;
    v149 = &anon.f9427813c0255ce4c25516664eb43cb9.12.llvm.11736109415790202195;
    v150 = &g_1;
    v151 = 0;
    v152 = 4785074604081252;
    v153 = 0;
    v154 = 3337;
    v0 = 0;
    v1 = &g_1;
    v2 = 0;
    v0 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_11);
    v187 = v1;
    v188 = v2;
    *((v187 + v188 + &g_1 as &u8) as &i128) = 153387880915454354448709060080426116128;
    *((v187 + v188) as &i128) = 140131988548696287634410310268848205423;
    v2 = v188 + &g_11 as &u8;
    v159 = *((&v0 as &char + 8) as &i128);
    if v143 != 0x8000000000000000 {
        v0 = v159;
    }
    v143 = v0;
    memcpy(&v0, &v104, 588);
    v50 = *((&v104 as &char + 589) as &i16);
    v51 = *((&v104 as &char + 591) as &i8);
    v49 = &g_1;
    v104 = clap_builder::builder::command::Command::arg(&v52, &v0);
    v10 = 0;
    v12 = 0;
    v14 = 0;
    v16 = 0;
    v18 = 0;
    v20 = 0;
    v22 = 0;
    v24 = 0;
    v26 = 0;
    v28 = 0;
    v31 = 0;
    v34 = 0;
    v36 = 0;
    v0 = 0;
    v2 = 0;
    v5 = 0;
    v6 = 0;
    v7 = &g_1;
    v8 = 0;
    v9 = &g_1;
    v11 = &g_1;
    v13 = &g_1;
    v15 = &g_1;
    v17 = &g_1;
    v19 = &g_1;
    v21 = &g_1;
    v23 = &g_1;
    v25 = &g_1;
    v27 = &g_1;
    v30 = &g_1;
    v33 = &g_1;
    v35 = &g_1;
    v37 = &g_1;
    v38 = 0;
    v39 = 0x8000000000000000;
    v40 = 0x8000000000000000;
    v41 = v175;
    v42 = &anon.f9427813c0255ce4c25516664eb43cb9.14.llvm.11736109415790202195;
    v43 = &g_1;
    v44 = &anon.f9427813c0255ce4c25516664eb43cb9.14.llvm.11736109415790202195;
    v45 = &g_1;
    v46 = 0;
    v47 = 4785074604081267;
    v48 = 0;
    v49 = 3337;
    v52 = 0;
    v53 = &g_1;
    v54 = 0;
    v52 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_21);
    v189 = v53;
    v190 = v54;
    *((v189 + v190 + &g_1 as &u8) as &i128) = 152037761538943126268976550293711186036;
    *((v189 + v190) as &i128) = 43072341860958948708065985446355629665;
    *((v189 + v190 + &g_11 as &u8) as &i64) = 8318823012264669793;
    v54 = v190 + &g_21 as &u8;
    v159 = *((&v52 as &char + 8) as &i128);
    if v39 != 0x8000000000000000 {
        v52 = v159;
    }
    v39 = v52;
    memcpy(&v52, &v0, 360);
    memcpy(&v52, &v31, 224);
    v83 = v31;
    v159 = struct32 {
        field_0: &g_41ad84
        field_8: &g_1
        field_16: 0
        field_24: &g_1
    };
    v0 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v159);
    v83 = v2;
    v81 = v0;
    memcpy(&v0, &v52, 592);
    v52 = clap_builder::builder::command::Command::arg(&v104, &v0);
    v10 = 0;
    v12 = 0;
    v14 = 0;
    v16 = 0;
    v18 = 0;
    v20 = 0;
    v22 = 0;
    v24 = 0;
    v26 = 0;
    v28 = 0;
    v31 = 0;
    v34 = 0;
    v36 = 0;
    v0 = 0;
    v2 = 0;
    v5 = 0;
    v6 = 0;
    v7 = &g_1;
    v8 = 0;
    v9 = &g_1;
    v11 = &g_1;
    v13 = &g_1;
    v15 = &g_1;
    v17 = &g_1;
    v19 = &g_1;
    v21 = &g_1;
    v23 = &g_1;
    v25 = &g_1;
    v27 = &g_1;
    v30 = &g_1;
    v33 = &g_1;
    v35 = &g_1;
    v37 = &g_1;
    v38 = 0;
    v39 = 0x8000000000000000;
    v40 = 0x8000000000000000;
    v41 = v175;
    v42 = &anon.f9427813c0255ce4c25516664eb43cb9.13.llvm.11736109415790202195;
    v43 = &g_1;
    v44 = &anon.f9427813c0255ce4c25516664eb43cb9.13.llvm.11736109415790202195;
    v45 = &g_1;
    v46 = 0;
    v47 = 4785074604081254;
    v48 = 0;
    v49 = 3337;
    v104 = 0;
    v105 = &g_1;
    v106 = 0;
    v104 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_21);
    v192 = v105;
    v193 = v106;
    *((v192 + v193 + &g_1 as &u8) as &i128) = 144083183271761861536531266645229135988;
    *((v192 + v193) as &i128) = 43072341860958948708065985446355629665;
    *((v192 + v193 + &g_11 as &u8) as &i16) = 29540;
    v106 = v193 + &g_21 as &u8;
    v159 = *((&v104 as &char + 8) as &i128);
    if v39 != 0x8000000000000000 {
        v104 = v159;
    }
    v39 = v104;
    memcpy(&v104, &v0, 360);
    memcpy(&v104, &v31, 224);
    v135 = v31;
    v159 = struct32 {
        field_0: &g_41ad84
        field_8: &g_1
        field_16: 0
        field_24: &g_1
    };
    v0 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v159);
    v135 = v2;
    v133 = v0;
    memcpy(&v0, &v104, 592);
    v104 = clap_builder::builder::command::Command::arg(&v52, &v0);
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
    v83 = 0;
    v85 = 0;
    v87 = 0;
    v52 = 0;
    v54 = 0;
    v57 = 0;
    v58 = 0;
    v59 = &g_1;
    v60 = 0;
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
    v82 = &g_1;
    v84 = &g_1;
    v86 = &g_1;
    v89 = &g_1;
    v90 = 0;
    v91 = 0x8000000000000000;
    v92 = 0x8000000000000000;
    v93 = v175;
    v94 = &anon.f9427813c0255ce4c25516664eb43cb9.15.llvm.11736109415790202195;
    v95 = &g_1;
    v96 = &anon.f9427813c0255ce4c25516664eb43cb9.15.llvm.11736109415790202195;
    v97 = &g_1;
    v98 = 0;
    v99 = 4785074604081269;
    v100 = 0;
    v101 = 3337;
    v0 = 0;
    v1 = &g_1;
    v2 = 0;
    v0 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_11);
    v195 = v1;
    v196 = v2;
    *((v195 + v196) as &i128) = 156108543456204834252818182856613064303;
    *((v195 + v196 + &g_1 as &u8) as &i64) = 8315173686074172789;
    v2 = v196 + &g_11 as &u8;
    v159 = *((&v0 as &char + 8) as &i128);
    if v91 != 0x8000000000000000 {
        v0 = v159;
    }
    v91 = v0;
    memcpy(&v0, &v52, 588);
    v50 = *((&v52 as &char + 589) as &i16);
    v51 = *((&v52 as &char + 591) as &i8);
    v49 = &g_1;
    v52 = clap_builder::builder::command::Command::arg(&v104, &v0);
    v114 = 0;
    v116 = 0;
    v118 = 0;
    v120 = 0;
    v122 = 0;
    v124 = 0;
    v126 = 0;
    v128 = 0;
    v130 = 0;
    v132 = 0;
    v135 = 0;
    v137 = 0;
    v139 = 0;
    v104 = 0;
    v106 = 0;
    v109 = 0;
    v110 = 0;
    v111 = &g_1;
    v112 = 0;
    v113 = &g_1;
    v115 = &g_1;
    v117 = &g_1;
    v119 = &g_1;
    v121 = &g_1;
    v123 = &g_1;
    v125 = &g_1;
    v127 = &g_1;
    v129 = &g_1;
    v131 = &g_1;
    v134 = &g_1;
    v136 = &g_1;
    v138 = &g_1;
    v141 = &g_1;
    v142 = 0;
    v143 = 0x8000000000000000;
    v144 = 0x8000000000000000;
    v146 = v175;
    v147 = &anon.f9427813c0255ce4c25516664eb43cb9.16.llvm.11736109415790202195;
    v148 = &g_1;
    v149 = &anon.f9427813c0255ce4c25516664eb43cb9.16.llvm.11736109415790202195;
    v150 = &g_1;
    v151 = 0;
    v152 = 4785074604081274;
    v153 = 0;
    v154 = 3337;
    v0 = 0;
    v1 = &g_1;
    v2 = 0;
    v0 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_21);
    v197 = v1;
    v198 = v2;
    *((v197 + v198 + &g_1 as &u8) as &i128) = 140132129261007763084871203715439747616;
    *((v197 + v198) as &i128) = 63971215890854649260070254692750618213;
    *((v197 + v198 + &g_11 as &u8) as &i16) = 25966;
    v2 = v198 + &g_21 as &u8;
    v159 = *((&v0 as &char + 8) as &i128);
    if v143 != 0x8000000000000000 {
        v0 = v159;
    }
    v143 = v0;
    memcpy(&v0, &v104, 588);
    v50 = *((&v104 as &char + 589) as &i16);
    v51 = *((&v104 as &char + 591) as &i8);
    v49 = &g_1;
    v104 = clap_builder::builder::command::Command::arg(&v52, &v0);
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
    v83 = 0;
    v85 = 0;
    v87 = 0;
    v52 = 0;
    v54 = 0;
    v57 = 0;
    v58 = 0;
    v59 = &g_1;
    v60 = 0;
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
    v82 = &g_1;
    v84 = &g_1;
    v86 = &g_1;
    v89 = &g_1;
    v90 = 0;
    v91 = 0x8000000000000000;
    v92 = 0x8000000000000000;
    v93 = v175;
    v94 = &g_41a9fd;
    v95 = &g_1;
    v96 = 0;
    v98 = 0;
    v99 = 0x11000000110000;
    v100 = 0;
    v101 = 3329;
    v159 = struct8 {
        field_0: &g_1
    };
    v0 = clap_builder::builder::arg::Arg::value_parser(&v52, &v159);
    v2 = &g_1;
    v3 = 0;
    v4 = &g_1;
    memcpy(&v52, &v0, 584);
    v100 = v48 | &g_1;
    v101 = -65281 & *((&v0 as &char + 588) as &i32) | 0x300;
    clap_builder::builder::command::Command::arg(a0, &v104, &v52);
    return a0;
}
