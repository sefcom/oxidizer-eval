fn uu_hashsum::uu_app_opt_bits(a0: u32, a1: u32) -> u64 {
    let v0: i128;  // [bp-0x798], Other Possible Types: struct16
    let v1: i64;  // [sp-0x788], Other Possible Types: struct592
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
    let v35: i192;  // [sp-0x5d0]
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
    let v46: i64;  // [sp-0x538], Other Possible Types: Enum, struct592
    let v47: i64;  // [sp-0x530]
    let v48: i64;  // [sp-0x528]
    let v49: i64;  // [sp-0x3d0]
    let v50: i8;  // [bp-0x3c8]
    let v51: i8;  // [bp-0x2e8]
    let v53: i64;  // rcx
    let v54: i64;  // rsi

    memcpy(&v51, a1, 712);
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
    v38 = &g_45ed1c;
    v39 = &g_1;
    v40 = &g_45ed1c;
    v41 = &g_1;
    v42 = 0;
    v43 = 0x11000000110000;
    v44 = 0;
    v45 = 3337;
    v46 = 0;
    v47 = &g_1;
    v48 = 0;
    v46 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, &g_1c);
    v53 = v47;
    v54 = v48;
    *((v53 + v54 + &g_11 as &u8) as &i128) = 54858142663354705974736707835350904616;
    *((v53 + v54 + &g_1 as &u8) as &i128) = 161399595422497658752295826113633282164;
    *((v53 + v54) as &i128) = 43067164058861039057047291012545013107;
    v48 = v54 + &g_1c as &u8;
    v0 = *((&v46 as &char + 8) as &i128);
    if v35 != 0x8000000000000000 {
        v46 = v0;
    }
    v35 = v46;
    memcpy(&v46, &v1, 360);
    memcpy(&v50, &v28, 224);
    v49 = v28;
    v0 = struct16 {
        field_0: &g_4610ec
        field_8: &g_1
    };
    v1 = clap_builder::builder::arg::Arg::value_names(&v46, &v0);
    v46 = clap_builder::builder::arg::Arg::value_parser(&v1);
    return clap_builder::builder::command::Command::arg(a0, &v51, &v46);
}
