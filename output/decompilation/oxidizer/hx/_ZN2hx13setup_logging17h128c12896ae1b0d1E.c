fn hx::setup_logging(a0: u64) -> long long {
    let v0: struct13;  // [bp-0x1a8]
    let v1: u16;  // [bp-0x19c]
    let v2: struct24;  // [bp-0x198], Other Possible Types: struct88, struct96, u128
    let v3: u128;  // [bp-0x188]
    let v4: u64;  // [bp-0x178]
    let v5: u64;  // [bp-0x170]
    let v6: u64;  // [bp-0x168]
    let v7: u64;  // [bp-0x160]
    let v8: u128;  // [bp-0x158]
    let v9: u64;  // [bp-0x148]
    let v10: u64;  // [bp-0x138]
    let v11: void*;  // [bp-0x130]
    let v12: u128;  // [bp-0x130]
    let v13: u64;  // [bp-0x128]
    let v14: u128;  // [bp-0x120]
    let v15: u64;  // [bp-0x110]
    let v16: u128;  // [bp-0x108]
    let v17: u64;  // [bp-0x100]
    let v18: u64;  // [bp-0xf8]
    let v19: u128;  // [bp-0xf0]
    let v20: u64;  // [bp-0xe0]
    let v21: Result<struct4, struct8>;  // [bp-0xd8]
    let v22: u32;  // [bp-0xd4]
    let v23: u64;  // [bp-0xd0]
    let v24: struct96;  // [bp-0xc8]
    let v25: struct96;  // [bp-0x68]
    let v27: iNone;  // xmm1
    let v28: i64;  // rcx
    let v30: iNone;  // xmm0
    let v31: iNone;  // xmm1
    let v32: iNone;  // xmm2

    v11 = 0;
    v13 = 8;
    v14 = 0;
    v15 = 8;
    v16 = 0;
    v18 = 8;
    v19 = 0;
    v9 = v20;
    v8 = v19;
    v6 = v17;
    v7 = v18;
    v4 = 8;
    v5 = v16;
    v3 = v14;
    v27 = *(&v11 as &i128);
    *(&v2 as void*) = v27;
    v28 = (a0 < 3 ? a0 : 3);
    v10 = (a0 < 3 ? a0 : 3) + 2;
    v20 = v9;
    *(&v12 as void*) = v27;
    v2 = struct88 {
        field_0: ""
        field_16: 8
        field_24: 0
        field_40: 8
        field_48: 0
        field_64: 8
        field_72: 0
    };
    v24 = fern::builders::Dispatch::format(&v2);
    v2 = helix_loader::log_file();
    v1 = 0;
    v0 = struct13 {
        field_0: 0x1b600000000
        field_8: 0
        field_12: 1
    };
    v21 = std::fs::OpenOptions::open(&v0, &v2);
    match v21 {
        Err(_) => {
            return anyhow::error::<impl anyhow::Error>::new(v23);
        },
        Ok(_) => {
            v25 = fern::builders::Dispatch::chain(&v24, v22 as u64);
            v30 = *(&v10 as &i128);
            v31 = *((&v12 as &char + 8) as &i128);
            v32 = *((&v14 as &char + 8) as &i128);
            v2 = struct96 {
                field_0: v30
                field_16: v31
                field_32: v32
                field_48: v16
                field_64: *(&v18 as &i128)
                field_80: *((&v19 as &char + 8) as &i128)
            };
            v24 = fern::builders::Dispatch::chain(&v2, &v25);
            if fern::builders::Dispatch::apply(&v24) as u8 {
                return anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from();
            }
            return 0;
        },
    }
}
