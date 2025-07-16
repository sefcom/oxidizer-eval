fn uu_cp::symlink_file(a1: i64, a2: i64, a3: i64, a4: i64, a5: i64) -> Option<struct32> {
    let a0: i64;  // rdi
    let v0: u64;  // [bp-0x1d8]
    let v1: struct12;  // [bp-0x1d0]
    let v2: u64;  // [bp-0x1c8]
    let v3: i64;  // [bp-0x1c0]
    let v4: u64;  // [bp-0x1b8]
    let v5: void*;  // [bp-0x1b0]
    let v6: u64;  // [bp-0x1a8]
    let v7: u64;  // [bp-0x1a0]
    let v8: u8;  // [bp-0x198]
    let v9: void*;  // [bp-0x190]
    let v10: u64;  // [bp-0x188]
    let v11: u64;  // [bp-0x180]
    let v12: Result<struct24, struct12>;  // [bp-0x178]
    let v13: u8;  // [bp-0x170]
    let v14: u64;  // [bp-0x160]
    let v15: struct24;  // [bp-0x158], Other Possible Types: u64
    let v16: struct16;  // [bp-0x158]
    let v17: u64;  // [bp-0x150]
    let v18: i64;  // [bp-0x148], Other Possible Types: u64
    let v19: u64;  // [bp-0x140]
    let v20: void*;  // [bp-0x138]
    let v21: u8;  // [bp-0xc0]
    let v23: u64;  // rax
    let v24: u64;  // rdx
    let v25: u64;  // rax
    let v27: u64;  // rdx

    v0 = std::os::unix::fs::symlink(a1, a2, a3, a4);
    v23 = uucore::features::fs::get_filename(a3, a4);
    v5 = 0;
    v6 = v23;
    v7 = v24;
    v8 = 1;
    v25 = uucore::features::fs::get_filename(a1, a2);
    v9 = 0;
    v10 = v25;
    v11 = v27;
    v12 = 1;
    v1 = &v5;
    v2 = <os_display::Quoted as core::fmt::Display>::fmt;
    v3 = &v9;
    v4 = <os_display::Quoted as core::fmt::Display>::fmt;
    v15 = "cannot create symlink ";
    v16 as u64 = 2;
    v20 = 0;
    v18 = &v1;
    v19 = 2;
    v15 = core::option::Option<T>::map_or_else(v27);
    v18 = v14;
    memcpy(&v15, &v13, 16);
    if v0 {
        return Some(struct32 {
            field_0: v15.field_0 as i64
            field_8: v17
            field_16: v18
            field_24: v0
        });
    }
    v16 = uucore::features::fs::FileInformation::from_path(a3, a4, 0);
    if v16.field_0 {
        return struct8 {
            field_0: 13
        };
    }
    memcpy(&v21, &v16 as u64, 144);
    hashbrown::map::HashMap<K,V,S,A>::insert(a5, &v21, a2, a3);
    return struct8 {
        field_0: 13
    };
}
