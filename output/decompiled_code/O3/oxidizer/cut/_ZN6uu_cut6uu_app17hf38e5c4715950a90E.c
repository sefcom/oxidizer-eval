fn uu_cut::uu_app(a0: u32) -> u64 {
    let v0: i128;  // [bp-0x868], Other Possible Types: struct32
    let v1: i64;  // [sp-0x848], Other Possible Types: struct24, Enum, struct592
    let v2: i64;  // [sp-0x840]
    let v3: i64;  // [sp-0x838]
    let v4: i64;  // [sp-0x820]
    let v5: i64;  // [sp-0x810]
    let v6: i64;  // [sp-0x7f8]
    let v7: i64;  // [sp-0x7e0]
    let v8: i64;  // [sp-0x7d8]
    let v9: i128;  // [sp-0x7d0]
    let v10: i64;  // [sp-0x7c0]
    let v11: i128;  // [sp-0x7b8]
    let v12: i64;  // [sp-0x7a8]
    let v13: i128;  // [sp-0x7a0]
    let v14: i64;  // [sp-0x790]
    let v15: i128;  // [sp-0x788]
    let v16: i64;  // [sp-0x778]
    let v17: i128;  // [sp-0x770]
    let v18: i64;  // [sp-0x760]
    let v19: i128;  // [sp-0x758]
    let v20: i64;  // [sp-0x748]
    let v21: i128;  // [sp-0x740]
    let v22: i64;  // [sp-0x730]
    let v23: i128;  // [sp-0x728]
    let v24: i64;  // [sp-0x718]
    let v25: i128;  // [sp-0x710]
    let v26: i64;  // [sp-0x700]
    let v27: i128;  // [sp-0x6f8]
    let v28: i64;  // [sp-0x6e8]
    let v29: i64;  // [bp-0x6e0]
    let v30: i64;  // [sp-0x6d0]
    let v31: i128;  // [sp-0x6c8]
    let v32: i64;  // [sp-0x6b8]
    let v33: i128;  // [sp-0x6b0]
    let v34: i64;  // [sp-0x6a0]
    let v35: i64;  // [sp-0x698]
    let v36: i192;  // [sp-0x690]
    let v37: i128;  // [sp-0x688]
    let v38: i64;  // [sp-0x678]
    let v39: i64;  // [sp-0x650]
    let v40: i64;  // [sp-0x638]
    let v41: i64;  // [sp-0x630]
    let v42: i64;  // [sp-0x628]
    let v43: i64;  // [sp-0x620]
    let v44: i64;  // [sp-0x618]
    let v45: i64;  // [sp-0x608]
    let v46: i32;  // [sp-0x600]
    let v47: i8;  // [bp-0x5fc]
    let v48: i16;  // [sp-0x5fb]
    let v49: i8;  // [sp-0x5f9]
    let v50: i64;  // [sp-0x5f0]
    let v51: i128;  // [sp-0x5e8], Other Possible Types: struct712, Enum
    let v52: i64;  // [sp-0x5e0]
    let v53: i64;  // [sp-0x5d8]
    let v54: i64;  // [sp-0x5c0]
    let v55: i64;  // [sp-0x5b0]
    let v56: i64;  // [sp-0x598]
    let v57: i64;  // [sp-0x580]
    let v58: i64;  // [sp-0x578]
    let v59: i128;  // [sp-0x570]
    let v60: i64;  // [sp-0x560]
    let v61: i128;  // [sp-0x558]
    let v62: i64;  // [sp-0x548]
    let v63: i128;  // [sp-0x540]
    let v64: i64;  // [sp-0x530]
    let v65: i128;  // [sp-0x528]
    let v66: i64;  // [sp-0x518]
    let v67: i128;  // [sp-0x510]
    let v68: i64;  // [sp-0x500]
    let v69: i128;  // [sp-0x4f8]
    let v70: i64;  // [sp-0x4e8]
    let v71: i128;  // [sp-0x4e0]
    let v72: i64;  // [sp-0x4d0]
    let v73: i128;  // [sp-0x4c8]
    let v74: i64;  // [sp-0x4b8]
    let v75: i128;  // [sp-0x4b0]
    let v76: i64;  // [sp-0x4a0]
    let v77: i128;  // [bp-0x498]
    let v78: i128;  // [bp-0x490]
    let v79: i64;  // [sp-0x488]
    let v80: i64;  // [bp-0x480]
    let v81: i64;  // [sp-0x470]
    let v82: i128;  // [sp-0x468]
    let v83: i64;  // [sp-0x458]
    let v84: i128;  // [sp-0x450]
    let v85: i64;  // [sp-0x440]
    let v86: i64;  // [sp-0x438]
    let v87: i64;  // [sp-0x430]
    let v88: i64;  // [sp-0x418]
    let v89: i64;  // [sp-0x3f0]
    let v90: i64;  // [sp-0x3d8]
    let v91: i64;  // [sp-0x3d0]
    let v92: i64;  // [sp-0x3c8]
    let v93: i64;  // [sp-0x3c0]
    let v94: i64;  // [sp-0x3b8]
    let v95: i64;  // [sp-0x3a8]
    let v96: i32;  // [sp-0x3a0]
    let v97: i16;  // [bp-0x39c]
    let v98: i64;  // [sp-0x388]
    let v99: i64;  // [sp-0x380]
    let v100: i64;  // [bp-0x318], Other Possible Types: struct712, Enum
    let v101: i64;  // [sp-0x310]
    let v102: i64;  // [sp-0x308]
    let v103: i64;  // [sp-0x2f0]
    let v104: i64;  // [sp-0x2e0]
    let v105: i64;  // [sp-0x2c8]
    let v106: i64;  // [sp-0x2b0]
    let v107: i64;  // [sp-0x2a8]
    let v108: i128;  // [sp-0x2a0]
    let v109: i64;  // [sp-0x290]
    let v110: i128;  // [sp-0x288]
    let v111: i64;  // [sp-0x278]
    let v112: i128;  // [sp-0x270]
    let v113: i64;  // [sp-0x260]
    let v114: i128;  // [sp-0x258]
    let v115: i64;  // [sp-0x248]
    let v116: i128;  // [sp-0x240]
    let v117: i64;  // [sp-0x230]
    let v118: i128;  // [sp-0x228]
    let v119: i64;  // [sp-0x218]
    let v120: i128;  // [sp-0x210]
    let v121: i64;  // [sp-0x200]
    let v122: i128;  // [sp-0x1f8]
    let v123: i64;  // [sp-0x1e8]
    let v124: i128;  // [sp-0x1e0]
    let v125: i64;  // [sp-0x1d0]
    let v126: i128;  // [bp-0x1c8]
    let v127: i128;  // [bp-0x1c0]
    let v128: i64;  // [sp-0x1b8]
    let v129: i128;  // [bp-0x1b0]
    let v130: i64;  // [sp-0x1a0]
    let v131: i128;  // [sp-0x198]
    let v132: i64;  // [sp-0x188]
    let v133: i128;  // [sp-0x180]
    let v134: i64;  // [sp-0x170]
    let v135: i64;  // [sp-0x168]
    let v136: i192;  // [sp-0x160]
    let v137: i64;  // [sp-0x148]
    let v138: i128;  // [sp-0x140]
    let v139: i64;  // [sp-0x120]
    let v140: i64;  // [sp-0x108]
    let v141: i64;  // [sp-0x100]
    let v142: i64;  // [sp-0xf8]
    let v143: i64;  // [sp-0xf0]
    let v144: i64;  // [sp-0xe8]
    let v145: i64;  // [sp-0xd8]
    let v146: i32;  // [sp-0xd0]
    let v147: i32;  // [bp-0xcc]
    let v148: i16;  // [sp-0xcb]
    let v149: i8;  // [sp-0xc9]
    let v150: i64;  // [sp-0x5c]
    let v151: i32;  // [sp-0x54]
    let v152: struct8;  // [bp-0x48]
    let v154: i64;  // rbx
    let v155: i64;  // rax
    let v156: i64;  // rcx
    let v158: i32;  // ebx
    let v159: i64;  // rbx
    let v161: i64;  // rax
    let v162: i64;  // rcx
    let v164: i32;  // ebx
    let v165: i64;  // rbx
    let v167: i64;  // r13
    let v168: i64;  // rax
    let v169: i64;  // rcx
    let v170: i64;  // rbx
    let v172: i64;  // rax
    let v173: i64;  // rcx
    let v176: i64;  // rax
    let v177: i64;  // rcx
    let v179: i32;  // ebx
    let v180: i64;  // rbx
    let v182: i64;  // r13
    let v183: i64;  // rax
    let v184: i64;  // rcx
    let v185: i64;  // rax
    let v186: i64;  // rcx
    let v187: i64;  // rax
    let v188: i64;  // rcx
    let v189: i64;  // rax
    let v190: i64;  // rcx
    let v191: i64;  // rbx

    if _ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 != 2 {
        once_cell::imp::OnceCell<T>::initialize(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
    }
    v51 = clap_builder::builder::command::Command::new(g_4f5ee8, g_4f5ef0);
    v98 = &g_419ddb;
    v99 = &g_1;
    memcpy(&v100, &v51, 712);
    v1 = uucore::format_usage(&g_419de1, &g_11);
    v154 = v1;
    if v154 != 0x8000000000000000 {
        v51 = *((&v1 as &char + 8) as &i128);
    }
    v137 = v154;
    v138 = v51;
    memcpy(&v51, &v100, 712);
    v100 = clap_builder::builder::command::Command::about(&v51, &g_419df7, &g_4c);
    v51 = clap_builder::builder::command::Command::after_help(&v100, &g_419e48, 3083);
    memcpy(&v100, &v51, 700);
    v150 = 584115552392 | *((&v51 as &char + 700) as &i64);
    v151 = *((&v51 as &char + 708) as &i32);
    v9 = 0;
    v11 = 0;
    v13 = 0;
    v15 = 0;
    v17 = 0;
    v19 = 0;
    v21 = 0;
    v23 = 0;
    v25 = 0;
    v27 = 0;
    v29 = 0;
    v31 = 0;
    v33 = 0;
    v1 = 0;
    v3 = 0;
    v4 = 0;
    v5 = 0;
    v6 = &g_1;
    v7 = 0;
    v8 = &g_1;
    v10 = &g_1;
    v12 = &g_1;
    v14 = &g_1;
    v16 = &g_1;
    v18 = &g_1;
    v20 = &g_1;
    v22 = &g_1;
    v24 = &g_1;
    v26 = &g_1;
    v28 = &g_1;
    v30 = &g_1;
    v32 = &g_1;
    v34 = &g_1;
    v35 = 0;
    v36 = 0x8000000000000000;
    v38 = 0x8000000000000000;
    v39 = 9223372036854775809;
    v40 = &g_41aa53;
    v41 = &g_1;
    v42 = &g_41aa53;
    v43 = &g_1;
    v44 = 0;
    v45 = 4785074604081250;
    v46 = 0;
    v47 = 3337;
    v51 = 0;
    v52 = &g_1;
    v53 = 0;
    v51 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_1a);
    v155 = v52;
    v156 = v53;
    *((v155 + v156 + &g_11 as &u8) as &i128) = 134768386462153297381301995116316420212;
    *((v155 + v156 + &g_1 as &u8) as &i128) = 149446820402043255356107306670832709229;
    *((v155 + v156) as &i128) = 156082702768637184616916142300680972646;
    v53 = v156 + &g_1a as &u8;
    v0 = *((&v51 as &char + 8) as &i128);
    if v36 != 0x8000000000000000 {
        v51 = v0;
    }
    v36 = v51;
    memcpy(&v51, &v1, 360);
    memcpy(&v51, &v29, 216);
    v158 = v47;
    v80 = v29;
    v96 = &g_1a;
    v97 = v158;
    v0 = struct32 {
        field_0: &g_41188c
        field_8: &g_1
        field_16: 0
        field_24: &g_1
    };
    v1 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v0);
    v50 = 9223372036854775809;
    v159 = (v158 >> &g_1) as u64;
    v80 = v3;
    v78 = v1;
    memcpy(&v1, &v51, 360);
    memcpy(&v29, &v51, 216);
    v29 = v80;
    v46 = &g_1a;
    v47 = &g_1;
    v49 = ((v159 & 4294967295 & 4294967295) >> &g_1 & 4294967295) as u8;
    v48 = v159;
    v51 = clap_builder::builder::command::Command::arg(&v100, &v1);
    v9 = 0;
    v11 = 0;
    v13 = 0;
    v15 = 0;
    v17 = 0;
    v19 = 0;
    v21 = 0;
    v23 = 0;
    v25 = 0;
    v27 = 0;
    v29 = 0;
    v31 = 0;
    v33 = 0;
    v1 = 0;
    v3 = 0;
    v4 = 0;
    v5 = 0;
    v6 = &g_1;
    v7 = 0;
    v8 = &g_1;
    v10 = &g_1;
    v12 = &g_1;
    v14 = &g_1;
    v16 = &g_1;
    v18 = &g_1;
    v20 = &g_1;
    v22 = &g_1;
    v24 = &g_1;
    v26 = &g_1;
    v28 = &g_1;
    v30 = &g_1;
    v32 = &g_1;
    v34 = &g_1;
    v35 = 0;
    v36 = 0x8000000000000000;
    v38 = 0x8000000000000000;
    v39 = v50;
    v40 = &g_41aa81;
    v41 = &g_1;
    v42 = &g_41aa81;
    v43 = &g_1;
    v44 = 0;
    v45 = 4785074604081251;
    v46 = 0;
    v47 = 3337;
    v100 = 0;
    v101 = &g_1;
    v102 = 0;
    v100 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_11);
    v161 = v101;
    v162 = v102;
    *((v161 + v162) as &i128) = 132099544290117407775758584405069229153;
    *((v161 + v162 + &g_1 as &u8) as &i64) = 7306087009988273524;
    v102 = v162 + &g_11 as &u8;
    v0 = *((&v100 as &char + 8) as &i128);
    if v36 != 0x8000000000000000 {
        v100 = v0;
    }
    v36 = v100;
    memcpy(&v100, &v1, 360);
    memcpy(&v100, &v29, 216);
    v164 = v47;
    v129 = v29;
    v146 = &g_1a;
    v147 = v164;
    v0 = struct32 {
        field_0: &g_41188c
        field_8: &g_1
        field_16: 0
        field_24: &g_1
    };
    v1 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v0);
    v165 = (v164 >> &g_1) as u64;
    v129 = v3;
    v127 = v1;
    memcpy(&v1, &v100, 360);
    memcpy(&v29, &v100, 216);
    v29 = v129;
    v46 = &g_1a;
    v47 = &g_1;
    v49 = ((v165 & 4294967295 & 4294967295) >> &g_1 & 4294967295) as u8;
    v48 = v165;
    v100 = clap_builder::builder::command::Command::arg(&v51, &v1);
    v59 = 0;
    v61 = 0;
    v63 = 0;
    v65 = 0;
    v67 = 0;
    v69 = 0;
    v71 = 0;
    v73 = 0;
    v75 = 0;
    v77 = 0;
    v80 = 0;
    v82 = 0;
    v84 = 0;
    v51 = 0;
    v53 = 0;
    v54 = 0;
    v55 = 0;
    v56 = &g_1;
    v57 = 0;
    v58 = &g_1;
    v60 = &g_1;
    v62 = &g_1;
    v64 = &g_1;
    v66 = &g_1;
    v68 = &g_1;
    v70 = &g_1;
    v72 = &g_1;
    v74 = &g_1;
    v76 = &g_1;
    v79 = &g_1;
    v81 = &g_1;
    v83 = &g_1;
    v85 = &g_1;
    v86 = 0;
    v87 = 0x8000000000000000;
    v88 = 0x8000000000000000;
    v167 = v50;
    v89 = v167;
    v90 = &g_419d5f;
    v91 = &g_1;
    v92 = &g_419d5f;
    v93 = &g_1;
    v94 = 0;
    v95 = 4785074604081252;
    v96 = 0;
    v97 = 3337;
    v152 = struct8 {
        field_0: &g_1
    };
    v1 = clap_builder::builder::arg::Arg::value_parser(&v51, &v152);
    v51 = 0;
    v52 = &g_1;
    v53 = 0;
    v51 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_4c);
    v168 = v52;
    v169 = v53;
    *((v168 + v169 + &g_41 as &u8) as &i128) = 61655306957178008144794077092423034180;
    *((v168 + v169 + &g_31 as &u8) as &i128) = 156025405131020907214018639098158281845;
    *((v168 + v169 + &g_2c as &u8) as &i128) = 149446820402043255356177585312031860073;
    *((v168 + v169 + &g_1a as &u8) as &i128) = 135749749584701434494089022292493428852;
    *((v168 + v169 + &g_1 as &u8) as &i128) = 43129275451583920679401176635400284525;
    *((v168 + v169) as &i128) = 140131764074350263374268277783236276339;
    v53 = v169 + &g_4c as &u8;
    v170 = v51;
    v0 = *((&v51 as &char + 8) as &i128);
    if v170 != 0x8000000000000000 {
        v51 = v0;
    }
    v36 = v170;
    v37 = v51;
    memcpy(&v51, &v1, 360);
    memcpy(&v80, &v1, 224);
    v80 = *((&v1 as &char + 360) as &i64);
    v0 = struct32 {
        field_0: &g_41aafe
        field_8: &g_1
        field_16: 0
        field_24: &g_1
    };
    v1 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v0);
    v80 = v3;
    v78 = v1;
    memcpy(&v1, &v51, 592);
    v51 = clap_builder::builder::command::Command::arg(&v100, &v1);
    v9 = 0;
    v11 = 0;
    v13 = 0;
    v15 = 0;
    v17 = 0;
    v19 = 0;
    v21 = 0;
    v23 = 0;
    v25 = 0;
    v27 = 0;
    v29 = 0;
    v31 = 0;
    v33 = 0;
    v1 = 0;
    v3 = 0;
    v4 = 0;
    v5 = 0;
    v6 = &g_1;
    v7 = 0;
    v8 = &g_1;
    v10 = &g_1;
    v12 = &g_1;
    v14 = &g_1;
    v16 = &g_1;
    v18 = &g_1;
    v20 = &g_1;
    v22 = &g_1;
    v24 = &g_1;
    v26 = &g_1;
    v28 = &g_1;
    v30 = &g_1;
    v32 = &g_1;
    v34 = &g_1;
    v35 = 0;
    v36 = 0x8000000000000000;
    v38 = 0x8000000000000000;
    v39 = v167;
    v40 = &g_419d4b;
    v41 = &g_11;
    v42 = 0;
    v44 = 0;
    v45 = 4785074604081271;
    v46 = 0;
    v47 = 3337;
    v100 = 0;
    v101 = &g_1;
    v102 = 0;
    v100 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_5e);
    v172 = v101;
    v173 = v102;
    *((v172 + v173 + &g_4c as &u8) as &i128) = 153434429920801431958900149826441586720;
    *((v172 + v173 + &g_31 as &u8) as &i128) = 134768386462153297381301995116316420212;
    *((v172 + v173 + &g_2c as &u8) as &i128) = 43108580743577903451625738608868160097;
    *((v172 + v173 + &g_1a as &u8) as &i128) = 149400292557521439118643126057027593057;
    *((v172 + v173 + &g_1 as &u8) as &i128) = 149305310030232444773667237953818533990;
    *((v172 + v173) as &i128) = 147712781258799865032752164524681163605;
    *((v172 + v173 + 93) as &i64) = 3326311224579419749;
    v102 = v173 + &g_5e as &u8;
    v0 = *((&v100 as &char + 8) as &i128);
    if v36 != 0x8000000000000000 {
        v100 = v0;
    }
    v36 = v100;
    memcpy(&v100, &v1, 360);
    memcpy(&v100, &v29, 220);
    v148 = v48;
    v149 = v49;
    v129 = v29;
    v147 = &g_1;
    v0 = struct32 {
        field_0: &g_41ab68
        field_8: &g_1
        field_16: 0
        field_24: &g_1
    };
    v1 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v0);
    v129 = v3;
    v127 = v1;
    memcpy(&v1, &v100, 360);
    memcpy(&v29, &v100, 220);
    v48 = v148;
    v49 = v149;
    v29 = v129;
    v47 = &g_1;
    v100 = clap_builder::builder::command::Command::arg(&v51, &v1);
    v9 = 0;
    v11 = 0;
    v13 = 0;
    v15 = 0;
    v17 = 0;
    v19 = 0;
    v21 = 0;
    v23 = 0;
    v25 = 0;
    v27 = 0;
    v29 = 0;
    v31 = 0;
    v33 = 0;
    v1 = 0;
    v3 = 0;
    v4 = 0;
    v5 = 0;
    v6 = &g_1;
    v7 = 0;
    v8 = &g_1;
    v10 = &g_1;
    v12 = &g_1;
    v14 = &g_1;
    v16 = &g_1;
    v18 = &g_1;
    v20 = &g_1;
    v22 = &g_1;
    v24 = &g_1;
    v26 = &g_1;
    v28 = &g_1;
    v30 = &g_1;
    v32 = &g_1;
    v34 = &g_1;
    v35 = 0;
    v36 = 0x8000000000000000;
    v38 = 0x8000000000000000;
    v39 = v167;
    v40 = &g_41ab72;
    v41 = &g_1;
    v42 = &g_41ab72;
    v43 = &g_1;
    v44 = 0;
    v45 = 4785074604081254;
    v46 = 0;
    v47 = 3337;
    v51 = 0;
    v52 = &g_1;
    v53 = 0;
    v51 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, 42);
    v176 = v52;
    v177 = v53;
    *((v176 + v177 + &g_1a as &u8) as &i128) = 134768386462153297381301995116316420212;
    *((v176 + v177 + &g_1 as &u8) as &i128) = 146760927777965463265514475375133879669;
    *((v176 + v177) as &i128) = 144134979020999785986143613342314162534;
    v53 = v177 + 42;
    v0 = *((&v51 as &char + 8) as &i128);
    if v36 != 0x8000000000000000 {
        v51 = v0;
    }
    v36 = v51;
    memcpy(&v51, &v1, 360);
    memcpy(&v51, &v29, 216);
    v179 = v47;
    v80 = v29;
    v96 = &g_1a;
    v97 = v179;
    v0 = struct32 {
        field_0: &g_41188c
        field_8: &g_1
        field_16: 0
        field_24: &g_1
    };
    v1 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v0);
    v180 = (v179 >> &g_1) as u64;
    v80 = v3;
    v78 = v1;
    memcpy(&v1, &v51, 360);
    memcpy(&v29, &v51, 216);
    v29 = v80;
    v46 = &g_1a;
    v47 = &g_1;
    v49 = ((v180 & 4294967295 & 4294967295) >> &g_1 & 4294967295) as u8;
    v48 = v180;
    v51 = clap_builder::builder::command::Command::arg(&v100, &v1);
    v108 = 0;
    v110 = 0;
    v112 = 0;
    v114 = 0;
    v116 = 0;
    v118 = 0;
    v120 = 0;
    v122 = 0;
    v124 = 0;
    v126 = 0;
    v129 = 0;
    v131 = 0;
    v133 = 0;
    v100 = 0;
    v102 = 0;
    v103 = 0;
    v104 = 0;
    v105 = &g_1;
    v106 = 0;
    v107 = &g_1;
    v109 = &g_1;
    v111 = &g_1;
    v113 = &g_1;
    v115 = &g_1;
    v117 = &g_1;
    v119 = &g_1;
    v121 = &g_1;
    v123 = &g_1;
    v125 = &g_1;
    v128 = &g_1;
    v130 = &g_1;
    v132 = &g_1;
    v134 = &g_1;
    v135 = 0;
    v136 = 0x8000000000000000;
    v137 = 0x8000000000000000;
    v182 = v50;
    v139 = v182;
    v140 = &g_41aba2;
    v141 = &g_1;
    v142 = &g_41aba2;
    v143 = &g_1;
    v144 = 0;
    v145 = 0x11000000110000;
    v146 = 0;
    v147 = 3337;
    v1 = 0;
    v2 = &g_1;
    v3 = 0;
    v1 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_5e);
    v183 = v2;
    v184 = v3;
    *((v183 + v184 + &g_4c as &u8) as &i128) = 145495549598245819129759259094232162848;
    *((v183 + v184 + &g_31 as &u8) as &i128) = 144119361572090894408799528789675830893;
    *((v183 + v184 + &g_2c as &u8) as &i128) = 156082702768635904726711886210888918376;
    *((v183 + v184 + &g_1a as &u8) as &i128) = 154359063772904644003647649090121003881;
    *((v183 + v184 + &g_1 as &u8) as &i128) = 133091030688095186165524064259005030514;
    *((v183 + v184) as &i128) = 134856532860667437060204119073567960681;
    *((v183 + v184 + &g_5e as &u8) as &i16) = 29550;
    v3 = v184 + &g_5e as &u8;
    v0 = *((&v1 as &char + 8) as &i128);
    if v136 != 0x8000000000000000 {
        v1 = v0;
    }
    v136 = v1;
    memcpy(&v1, &v100, 588);
    v48 = v148;
    v49 = v149;
    v47 = &g_1;
    v100 = clap_builder::builder::command::Command::arg(&v51, &v1);
    v59 = 0;
    v61 = 0;
    v63 = 0;
    v65 = 0;
    v67 = 0;
    v69 = 0;
    v71 = 0;
    v73 = 0;
    v75 = 0;
    v77 = 0;
    v80 = 0;
    v82 = 0;
    v84 = 0;
    v51 = 0;
    v53 = 0;
    v54 = 0;
    v55 = 0;
    v56 = &g_1;
    v57 = 0;
    v58 = &g_1;
    v60 = &g_1;
    v62 = &g_1;
    v64 = &g_1;
    v66 = &g_1;
    v68 = &g_1;
    v70 = &g_1;
    v72 = &g_1;
    v74 = &g_1;
    v76 = &g_1;
    v79 = &g_1;
    v81 = &g_1;
    v83 = &g_1;
    v85 = &g_1;
    v86 = 0;
    v87 = 0x8000000000000000;
    v88 = 0x8000000000000000;
    v89 = v182;
    v90 = &g_41ac0e;
    v91 = &g_1;
    v92 = &g_41ac0e;
    v93 = &g_1;
    v94 = 0;
    v95 = 4785074604081267;
    v96 = 0;
    v97 = 3337;
    v1 = 0;
    v2 = &g_1;
    v3 = 0;
    v1 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_31);
    v185 = v2;
    v186 = v3;
    *((v185 + v186 + 43) as &i128) = 152058774614524829860542538227514371689;
    *((v185 + v186 + &g_1a as &u8) as &i128) = 138842675782040225876860180271785928823;
    *((v185 + v186 + &g_1 as &u8) as &i128) = 43134467274943301781258179557604289646;
    *((v185 + v186) as &i128) = 147711361490748958074222754266190212713;
    v3 = v186 + &g_31 as &u8;
    v0 = *((&v1 as &char + 8) as &i128);
    if v87 != 0x8000000000000000 {
        v1 = v0;
    }
    v87 = v1;
    memcpy(&v1, &v51, 588);
    v48 = *((&v51 as &char + 589) as &i16);
    v49 = *((&v51 as &char + 591) as &i8);
    v47 = &g_1;
    v51 = clap_builder::builder::command::Command::arg(&v100, &v1);
    v108 = 0;
    v110 = 0;
    v112 = 0;
    v114 = 0;
    v116 = 0;
    v118 = 0;
    v120 = 0;
    v122 = 0;
    v124 = 0;
    v126 = 0;
    v129 = 0;
    v131 = 0;
    v133 = 0;
    v100 = 0;
    v102 = 0;
    v103 = 0;
    v104 = 0;
    v105 = &g_1;
    v106 = 0;
    v107 = &g_1;
    v109 = &g_1;
    v111 = &g_1;
    v113 = &g_1;
    v115 = &g_1;
    v117 = &g_1;
    v119 = &g_1;
    v121 = &g_1;
    v123 = &g_1;
    v125 = &g_1;
    v128 = &g_1;
    v130 = &g_1;
    v132 = &g_1;
    v134 = &g_1;
    v135 = 0;
    v136 = 0x8000000000000000;
    v137 = 0x8000000000000000;
    v139 = v182;
    v140 = &g_41ac57;
    v141 = &g_1;
    v142 = &g_41ac57;
    v143 = &g_1;
    v144 = 0;
    v145 = 4785074604081274;
    v146 = 0;
    v147 = 3337;
    v1 = 0;
    v2 = &g_1;
    v3 = 0;
    v1 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_4c);
    v187 = v2;
    v188 = v3;
    *((v187 + v188 + &g_31 as &u8) as &i128) = 129477124981889565668468613079276351264;
    *((v187 + v188 + &g_2c as &u8) as &i128) = 133449561753808550404495979198885687909;
    *((v187 + v188 + &g_1a as &u8) as &i128) = 154753353316010154567179047754191103077;
    *((v187 + v188 + &g_1 as &u8) as &i128) = 153366862557709836857707174297456241010;
    *((v187 + v188) as &i128) = 134856532860667441905664091912106372713;
    *((v187 + v188 + &g_4c as &u8) as &i64) = 2986561053458002529;
    v3 = v188 + &g_4c as &u8;
    v0 = *((&v1 as &char + 8) as &i128);
    if v136 != 0x8000000000000000 {
        v1 = v0;
    }
    v136 = v1;
    memcpy(&v1, &v100, 588);
    v48 = v148;
    v49 = v149;
    v47 = &g_1;
    v100 = clap_builder::builder::command::Command::arg(&v51, &v1);
    v59 = 0;
    v61 = 0;
    v63 = 0;
    v65 = 0;
    v67 = 0;
    v69 = 0;
    v71 = 0;
    v73 = 0;
    v75 = 0;
    v77 = 0;
    v80 = 0;
    v82 = 0;
    v84 = 0;
    v51 = 0;
    v53 = 0;
    v54 = 0;
    v55 = 0;
    v56 = &g_1;
    v57 = 0;
    v58 = &g_1;
    v60 = &g_1;
    v62 = &g_1;
    v64 = &g_1;
    v66 = &g_1;
    v68 = &g_1;
    v70 = &g_1;
    v72 = &g_1;
    v74 = &g_1;
    v76 = &g_1;
    v79 = &g_1;
    v81 = &g_1;
    v83 = &g_1;
    v85 = &g_1;
    v86 = 0;
    v87 = 0x8000000000000000;
    v88 = 0x8000000000000000;
    v89 = v182;
    v90 = &g_411470;
    v91 = &g_1;
    v92 = &g_411470;
    v93 = &g_1;
    v94 = 0;
    v95 = 0x11000000110000;
    v96 = 0;
    v97 = 3337;
    v1 = clap_builder::builder::arg::Arg::value_parser(&v51, &v152);
    v51 = 0;
    v52 = &g_1;
    v53 = 0;
    v51 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_4c);
    v189 = v52;
    v190 = v53;
    *((v189 + v190 + &g_31 as &u8) as &i128) = 154763657361063560819474748079384130672;
    *((v189 + v190 + &g_2c as &u8) as &i128) = 147712801859987089775362147217962266217;
    *((v189 + v190 + &g_1a as &u8) as &i128) = 143725139108256177582290768175026238569;
    *((v189 + v190 + &g_1 as &u8) as &i128) = 145433241243971260862820683027397242981;
    *((v189 + v190) as &i128) = 151699045478103705692934175447031246441;
    v53 = v190 + &g_4c as &u8;
    v191 = v51;
    v0 = *((&v51 as &char + 8) as &i128);
    if v191 != 0x8000000000000000 {
        v51 = v0;
    }
    v36 = v191;
    v37 = v51;
    memcpy(&v51, &v1, 360);
    memcpy(&v80, &v1, 224);
    v80 = *((&v1 as &char + 360) as &i64);
    v0 = struct32 {
        field_0: &g_41ad0d
        field_8: &g_1
        field_16: 0
        field_24: &g_1
    };
    v1 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v0);
    v80 = v3;
    v78 = v1;
    memcpy(&v1, &v51, 592);
    v51 = clap_builder::builder::command::Command::arg(&v100, &v1);
    v108 = 0;
    v110 = 0;
    v112 = 0;
    v114 = 0;
    v116 = 0;
    v118 = 0;
    v120 = 0;
    v122 = 0;
    v124 = 0;
    v126 = 0;
    v129 = 0;
    v131 = 0;
    v133 = 0;
    v100 = 0;
    v102 = 0;
    v103 = 0;
    v104 = 0;
    v105 = &g_1;
    v106 = 0;
    v107 = &g_1;
    v109 = &g_1;
    v111 = &g_1;
    v113 = &g_1;
    v115 = &g_1;
    v117 = &g_1;
    v119 = &g_1;
    v121 = &g_1;
    v123 = &g_1;
    v125 = &g_1;
    v128 = &g_1;
    v130 = &g_1;
    v132 = &g_1;
    v134 = &g_1;
    v135 = 0;
    v136 = 0x8000000000000000;
    v137 = 0x8000000000000000;
    v139 = v182;
    v140 = &g_4118ec;
    v141 = &g_1;
    v142 = 0;
    v144 = 0;
    v145 = 0x301000000040011000000110000;
    clap_builder::builder::command::Command::arg(a0, &v51, &v100);
    return a0;
}
