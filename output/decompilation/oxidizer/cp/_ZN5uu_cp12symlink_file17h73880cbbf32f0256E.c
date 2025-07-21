fn uu_cp::symlink_file(a1: i64, a2: i64, a3: i64, a4: i64, a5: i64) -> Option<struct32> {
    let a0: i64;  // rdi
    let v0: u64;  // [bp-0x1d8]
    let v1: struct12;  // [bp-0x1d0]
    let v2: u64;  // [bp-0x1c8]
    let v3: i64;  // [bp-0x1c0]
    let v4: u64;  // [bp-0x1b8]
    let v5: struct32;  // [bp-0x1b0]
    let v6: core::fmt::Arguments;  // [bp-0x190]
    let v7: core::fmt::rt::Argument;  // [bp-0x188]
    let v8: u64;  // [bp-0x180]
    let v9: Result<struct24, struct12>;  // [bp-0x178]
    let v10: u128;  // [bp-0x170]
    let v11: u64;  // [bp-0x160]
    let v12: u64;  // [bp-0x158]
    let v13: u128;  // [bp-0x158]
    let v14: u64;  // [bp-0x150]
    let v15: i64;  // [bp-0x148], Other Possible Types: u64
    let v16: u64;  // [bp-0x140]
    let v17: void*;  // [bp-0x138]
    let v18: u8;  // [bp-0xc0]
    let v20: u64;  // rax
    let v21: u64;  // rdx
    let v22: u64;  // rax
    let v24: u64;  // rdx

    v0 = std::os::unix::fs::symlink(a1, a2, a3, a4);
    v20 = uucore::features::fs::get_filename(a3, a4);
    v5 = struct32 {
        field_0: 0
        field_8: v20
        field_16: v21
        field_24: 1
    };
    v22 = uucore::features::fs::get_filename(a1, a2);
    v6 = 0;
    v7 = v22;
    v8 = v24;
    v9 = 1;
    v1 = &v5;
    v2 = <os_display::Quoted as core::fmt::Display>::fmt;
    v3 = &v6;
    v4 = <os_display::Quoted as core::fmt::Display>::fmt;
    v12 = "cannot create symlink ";
    v13 = 2;
    v17 = 0;
    v15 = &v1;
    v16 = 2;
    v13 = core::option::Option<T>::map_or_else(v24);
    v15 = v11;
    v13 = v10;
    if v0 {
        return Some(struct32 {
            field_0: v13 as i64
            field_8: v14
            field_16: v15
            field_24: v0
        });
    }
    uucore::features::fs::FileInformation::from_path(&v13, a3, a4, 0);
    if v13 as i64 {
        return struct8 {
            field_0: 13
        };
    }
    memcpy(&v18, &v13, 144);
    hashbrown::map::HashMap<K,V,S,A>::insert(a5, &v18, a2, a3);
    return struct8 {
        field_0: 13
    };
}
