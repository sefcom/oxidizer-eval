fn uu_realpath::uu_app(a0: u32) -> u64 {
    let v0: i64;  // [sp-0xa78], Other Possible Types: struct712, Enum, struct592
    let v1: i64;  // [sp-0xa70]
    let v2: i64;  // [sp-0xa68]
    let v3: i64;  // [sp-0xa50]
    let v4: i64;  // [sp-0xa40]
    let v5: i64;  // [sp-0xa28]
    let v6: i64;  // [sp-0xa10]
    let v7: i64;  // [sp-0xa08]
    let v8: i128;  // [sp-0xa00]
    let v9: struct16;  // [sp-0x9f8]
    let v10: i64;  // [sp-0x9f0]
    let v11: i128;  // [bp-0x9e8]
    let v12: i64;  // [sp-0x9d8]
    let v13: i128;  // [sp-0x9d0]
    let v14: i64;  // [sp-0x9c0]
    let v15: i128;  // [sp-0x9b8]
    let v16: i64;  // [sp-0x9a8]
    let v17: i128;  // [sp-0x9a0]
    let v18: i64;  // [sp-0x990]
    let v19: i128;  // [sp-0x988]
    let v20: i64;  // [sp-0x978]
    let v21: i128;  // [sp-0x970]
    let v22: i64;  // [sp-0x960]
    let v23: i128;  // [sp-0x958]
    let v24: i64;  // [sp-0x948]
    let v25: i128;  // [sp-0x940]
    let v26: i64;  // [sp-0x930]
    let v27: i128;  // [bp-0x928]
    let v28: i128;  // [bp-0x920]
    let v29: i64;  // [sp-0x918]
    let v30: i128;  // [bp-0x910]
    let v31: i64;  // [sp-0x900]
    let v32: i128;  // [sp-0x8f8]
    let v33: i64;  // [sp-0x8e8]
    let v34: i128;  // [sp-0x8e0]
    let v35: i64;  // [sp-0x8d0]
    let v36: i64;  // [sp-0x8c8]
    let v37: i192;  // [sp-0x8c0]
    let v38: i128;  // [sp-0x8b8]
    let v39: i64;  // [sp-0x8a8]
    let v40: i128;  // [sp-0x8a0]
    let v41: i64;  // [sp-0x880]
    let v42: i64;  // [sp-0x868]
    let v43: i64;  // [sp-0x860]
    let v44: i64;  // [sp-0x858]
    let v45: i64;  // [sp-0x850]
    let v46: i64;  // [sp-0x848]
    let v47: i64;  // [sp-0x838]
    let v48: i32;  // [sp-0x830]
    let v49: i16;  // [sp-0x82c]
    let v50: i64;  // [sp-0x818]
    let v51: i64;  // [sp-0x810]
    let v52: i8;  // [bp-0x7a8], Other Possible Types: struct712, Enum, struct24, struct592
    let v53: i64;  // [sp-0x7a0]
    let v54: i64;  // [sp-0x798]
    let v55: i64;  // [sp-0x780]
    let v56: i64;  // [sp-0x770]
    let v57: i64;  // [sp-0x758]
    let v58: i64;  // [sp-0x740]
    let v59: i64;  // [sp-0x738]
    let v60: i128;  // [sp-0x730]
    let v61: i64;  // [sp-0x720]
    let v62: i128;  // [sp-0x718]
    let v63: i64;  // [sp-0x708]
    let v64: i128;  // [sp-0x700]
    let v65: i64;  // [sp-0x6f0]
    let v66: i128;  // [sp-0x6e8]
    let v67: i64;  // [sp-0x6d8]
    let v68: i128;  // [sp-0x6d0]
    let v69: i64;  // [sp-0x6c0]
    let v70: i128;  // [sp-0x6b8]
    let v71: i64;  // [sp-0x6a8]
    let v72: i128;  // [sp-0x6a0]
    let v73: i64;  // [sp-0x690]
    let v74: i128;  // [sp-0x688]
    let v75: struct16;  // [sp-0x680]
    let v76: i64;  // [sp-0x678]
    let v77: i128;  // [bp-0x670]
    let v78: i64;  // [sp-0x660]
    let v79: i128;  // [bp-0x658]
    let v80: i128;  // [bp-0x650]
    let v81: i64;  // [sp-0x648]
    let v82: i128;  // [bp-0x640]
    let v83: i64;  // [sp-0x630]
    let v84: i128;  // [sp-0x628]
    let v85: i64;  // [sp-0x618]
    let v86: i128;  // [sp-0x610]
    let v87: i64;  // [sp-0x600]
    let v88: i64;  // [sp-0x5f8]
    let v89: i64;  // [sp-0x5f0]
    let v90: i128;  // [sp-0x5e8]
    let v91: i64;  // [sp-0x5d8]
    let v92: i64;  // [sp-0x5b0]
    let v93: i64;  // [sp-0x598]
    let v94: i64;  // [sp-0x590]
    let v95: i64;  // [sp-0x588]
    let v96: i64;  // [sp-0x580]
    let v97: i64;  // [sp-0x578]
    let v98: i64;  // [sp-0x568]
    let v99: i32;  // [sp-0x560]
    let v100: i16;  // [sp-0x55c]
    let v101: i64;  // [sp-0x4ec]
    let v102: i32;  // [sp-0x4e4]
    let v103: i192;  // [sp-0x4d8], Other Possible Types: Enum, struct24, struct592
    let v104: i64;  // [sp-0x4d0]
    let v105: i64;  // [sp-0x4c8]
    let v106: i64;  // [sp-0x320]
    let v107: i128;  // [sp-0x318]
    let v108: i8;  // [sp-0x28c]
    let v109: i16;  // [bp-0x28b]
    let v110: i8;  // [sp-0x289]
    let v111: i128;  // [bp-0x288], Other Possible Types: struct32
    let v112: i8;  // [sp-0x3c]
    let v113: i16;  // [sp-0x3b]
    let v114: i8;  // [sp-0x39]
    let v116: i64;  // rbx
    let v117: i64;  // rax
    let v118: i64;  // rcx
    let v119: i64;  // rbx
    let v121: i64;  // rax
    let v122: i64;  // rcx
    let v123: i64;  // rcx
    let v124: i64;  // rdx
    let v125: i64;  // rbx
    let v126: i64;  // rax
    let v127: i64;  // rcx
    let v128: i64;  // rax
    let v129: i64;  // rcx
    let v130: i64;  // rsi
    let v131: i64;  // rax
    let v132: i64;  // rcx
    let v133: i64;  // rcx
    let v134: i64;  // rdx
    let v135: i64;  // rbx
    let v136: i64;  // rax
    let v137: i64;  // rcx
    let v138: i64;  // rbx
    let v139: i64;  // rax
    let v140: i64;  // rcx
    let v141: i64;  // r14
    let v142: i64;  // rax
    let v143: i64;  // rcx
    let v144: i64;  // rbx

    if _ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 != 2 {
        once_cell::imp::OnceCell<T>::initialize(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
    }
    v0 = clap_builder::builder::command::Command::new(g_4ee7b0, g_4ee7b8);
    v50 = &g_419f28;
    v51 = &g_1;
    memcpy(&v52, &v0, 712);
    v0 = clap_builder::builder::command::Command::about(&v52, &g_419efb, &g_11);
    v103 = uucore::format_usage(&g_419f2e, &g_11);
    v116 = v103;
    if v116 != 0x8000000000000000 {
        v52 = *((&v103 as &char + 8) as &i128);
    }
    v39 = v116;
    v40 = v52;
    memcpy(&v52, &v0, 700);
    v101 = 549755814016 | *((&v0 as &char + 700) as &i64);
    v102 = *((&v0 as &char + 708) as &i32);
    v8 = 0;
    v11 = 0;
    v13 = 0;
    v15 = 0;
    v17 = 0;
    v19 = 0;
    v21 = 0;
    v23 = 0;
    v25 = 0;
    v27 = 0;
    v30 = 0;
    v32 = 0;
    v34 = 0;
    v0 = 0;
    v2 = 0;
    v3 = 0;
    v4 = 0;
    v5 = &g_1;
    v6 = 0;
    v7 = &g_1;
    v10 = &g_1;
    v12 = &g_1;
    v14 = &g_1;
    v16 = &g_1;
    v18 = &g_1;
    v20 = &g_1;
    v22 = &g_1;
    v24 = &g_1;
    v26 = &g_1;
    v29 = &g_1;
    v31 = &g_1;
    v33 = &g_1;
    v35 = &g_1;
    v36 = 0;
    v37 = 0x8000000000000000;
    v39 = 0x8000000000000000;
    v41 = 9223372036854775809;
    v42 = &g_419f12;
    v43 = &g_1;
    v44 = &g_419f12;
    v45 = &g_1;
    v46 = 0;
    v47 = 4785074604081265;
    v48 = 0;
    v49 = 3337;
    v103 = 0;
    v104 = &g_1;
    v105 = 0;
    v103 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_21);
    v117 = v104;
    v118 = v105;
    *((v117 + v118 + &g_1 as &u8) as &i128) = 140131684394963100452094902775021726062;
    *((v117 + v118) as &i128) = 152038060492836063735163464382572162884;
    *((v117 + v118 + &g_11 as &u8) as &i64) = 8316024673781441641;
    v105 = v118 + &g_21 as &u8;
    v111 = *((&v103 as &char + 8) as &i128);
    if v37 != 0x8000000000000000 {
        v103 = v111;
    }
    v37 = v103;
    memcpy(&v103, &v0, 588);
    v109 = *((&v0 as &char + 589) as &i16);
    v110 = *((&v0 as &char + 591) as &i8);
    v108 = &g_1;
    v0 = clap_builder::builder::command::Command::arg(&v52, &v103);
    v60 = 0;
    v62 = 0;
    v64 = 0;
    v66 = 0;
    v68 = 0;
    v70 = 0;
    v72 = 0;
    v74 = 0;
    v77 = 0;
    v79 = 0;
    v82 = 0;
    v84 = 0;
    v86 = 0;
    v52 = 0;
    v54 = 0;
    v55 = 0;
    v56 = 0;
    v57 = &g_1;
    v58 = 0;
    v59 = &g_1;
    v61 = &g_1;
    v63 = &g_1;
    v65 = &g_1;
    v67 = &g_1;
    v69 = &g_1;
    v71 = &g_1;
    v73 = &g_1;
    v76 = &g_1;
    v78 = &g_1;
    v81 = &g_1;
    v83 = &g_1;
    v85 = &g_1;
    v87 = &g_1;
    v88 = 0;
    v89 = 0x8000000000000000;
    v91 = 0x8000000000000000;
    v92 = 9223372036854775809;
    v93 = &g_419f17;
    v94 = &g_1;
    v95 = &g_419f17;
    v96 = &g_1;
    v97 = 0;
    v98 = 4785074604081267;
    v99 = 0;
    v100 = 3337;
    v119 = v77;
    v121 = &g_1;
    if v119 == *((&v74 as &char + 8) as &i64) {
        v75 = alloc::raw_vec::RawVec<T,A>::grow_one();
        v121 = v76;
    }
    v122 = v119 * &g_1;
    *((v121 + v122 * &g_1) as &&i64) = &g_419f6b;
    *((v121 + v122 * &g_1 + &g_1 as &u8) as &&i64) = &g_1;
    *((v121 + v122 * &g_1 + &g_1 as &u8) as &&i64) = &g_1;
    v77 = v119 + &g_1 as &u8;
    memcpy(&v103, &v52, 592);
    v52 = 0;
    v54 = 0;
    v52 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_41);
    v123 = v53;
    v124 = v54;
    *((v123 + v124 + &g_21 as &u8) as &i128) = 143724793355310890908895847134106775411;
    *((v123 + v124 + &g_11 as &u8) as &i128) = 134844607655927065273936412794862465908;
    *((v123 + v124 + &g_1 as &u8) as &i128) = 146741741413229824402541239255257080942;
    *((v123 + v124) as &i128) = 129102063761189104086550002330109767247;
    *((v123 + v124 + &g_31 as &u8) as &i32) = 1936420457;
    v54 = v124 + &g_41 as &u8;
    v125 = v52;
    v111 = *((&v52 as &char + 8) as &i128);
    if v125 != 0x8000000000000000 {
        v52 = v111;
    }
    v106 = v125;
    v107 = v52;
    memcpy(&v111, &v103, 588);
    v113 = v109;
    v114 = v110;
    v112 = &g_1;
    v52 = clap_builder::builder::command::Command::arg(&v0, &v111);
    v8 = 0;
    v11 = 0;
    v13 = 0;
    v15 = 0;
    v17 = 0;
    v19 = 0;
    v21 = 0;
    v23 = 0;
    v25 = 0;
    v27 = 0;
    v30 = 0;
    v32 = 0;
    v34 = 0;
    v0 = 0;
    v2 = 0;
    v3 = 0;
    v4 = 0;
    v5 = &g_1;
    v6 = 0;
    v7 = &g_1;
    v10 = &g_1;
    v12 = &g_1;
    v14 = &g_1;
    v16 = &g_1;
    v18 = &g_1;
    v20 = &g_1;
    v22 = &g_1;
    v24 = &g_1;
    v26 = &g_1;
    v29 = &g_1;
    v31 = &g_1;
    v33 = &g_1;
    v35 = &g_1;
    v36 = 0;
    v37 = 0x8000000000000000;
    v39 = 0x8000000000000000;
    v41 = 9223372036854775809;
    v42 = &g_410ccc;
    v43 = &g_1;
    v44 = &g_410ccc;
    v45 = &g_1;
    v46 = 0;
    v47 = 4785074604081274;
    v48 = 0;
    v49 = 3337;
    v103 = 0;
    v104 = &g_1;
    v105 = 0;
    v103 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_31);
    v126 = v104;
    v127 = v105;
    *((v126 + v127 + &g_11 as &u8) as &i128) = 134823838011066850255914895166460272688;
    *((v126 + v127 + &g_1 as &u8) as &i128) = 122457247705390947667837475083764132198;
    *((v126 + v127) as &i128) = 43139984252227407021333699522341135699;
    *((v126 + v127 + &g_21 as &u8) as &i64) = 7308895159849414176;
    v105 = v127 + &g_31 as &u8;
    v111 = *((&v103 as &char + 8) as &i128);
    if v37 != 0x8000000000000000 {
        v103 = v111;
    }
    v37 = v103;
    memcpy(&v103, &v0, 588);
    v109 = *((&v0 as &char + 589) as &i16);
    v110 = *((&v0 as &char + 591) as &i8);
    v108 = &g_1;
    v0 = clap_builder::builder::command::Command::arg(&v52, &v103);
    v60 = 0;
    v62 = 0;
    v64 = 0;
    v66 = 0;
    v68 = 0;
    v70 = 0;
    v72 = 0;
    v74 = 0;
    v77 = 0;
    v79 = 0;
    v82 = 0;
    v84 = 0;
    v86 = 0;
    v52 = 0;
    v54 = 0;
    v55 = 0;
    v56 = 0;
    v57 = &g_1;
    v58 = 0;
    v59 = &g_1;
    v61 = &g_1;
    v63 = &g_1;
    v65 = &g_1;
    v67 = &g_1;
    v69 = &g_1;
    v71 = &g_1;
    v73 = &g_1;
    v76 = &g_1;
    v78 = &g_1;
    v81 = &g_1;
    v83 = &g_1;
    v85 = &g_1;
    v87 = &g_1;
    v88 = 0;
    v89 = 0x8000000000000000;
    v91 = 0x8000000000000000;
    v92 = 9223372036854775809;
    v93 = &g_419f1c;
    v94 = &g_1;
    v95 = &g_419f1c;
    v96 = &g_1;
    v97 = 0;
    v98 = 4785074604081228;
    v99 = 0;
    v100 = 3337;
    v103 = 0;
    v104 = &g_1;
    v105 = 0;
    v103 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_21);
    v128 = v104;
    v129 = v105;
    *((v128 + v129 + &g_1 as &u8) as &i128) = 153029430604595560605802116662170644336;
    *((v128 + v129) as &i128) = 145464206997830901906462992124999853426;
    *((v128 + v129 + &g_11 as &u8) as &i64) = 8316862535939488115;
    v105 = v129 + &g_21 as &u8;
    v111 = *((&v103 as &char + 8) as &i128);
    if v89 != 0x8000000000000000 {
        v103 = v111;
    }
    v89 = v103;
    memcpy(&v103, &v52, 588);
    v109 = *((&v52 as &char + 589) as &i16);
    v110 = *((&v52 as &char + 591) as &i8);
    v108 = &g_1;
    v52 = clap_builder::builder::command::Command::arg(&v0, &v103);
    v8 = 0;
    v11 = 0;
    v13 = 0;
    v15 = 0;
    v17 = 0;
    v19 = 0;
    v21 = 0;
    v23 = 0;
    v25 = 0;
    v27 = 0;
    v30 = 0;
    v32 = 0;
    v34 = 0;
    v0 = 0;
    v2 = 0;
    v3 = 0;
    v4 = 0;
    v5 = &g_1;
    v6 = 0;
    v7 = &g_1;
    v10 = &g_1;
    v12 = &g_1;
    v14 = &g_1;
    v16 = &g_1;
    v18 = &g_1;
    v20 = &g_1;
    v22 = &g_1;
    v24 = &g_1;
    v26 = &g_1;
    v29 = &g_1;
    v31 = &g_1;
    v33 = &g_1;
    v35 = &g_1;
    v36 = 0;
    v37 = 0x8000000000000000;
    v39 = 0x8000000000000000;
    v41 = 9223372036854775809;
    v42 = &g_410d10;
    v43 = &g_1;
    v44 = &g_410d10;
    v45 = &g_1;
    v46 = 0;
    v47 = 4785074604081232;
    v48 = 0;
    v49 = 3337;
    v130 = v11;
    if *((&v8 as &char + 8) as &i64) - v130 <= 1 {
        v9 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v130, &g_1);
        v130 = v11;
    }
    v131 = v10;
    v132 = v130 * &g_1;
    *((v131 + v132) as &&i64) = &g_419f17;
    *((v131 + v132 + &g_1 as &u8) as &&i64) = &g_1;
    *((v131 + v132 + &g_1 as &u8) as &&i64) = &g_419f1c;
    *((v131 + v132 + &g_11 as &u8) as &&i64) = &g_1;
    v11 = v130 + &g_1 as &u8;
    memcpy(&v103, &v0, 592);
    v0 = 0;
    v1 = &g_1;
    v2 = 0;
    v0 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_21);
    v133 = v1;
    v134 = v2;
    *((v133 + v134 + &g_11 as &u8) as &i128) = 55102854062847634536150674188355859566;
    *((v133 + v134 + &g_1 as &u8) as &i128) = 43056583137750029154261881450262651168;
    *((v133 + v134) as &i128) = 153419034696698745126790316455170893170;
    v2 = v134 + &g_21 as &u8;
    v135 = v0;
    v111 = *((&v0 as &char + 8) as &i128);
    if v135 != 0x8000000000000000 {
        v0 = v111;
    }
    v106 = v135;
    v107 = v0;
    memcpy(&v111, &v103, 588);
    v113 = v109;
    v114 = v110;
    v112 = &g_1;
    v0 = clap_builder::builder::command::Command::arg(&v52, &v111);
    v60 = 0;
    v62 = 0;
    v64 = 0;
    v66 = 0;
    v68 = 0;
    v70 = 0;
    v72 = 0;
    v74 = 0;
    v77 = 0;
    v79 = 0;
    v82 = 0;
    v84 = 0;
    v86 = 0;
    v52 = 0;
    v54 = 0;
    v55 = 0;
    v56 = 0;
    v57 = &g_1;
    v58 = 0;
    v59 = &g_1;
    v61 = &g_1;
    v63 = &g_1;
    v65 = &g_1;
    v67 = &g_1;
    v69 = &g_1;
    v71 = &g_1;
    v73 = &g_1;
    v76 = &g_1;
    v78 = &g_1;
    v81 = &g_1;
    v83 = &g_1;
    v85 = &g_1;
    v87 = &g_1;
    v88 = 0;
    v89 = 0x8000000000000000;
    v91 = 0x8000000000000000;
    v92 = 9223372036854775809;
    v93 = &g_41a03f;
    v94 = &g_11;
    v95 = &g_41a03f;
    v96 = &g_11;
    v97 = 0;
    v98 = 4785074604081253;
    v99 = 0;
    v100 = 3337;
    v103 = 0;
    v104 = &g_1;
    v105 = 0;
    v103 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, 115);
    v136 = v104;
    v137 = v105;
    *((v136 + v137 + &g_51 as &u8) as &i128) = 160032439740208826633966587986440056941;
    *((v136 + v137 + &g_41 as &u8) as &i128) = 148059002548411277022890686501912539765;
    *((v136 + v137 + &g_31 as &u8) as &i128) = 132120308326804924762167061877841404005;
    *((v136 + v137 + &g_21 as &u8) as &i128) = 138842675149993255642681206219738145568;
    *((v136 + v137 + &g_11 as &u8) as &i128) = 161430567235438129490658631292080191859;
    *((v136 + v137 + &g_1 as &u8) as &i128) = 43165884018380737997498351533463203686;
    *((v136 + v137) as &i128) = 43165554027848353185829832350145339747;
    *((v136 + v137 + &g_61 as &u8) as &i32) = 1953720696;
    v105 = v137 + 115;
    v111 = *((&v103 as &char + 8) as &i128);
    if v89 != 0x8000000000000000 {
        v103 = v111;
    }
    v89 = v103;
    memcpy(&v103, &v52, 588);
    v109 = *((&v52 as &char + 589) as &i16);
    v110 = *((&v52 as &char + 591) as &i8);
    v108 = &g_1;
    v52 = clap_builder::builder::command::Command::arg(&v0, &v103);
    v8 = 0;
    v11 = 0;
    v13 = 0;
    v15 = 0;
    v17 = 0;
    v19 = 0;
    v21 = 0;
    v23 = 0;
    v25 = 0;
    v27 = 0;
    v30 = 0;
    v32 = 0;
    v34 = 0;
    v0 = 0;
    v2 = 0;
    v3 = 0;
    v4 = 0;
    v5 = &g_1;
    v6 = 0;
    v7 = &g_1;
    v10 = &g_1;
    v12 = &g_1;
    v14 = &g_1;
    v16 = &g_1;
    v18 = &g_1;
    v20 = &g_1;
    v22 = &g_1;
    v24 = &g_1;
    v26 = &g_1;
    v29 = &g_1;
    v31 = &g_1;
    v33 = &g_1;
    v35 = &g_1;
    v36 = 0;
    v37 = 0x8000000000000000;
    v39 = 0x8000000000000000;
    v41 = 9223372036854775809;
    v42 = &g_41a0c7;
    v43 = &g_11;
    v44 = &g_41a0c7;
    v45 = &g_11;
    v46 = 0;
    v47 = 4785074604081261;
    v48 = 0;
    v49 = 3337;
    v103 = 0;
    v104 = &g_1;
    v105 = 0;
    v103 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, 134);
    v138 = v105;
    memcpy(v104 + v138, &g_41a0db, 134);
    v105 = v138 + 134;
    v111 = *((&v103 as &char + 8) as &i128);
    if v37 != 0x8000000000000000 {
        v103 = v111;
    }
    v37 = v103;
    memcpy(&v103, &v0, 588);
    v109 = *((&v0 as &char + 589) as &i16);
    v110 = *((&v0 as &char + 591) as &i8);
    v108 = &g_1;
    v0 = clap_builder::builder::command::Command::arg(&v52, &v103);
    v60 = 0;
    v62 = 0;
    v64 = 0;
    v66 = 0;
    v68 = 0;
    v70 = 0;
    v72 = 0;
    v74 = 0;
    v77 = 0;
    v79 = 0;
    v84 = 0;
    v86 = 0;
    v52 = 0;
    v54 = 0;
    v55 = 0;
    v56 = 0;
    v57 = &g_1;
    v58 = 0;
    v59 = &g_1;
    v61 = &g_1;
    v63 = &g_1;
    v65 = &g_1;
    v67 = &g_1;
    v69 = &g_1;
    v71 = &g_1;
    v73 = &g_1;
    v76 = &g_1;
    v78 = &g_1;
    v81 = &g_1;
    v82 = 0;
    v83 = &g_1;
    v85 = &g_1;
    v87 = &g_1;
    v88 = 0;
    v89 = 0x8000000000000000;
    v91 = 0x8000000000000000;
    v92 = 9223372036854775809;
    v93 = &g_41a161;
    v94 = &g_1;
    v95 = &g_41a161;
    v96 = &g_1;
    v97 = 0;
    v98 = 0x11000000110000;
    v99 = 0;
    v100 = 3337;
    v111 = struct32 {
        field_0: &g_41a16c
        field_8: &g_1
        field_16: 0
        field_24: &g_1
    };
    v103 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v111);
    v82 = v105;
    v80 = v103;
    memcpy(&v103, &v52, 592);
    v52 = clap_builder::builder::arg::Arg::value_parser(&v103);
    v103 = 0;
    v104 = &g_1;
    v105 = 0;
    v103 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_21);
    v139 = v104;
    v140 = v105;
    *((v139 + v140 + &g_1 as &u8) as &i128) = 134866857477209936908976477190506964069;
    *((v139 + v140) as &i128) = 157411932053442485384113607621198049904;
    *((v139 + v140 + &g_11 as &u8) as &i64) = 5929345290509492325;
    v105 = v140 + &g_21 as &u8;
    v141 = v103;
    v111 = *((&v103 as &char + 8) as &i128);
    if v141 != 0x8000000000000000 {
        v103 = v111;
    }
    v89 = v141;
    v90 = v103;
    memcpy(&v103, &v52, 592);
    v52 = clap_builder::builder::command::Command::arg(&v0, &v103);
    v8 = 0;
    v11 = 0;
    v13 = 0;
    v15 = 0;
    v17 = 0;
    v19 = 0;
    v21 = 0;
    v23 = 0;
    v25 = 0;
    v27 = 0;
    v32 = 0;
    v34 = 0;
    v0 = 0;
    v2 = 0;
    v3 = 0;
    v4 = 0;
    v5 = &g_1;
    v6 = 0;
    v7 = &g_1;
    v10 = &g_1;
    v12 = &g_1;
    v14 = &g_1;
    v16 = &g_1;
    v18 = &g_1;
    v20 = &g_1;
    v22 = &g_1;
    v24 = &g_1;
    v26 = &g_1;
    v29 = &g_1;
    v30 = 0;
    v31 = &g_1;
    v33 = &g_1;
    v35 = &g_1;
    v36 = 0;
    v37 = 0x8000000000000000;
    v39 = 0x8000000000000000;
    v41 = 9223372036854775809;
    v42 = &g_41a196;
    v43 = &g_1;
    v44 = &g_41a196;
    v45 = &g_1;
    v46 = 0;
    v47 = 0x11000000110000;
    v48 = 0;
    v49 = 3337;
    v111 = struct32 {
        field_0: &g_41a16c
        field_8: &g_1
        field_16: 0
        field_24: &g_1
    };
    v103 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v111);
    v30 = v105;
    v28 = v103;
    memcpy(&v103, &v0, 592);
    v0 = clap_builder::builder::arg::Arg::value_parser(&v103);
    v103 = 0;
    v104 = &g_1;
    v105 = 0;
    v103 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_21);
    v142 = v104;
    v143 = v105;
    *((v142 + v143 + &g_11 as &u8) as &i128) = 109377115101153811585531903271942320160;
    *((v142 + v143 + &g_1 as &u8) as &i128) = 138843994274550138323161122397561058401;
    *((v142 + v143) as &i128) = 149041746777561349171475249129195139696;
    v105 = v143 + &g_21 as &u8;
    v144 = v103;
    v111 = *((&v103 as &char + 8) as &i128);
    if v144 != 0x8000000000000000 {
        v103 = v111;
    }
    v37 = v144;
    v38 = v103;
    memcpy(&v103, &v0, 592);
    v0 = clap_builder::builder::command::Command::arg(&v52, &v103);
    v60 = 0;
    v62 = 0;
    v64 = 0;
    v66 = 0;
    v68 = 0;
    v70 = 0;
    v72 = 0;
    v74 = 0;
    v77 = 0;
    v79 = 0;
    v82 = 0;
    v84 = 0;
    v86 = 0;
    v52 = struct24 {
        field_80: 0
        field_88: &g_1
        field_96: 0
    };
    v55 = 0;
    v56 = 0;
    v57 = &g_1;
    v58 = 0;
    v59 = &g_1;
    v61 = &g_1;
    v63 = &g_1;
    v65 = &g_1;
    v67 = &g_1;
    v69 = &g_1;
    v71 = &g_1;
    v73 = &g_1;
    v76 = &g_1;
    v78 = &g_1;
    v81 = &g_1;
    v83 = &g_1;
    v85 = &g_1;
    v87 = &g_1;
    v88 = 0;
    v89 = 0x8000000000000000;
    v91 = 0x8000000000000000;
    v92 = 9223372036854775809;
    v93 = &g_419f23;
    v94 = &g_1;
    v95 = 0;
    v97 = 0;
    v98 = 0xd01000000010011000000110000;
    v103 = clap_builder::builder::arg::Arg::value_parser(&v52);
    *(&v109 as &&i64) = &g_1;
    memcpy(&v52, &v103, 592);
    clap_builder::builder::command::Command::arg(a0, &v0, &v52);
    return a0;
}
