fn uu_nl::uu_app(a0: u32) -> u64 {
    let v0: i64;  // [sp-0xa78], Other Possible Types: struct24, Enum
    let v1: i64;  // [sp-0xa70]
    let v2: i64;  // [sp-0xa68]
    let v3: i64;  // [sp-0xa50]
    let v4: i64;  // [sp-0xa40]
    let v5: i64;  // [sp-0xa28]
    let v6: i64;  // [sp-0xa10]
    let v7: i64;  // [sp-0xa08]
    let v8: i128;  // [sp-0xa00]
    let v9: i64;  // [sp-0x9f0]
    let v10: i128;  // [sp-0x9e8]
    let v11: i64;  // [sp-0x9d8]
    let v12: i128;  // [sp-0x9d0]
    let v13: i64;  // [sp-0x9c0]
    let v14: i128;  // [sp-0x9b8]
    let v15: i64;  // [sp-0x9a8]
    let v16: i128;  // [sp-0x9a0]
    let v17: i64;  // [sp-0x990]
    let v18: i128;  // [sp-0x988]
    let v19: i64;  // [sp-0x978]
    let v20: i128;  // [sp-0x970]
    let v21: i64;  // [sp-0x960]
    let v22: i128;  // [sp-0x958]
    let v23: i64;  // [sp-0x948]
    let v24: i128;  // [sp-0x940]
    let v25: i64;  // [sp-0x930]
    let v26: i128;  // [sp-0x928]
    let v27: i64;  // [sp-0x918]
    let v28: i128;  // [sp-0x910]
    let v29: i64;  // [sp-0x900]
    let v30: i128;  // [sp-0x8f8]
    let v31: i64;  // [sp-0x8e8]
    let v32: i128;  // [sp-0x8e0]
    let v33: i64;  // [sp-0x8d0]
    let v34: i64;  // [sp-0x8c8]
    let v35: i192;  // [sp-0x8c0]
    let v36: i64;  // [sp-0x8a8]
    let v37: i64;  // [sp-0x880]
    let v38: i64;  // [sp-0x868]
    let v39: i64;  // [sp-0x860]
    let v40: i64;  // [sp-0x858]
    let v41: i64;  // [sp-0x850]
    let v42: i64;  // [sp-0x848]
    let v43: i64;  // [bp-0x838]
    let v44: i32;  // [sp-0x830]
    let v45: i8;  // [sp-0x82c]
    let v46: i16;  // [sp-0x82b]
    let v47: i8;  // [sp-0x829]
    let v48: i192;  // [sp-0x828], Other Possible Types: struct712, Enum, struct48, struct8, struct592
    let v49: i64;  // [sp-0x820]
    let v50: i64;  // [sp-0x818]
    let v51: i64;  // [sp-0x800]
    let v52: i64;  // [sp-0x7f0]
    let v53: i64;  // [sp-0x7d8]
    let v54: i64;  // [sp-0x7c0]
    let v55: i64;  // [sp-0x7b8]
    let v56: i128;  // [sp-0x7b0]
    let v57: i64;  // [sp-0x7a0]
    let v58: i128;  // [sp-0x798]
    let v59: i64;  // [sp-0x788]
    let v60: i128;  // [sp-0x780]
    let v61: i64;  // [sp-0x770]
    let v62: i128;  // [sp-0x768]
    let v63: i64;  // [sp-0x758]
    let v64: i128;  // [sp-0x750]
    let v65: i64;  // [sp-0x740]
    let v66: i128;  // [sp-0x738]
    let v67: i64;  // [sp-0x728]
    let v68: i128;  // [sp-0x720]
    let v69: i64;  // [sp-0x710]
    let v70: i128;  // [sp-0x708]
    let v71: i64;  // [sp-0x6f8]
    let v72: i128;  // [sp-0x6f0]
    let v73: i64;  // [sp-0x6e0]
    let v74: i128;  // [bp-0x6d8]
    let v75: i128;  // [bp-0x6d0]
    let v76: i64;  // [sp-0x6c8]
    let v77: i64;  // [bp-0x6c0]
    let v78: i64;  // [sp-0x6b0]
    let v79: i128;  // [sp-0x6a8]
    let v80: i64;  // [sp-0x698]
    let v81: i128;  // [sp-0x690]
    let v82: i64;  // [sp-0x680]
    let v83: i64;  // [sp-0x678]
    let v84: i64;  // [sp-0x670]
    let v85: i128;  // [sp-0x668]
    let v86: i64;  // [sp-0x658]
    let v87: i128;  // [sp-0x650]
    let v88: i64;  // [sp-0x630]
    let v89: i64;  // [sp-0x618]
    let v90: i64;  // [sp-0x610]
    let v91: i64;  // [sp-0x608]
    let v92: i64;  // [sp-0x600]
    let v93: i64;  // [sp-0x5f8]
    let v94: i64;  // [sp-0x5e8]
    let v95: i32;  // [sp-0x5e0]
    let v96: i16;  // [sp-0x5dc]
    let v97: i64;  // [sp-0x558], Other Possible Types: struct712, Enum, struct8
    let v98: i64;  // [sp-0x550]
    let v99: i64;  // [sp-0x548]
    let v100: i64;  // [sp-0x530]
    let v101: i64;  // [sp-0x520]
    let v102: i64;  // [sp-0x508]
    let v103: i64;  // [sp-0x4f0]
    let v104: i64;  // [sp-0x4e8]
    let v105: i128;  // [sp-0x4e0]
    let v106: i64;  // [sp-0x4d0]
    let v107: i128;  // [sp-0x4c8]
    let v108: i64;  // [sp-0x4b8]
    let v109: i128;  // [sp-0x4b0]
    let v110: i64;  // [sp-0x4a0]
    let v111: i128;  // [sp-0x498]
    let v112: i64;  // [sp-0x488]
    let v113: i128;  // [sp-0x480]
    let v114: i64;  // [sp-0x470]
    let v115: i128;  // [sp-0x468]
    let v116: i64;  // [sp-0x458]
    let v117: i128;  // [sp-0x450]
    let v118: i64;  // [sp-0x440]
    let v119: i128;  // [sp-0x438]
    let v120: i64;  // [sp-0x428]
    let v121: i128;  // [sp-0x420]
    let v122: i64;  // [sp-0x410]
    let v123: i128;  // [bp-0x408]
    let v124: i128;  // [bp-0x400]
    let v125: i64;  // [sp-0x3f8]
    let v126: i64;  // [bp-0x3f0]
    let v127: i64;  // [sp-0x3e0]
    let v128: i128;  // [sp-0x3d8]
    let v129: i64;  // [sp-0x3c8]
    let v130: i128;  // [sp-0x3c0]
    let v131: i64;  // [sp-0x3b0]
    let v132: i64;  // [sp-0x3a8]
    let v133: i192;  // [sp-0x3a0]
    let v134: i64;  // [sp-0x388]
    let v135: i64;  // [sp-0x360]
    let v136: i64;  // [sp-0x348]
    let v137: i64;  // [sp-0x340]
    let v138: i64;  // [sp-0x338]
    let v139: i64;  // [sp-0x330]
    let v140: i64;  // [sp-0x328]
    let v141: i64;  // [sp-0x318]
    let v142: i32;  // [sp-0x310]
    let v143: i16;  // [sp-0x30c]
    let v144: i64;  // [sp-0x2f8]
    let v145: i64;  // [sp-0x2f0]
    let v146: i64;  // [sp-0x29c]
    let v147: i32;  // [sp-0x294]
    let v148: i4736;  // [bp-0x288], Other Possible Types: struct32, struct592, struct24
    let v150: i64;  // rbx
    let v151: i64;  // rax
    let v152: i64;  // rcx
    let v153: i64;  // rax
    let v154: i64;  // rcx
    let v156: i64;  // rax
    let v157: i64;  // rcx
    let v159: i64;  // rax
    let v160: i64;  // rcx
    let v162: i64;  // rax
    let v163: i64;  // rcx
    let v165: i64;  // rax
    let v166: i64;  // rcx
    let v168: i64;  // rax
    let v169: i64;  // rcx
    let v171: i64;  // rax
    let v172: i64;  // rcx
    let v174: i64;  // rax
    let v175: i64;  // rcx
    let v176: i64;  // rax
    let v177: i64;  // rcx
    let v179: i64;  // rax
    let v180: i64;  // rcx
    let v182: i64;  // rax
    let v183: i64;  // rcx

    if _ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 != 2 {
        once_cell::imp::OnceCell<T>::initialize(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
    }
    v48 = clap_builder::builder::command::Command::new(g_6ab978, g_6ab980);
    v97 = clap_builder::builder::command::Command::about(&v48, &g_466493, &g_11);
    v144 = &g_4664a8;
    v145 = &g_1;
    memcpy(&v48, &v97, 712);
    v0 = uucore::format_usage(&g_4664ae, &g_11);
    v150 = v0;
    if v150 != 0x8000000000000000 {
        v97 = *((&v0 as &char + 8) as &i128);
    }
    v86 = v150;
    v87 = v97;
    memcpy(&v97, &v48, 712);
    v48 = clap_builder::builder::command::Command::after_help(&v97, &g_4664c6, 336);
    memcpy(&v97, &v48, 700);
    v146 = 1126449662918784 | *((&v48 as &char + 700) as &i64);
    v147 = *((&v48 as &char + 708) as &i32);
    v56 = 0;
    v58 = 0;
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
    v81 = 0;
    v48 = 0;
    v50 = 0;
    v51 = 0;
    v52 = 0;
    v53 = &g_1;
    v54 = 0;
    v55 = &g_1;
    v57 = &g_1;
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
    v80 = &g_1;
    v82 = &g_1;
    v83 = 0;
    v84 = 0x8000000000000000;
    v86 = 0x8000000000000000;
    v88 = 9223372036854775809;
    v89 = &anon.fc2b91500dea380c7cbb82546323e12f.35.llvm.12921794859373524128;
    v90 = &g_1;
    v91 = &anon.fc2b91500dea380c7cbb82546323e12f.35.llvm.12921794859373524128;
    v92 = &g_1;
    v93 = 0;
    v94 = 0x11000000110000;
    v95 = 0;
    v96 = 3337;
    v0 = 0;
    v1 = &g_1;
    v2 = 0;
    v0 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_11);
    v151 = v1;
    v152 = v2;
    *((v151 + v152) as &i128) = 152110414024190366979331735664405869136;
    *((v151 + v152 + &g_1 as &u8) as &i64) = 3345734071897648498;
    v2 = v152 + &g_11 as &u8;
    v148 = *((&v0 as &char + 8) as &i128);
    if v84 != 0x8000000000000000 {
        v0 = v148;
    }
    v84 = v0;
    v85 = v0;
    memcpy(&v0, &v48, 588);
    v46 = *((&v48 as &char + 589) as &i16);
    v47 = *((&v48 as &char + 591) as &i8);
    v45 = &g_1;
    v48 = clap_builder::builder::command::Command::arg(&v97, &v0);
    v8 = 0;
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
    v30 = 0;
    v32 = 0;
    v0 = 0;
    v2 = 0;
    v3 = 0;
    v4 = 0;
    v5 = &g_1;
    v6 = 0;
    v7 = &g_1;
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
    v29 = &g_1;
    v31 = &g_1;
    v33 = &g_1;
    v34 = 0;
    v35 = 0x8000000000000000;
    v36 = 0x8000000000000000;
    v37 = 9223372036854775809;
    v38 = &g_45c1d4;
    v39 = &g_1;
    v40 = 0;
    v42 = 0;
    v43 = 0x301000000040011000000110000;
    v97 = clap_builder::builder::command::Command::arg(&v48, &v0);
    v8 = 0;
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
    v30 = 0;
    v32 = 0;
    v0 = 0;
    v2 = 0;
    v3 = 0;
    v4 = 0;
    v5 = &g_1;
    v6 = 0;
    v7 = &g_1;
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
    v29 = &g_1;
    v31 = &g_1;
    v33 = &g_1;
    v34 = 0;
    v35 = 0x8000000000000000;
    v36 = 0x8000000000000000;
    v37 = 9223372036854775809;
    v38 = &g_46662d;
    v39 = &g_1;
    v40 = &g_46662d;
    v41 = &g_1;
    v42 = 0;
    v43 = 4785074604081250;
    v44 = 0;
    v45 = 3337;
    v48 = 0;
    v49 = &g_1;
    v50 = 0;
    v48 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_21);
    v153 = v49;
    v154 = v50;
    *((v153 + v154 + &g_1 as &u8) as &i128) = 146762463779594402520418758360259977837;
    *((v153 + v154) as &i128) = 156091486264868130566296141479754953589;
    *((v153 + v154 + &g_11 as &u8) as &i16) = 29541;
    v50 = v154 + &g_21 as &u8;
    v148 = *((&v48 as &char + 8) as &i128);
    if v35 != 0x8000000000000000 {
        v48 = v148;
    }
    v35 = v48;
    memcpy(&v48, &v0, 360);
    memcpy(&v48, &v28, 224);
    v77 = v28;
    v148 = struct32 {
        field_0: &g_46665d
        field_8: &g_1
        field_16: 0
        field_24: &g_1
    };
    v0 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v148);
    v77 = v2;
    v75 = v0;
    memcpy(&v0, &v48, 592);
    v48 = clap_builder::builder::command::Command::arg(&v97, &v0);
    v8 = 0;
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
    v30 = 0;
    v32 = 0;
    v0 = 0;
    v2 = 0;
    v3 = 0;
    v4 = 0;
    v5 = &g_1;
    v6 = 0;
    v7 = &g_1;
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
    v29 = &g_1;
    v31 = &g_1;
    v33 = &g_1;
    v34 = 0;
    v35 = 0x8000000000000000;
    v36 = 0x8000000000000000;
    v37 = 9223372036854775809;
    v38 = &g_466662;
    v39 = &g_11;
    v40 = &g_466662;
    v41 = &g_11;
    v42 = 0;
    v43 = 4785074604081252;
    v44 = 0;
    v45 = 3337;
    v97 = 0;
    v98 = &g_1;
    v99 = 0;
    v97 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, 35);
    v156 = v98;
    v157 = v99;
    *((v156 + v157 + &g_1 as &u8) as &i128) = 129517310463181836125403215574585668705;
    *((v156 + v157) as &i128) = 152037923982308312879195988160940438389;
    *((v156 + v157 + &g_11 as &u8) as &i32) = 1936025441;
    v99 = v157 + 35;
    v148 = *((&v97 as &char + 8) as &i128);
    if v35 != 0x8000000000000000 {
        v97 = v148;
    }
    v35 = v97;
    memcpy(&v97, &v0, 360);
    memcpy(&v97, &v28, 224);
    v126 = v28;
    v148 = struct32 {
        field_0: &g_466696
        field_8: &g_1
        field_16: 0
        field_24: &g_1
    };
    v0 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v148);
    v126 = v2;
    v124 = v0;
    memcpy(&v0, &v97, 592);
    v97 = clap_builder::builder::command::Command::arg(&v48, &v0);
    v8 = 0;
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
    v30 = 0;
    v32 = 0;
    v0 = 0;
    v2 = 0;
    v3 = 0;
    v4 = 0;
    v5 = &g_1;
    v6 = 0;
    v7 = &g_1;
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
    v29 = &g_1;
    v31 = &g_1;
    v33 = &g_1;
    v34 = 0;
    v35 = 0x8000000000000000;
    v36 = 0x8000000000000000;
    v37 = 9223372036854775809;
    v38 = &g_4585b0;
    v39 = &g_1;
    v40 = &g_4585b0;
    v41 = &g_1;
    v42 = 0;
    v43 = 4785074604081254;
    v44 = 0;
    v45 = 3337;
    v48 = 0;
    v49 = &g_1;
    v50 = 0;
    v48 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, 36);
    v159 = v49;
    v160 = v50;
    *((v159 + v160 + &g_1 as &u8) as &i128) = 143725097277018236960686267517842580077;
    *((v159 + v160) as &i128) = 156091486264868130566296141479754953589;
    *((v159 + v160 + &g_11 as &u8) as &i32) = 1936027241;
    v50 = v160 + 36;
    v148 = *((&v48 as &char + 8) as &i128);
    if v35 != 0x8000000000000000 {
        v48 = v148;
    }
    v35 = v48;
    memcpy(&v48, &v0, 360);
    memcpy(&v48, &v28, 224);
    v77 = v28;
    v148 = struct32 {
        field_0: &g_46665d
        field_8: &g_1
        field_16: 0
        field_24: &g_1
    };
    v0 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v148);
    v77 = v2;
    v75 = v0;
    memcpy(&v0, &v48, 592);
    v48 = clap_builder::builder::command::Command::arg(&v97, &v0);
    v8 = 0;
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
    v30 = 0;
    v32 = 0;
    v0 = 0;
    v2 = 0;
    v3 = 0;
    v4 = 0;
    v5 = &g_1;
    v6 = 0;
    v7 = &g_1;
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
    v29 = &g_1;
    v31 = &g_1;
    v33 = &g_1;
    v34 = 0;
    v35 = 0x8000000000000000;
    v36 = 0x8000000000000000;
    v37 = 9223372036854775809;
    v38 = &g_458fc0;
    v39 = &g_1;
    v40 = &g_458fc0;
    v41 = &g_1;
    v42 = 0;
    v43 = 4785074604081256;
    v44 = 0;
    v45 = 3337;
    v97 = 0;
    v98 = &g_1;
    v99 = 0;
    v97 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, 36);
    v162 = v98;
    v163 = v99;
    *((v162 + v163 + &g_1 as &u8) as &i128) = 143725097272049504655298801060767162989;
    *((v162 + v163) as &i128) = 156091486264868130566296141479754953589;
    *((v162 + v163 + &g_11 as &u8) as &i32) = 1936027241;
    v99 = v163 + 36;
    v148 = *((&v97 as &char + 8) as &i128);
    if v35 != 0x8000000000000000 {
        v97 = v148;
    }
    v35 = v97;
    memcpy(&v97, &v0, 360);
    memcpy(&v97, &v28, 224);
    v126 = v28;
    v148 = &g_46665d;
    v0 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v148);
    v126 = v2;
    v124 = v0;
    memcpy(&v0, &v97, 592);
    v97 = clap_builder::builder::command::Command::arg(&v48, &v0);
    v8 = 0;
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
    v30 = 0;
    v32 = 0;
    v0 = 0;
    v2 = 0;
    v3 = 0;
    v4 = 0;
    v5 = &g_1;
    v6 = 0;
    v7 = &g_1;
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
    v29 = &g_1;
    v31 = &g_1;
    v33 = &g_1;
    v34 = 0;
    v35 = 0x8000000000000000;
    v36 = 0x8000000000000000;
    v37 = 9223372036854775809;
    v38 = &g_4666e0;
    v39 = &g_1;
    v40 = &g_4666e0;
    v41 = &g_1;
    v42 = 0;
    v43 = 4785074604081257;
    v44 = 0;
    v45 = 3337;
    v48 = 0;
    v49 = &g_1;
    v50 = 0;
    v48 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_21);
    v165 = v49;
    v166 = v50;
    *((v165 + v166 + &g_1 as &u8) as &i128) = 140130364925730905710238091665757007205;
    *((v165 + v166) as &i128) = 152048268302530639760162735918949493100;
    *((v165 + v166 + &g_11 as &u8) as &i16) = 25966;
    v50 = v166 + &g_21 as &u8;
    v148 = *((&v48 as &char + 8) as &i128);
    if v35 != 0x8000000000000000 {
        v48 = v148;
    }
    v35 = v48;
    memcpy(&v48, &v0, 360);
    memcpy(&v48, &v28, 224);
    v77 = v28;
    v148 = struct32 {
        field_0: &g_466710
        field_8: &g_1
        field_16: 0
        field_24: &g_1
    };
    v0 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v148);
    v77 = v2;
    v75 = v0;
    memcpy(&v0, &v48, 592);
    v48 = struct8 {
        field_0: &g_1
    };
    v50 = &g_1;
    v148 = clap_builder::builder::arg::Arg::value_parser(&v0, &v48);
    v48 = clap_builder::builder::command::Command::arg(&v97, &v148);
    v8 = 0;
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
    v30 = 0;
    v32 = 0;
    v0 = 0;
    v2 = 0;
    v3 = 0;
    v4 = 0;
    v5 = &g_1;
    v6 = 0;
    v7 = &g_1;
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
    v29 = &g_1;
    v31 = &g_1;
    v33 = &g_1;
    v34 = 0;
    v35 = 0x8000000000000000;
    v36 = 0x8000000000000000;
    v37 = 9223372036854775809;
    v38 = &g_458d90;
    v39 = &g_1;
    v40 = &g_458d90;
    v41 = &g_1;
    v42 = 0;
    v43 = 4785074604081260;
    v44 = 0;
    v45 = 3337;
    v97 = 0;
    v98 = &g_1;
    v99 = 0;
    v97 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, 42);
    v168 = v98;
    v169 = v99;
    *((v168 + v169 + &g_11 as &u8) as &i128) = 134825434147190734895968479501514645619;
    *((v168 + v169 + &g_1 as &u8) as &i128) = 146824837469886440878835149481085791589;
    *((v168 + v169) as &i128) = 42962468946772015098340302106559214183;
    v99 = v169 + 42;
    v148 = *((&v97 as &char + 8) as &i128);
    if v35 != 0x8000000000000000 {
        v97 = v148;
    }
    v35 = v97;
    memcpy(&v97, &v0, 360);
    memcpy(&v97, &v28, 224);
    v126 = v28;
    v148 = struct32 {
        field_0: &g_466710
        field_8: &g_1
        field_16: 0
        field_24: &g_1
    };
    v0 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v148);
    v126 = v2;
    v124 = v0;
    memcpy(&v0, &v97, 592);
    v97 = struct8 {
        field_0: &g_1
    };
    v99 = &g_1;
    v148 = clap_builder::builder::arg::Arg::value_parser(&v0, &v97);
    v97 = clap_builder::builder::command::Command::arg(&v48, &v148);
    v8 = 0;
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
    v30 = 0;
    v32 = 0;
    v0 = 0;
    v2 = 0;
    v3 = 0;
    v4 = 0;
    v5 = &g_1;
    v6 = 0;
    v7 = &g_1;
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
    v29 = &g_1;
    v31 = &g_1;
    v33 = &g_1;
    v34 = 0;
    v35 = 0x8000000000000000;
    v36 = 0x8000000000000000;
    v37 = 9223372036854775809;
    v38 = &g_466740;
    v39 = &g_1;
    v40 = &g_466740;
    v41 = &g_1;
    v42 = 0;
    v43 = 4785074604081262;
    v44 = 0;
    v45 = 3337;
    v48 = 0;
    v49 = &g_1;
    v50 = 0;
    v48 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, 39);
    v171 = v49;
    v172 = v50;
    *((v171 + v172 + &g_1 as &u8) as &i128) = 148147271199494520358923432932567904869;
    *((v171 + v172) as &i128) = 130832685711549698797676371661936619113;
    *((v171 + v172 + &g_11 as &u8) as &i64) = 6071218788584792175;
    v50 = v172 + 39;
    v148 = *((&v48 as &char + 8) as &i128);
    if v35 != 0x8000000000000000 {
        v48 = v148;
    }
    v35 = v48;
    memcpy(&v48, &v0, 360);
    memcpy(&v48, &v28, 224);
    v77 = v28;
    v148 = struct32 {
        field_0: &g_466774
        field_8: &g_1
        field_16: 0
        field_24: &g_1
    };
    v0 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v148);
    v77 = v2;
    v75 = v0;
    memcpy(&v0, &v48, 592);
    v48 = struct48 {
        field_0: &anon.f889ede2e7c25c04dde6a43fbe12ef55.14.llvm.13926315826665832927
        field_8: &g_1
        field_16: &anon.f889ede2e7c25c04dde6a43fbe12ef55.15.llvm.13926315826665832927
        field_24: &g_1
        field_32: &anon.f889ede2e7c25c04dde6a43fbe12ef55.16.llvm.13926315826665832927
        field_40: &g_1
    };
    v148 = clap_builder::builder::arg::Arg::value_parser(&v0, &v48);
    v48 = clap_builder::builder::command::Command::arg(&v97, &v148);
    v105 = 0;
    v107 = 0;
    v109 = 0;
    v111 = 0;
    v113 = 0;
    v115 = 0;
    v117 = 0;
    v119 = 0;
    v121 = 0;
    v123 = 0;
    v126 = 0;
    v128 = 0;
    v130 = 0;
    v97 = 0;
    v99 = 0;
    v100 = 0;
    v101 = 0;
    v102 = &g_1;
    v103 = 0;
    v104 = &g_1;
    v106 = &g_1;
    v108 = &g_1;
    v110 = &g_1;
    v112 = &g_1;
    v114 = &g_1;
    v116 = &g_1;
    v118 = &g_1;
    v120 = &g_1;
    v122 = &g_1;
    v125 = &g_1;
    v127 = &g_1;
    v129 = &g_1;
    v131 = &g_1;
    v132 = 0;
    v133 = 0x8000000000000000;
    v134 = 0x8000000000000000;
    v135 = 9223372036854775809;
    v136 = &g_46677a;
    v137 = &g_1;
    v138 = &g_46677a;
    v139 = &g_1;
    v140 = 0;
    v141 = 4785074604081264;
    v142 = 0;
    v143 = 3337;
    v0 = 0;
    v1 = &g_1;
    v2 = 0;
    v0 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, 42);
    v174 = v1;
    v175 = v2;
    *((v174 + v175 + &g_11 as &u8) as &i128) = 153387738305999801518409816514974741601;
    *((v174 + v175 + &g_1 as &u8) as &i128) = 137489021588699775801848371820463267941;
    *((v174 + v175) as &i128) = 146762463778048205347826555956051865444;
    v2 = v175 + 42;
    v148 = *((&v0 as &char + 8) as &i128);
    if v133 != 0x8000000000000000 {
        v0 = v148;
    }
    v133 = v0;
    memcpy(&v0, &v97, 588);
    v46 = *((&v97 as &char + 589) as &i16);
    v47 = *((&v97 as &char + 591) as &i8);
    v45 = &g_1;
    v97 = clap_builder::builder::command::Command::arg(&v48, &v0);
    v8 = 0;
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
    v30 = 0;
    v32 = 0;
    v0 = 0;
    v2 = 0;
    v3 = 0;
    v4 = 0;
    v5 = &g_1;
    v6 = 0;
    v7 = &g_1;
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
    v29 = &g_1;
    v31 = &g_1;
    v33 = &g_1;
    v34 = 0;
    v35 = 0x8000000000000000;
    v36 = 0x8000000000000000;
    v37 = 9223372036854775809;
    v38 = &g_459110;
    v39 = &g_1;
    v40 = &g_459110;
    v41 = &g_1;
    v42 = 0;
    v43 = 4785074604081267;
    v44 = 0;
    v45 = 3337;
    v48 = 0;
    v49 = &g_1;
    v50 = 0;
    v48 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, 39);
    v176 = v49;
    v177 = v50;
    *((v176 + v177 + &g_1 as &u8) as &i128) = 134825318448318834399607540066714396704;
    *((v176 + v177) as &i128) = 152058774373038095461295036746753664097;
    *((v176 + v177 + &g_11 as &u8) as &i64) = 8243102915232669797;
    v50 = v177 + 39;
    v148 = *((&v48 as &char + 8) as &i128);
    if v35 != 0x8000000000000000 {
        v48 = v148;
    }
    v35 = v48;
    memcpy(&v48, &v0, 360);
    memcpy(&v48, &v28, 224);
    v77 = v28;
    v148 = struct32 {
        field_0: &g_4667d6
        field_8: &g_1
        field_16: 0
        field_24: &g_1
    };
    v0 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v148);
    v77 = v2;
    v75 = v0;
    memcpy(&v0, &v48, 592);
    v48 = clap_builder::builder::command::Command::arg(&v97, &v0);
    v8 = 0;
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
    v30 = 0;
    v32 = 0;
    v0 = 0;
    v2 = 0;
    v3 = 0;
    v4 = 0;
    v5 = &g_1;
    v6 = 0;
    v7 = &g_1;
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
    v29 = &g_1;
    v31 = &g_1;
    v33 = &g_1;
    v34 = 0;
    v35 = 0x8000000000000000;
    v36 = 0x8000000000000000;
    v37 = 9223372036854775809;
    v38 = &g_4667dc;
    v39 = &g_11;
    v40 = &g_4667dc;
    v41 = &g_11;
    v42 = 0;
    v43 = 4785074604081270;
    v44 = 0;
    v45 = 3337;
    v97 = 0;
    v98 = &g_1;
    v99 = 0;
    v97 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, 38);
    v179 = v98;
    v180 = v99;
    *((v179 + v180 + &g_1 as &u8) as &i128) = 129451290828124463121552724726419234930;
    *((v179 + v180) as &i128) = 134763092752837244174212936415136868710;
    *((v179 + v180 + &g_11 as &u8) as &i64) = 7306916054640124259;
    v99 = v180 + 38;
    v148 = *((&v97 as &char + 8) as &i128);
    if v35 != 0x8000000000000000 {
        v97 = v148;
    }
    v35 = v97;
    memcpy(&v97, &v0, 360);
    memcpy(&v97, &v28, 224);
    v126 = v28;
    v148 = struct32 {
        field_0: &g_466710
        field_8: &g_1
        field_16: 0
        field_24: &g_1
    };
    v0 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v148);
    v126 = v2;
    v124 = v0;
    memcpy(&v0, &v97, 592);
    v97 = struct8 {
        field_0: &g_1
    };
    v99 = &g_1;
    v148 = clap_builder::builder::arg::Arg::value_parser(&v0, &v97);
    v97 = clap_builder::builder::command::Command::arg(&v48, &v148);
    v8 = 0;
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
    v30 = 0;
    v32 = 0;
    v0 = 0;
    v2 = 0;
    v3 = 0;
    v4 = 0;
    v5 = &g_1;
    v6 = 0;
    v7 = &g_1;
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
    v29 = &g_1;
    v31 = &g_1;
    v33 = &g_1;
    v34 = 0;
    v35 = 0x8000000000000000;
    v36 = 0x8000000000000000;
    v37 = 9223372036854775809;
    v38 = &g_466816;
    v39 = &g_1;
    v40 = &g_466816;
    v41 = &g_1;
    v42 = 0;
    v43 = 4785074604081271;
    v44 = 0;
    v45 = 3337;
    v48 = 0;
    v49 = &g_1;
    v50 = 0;
    v48 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, 35);
    v182 = v49;
    v183 = v50;
    *((v182 + v183 + &g_1 as &u8) as &i128) = 130832685711549698797676369450039800686;
    *((v182 + v183) as &i128) = 145495549598245728552995631735553487733;
    *((v182 + v183 + &g_11 as &u8) as &i32) = 1936876898;
    v50 = v183 + 35;
    v148 = *((&v48 as &char + 8) as &i128);
    if v35 != 0x8000000000000000 {
        v48 = v148;
    }
    v35 = v48;
    memcpy(&v48, &v0, 360);
    memcpy(&v48, &v28, 224);
    v77 = v28;
    v148 = struct32 {
        field_0: &g_466710
        field_8: &g_1
        field_16: 0
        field_24: &g_1
    };
    v0 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v148);
    v77 = v2;
    v75 = v0;
    memcpy(&v0, &v48, 592);
    *(__rust_alloc(&g_1, &g_1) as &void*) = core::num::<impl core::str::traits::FromStr for usize>::from_str;
    *(&v148.field_0 as &struct24) = struct24 {
        field_0: &g_1
        field_8: v185
        field_16: &g_66e710
    };
    v48 = clap_builder::builder::arg::Arg::value_parser(&v0, &v148);
    clap_builder::builder::command::Command::arg(a0, &v97, &v48);
    return a0;
}
