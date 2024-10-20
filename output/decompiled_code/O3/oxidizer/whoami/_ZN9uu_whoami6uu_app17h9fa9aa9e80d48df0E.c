fn uu_whoami::uu_app(a0: i64) -> u64 {
    let v0: i128;  // [sp-0x5c8]
    let v1: i64;  // [sp-0x5b0], Other Possible Types: struct24
    let v2: i64;  // [sp-0x5a0]
    let v3: i64;  // [sp-0x598]
    let v4: i64;  // [sp-0x590]
    let v5: i64;  // [sp-0x578]
    let v6: i64;  // [sp-0x570]
    let v7: i128;  // [sp-0x568]
    let v8: i64;  // [sp-0x558]
    let v9: i128;  // [sp-0x550]
    let v10: i64;  // [sp-0x540]
    let v11: i128;  // [sp-0x538]
    let v12: i64;  // [sp-0x528]
    let v13: i128;  // [sp-0x520]
    let v14: i64;  // [sp-0x510]
    let v15: i128;  // [sp-0x508]
    let v16: i64;  // [sp-0x4f8]
    let v17: i128;  // [sp-0x4f0]
    let v18: i64;  // [sp-0x4e0]
    let v19: i128;  // [sp-0x4d8]
    let v20: i64;  // [sp-0x4c8]
    let v21: i128;  // [sp-0x4c0]
    let v22: i64;  // [sp-0x4b0]
    let v23: i64;  // [sp-0x4a8]
    let v24: i64;  // [sp-0x4a0]
    let v25: i64;  // [sp-0x488]
    let v26: i192;  // [sp-0x470]
    let v27: i64;  // [sp-0x458]
    let v28: i64;  // [sp-0x440]
    let v29: i64;  // [sp-0x428]
    let v30: i64;  // [sp-0x410]
    let v31: i64;  // [sp-0x3f8]
    let v32: i64;  // [sp-0x3e0]
    let v33: i64;  // [sp-0x3c8]
    let v34: i64;  // [sp-0x3b0]
    let v35: i64;  // [sp-0x398]
    let v36: i128;  // [sp-0x380]
    let v37: i64;  // [sp-0x370]
    let v38: i64;  // [sp-0x360]
    let v39: i64;  // [sp-0x350]
    let v40: i64;  // [sp-0x348]
    let v41: i64;  // [sp-0x340]
    let v42: i64;  // [sp-0x330]
    let v43: i64;  // [sp-0x320]
    let v44: i64;  // [sp-0x310]
    let v45: i64;  // [sp-0x300]
    let v46: i32;  // [sp-0x2f8]
    let v47: i64;  // [sp-0x2f4]
    let v48: i8;  // [sp-0x2ec]
    let v49: i64;  // [sp-0x2e8], Other Possible Types: Enum
    let v50: i64;  // [sp-0x2e0]
    let v51: i64;  // [sp-0x2d8]
    let v52: i64;  // [sp-0x118]
    let v53: i128;  // [sp-0x110]
    let v54: i8;  // [bp-0x2c]
    let v55: i8;  // [bp-0x24]
    let v57: i64;  // rcx
    let v58: i64;  // rsi
    let v59: i64;  // r15
    let v60: i32;  // ecx

    if _ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 != 2 {
        once_cell::imp::OnceCell<T>::initialize(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
    }
    v7 = 0;
    v9 = 0;
    v13 = 0;
    v15 = 0;
    v17 = 0;
    v21 = 0;
    v1 = 0;
    v2 = &g_1;
    v3 = 0;
    v4 = &g_1;
    v5 = 0;
    v6 = &g_1;
    v8 = &g_1;
    v10 = &g_1;
    v11 = 0;
    v12 = &g_1;
    v14 = &g_1;
    v16 = &g_1;
    v18 = &g_1;
    v19 = 0;
    v20 = &g_1;
    v22 = &g_1;
    v23 = 0;
    v24 = 0x8000000000000000;
    v25 = 0x8000000000000000;
    v26 = 0x8000000000000000;
    v27 = 0x8000000000000000;
    v28 = 0x8000000000000000;
    v29 = 0x8000000000000000;
    v30 = 0x8000000000000000;
    v31 = 0x8000000000000000;
    v32 = 0x8000000000000000;
    v33 = 0x8000000000000000;
    v34 = 0x8000000000000000;
    v35 = 0x8000000000000000;
    v36 = g_4dbae8;
    v37 = 0;
    v38 = 0;
    v39 = &g_4181d6;
    v40 = &g_1;
    v41 = 0;
    v42 = 0;
    v43 = 0;
    v44 = 0;
    v45 = 0;
    v46 = 0x110000;
    v48 = 0;
    v47 = 0;
    v49 = 0;
    v50 = &g_1;
    v51 = 0;
    v49 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_c);
    v57 = v50;
    v58 = v51;
    *((v57 + v58 + &g_1 as &u8) as &i128) = 61671128290778357372387899041897411189;
    *((v57 + v58) as &i128) = 146741822782087689318077673574836564560;
    v51 = v58 + &g_c as &u8;
    v0 = *((&v49 as &char + 8) as &i128);
    if v26 != 0x8000000000000000 {
        v49 = v0;
    }
    v26 = v49;
    memcpy(&v49, &v1, 712);
    v1 = uucore::format_usage(&g_4181f7, &g_1);
    v59 = v1;
    if v59 != 0x8000000000000000 {
        v0 = *((&v1 as &char + 8) as &i128);
    }
    v52 = v59;
    v53 = v0;
    memcpy(a0, &v49, 700);
    v60 = v55;
    *((a0 + 700) as &i64) = 549755814016 | v54;
    *((a0 + 708) as &i32) = v60;
    return a0;
}
