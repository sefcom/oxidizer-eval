fn uu_hashsum::uu_app_length(a0: u32) -> u64 {
    let v0: struct24;  // [bp-0x7a8], Other Possible Types: i128
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
    let v36: i128;  // [sp-0x5c8]
    let v37: i64;  // [sp-0x5b8]
    let v38: i64;  // [sp-0x590]
    let v39: i64;  // [sp-0x578]
    let v40: i64;  // [sp-0x570]
    let v41: i64;  // [sp-0x568]
    let v42: i64;  // [sp-0x560]
    let v43: i64;  // [sp-0x558]
    let v44: i64;  // [sp-0x548]
    let v45: i32;  // [sp-0x540]
    let v46: i8;  // [bp-0x53c]
    let v47: i16;  // [sp-0x53b]
    let v48: i8;  // [sp-0x539]
    let v49: i64;  // [sp-0x538], Other Possible Types: Enum, struct592
    let v50: i64;  // [sp-0x530]
    let v51: i64;  // [sp-0x528]
    let v52: struct16;  // [sp-0x4b8], Other Possible Types: i4736
    let v53: i64;  // [sp-0x4a8]
    let v54: i32;  // [sp-0x2f8]
    let v55: i8;  // [bp-0x2e8]
    let v58: i64;  // rcx
    let v59: i64;  // rdx
    let v60: i64;  // r12
    let v61: i64;  // r15
    let v62: i64;  // rax
    let v63: i64;  // rcx

    uu_hashsum::uu_app_common(&v55);
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
    v37 = 0x8000000000000000;
    v38 = 9223372036854775809;
    v39 = &g_471a5c;
    v40 = &g_1;
    v41 = &g_471a5c;
    v42 = &g_1;
    v43 = 0;
    v44 = 0x11000000110000;
    v45 = 0;
    v46 = 3337;
    *(__rust_alloc(&g_1, &g_1) as &void*) = core::num::<impl core::str::traits::FromStr for usize>::from_str;
    v0 = struct24 {
        field_0: &g_1
        field_8: v57
        field_16: &g_6c1d90
    };
    v49 = clap_builder::builder::arg::Arg::value_parser(&v1, &v0);
    v54 = 108;
    memcpy(&v1, &v49, 592);
    v49 = 0;
    v50 = &g_1;
    v51 = 0;
    v49 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, 99);
    v58 = v50;
    v59 = v51;
    *((v58 + v59 + &g_41 as &u8) as &i128) = 147712518146400104841968849825202266656;
    *((v58 + v59 + &g_31 as &u8) as &i128) = 154789943337600021882603460153404714855;
    *((v58 + v59 + &g_21 as &u8) as &i128) = 144060929369952036243771645136834949743;
    *((v58 + v59 + &g_11 as &u8) as &i128) = 135749850677591766186991148893909252197;
    *((v58 + v59 + &g_1 as &u8) as &i128) = 43139862373315530789961833071013093920;
    *((v58 + v59) as &i128) = 146760928019348423087281112063047854436;
    *((v58 + v59 + &g_51 as &u8) as &i32) = 941647471;
    v51 = v59 + 99;
    v60 = v49;
    v0 = *((&v49 as &char + 8) as &i128);
    if v60 != 0x8000000000000000 {
        v49 = v0;
    }
    v35 = v60;
    v36 = v49;
    memcpy(&v49, &v1, 592);
    v61 = v53;
    if v61 == *((&v49 as &char + 128) as &i64) {
        v52 = alloc::raw_vec::RawVec<T,A>::grow_one();
    }
    v62 = *((&v52 as &char + 8) as &i64);
    v63 = v61 * &g_1;
    *((v62 + v63) as &&i64) = &g_471a5c;
    *((v62 + v63 + &g_1 as &u8) as &&i64) = &g_1;
    v53 = v61 + &g_1 as &u8;
    memcpy(&v1, &v49, 588);
    v47 = *((&v49 as &char + 589) as &i16);
    v48 = *((&v49 as &char + 591) as &i8);
    v46 = 0;
    clap_builder::builder::command::Command::arg(a0, &v55, &v1);
    return a0;
}
