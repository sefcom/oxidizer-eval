fn uu_sum::uu_app(a0: i64) -> u64 {
    let v0: i128;  // [sp-0x828]
    let v1: i64;  // [sp-0x818], Other Possible Types: Enum, struct24
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
    let v36: i64;  // [sp-0x660]
    let v37: i64;  // [sp-0x648]
    let v38: i64;  // [sp-0x620]
    let v39: i64;  // [sp-0x608]
    let v40: i64;  // [sp-0x600]
    let v41: i64;  // [sp-0x5f8]
    let v42: i64;  // [sp-0x5e8]
    let v43: i128;  // [bp-0x5d8]
    let v44: i8;  // [sp-0x5cc]
    let v45: i16;  // [sp-0x5cb]
    let v46: i8;  // [sp-0x5c9]
    let v47: i5696;  // [bp-0x5c0], Other Possible Types: struct712
    let v48: i64;  // [sp-0x5b0]
    let v49: i64;  // [sp-0x598]
    let v50: i64;  // [sp-0x588]
    let v51: i64;  // [sp-0x570]
    let v52: i64;  // [sp-0x558]
    let v53: i64;  // [sp-0x550]
    let v54: i128;  // [sp-0x548]
    let v55: i64;  // [sp-0x538]
    let v56: i128;  // [sp-0x530]
    let v57: i64;  // [sp-0x520]
    let v58: i128;  // [sp-0x518]
    let v59: i64;  // [sp-0x508]
    let v60: i128;  // [sp-0x500]
    let v61: i64;  // [sp-0x4f0]
    let v62: i128;  // [sp-0x4e8]
    let v63: i64;  // [sp-0x4d8]
    let v64: i128;  // [sp-0x4d0]
    let v65: i64;  // [sp-0x4c0]
    let v66: i128;  // [sp-0x4b8]
    let v67: i64;  // [sp-0x4a8]
    let v68: i128;  // [sp-0x4a0]
    let v69: i64;  // [sp-0x490]
    let v70: i128;  // [sp-0x488]
    let v71: i64;  // [sp-0x478]
    let v72: i128;  // [sp-0x470]
    let v73: i64;  // [sp-0x460]
    let v74: i128;  // [sp-0x458]
    let v75: i64;  // [sp-0x448]
    let v76: i128;  // [sp-0x440]
    let v77: i64;  // [sp-0x430]
    let v78: i128;  // [sp-0x428]
    let v79: i64;  // [sp-0x418]
    let v80: i64;  // [sp-0x410]
    let v81: i192;  // [sp-0x408]
    let v82: i64;  // [sp-0x3f0]
    let v83: i128;  // [sp-0x3e8]
    let v84: i64;  // [sp-0x3c8]
    let v85: i64;  // [sp-0x3b0]
    let v86: i64;  // [sp-0x3a8]
    let v87: i64;  // [sp-0x3a0]
    let v88: i64;  // [sp-0x398]
    let v89: i64;  // [sp-0x390]
    let v90: i64;  // [sp-0x380]
    let v91: i32;  // [sp-0x378]
    let v92: i16;  // [sp-0x374]
    let v93: i5696;  // [sp-0x2f8], Other Possible Types: Enum, struct712
    let v94: i64;  // [sp-0x2e8]
    let v95: i64;  // [sp-0x2d0]
    let v96: i64;  // [sp-0x2c0]
    let v97: i64;  // [sp-0x2a8]
    let v98: i64;  // [sp-0x290]
    let v99: i64;  // [sp-0x288]
    let v100: i128;  // [sp-0x280]
    let v101: i64;  // [sp-0x270]
    let v102: i128;  // [sp-0x268]
    let v103: i64;  // [sp-0x258]
    let v104: i128;  // [sp-0x250]
    let v105: i64;  // [sp-0x240]
    let v106: i128;  // [sp-0x238]
    let v107: i64;  // [sp-0x228]
    let v108: i128;  // [sp-0x220]
    let v109: i64;  // [sp-0x210]
    let v110: i128;  // [sp-0x208]
    let v111: i64;  // [sp-0x1f8]
    let v112: i128;  // [sp-0x1f0]
    let v113: i64;  // [sp-0x1e0]
    let v114: i128;  // [sp-0x1d8]
    let v115: i64;  // [sp-0x1c8]
    let v116: i128;  // [sp-0x1c0]
    let v117: i64;  // [sp-0x1b0]
    let v118: i128;  // [sp-0x1a8]
    let v119: i64;  // [sp-0x198]
    let v120: i128;  // [sp-0x190]
    let v121: i64;  // [sp-0x180]
    let v122: i128;  // [sp-0x178]
    let v123: i64;  // [sp-0x168]
    let v124: i128;  // [sp-0x160]
    let v125: i64;  // [sp-0x150]
    let v126: i64;  // [sp-0x148]
    let v127: i64;  // [sp-0x140]
    let v128: i64;  // [sp-0x128]
    let v129: i64;  // [sp-0x100]
    let v130: i64;  // [sp-0xe8]
    let v131: i64;  // [sp-0xe0]
    let v132: i64;  // [sp-0xd8]
    let v133: i64;  // [sp-0xc8]
    let v134: i64;  // [sp-0xb8]
    let v135: i32;  // [sp-0xb0]
    let v136: i16;  // [sp-0xac]
    let v137: i8;  // [bp-0xa9]
    let v138: i64;  // [sp-0x98]
    let v139: i64;  // [sp-0x90]
    let v140: i64;  // [sp-0x3c]
    let v141: i32;  // [sp-0x34]
    let v143: i64;  // r14
    let v144: i64;  // rax
    let v145: i64;  // rcx
    let v146: i64;  // rax
    let v147: i64;  // rcx

    if _ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 != 2 {
        once_cell::imp::OnceCell<T>::initialize(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
    }
    v93 = clap_builder::builder::command::Command::new(g_4e4458, g_4e4460);
    v138 = &g_418c17;
    v139 = &g_1;
    memcpy(&v47, &v93, 712);
    v1 = uucore::format_usage(&g_418c1d, &g_11);
    v143 = v1;
    if v143 != 0x8000000000000000 {
        v93 = *((&v1 as &char + 8) as &i128);
    }
    v82 = v143;
    v83 = v93;
    memcpy(&v93, &v47, 712);
    v47 = clap_builder::builder::command::Command::about(&v93, &g_418c35, 95);
    memcpy(&v93, &v47, 700);
    v140 = 549755814016 | *((&v47 as &char + 700) as &i64);
    v141 = *((&v47 as &char + 708) as &i32);
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
    v39 = &anon.d1e99227c112db6566ea026d21045f3e.0.llvm.8633280352999635387;
    v40 = &g_1;
    v41 = 0;
    v42 = 0;
    v43 = 0x301000000040011000000110000;
    v47 = clap_builder::builder::command::Command::arg(&v93, &v1);
    v100 = 0;
    v102 = 0;
    v104 = 0;
    v106 = 0;
    v108 = 0;
    v110 = 0;
    v112 = 0;
    v114 = 0;
    v116 = 0;
    v118 = 0;
    v120 = 0;
    v122 = 0;
    v124 = 0;
    v93 = 0;
    v94 = 0;
    v95 = 0;
    v96 = 0;
    v97 = &g_1;
    v98 = 0;
    v99 = &g_1;
    v101 = &g_1;
    v103 = &g_1;
    v105 = &g_1;
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
    v126 = 0;
    v127 = 0x8000000000000000;
    v128 = 0x8000000000000000;
    v129 = 9223372036854775809;
    v130 = &anon.d1e99227c112db6566ea026d21045f3e.1.llvm.8633280352999635387;
    v131 = &g_1;
    v132 = 0;
    v133 = 0;
    v134 = 4785074604081266;
    v135 = 0;
    v136 = 3337;
    v1 = 0;
    v2 = &g_1;
    v3 = 0;
    v1 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_31);
    v144 = v2;
    v145 = v3;
    *((v144 + v145 + &g_11 as &u8) as &i128) = 144166097783602687840332078475921989707;
    *((v144 + v145 + &g_1 as &u8) as &i128) = 65300382963791291793183312056785792097;
    *((v144 + v145) as &i128) = 43103638385846040976524485973097411445;
    *((v144 + v145 + &g_21 as &u8) as &i16) = 10612;
    v3 = v145 + &g_31 as &u8;
    v0 = *((&v1 as &char + 8) as &i128);
    if v127 != 0x8000000000000000 {
        v1 = v0;
    }
    v127 = v1;
    memcpy(&v1, &v93, 588);
    v45 = v136;
    v46 = v137;
    v44 = &g_1;
    v93 = clap_builder::builder::command::Command::arg(&v47, &v1);
    v54 = 0;
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
    v47 = 0;
    v48 = 0;
    v49 = 0;
    v50 = 0;
    v51 = &g_1;
    v52 = 0;
    v53 = &g_1;
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
    v80 = 0;
    v81 = 0x8000000000000000;
    v82 = 0x8000000000000000;
    v84 = 9223372036854775809;
    v85 = &anon.d1e99227c112db6566ea026d21045f3e.2.llvm.8633280352999635387;
    v86 = &g_1;
    v87 = &anon.d1e99227c112db6566ea026d21045f3e.2.llvm.8633280352999635387;
    v88 = &g_1;
    v89 = 0;
    v90 = 4785074604081267;
    v91 = 0;
    v92 = 3337;
    v1 = 0;
    v2 = &g_1;
    v3 = 0;
    v1 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_21);
    v146 = v2;
    v147 = v3;
    *((v146 + v147 + &g_11 as &u8) as &i128) = 153418812065548361574345141644847886645;
    *((v146 + v147 + &g_1 as &u8) as &i128) = 43062059604585989349572122380520415520;
    *((v146 + v147) as &i128) = 145495685312064938457932906776949519221;
    v3 = v147 + &g_21 as &u8;
    v0 = *((&v1 as &char + 8) as &i128);
    if v81 != 0x8000000000000000 {
        v1 = v0;
    }
    v81 = v1;
    memcpy(&v1, &v47, 588);
    v45 = *((&v47 as &char + 589) as &i16);
    v46 = *((&v47 as &char + 591) as &i8);
    v44 = &g_1;
    clap_builder::builder::command::Command::arg(a0, &v93, &v1);
    return a0;
}
