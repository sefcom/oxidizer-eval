fn uu_tac::uu_app(a0: u32) -> u64 {
    let v0: i128;  // [bp-0x848], Other Possible Types: struct32
    let v1: i192;  // [sp-0x818], Other Possible Types: struct24, Enum
    let v2: i64;  // [sp-0x810]
    let v3: i64;  // [sp-0x808]
    let v4: i64;  // [sp-0x7f0]
    let v5: i64;  // [sp-0x7e0]
    let v6: i64;  // [sp-0x7c8]
    let v7: i64;  // [sp-0x7b0]
    let v8: i64;  // [sp-0x7a8]
    let v9: i128;  // [sp-0x7a0]
    let v10: i64;  // [sp-0x790]
    let v11: i128;  // [sp-0x788]
    let v12: i64;  // [sp-0x778]
    let v13: i128;  // [sp-0x770]
    let v14: i64;  // [sp-0x760]
    let v15: i128;  // [sp-0x758]
    let v16: i64;  // [sp-0x748]
    let v17: i128;  // [sp-0x740]
    let v18: i64;  // [sp-0x730]
    let v19: i128;  // [sp-0x728]
    let v20: i64;  // [sp-0x718]
    let v21: i128;  // [sp-0x710]
    let v22: i64;  // [sp-0x700]
    let v23: i128;  // [sp-0x6f8]
    let v24: i64;  // [sp-0x6e8]
    let v25: i128;  // [sp-0x6e0]
    let v26: i64;  // [sp-0x6d0]
    let v27: i128;  // [sp-0x6c8]
    let v28: i64;  // [sp-0x6b8]
    let v29: i128;  // [sp-0x6b0]
    let v30: i64;  // [sp-0x6a0]
    let v31: i128;  // [sp-0x698]
    let v32: i64;  // [sp-0x688]
    let v33: i128;  // [sp-0x680]
    let v34: i64;  // [sp-0x670]
    let v35: i64;  // [sp-0x668]
    let v36: i192;  // [sp-0x660]
    let v37: i64;  // [sp-0x648]
    let v38: i64;  // [sp-0x620]
    let v39: i64;  // [sp-0x608]
    let v40: i64;  // [sp-0x600]
    let v41: i64;  // [sp-0x5f8]
    let v42: i64;  // [sp-0x5f0]
    let v43: i64;  // [sp-0x5e8]
    let v44: i64;  // [sp-0x5d8]
    let v45: i32;  // [sp-0x5d0]
    let v46: i16;  // [sp-0x5cc]
    let v47: i16;  // [sp-0x5cb]
    let v48: i8;  // [sp-0x5c9]
    let v49: i64;  // [sp-0x5c8], Other Possible Types: Enum, struct712
    let v50: i64;  // [sp-0x5b8]
    let v51: i64;  // [sp-0x5a0]
    let v52: i64;  // [sp-0x590]
    let v53: i64;  // [sp-0x578]
    let v54: i64;  // [sp-0x560]
    let v55: i64;  // [sp-0x558]
    let v56: i128;  // [sp-0x550]
    let v57: i64;  // [sp-0x540]
    let v58: i128;  // [sp-0x538]
    let v59: i64;  // [sp-0x528]
    let v60: i128;  // [sp-0x520]
    let v61: i64;  // [sp-0x510]
    let v62: i128;  // [sp-0x508]
    let v63: i64;  // [sp-0x4f8]
    let v64: i128;  // [sp-0x4f0]
    let v65: i64;  // [sp-0x4e0]
    let v66: i128;  // [sp-0x4d8]
    let v67: i64;  // [sp-0x4c8]
    let v68: i128;  // [sp-0x4c0]
    let v69: i64;  // [sp-0x4b0]
    let v70: i128;  // [sp-0x4a8]
    let v71: i64;  // [sp-0x498]
    let v72: i128;  // [sp-0x490]
    let v73: i64;  // [sp-0x480]
    let v74: i128;  // [sp-0x478]
    let v75: i64;  // [sp-0x468]
    let v76: i128;  // [sp-0x460]
    let v77: i64;  // [sp-0x450]
    let v78: i128;  // [sp-0x448]
    let v79: i64;  // [sp-0x438]
    let v80: i128;  // [sp-0x430]
    let v81: i64;  // [sp-0x420]
    let v82: i64;  // [sp-0x418]
    let v83: i64;  // [sp-0x410]
    let v84: i64;  // [sp-0x3f8]
    let v85: i64;  // [sp-0x3d0]
    let v86: i64;  // [sp-0x3b8]
    let v87: i64;  // [sp-0x3b0]
    let v88: i64;  // [sp-0x3a8]
    let v89: i64;  // [sp-0x3a0]
    let v90: i64;  // [sp-0x398]
    let v91: i64;  // [sp-0x388]
    let v92: i32;  // [sp-0x380]
    let v93: i16;  // [sp-0x37c]
    let v94: i8;  // [bp-0x379]
    let v95: i64;  // [sp-0x368]
    let v96: i64;  // [sp-0x360]
    let v97: i64;  // [sp-0x30c]
    let v98: i32;  // [sp-0x304]
    let v99: i128;  // [bp-0x2f8], Other Possible Types: struct712, Enum
    let v100: i64;  // [sp-0x2f0]
    let v101: i64;  // [sp-0x2e8]
    let v102: i64;  // [sp-0x2d0]
    let v103: i64;  // [sp-0x2c0]
    let v104: i64;  // [sp-0x2a8]
    let v105: i64;  // [sp-0x290]
    let v106: i64;  // [sp-0x288]
    let v107: i128;  // [sp-0x280]
    let v108: i64;  // [sp-0x270]
    let v109: i128;  // [sp-0x268]
    let v110: i64;  // [sp-0x258]
    let v111: i128;  // [sp-0x250]
    let v112: i64;  // [sp-0x240]
    let v113: i128;  // [sp-0x238]
    let v114: i64;  // [sp-0x228]
    let v115: i128;  // [sp-0x220]
    let v116: i64;  // [sp-0x210]
    let v117: i128;  // [sp-0x208]
    let v118: i64;  // [sp-0x1f8]
    let v119: i128;  // [sp-0x1f0]
    let v120: i64;  // [sp-0x1e0]
    let v121: i128;  // [sp-0x1d8]
    let v122: i64;  // [sp-0x1c8]
    let v123: i128;  // [sp-0x1c0]
    let v124: i64;  // [sp-0x1b0]
    let v125: i128;  // [bp-0x1a8]
    let v126: i128;  // [bp-0x1a0]
    let v127: i64;  // [sp-0x198]
    let v128: i128;  // [bp-0x190]
    let v129: i64;  // [sp-0x180]
    let v130: i128;  // [sp-0x178]
    let v131: i64;  // [sp-0x168]
    let v132: i128;  // [sp-0x160]
    let v133: i64;  // [sp-0x150]
    let v134: i64;  // [sp-0x148]
    let v135: i192;  // [sp-0x140]
    let v136: i64;  // [sp-0x128]
    let v137: i128;  // [sp-0x120]
    let v138: i64;  // [sp-0x100]
    let v139: i64;  // [sp-0xe8]
    let v140: i64;  // [sp-0xe0]
    let v141: i64;  // [sp-0xd8]
    let v142: i64;  // [sp-0xd0]
    let v143: i64;  // [sp-0xc8]
    let v144: i64;  // [sp-0xb8]
    let v145: i32;  // [sp-0xb0]
    let v146: i16;  // [sp-0xac]
    let v148: i64;  // rbx
    let v149: i64;  // rax
    let v150: i64;  // rcx
    let v151: i64;  // rax
    let v152: i64;  // rcx
    let v153: i64;  // rcx
    let v154: i64;  // rsi

    if _ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 != 2 {
        once_cell::imp::OnceCell<T>::initialize(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
    }
    v49 = clap_builder::builder::command::Command::new(g_69ce90, g_69ce98);
    v95 = &g_46438d;
    v96 = &g_1;
    memcpy(&v99, &v49, 712);
    v1 = uucore::format_usage(&g_464341, &g_11);
    v148 = v1;
    if v148 != 0x8000000000000000 {
        v49 = *((&v1 as &char + 8) as &i128);
    }
    v136 = v148;
    v137 = v49;
    memcpy(&v49, &v99, 712);
    v99 = clap_builder::builder::command::Command::about(&v49, &g_464359, 52);
    memcpy(&v49, &v99, 700);
    v97 = 549755814016 | *((&v99 as &char + 700) as &i64);
    v98 = *((&v99 as &char + 708) as &i32);
    v107 = 0;
    v109 = 0;
    v111 = 0;
    v113 = 0;
    v115 = 0;
    v117 = 0;
    v119 = 0;
    v121 = 0;
    v123 = 0;
    v125 = 0;
    v128 = 0;
    v130 = 0;
    v132 = 0;
    v99 = 0;
    v101 = 0;
    v102 = 0;
    v103 = 0;
    v104 = &g_1;
    v105 = 0;
    v106 = &g_1;
    v108 = &g_1;
    v110 = &g_1;
    v112 = &g_1;
    v114 = &g_1;
    v116 = &g_1;
    v118 = &g_1;
    v120 = &g_1;
    v122 = &g_1;
    v124 = &g_1;
    v127 = &g_1;
    v129 = &g_1;
    v131 = &g_1;
    v133 = &g_1;
    v134 = 0;
    v135 = 0x8000000000000000;
    v136 = 0x8000000000000000;
    v138 = 9223372036854775809;
    v139 = &anon.8dbe3744b211a940d537979c519aa4d5.22.llvm.5607699944319050003;
    v140 = &g_1;
    v141 = &anon.8dbe3744b211a940d537979c519aa4d5.22.llvm.5607699944319050003;
    v142 = &g_1;
    v143 = 0;
    v144 = 4785074604081250;
    v145 = 0;
    v146 = 3337;
    v1 = 0;
    v2 = &g_1;
    v3 = 0;
    v1 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_1d);
    v149 = v2;
    v150 = v3;
    *((v149 + v150 + &g_11 as &u8) as &i128) = 152058774373038242460449279704567082601;
    *((v149 + v150 + &g_1 as &u8) as &i128) = 154789801043821374342434878113304245345;
    *((v149 + v150) as &i128) = 152037923982308251360313349476577473633;
    v3 = v150 + &g_1d as &u8;
    v0 = *((&v1 as &char + 8) as &i128);
    if v135 != 0x8000000000000000 {
        v1 = v0;
    }
    v135 = v1;
    memcpy(&v1, &v99, 588);
    v47 = *((&v99 as &char + 589) as &i16);
    v48 = *((&v99 as &char + 591) as &i8);
    v46 = &g_1;
    v99 = clap_builder::builder::command::Command::arg(&v49, &v1);
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
    v76 = 0;
    v78 = 0;
    v80 = 0;
    v49 = 0;
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
    v75 = &g_1;
    v77 = &g_1;
    v79 = &g_1;
    v81 = &g_1;
    v82 = 0;
    v83 = 0x8000000000000000;
    v84 = 0x8000000000000000;
    v85 = 9223372036854775809;
    v86 = &anon.8dbe3744b211a940d537979c519aa4d5.23.llvm.5607699944319050003;
    v87 = &g_1;
    v88 = &anon.8dbe3744b211a940d537979c519aa4d5.23.llvm.5607699944319050003;
    v89 = &g_1;
    v90 = 0;
    v91 = 4785074604081266;
    v92 = 0;
    v93 = 3337;
    v1 = 0;
    v2 = &g_1;
    v3 = 0;
    v1 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, 46);
    v151 = v2;
    v152 = v3;
    *((v151 + v152 + &g_1d as &u8) as &i128) = 146793563287598602513704519220171928935;
    *((v151 + v152 + &g_1 as &u8) as &i128) = 156056539648665679183218758344147039601;
    *((v151 + v152) as &i128) = 134849798784486568814072160718559669865;
    v3 = v152 + 46;
    v0 = *((&v1 as &char + 8) as &i128);
    if v83 != 0x8000000000000000 {
        v1 = v0;
    }
    v83 = v1;
    memcpy(&v1, &v49, 588);
    v47 = v93;
    v48 = v94;
    v46 = &g_1;
    v49 = clap_builder::builder::command::Command::arg(&v99, &v1);
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
    v37 = 0x8000000000000000;
    v38 = 9223372036854775809;
    v39 = &anon.8dbe3744b211a940d537979c519aa4d5.24.llvm.5607699944319050003;
    v40 = &g_1;
    v41 = &anon.8dbe3744b211a940d537979c519aa4d5.24.llvm.5607699944319050003;
    v42 = &g_1;
    v43 = 0;
    v44 = 4785074604081267;
    v45 = 0;
    v46 = 3337;
    v99 = 0;
    v100 = &g_1;
    v101 = 0;
    v99 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, 46);
    v153 = v100;
    v154 = v101;
    *((v153 + v154 + &g_1d as &u8) as &i128) = 134825318475316606902877062923020498035;
    *((v153 + v154 + &g_1 as &u8) as &i128) = 154789801043837076302867510500563034213;
    *((v153 + v154) as &i128) = 138842676175626365091805700735851918197;
    v101 = v154 + 46;
    v0 = *((&v99 as &char + 8) as &i128);
    if v36 != 0x8000000000000000 {
        v99 = v0;
    }
    v36 = v99;
    memcpy(&v99, &v1, 360);
    memcpy(&v99, &v29, 224);
    v128 = v29;
    v0 = struct32 {
        field_0: &g_46441b
        field_8: &g_1
        field_16: 0
        field_24: &g_1
    };
    v1 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v0);
    v128 = v3;
    v126 = v1;
    memcpy(&v1, &v99, 592);
    v99 = clap_builder::builder::command::Command::arg(&v49, &v1);
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
    v76 = 0;
    v78 = 0;
    v80 = 0;
    v49 = 0;
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
    v75 = &g_1;
    v77 = &g_1;
    v79 = &g_1;
    v81 = &g_1;
    v82 = 0;
    v83 = 0x8000000000000000;
    v84 = 0x8000000000000000;
    v85 = 9223372036854775809;
    v86 = &anon.8dbe3744b211a940d537979c519aa4d5.25.llvm.5607699944319050003;
    v87 = &g_1;
    v88 = 0;
    v90 = 0;
    v91 = 0x301000000040011000000110000;
    clap_builder::builder::command::Command::arg(a0, &v99, &v49);
    return a0;
}
