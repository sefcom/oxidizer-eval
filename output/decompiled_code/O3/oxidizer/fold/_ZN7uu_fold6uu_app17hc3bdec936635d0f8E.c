fn uu_fold::uu_app(a0: i64) -> u64 {
    let v0: i64;  // [sp-0x840]
    let v1: i128;  // [bp-0x838], Other Possible Types: struct32
    let v2: i64;  // [sp-0x818], Other Possible Types: struct24, Enum
    let v3: i64;  // [sp-0x810]
    let v4: i64;  // [sp-0x808]
    let v5: i64;  // [sp-0x7f0]
    let v6: i64;  // [sp-0x7e0]
    let v7: i64;  // [sp-0x7c8]
    let v8: i64;  // [sp-0x7b0]
    let v9: i64;  // [sp-0x7a8]
    let v10: i128;  // [sp-0x7a0]
    let v11: i64;  // [sp-0x790]
    let v12: i128;  // [sp-0x788]
    let v13: i64;  // [sp-0x778]
    let v14: i128;  // [sp-0x770]
    let v15: i64;  // [sp-0x760]
    let v16: i128;  // [sp-0x758]
    let v17: i64;  // [sp-0x748]
    let v18: i128;  // [sp-0x740]
    let v19: i64;  // [sp-0x730]
    let v20: i128;  // [sp-0x728]
    let v21: i64;  // [sp-0x718]
    let v22: i128;  // [sp-0x710]
    let v23: i64;  // [sp-0x700]
    let v24: i128;  // [sp-0x6f8]
    let v25: i64;  // [sp-0x6e8]
    let v26: i128;  // [sp-0x6e0]
    let v27: i64;  // [sp-0x6d0]
    let v28: i128;  // [sp-0x6c8]
    let v29: i64;  // [sp-0x6b8]
    let v30: i64;  // [bp-0x6b0]
    let v31: i64;  // [sp-0x6a0]
    let v32: i128;  // [sp-0x698]
    let v33: i64;  // [sp-0x688]
    let v34: i128;  // [sp-0x680]
    let v35: i64;  // [sp-0x670]
    let v36: i64;  // [sp-0x668]
    let v37: i192;  // [sp-0x660]
    let v38: i64;  // [sp-0x648]
    let v39: i64;  // [sp-0x620]
    let v40: i64;  // [sp-0x608]
    let v41: i64;  // [sp-0x600]
    let v42: i64;  // [sp-0x5f8]
    let v43: i64;  // [sp-0x5f0]
    let v44: i64;  // [sp-0x5e8]
    let v45: i32;  // [sp-0x5d8]
    let v46: i64;  // [bp-0x5d4]
    let v47: i32;  // [sp-0x5d0]
    let v48: i16;  // [sp-0x5cc]
    let v49: i16;  // [sp-0x5cb]
    let v50: i8;  // [sp-0x5c9]
    let v51: i128;  // [sp-0x5c8], Other Possible Types: Enum, struct712
    let v52: i64;  // [sp-0x5b8]
    let v53: i64;  // [sp-0x5a0]
    let v54: i64;  // [sp-0x590]
    let v55: i64;  // [sp-0x578]
    let v56: i64;  // [sp-0x560]
    let v57: i64;  // [sp-0x558]
    let v58: i128;  // [sp-0x550]
    let v59: i64;  // [sp-0x540]
    let v60: i128;  // [sp-0x538]
    let v61: i64;  // [sp-0x528]
    let v62: i128;  // [sp-0x520]
    let v63: i64;  // [sp-0x510]
    let v64: i128;  // [sp-0x508]
    let v65: i64;  // [sp-0x4f8]
    let v66: i128;  // [sp-0x4f0]
    let v67: i64;  // [sp-0x4e0]
    let v68: i128;  // [sp-0x4d8]
    let v69: i64;  // [sp-0x4c8]
    let v70: i128;  // [sp-0x4c0]
    let v71: i64;  // [sp-0x4b0]
    let v72: i128;  // [sp-0x4a8]
    let v73: i64;  // [sp-0x498]
    let v74: i128;  // [sp-0x490]
    let v75: i64;  // [sp-0x480]
    let v76: i128;  // [sp-0x478]
    let v77: i64;  // [sp-0x468]
    let v78: i128;  // [sp-0x460]
    let v79: i64;  // [sp-0x450]
    let v80: i128;  // [sp-0x448]
    let v81: i64;  // [sp-0x438]
    let v82: i128;  // [sp-0x430]
    let v83: i64;  // [sp-0x420]
    let v84: i64;  // [sp-0x418]
    let v85: i64;  // [sp-0x410]
    let v86: i64;  // [sp-0x3f8]
    let v87: i64;  // [sp-0x3d0]
    let v88: i64;  // [sp-0x3b8]
    let v89: i64;  // [sp-0x3b0]
    let v90: i64;  // [sp-0x3a8]
    let v91: i64;  // [sp-0x3a0]
    let v92: i64;  // [sp-0x398]
    let v93: i32;  // [sp-0x388]
    let v94: i64;  // [sp-0x384]
    let v95: i16;  // [sp-0x37c]
    let v96: i8;  // [bp-0x379]
    let v97: i64;  // [sp-0x368]
    let v98: i64;  // [sp-0x360]
    let v99: i64;  // [sp-0x30c]
    let v100: i32;  // [sp-0x304]
    let v101: i5696;  // [bp-0x2f8], Other Possible Types: struct712, Enum
    let v102: i64;  // [sp-0x2f0]
    let v103: i64;  // [sp-0x2e8]
    let v104: i64;  // [sp-0x2d0]
    let v105: i64;  // [sp-0x2c0]
    let v106: i64;  // [sp-0x2a8]
    let v107: i64;  // [sp-0x290]
    let v108: i64;  // [sp-0x288]
    let v109: i128;  // [sp-0x280]
    let v110: i64;  // [sp-0x270]
    let v111: i128;  // [sp-0x268]
    let v112: i64;  // [sp-0x258]
    let v113: i128;  // [sp-0x250]
    let v114: i64;  // [sp-0x240]
    let v115: i128;  // [sp-0x238]
    let v116: i64;  // [sp-0x228]
    let v117: i128;  // [sp-0x220]
    let v118: i64;  // [sp-0x210]
    let v119: i128;  // [sp-0x208]
    let v120: i64;  // [sp-0x1f8]
    let v121: i128;  // [sp-0x1f0]
    let v122: i64;  // [sp-0x1e0]
    let v123: i128;  // [sp-0x1d8]
    let v124: i64;  // [sp-0x1c8]
    let v125: i128;  // [sp-0x1c0]
    let v126: i64;  // [sp-0x1b0]
    let v127: i128;  // [bp-0x1a8]
    let v128: i128;  // [bp-0x1a0]
    let v129: i64;  // [sp-0x198]
    let v130: i64;  // [bp-0x190]
    let v131: i64;  // [sp-0x180]
    let v132: i128;  // [sp-0x178]
    let v133: i64;  // [sp-0x168]
    let v134: i128;  // [sp-0x160]
    let v135: i64;  // [sp-0x150]
    let v136: i64;  // [sp-0x148]
    let v137: i64;  // [sp-0x140]
    let v138: i64;  // [sp-0x128]
    let v139: i128;  // [sp-0x120]
    let v140: i64;  // [sp-0x100]
    let v141: i64;  // [sp-0xe8]
    let v142: i64;  // [sp-0xe0]
    let v143: i64;  // [sp-0xd8]
    let v144: i64;  // [sp-0xd0]
    let v145: i64;  // [sp-0xc8]
    let v146: i32;  // [sp-0xb8]
    let v147: i64;  // [bp-0xb4]
    let v148: i32;  // [sp-0xb0]
    let v149: i32;  // [bp-0xac]
    let v151: i64;  // rbx
    let v152: i64;  // rax
    let v153: i64;  // rcx
    let v154: i64;  // rax
    let v155: i64;  // rcx
    let v156: i64;  // rcx
    let v157: i64;  // rsi
    let v159: i32;  // ebx

    if _ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 != 2 {
        once_cell::imp::OnceCell<T>::initialize(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
    }
    v51 = clap_builder::builder::command::Command::new(g_4e8a88, g_4e8a90);
    v97 = &g_418ed4;
    v98 = &g_1;
    memcpy(&v101, &v51, 712);
    v2 = uucore::format_usage(&g_418eda, &g_11);
    v151 = v2;
    if v151 != 0x8000000000000000 {
        v51 = *((&v2 as &char + 8) as &i128);
    }
    v138 = v151;
    v139 = v51;
    memcpy(&v51, &v101, 712);
    v101 = clap_builder::builder::command::Command::about(&v51, &g_418ef2, &g_5d);
    memcpy(&v51, &v101, 700);
    v99 = 549755814016 | *((&v101 as &char + 700) as &i64);
    v100 = *((&v101 as &char + 708) as &i32);
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
    v101 = 0;
    v103 = 0;
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
    v0 = 9223372036854775809;
    v140 = 9223372036854775809;
    v141 = &g_418f5a;
    v142 = &g_1;
    v143 = &g_418f5a;
    v144 = &g_1;
    v145 = 0;
    v147 = 0x110000;
    v149 = 3337;
    v146 = &g_5d;
    v2 = 0;
    v3 = &g_1;
    v4 = 0;
    v2 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_5d);
    v152 = v3;
    v153 = v4;
    *((v152 + v153 + &g_51 as &u8) as &i128) = 55128814834090463402298344972544663909;
    *((v152 + v153 + &g_41 as &u8) as &i128) = 134856309441064191099211060497394770021;
    *((v152 + v153 + &g_31 as &u8) as &i128) = 146762470666266557574491628733256114291;
    *((v152 + v153 + &g_21 as &u8) as &i128) = 152058774135452863098713774291737144943;
    *((v152 + v153 + &g_11 as &u8) as &i128) = 131761822918096206404655080361924851052;
    *((v152 + v153 + &g_1 as &u8) as &i128) = 148059002703472125881039130309642297459;
    *((v152 + v153) as &i128) = 134856795955817072497464616422959574883;
    v4 = v153 + &g_5d as &u8;
    v1 = *((&v2 as &char + 8) as &i128);
    if v137 != 0x8000000000000000 {
        v2 = v1;
    }
    v137 = v2;
    memcpy(&v2, &v101, 588);
    v49 = *((&v101 as &char + 589) as &i16);
    v50 = *((&v101 as &char + 591) as &i8);
    v48 = &g_1;
    v101 = clap_builder::builder::command::Command::arg(&v51, &v2);
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
    v83 = &g_1;
    v84 = 0;
    v85 = 0x8000000000000000;
    v86 = 0x8000000000000000;
    v87 = v0;
    v88 = &g_418fcb;
    v89 = &g_1;
    v90 = &g_418fcb;
    v91 = &g_1;
    v92 = 0;
    v94 = 0x110000;
    v95 = 3337;
    v93 = 115;
    v2 = 0;
    v3 = &g_1;
    v4 = 0;
    v2 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_31);
    v154 = v3;
    v155 = v4;
    *((v154 + v155 + &g_21 as &u8) as &i128) = 136113124798407463503597189318628679790;
    *((v154 + v155 + &g_11 as &u8) as &i128) = 152037756250717520857256463687070807137;
    *((v154 + v155 + &g_1 as &u8) as &i128) = 151700485530736561374803767688578757231;
    *((v154 + v155) as &i128) = 158346645452566916616367765324344685154;
    v4 = v155 + &g_31 as &u8;
    v1 = *((&v2 as &char + 8) as &i128);
    if v85 != 0x8000000000000000 {
        v2 = v1;
    }
    v85 = v2;
    memcpy(&v2, &v51, 588);
    v49 = v95;
    v50 = v96;
    v48 = &g_1;
    v51 = clap_builder::builder::command::Command::arg(&v101, &v2);
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
    v34 = 0;
    v2 = 0;
    v4 = 0;
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
    v29 = &g_1;
    v31 = &g_1;
    v33 = &g_1;
    v35 = &g_1;
    v36 = 0;
    v37 = 0x8000000000000000;
    v38 = 0x8000000000000000;
    v39 = v0;
    v40 = &g_41900a;
    v41 = &g_1;
    v42 = &g_41900a;
    v43 = &g_1;
    v44 = 0;
    v46 = 0x110000;
    v48 = 3337;
    v45 = 119;
    v101 = 0;
    v102 = &g_1;
    v103 = 0;
    v101 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_31);
    v156 = v102;
    v157 = v103;
    *((v156 + v157 + &g_11 as &u8) as &i128) = 43108424188956081653513055847055914084;
    *((v156 + v157 + &g_1 as &u8) as &i128) = 140187479956904340842017318178220240160;
    *((v156 + v157) as &i128) = 134794381778087543670802051486297908595;
    *((v156 + v157 + &g_21 as &u8) as &i16) = 12344;
    v103 = v157 + &g_31 as &u8;
    v1 = *((&v101 as &char + 8) as &i128);
    if v37 != 0x8000000000000000 {
        v101 = v1;
    }
    v37 = v101;
    memcpy(&v101, &v2, 360);
    memcpy(&v101, &v30, 216);
    v159 = v48;
    v130 = v30;
    v148 = 0;
    v149 = v159;
    v1 = struct32 {
        field_0: &g_419041
        field_8: &g_1
        field_16: 0
        field_24: &g_1
    };
    v2 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v1);
    v130 = v4;
    v128 = v2;
    memcpy(&v2, &v101, 360);
    memcpy(&v30, &v101, 216);
    v30 = v130;
    v47 = &g_11;
    v48 = v159;
    v101 = clap_builder::builder::command::Command::arg(&v51, &v2);
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
    v83 = &g_1;
    v84 = 0;
    v85 = 0x8000000000000000;
    v86 = 0x8000000000000000;
    v87 = v0;
    v88 = &g_41061c;
    v89 = &g_1;
    v90 = 0;
    v92 = 0;
    v93 = 0x301000000040011000000110000;
    clap_builder::builder::command::Command::arg(a0, &v101, &v51);
    return a0;
}
