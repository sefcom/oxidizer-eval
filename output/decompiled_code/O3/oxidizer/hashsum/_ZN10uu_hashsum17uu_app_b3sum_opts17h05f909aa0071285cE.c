fn uu_hashsum::uu_app_b3sum_opts(a0: u32, a1: u32) -> u64 {
    let v0: i128;  // [sp-0x798]
    let v1: i64;  // [sp-0x788]
    let v2: i64;  // [sp-0x778]
    let v3: i64;  // [sp-0x760]
    let v4: i64;  // [sp-0x750]
    let v5: i64;  // [sp-0x738]
    let v6: i64;  // [sp-0x720]
    let v7: i64;  // [sp-0x718]
    let v8: i128;  // [sp-0x710]
    let v9: i64;  // [sp-0x700]
    let v10: i128;  // [sp-0x6f8]
    let v11: i64;  // [sp-0x6e8]
    let v12: i128;  // [sp-0x6e0]
    let v13: i64;  // [sp-0x6d0]
    let v14: i128;  // [sp-0x6c8]
    let v15: i64;  // [sp-0x6b8]
    let v16: i128;  // [sp-0x6b0]
    let v17: i64;  // [sp-0x6a0]
    let v18: i128;  // [sp-0x698]
    let v19: i64;  // [sp-0x688]
    let v20: i128;  // [sp-0x680]
    let v21: i64;  // [sp-0x670]
    let v22: i128;  // [sp-0x668]
    let v23: i64;  // [sp-0x658]
    let v24: i128;  // [sp-0x650]
    let v25: i64;  // [sp-0x640]
    let v26: i128;  // [sp-0x638]
    let v27: i64;  // [sp-0x628]
    let v28: i128;  // [sp-0x620]
    let v29: i64;  // [sp-0x610]
    let v30: i128;  // [sp-0x608]
    let v31: i64;  // [sp-0x5f8]
    let v32: i128;  // [sp-0x5f0]
    let v33: i64;  // [sp-0x5e0]
    let v34: i64;  // [sp-0x5d8]
    let v35: i64;  // [sp-0x5d0]
    let v36: i64;  // [sp-0x5b8]
    let v37: i64;  // [sp-0x590]
    let v38: i64;  // [sp-0x578]
    let v39: i64;  // [sp-0x570]
    let v40: i64;  // [sp-0x568]
    let v41: i64;  // [sp-0x560]
    let v42: i64;  // [sp-0x558]
    let v43: i64;  // [sp-0x548]
    let v44: i32;  // [sp-0x540]
    let v45: i16;  // [sp-0x53c]
    let v46: i8;  // [bp-0x539]
    let v47: i192;  // [sp-0x538], Other Possible Types: Enum
    let v48: i64;  // [sp-0x530]
    let v49: i64;  // [sp-0x528]
    let v50: i8;  // [sp-0x2ec]
    let v51: i16;  // [sp-0x2eb]
    let v52: i8;  // [sp-0x2e9]
    let v53: i8;  // [bp-0x2e0]
    let v55: i64;  // rax
    let v56: i64;  // rdx

    memcpy(&v53, a1, 712);
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
    v28 = 0;
    v30 = 0;
    v32 = 0;
    v1 = 0;
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
    v27 = &g_1;
    v29 = &g_1;
    v31 = &g_1;
    v33 = &g_1;
    v34 = 0;
    v35 = 0x8000000000000000;
    v36 = 0x8000000000000000;
    v37 = 9223372036854775809;
    v38 = &g_45d6c0;
    v39 = &g_1;
    v40 = &g_45d6c0;
    v41 = &g_1;
    v42 = 0;
    v43 = 0x11000000110000;
    v44 = 0;
    v45 = 3337;
    v47 = 0;
    v48 = &g_1;
    v49 = 0;
    v47 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, 67);
    v55 = v48;
    v56 = v49;
    *((v55 + v56 + &g_21 as &u8) as &i128) = 140173627072390047003255791829585043572;
    *((v55 + v56 + &g_11 as &u8) as &i128) = 146741842033618441567706539167408813168;
    *((v55 + v56 + &g_1 as &u8) as &i128) = 147752657670386919307263323355419274857;
    *((v55 + v56) as &i128) = 43134467193242002735414453547674725711;
    *((v55 + v56 + &g_31 as &u8) as &i32) = 695430249;
    v49 = v56 + 67;
    v0 = *((&v47 as &char + 8) as &i128);
    if v35 != 0x8000000000000000 {
        v47 = v0;
    }
    v35 = v47;
    memcpy(&v47, &v1, 588);
    v51 = v45;
    v52 = v46;
    v50 = &g_1;
    return clap_builder::builder::command::Command::arg(a0, &v53, &v47);
}
