fn uu_link::uu_app(a0: u32) -> u64 {
    let v0: i192;  // [sp-0x5d8], Other Possible Types: struct24
    let v1: i192;  // [sp-0x5b8], Other Possible Types: Enum
    let v2: i64;  // [sp-0x5b0]
    let v3: i64;  // [sp-0x5a8]
    let v4: i64;  // [sp-0x5a0]
    let v5: i64;  // [sp-0x598]
    let v6: i64;  // [sp-0x590]
    let v7: i64;  // [sp-0x580]
    let v8: i128;  // [sp-0x578]
    let v9: i64;  // [sp-0x568]
    let v10: i64;  // [sp-0x550]
    let v11: i64;  // [sp-0x548]
    let v12: i128;  // [sp-0x540]
    let v13: i64;  // [sp-0x530]
    let v14: i128;  // [sp-0x528]
    let v15: i64;  // [sp-0x518]
    let v16: i128;  // [sp-0x510]
    let v17: i64;  // [sp-0x500]
    let v18: i128;  // [sp-0x4f8]
    let v19: i64;  // [sp-0x4e8]
    let v20: i128;  // [sp-0x4e0]
    let v21: i64;  // [sp-0x4d0]
    let v22: i128;  // [sp-0x4c8]
    let v23: i64;  // [sp-0x4b8]
    let v24: i128;  // [sp-0x4b0]
    let v25: i64;  // [sp-0x4a0]
    let v26: i128;  // [sp-0x498]
    let v27: i64;  // [sp-0x488]
    let v28: i128;  // [sp-0x480]
    let v29: i64;  // [sp-0x470]
    let v30: i128;  // [sp-0x468]
    let v31: i64;  // [sp-0x458]
    let v32: i128;  // [sp-0x450]
    let v33: i64;  // [sp-0x440]
    let v34: i128;  // [sp-0x438]
    let v35: i64;  // [sp-0x428]
    let v36: i128;  // [sp-0x420]
    let v37: i64;  // [sp-0x410]
    let v38: i64;  // [sp-0x408]
    let v39: i64;  // [sp-0x400]
    let v40: i64;  // [sp-0x3e8]
    let v41: i128;  // [sp-0x3e0]
    let v42: i64;  // [sp-0x3c0]
    let v43: i64;  // [sp-0x3a8]
    let v44: i64;  // [sp-0x3a0]
    let v45: i64;  // [sp-0x398]
    let v46: i64;  // [sp-0x388]
    let v47: i128;  // [sp-0x378]
    let v48: i8;  // [bp-0x2fc]
    let v49: i8;  // [bp-0x2f4]
    let v50: i128;  // [bp-0x2e8]
    let v51: i64;  // [sp-0x2d8]
    let v52: i64;  // [sp-0x2d0]
    let v53: i64;  // [sp-0x2c8]
    let v54: i64;  // [sp-0x2b0]
    let v55: i64;  // [sp-0x2a8]
    let v56: i128;  // [sp-0x2a0]
    let v57: i64;  // [sp-0x290]
    let v58: i128;  // [sp-0x288]
    let v59: i64;  // [sp-0x278]
    let v60: i128;  // [sp-0x270]
    let v61: struct16;  // [sp-0x268]
    let v62: i64;  // [sp-0x260]
    let v63: i128;  // [bp-0x258]
    let v64: i64;  // [sp-0x248]
    let v65: i128;  // [sp-0x240]
    let v66: i64;  // [sp-0x230]
    let v67: i128;  // [sp-0x228]
    let v68: i64;  // [sp-0x218]
    let v69: i128;  // [sp-0x210]
    let v70: i64;  // [sp-0x200]
    let v71: i128;  // [sp-0x1f8]
    let v72: i64;  // [sp-0x1e8]
    let v73: i64;  // [sp-0x1e0]
    let v74: i64;  // [sp-0x1d8]
    let v75: i64;  // [sp-0x1c0]
    let v76: i64;  // [sp-0x1a8]
    let v77: i64;  // [sp-0x190]
    let v78: i64;  // [sp-0x178]
    let v79: i64;  // [sp-0x160]
    let v80: i64;  // [sp-0x148]
    let v81: i64;  // [sp-0x130]
    let v82: i64;  // [sp-0x118]
    let v83: i64;  // [sp-0x100]
    let v84: i64;  // [sp-0xe8]
    let v85: i64;  // [sp-0xd0]
    let v86: i128;  // [sp-0xb8]
    let v87: i64;  // [sp-0xa8]
    let v88: i64;  // [sp-0x98]
    let v89: i64;  // [sp-0x88]
    let v90: i64;  // [sp-0x80]
    let v91: i64;  // [sp-0x78]
    let v92: i64;  // [sp-0x68]
    let v93: i64;  // [sp-0x58]
    let v94: i64;  // [sp-0x48]
    let v95: i64;  // [sp-0x38]
    let v96: i32;  // [sp-0x30]
    let v97: i64;  // [sp-0x2c]
    let v98: i32;  // [bp-0x24]
    let v100: i128;  // xmm0
    let v101: i64;  // rcx
    let v102: i64;  // rsi
    let v103: i64;  // r15
    let v104: i64;  // r14

    if _ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 != 2 {
        once_cell::imp::OnceCell<T>::initialize(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
    }
    v100 = g_4de8c8;
    v56 = 0;
    v58 = 0;
    v63 = 0;
    v65 = 0;
    v67 = 0;
    v71 = 0;
    v50 = 0;
    v51 = &g_1;
    v52 = 0;
    v53 = &g_1;
    v54 = 0;
    v55 = &g_1;
    v57 = &g_1;
    v59 = &g_1;
    v60 = 0;
    v62 = &g_1;
    v64 = &g_1;
    v66 = &g_1;
    v68 = &g_1;
    v69 = 0;
    v70 = &g_1;
    v72 = &g_1;
    v73 = 0;
    v74 = 0x8000000000000000;
    v75 = 0x8000000000000000;
    v76 = 0x8000000000000000;
    v77 = 0x8000000000000000;
    v78 = 0x8000000000000000;
    v79 = 0x8000000000000000;
    v80 = 0x8000000000000000;
    v81 = 0x8000000000000000;
    v82 = 0x8000000000000000;
    v83 = 0x8000000000000000;
    v84 = 0x8000000000000000;
    v85 = 0x8000000000000000;
    v86 = v100;
    v87 = 0;
    v88 = 0;
    v89 = &g_4183fa;
    v90 = &g_1;
    v91 = 0;
    v92 = 0;
    v93 = 0;
    v94 = 0;
    v95 = 0;
    v96 = 0x110000;
    v98 = 0;
    v97 = 0;
    v1 = 0;
    v2 = &g_1;
    v3 = 0;
    v1 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_3a);
    v101 = v2;
    v102 = v3;
    *((v101 + v102 + &g_31 as &u8) as &i128) = 61400315882454523304751352298341950752;
    *((v101 + v102 + &g_21 as &u8) as &i128) = 140173586826328146437873982255435760972;
    *((v101 + v102 + &g_11 as &u8) as &i128) = 97397761463710083943182991025615429920;
    *((v101 + v102 + &g_1 as &u8) as &i128) = 134856309441043639268382310159590122350;
    *((v101 + v102) as &i128) = 156049947335097214332183897481098846531;
    v3 = v102 + &g_3a as &u8;
    v0 = *((&v1 as &char + 8) as &i128);
    if v76 != 0x8000000000000000 {
        v1 = v0;
    }
    v76 = v1;
    memcpy(&v1, &v50, 712);
    v0 = uucore::format_usage(&g_418400, &g_1);
    v103 = v0;
    if v103 != 0x8000000000000000 {
        v50 = *((&v0 as &char + 8) as &i128);
    }
    v40 = v103;
    v41 = v50;
    memcpy(&v50, &v1, 700);
    v97 = 549755814016 | v48;
    v98 = v49;
    v1 = 0;
    v3 = &g_1;
    v4 = &g_1;
    v5 = &g_1;
    v6 = 0;
    v7 = &g_1;
    v8 = v92;
    v9 = &g_1;
    v10 = 0;
    v11 = &g_1;
    v12 = 0;
    v13 = &g_1;
    v14 = 0;
    v15 = &g_1;
    v16 = 0;
    v17 = &g_1;
    v18 = 0;
    v19 = &g_1;
    v20 = 0;
    v21 = &g_1;
    v22 = 0;
    v23 = &g_1;
    v24 = 0;
    v25 = &g_1;
    v26 = 0;
    v27 = &g_1;
    v28 = 0;
    v29 = &g_1;
    v30 = 0;
    v31 = &g_1;
    v32 = 0;
    v33 = &g_1;
    v34 = 0;
    v35 = &g_1;
    v36 = 0;
    v37 = &g_1;
    v38 = 0;
    v39 = 0x8000000000000000;
    v40 = 0x8000000000000000;
    v42 = 9223372036854775809;
    v43 = &g_4183f5;
    v44 = &g_1;
    v45 = 0;
    v46 = 0;
    v47 = 0x209000000050011000000110000;
    v104 = v63;
    if v104 == *((&v60 as &char + 8) as &i64) {
        v61 = alloc::raw_vec::RawVec<T,A>::grow_one();
    }
    memmove(v104 * 592 + v62, &v1, 592);
    v63 = v104 + &g_1 as &u8;
    memcpy(a0, &v50, 712);
    return a0;
}
