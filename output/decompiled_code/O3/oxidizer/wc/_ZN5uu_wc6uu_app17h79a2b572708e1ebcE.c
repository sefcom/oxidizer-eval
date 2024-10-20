fn uu_wc::uu_app(a0: u32) -> u64 {
    let v0: i5696;  // [sp-0xab8], Other Possible Types: struct712, Enum
    let v1: i64;  // [sp-0xab0]
    let v2: i64;  // [sp-0xaa8]
    let v3: i64;  // [sp-0xa90]
    let v4: i64;  // [sp-0xa80]
    let v5: i64;  // [sp-0xa68]
    let v6: i64;  // [sp-0xa50]
    let v7: i64;  // [sp-0xa48]
    let v8: i128;  // [sp-0xa40]
    let v9: i64;  // [sp-0xa30]
    let v10: i128;  // [sp-0xa28]
    let v11: i64;  // [sp-0xa18]
    let v12: i128;  // [sp-0xa10]
    let v13: i64;  // [sp-0xa00]
    let v14: i128;  // [sp-0x9f8]
    let v15: i64;  // [sp-0x9e8]
    let v16: i128;  // [sp-0x9e0]
    let v17: i64;  // [sp-0x9d0]
    let v18: i128;  // [sp-0x9c8]
    let v19: i64;  // [sp-0x9b8]
    let v20: i128;  // [sp-0x9b0]
    let v21: i64;  // [sp-0x9a0]
    let v22: i128;  // [sp-0x998]
    let v23: i64;  // [sp-0x988]
    let v24: i128;  // [sp-0x980]
    let v25: i64;  // [sp-0x970]
    let v26: i128;  // [bp-0x968]
    let v27: i128;  // [bp-0x960]
    let v28: i64;  // [sp-0x958]
    let v29: i64;  // [bp-0x950]
    let v30: i64;  // [sp-0x940]
    let v31: i128;  // [sp-0x938]
    let v32: i64;  // [sp-0x928]
    let v33: i128;  // [sp-0x920]
    let v34: i64;  // [sp-0x910]
    let v35: i64;  // [sp-0x908]
    let v36: i64;  // [sp-0x900]
    let v37: i64;  // [sp-0x8e8]
    let v38: i128;  // [sp-0x8e0]
    let v39: i64;  // [sp-0x8c0]
    let v40: i64;  // [sp-0x8a8]
    let v41: i64;  // [sp-0x8a0]
    let v42: i64;  // [sp-0x898]
    let v43: i64;  // [sp-0x890]
    let v44: i64;  // [sp-0x888]
    let v45: i64;  // [sp-0x878]
    let v46: i32;  // [sp-0x870]
    let v47: i16;  // [sp-0x86c]
    let v48: i64;  // [sp-0x858]
    let v49: i64;  // [sp-0x850]
    let v50: i192;  // [bp-0x7e8], Other Possible Types: struct712, struct24, Enum
    let v51: i64;  // [sp-0x7e0]
    let v52: i64;  // [sp-0x7d8]
    let v53: i64;  // [sp-0x7c0]
    let v54: i64;  // [sp-0x7b0]
    let v55: i64;  // [sp-0x798]
    let v56: i64;  // [sp-0x780]
    let v57: i64;  // [sp-0x778]
    let v58: i128;  // [sp-0x770]
    let v59: i64;  // [sp-0x760]
    let v60: i128;  // [sp-0x758]
    let v61: i64;  // [sp-0x748]
    let v62: i128;  // [sp-0x740]
    let v63: i64;  // [sp-0x730]
    let v64: i128;  // [sp-0x728]
    let v65: i64;  // [sp-0x718]
    let v66: i128;  // [sp-0x710]
    let v67: i64;  // [sp-0x700]
    let v68: i128;  // [sp-0x6f8]
    let v69: i64;  // [sp-0x6e8]
    let v70: i128;  // [sp-0x6e0]
    let v71: i64;  // [sp-0x6d0]
    let v72: i128;  // [sp-0x6c8]
    let v73: i64;  // [sp-0x6b8]
    let v74: i128;  // [sp-0x6b0]
    let v75: i64;  // [sp-0x6a0]
    let v76: i128;  // [bp-0x698]
    let v77: i128;  // [bp-0x690]
    let v78: i64;  // [sp-0x688]
    let v79: i128;  // [bp-0x680]
    let v80: i64;  // [sp-0x670]
    let v81: i128;  // [sp-0x668]
    let v82: i64;  // [sp-0x658]
    let v83: i128;  // [sp-0x650]
    let v84: i64;  // [sp-0x640]
    let v85: i64;  // [sp-0x638]
    let v86: i192;  // [sp-0x630]
    let v87: i64;  // [sp-0x618]
    let v88: i64;  // [sp-0x5f0]
    let v89: i64;  // [sp-0x5d8]
    let v90: i64;  // [sp-0x5d0]
    let v91: i64;  // [sp-0x5c8]
    let v92: i64;  // [sp-0x5c0]
    let v93: i64;  // [sp-0x5b8]
    let v94: i64;  // [sp-0x5a8]
    let v95: i32;  // [sp-0x5a0]
    let v96: i16;  // [sp-0x59c]
    let v97: i8;  // [bp-0x599]
    let v98: i64;  // [sp-0x52c]
    let v99: i32;  // [sp-0x524]
    let v100: i64;  // [sp-0x510]
    let v101: i8;  // [bp-0x508]
    let v102: i8;  // [bp-0x500]
    let v103: i4736;  // [sp-0x4f8], Other Possible Types: Enum, struct592, struct24, struct80
    let v104: i64;  // [sp-0x4f0]
    let v105: i64;  // [sp-0x4e8]
    let v106: i64;  // [sp-0x340]
    let v107: i128;  // [sp-0x338]
    let v108: i8;  // [sp-0x2ac]
    let v109: i8;  // [bp-0x2ab]
    let v110: i8;  // [sp-0x2a9]
    let v111: struct32;  // [bp-0x2a8]
    let v112: i192;  // [bp-0x288], Other Possible Types: struct24, struct32
    let v113: i64;  // [sp-0x280]
    let v114: i64;  // [sp-0x278]
    let v115: i64;  // [sp-0xd0]
    let v116: i128;  // [sp-0xc8]
    let v117: i32;  // [sp-0x40]
    let v118: i32;  // [sp-0x3c]
    let v120: i64;  // rbx
    let v121: i64;  // rax
    let v122: i64;  // rcx
    let v123: i64;  // rax
    let v124: i64;  // rcx
    let v125: i64;  // rcx
    let v126: i64;  // rdx
    let v127: i64;  // r14
    let v128: i64;  // rax
    let v129: i64;  // rcx
    let v130: i64;  // rax
    let v131: i64;  // rcx
    let v132: i64;  // rcx
    let v133: i64;  // rdx
    let v134: i64;  // rbx
    let v135: i64;  // rax
    let v136: i64;  // rcx

    if _ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 != 2 {
        once_cell::imp::OnceCell<T>::initialize(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
    }
    v0 = clap_builder::builder::command::Command::new(g_4f8220, g_4f8228);
    v48 = &g_419dc7;
    v49 = &g_1;
    memcpy(&v50, &v0, 712);
    v0 = clap_builder::builder::command::Command::about(&v50, &g_419dcd, 160);
    v103 = uucore::format_usage(&g_419e6d, &g_11);
    v120 = v103;
    if v120 != 0x8000000000000000 {
        v50 = *((&v103 as &char + 8) as &i128);
    }
    v37 = v120;
    v38 = v50;
    memcpy(&v50, &v0, 700);
    v98 = 584115552392 | *((&v0 as &char + 700) as &i64);
    v99 = *((&v0 as &char + 708) as &i32);
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
    v29 = 0;
    v31 = 0;
    v33 = 0;
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
    v28 = &g_1;
    v30 = &g_1;
    v32 = &g_1;
    v34 = &g_1;
    v35 = 0;
    v36 = 0x8000000000000000;
    v37 = 0x8000000000000000;
    v39 = 9223372036854775809;
    v40 = &anon.777bb9d9a47a4fd760482fbc11f41de2.2.llvm.10162994613922154447;
    v41 = &g_1;
    v42 = &anon.777bb9d9a47a4fd760482fbc11f41de2.2.llvm.10162994613922154447;
    v43 = &g_1;
    v44 = 0;
    v45 = 4785074604081251;
    v46 = 0;
    v47 = 3337;
    v103 = 0;
    v104 = &g_1;
    v105 = 0;
    v103 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_11);
    v121 = v104;
    v122 = v105;
    *((v121 + v122) as &i128) = 131761782833582920280046121183582188144;
    *((v121 + v122 + &g_1 as &u8) as &i64) = 8319395862319145061;
    v105 = v122 + &g_11 as &u8;
    v112 = *((&v103 as &char + 8) as &i128);
    if v36 != 0x8000000000000000 {
        v103 = v112;
    }
    v36 = v103;
    memcpy(&v103, &v0, 588);
    v109 = *((&v0 as &char + 589) as &i16);
    v110 = *((&v0 as &char + 591) as &i8);
    v108 = &g_1;
    v0 = clap_builder::builder::command::Command::arg(&v50, &v103);
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
    v79 = 0;
    v81 = 0;
    v83 = 0;
    v50 = 0;
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
    v78 = &g_1;
    v80 = &g_1;
    v82 = &g_1;
    v84 = &g_1;
    v85 = 0;
    v86 = 0x8000000000000000;
    v87 = 0x8000000000000000;
    v88 = 9223372036854775809;
    v89 = &anon.777bb9d9a47a4fd760482fbc11f41de2.3.llvm.10162994613922154447;
    v90 = &g_1;
    v91 = &anon.777bb9d9a47a4fd760482fbc11f41de2.3.llvm.10162994613922154447;
    v92 = &g_1;
    v93 = 0;
    v94 = 4785074604081261;
    v95 = 0;
    v96 = 3337;
    v103 = 0;
    v104 = &g_1;
    v105 = 0;
    v103 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_11);
    v123 = v104;
    v124 = v105;
    *((v123 + v124 + &g_1 as &u8) as &i128) = 153465766320079454213799486662306261091;
    *((v123 + v124) as &i128) = 132099544290117407535450448942766584432;
    v105 = v124 + &g_11 as &u8;
    v112 = *((&v103 as &char + 8) as &i128);
    if v86 != 0x8000000000000000 {
        v103 = v112;
    }
    v86 = v103;
    memcpy(&v103, &v50, 588);
    v109 = v96;
    v110 = v97;
    v108 = &g_1;
    v50 = clap_builder::builder::command::Command::arg(&v0, &v103);
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
    v31 = 0;
    v33 = 0;
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
    v28 = &g_1;
    v29 = 0;
    v30 = &g_1;
    v32 = &g_1;
    v34 = &g_1;
    v35 = 0;
    v36 = 0x8000000000000000;
    v37 = 0x8000000000000000;
    v39 = 9223372036854775809;
    v40 = &anon.777bb9d9a47a4fd760482fbc11f41de2.4.llvm.10162994613922154447;
    v41 = &g_1;
    v42 = &anon.777bb9d9a47a4fd760482fbc11f41de2.4.llvm.10162994613922154447;
    v43 = &g_1;
    v44 = 0;
    v45 = 0x11000000110000;
    v46 = 0;
    v47 = 3337;
    v112 = struct32 {
        field_0: &g_419eb4
        field_8: &g_1
        field_16: 0
        field_24: &g_1
    };
    v103 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v112);
    v29 = v105;
    v27 = v103;
    memcpy(&v103, &v0, 592);
    v0 = 0;
    v1 = &g_1;
    v2 = 0;
    v0 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_71);
    v125 = v1;
    v126 = v2;
    *((v125 + v126 + &g_51 as &u8) as &i128) = 129456584063217928744894574816789884257;
    *((v125 + v126 + &g_41 as &u8) as &i128) = 146383268993301946241783331493035144041;
    *((v125 + v126 + &g_31 as &u8) as &i128) = 42899413786225881822986849158372615712;
    *((v125 + v126 + &g_21 as &u8) as &i128) = 146760928886223127921585503357293717869;
    *((v125 + v126 + &g_11 as &u8) as &i128) = 152058769850597752215459688707141166441;
    *((v125 + v126 + &g_1 as &u8) as &i128) = 136128462735604252206911772529158088820;
    *((v125 + v126) as &i128) = 43103516633780842694870656851669771634;
    *((v125 + v126 + &g_61 as &u8) as &i64) = 8391737100187231346;
    v2 = v126 + &g_71 as &u8;
    v127 = v0;
    v112 = *((&v0 as &char + 8) as &i128);
    if v127 != 0x8000000000000000 {
        v0 = v112;
    }
    v106 = v127;
    v107 = v0;
    memcpy(&v0, &v103, 592);
    v100 = &g_1;
    v114 = v102;
    v112 = v100;
    v113 = v101;
    v103 = clap_builder::builder::arg::Arg::value_parser(&v0, &v112);
    *(&v109 as &&i64) = &g_1;
    memcpy(&v112, &v103, 592);
    v0 = clap_builder::builder::command::Command::arg(&v50, &v112);
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
    v79 = 0;
    v81 = 0;
    v83 = 0;
    v50 = 0;
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
    v78 = &g_1;
    v80 = &g_1;
    v82 = &g_1;
    v84 = &g_1;
    v85 = 0;
    v86 = 0x8000000000000000;
    v87 = 0x8000000000000000;
    v88 = 9223372036854775809;
    v89 = &anon.777bb9d9a47a4fd760482fbc11f41de2.5.llvm.10162994613922154447;
    v90 = &g_1;
    v91 = &anon.777bb9d9a47a4fd760482fbc11f41de2.5.llvm.10162994613922154447;
    v92 = &g_1;
    v93 = 0;
    v94 = 4785074604081260;
    v95 = 0;
    v96 = 3337;
    v103 = 0;
    v104 = &g_1;
    v105 = 0;
    v103 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_11);
    v128 = v104;
    v129 = v105;
    *((v128 + v129) as &i128) = 146762470666266557316765179665690751600;
    *((v128 + v129 + &g_1 as &u8) as &i64) = 8319395862319145061;
    v105 = v129 + &g_11 as &u8;
    v112 = *((&v103 as &char + 8) as &i128);
    if v86 != 0x8000000000000000 {
        v103 = v112;
    }
    v86 = v103;
    memcpy(&v103, &v50, 588);
    v109 = *((&v50 as &char + 589) as &i16);
    v110 = *((&v50 as &char + 591) as &i8);
    v108 = &g_1;
    v50 = clap_builder::builder::command::Command::arg(&v0, &v103);
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
    v29 = 0;
    v31 = 0;
    v33 = 0;
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
    v28 = &g_1;
    v30 = &g_1;
    v32 = &g_1;
    v34 = &g_1;
    v35 = 0;
    v36 = 0x8000000000000000;
    v37 = 0x8000000000000000;
    v39 = 9223372036854775809;
    v40 = &anon.777bb9d9a47a4fd760482fbc11f41de2.6.llvm.10162994613922154447;
    v41 = &g_1;
    v42 = &anon.777bb9d9a47a4fd760482fbc11f41de2.6.llvm.10162994613922154447;
    v43 = &g_1;
    v44 = 0;
    v45 = 4785074604081228;
    v46 = 0;
    v47 = 3337;
    v103 = 0;
    v104 = &g_1;
    v105 = 0;
    v103 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_21);
    v130 = v104;
    v131 = v105;
    *((v130 + v131 + &g_1 as &u8) as &i128) = 43139942811866645849646710993948405536;
    *((v130 + v131) as &i128) = 138844115831897046444885785427128709744;
    *((v130 + v131 + &g_11 as &u8) as &i32) = 1701734764;
    v105 = v131 + &g_21 as &u8;
    v112 = *((&v103 as &char + 8) as &i128);
    if v36 != 0x8000000000000000 {
        v103 = v112;
    }
    v36 = v103;
    memcpy(&v103, &v0, 588);
    v109 = *((&v0 as &char + 589) as &i16);
    v110 = *((&v0 as &char + 591) as &i8);
    v108 = &g_1;
    v0 = clap_builder::builder::command::Command::arg(&v50, &v103);
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
    v79 = 0;
    v81 = 0;
    v83 = 0;
    v50 = struct24 {
        field_80: 0
        field_88: <UNKNOWN>
        field_96: 0
    };
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
    v78 = &g_1;
    v80 = &g_1;
    v82 = &g_1;
    v84 = &g_1;
    v85 = 0;
    v86 = 0x8000000000000000;
    v87 = 0x8000000000000000;
    v88 = 9223372036854775809;
    v89 = &anon.777bb9d9a47a4fd760482fbc11f41de2.7.llvm.10162994613922154447;
    v90 = &g_1;
    v91 = &anon.777bb9d9a47a4fd760482fbc11f41de2.7.llvm.10162994613922154447;
    v92 = &g_1;
    v93 = 0;
    v94 = 0x11000000110000;
    v95 = 0;
    v96 = 3337;
    v103 = struct80 {
        field_0: &g_413438
        field_8: &g_1
        field_16: &g_419d73
        field_24: &g_1
        field_32: &g_413468
        field_40: &g_1
        field_48: &g_419d79
        field_56: &g_1
        field_64: 0
        field_72: &g_1
    };
    v112 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v103);
    v103 = clap_builder::builder::arg::Arg::value_parser(&v50, &v112);
    memcpy(&v50, &v103, 592);
    v111 = struct32 {
        field_0: &g_41344c
        field_8: &g_1
        field_16: 0
        field_24: &g_1
    };
    v112 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v111);
    v79 = v114;
    v77 = v112;
    memcpy(&v112, &v50, 584);
    v117 = v95 | &g_1;
    v118 = *((&v50 as &char + 588) as &i32);
    v50 = 0;
    v51 = &g_1;
    v52 = 0;
    v50 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_41);
    v132 = v51;
    v133 = v52;
    *((v132 + v133 + &g_31 as &u8) as &i128) = 152058814862652318669893917188872698209;
    *((v132 + v133 + &g_21 as &u8) as &i128) = 158740869501911586085820394046889160289;
    *((v132 + v133 + &g_11 as &u8) as &i128) = 131761312599260333176326126472070000483;
    *((v132 + v133 + &g_1 as &u8) as &i128) = 43098040544530699711319205136135252332;
    *((v132 + v133) as &i128) = 43039606922140183430565102668407466103;
    v52 = v133 + &g_41 as &u8;
    v134 = v50;
    v103 = *((&v50 as &char + 8) as &i128);
    if v134 != 0x8000000000000000 {
        v50 = v103;
    }
    v115 = v134;
    v116 = v50;
    memcpy(&v103, &v112, 592);
    v50 = clap_builder::builder::command::Command::arg(&v0, &v103);
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
    v29 = 0;
    v31 = 0;
    v33 = 0;
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
    v28 = &g_1;
    v30 = &g_1;
    v32 = &g_1;
    v34 = &g_1;
    v35 = 0;
    v36 = 0x8000000000000000;
    v37 = 0x8000000000000000;
    v39 = 9223372036854775809;
    v40 = &anon.777bb9d9a47a4fd760482fbc11f41de2.8.llvm.10162994613922154447;
    v41 = &g_1;
    v42 = &anon.777bb9d9a47a4fd760482fbc11f41de2.8.llvm.10162994613922154447;
    v43 = &g_1;
    v44 = 0;
    v45 = 4785074604081271;
    v46 = 0;
    v47 = 3337;
    v103 = 0;
    v104 = &g_1;
    v105 = 0;
    v103 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_11);
    v135 = v104;
    v136 = v105;
    *((v135 + v136) as &i128) = 131761762389647528943845478574664020592;
    *((v135 + v136 + &g_1 as &u8) as &i64) = 8319395862319145060;
    v105 = v136 + &g_11 as &u8;
    v112 = *((&v103 as &char + 8) as &i128);
    if v36 != 0x8000000000000000 {
        v103 = v112;
    }
    v36 = v103;
    memcpy(&v103, &v0, 588);
    v109 = *((&v0 as &char + 589) as &i16);
    v110 = *((&v0 as &char + 591) as &i8);
    v108 = &g_1;
    v0 = clap_builder::builder::command::Command::arg(&v50, &v103);
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
    v79 = 0;
    v81 = 0;
    v83 = 0;
    v50 = 0;
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
    v78 = &g_1;
    v80 = &g_1;
    v82 = &g_1;
    v84 = &g_1;
    v85 = 0;
    v86 = 0x8000000000000000;
    v87 = 0x8000000000000000;
    v88 = 9223372036854775809;
    v89 = &g_419d46;
    v90 = &g_1;
    v91 = 0;
    v93 = 0;
    v94 = 0x11000000110000;
    v95 = 0;
    v96 = 3329;
    v103 = clap_builder::builder::arg::Arg::value_parser(&v50, &v100);
    *(&v109 as &&i64) = &g_1;
    memcpy(&v50, &v103, 592);
    clap_builder::builder::command::Command::arg(a0, &v0, &v50);
    return a0;
}
