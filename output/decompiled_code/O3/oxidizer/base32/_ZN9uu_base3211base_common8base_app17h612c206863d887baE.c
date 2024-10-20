fn uu_base32::base_common::base_app(a0: u32, a1: u32, a2: u32, a3: u32, a4: u32) -> u64 {
    let v0: i64;  // [sp-0xaf8], Other Possible Types: struct712, Enum, Arguments
    let v1: i64;  // [sp-0xae8]
    let v2: i128;  // [bp-0xae0]
    let v3: i64;  // [sp-0xad0]
    let v4: i64;  // [sp-0xac0]
    let v5: i128;  // [sp-0xab8]
    let v6: i64;  // [sp-0xaa8]
    let v7: i128;  // [sp-0xaa0]
    let v8: i64;  // [sp-0xa90]
    let v9: i64;  // [sp-0xa88]
    let v10: i128;  // [sp-0xa80]
    let v11: struct16;  // [sp-0xa78]
    let v12: i64;  // [sp-0xa70]
    let v13: i128;  // [bp-0xa68]
    let v14: i64;  // [sp-0xa58]
    let v15: i128;  // [sp-0xa50]
    let v16: i64;  // [sp-0xa40]
    let v17: i128;  // [sp-0xa38]
    let v18: i64;  // [sp-0xa28]
    let v19: i128;  // [sp-0xa20]
    let v20: i64;  // [sp-0xa10]
    let v21: i128;  // [sp-0xa08]
    let v22: i64;  // [sp-0x9f8]
    let v23: i128;  // [sp-0x9f0]
    let v24: i64;  // [sp-0x9e0]
    let v25: i128;  // [sp-0x9d8]
    let v26: i64;  // [sp-0x9c8]
    let v27: i128;  // [sp-0x9c0]
    let v28: i64;  // [sp-0x9b0]
    let v29: i128;  // [bp-0x9a8]
    let v30: i128;  // [bp-0x9a0]
    let v31: i64;  // [sp-0x998]
    let v32: i128;  // [bp-0x990]
    let v33: i64;  // [sp-0x980]
    let v34: i128;  // [sp-0x978]
    let v35: i64;  // [sp-0x968]
    let v36: i128;  // [sp-0x960]
    let v37: i64;  // [sp-0x950]
    let v38: i64;  // [sp-0x948]
    let v39: i64;  // [sp-0x940]
    let v40: i128;  // [sp-0x938]
    let v41: i64;  // [sp-0x928]
    let v42: i128;  // [sp-0x920]
    let v43: i128;  // [sp-0x910]
    let v44: i64;  // [sp-0x900]
    let v45: i128;  // [sp-0x8f8]
    let v46: i64;  // [sp-0x8e8]
    let v47: i64;  // [sp-0x8e0]
    let v48: i64;  // [sp-0x8d8]
    let v49: i64;  // [sp-0x8d0]
    let v50: i64;  // [sp-0x8c8]
    let v51: i64;  // [sp-0x8b8]
    let v52: i32;  // [sp-0x8b0]
    let v53: i16;  // [sp-0x8ac]
    let v54: i64;  // [sp-0x898]
    let v55: i64;  // [sp-0x890]
    let v56: i8;  // [bp-0x828], Other Possible Types: struct712
    let v57: i64;  // [sp-0x818]
    let v58: i64;  // [sp-0x800]
    let v59: i64;  // [sp-0x7f8]
    let v60: i64;  // [sp-0x7f0]
    let v61: i64;  // [sp-0x7d8]
    let v62: i64;  // [sp-0x7c0]
    let v63: i64;  // [sp-0x7b8]
    let v64: i128;  // [sp-0x7b0]
    let v65: i64;  // [sp-0x7a0]
    let v66: i128;  // [sp-0x798]
    let v67: i64;  // [sp-0x788]
    let v68: i128;  // [sp-0x780]
    let v69: i64;  // [sp-0x770]
    let v70: i128;  // [sp-0x768]
    let v71: i64;  // [sp-0x758]
    let v72: i128;  // [sp-0x750]
    let v73: i64;  // [sp-0x740]
    let v74: i128;  // [sp-0x738]
    let v75: i64;  // [sp-0x728]
    let v76: i128;  // [sp-0x720]
    let v77: i64;  // [sp-0x710]
    let v78: i128;  // [sp-0x708]
    let v79: i64;  // [sp-0x6f8]
    let v80: i128;  // [sp-0x6f0]
    let v81: i64;  // [sp-0x6e0]
    let v82: i128;  // [sp-0x6d8]
    let v83: i64;  // [sp-0x6c8]
    let v84: i128;  // [sp-0x6c0]
    let v85: i64;  // [sp-0x6b0]
    let v86: i128;  // [sp-0x6a8]
    let v87: i64;  // [sp-0x698]
    let v88: i128;  // [sp-0x690]
    let v89: i64;  // [sp-0x680]
    let v90: i64;  // [sp-0x678]
    let v91: i64;  // [sp-0x670]
    let v92: i64;  // [sp-0x658]
    let v93: i64;  // [sp-0x630]
    let v94: i64;  // [sp-0x618]
    let v95: i64;  // [sp-0x610]
    let v96: i64;  // [sp-0x608]
    let v97: i64;  // [sp-0x600]
    let v98: i64;  // [sp-0x5f8]
    let v99: i64;  // [sp-0x5e8]
    let v100: i32;  // [sp-0x5e0]
    let v101: i16;  // [sp-0x5dc]
    let v102: i8;  // [bp-0x5d9]
    let v103: i64;  // [sp-0x56c]
    let v104: i32;  // [sp-0x564]
    let v105: String;  // [sp-0x560], Other Possible Types: i192
    let v106: i192;  // [sp-0x548], Other Possible Types: Enum, struct24
    let v107: i64;  // [sp-0x540]
    let v108: i64;  // [sp-0x538]
    let v109: i128;  // [bp-0x4c8], Other Possible Types: struct16
    let v110: i64;  // [sp-0x4b8]
    let v111: i64;  // [sp-0x390]
    let v112: i128;  // [sp-0x388]
    let v113: i8;  // [sp-0x2fc]
    let v114: i16;  // [sp-0x2fb]
    let v115: i8;  // [sp-0x2f9]
    let v116: i8;  // [bp-0x2f8]
    let v117: i8;  // [bp-0x2e8]
    let v118: i8;  // [bp-0x2d8]
    let v119: i8;  // [bp-0x2c8]
    let v120: i8;  // [bp-0x2b8]
    let v121: i8;  // [bp-0x2a8]
    let v122: i8;  // [bp-0x298]
    let v123: i128;  // [bp-0x288], Other Possible Types: struct32, Argument
    let v125: i64;  // rbx
    let v126: i64;  // rax
    let v127: i64;  // rcx
    let v128: i64;  // r13
    let v129: i64;  // rax
    let v130: i64;  // rcx
    let v131: i64;  // rax
    let v132: i64;  // rcx
    let v133: i64;  // r14
    let v134: i64;  // rax
    let v135: i64;  // rcx
    let v137: i64;  // r14
    let v138: i64;  // r14
    let v139: i64;  // rax
    let v140: i64;  // rcx

    if _ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 != 2 {
        once_cell::imp::OnceCell<T>::initialize(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
    }
    v0 = clap_builder::builder::command::Command::new(g_506f98, g_506fa0);
    v54 = &g_41e24a;
    v55 = &g_1;
    memcpy(&v56, &v0, 712);
    v0 = clap_builder::builder::command::Command::about(&v56, a1, a2);
    v106 = uucore::format_usage(a3, a4);
    v125 = v106;
    if v125 != 0x8000000000000000 {
        v56 = *((&v106 as &char + 8) as &i128);
    }
    v41 = v125;
    v42 = v56;
    memcpy(&v56, &v0, 700);
    v103 = 549755814016 | *((&v0 as &char + 700) as &i64);
    v104 = *((&v0 as &char + 708) as &i32);
    v10 = 0;
    v13 = 0;
    v15 = 0;
    v17 = 0;
    v19 = 0;
    v21 = 0;
    v23 = 0;
    v25 = 0;
    v27 = 0;
    v29 = 0;
    v32 = 0;
    v34 = 0;
    v36 = 0;
    v0 = 0;
    v1 = 0;
    v3 = 0;
    v4 = 0;
    v6 = &g_1;
    v8 = 0;
    v9 = &g_1;
    v12 = &g_1;
    v14 = &g_1;
    v16 = &g_1;
    v18 = &g_1;
    v20 = &g_1;
    v22 = &g_1;
    v24 = &g_1;
    v26 = &g_1;
    v28 = &g_1;
    v31 = &g_1;
    v33 = &g_1;
    v35 = &g_1;
    v37 = &g_1;
    v38 = 0;
    v39 = 0x8000000000000000;
    v41 = 0x8000000000000000;
    v44 = 9223372036854775809;
    v46 = &anon.aee8d0926622a1c6e97588a73d77e694.24.llvm.9973493521462227259;
    v47 = &g_1;
    v48 = &anon.aee8d0926622a1c6e97588a73d77e694.24.llvm.9973493521462227259;
    v49 = &g_1;
    v50 = 0;
    v51 = 4785074604081252;
    v52 = 0;
    v53 = 3337;
    v106 = 0;
    v107 = &g_1;
    v108 = 0;
    v106 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, 11);
    v126 = v107;
    v127 = v108;
    *((v126 + v127) as &i64) = 7214878085087454564;
    *((v126 + v127 + &g_1 as &u8) as &i32) = 1635017060;
    v108 = v127 + 11;
    v123 = *((&v106 as &char + 8) as &i128);
    if v39 != 0x8000000000000000 {
        v106 = v123;
    }
    v39 = v106;
    memcpy(&v106, &v0, 588);
    v114 = *((&v0 as &char + 589) as &i16);
    v115 = *((&v0 as &char + 591) as &i8);
    v113 = &g_1;
    v128 = v110;
    if v128 == v109 {
        v109 = alloc::raw_vec::RawVec<T,A>::grow_one();
    }
    v129 = *((&v109 as &char + 8) as &i64);
    v130 = v128 * 16;
    *((v129 + v130) as &&i64) = &anon.aee8d0926622a1c6e97588a73d77e694.24.llvm.9973493521462227259;
    *((v129 + v130 + &g_1 as &u8) as &&i64) = &g_1;
    v110 = v128 + &g_1 as &u8;
    memcpy(&v123, &v106, 592);
    v0 = clap_builder::builder::command::Command::arg(&v56, &v123);
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
    v84 = 0;
    v86 = 0;
    v88 = 0;
    v56 = 0;
    v57 = 0;
    v58 = 0;
    v60 = 0;
    v61 = &g_1;
    v62 = 0;
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
    v85 = &g_1;
    v87 = &g_1;
    v89 = &g_1;
    v90 = 0;
    v91 = 0x8000000000000000;
    v92 = 0x8000000000000000;
    v93 = 9223372036854775809;
    v94 = &anon.aee8d0926622a1c6e97588a73d77e694.26.llvm.9973493521462227259;
    v95 = 14;
    v96 = &anon.aee8d0926622a1c6e97588a73d77e694.26.llvm.9973493521462227259;
    v97 = 14;
    v98 = 0;
    v99 = 4785074604081257;
    v100 = 0;
    v101 = 3337;
    v106 = 0;
    v107 = &g_1;
    v108 = 0;
    v106 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_20);
    v131 = v107;
    v132 = v108;
    *((v131 + v132 + &g_11 as &u8) as &i128) = 153455199101731938130417162574311482722;
    *((v131 + v132 + 16) as &i128) = 130770114659894476604741305542504312423;
    *((v131 + v132) as &i128) = 139735993677583343364544756668262869111;
    v108 = v132 + &g_20 as &u8;
    v123 = *((&v106 as &char + 8) as &i128);
    if v91 != 0x8000000000000000 {
        v106 = v123;
    }
    v91 = v106;
    memcpy(&v106, &v56, 588);
    v114 = v101;
    v115 = v102;
    v113 = &g_1;
    v133 = v110;
    if v133 == v109 {
        v109 = alloc::raw_vec::RawVec<T,A>::grow_one();
    }
    v134 = *((&v109 as &char + 8) as &i64);
    v135 = v133 * 16;
    *((v134 + v135) as &&i64) = &anon.aee8d0926622a1c6e97588a73d77e694.26.llvm.9973493521462227259;
    *((v134 + v135 + &g_1 as &u8) as &i64) = 14;
    v110 = v133 + &g_1 as &u8;
    memcpy(&v123, &v106, 592);
    v56 = clap_builder::builder::command::Command::arg(&v0, &v123);
    v10 = 0;
    v13 = 0;
    v15 = 0;
    v17 = 0;
    v19 = 0;
    v21 = 0;
    v23 = 0;
    v25 = 0;
    v27 = 0;
    v29 = 0;
    v34 = 0;
    v36 = 0;
    v0 = 0;
    v1 = 0;
    v2 = v122;
    v4 = 0;
    v5 = v121;
    v6 = &g_1;
    v7 = v120;
    v8 = 0;
    v9 = &g_1;
    v12 = &g_1;
    v14 = &g_1;
    v16 = &g_1;
    v18 = &g_1;
    v20 = &g_1;
    v22 = &g_1;
    v24 = &g_1;
    v26 = &g_1;
    v28 = &g_1;
    v31 = &g_1;
    v32 = 0;
    v33 = &g_1;
    v35 = &g_1;
    v37 = &g_1;
    v38 = 0;
    v39 = 0x8000000000000000;
    v40 = v119;
    v41 = 0x8000000000000000;
    v43 = v118;
    v42 = v117;
    v44 = 9223372036854775809;
    v45 = v116;
    v46 = &anon.aee8d0926622a1c6e97588a73d77e694.25.llvm.9973493521462227259;
    v47 = &g_1;
    v48 = &anon.aee8d0926622a1c6e97588a73d77e694.25.llvm.9973493521462227259;
    v49 = &g_1;
    v50 = 0;
    v51 = 4785074604081271;
    v52 = 0;
    v53 = 3337;
    v123 = struct32 {
        field_0: &g_411b78
        field_8: &g_1
        field_16: 0
        field_24: &g_1
    };
    v106 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v123);
    v32 = v108;
    v30 = v106;
    memcpy(&v106, &v0, 592);
    v123 = Argument {
        value: &g_414850
        formatter: core::fmt::num::imp::<impl core::fmt::Display for u64>::fmt
    };
    v0 = Arguments {
        pieces: ["wrap encoded lines after COLS character (default ", ", 0 to disable wrapping)"]
        args: [&v123]
        fmt: None
    };
    v105 = alloc::fmt::format::format_inner(&v0);
    v137 = v105;
    if v137 != 0x8000000000000000 {
        v0 = *((&v105 as &char + 8) as &i128);
    }
    v111 = v137;
    v112 = v0;
    memcpy(&v0, &v106, 592);
    v138 = v13;
    if v138 == *((&v10 as &char + 8) as &i64) {
        v11 = alloc::raw_vec::RawVec<T,A>::grow_one();
    }
    v139 = v12;
    v140 = v138 * 16;
    *((v139 + v140) as &&i64) = &anon.aee8d0926622a1c6e97588a73d77e694.25.llvm.9973493521462227259;
    *((v139 + v140 + &g_1 as &u8) as &&i64) = &g_1;
    v13 = v138 + &g_1 as &u8;
    memcpy(&v106, &v0, 592);
    v0 = clap_builder::builder::command::Command::arg(&v56, &v106);
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
    v84 = 0;
    v86 = 0;
    v88 = 0;
    v56 = 0;
    v57 = 0;
    v58 = &g_1;
    v59 = &g_1;
    v60 = 0;
    v61 = &g_1;
    v62 = 0;
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
    v85 = &g_1;
    v87 = &g_1;
    v89 = &g_1;
    v90 = 0;
    v91 = 0x8000000000000000;
    v92 = 0x8000000000000000;
    v93 = 9223372036854775809;
    v94 = &anon.aee8d0926622a1c6e97588a73d77e694.27.llvm.9973493521462227259;
    v95 = &g_1;
    v96 = 0;
    v98 = 0;
    v99 = 0x11000000110000;
    v100 = 0;
    v101 = 769;
    clap_builder::builder::command::Command::arg(a0, &v0, &v56);
    return a0;
}
