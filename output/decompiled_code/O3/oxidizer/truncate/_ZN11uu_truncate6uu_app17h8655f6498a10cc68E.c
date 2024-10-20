fn uu_truncate::uu_app(a0: u32) -> u64 {
    let v0: i64;  // [sp-0xa78], Other Possible Types: struct712, Enum, struct24
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
    let v19: struct16;  // [sp-0x980]
    let v20: i64;  // [sp-0x978]
    let v21: i128;  // [bp-0x970]
    let v22: i64;  // [sp-0x960]
    let v23: i128;  // [sp-0x958]
    let v24: i64;  // [sp-0x948]
    let v25: i128;  // [sp-0x940]
    let v26: i64;  // [sp-0x930]
    let v27: i128;  // [sp-0x928]
    let v28: i64;  // [sp-0x918]
    let v29: i128;  // [bp-0x910]
    let v30: i64;  // [sp-0x900]
    let v31: i128;  // [sp-0x8f8]
    let v32: i64;  // [sp-0x8e8]
    let v33: i128;  // [sp-0x8e0]
    let v34: i64;  // [sp-0x8d0]
    let v35: i64;  // [sp-0x8c8]
    let v36: i64;  // [sp-0x8c0]
    let v37: i64;  // [sp-0x8a8]
    let v38: i128;  // [sp-0x8a0]
    let v39: i64;  // [sp-0x880]
    let v40: i64;  // [sp-0x868]
    let v41: i64;  // [sp-0x860]
    let v42: i64;  // [sp-0x858]
    let v43: i64;  // [sp-0x850]
    let v44: i64;  // [sp-0x848]
    let v45: i64;  // [sp-0x838]
    let v46: i32;  // [sp-0x830]
    let v47: i16;  // [bp-0x82c]
    let v48: i64;  // [sp-0x818]
    let v49: i64;  // [sp-0x810]
    let v50: i128;  // [bp-0x7a8], Other Possible Types: struct712, Enum
    let v51: i64;  // [sp-0x7a0]
    let v52: i64;  // [sp-0x798]
    let v53: i64;  // [sp-0x780]
    let v54: i64;  // [sp-0x770]
    let v55: i64;  // [sp-0x758]
    let v56: i64;  // [sp-0x740]
    let v57: i64;  // [sp-0x738]
    let v58: i128;  // [sp-0x730]
    let v59: i64;  // [sp-0x720]
    let v60: i128;  // [sp-0x718]
    let v61: i64;  // [sp-0x708]
    let v62: i128;  // [sp-0x700]
    let v63: i64;  // [sp-0x6f0]
    let v64: i128;  // [sp-0x6e8]
    let v65: i64;  // [sp-0x6d8]
    let v66: i128;  // [sp-0x6d0]
    let v67: i64;  // [sp-0x6c0]
    let v68: i128;  // [sp-0x6b8]
    let v69: struct16;  // [sp-0x6b0]
    let v70: i64;  // [sp-0x6a8]
    let v71: i128;  // [bp-0x6a0]
    let v72: i64;  // [sp-0x690]
    let v73: i128;  // [sp-0x688]
    let v74: i64;  // [sp-0x678]
    let v75: i128;  // [sp-0x670]
    let v76: i64;  // [sp-0x660]
    let v77: i128;  // [sp-0x658]
    let v78: i64;  // [sp-0x648]
    let v79: i64;  // [bp-0x640]
    let v80: i64;  // [sp-0x630]
    let v81: i128;  // [sp-0x628]
    let v82: i64;  // [sp-0x618]
    let v83: i128;  // [sp-0x610]
    let v84: i64;  // [sp-0x600]
    let v85: i64;  // [sp-0x5f8]
    let v86: i64;  // [sp-0x5f0]
    let v87: i64;  // [sp-0x5d8]
    let v88: i64;  // [sp-0x5b0]
    let v89: i64;  // [sp-0x598]
    let v90: i64;  // [sp-0x590]
    let v91: i64;  // [sp-0x588]
    let v92: i64;  // [sp-0x580]
    let v93: i64;  // [sp-0x578]
    let v94: i64;  // [sp-0x568]
    let v95: i32;  // [sp-0x560]
    let v96: i16;  // [sp-0x55c]
    let v97: i8;  // [bp-0x559]
    let v98: i64;  // [sp-0x4ec]
    let v99: i32;  // [sp-0x4e4]
    let v100: i128;  // [sp-0x4d8], Other Possible Types: struct592, Enum, struct24
    let v101: i64;  // [sp-0x4d0]
    let v102: i64;  // [sp-0x4c8]
    let v103: i8;  // [bp-0x370]
    let v104: i8;  // [bp-0x368]
    let v105: i64;  // [sp-0x320]
    let v106: i128;  // [sp-0x318]
    let v107: i8;  // [sp-0x28c]
    let v108: i8;  // [bp-0x28b]
    let v109: i8;  // [sp-0x289]
    let v110: i128;  // [bp-0x288], Other Possible Types: struct16
    let v112: i64;  // rbx
    let v113: i64;  // rax
    let v114: i64;  // rcx
    let v115: i64;  // rax
    let v116: i64;  // rcx
    let v117: i64;  // r14
    let v119: i64;  // rax
    let v120: i64;  // rcx
    let v121: i64;  // rcx
    let v122: i64;  // rdx
    let v123: i64;  // r14
    let v125: i64;  // rbx
    let v127: i64;  // rax
    let v128: i64;  // rcx
    let v129: i64;  // rcx
    let v130: i64;  // rdx
    let v131: i64;  // rbx

    if _ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 != 2 {
        once_cell::imp::OnceCell<T>::initialize(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
    }
    v0 = clap_builder::builder::command::Command::new(g_4e4e30, g_4e4e38);
    v48 = &g_418f6e;
    v49 = &g_1;
    memcpy(&v50, &v0, 712);
    v0 = clap_builder::builder::command::Command::about(&v50, &g_418f74, &g_31);
    v100 = uucore::format_usage(&g_418fb1, &g_11);
    v112 = v100;
    if v112 != 0x8000000000000000 {
        v50 = *((&v100 as &char + 8) as &i128);
    }
    v37 = v112;
    v38 = v50;
    memcpy(&v50, &v0, 700);
    v98 = 549755814016 | *((&v0 as &char + 700) as &i64);
    v99 = *((&v0 as &char + 708) as &i32);
    v8 = 0;
    v10 = 0;
    v12 = 0;
    v14 = 0;
    v16 = 0;
    v18 = 0;
    v21 = 0;
    v23 = 0;
    v25 = 0;
    v27 = 0;
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
    v39 = 9223372036854775809;
    v40 = &anon.ebe00b04e89979ab4e585c1b16fe1422.12.llvm.10932335356487094860;
    v41 = &g_1;
    v42 = &anon.ebe00b04e89979ab4e585c1b16fe1422.12.llvm.10932335356487094860;
    v43 = &g_1;
    v44 = 0;
    v45 = 4785074604081263;
    v46 = 0;
    v47 = 3337;
    v100 = 0;
    v101 = &g_1;
    v102 = 0;
    v100 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_51);
    v113 = v101;
    v114 = v102;
    *((v113 + v114 + &g_31 as &u8) as &i128) = 102710371983979054000104916701747180665;
    *((v113 + v114 + &g_21 as &u8) as &i128) = 130432735868909865238532127281876329836;
    *((v113 + v114 + &g_11 as &u8) as &i128) = 140099210908465279288959573736192699490;
    *((v113 + v114 + &g_1 as &u8) as &i128) = 42946446383876150014484551168068296805;
    *((v113 + v114) as &i128) = 138842676175626355868433888324272616052;
    *((v113 + v114 + &g_41 as &u8) as &i64) = 2973577882364104005;
    v102 = v114 + &g_51 as &u8;
    v110 = *((&v100 as &char + 8) as &i128);
    if v36 != 0x8000000000000000 {
        v100 = v110;
    }
    v36 = v100;
    memcpy(&v100, &v0, 588);
    v108 = *((&v0 as &char + 589) as &i16);
    v109 = *((&v0 as &char + 591) as &i8);
    v107 = &g_1;
    v0 = clap_builder::builder::command::Command::arg(&v50, &v100);
    v58 = 0;
    v60 = 0;
    v62 = 0;
    v64 = 0;
    v66 = 0;
    v68 = 0;
    v71 = 0;
    v73 = 0;
    v75 = 0;
    v77 = 0;
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
    v70 = &g_1;
    v72 = &g_1;
    v74 = &g_1;
    v76 = &g_1;
    v78 = &g_1;
    v80 = &g_1;
    v82 = &g_1;
    v84 = &g_1;
    v85 = 0;
    v86 = 0x8000000000000000;
    v87 = 0x8000000000000000;
    v88 = 9223372036854775809;
    v89 = &anon.ebe00b04e89979ab4e585c1b16fe1422.13.llvm.10932335356487094860;
    v90 = &g_1;
    v91 = &anon.ebe00b04e89979ab4e585c1b16fe1422.13.llvm.10932335356487094860;
    v92 = &g_1;
    v93 = 0;
    v94 = 4785074604081251;
    v95 = 0;
    v96 = 3337;
    v100 = 0;
    v101 = &g_1;
    v102 = 0;
    v100 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_21);
    v115 = v101;
    v116 = v102;
    *((v115 + v116 + &g_1 as &u8) as &i128) = 43139862373309413757916019127810745708;
    *((v115 + v116) as &i128) = 140099210912156455880026593485020753764;
    *((v115 + v116 + &g_11 as &u8) as &i64) = 8391166496534983791;
    v102 = v116 + &g_21 as &u8;
    v110 = *((&v100 as &char + 8) as &i128);
    if v86 != 0x8000000000000000 {
        v100 = v110;
    }
    v86 = v100;
    memcpy(&v100, &v50, 588);
    v108 = v96;
    v109 = v97;
    v107 = &g_1;
    v50 = clap_builder::builder::command::Command::arg(&v0, &v100);
    v8 = 0;
    v10 = 0;
    v12 = 0;
    v14 = 0;
    v16 = 0;
    v18 = 0;
    v21 = 0;
    v23 = 0;
    v25 = 0;
    v27 = 0;
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
    v39 = 9223372036854775809;
    v40 = &anon.ebe00b04e89979ab4e585c1b16fe1422.14.llvm.10932335356487094860;
    v41 = &g_1;
    v42 = &anon.ebe00b04e89979ab4e585c1b16fe1422.14.llvm.10932335356487094860;
    v43 = &g_1;
    v44 = 0;
    v45 = 4785074604081266;
    v46 = 0;
    v47 = 3337;
    v117 = v21;
    v119 = &g_1;
    if v117 == *((&v18 as &char + 8) as &i64) {
        v19 = alloc::raw_vec::RawVec<T,A>::grow_one();
        v119 = v20;
    }
    v120 = v117 * &g_1;
    *((v119 + v120) as &&i64) = &anon.ebe00b04e89979ab4e585c1b16fe1422.15.llvm.10932335356487094860;
    *((v119 + v120 + &g_1 as &u8) as &&i64) = &g_1;
    v21 = v117 + &g_1 as &u8;
    memcpy(&v100, &v0, 592);
    v0 = 0;
    v2 = 0;
    v0 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_21);
    v121 = v1;
    v122 = v2;
    *((v121 + v122 + &g_11 as &u8) as &i128) = 92112832457697224863457799807562704232;
    *((v121 + v122 + &g_1 as &u8) as &i128) = 138842675783818484884691067456383444256;
    *((v121 + v122) as &i128) = 136158257598395167776119061394689843554;
    v2 = v122 + &g_21 as &u8;
    v123 = v0;
    v110 = *((&v0 as &char + 8) as &i128);
    if v123 != 0x8000000000000000 {
        v0 = v110;
    }
    v105 = v123;
    v106 = v0;
    memcpy(&v0, &v100, 360);
    memcpy(&v29, &v104, 224);
    v29 = v103;
    v110 = struct16 {
        field_0: &g_419073
        field_8: &g_1
    };
    v100 = clap_builder::builder::arg::Arg::value_names(&v0, &v110);
    *(&v108 as &&i64) = &g_1;
    memcpy(&v110, &v100, 592);
    v0 = clap_builder::builder::command::Command::arg(&v50, &v110);
    v58 = 0;
    v60 = 0;
    v62 = 0;
    v64 = 0;
    v66 = 0;
    v68 = 0;
    v71 = 0;
    v73 = 0;
    v75 = 0;
    v77 = 0;
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
    v70 = &g_1;
    v72 = &g_1;
    v74 = &g_1;
    v76 = &g_1;
    v78 = &g_1;
    v80 = &g_1;
    v82 = &g_1;
    v84 = &g_1;
    v85 = 0;
    v86 = 0x8000000000000000;
    v87 = 0x8000000000000000;
    v88 = 9223372036854775809;
    v89 = &anon.ebe00b04e89979ab4e585c1b16fe1422.15.llvm.10932335356487094860;
    v90 = &g_1;
    v91 = &anon.ebe00b04e89979ab4e585c1b16fe1422.15.llvm.10932335356487094860;
    v92 = &g_1;
    v93 = 0;
    v94 = 4785074604081267;
    v95 = 0;
    v96 = 3337;
    v125 = v71;
    v127 = &g_1;
    if v125 == *((&v68 as &char + 8) as &i64) {
        v69 = alloc::raw_vec::RawVec<T,A>::grow_one();
        v127 = v70;
    }
    v128 = v125 * &g_1;
    *((v127 + v128) as &&i64) = &anon.ebe00b04e89979ab4e585c1b16fe1422.14.llvm.10932335356487094860;
    *((v127 + v128 + &g_1 as &u8) as &&i64) = &g_1;
    v71 = v125 + &g_1 as &u8;
    memcpy(&v100, &v50, 592);
    v50 = 0;
    v51 = &g_1;
    v52 = 0;
    v50 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_61);
    v129 = v51;
    v130 = v52;
    *((v129 + v130 + &g_41 as &u8) as &i128) = 153029713820842977718913944157331991853;
    *((v129 + v130 + &g_31 as &u8) as &i128) = 43134750516555563009352046979053547113;
    *((v129 + v130 + &g_21 as &u8) as &i128) = 43134542224465019445143880441984013088;
    *((v129 + v130 + &g_11 as &u8) as &i128) = 148147271199494520358923432932566985833;
    *((v129 + v130 + &g_1 as &u8) as &i128) = 135749526313863702671949216579979518053;
    *((v129 + v130) as &i128) = 138842676260528182167892104719168202099;
    *((v129 + v130 + &g_51 as &u8) as &i64) = 7234304265016272240;
    v52 = v130 + &g_61 as &u8;
    v131 = v50;
    v110 = *((&v50 as &char + 8) as &i128);
    if v131 != 0x8000000000000000 {
        v50 = v110;
    }
    v105 = v131;
    v106 = v50;
    memcpy(&v50, &v100, 360);
    memcpy(&v79, &v100, 224);
    v79 = *((&v100 as &char + 360) as &i64);
    v110 = struct16 {
        field_0: &g_4106dc
        field_8: &g_1
    };
    v100 = clap_builder::builder::arg::Arg::value_names(&v50, &v110);
    v50 = clap_builder::builder::command::Command::arg(&v0, &v100);
    v8 = 0;
    v10 = 0;
    v12 = 0;
    v14 = 0;
    v16 = 0;
    v18 = 0;
    v21 = 0;
    v23 = 0;
    v25 = 0;
    v27 = 0;
    v31 = 0;
    v33 = 0;
    v0 = struct24 {
        field_344: 0
        field_352: &g_1
        field_360: 0
    };
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
    v20 = &g_1;
    v22 = &g_1;
    v24 = &g_1;
    v26 = &g_1;
    v28 = &g_1;
    v29 = 0;
    v30 = &g_1;
    v32 = &g_1;
    v34 = &g_1;
    v35 = 0;
    v36 = 0x8000000000000000;
    v37 = 0x8000000000000000;
    v39 = 9223372036854775809;
    v40 = &anon.ebe00b04e89979ab4e585c1b16fe1422.16.llvm.10932335356487094860;
    v41 = &g_1;
    v42 = 0;
    v44 = 0;
    v45 = 0x11000000110000;
    v46 = 0;
    v47 = 3337;
    v110 = struct16 {
        field_0: &g_41073c
        field_8: &g_1
    };
    v100 = clap_builder::builder::arg::Arg::value_names(&v0, &v110);
    v107 = &g_1;
    memcpy(&v0, &v100, 584);
    v46 = *((&v100 as &char + 584) as &i32) | &g_1;
    v47 = -65281 & *((&v100 as &char + 588) as &i32) | 0x300;
    clap_builder::builder::command::Command::arg(a0, &v50, &v0);
    return a0;
}
