fn uu_sleep::uu_app(a0: u32) -> u64 {
    let v0: struct16;  // [bp-0xae8], Other Possible Types: i128
    let v1: i64;  // [sp-0xad8], Other Possible Types: struct24, struct592
    let v2: i64;  // [sp-0xac8]
    let v3: i64;  // [sp-0xab0]
    let v4: i64;  // [sp-0xaa0]
    let v5: i64;  // [sp-0xa88]
    let v6: i64;  // [sp-0xa70]
    let v7: i64;  // [sp-0xa68]
    let v8: i128;  // [sp-0xa60]
    let v9: i64;  // [sp-0xa50]
    let v10: i128;  // [sp-0xa48]
    let v11: i64;  // [sp-0xa38]
    let v12: i128;  // [sp-0xa30]
    let v13: i64;  // [sp-0xa20]
    let v14: i128;  // [sp-0xa18]
    let v15: i64;  // [sp-0xa08]
    let v16: i128;  // [sp-0xa00]
    let v17: i64;  // [sp-0x9f0]
    let v18: i128;  // [sp-0x9e8]
    let v19: i64;  // [sp-0x9d8]
    let v20: i128;  // [sp-0x9d0]
    let v21: i64;  // [sp-0x9c0]
    let v22: i128;  // [sp-0x9b8]
    let v23: i64;  // [sp-0x9a8]
    let v24: i128;  // [sp-0x9a0]
    let v25: i64;  // [sp-0x990]
    let v26: i128;  // [sp-0x988]
    let v27: i64;  // [sp-0x978]
    let v28: i128;  // [sp-0x970]
    let v29: i64;  // [sp-0x960]
    let v30: i128;  // [sp-0x958]
    let v31: i64;  // [sp-0x948]
    let v32: i128;  // [sp-0x940]
    let v33: i64;  // [sp-0x930]
    let v34: i64;  // [sp-0x928]
    let v35: i64;  // [sp-0x920]
    let v36: i64;  // [sp-0x908]
    let v37: i64;  // [sp-0x8e0]
    let v38: i64;  // [sp-0x8c8]
    let v39: i64;  // [sp-0x8c0]
    let v40: i64;  // [sp-0x8b8]
    let v41: i64;  // [sp-0x8a8]
    let v42: i64;  // [sp-0x898]
    let v43: i32;  // [sp-0x890]
    let v44: i16;  // [bp-0x88c]
    let v45: i192;  // [sp-0x888], Other Possible Types: Enum, struct712
    let v46: i64;  // [sp-0x880]
    let v47: i64;  // [sp-0x878]
    let v48: i64;  // [sp-0x720]
    let v49: i64;  // [sp-0x6b8]
    let v50: i128;  // [sp-0x6b0]
    let v51: i128;  // [sp-0x5b8], Other Possible Types: struct712
    let v52: i64;  // [sp-0x2fc]
    let v53: i32;  // [sp-0x2f4]
    let v54: Enum;  // [sp-0x2e8], Other Possible Types: i3336
    let v55: i64;  // [sp-0x88]
    let v56: i64;  // [sp-0x80]
    let v58: i64;  // r15
    let v59: i64;  // rax
    let v60: i64;  // rdx

    if _ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 != 2 {
        once_cell::imp::OnceCell<T>::initialize(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
    }
    v54 = clap_builder::builder::command::Command::new(g_4e3b08, g_4e3b10);
    v55 = &g_418ce6;
    v56 = &g_1;
    v51 = clap_builder::builder::command::Command::about(&v54, &g_418b7e, 25);
    v45 = clap_builder::builder::command::Command::after_help(&v51, &g_418b97, 335);
    v1 = uucore::format_usage(&g_418cec, 30);
    v58 = v1;
    if v58 != 0x8000000000000000 {
        v51 = *((&v1 as &char + 8) as &i128);
    }
    v49 = v58;
    v50 = v51;
    memcpy(&v51, &v45, 700);
    v52 = 549755814016 | *((&v45 as &char + 700) as &i64);
    v53 = *((&v45 as &char + 708) as &i32);
    v1 = 0;
    v2 = 0;
    v3 = 0;
    v4 = 0;
    v5 = &g_1;
    v6 = 0;
    v7 = &g_1;
    v8 = 0;
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
    v35 = 0x8000000000000000;
    v36 = 0x8000000000000000;
    v37 = 9223372036854775809;
    v38 = &g_418d0a;
    v39 = &g_1;
    v40 = 0;
    v41 = 0;
    v42 = 0x11000000110000;
    v43 = 0;
    v44 = 3337;
    v45 = 0;
    v46 = &g_1;
    v47 = 0;
    v45 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_11);
    v59 = v46;
    v60 = v47;
    *((v59 + v60) as &i128) = 109356308903605034568510445565878034800;
    *((v59 + v60 + &g_1 as &u8) as &i64) = 8314892236720796448;
    v47 = v60 + &g_11 as &u8;
    v0 = *((&v45 as &char + 8) as &i128);
    if v35 != 0x8000000000000000 {
        v45 = v0;
    }
    v35 = v45;
    memcpy(&v45, &v1, 360);
    memcpy(&v45, &v28, 224);
    v48 = 0;
    v0 = struct16 {
        field_0: &g_418d0a
        field_8: &g_1
    };
    v1 = clap_builder::builder::arg::Arg::value_names(&v45, &v0);
    *(&v44 as &&i64) = &g_1;
    memcpy(&v45, &v1, 592);
    clap_builder::builder::command::Command::arg(a0, &v51, &v45);
    return a0;
}
