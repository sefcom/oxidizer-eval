fn uu_dd::uu_app(a0: u32) -> u64 {
    let v0: i192;  // [sp-0x898], Other Possible Types: struct24
    let v1: i5696;  // [sp-0x880], Other Possible Types: struct712
    let v2: i64;  // [sp-0x870]
    let v3: i64;  // [sp-0x868]
    let v4: i64;  // [sp-0x860]
    let v5: i64;  // [sp-0x858]
    let v6: i64;  // [sp-0x848]
    let v7: i64;  // [sp-0x830]
    let v8: i64;  // [sp-0x818]
    let v9: i64;  // [sp-0x810]
    let v10: i128;  // [sp-0x808]
    let v11: i64;  // [sp-0x7f8]
    let v12: i128;  // [sp-0x7f0]
    let v13: i64;  // [sp-0x7e0]
    let v14: i128;  // [sp-0x7d8]
    let v15: i64;  // [sp-0x7c8]
    let v16: i128;  // [sp-0x7c0]
    let v17: i64;  // [sp-0x7b0]
    let v18: i128;  // [sp-0x7a8]
    let v19: i64;  // [sp-0x798]
    let v20: i128;  // [sp-0x790]
    let v21: i64;  // [sp-0x780]
    let v22: i128;  // [sp-0x778]
    let v23: i64;  // [sp-0x768]
    let v24: i128;  // [sp-0x760]
    let v25: i64;  // [sp-0x750]
    let v26: i128;  // [sp-0x748]
    let v27: i64;  // [sp-0x738]
    let v28: i128;  // [sp-0x730]
    let v29: i64;  // [sp-0x720]
    let v30: i128;  // [sp-0x718]
    let v31: i64;  // [sp-0x708]
    let v32: i128;  // [sp-0x700]
    let v33: i64;  // [sp-0x6f0]
    let v34: i128;  // [sp-0x6e8]
    let v35: i64;  // [sp-0x6d8]
    let v36: i64;  // [sp-0x6d0]
    let v37: i64;  // [sp-0x6c8]
    let v38: i64;  // [sp-0x6b0]
    let v39: i128;  // [sp-0x6a8]
    let v40: i64;  // [sp-0x688]
    let v41: i64;  // [sp-0x670]
    let v42: i64;  // [sp-0x668]
    let v43: i64;  // [sp-0x660]
    let v44: i64;  // [sp-0x650]
    let v45: i64;  // [sp-0x640]
    let v46: i32;  // [sp-0x638]
    let v47: i16;  // [sp-0x634]
    let v48: i128;  // [sp-0x5b8]
    let v49: i64;  // [sp-0x2fc]
    let v50: i32;  // [sp-0x2f4]
    let v51: i3336;  // [sp-0x2f0], Other Possible Types: Enum
    let v52: i64;  // [sp-0x90]
    let v53: i64;  // [sp-0x88]
    let v55: i64;  // r14

    if _ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 != 2 {
        once_cell::imp::OnceCell<T>::initialize(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
    }
    v51 = clap_builder::builder::command::Command::new(g_51be68, g_51be70);
    v52 = &g_41f648;
    v53 = 6;
    v1 = clap_builder::builder::command::Command::about(&v51, &g_41f64e, 52);
    v0 = uucore::format_usage(&g_41f682, 25);
    v55 = v0;
    if v55 != 0x8000000000000000 {
        v48 = *((&v0 as &char + 8) as &i128);
    }
    v38 = v55;
    v39 = v48;
    memcpy(&v48, &v1, 712);
    v1 = clap_builder::builder::command::Command::after_help(&v48, &g_41f69b, 5047);
    memcpy(&v48, &v1, 700);
    v49 = 549755814016 | *((&v1 as &char + 700) as &i64);
    v50 = *((&v1 as &char + 708) as &i32);
    v10 = 0;
    v12 = 0;
    v14 = 0;
    v16 = 0;
    v18 = 0;
    v20 = 0;
    v22 = 0;
    v24 = 0;
    v26 = 0;
    v28 = 0;
    v30 = 0;
    v32 = 0;
    v34 = 0;
    v1 = 0;
    v2 = 1;
    v3 = 1;
    v4 = -1;
    v5 = 0;
    v6 = 0;
    v7 = 5;
    v8 = 0;
    v9 = 8;
    v11 = 8;
    v13 = 8;
    v15 = 8;
    v17 = 8;
    v19 = 8;
    v21 = 8;
    v23 = 8;
    v25 = 8;
    v27 = 4;
    v29 = 8;
    v31 = 8;
    v33 = 8;
    v35 = 8;
    v36 = 0;
    v37 = 0x8000000000000000;
    v38 = 0x8000000000000000;
    v40 = 9223372036854775809;
    v41 = &g_414f28;
    v42 = 8;
    v43 = 0;
    v44 = 0;
    v45 = 0x11000000110000;
    v46 = 0;
    v47 = 3337;
    clap_builder::builder::command::Command::arg(a0, &v48, &v1);
    return a0;
}
