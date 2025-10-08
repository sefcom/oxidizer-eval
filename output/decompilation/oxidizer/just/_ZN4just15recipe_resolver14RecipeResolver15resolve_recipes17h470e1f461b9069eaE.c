fn just::recipe_resolver::RecipeResolver::resolve_recipes(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64, a5: i32, a6: &struct24) {
    let v0: struct24;  // [bp-0x448], Other Possible Types: u64
    let v1: struct128;  // [bp-0x448]
    let v2: u64;  // [bp-0x448]
    let v4: void*;  // [bp-0x430]
    let v8: u32;  // [bp-0x40c]
    let v10: struct81;  // [bp-0x3f0]
    let v11: struct82;  // [bp-0x3e8]
    let v12: struct81;  // [bp-0x3e0]
    let v13: struct82;  // [bp-0x3d8]
    let v14: struct82;  // [bp-0x3d0]
    let v15: struct82;  // [bp-0x3c8]
    let v16: struct16;  // [bp-0x3c0]
    let v17: struct16;  // [bp-0x3b8]
    let v18: struct16;  // [bp-0x3b0]
    let v19: u8;  // [bp-0x3a8]
    let v20: struct82;  // [bp-0x3a4]
    let v21: &u64;  // [bp-0x3a0]
    let v22: u64;  // [bp-0x398]
    let v23: u64;  // [bp-0x390]
    let v24: u64;  // [bp-0x388]
    let v25: void*;  // [bp-0x380]
    let v26: u64;  // [bp-0x378]
    let v27: i64;  // [bp-0x370]
    let v28: u128;  // [bp-0x368]
    let v29: u64;  // [bp-0x358]
    let v36: struct256;  // [bp-0x308]
    let v46: u2368;  // [bp-0x130]
    let v47: struct56;  // rax
    let v48: core::option::Option<&str>;  // rax
    let v50: i64;  // rdi
    let v71: iNone;  // xmm0
    let v72: iNone;  // xmm1
    let v73: iNone;  // xmm2
    let v75: struct82;  // [bp-0x3f0]

    v8 = a5;
    v21 = a1;
    v22 = a2;
    v23 = a3;
    v24 = a4;
    v25 = 0;
    v27 = 0;
    v28 = *(a6 as &i128);
    v29 = *((a6 + 16) as &i64);
    loop {
        v1 = v0;
        just::table::Table<V>::pop(&v36, &v28);
        if (((0 ^ v36.field_0) & (0 ^ -(v36.field_0))) >> 63) as char {
            break;
        }
        memcpy(&v46, &v36, 0x100);
        v0 = struct24 {
            field_0: 0
            field_8: ""
        };
        v10 = just::recipe_resolver::RecipeResolver::resolve_recipe(&v21, &v0, &v46);
        if v19 == 37 {
            v0 = v2;
        } else {
            v71 = *((&v10.field_0 as &char + 8) as &i128);
            v72 = *((&v10.field_16 as &char + 8) as &i128);
            v73 = *((&v10.field_32 as &char + 8) as &i128);
            *(&v4[56] as &i128) = *((&v10.field_48 as &char + 8) as &i128);
            v4[40] = v73;
            v4[24] = v72;
            v4[8] = v71;
            *(&v4[73] as &i32) = *(&(&v10.field_72)[1] as &i32);
            *(&v4[76] as &struct82) = v20;
            *(v4 as &i64) = v10.field_0;
            *(&v4[72] as &u8) = v19;
        }
    }
    v47 = v25;
    v48 = v47;
    if let Some(_) = v48 {
        v48 = v27;
    }
    v75 = v47;
    v11 = 0;
    v12 = v47;
    v13 = v26;
    v14 = v75;
    v15 = 0;
    v16 = v47;
    v17 = v13;
    v18 = v48;
    v50 = &v75;
}
