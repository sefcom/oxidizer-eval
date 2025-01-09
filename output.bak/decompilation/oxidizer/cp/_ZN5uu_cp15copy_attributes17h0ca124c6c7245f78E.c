fn uu_cp::copy_attributes(a0: &struct64, a1: u32, a2: u32, a3: u32, a4: u32, a5: &u64) -> u64 {
    let v0: i64;  // [sp-0x230], Other Possible Types: struct24
    let v1: i64;  // [sp-0x228]
    let v2: i64;  // [sp-0x220]
    let v3: i8;  // [sp-0x218]
    let v4: i64;  // [sp-0x210]
    let v5: i64;  // [sp-0x208]
    let v6: i8;  // [bp-0x1f8]
    let v7: i8;  // [bp-0x1f0]
    let v8: Option<struct64>;  // [sp-0x1e8], Other Possible Types: struct16, i64, struct40
    let v9: i64;  // [sp-0x1e0]
    let v10: i64;  // [sp-0x1d8]
    let v11: i64;  // [sp-0x1d0]
    let v12: i64;  // [sp-0x1c8]
    let v14: i64;  // [sp-0x138]
    let v15: i64;  // [sp-0x130]
    let v16: i64;  // [sp-0x128]
    let v17: i64;  // [sp-0x120]
    let v18: i64;  // [sp-0x118]
    let v19: i64;  // [sp-0x110]
    let v20: i64;  // [sp-0x108]
    let v21: i64;  // [sp-0x100]
    let v22: i128;  // [sp-0xf8]
    let v23: i64;  // [sp-0xe0]
    let v24: i64;  // [sp-0xd8]
    let v25: i128;  // [sp-0xd0]
    let v26: i8;  // [sp-0xc8]
    let v27: i8;  // [bp-0xc0]
    let v29: i64;  // r12

    v14 = a1;
    v15 = a2;
    v4 = a3;
    v5 = a4;
    v0 = 1;
    v1 = a1;
    v2 = a2;
    v3 = 1;
    v23 = 1;
    v24 = a3;
    v25 = a4;
    v26 = 1;
    v18 = &v0;
    v19 = <os_display::Quoted as core::fmt::Display>::fmt;
    v20 = &v23;
    v21 = <os_display::Quoted as core::fmt::Display>::fmt;
    v8 = &g_5b5e68;
    v9 = 2;
    v12 = 0;
    v10 = &v18;
    v11 = 2;
    core::option::Option<T>::map_or_else();
    v16 = v6;
    v17 = v7;
    v8 = std::fs::symlink_metadata(a1, a2);
    v29 = v8;
    if v29 == 2 {
        v0 = struct24 {
            field_0: v16
            field_16: v9
        };
        v8 = <uu_cp::Error as core::convert::From<quick_error::Context<&str,std::io::error::Error>>>::from(&v0);
        return struct64 {
            field_0: v35
            field_16: v34
            field_32: v33
            field_48: *((&v8 as &char + 48) as &i128)
        };
    }
    v22 = v10;
    memcpy(&v27, &v12, 144);
    v23 = v29;
    v24 = v2;
    v25 = v22;
    v0 = &v23;
    v1 = &v4;
    v2 = &v16;
    v8 = uu_cp::handle_preserve(*(a5 as &i8), *((a5 + 1) as &i8), &v0);
    return struct64 {
        field_0: v35
        field_16: v34
        field_32: v33
        field_48: *((&v8 as &char + 48) as &i128)
    };
    v0 = &v4;
    v1 = &v23;
    v2 = &v16;
    v8 = uu_cp::handle_preserve(*((a5 + 2) as &i8), *((a5 + 3) as &i8), &v0);
    if v8 != 13 {
        return struct64 {
            field_0: v36
            field_8: v37
            field_24: v38
            field_40: *((&v8 as &char + 40) as &i128)
            field_56: *((&v8 as &char + 56) as &i64)
        };
    }
    v8 = uu_cp::handle_preserve(*((a5 + 4) as &i8), *((a5 + 5) as &i8), &v23, &v4);
    if v8 == 13 {
        v8 = uu_cp::handle_preserve(*((a5 + 10) as &i8), *((a5 + 11) as &i8), &v14, &v4);
        if v8 == 13 {
            return struct8 {
                field_0: 13
            };
        }
    }
}
