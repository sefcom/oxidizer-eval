fn uu_cp::symlink_file(a0: &Option<struct32>, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: i64;  // [sp-0x1d8]
    let v1: i64;  // [sp-0x1d0]
    let v2: i64;  // [sp-0x1c8]
    let v3: i64;  // [sp-0x1c0]
    let v4: i64;  // [sp-0x1b8]
    let v5: i64;  // [sp-0x1b0]
    let v6: i64;  // [sp-0x1a8]
    let v7: i64;  // [sp-0x1a0]
    let v8: i8;  // [sp-0x198]
    let v9: i64;  // [sp-0x190]
    let v10: i64;  // [sp-0x188]
    let v11: i64;  // [sp-0x180]
    let v12: i8;  // [sp-0x178]
    let v13: i8;  // [bp-0x170]
    let v14: i8;  // [bp-0x160]
    let v15: i64;  // [sp-0x158], Other Possible Types: Option<struct8>
    let v16: i64;  // [sp-0x150]
    let v17: i64;  // [sp-0x148]
    let v18: i64;  // [sp-0x140]
    let v19: i64;  // [sp-0x138]
    let v20: i8;  // [bp-0xc0]
    let v22: i64;  // rax
    let v24: i64;  // rax
    let v25: i64;  // rax
    let v27: i64;  // r12
    let v29: i64;  // rax

    v0 = std::os::unix::fs::symlink(a1, a2, a3, a4);
    v22 = uucore::features::fs::get_filename(a3, a4);
    if !v22 {
        v22 = &g_42d170;
    }
    v5 = 0;
    v6 = v22;
    v7 = 17;
    v8 = 1;
    v24 = uucore::features::fs::get_filename(a1, a2);
    if !v24 {
        v25 = &g_42d170;
    } else {
        v25 = v24;
    }
    v27 = v25;
    v9 = 0;
    v10 = v27;
    v11 = 17;
    v12 = 1;
    v1 = &v5;
    v2 = <os_display::Quoted as core::fmt::Display>::fmt;
    v3 = &v9;
    v4 = <os_display::Quoted as core::fmt::Display>::fmt;
    v15 = "cannot create symlink ";
    v16 = 2;
    v19 = 0;
    v17 = &v1;
    v18 = 2;
    core::option::Option<T>::map_or_else();
    v17 = v14;
    v15 = v13;
    if v0 {
        v29 = v15;
        return Some(struct32 {
            field_0: v29
            field_8: v16
            field_16: v17
            field_24: v0
        });
    }
    v15 = uucore::features::fs::FileInformation::from_path(a3, a4, 0);
    return struct8 {
        field_0: 13
    };
    memcpy(&v20, &v15, 144);
    hashbrown::map::HashMap<K,V,S,A>::insert(a5, &v20);
}
