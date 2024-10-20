fn uu_arch::uu_app(a0: i64) -> u64 {
    let v0: i128;  // [sp-0x5c8]
    let v1: i192;  // [sp-0x5b8], Other Possible Types: Enum
    let v2: i64;  // [sp-0x5b0]
    let v3: i64;  // [sp-0x5a8]
    let v4: i64;  // [sp-0x5a0]
    let v5: i64;  // [sp-0x598]
    let v6: i64;  // [sp-0x580]
    let v7: i64;  // [sp-0x578]
    let v8: i128;  // [sp-0x570]
    let v9: i64;  // [sp-0x560]
    let v10: i128;  // [sp-0x558]
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
    let v24: i64;  // [sp-0x4b0]
    let v25: i64;  // [sp-0x4a8]
    let v26: i64;  // [sp-0x490]
    let v27: i192;  // [sp-0x478]
    let v28: i64;  // [sp-0x460]
    let v29: i64;  // [sp-0x448]
    let v30: i64;  // [sp-0x430]
    let v31: i64;  // [sp-0x418]
    let v32: i64;  // [sp-0x400]
    let v33: i64;  // [sp-0x3e8]
    let v34: i64;  // [sp-0x3d0]
    let v35: i64;  // [sp-0x3b8]
    let v36: i64;  // [sp-0x3a0]
    let v37: i128;  // [sp-0x388]
    let v38: i64;  // [sp-0x378]
    let v39: i64;  // [sp-0x368]
    let v40: i64;  // [sp-0x358]
    let v41: i64;  // [sp-0x350]
    let v42: i64;  // [sp-0x348]
    let v43: i64;  // [sp-0x338]
    let v44: i64;  // [sp-0x328]
    let v45: i64;  // [sp-0x318]
    let v46: i64;  // [sp-0x308]
    let v47: i32;  // [sp-0x300]
    let v48: i64;  // [sp-0x2fc]
    let v49: i8;  // [sp-0x2f4]
    let v50: i192;  // [sp-0x2e8], Other Possible Types: Enum
    let v51: i64;  // [sp-0x2e0]
    let v52: i64;  // [sp-0x2d8]
    let v53: i64;  // [sp-0x148]
    let v54: i128;  // [sp-0x140]
    let v55: i8;  // [bp-0x2c]
    let v56: i8;  // [bp-0x24]
    let v58: i64;  // rcx
    let v59: i64;  // rsi
    let v60: i64;  // rcx
    let v61: i64;  // rdx
    let v62: i64;  // r15
    let v63: i32;  // ecx

    if _ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 != 2 {
        once_cell::imp::OnceCell<T>::initialize(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
    }
    v8 = 0;
    v10 = 0;
    v14 = 0;
    v16 = 0;
    v18 = 0;
    v22 = 0;
    v1 = 0;
    v3 = &g_1;
    v4 = 0;
    v5 = &g_1;
    v6 = 0;
    v7 = &g_1;
    v9 = &g_1;
    v11 = &g_1;
    v12 = 0;
    v13 = &g_1;
    v15 = &g_1;
    v17 = &g_1;
    v19 = &g_1;
    v20 = 0;
    v21 = &g_1;
    v23 = &g_1;
    v24 = 0;
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
    v36 = 0x8000000000000000;
    v37 = g_4d7d00;
    v38 = 0;
    v39 = 0;
    v40 = &g_417a18;
    v41 = &g_1;
    v42 = 0;
    v43 = 0;
    v44 = 0;
    v45 = 0;
    v46 = 0;
    v47 = 0x110000;
    v49 = 0;
    v48 = 0;
    v50 = 0;
    v51 = &g_1;
    v52 = 0;
    v50 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_d);
    v58 = v51;
    v59 = v52;
    *((v58 + v59 + &g_1 as &u8) as &i128) = 134846331679301619632076113882210725481;
    *((v58 + v59) as &i128) = 43061957264149375965051174003345156420;
    v52 = v59 + &g_d as &u8;
    v0 = *((&v50 as &char + 8) as &i128);
    if v27 != 0x8000000000000000 {
        v50 = v0;
    }
    v27 = v50;
    memcpy(&v50, &v1, 712);
    v1 = 0;
    v2 = &g_1;
    v3 = 0;
    v1 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_21);
    v60 = v2;
    v61 = v3;
    *((v60 + v61 + 32) as &i128) = 61671149205138198185703079736006309219;
    *((v60 + v61 + &g_d as &u8) as &i128) = 43129477145754998430234176969568969573;
    *((v60 + v61) as &i128) = 154737755930781976754671404074778518852;
    v3 = v61 + &g_21 as &u8;
    v62 = v1;
    v0 = *((&v1 as &char + 8) as &i128);
    if v62 != 0x8000000000000000 {
        v1 = v0;
    }
    v53 = v62;
    v54 = v1;
    memcpy(a0, &v50, 700);
    v63 = v56;
    *((a0 + 700) as &i64) = 549755814016 | v55;
    *((a0 + 708) as &i32) = v63;
    return a0;
}
