fn uu_cp::copy_attributes(a1: i64, a2: i64, a3: i64, a4: i64, a5: i64) -> : struct64 {
    let a0: i64;  // rdi
    let v0: u192;  // [bp-0x230]
    let v1: u64;  // [bp-0x228]
    let v2: u64;  // [bp-0x220]
    let v3: u64;  // [bp-0x220]
    let v4: u8;  // [bp-0x218]
    let v5: u64;  // [bp-0x210]
    let v6: u64;  // [bp-0x208]
    let v7: alloc::string::String;  // [bp-0x200]
    let v8: u64;  // [bp-0x1f8]
    let v9: u64;  // [bp-0x1f0]
    let v10: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0x1e8]
    let v12: Option<struct64>;  // [bp-0x1e8]
    let v13: u512;  // [bp-0x1e8], Other Possible Types: Option<struct64>
    let v15: u64;  // [bp-0x138]
    let v16: u64;  // [bp-0x130]
    let v17: u64;  // [bp-0x128]
    let v18: u64;  // [bp-0x120]
    let v19: u128;  // [bp-0xf8]
    let v20: u64;  // [bp-0xe0]
    let v21: u64;  // [bp-0xd8]
    let v22: u64;  // [bp-0xd0]
    let v23: u8;  // [bp-0xc8]
    let v24: u8;  // [bp-0xc0]
    let v26: u128;  // xmm0
    let v27: u128;  // xmm1
    let v28: u128;  // xmm2
    let v29: u128;  // xmm0
    let v30: u128;  // xmm1

    v15 = a1;
    v16 = a2;
    v5 = a3;
    v6 = a4;
    v0 = 1;
    v1 = a1;
    v3 = a2;
    v4 = 1;
    v20 = 1;
    v21 = a3;
    v22 = a4;
    v23 = 1;
    v7 = format!("{} -> {}", &v0, &v20);
    v17 = v8;
    v18 = v9;
    v10 = std::fs::symlink_metadata(a1, a2);
    memcpy(&v19, &v10, 16);
    memcpy(&v24, &v10 as u64, 144);
    v20 = &g_5b5e68;
    v21 = v2;
    v22 = v19;
    v0 = struct24 {
        field_0: &v20
        field_8: &v5
        field_16: &v17
    };
    v12 = uu_cp::handle_preserve(*(a5 as &i8), *((a5 + 1) as &i8), &v0);
    match v12 {
        Some(_) => {
            v26 = v12 as i128;
            v27 = *((&v12 as &char + 16) as &i128);
            v28 = *((&v10 as &char + 32) as &i128);
            return struct64 {
                field_0: v26
                field_16: v27
                field_32: v28
                field_48: *((&v10 as &char + 48) as &i128)
            };
        },
        None => {
            v0 = struct24 {
                field_0: &v5
                field_8: &v20
                field_16: &v17
            };
            v13 = uu_cp::handle_preserve(*((a5 + 2) as &i8), *((a5 + 3) as &i8) as u8 as u64, &v0);
            v29 = *((&v13 as &char + 8) as &i128);
            v30 = *((&v13 as &char + 24) as &i128);
            return struct72 {
                field_0: &g_5b5e68
                field_8: <UNKNOWN>
                field_24: <UNKNOWN>
                field_40: <UNKNOWN>
                field_56: <UNKNOWN>
            };
        },
    }
}
