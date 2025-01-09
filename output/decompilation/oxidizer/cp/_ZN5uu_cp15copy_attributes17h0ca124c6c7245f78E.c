fn uu_cp::copy_attributes(a0: &struct64, a1: u32, a2: u32, a3: u32, a4: u32, a5: &u64) -> u64 {
    let v0: i192;  // [bp-0x230], Other Possible Types: struct24
    let v1: i64;  // [sp-0x228]
    let v2: i64;  // [sp-0x220]
    let v3: i8;  // [sp-0x218]
    let v4: i64;  // [sp-0x210]
    let v5: i64;  // [sp-0x208]
    let v6: i8;  // [bp-0x1f8]
    let v7: i8;  // [bp-0x1f0]
    let v8: struct40;  // [sp-0x1e8], Other Possible Types: i64, struct16
    let v9: i64;  // [sp-0x1e0]
    let v10: i64;  // [sp-0x1d8]
    let v11: i64;  // [sp-0x1d0]
    let v12: i64;  // [sp-0x1c8]
    let v16: i64;  // [sp-0x138]
    let v17: i64;  // [sp-0x130]
    let v18: i64;  // [sp-0x128]
    let v19: i64;  // [sp-0x120]
    let v20: i64;  // [sp-0x118]
    let v21: i64;  // [sp-0x110]
    let v22: i64;  // [sp-0x108]
    let v23: i64;  // [sp-0x100]
    let v24: i128;  // [sp-0xf8]
    let v25: i64;  // [sp-0xe0]
    let v26: i64;  // [sp-0xd8]
    let v27: i128;  // [sp-0xd0]
    let v28: i8;  // [sp-0xc8]
    let v29: i8;  // [bp-0xc0]
    let v31: i64;  // r12

    v16 = a1;
    v17 = a2;
    v4 = a3;
    v5 = a4;
    v0 = struct24 {
        field_0: 1
        field_16: a2
    };
    v3 = 1;
    v25 = 1;
    v26 = a3;
    v27 = a4;
    v28 = 1;
    v20 = &v0;
    v21 = <os_display::Quoted as core::fmt::Display>::fmt;
    v22 = &v25;
    v23 = <os_display::Quoted as core::fmt::Display>::fmt;
    v8 = &g_5b5e68;
    v9 = 2;
    v12 = 0;
    v10 = &v20;
    v11 = 2;
    core::option::Option<T>::map_or_else();
    v18 = v6;
    v19 = v7;
    v8 = std::fs::symlink_metadata(a1, a2);
    v31 = v8;
    if v31 == 2 {
        v0 = v18;
        v8 = <uu_cp::Error as core::convert::From<quick_error::Context<&str,std::io::error::Error>>>::from(&v0);
        return struct64 {
            field_0: v34
            field_16: v33
            field_32: v32
            field_48: v14
        };
    }
    v24 = v10;
    memcpy(&v29, &v12, 144);
    v25 = v31;
    v26 = v2;
    v27 = v24;
    v0 = &v25;
    v1 = &v4;
    v2 = &v18;
    uu_cp::handle_preserve();
    v0 = &v4;
    v1 = &v25;
    v2 = &v18;
    uu_cp::handle_preserve();
    if v8 != 13 {
        return struct64 {
            field_0: v35
            field_8: v36
            field_24: v37
            field_40: v13
            field_56: v15
        };
    }
    uu_cp::handle_preserve();
    if v8 == 13 {
        uu_cp::handle_preserve();
        if v8 == 13 {
            return struct8 {
                field_0: 13
            };
        }
    }
}
