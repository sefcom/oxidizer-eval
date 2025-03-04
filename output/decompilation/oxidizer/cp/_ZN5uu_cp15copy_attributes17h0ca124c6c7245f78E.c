fn uu_cp::copy_attributes(a0: &struct64, a1: u32, a2: u32, a3: u32, a4: u32, a5: &u64) -> u64 {
    let v0: i64;  // [sp-0x230], Other Possible Types: int
    let v1: i64;  // [sp-0x228]
    let v2: i64;  // [sp-0x220]
    let v3: i8;  // [sp-0x218]
    let v4: i64;  // [sp-0x210]
    let v5: i64;  // [sp-0x208]
    let v6: String;  // [sp-0x200]
    let v7: Result<struct176, struct8>;  // [sp-0x1e8], Other Possible Types: struct40, Option<struct64>
    let v8: i64;  // [sp-0x1e8]
    let v9: Option<struct64>;  // [sp-0x1e8]
    let v10: i64;  // [sp-0x138]
    let v11: i64;  // [sp-0x130]
    let v12: i64;  // [sp-0x128]
    let v13: i64;  // [sp-0x120]
    let v14: iNone;  // [sp-0xf8]
    let v15: i64;  // [sp-0xe0]
    let v16: i64;  // [sp-0xd8]
    let v17: i64;  // [sp-0xd0], Other Possible Types: int
    let v18: i8;  // [sp-0xc8]
    let v19: i8;  // [bp-0xc0]
    let v21: i64;  // r12

    v10 = a1;
    v11 = a2;
    v4 = a3;
    v5 = a4;
    v0 = 1;
    v1 = a1;
    v2 = a2;
    v3 = 1;
    v15 = 1;
    v16 = a3;
    v17 = a4;
    v18 = 1;
    v6 = format!("{} -> {}", &v0, &v15);
    v12 = v6.cap;
    v13 = v6.len;
    v7 = std::fs::symlink_metadata(a1, a2);
    v21 = v8;
    if v21 == 2 {
        v0 = *(&v12 as &i192);
        v7 = <uu_cp::Error as core::convert::From<quick_error::Context<&str,std::io::error::Error>>>::from(&v0);
    } else {
        v14 = *((&v7 as &char + 16) as &i128);
        memcpy(&v19, &v7, 144);
        v15 = v21;
        v16 = v2;
        v17 = v14;
        v0 = &v15;
        v1 = &v4;
        v2 = &v12;
        v7 = uu_cp::handle_preserve(*(a5 as &i8), *((a5 + 1) as &i8), &v0);
        if v7 as i32 == 13 {
            v0 = &v4;
            v1 = &v15;
            v2 = &v12;
            v9 = uu_cp::handle_preserve(*((a5 + 2) as &i8), *((a5 + 3) as &i8), &v0);
            if v8 != 13 {
                return struct64 {
                    field_0: v25
                    field_8: v26
                    field_24: v27
                    field_40: (&v9)[40] as i128
                    field_56: (&v9)[56] as i64
                };
            }
            v9 = uu_cp::handle_preserve(*((a5 + 4) as &i8), *((a5 + 5) as &i8), &v15, &v4);
            if v8 == 13 {
                v9 = uu_cp::handle_preserve(*((a5 + 10) as &i8), *((a5 + 11) as &i8), &v10, &v4);
                if v8 == 13 {
                    return struct8 {
                        field_0: 13
                    };
                }
            }
        }
    }
    return struct64 {
        field_0: v22
        field_16: v23
        field_32: v24
        field_48: (&v7)[48] as i128
    };
}
