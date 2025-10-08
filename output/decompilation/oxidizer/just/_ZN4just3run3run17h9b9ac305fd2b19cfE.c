fn just::run::run(a0: u64) -> long long {
    let v0: struct24;  // [bp-0x768]
    let v1: struct104;  // [bp-0x748]
    let v2: struct104;  // [bp-0x748]
    let v9: struct112;  // [bp-0x6e0], Other Possible Types: struct20, char
    let v10: struct24;  // [bp-0x6e0]
    let v11: struct16;  // [bp-0x6d9]
    let v12: struct16;  // [bp-0x6c9]
    let v13: u128;  // [bp-0x6b9]
    let v14: u128;  // [bp-0x6a9]
    let v15: struct44;  // [bp-0x670]
    let v16: struct104;  // [bp-0x638], Other Possible Types: struct16
    let v17: struct8;  // [bp-0x638]
    let v18: u64;  // [bp-0x638]
    let v19: u128;  // [bp-0x637]
    let v20: i64;  // [bp-0x630], Other Possible Types: u128
    let v21: u16;  // [bp-0x627]
    let v22: u8;  // [bp-0x625]
    let v23: u128;  // [bp-0x620]
    let v24: i8;  // [bp-0x61c]
    let v25: u128;  // [bp-0x610]
    let v26: i8;  // [bp-0x600], Other Possible Types: u128
    let v27: u128;  // [bp-0x5f0]
    let v28: u128;  // [bp-0x5e0]
    let v29: u64;  // [bp-0x5d0]
    let v30: u8;  // [bp-0x5c8]
    let v31: u64;  // [bp-0x490]
    let v32: u8;  // [bp-0x488]
    let v33: u128;  // [bp-0x487]
    let v34: u8;  // [bp-0x478]
    let v35: struct16;  // [bp-0x477]
    let v36: u8;  // [bp-0x468]
    let v37: struct16;  // [bp-0x467]
    let v38: u8;  // [bp-0x458]
    let v39: u128;  // [bp-0x457]
    let v40: u64;  // [bp-0x448]
    let v41: u128;  // [bp-0x438]
    let v42: u64;  // [bp-0x428]
    let v43: u8;  // [bp-0x420]
    let v44: u128;  // [bp-0x30c]
    let v45: i8;  // [bp-0x2fc]
    let v46: u8;  // [bp-0x2e9]
    let v47: struct712;  // [bp-0x2e8]
    let v51: struct16;  // xmm1
    let v52: iNone;  // xmm2
    let v53: iNone;  // xmm3
    let v54: u8;  // al
    let v55: u8;  // bl
    let v56: iNone;  // xmm0
    let v57: u128;  // xmm1
    let v58: u128;  // xmm2
    let v59: u32;  // ebp

    v47 = just::config::Config::app();
    v16 = clap_builder::builder::command::Command::try_get_matches_from(&v47, a0);
    if (((0 ^ v16.field_0) & (0 ^ -(v16.field_0))) >> 63) as char {
        just::run::run::{{closure}}(v16.field_8);
        return 1;
    }
    v15 = struct44 {
        field_0: v16.field_0
        field_8: v16.field_8 as i32
        field_12: *(&v16.field_0 as &i128)
        field_28: *(&v24 as &i128)
    };
    v17 = just::config::Config::from_matches(&v15);
    if v17.field_0 == 0x8000000000000000 {
        v51 = *(&(&v16)[1].field_8 as &i128);
        v52 = v25;
        v53 = *(&v26 as &i128);
        *(&v11.field_0 as &i128) = *(&v16.field_8 as &i128);
        v12 = v51;
        *(&v13 as void*) = v52;
        *(&v14 as void*) = v53;
        v32 = 13;
        v33 = *(&v9 as &i128);
        *(&v35.field_0 as &i128) = *((&v11.field_8 as &char + 1) as &i128);
        *(&v37.field_0 as &i128) = *((&v12.field_8 as &char + 1) as &i128);
        v39 = *((&v13 as &char + 9) as &i128);
        v40 = *((&v14 as &char + 8) as &i64);
        v31 = 0x8000000000000000;
LABEL_5d6b2a:
        *(&v20 as &&u8) = &v32;
    } else {
        memcpy(&v31, &v17, 424);
        if v31 == 0x8000000000000000 {
            goto LABEL_5d6b2a;
        }
        v21 = *(&v45 as &i16);
        v19 = v44;
        v22 = v46;
    }
    v18 = v54;
    v9 = core::result::Result<T,E>::unwrap_or_default(&v18);
    v0 = v10;
    v55 = *((&v9.field_15 as &char + 2) as &i8);
    v9 = just::loader::Loader::new();
    if v31 != 0x8000000000000000 {
        v29 = v42;
        v28 = v41;
        v27 = *(&v40 as &i128);
        v56 = *(&v32 as &i128);
        v57 = *(&v34 as &i128);
        v58 = *(&v36 as &i128);
        v26 = *(&v38 as &i128);
        v25 = v58;
        v23 = v57;
        *(&v20 as void*) = v56;
        memcpy(&v30, &v43, 312);
        v18 = v31;
        v1 = just::run::run::{{closure}}(&v9, &v18);
        if &v1 == "8" {
            return v59;
        }
    }
    v16 = v2;
    just::run::run::{{closure}}(v55, &v0, &v16);
    return v59;
}
