fn uu_yes::uu_app(a0: void*) -> u64 {
    let v0: i5696;  // [sp-0xd20], Other Possible Types: struct712
    let v1: i64;  // [sp-0xd10]
    let v2: i64;  // [sp-0xcf8]
    let v3: i64;  // [sp-0xce8]
    let v4: i64;  // [sp-0xcd0]
    let v5: i64;  // [sp-0xcb8]
    let v6: i64;  // [sp-0xcb0]
    let v7: i128;  // [sp-0xca8]
    let v8: i64;  // [sp-0xc98]
    let v9: i128;  // [sp-0xc90]
    let v10: i64;  // [sp-0xc80]
    let v11: i128;  // [sp-0xc78]
    let v12: i64;  // [sp-0xc68]
    let v13: i128;  // [sp-0xc60]
    let v14: i64;  // [sp-0xc50]
    let v15: i128;  // [sp-0xc48]
    let v16: i64;  // [sp-0xc38]
    let v17: i128;  // [sp-0xc30]
    let v18: i64;  // [sp-0xc20]
    let v19: i128;  // [sp-0xc18]
    let v20: i64;  // [sp-0xc08]
    let v21: i128;  // [sp-0xc00]
    let v22: i64;  // [sp-0xbf0]
    let v23: i128;  // [sp-0xbe8]
    let v24: i64;  // [sp-0xbd8]
    let v25: i128;  // [sp-0xbd0]
    let v26: i64;  // [sp-0xbc0]
    let v27: i128;  // [sp-0xbb8]
    let v28: i64;  // [sp-0xba8]
    let v29: i128;  // [sp-0xba0]
    let v30: i64;  // [sp-0xb90]
    let v31: i128;  // [sp-0xb88]
    let v32: i64;  // [sp-0xb78]
    let v33: i64;  // [sp-0xb70]
    let v34: i64;  // [sp-0xb68]
    let v35: i64;  // [sp-0xb50]
    let v36: i128;  // [sp-0xb48]
    let v37: i64;  // [sp-0xb28]
    let v38: i64;  // [sp-0xb10]
    let v39: i64;  // [sp-0xb08]
    let v40: i64;  // [sp-0xb00]
    let v41: i64;  // [sp-0xaf0]
    let v42: i64;  // [sp-0xae0]
    let v43: i32;  // [sp-0xad8]
    let v44: i16;  // [sp-0xad4]
    let v45: i4736;  // [sp-0xa58], Other Possible Types: struct24, struct592
    let v46: i8;  // [sp-0x80c]
    let v47: i128;  // [sp-0x808]
    let v48: struct8;  // [bp-0x538]
    let v49: Enum;  // [sp-0x2e8], Other Possible Types: i3336
    let v50: i64;  // [sp-0x88]
    let v51: i64;  // [sp-0x80]
    let v53: i64;  // r15
    let v54: i32;  // ecx

    if _ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075 != 2 {
        once_cell::imp::OnceCell<T>::initialize(&_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075, &_ZN6uucore9UTIL_NAME17h42125f43a216fc04E.llvm.12843670329912621075);
    }
    v49 = clap_builder::builder::command::Command::new(g_4db5e0, g_4db5e8);
    v50 = &g_4181cc;
    v51 = 6;
    v0 = clap_builder::builder::command::Command::about(&v49, &g_4181d2, 46);
    v45 = uucore::format_usage(&g_418200, 14);
    v53 = v45;
    if v53 != 0x8000000000000000 {
        v47 = *((&v45 as &char + 8) as &i128);
    }
    v35 = v53;
    v36 = v47;
    memcpy(&v47, &v0, 712);
    v0 = 0;
    v1 = 0;
    v2 = 0;
    v3 = 0;
    v4 = 5;
    v5 = 0;
    v6 = 8;
    v7 = 0;
    v8 = 8;
    v9 = 0;
    v10 = 8;
    v11 = 0;
    v12 = 8;
    v13 = 0;
    v14 = 8;
    v15 = 0;
    v16 = 8;
    v17 = 0;
    v18 = 8;
    v19 = 0;
    v20 = 8;
    v21 = 0;
    v22 = 8;
    v23 = 0;
    v24 = 4;
    v25 = 0;
    v26 = 8;
    v27 = 0;
    v28 = 8;
    v29 = 0;
    v30 = 8;
    v31 = 0;
    v32 = 8;
    v33 = 0;
    v34 = 0x8000000000000000;
    v35 = 0x8000000000000000;
    v37 = 9223372036854775809;
    v38 = &g_41820e;
    v39 = 6;
    v40 = 0;
    v41 = 0;
    v42 = 0x11000000110000;
    v43 = 0;
    v44 = 3337;
    v48 = struct8 {
        field_0: 2
    };
    v45 = clap_builder::builder::arg::Arg::value_parser(&v0, &v48);
    v46 = 1;
    memcpy(&v48, &v45, 592);
    v0 = clap_builder::builder::command::Command::arg(&v47, &v48);
    memcpy(a0, &v0, 700);
    v54 = *((&v0 as &char + 708) as &i32);
    *((a0 + 700) as &i64) = 549755814016 | *((&v0 as &char + 700) as &i64);
    *((a0 + 708) as &i32) = v54;
    return a0;
}
