fn uu_tsort::uu_app(a0: u32) -> u64 {
    let v0: i5696;  // [bp-0x818], Other Possible Types: struct712
    let v1: i64;  // [sp-0x808]
    let v2: i64;  // [sp-0x7f0]
    let v3: i64;  // [sp-0x7e0]
    let v4: i64;  // [sp-0x7c8]
    let v5: i64;  // [sp-0x7b0]
    let v6: i64;  // [sp-0x7a8]
    let v7: i128;  // [sp-0x7a0]
    let v8: i64;  // [sp-0x790]
    let v9: i128;  // [sp-0x788]
    let v10: i64;  // [sp-0x778]
    let v11: i128;  // [sp-0x770]
    let v12: i64;  // [sp-0x760]
    let v13: i128;  // [sp-0x758]
    let v14: i64;  // [sp-0x748]
    let v15: i128;  // [sp-0x740]
    let v16: i64;  // [sp-0x730]
    let v17: i128;  // [sp-0x728]
    let v18: i64;  // [sp-0x718]
    let v19: i128;  // [sp-0x710]
    let v20: i64;  // [sp-0x700]
    let v21: i128;  // [sp-0x6f8]
    let v22: i64;  // [sp-0x6e8]
    let v23: i128;  // [sp-0x6e0]
    let v24: i64;  // [sp-0x6d0]
    let v25: i128;  // [sp-0x6c8]
    let v26: i64;  // [sp-0x6b8]
    let v27: i128;  // [bp-0x6b0]
    let v28: i64;  // [sp-0x6a8]
    let v29: i64;  // [sp-0x6a0]
    let v30: i128;  // [bp-0x698]
    let v31: i64;  // [sp-0x688]
    let v32: i128;  // [sp-0x680]
    let v33: i64;  // [sp-0x670]
    let v34: i64;  // [sp-0x668]
    let v35: i64;  // [sp-0x660]
    let v36: i64;  // [sp-0x648]
    let v37: i128;  // [sp-0x640]
    let v38: i64;  // [sp-0x620]
    let v39: i64;  // [sp-0x608]
    let v40: i64;  // [sp-0x600]
    let v41: i64;  // [sp-0x5f8]
    let v42: i64;  // [sp-0x5e8]
    let v43: i128;  // [sp-0x5d8]
    let v44: i128;  // [sp-0x548], Other Possible Types: struct24
    let v45: i64;  // [sp-0x538]
    let v46: i128;  // [sp-0x530]
    let v47: i128;  // [sp-0x520]
    let v48: i64;  // [sp-0x510]
    let v49: i128;  // [sp-0x508]
    let v50: i64;  // [sp-0x4f8]
    let v51: i128;  // [sp-0x4f0]
    let v52: i64;  // [sp-0x4e0]
    let v53: i64;  // [sp-0x4d8]
    let v54: i128;  // [sp-0x4d0]
    let v55: i64;  // [sp-0x4c0]
    let v56: i128;  // [sp-0x4b8]
    let v57: i64;  // [sp-0x4a8]
    let v58: i128;  // [sp-0x4a0]
    let v59: i64;  // [sp-0x490]
    let v60: i128;  // [sp-0x488]
    let v61: i64;  // [sp-0x478]
    let v62: i128;  // [sp-0x470]
    let v63: i64;  // [sp-0x460]
    let v64: i128;  // [sp-0x458]
    let v65: i64;  // [sp-0x448]
    let v66: i128;  // [sp-0x440]
    let v67: i64;  // [sp-0x430]
    let v68: i128;  // [sp-0x428]
    let v69: i64;  // [sp-0x418]
    let v70: i128;  // [sp-0x410]
    let v71: i64;  // [sp-0x400]
    let v72: i128;  // [sp-0x3f8]
    let v73: i64;  // [sp-0x3e8]
    let v74: i128;  // [sp-0x3e0]
    let v75: i64;  // [sp-0x3d0]
    let v76: i64;  // [sp-0x3c8]
    let v77: i64;  // [sp-0x3c0]
    let v78: i64;  // [sp-0x3b8]
    let v79: i128;  // [sp-0x3b0]
    let v80: i64;  // [sp-0x3a0]
    let v81: i64;  // [sp-0x398]
    let v82: i64;  // [sp-0x390]
    let v83: i128;  // [sp-0x388]
    let v84: i64;  // [sp-0x378]
    let v85: i128;  // [sp-0x370]
    let v86: i128;  // [sp-0x360]
    let v87: i64;  // [sp-0x350]
    let v88: i128;  // [sp-0x348]
    let v89: i64;  // [sp-0x338]
    let v90: i64;  // [sp-0x330]
    let v91: i64;  // [sp-0x328]
    let v92: i64;  // [sp-0x320]
    let v93: i64;  // [sp-0x318]
    let v94: i64;  // [sp-0x310]
    let v95: i128;  // [sp-0x308]
    let v96: i128;  // [sp-0x2f8], Other Possible Types: Enum
    let v97: i64;  // [sp-0x98]
    let v98: i64;  // [sp-0x90]
    let v99: i64;  // [sp-0x3c]
    let v100: i32;  // [sp-0x34]
    let v102: i64;  // r14

    if _ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 != 2 {
        once_cell::imp::OnceCell<T>::initialize(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
    }
    v96 = clap_builder::builder::command::Command::new(g_4ec238, g_4ec240);
    v97 = &g_419684;
    v98 = 6;
    memcpy(&v0, &v96, 712);
    v44 = uucore::format_usage(&g_41968a, 17);
    v102 = v44;
    if v102 != 0x8000000000000000 {
        v96 = *((&v44 as &char + 8) as &i128);
    }
    v36 = v102;
    v37 = v96;
    memcpy(&v96, &v0, 712);
    v0 = clap_builder::builder::command::Command::about(&v96, &g_41969b, 309);
    memcpy(&v96, &v0, 700);
    v99 = 549755814016 | *((&v0 as &char + 700) as &i64);
    v100 = *((&v0 as &char + 708) as &i32);
    v7 = 0;
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
    v32 = 0;
    v0 = 0;
    v1 = 0;
    v2 = 0;
    v3 = 0;
    v4 = 5;
    v5 = 0;
    v6 = 8;
    v8 = 8;
    v10 = 8;
    v12 = 8;
    v14 = 8;
    v16 = 8;
    v18 = 8;
    v20 = 8;
    v22 = 8;
    v24 = 4;
    v26 = 8;
    v29 = 8;
    v30 = 0;
    v31 = 8;
    v33 = 8;
    v34 = 0;
    v35 = 0x8000000000000000;
    v36 = 0x8000000000000000;
    v38 = 9223372036854775809;
    v39 = &g_4108d4;
    v40 = 4;
    v41 = 0;
    v42 = 0;
    v43 = 0xd09000000000011000000110000;
    *(v29 as &&i64) = &g_4197d0;
    *((v29 + 8) as &i64) = 1;
    v28 = 1;
    v29 = __rust_alloc(16, 8);
    v30 = 1;
    v46 = *((&v0 as &char + 24) as &i128);
    v49 = *((&v0 as &char + 64) as &i128);
    v51 = *((&v0 as &char + 88) as &i128);
    v54 = v7;
    v56 = v9;
    v58 = v11;
    v60 = v13;
    v62 = v15;
    v64 = 0;
    v66 = 0;
    v68 = 0;
    v70 = 0;
    v72 = 0;
    v74 = v27;
    v79 = 0;
    v83 = *((&v0 as &char + 448) as &i128);
    v85 = v37;
    v86 = *((&v0 as &char + 488) as &i128);
    v88 = *((&v0 as &char + 0x200) as &i128);
    v44 = v0;
    v45 = v1;
    v47 = *((&v0 as &char + 40) as &i128);
    v48 = v3;
    v50 = 5;
    v52 = 0;
    v53 = 8;
    v55 = 8;
    v57 = 8;
    v59 = 8;
    v61 = 8;
    v63 = 8;
    v65 = 8;
    v67 = 8;
    v69 = 8;
    v71 = 4;
    v73 = 8;
    v75 = v29;
    v76 = 1;
    v77 = 0;
    v78 = 8;
    v80 = 8;
    v81 = 0;
    v82 = 0x8000000000000000;
    v84 = 0x8000000000000000;
    v87 = 9223372036854775809;
    v89 = &g_4108d4;
    v90 = 4;
    v91 = 0;
    v92 = *((&v0 as &char + 552) as &i64);
    v93 = 0;
    v94 = *((&v0 as &char + 568) as &i64);
    v95 = 0x309000000040011000000110000;
    clap_builder::builder::command::Command::arg(a0, &v96, &v44);
    return a0;
}
