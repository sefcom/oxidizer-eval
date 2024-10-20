fn uu_shred::uu_app(a0: u32) -> u64 {
    let v0: i128;  // [bp-0xa88], Other Possible Types: struct712, Enum, struct64
    let v1: i64;  // [sp-0xa80]
    let v2: i64;  // [sp-0xa78]
    let v3: i64;  // [sp-0xa60]
    let v4: i64;  // [sp-0xa50]
    let v5: i64;  // [sp-0xa38]
    let v6: i64;  // [sp-0xa20]
    let v7: i64;  // [sp-0xa18]
    let v8: i128;  // [sp-0xa10]
    let v9: i64;  // [sp-0xa00]
    let v10: i128;  // [sp-0x9f8]
    let v11: i64;  // [sp-0x9e8]
    let v12: i128;  // [sp-0x9e0]
    let v13: i64;  // [sp-0x9d0]
    let v14: i128;  // [sp-0x9c8]
    let v15: i64;  // [sp-0x9b8]
    let v16: i128;  // [sp-0x9b0]
    let v17: i64;  // [sp-0x9a0]
    let v18: i128;  // [sp-0x998]
    let v19: i64;  // [sp-0x988]
    let v20: i128;  // [sp-0x980]
    let v21: i64;  // [sp-0x970]
    let v22: i128;  // [sp-0x968]
    let v23: i64;  // [sp-0x958]
    let v24: i128;  // [sp-0x950]
    let v25: i64;  // [sp-0x940]
    let v26: i128;  // [bp-0x938]
    let v27: i128;  // [bp-0x930]
    let v28: i64;  // [sp-0x928]
    let v29: i128;  // [bp-0x920]
    let v30: i64;  // [sp-0x910]
    let v31: i128;  // [sp-0x908]
    let v32: i64;  // [sp-0x8f8]
    let v33: i128;  // [bp-0x8f0]
    let v34: i128;  // [bp-0x8e8]
    let v35: i64;  // [sp-0x8e0]
    let v36: i64;  // [sp-0x8d8]
    let v37: i64;  // [sp-0x8d0]
    let v38: i64;  // [sp-0x8b8]
    let v39: i128;  // [sp-0x8b0]
    let v40: i64;  // [sp-0x890]
    let v41: i64;  // [sp-0x878]
    let v42: i64;  // [sp-0x870]
    let v43: i64;  // [sp-0x868]
    let v44: i64;  // [sp-0x860]
    let v45: i64;  // [sp-0x858]
    let v46: i32;  // [sp-0x848]
    let v47: i64;  // [bp-0x844]
    let v48: i32;  // [sp-0x840]
    let v49: i16;  // [bp-0x83c]
    let v50: i64;  // [sp-0x7c0]
    let v51: i5696;  // [sp-0x7b8], Other Possible Types: struct712, Enum, struct24
    let v52: i64;  // [sp-0x7a8]
    let v53: i64;  // [sp-0x790]
    let v54: i64;  // [sp-0x780]
    let v55: i64;  // [sp-0x768]
    let v56: i64;  // [sp-0x750]
    let v57: i64;  // [sp-0x748]
    let v58: i128;  // [sp-0x740]
    let v59: i64;  // [sp-0x730]
    let v60: i128;  // [sp-0x728]
    let v61: i64;  // [sp-0x718]
    let v62: i128;  // [sp-0x710]
    let v63: i64;  // [sp-0x700]
    let v64: i128;  // [sp-0x6f8]
    let v65: i64;  // [sp-0x6e8]
    let v66: i128;  // [sp-0x6e0]
    let v67: i64;  // [sp-0x6d0]
    let v68: i128;  // [sp-0x6c8]
    let v69: i64;  // [sp-0x6b8]
    let v70: i128;  // [sp-0x6b0]
    let v71: i64;  // [sp-0x6a0]
    let v72: i128;  // [sp-0x698]
    let v73: i64;  // [sp-0x688]
    let v74: i128;  // [sp-0x680]
    let v75: i64;  // [sp-0x670]
    let v76: i128;  // [sp-0x668]
    let v77: i64;  // [sp-0x658]
    let v78: i64;  // [bp-0x650]
    let v79: i128;  // [bp-0x648]
    let v80: i64;  // [sp-0x640]
    let v81: i128;  // [bp-0x638]
    let v82: i64;  // [sp-0x628]
    let v83: i128;  // [sp-0x620]
    let v84: i64;  // [sp-0x610]
    let v85: i64;  // [sp-0x608]
    let v86: i192;  // [sp-0x600]
    let v87: i64;  // [sp-0x5e8]
    let v88: i64;  // [sp-0x5c0]
    let v89: i64;  // [sp-0x5a8]
    let v90: i64;  // [sp-0x5a0]
    let v91: i64;  // [sp-0x598]
    let v92: i64;  // [sp-0x590]
    let v93: i64;  // [sp-0x588]
    let v94: i32;  // [sp-0x578]
    let v95: i64;  // [bp-0x574]
    let v96: i32;  // [sp-0x570]
    let v97: i16;  // [sp-0x56c]
    let v98: i64;  // [sp-0x558]
    let v99: i64;  // [sp-0x550]
    let v100: i64;  // [sp-0x4fc]
    let v101: i32;  // [sp-0x4f4]
    let v102: i192;  // [sp-0x4e8], Other Possible Types: Enum, struct24
    let v103: i64;  // [sp-0x4e0]
    let v104: i64;  // [sp-0x4d8]
    let v105: i192;  // [bp-0x390]
    let v106: i64;  // [sp-0x380]
    let v107: i128;  // [sp-0x378]
    let v108: i64;  // [sp-0x368]
    let v109: i8;  // [bp-0x360]
    let v110: i64;  // [sp-0x330]
    let v111: i128;  // [sp-0x328]
    let v112: i8;  // [sp-0x29c]
    let v113: i16;  // [sp-0x29b]
    let v114: i8;  // [sp-0x299]
    let v115: i4736;  // [bp-0x298], Other Possible Types: struct32, struct592
    let v116: i64;  // [sp-0x288]
    let v117: i64;  // [sp-0x280]
    let v118: i64;  // [sp-0x278]
    let v119: i8;  // [sp-0x4c]
    let v120: i16;  // [sp-0x4b]
    let v121: i8;  // [sp-0x49]
    let v122: i192;  // [sp-0x48], Other Possible Types: struct24
    let v124: i64;  // rbx
    let v125: i64;  // rax
    let v126: i64;  // rcx
    let v127: i64;  // rax
    let v128: i64;  // rcx
    let v130: i64;  // r13
    let v131: i64;  // rax
    let v132: i64;  // rcx
    let v133: i64;  // rbx
    let v134: i64;  // rax
    let v135: i64;  // rcx
    let v137: i64;  // r13
    let v138: i64;  // rax
    let v139: i64;  // rcx
    let v140: i64;  // r14
    let v141: i64;  // rax
    let v142: i64;  // rcx
    let v143: i64;  // rax
    let v144: i64;  // rcx
    let v145: i64;  // rax
    let v146: i64;  // rcx

    if _ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 != 2 {
        once_cell::imp::OnceCell<T>::initialize(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
    }
    v51 = clap_builder::builder::command::Command::new(g_4f4a40, g_4f4a48);
    v98 = &g_419f2d;
    v99 = &g_1;
    memcpy(&v0, &v51, 712);
    v51 = clap_builder::builder::command::Command::about(&v0, &g_419f33, 132);
    v0 = clap_builder::builder::command::Command::after_help(&v51, &g_419fb7, 1628);
    v102 = uucore::format_usage(&g_41a613, &g_11);
    v124 = v102;
    if v124 != 0x8000000000000000 {
        v51 = *((&v102 as &char + 8) as &i128);
    }
    v38 = v124;
    v39 = v51;
    memcpy(&v51, &v0, 700);
    v100 = 549755814016 | *((&v0 as &char + 700) as &i64);
    v101 = *((&v0 as &char + 708) as &i32);
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
    v35 = &g_1;
    v36 = 0;
    v37 = 0x8000000000000000;
    v38 = 0x8000000000000000;
    v40 = 9223372036854775809;
    v41 = &g_41a629;
    v42 = &g_1;
    v43 = &g_41a629;
    v44 = &g_1;
    v45 = 0;
    v47 = 0x110000;
    v49 = 3337;
    v46 = 102;
    v102 = 0;
    v103 = &g_1;
    v104 = 0;
    v102 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_21);
    v125 = v103;
    v126 = v104;
    *((v125 + v126 + &g_11 as &u8) as &i128) = 161430485872531381346017248151045893737;
    *((v125 + v126 + &g_1 as &u8) as &i128) = 154737960314090462315276525179596993390;
    *((v125 + v126) as &i128) = 148091840323243167042374857603913181283;
    v104 = v126 + &g_21 as &u8;
    v115 = *((&v102 as &char + 8) as &i128);
    if v37 != 0x8000000000000000 {
        v102 = v115;
    }
    v37 = v102;
    memcpy(&v102, &v0, 588);
    v113 = *((&v0 as &char + 589) as &i16);
    v114 = *((&v0 as &char + 591) as &i8);
    v112 = &g_1;
    v0 = clap_builder::builder::command::Command::arg(&v51, &v102);
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
    v81 = 0;
    v83 = 0;
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
    v80 = &g_1;
    v82 = &g_1;
    v84 = &g_1;
    v85 = 0;
    v86 = 0x8000000000000000;
    v87 = 0x8000000000000000;
    v88 = 9223372036854775809;
    v89 = &g_41a65e;
    v90 = &g_1;
    v91 = &g_41a65e;
    v92 = &g_1;
    v93 = 0;
    v95 = 0x110000;
    v97 = 3337;
    v94 = 110;
    v102 = 0;
    v103 = &g_1;
    v104 = 0;
    v102 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_21);
    v127 = v103;
    v128 = v104;
    *((v127 + v128 + &g_11 as &u8) as &i128) = 54763968834683552962772398143821083680;
    *((v127 + v128 + &g_1 as &u8) as &i128) = 134794381774081164022054089262480564339;
    *((v127 + v128) as &i128) = 134820126785330003970301960687114876527;
    v104 = v128 + &g_21 as &u8;
    v115 = *((&v102 as &char + 8) as &i128);
    if v86 != 0x8000000000000000 {
        v102 = v115;
    }
    v86 = v102;
    memcpy(&v102, &v51, 360);
    v107 = *((&v78 as &char + 8) as &i128);
    memcpy(&v109, &v81, 200);
    v106 = v78;
    v108 = v81;
    v115 = struct32 {
        field_0: &g_41a694
        field_8: &g_1
        field_16: 0
        field_24: &g_1
    };
    v51 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v115);
    v50 = 9223372036854775809;
    v105 = v51;
    memcpy(&v51, &v102, 360);
    v79 = v107;
    memcpy(&v81, &v109, 200);
    v78 = v106;
    v81 = v108;
    v115 = struct32 {
        field_0: &g_41a69a
        field_8: &g_1
        field_16: 0
        field_24: &g_1
    };
    v102 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v115);
    v130 = v50;
    v81 = v104;
    v79 = v102;
    memcpy(&v102, &v51, 592);
    v51 = clap_builder::builder::command::Command::arg(&v0, &v102);
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
    v35 = &g_1;
    v36 = 0;
    v37 = 0x8000000000000000;
    v38 = 0x8000000000000000;
    v40 = v130;
    v41 = &g_4115f8;
    v42 = &g_1;
    v43 = &g_4115f8;
    v44 = &g_1;
    v45 = 0;
    v46 = 4785074604081267;
    v48 = 0;
    v49 = 3337;
    v115 = struct32 {
        field_0: &g_41a69b
        field_8: &g_1
        field_16: 0
        field_24: &g_1
    };
    v102 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v115);
    v29 = v104;
    v27 = v102;
    memcpy(&v102, &v0, 592);
    v0 = 0;
    v1 = &g_1;
    v2 = 0;
    v0 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_31);
    v131 = v1;
    v132 = v2;
    *((v131 + v132 + &g_11 as &u8) as &i128) = 132109578922746704551577362444904524140;
    *((v131 + v132 + &g_1 as &u8) as &i128) = 43134468067218003953426314617662241122;
    *((v131 + v132) as &i128) = 43165802568961284356696011622319286387;
    *((v131 + v132 + &g_21 as &u8) as &i64) = 2982620404002415459;
    v2 = v132 + &g_31 as &u8;
    v133 = v0;
    v115 = *((&v0 as &char + 8) as &i128);
    if v133 != 0x8000000000000000 {
        v0 = v115;
    }
    v110 = v133;
    v111 = v0;
    memcpy(&v115, &v102, 592);
    v0 = clap_builder::builder::command::Command::arg(&v51, &v115);
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
    v81 = 0;
    v83 = 0;
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
    v80 = &g_1;
    v82 = &g_1;
    v84 = &g_1;
    v85 = 0;
    v86 = 0x8000000000000000;
    v87 = 0x8000000000000000;
    v88 = v130;
    v89 = &g_41a6d2;
    v90 = &g_1;
    v91 = 0;
    v93 = 0;
    v94 = 4785074604081269;
    v96 = 0;
    v97 = 3337;
    v102 = 0;
    v103 = &g_1;
    v104 = 0;
    v102 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_21);
    v134 = v103;
    v135 = v104;
    *((v134 + v135 + &g_11 as &u8) as &i128) = 137483775096394708674816896180492268646;
    *((v134 + v135 + &g_1 as &u8) as &i128) = 152058774373038237688003260460292861285;
    *((v134 + v135) as &i128) = 151700182005070976416019308109665232228;
    v104 = v135 + &g_21 as &u8;
    v115 = *((&v102 as &char + 8) as &i128);
    if v86 != 0x8000000000000000 {
        v102 = v115;
    }
    v86 = v102;
    memcpy(&v102, &v51, 588);
    v113 = *((&v51 as &char + 589) as &i16);
    v114 = *((&v51 as &char + 591) as &i8);
    v112 = &g_1;
    v51 = clap_builder::builder::command::Command::arg(&v0, &v102);
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
    v35 = &g_1;
    v36 = 0;
    v37 = 0x8000000000000000;
    v38 = 0x8000000000000000;
    v40 = v130;
    v41 = &g_41a6ff;
    v42 = &g_1;
    v43 = &g_41a6ff;
    v44 = &g_1;
    v45 = 0;
    v46 = 0x11000000110000;
    v48 = 0;
    v49 = 3337;
    v115 = struct32 {
        field_0: &g_41a705
        field_8: &g_1
        field_16: 0
        field_24: &g_1
    };
    v102 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v115);
    v29 = v104;
    v27 = v102;
    memcpy(&v102, &v0, 592);
    v0 = struct64 {
        field_0: &g_41a708
        field_8: &g_1
        field_16: &g_4115c0
        field_24: &g_1
        field_32: &g_413940
        field_40: &g_1
        field_48: 0
        field_56: &g_1
    };
    v122 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v0);
    v115 = clap_builder::builder::arg::Arg::value_parser(&v102, &v122);
    v116 = &g_1;
    v117 = 0;
    v118 = &g_1;
    memcpy(&v0, &v115, 432);
    memcpy(&v37, &v115, 144);
    v36 = *((&v115 as &char + 432) as &i64);
    v48 = 128 | *((&v115 as &char + 584) as &i32);
    v49 = *((&v115 as &char + 588) as &i32);
    v115 = struct32 {
        field_0: &g_413940
        field_8: &g_1
        field_16: 0
        field_24: &g_1
    };
    v102 = <alloc::vec::Vec<T> as alloc::vec::spec_from_iter::SpecFromIter<T,I>>::from_iter(&v115);
    v137 = v50;
    v36 = v104;
    v34 = v102;
    memcpy(&v102, &v0, 592);
    v0 = 0;
    v1 = &g_1;
    v2 = 0;
    v0 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_31);
    v138 = v1;
    v139 = v2;
    *((v138 + v139 + &g_11 as &u8) as &i128) = 43061772957079269457697825145040695156;
    *((v138 + v139 + &g_1 as &u8) as &i128) = 42988633716633254380829427698269905696;
    *((v138 + v139) as &i128) = 134866856427137045254428977605712243052;
    *((v138 + v139 + &g_21 as &u8) as &i64) = 8606216595622094181;
    v2 = v139 + &g_31 as &u8;
    v140 = v0;
    v115 = *((&v0 as &char + 8) as &i128);
    if v140 != 0x8000000000000000 {
        v0 = v115;
    }
    v110 = v140;
    v111 = v0;
    memcpy(&v115, &v102, 588);
    v120 = v113;
    v121 = v114;
    v119 = 0;
    v0 = clap_builder::builder::command::Command::arg(&v51, &v115);
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
    v81 = 0;
    v83 = 0;
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
    v80 = &g_1;
    v82 = &g_1;
    v84 = &g_1;
    v85 = 0;
    v86 = 0x8000000000000000;
    v87 = 0x8000000000000000;
    v88 = v137;
    v89 = &g_41a743;
    v90 = &g_1;
    v91 = &g_41a743;
    v92 = &g_1;
    v93 = 0;
    v95 = 0x110000;
    v97 = 3337;
    v94 = 118;
    v102 = 0;
    v103 = &g_1;
    v104 = 0;
    v102 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_1);
    v141 = v103;
    v142 = v104;
    *((v141 + v142 + &g_1 as &u8) as &i64) = 8319104478719472240;
    *((v141 + v142) as &i64) = 8030604370300070003;
    v104 = v142 + &g_1 as &u8;
    v115 = *((&v102 as &char + 8) as &i128);
    if v86 != 0x8000000000000000 {
        v102 = v115;
    }
    v86 = v102;
    memcpy(&v102, &v51, 588);
    v113 = *((&v51 as &char + 589) as &i16);
    v114 = *((&v51 as &char + 591) as &i8);
    v112 = &g_1;
    v51 = clap_builder::builder::command::Command::arg(&v0, &v102);
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
    v35 = &g_1;
    v36 = 0;
    v37 = 0x8000000000000000;
    v38 = 0x8000000000000000;
    v40 = v137;
    v41 = &g_41a74a;
    v42 = &g_1;
    v43 = &g_41a74a;
    v44 = &g_1;
    v45 = 0;
    v47 = 0x110000;
    v49 = 3337;
    v46 = 120;
    v102 = 0;
    v103 = &g_1;
    v104 = 0;
    v102 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_4d);
    v143 = v103;
    v144 = v104;
    *((v143 + v144 + &g_41 as &u8) as &i128) = 153387840348778298127513979533419966063;
    *((v143 + v144 + &g_31 as &u8) as &i128) = 151767884771579494632708259102723237477;
    *((v143 + v144 + &g_21 as &u8) as &i128) = 133091009877003063853593292694767680363;
    *((v143 + v144 + &g_11 as &u8) as &i128) = 132172114808635754546564293078075449445;
    *((v143 + v144 + &g_1 as &u8) as &i128) = 138842675864594124554857669376676667493;
    *((v143 + v144) as &i128) = 144103886087079881496431815191345262436;
    v104 = v144 + &g_4d as &u8;
    v115 = *((&v102 as &char + 8) as &i128);
    if v37 != 0x8000000000000000 {
        v102 = v115;
    }
    v37 = v102;
    memcpy(&v102, &v0, 588);
    v113 = *((&v0 as &char + 589) as &i16);
    v114 = *((&v0 as &char + 591) as &i8);
    v112 = &g_1;
    v0 = clap_builder::builder::command::Command::arg(&v51, &v102);
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
    v81 = 0;
    v83 = 0;
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
    v80 = &g_1;
    v82 = &g_1;
    v84 = &g_1;
    v85 = 0;
    v86 = 0x8000000000000000;
    v87 = 0x8000000000000000;
    v88 = v137;
    v89 = &g_4115c8;
    v90 = &g_1;
    v91 = &g_4115c8;
    v92 = &g_1;
    v93 = 0;
    v95 = 0x110000;
    v97 = 3337;
    v94 = 122;
    v102 = 0;
    v103 = &g_1;
    v104 = 0;
    v102 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_31);
    v145 = v103;
    v146 = v104;
    *((v145 + v146 + &g_11 as &u8) as &i128) = 140090205521681991600113962663568962592;
    *((v145 + v146 + &g_1 as &u8) as &i128) = 153439884701098271579798999987120599671;
    *((v145 + v146) as &i128) = 152058815630886241491053985697072702561;
    *((v145 + v146 + &g_21 as &u8) as &i16) = 26478;
    v104 = v146 + &g_31 as &u8;
    v115 = *((&v102 as &char + 8) as &i128);
    if v86 != 0x8000000000000000 {
        v102 = v115;
    }
    v86 = v102;
    memcpy(&v102, &v51, 588);
    v113 = *((&v51 as &char + 589) as &i16);
    v114 = *((&v51 as &char + 591) as &i8);
    v112 = &g_1;
    v51 = clap_builder::builder::command::Command::arg(&v0, &v102);
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
    v35 = &g_1;
    v36 = 0;
    v37 = 0x8000000000000000;
    v38 = 0x8000000000000000;
    v40 = v137;
    v41 = &g_4115f4;
    v42 = &g_1;
    v43 = 0;
    v45 = 0;
    v46 = 0x11000000110000;
    v48 = 0;
    v49 = 769;
    clap_builder::builder::command::Command::arg(a0, &v51, &v0);
    return a0;
}
