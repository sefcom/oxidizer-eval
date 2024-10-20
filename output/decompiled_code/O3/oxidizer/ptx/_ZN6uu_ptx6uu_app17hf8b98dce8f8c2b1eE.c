fn uu_ptx::uu_app(a0: u32) -> u64 {
    let v0: i128;  // [bp-0x858], Other Possible Types: struct32
    let v1: i64;  // [sp-0x838], Other Possible Types: struct24, Enum
    let v2: i64;  // [sp-0x830]
    let v3: i64;  // [sp-0x828]
    let v4: i64;  // [sp-0x810]
    let v5: i64;  // [sp-0x800]
    let v6: i64;  // [sp-0x7e8]
    let v7: i64;  // [sp-0x7d0]
    let v8: i64;  // [sp-0x7c8]
    let v9: i128;  // [sp-0x7c0]
    let v10: i64;  // [sp-0x7b0]
    let v11: i128;  // [sp-0x7a8]
    let v12: i64;  // [sp-0x798]
    let v13: i128;  // [sp-0x790]
    let v14: i64;  // [sp-0x780]
    let v15: i128;  // [sp-0x778]
    let v16: i64;  // [sp-0x768]
    let v17: i128;  // [sp-0x760]
    let v18: i64;  // [sp-0x750]
    let v19: i128;  // [sp-0x748]
    let v20: i64;  // [sp-0x738]
    let v21: i128;  // [sp-0x730]
    let v22: i64;  // [sp-0x720]
    let v23: i128;  // [sp-0x718]
    let v24: i64;  // [sp-0x708]
    let v25: i128;  // [sp-0x700]
    let v26: i64;  // [sp-0x6f0]
    let v27: i128;  // [sp-0x6e8]
    let v28: i64;  // [sp-0x6d8]
    let v29: i128;  // [bp-0x6d0]
    let v30: i64;  // [sp-0x6c0]
    let v31: i128;  // [sp-0x6b8]
    let v32: i64;  // [sp-0x6a8]
    let v33: i128;  // [sp-0x6a0]
    let v34: i64;  // [sp-0x690]
    let v35: i64;  // [sp-0x688]
    let v36: i64;  // [sp-0x680]
    let v37: i128;  // [sp-0x678]
    let v38: i64;  // [sp-0x668]
    let v39: i64;  // [sp-0x640]
    let v40: i64;  // [sp-0x628]
    let v41: i64;  // [sp-0x620]
    let v42: i64;  // [sp-0x618]
    let v43: i64;  // [sp-0x610]
    let v44: i64;  // [sp-0x608]
    let v45: i128;  // [bp-0x5f8]
    let v46: i32;  // [sp-0x5f0]
    let v47: i16;  // [sp-0x5ec]
    let v48: i16;  // [bp-0x5eb]
    let v49: i16;  // [bp-0x5ea]
    let v50: i8;  // [sp-0x5e9]
    let v51: i64;  // [sp-0x5e0]
    let v52: i128;  // [sp-0x5d8], Other Possible Types: struct712, Enum
    let v53: i64;  // [sp-0x5d0]
    let v54: i64;  // [sp-0x5c8]
    let v55: i64;  // [sp-0x5b0]
    let v56: i64;  // [sp-0x5a0]
    let v57: i64;  // [sp-0x588]
    let v58: i64;  // [sp-0x570]
    let v59: i64;  // [sp-0x568]
    let v60: i128;  // [sp-0x560]
    let v61: i64;  // [sp-0x550]
    let v62: i128;  // [sp-0x548]
    let v63: i64;  // [sp-0x538]
    let v64: i128;  // [sp-0x530]
    let v65: i64;  // [sp-0x520]
    let v66: i128;  // [sp-0x518]
    let v67: i64;  // [sp-0x508]
    let v68: i128;  // [sp-0x500]
    let v69: i64;  // [sp-0x4f0]
    let v70: i128;  // [sp-0x4e8]
    let v71: i64;  // [sp-0x4d8]
    let v72: i128;  // [sp-0x4d0]
    let v73: i64;  // [sp-0x4c0]
    let v74: i128;  // [sp-0x4b8]
    let v75: i64;  // [sp-0x4a8]
    let v76: i128;  // [sp-0x4a0]
    let v77: i64;  // [sp-0x490]
    let v78: i128;  // [bp-0x488]
    let v79: i128;  // [bp-0x480]
    let v80: i64;  // [sp-0x478]
    let v81: i64;  // [bp-0x470]
    let v82: i64;  // [sp-0x460]
    let v83: i128;  // [sp-0x458]
    let v84: i64;  // [sp-0x448]
    let v85: i128;  // [sp-0x440]
    let v86: i64;  // [sp-0x430]
    let v87: i64;  // [sp-0x428]
    let v88: i64;  // [sp-0x420]
    let v89: i128;  // [sp-0x418]
    let v90: i64;  // [sp-0x408]
    let v91: i64;  // [sp-0x3e0]
    let v92: i64;  // [sp-0x3c8]
    let v93: i64;  // [sp-0x3c0]
    let v94: i64;  // [sp-0x3b8]
    let v95: i64;  // [sp-0x3b0]
    let v96: i64;  // [sp-0x3a8]
    let v97: i64;  // [sp-0x398]
    let v98: i32;  // [sp-0x390]
    let v99: i8;  // [bp-0x38c]
    let v100: i16;  // [sp-0x38b]
    let v101: i16;  // [bp-0x38a]
    let v102: i8;  // [sp-0x389]
    let v103: i64;  // [sp-0x378]
    let v104: i64;  // [sp-0x370]
    let v105: i64;  // [sp-0x31c]
    let v106: i32;  // [sp-0x314]
    let v107: i64;  // [sp-0x308], Other Possible Types: struct712, Enum
    let v108: i64;  // [sp-0x300]
    let v109: i64;  // [sp-0x2f8]
    let v110: i64;  // [sp-0x2e0]
    let v111: i64;  // [sp-0x2d0]
    let v112: i64;  // [sp-0x2b8]
    let v113: i64;  // [sp-0x2a0]
    let v114: i64;  // [sp-0x298]
    let v115: i128;  // [sp-0x290]
    let v116: i64;  // [sp-0x280]
    let v117: i128;  // [sp-0x278]
    let v118: i64;  // [sp-0x268]
    let v119: i128;  // [sp-0x260]
    let v120: i64;  // [sp-0x250]
    let v121: i128;  // [sp-0x248]
    let v122: i64;  // [sp-0x238]
    let v123: i128;  // [sp-0x230]
    let v124: i64;  // [sp-0x220]
    let v125: i128;  // [sp-0x218]
    let v126: i64;  // [sp-0x208]
    let v127: i128;  // [sp-0x200]
    let v128: i64;  // [sp-0x1f0]
    let v129: i128;  // [sp-0x1e8]
    let v130: i64;  // [sp-0x1d8]
    let v131: i128;  // [sp-0x1d0]
    let v132: i64;  // [sp-0x1c0]
    let v133: i128;  // [bp-0x1b8]
    let v134: i128;  // [bp-0x1b0]
    let v135: i64;  // [sp-0x1a8]
    let v136: i64;  // [bp-0x1a0]
    let v137: i64;  // [sp-0x190]
    let v138: i128;  // [sp-0x188]
    let v139: i64;  // [sp-0x178]
    let v140: i128;  // [sp-0x170]
    let v141: i64;  // [sp-0x160]
    let v142: i64;  // [sp-0x158]
    let v143: i192;  // [sp-0x150]
    let v144: i128;  // [sp-0x148]
    let v145: i64;  // [sp-0x138]
    let v146: i128;  // [sp-0x130]
    let v147: i64;  // [sp-0x110]
    let v148: i64;  // [sp-0xf8]
    let v149: i64;  // [sp-0xf0]
    let v150: i64;  // [sp-0xe8]
    let v151: i64;  // [sp-0xe0]
    let v152: i64;  // [sp-0xd8]
    let v153: i64;  // [sp-0xc8]
    let v154: i32;  // [sp-0xc0]
    let v155: i16;  // [bp-0xbc]
    let v156: i8;  // [sp-0xbb]
    let v157: i16;  // [sp-0xba]
    let v158: i8;  // [bp-0x4c]
    let v159: i8;  // [bp-0x44]
    let v161: i64;  // rbx
    let v162: i64;  // rax
    let v163: i64;  // rcx
    let v164: i64;  // rax
    let v165: i64;  // rcx
    let v166: i64;  // rax
    let v167: i64;  // rcx
    let v169: i64;  // rax
    let v170: i64;  // rcx
    let v172: i64;  // rax
    let v173: i64;  // rcx
    let v174: i64;  // rax
    let v175: i64;  // rcx
    let v176: i64;  // rax
    let v177: i64;  // rcx
    let v179: i64;  // rax
    let v180: i64;  // rcx
    let v181: i64;  // rax
    let v182: i64;  // rcx
    let v184: i64;  // rax
    let v185: i64;  // rcx
    let v187: i16;  // _bp
    let v189: i64;  // r15
    let v190: i64;  // rax
    let v191: i64;  // rcx
    let v192: i64;  // rax
    let v193: i64;  // rcx
    let v195: i64;  // rax
    let v196: i64;  // rcx
    let v198: i16;  // _bp
    let v200: i64;  // rax
    let v201: i64;  // rcx
    let v203: i16;  // _bp
    let v205: i64;  // rax
    let v206: i64;  // rcx
    let v207: i64;  // rbx
    let v208: i64;  // rbx
    let v209: i64;  // rax
    let v210: i64;  // rcx

    if _ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 != 2 {
        once_cell::imp::OnceCell<T>::initialize(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
    }
    v107 = clap_builder::builder::command::Command::new(g_6b90a8, g_6b90b0);
    v52 = clap_builder::builder::command::Command::about(&v107, &g_469ab9, 264);
    v103 = &g_469bc1;
    v104 = &g_1;
    memcpy(&v107, &v52, 712);
    v1 = uucore::format_usage(&g_469bc7, 60);
    v161 = v1;
    if v161 != 0x8000000000000000 {
        v52 = *((&v1 as &char + 8) as &i128);
    }
    v145 = v161;
    v146 = v52;
    memcpy(&v52, &v107, 700);
    v105 = 549755814016 | v158;
    v106 = v159;
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
    v40 = &anon.e23289579c9441ef21ddb87efb4b8a29.8.llvm.16528050568364581840;
    v41 = &g_1;
    v42 = 0;
    v44 = 0;
    v45 = 0x301000000040011000000110000;
    v107 = clap_builder::builder::command::Command::arg(&v52, &v1);
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
    v81 = 0;
    v83 = 0;
    v85 = 0;
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
    v75 = &g_1;
    v77 = &g_1;
    v80 = &g_1;
    v82 = &g_1;
    v84 = &g_1;
    v86 = &g_1;
    v87 = 0;
    v88 = 0x8000000000000000;
    v90 = 0x8000000000000000;
    v91 = 9223372036854775809;
    v92 = &anon.e23289579c9441ef21ddb87efb4b8a29.9.llvm.16528050568364581840;
    v93 = &g_1;
    v94 = &anon.e23289579c9441ef21ddb87efb4b8a29.9.llvm.16528050568364581840;
    v95 = &g_1;
    v96 = 0;
    v97 = 4785074604081217;
    v98 = 0;
    v99 = 3337;
    v1 = 0;
    v2 = &g_1;
    v3 = 0;
    v1 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_1a);
    v162 = v2;
    v163 = v3;
    *((v162 + v163 + &g_11 as &u8) as &i128) = 153387658203022263442153023909609628018;
    *((v162 + v163 + &g_1 as &u8) as &i128) = 151700181297976370267521195719795698785;
    *((v162 + v163) as &i128) = 132141123231367222592166153238170858863;
    v3 = v163 + &g_1a as &u8;
    v0 = *((&v1 as &char + 8) as &i128);
    if v88 != 0x8000000000000000 {
        v1 = v0;
    }
    v88 = v1;
    v89 = v1;
    memcpy(&v1, &v52, 588);
    v48 = *((&v52 as &char + 589) as &i16);
    v50 = v102;
    v47 = &g_1;
    v52 = clap_builder::builder::command::Command::arg(&v107, &v1);
    v115 = 0;
    v117 = 0;
    v119 = 0;
    v121 = 0;
    v123 = 0;
    v125 = 0;
    v127 = 0;
    v129 = 0;
    v131 = 0;
    v133 = 0;
    v136 = 0;
    v138 = 0;
    v140 = 0;
    v107 = 0;
    v109 = 0;
    v110 = 0;
    v111 = 0;
    v112 = &g_1;
    v113 = 0;
    v114 = &g_1;
    v116 = &g_1;
    v118 = &g_1;
    v120 = &g_1;
    v122 = &g_1;
    v124 = &g_1;
    v126 = &g_1;
    v128 = &g_1;
    v130 = &g_1;
    v132 = &g_1;
    v135 = &g_1;
    v137 = &g_1;
    v139 = &g_1;
    v141 = &g_1;
    v142 = 0;
    v143 = 0x8000000000000000;
    v145 = 0x8000000000000000;
    v147 = 9223372036854775809;
    v148 = &anon.e23289579c9441ef21ddb87efb4b8a29.10.llvm.16528050568364581840;
    v149 = &g_1;
    v150 = &anon.e23289579c9441ef21ddb87efb4b8a29.10.llvm.16528050568364581840;
    v151 = &g_1;
    v152 = 0;
    v153 = 4785074604081223;
    v154 = 0;
    v155 = 3337;
    v1 = 0;
    v2 = &g_1;
    v3 = 0;
    v1 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_1a);
    v164 = v2;
    v165 = v3;
    *((v164 + v165 + &g_1 as &u8) as &i128) = 52465329103813131281003420992650027109;
    *((v164 + v165) as &i128) = 134809741557815826912775406335329592674;
    v3 = v165 + &g_1a as &u8;
    v0 = *((&v1 as &char + 8) as &i128);
    if v143 != 0x8000000000000000 {
        v1 = v0;
    }
    v143 = v1;
    v144 = v1;
    memcpy(&v1, &v107, 588);
    v48 = *((&v107 as &char + 589) as &i16);
    v50 = *((&v107 as &char + 591) as &i8);
    v47 = &g_1;
    v107 = clap_builder::builder::command::Command::arg(&v52, &v1);
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
    v40 = &anon.e23289579c9441ef21ddb87efb4b8a29.11.llvm.16528050568364581840;
    v41 = &g_1;
    v42 = &anon.e23289579c9441ef21ddb87efb4b8a29.11.llvm.16528050568364581840;
    v43 = &g_1;
    v44 = 0;
    v45 = 4785074604081222;
    v46 = 0;
    v47 = 3337;
    v52 = 0;
    v53 = &g_1;
    v54 = 0;
    v52 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_1a);
    v166 = v53;
    v167 = v54;
    *((v166 + v167 + &g_1 as &u8) as &i128) = 156113952674914817204803362263486914924;
    *((v166 + v167) as &i128) = 135749730090161882254225663567690298229;
    *((v166 + v167 + &g_1a as &u8) as &i64) = 8317708060514673518;
    v54 = v167 + &g_1a as &u8;
    v0 = *((&v52 as &char + 8) as &i128);
    if v36 != 0x8000000000000000 {
        v52 = v0;
    }
    v36 = v52;
    v37 = v52;
    memcpy(&v52, &v1, 360);
    memcpy(&v52, &v29, 224);
    v81 = v29;
    v0 = struct32 {
        field_0: &g_469c73
        field_8: &g_1
        field_16: 0
        field_24: &g_1
    };
    v1 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v0);
    v81 = v3;
    v79 = v1;
    memcpy(&v1, &v52, 592);
    v52 = clap_builder::builder::command::Command::arg(&v107, &v1);
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
    v40 = &anon.e23289579c9441ef21ddb87efb4b8a29.12.llvm.16528050568364581840;
    v41 = &g_1;
    v42 = &anon.e23289579c9441ef21ddb87efb4b8a29.12.llvm.16528050568364581840;
    v43 = &g_1;
    v44 = 0;
    v45 = 4785074604081229;
    v46 = 0;
    v47 = 3337;
    v107 = 0;
    v108 = &g_1;
    v109 = 0;
    v107 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_1a);
    v169 = v108;
    v170 = v109;
    *((v169 + v170 + &g_1 as &u8) as &i128) = 160131228698191641670660267410725609573;
    *((v169 + v170) as &i128) = 153469376115086681895505073704500683117;
    *((v169 + v170 + &g_1a as &u8) as &&i64) = &g_1a;
    v109 = v170 + &g_1a as &u8;
    v0 = *((&v107 as &char + 8) as &i128);
    if v36 != 0x8000000000000000 {
        v107 = v0;
    }
    v36 = v107;
    v37 = v107;
    memcpy(&v107, &v1, 360);
    memcpy(&v107, &v29, 224);
    v136 = v29;
    v0 = struct32 {
        field_0: &g_469c73
        field_8: &g_1
        field_16: 0
        field_24: &g_1
    };
    v1 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v0);
    v136 = v3;
    v134 = v1;
    memcpy(&v1, &v107, 592);
    v107 = clap_builder::builder::command::Command::arg(&v52, &v1);
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
    v81 = 0;
    v83 = 0;
    v85 = 0;
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
    v75 = &g_1;
    v77 = &g_1;
    v80 = &g_1;
    v82 = &g_1;
    v84 = &g_1;
    v86 = &g_1;
    v87 = 0;
    v88 = 0x8000000000000000;
    v90 = 0x8000000000000000;
    v91 = 9223372036854775809;
    v92 = &anon.e23289579c9441ef21ddb87efb4b8a29.13.llvm.16528050568364581840;
    v93 = &g_1;
    v94 = &anon.e23289579c9441ef21ddb87efb4b8a29.13.llvm.16528050568364581840;
    v95 = &g_1;
    v96 = 0;
    v97 = 4785074604081231;
    v98 = 0;
    v99 = 3337;
    v1 = 0;
    v2 = &g_1;
    v3 = 0;
    v1 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_1a);
    v172 = v2;
    v173 = v3;
    *((v172 + v173 + &g_1 as &u8) as &i128) = 157396455307264643640465229306151334753;
    *((v172 + v173) as &i128) = 43139984252227407021333699522408113511;
    *((v172 + v173 + &g_1a as &u8) as &i16) = 29541;
    v3 = v173 + &g_1a as &u8;
    v0 = *((&v1 as &char + 8) as &i128);
    if v88 != 0x8000000000000000 {
        v1 = v0;
    }
    v88 = v1;
    v89 = v1;
    memcpy(&v1, &v52, 588);
    v48 = *((&v52 as &char + 589) as &i16);
    v50 = v102;
    v47 = &g_1;
    v52 = clap_builder::builder::command::Command::arg(&v107, &v1);
    v115 = 0;
    v117 = 0;
    v119 = 0;
    v121 = 0;
    v123 = 0;
    v125 = 0;
    v127 = 0;
    v129 = 0;
    v131 = 0;
    v133 = 0;
    v136 = 0;
    v138 = 0;
    v140 = 0;
    v107 = 0;
    v109 = 0;
    v110 = 0;
    v111 = 0;
    v112 = &g_1;
    v113 = 0;
    v114 = &g_1;
    v116 = &g_1;
    v118 = &g_1;
    v120 = &g_1;
    v122 = &g_1;
    v124 = &g_1;
    v126 = &g_1;
    v128 = &g_1;
    v130 = &g_1;
    v132 = &g_1;
    v135 = &g_1;
    v137 = &g_1;
    v139 = &g_1;
    v141 = &g_1;
    v142 = 0;
    v143 = 0x8000000000000000;
    v145 = 0x8000000000000000;
    v147 = 9223372036854775809;
    v148 = &anon.e23289579c9441ef21ddb87efb4b8a29.14.llvm.16528050568364581840;
    v149 = &g_1;
    v150 = &anon.e23289579c9441ef21ddb87efb4b8a29.14.llvm.16528050568364581840;
    v151 = &g_1;
    v152 = 0;
    v153 = 4785074604081234;
    v154 = 0;
    v155 = 3337;
    v1 = 0;
    v2 = &g_1;
    v3 = 0;
    v1 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, 42);
    v174 = v2;
    v175 = v3;
    *((v174 + v175 + &g_1a as &u8) as &i128) = 158412442641779335306995725146032993391;
    *((v174 + v175 + &g_1 as &u8) as &i128) = 156098030988019456927408562775100891252;
    *((v174 + v175) as &i128) = 129103609600531264920300115847892202864;
    v3 = v175 + 42;
    v0 = *((&v1 as &char + 8) as &i128);
    if v143 != 0x8000000000000000 {
        v1 = v0;
    }
    v143 = v1;
    memcpy(&v1, &v107, 588);
    v48 = *((&v107 as &char + 589) as &i16);
    v50 = *((&v107 as &char + 591) as &i8);
    v47 = &g_1;
    v107 = clap_builder::builder::command::Command::arg(&v52, &v1);
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
    v40 = &anon.e23289579c9441ef21ddb87efb4b8a29.15.llvm.16528050568364581840;
    v41 = &g_1;
    v42 = &anon.e23289579c9441ef21ddb87efb4b8a29.15.llvm.16528050568364581840;
    v43 = &g_1;
    v44 = 0;
    v45 = 4785074604081235;
    v46 = 0;
    v47 = 3337;
    v52 = 0;
    v53 = &g_1;
    v54 = 0;
    v52 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_1a);
    v176 = v53;
    v177 = v54;
    *((v176 + v177 + &g_1 as &u8) as &i128) = 134856573112597304279625089618097106720;
    *((v176 + v177) as &i128) = 153387880915454359074158365910185963366;
    *((v176 + v177 + &g_1a as &u8) as &i32) = 1936024430;
    v54 = v177 + &g_1a as &u8;
    v0 = *((&v52 as &char + 8) as &i128);
    if v36 != 0x8000000000000000 {
        v52 = v0;
    }
    v36 = v52;
    memcpy(&v52, &v1, 360);
    memcpy(&v52, &v29, 224);
    v81 = v29;
    v0 = struct32 {
        field_0: &g_469d0a
        field_8: &g_1
        field_16: 0
        field_24: &g_1
    };
    v1 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v0);
    v81 = v3;
    v79 = v1;
    memcpy(&v1, &v52, 592);
    v52 = clap_builder::builder::command::Command::arg(&v107, &v1);
    v115 = 0;
    v117 = 0;
    v119 = 0;
    v121 = 0;
    v123 = 0;
    v125 = 0;
    v127 = 0;
    v129 = 0;
    v131 = 0;
    v133 = 0;
    v136 = 0;
    v138 = 0;
    v140 = 0;
    v107 = 0;
    v109 = 0;
    v110 = 0;
    v111 = 0;
    v112 = &g_1;
    v113 = 0;
    v114 = &g_1;
    v116 = &g_1;
    v118 = &g_1;
    v120 = &g_1;
    v122 = &g_1;
    v124 = &g_1;
    v126 = &g_1;
    v128 = &g_1;
    v130 = &g_1;
    v132 = &g_1;
    v135 = &g_1;
    v137 = &g_1;
    v139 = &g_1;
    v141 = &g_1;
    v142 = 0;
    v143 = 0x8000000000000000;
    v145 = 0x8000000000000000;
    v147 = 9223372036854775809;
    v148 = &anon.e23289579c9441ef21ddb87efb4b8a29.16.llvm.16528050568364581840;
    v149 = &g_1;
    v150 = &anon.e23289579c9441ef21ddb87efb4b8a29.16.llvm.16528050568364581840;
    v151 = &g_1;
    v152 = 0;
    v153 = 4785074604081236;
    v154 = 0;
    v155 = 3337;
    v1 = 0;
    v2 = &g_1;
    v3 = 0;
    v1 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_1a);
    v179 = v2;
    v180 = v3;
    *((v179 + v180 + &g_1 as &u8) as &i128) = 134866857477820505677505064992375862113;
    *((v179 + v180) as &i128) = 43139984252227407021333699522408113511;
    *((v179 + v180 + &g_1a as &u8) as &i8) = 115;
    v3 = v180 + &g_1a as &u8;
    v0 = *((&v1 as &char + 8) as &i128);
    if v143 != 0x8000000000000000 {
        v1 = v0;
    }
    v143 = v1;
    memcpy(&v1, &v107, 588);
    v48 = *((&v107 as &char + 589) as &i16);
    v50 = *((&v107 as &char + 591) as &i8);
    v47 = &g_1;
    v107 = clap_builder::builder::command::Command::arg(&v52, &v1);
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
    v40 = &anon.e23289579c9441ef21ddb87efb4b8a29.17.llvm.16528050568364581840;
    v41 = &g_1;
    v42 = &anon.e23289579c9441ef21ddb87efb4b8a29.17.llvm.16528050568364581840;
    v43 = &g_1;
    v44 = 0;
    v45 = 4785074604081239;
    v46 = 0;
    v47 = 3337;
    v52 = 0;
    v53 = &g_1;
    v54 = 0;
    v52 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_1a);
    v181 = v53;
    v182 = v54;
    *((v181 + v182 + &g_1 as &u8) as &i128) = 133516982233552195760101685548877898612;
    *((v181 + v182) as &i128) = 129501733816089818003101987237217530741;
    v54 = v182 + &g_1a as &u8;
    v0 = *((&v52 as &char + 8) as &i128);
    if v36 != 0x8000000000000000 {
        v52 = v0;
    }
    v36 = v52;
    memcpy(&v52, &v1, 360);
    memcpy(&v52, &v29, 224);
    v81 = v29;
    v0 = struct32 {
        field_0: &g_469d0a
        field_8: &g_1
        field_16: 0
        field_24: &g_1
    };
    v1 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v0);
    v81 = v3;
    v79 = v1;
    memcpy(&v1, &v52, 592);
    v52 = clap_builder::builder::command::Command::arg(&v107, &v1);
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
    v40 = &anon.e23289579c9441ef21ddb87efb4b8a29.18.llvm.16528050568364581840;
    v41 = &g_1;
    v42 = &anon.e23289579c9441ef21ddb87efb4b8a29.18.llvm.16528050568364581840;
    v43 = &g_1;
    v44 = 0;
    v45 = 4785074604081250;
    v46 = 0;
    v47 = 3337;
    v107 = 0;
    v108 = &g_1;
    v109 = 0;
    v107 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_1a);
    v184 = v108;
    v185 = v109;
    *((v184 + v185 + &g_1 as &u8) as &i128) = 97397762653364505359072342497867166819;
    *((v184 + v185) as &i128) = 129529013097148474405242679216317820791;
    *((v184 + v185 + &g_1a as &u8) as &i16) = 17740;
    v109 = v185 + &g_1a as &u8;
    v0 = *((&v107 as &char + 8) as &i128);
    if v36 != 0x8000000000000000 {
        v107 = v0;
    }
    v36 = v107;
    memcpy(&v107, &v1, 360);
    memcpy(&v107, &v29, 221);
    v187 = *((&v48 as &char + 1) as &i16);
    v136 = v29;
    v156 = &g_1;
    v157 = v187;
    v0 = struct32 {
        field_0: &g_45b304
        field_8: &g_1
        field_16: 0
        field_24: &g_1
    };
    v1 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v0);
    v51 = 9223372036854775809;
    v136 = v3;
    v134 = v1;
    memcpy(&v1, &v107, 360);
    memcpy(&v29, &v107, 221);
    v29 = v136;
    v48 = &g_1;
    v49 = v187;
    v107 = clap_builder::builder::command::Command::arg(&v52, &v1);
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
    v81 = 0;
    v83 = 0;
    v85 = 0;
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
    v75 = &g_1;
    v77 = &g_1;
    v80 = &g_1;
    v82 = &g_1;
    v84 = &g_1;
    v86 = &g_1;
    v87 = 0;
    v88 = 0x8000000000000000;
    v90 = 0x8000000000000000;
    v189 = v51;
    v91 = v189;
    v92 = &anon.e23289579c9441ef21ddb87efb4b8a29.19.llvm.16528050568364581840;
    v93 = &g_1;
    v94 = &anon.e23289579c9441ef21ddb87efb4b8a29.19.llvm.16528050568364581840;
    v95 = &g_1;
    v96 = 0;
    v97 = 4785074604081254;
    v98 = 0;
    v99 = 3337;
    v1 = 0;
    v2 = &g_1;
    v3 = 0;
    v1 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_1a);
    v190 = v2;
    v191 = v3;
    *((v190 + v191 + &g_11 as &u8) as &i128) = 137483775099176426584585980890561339747;
    *((v190 + v191 + &g_1 as &u8) as &i128) = 148074578886556455151362392284832231284;
    *((v190 + v191) as &i128) = 43062058040743751169190151386754215782;
    v3 = v191 + &g_1a as &u8;
    v0 = *((&v1 as &char + 8) as &i128);
    if v88 != 0x8000000000000000 {
        v1 = v0;
    }
    v88 = v1;
    memcpy(&v1, &v52, 588);
    v48 = *((&v52 as &char + 589) as &i16);
    v50 = v102;
    v47 = &g_1;
    v52 = clap_builder::builder::command::Command::arg(&v107, &v1);
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
    v39 = v189;
    v40 = &anon.e23289579c9441ef21ddb87efb4b8a29.20.llvm.16528050568364581840;
    v41 = &g_1;
    v42 = &anon.e23289579c9441ef21ddb87efb4b8a29.20.llvm.16528050568364581840;
    v43 = &g_1;
    v44 = 0;
    v45 = 4785074604081255;
    v46 = 0;
    v47 = 3337;
    v107 = 0;
    v108 = &g_1;
    v109 = 0;
    v107 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_1a);
    v192 = v108;
    v193 = v109;
    *((v192 + v193 + &g_11 as &u8) as &i128) = 153382647736019806196748825334669930085;
    *((v192 + v193 + &g_1 as &u8) as &i128) = 149478223809787265084101191984546541165;
    *((v192 + v193) as &i128) = 156082702768648011361742635530139492711;
    v109 = v193 + &g_1a as &u8;
    v0 = *((&v107 as &char + 8) as &i128);
    if v36 != 0x8000000000000000 {
        v107 = v0;
    }
    v36 = v107;
    memcpy(&v107, &v1, 360);
    memcpy(&v107, &v29, 224);
    v136 = v29;
    v0 = struct32 {
        field_0: &g_469da5
        field_8: &g_1
        field_16: 0
        field_24: &g_1
    };
    v1 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v0);
    v136 = v3;
    v134 = v1;
    memcpy(&v1, &v107, 592);
    v107 = clap_builder::builder::command::Command::arg(&v52, &v1);
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
    v39 = v189;
    v40 = &anon.e23289579c9441ef21ddb87efb4b8a29.21.llvm.16528050568364581840;
    v41 = &g_1;
    v42 = &anon.e23289579c9441ef21ddb87efb4b8a29.21.llvm.16528050568364581840;
    v43 = &g_1;
    v44 = 0;
    v45 = 4785074604081257;
    v46 = 0;
    v47 = 3337;
    v52 = 0;
    v53 = &g_1;
    v54 = 0;
    v52 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_1a);
    v195 = v53;
    v196 = v54;
    *((v195 + v196 + &g_1 as &u8) as &i128) = 92112832442316104222164054120690622564;
    *((v195 + v196) as &i128) = 133516982206008064400293616307958539634;
    v54 = v196 + &g_1a as &u8;
    v0 = *((&v52 as &char + 8) as &i128);
    if v36 != 0x8000000000000000 {
        v52 = v0;
    }
    v36 = v52;
    memcpy(&v52, &v1, 360);
    memcpy(&v52, &v29, 221);
    v198 = *((&v48 as &char + 1) as &i16);
    v81 = v29;
    v100 = &g_1;
    v101 = v198;
    v0 = struct32 {
        field_0: &g_45b304
        field_8: &g_1
        field_16: 0
        field_24: &g_1
    };
    v1 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v0);
    v81 = v3;
    v79 = v1;
    memcpy(&v1, &v52, 360);
    memcpy(&v29, &v52, 221);
    v29 = v81;
    v48 = &g_1;
    v49 = v198;
    v52 = clap_builder::builder::command::Command::arg(&v107, &v1);
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
    v39 = v51;
    v40 = &anon.e23289579c9441ef21ddb87efb4b8a29.22.llvm.16528050568364581840;
    v41 = &g_1;
    v42 = &anon.e23289579c9441ef21ddb87efb4b8a29.22.llvm.16528050568364581840;
    v43 = &g_1;
    v44 = 0;
    v45 = 4785074604081263;
    v46 = 0;
    v47 = 3337;
    v107 = 0;
    v108 = &g_1;
    v109 = 0;
    v107 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_1a);
    v200 = v108;
    v201 = v109;
    *((v200 + v201 + &g_1 as &u8) as &i128) = 97397762653364505359002063856433656681;
    *((v200 + v201) as &i128) = 143724814351711772169201251618142643570;
    *((v200 + v201 + &g_1a as &u8) as &i16) = 17740;
    v109 = v201 + &g_1a as &u8;
    v0 = *((&v107 as &char + 8) as &i128);
    if v36 != 0x8000000000000000 {
        v107 = v0;
    }
    v36 = v107;
    memcpy(&v107, &v1, 360);
    memcpy(&v107, &v29, 221);
    v203 = v49;
    v136 = v29;
    v156 = &g_1;
    v157 = v203;
    v0 = struct32 {
        field_0: &g_45b304
        field_8: &g_1
        field_16: 0
        field_24: &g_1
    };
    v1 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v0);
    v136 = v3;
    v134 = v1;
    memcpy(&v1, &v107, 360);
    memcpy(&v29, &v107, 221);
    v29 = v136;
    v48 = &g_1;
    v49 = v203;
    v107 = clap_builder::builder::command::Command::arg(&v52, &v1);
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
    v39 = v51;
    v40 = &anon.e23289579c9441ef21ddb87efb4b8a29.23.llvm.16528050568364581840;
    v41 = &g_1;
    v42 = &anon.e23289579c9441ef21ddb87efb4b8a29.23.llvm.16528050568364581840;
    v43 = &g_1;
    v44 = 0;
    v45 = 4785074604081266;
    v46 = 0;
    v47 = 3337;
    v52 = 0;
    v53 = &g_1;
    v54 = 0;
    v52 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_1a);
    v205 = v53;
    v206 = v54;
    *((v205 + v206 + &g_1 as &u8) as &i128) = 134844606148431597479655433939777512289;
    *((v205 + v206) as &i128) = 134420258683880153983662804463003003238;
    *((v205 + v206 + &g_1a as &u8) as &i64) = 7305804402515076709;
    v54 = v206 + &g_1a as &u8;
    v0 = *((&v52 as &char + 8) as &i128);
    if v36 != 0x8000000000000000 {
        v52 = v0;
    }
    v36 = v52;
    memcpy(&v52, &v1, 360);
    v207 = v29;
    memcpy(&v52, &v29, 220);
    v100 = *((&v47 as &char + 1) as &i16);
    v102 = v50;
    v81 = v207;
    v99 = &g_1;
    v0 = struct32 {
        field_0: &g_45b304
        field_8: &g_1
        field_16: 0
        field_24: &g_1
    };
    v1 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v0);
    v81 = v3;
    v79 = v1;
    memcpy(&v1, &v52, 360);
    v208 = v81;
    memcpy(&v29, &v52, 220);
    v48 = v100;
    v50 = v102;
    v29 = v208;
    v47 = &g_1;
    v52 = clap_builder::builder::command::Command::arg(&v107, &v1);
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
    v39 = v51;
    v40 = &anon.e23289579c9441ef21ddb87efb4b8a29.24.llvm.16528050568364581840;
    v41 = &g_1;
    v42 = &anon.e23289579c9441ef21ddb87efb4b8a29.24.llvm.16528050568364581840;
    v43 = &g_1;
    v44 = 0;
    v45 = 4785074604081271;
    v46 = 0;
    v47 = 3337;
    v107 = 0;
    v108 = &g_1;
    v109 = 0;
    v107 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, 43);
    v209 = v108;
    v210 = v109;
    *((v209 + v210 + &g_1a as &u8) as &i128) = 133449259105403617483112772147380118886;
    *((v209 + v210 + &g_1 as &u8) as &i128) = 146741821747482105293862940925898813283;
    *((v209 + v210) as &i128) = 43108580740192873452549085753158956399;
    v109 = v210 + 43;
    v0 = *((&v107 as &char + 8) as &i128);
    if v36 != 0x8000000000000000 {
        v107 = v0;
    }
    v36 = v107;
    memcpy(&v107, &v1, 360);
    memcpy(&v107, &v29, 224);
    v136 = v29;
    v0 = struct32 {
        field_0: &g_469da5
        field_8: &g_1
        field_16: 0
        field_24: &g_1
    };
    v1 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v0);
    v136 = v3;
    v134 = v1;
    memcpy(&v1, &v107, 592);
    clap_builder::builder::command::Command::arg(a0, &v52, &v1);
    return a0;
}
