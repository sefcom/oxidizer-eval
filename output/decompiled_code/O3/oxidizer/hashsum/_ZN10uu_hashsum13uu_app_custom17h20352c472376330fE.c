fn uu_hashsum::uu_app_custom(a0: u32) -> u64 {
    let v0: i128;  // [sp-0xb18], Other Possible Types: Enum
    let v1: i64;  // [sp-0xb10]
    let v2: i64;  // [sp-0xb08]
    let v3: i64;  // [sp-0xaf0]
    let v4: i128;  // [sp-0xae8]
    let v5: i5696;  // [sp-0xad8], Other Possible Types: struct712
    let v6: i64;  // [sp-0xac8]
    let v7: i64;  // [sp-0xab0]
    let v8: i64;  // [sp-0xaa0]
    let v9: i64;  // [sp-0xa88]
    let v10: i64;  // [sp-0xa70]
    let v11: i64;  // [sp-0xa68]
    let v12: i128;  // [sp-0xa60]
    let v13: i64;  // [sp-0xa50]
    let v14: i128;  // [sp-0xa48]
    let v15: i64;  // [sp-0xa38]
    let v16: i128;  // [sp-0xa30]
    let v17: i64;  // [sp-0xa20]
    let v18: i128;  // [sp-0xa18]
    let v19: i64;  // [sp-0xa08]
    let v20: i128;  // [sp-0xa00]
    let v21: i64;  // [sp-0x9f0]
    let v22: i128;  // [sp-0x9e8]
    let v23: i64;  // [sp-0x9d8]
    let v24: i128;  // [sp-0x9d0]
    let v25: i64;  // [sp-0x9c0]
    let v26: i128;  // [sp-0x9b8]
    let v27: i64;  // [sp-0x9a8]
    let v28: i128;  // [sp-0x9a0]
    let v29: i64;  // [sp-0x990]
    let v30: i128;  // [sp-0x988]
    let v31: i64;  // [sp-0x978]
    let v32: i128;  // [sp-0x970]
    let v33: i64;  // [sp-0x960]
    let v34: i128;  // [sp-0x958]
    let v35: i64;  // [sp-0x948]
    let v36: i128;  // [sp-0x940]
    let v37: i64;  // [sp-0x930]
    let v38: i64;  // [sp-0x928]
    let v39: i64;  // [sp-0x920]
    let v40: i128;  // [sp-0x918]
    let v41: i64;  // [sp-0x908]
    let v42: i64;  // [sp-0x8e0]
    let v43: i64;  // [sp-0x8c8]
    let v44: i64;  // [sp-0x8c0]
    let v45: i64;  // [sp-0x8b8]
    let v46: i64;  // [sp-0x8b0]
    let v47: i64;  // [sp-0x8a8]
    let v48: i64;  // [sp-0x898]
    let v49: i32;  // [sp-0x890]
    let v50: i16;  // [sp-0x88c]
    let v51: i8;  // [bp-0x810]
    let v52: i8;  // [sp-0x5c4]
    let v53: i16;  // [sp-0x5c3]
    let v54: i8;  // [sp-0x5c1]
    let v55: struct712;  // [sp-0x5c0], Other Possible Types: i5696
    let v56: i8;  // [bp-0x2f8]
    let v58: i64;  // r12
    let v59: i256;  // ymm0
    let v60: i64;  // rcx
    let v61: i64;  // rbp
    let v62: i64;  // rbx
    let v63: i128;  // xmm0
    let v64: i256;  // ymm0
    let v65: i128;  // xmm0
    let v66: i128;  // xmm0

    uu_hashsum::uu_app_common(&v56);
    v5 = uu_hashsum::uu_app_opt_bits(&v56);
    v55 = uu_hashsum::uu_app_b3sum_opts(&v5);
    v58 = 0;
    v3 = 9223372036854775809;
    do {
        memcpy(&v56, &v55, 712);
        v60 = *((v58 + &g_6c1de8 as &u8) as &i64);
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
        v36 = 0;
        v5 = 0;
        v6 = 0;
        v7 = 0;
        v8 = 0;
        v9 = 5;
        v10 = 0;
        v11 = 8;
        v13 = 8;
        v15 = 8;
        v17 = 8;
        v19 = 8;
        v21 = 8;
        v23 = 8;
        v25 = 8;
        v27 = 8;
        v29 = 4;
        v31 = 8;
        v33 = 8;
        v35 = 8;
        v37 = 8;
        v38 = 0;
        v39 = 0x8000000000000000;
        v41 = 0x8000000000000000;
        v42 = v3;
        v43 = v45;
        v44 = v60;
        v45 = v43;
        v46 = v44;
        v47 = 0;
        v48 = 0x11000000110000;
        v49 = 0;
        v50 = 3337;
        v61 = *((v58 + "work with MD5") as &i64);
        v62 = *((v58 + &g_6c1df8 as &u8) as &i64);
        v0 = 0;
        v1 = 1;
        v2 = 0;
        if !v62 {
            v0 = 0;
            v2 = 0;
        } else {
            v0 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(0, v62);
        }
        memcpy(1 + v2, v61, v62);
        v2 += v62;
        v63 = *((&v0 as &char + 8) as &i128);
        vvar_27{reg 224} = (((vvar_16{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_115{reg 224}))
        v4 = v63;
        if v0 != 0x8000000000000000 {
            v65 = v4;
            vvar_27{reg 224} = ((vvar_27{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_121{reg 224}))
            v0 = v65;
        }
        v58 += 32;
        v39 = v0;
        v66 = v0;
        vvar_16{reg 224} = ((vvar_27{reg 224} | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000<256>) | Conv(128->256, vvar_127{reg 224}))
        v40 = v66;
        memcpy(&v51, &v5, 588);
        v53 = *((&v5 as &char + 589) as &i16);
        v54 = *((&v5 as &char + 591) as &i8);
        v52 = 2;
        v55 = clap_builder::builder::command::Command::arg(&v56, &v51);
    } while (v58 != 480);
    memcpy(a0, &v55, 712);
    return a0;
}
