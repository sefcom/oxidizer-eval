fn uu_cp::symlink_file(a0: &u64, a1: u64, a2: u64, a3: u64, a4: u64, a5: &u64) -> u64 {
    let v0: u64;  // [sp-0x1d8]
    let v1: void*;  // [sp-0x1b0]
    let v2: u64;  // [sp-0x1a8]
    let v3: u64;  // [sp-0x1a0]
    let v4: u8;  // [sp-0x198]
    let v5: void*;  // [sp-0x190]
    let v6: u64;  // [sp-0x188]
    let v7: u64;  // [sp-0x180]
    let v8: u8;  // [sp-0x178]
    let v9: u192;  // [sp-0x170], Other Possible Types: i192
    let v10: u64;  // [bp-0x158], Other Possible Types: Option<struct8>
    let v13: u8;  // [bp-0xc0]
    let v15: u32;  // rdx
    let v16: u32;  // rcx
    let v17: u64;  // rax
    let v18: u64;  // rdx
    let v19: u64;  // rax
    let v20: u64;  // rax
    let v24: u64;  // rax

    v0 = std::os::unix::fs::symlink(a1, a2, a3, a4);
    v17 = uucore::features::fs::get_filename(a3, a4, v15, v16);
    if !v17 {
        v18 = 17;
    }
    if !v17 {
        v17 = &g_42d170;
    }
    v1 = 0;
    v2 = v17;
    v3 = v18;
    v4 = 1;
    v19 = uucore::features::fs::get_filename(a1, a2, v18, v16);
    if v19 {
        v20 = v19;
    } else {
        v20 = &g_42d170;
    }
    v5 = 0;
    v6 = v20;
    v7 = 17;
    v8 = 1;
    v9 = format!("cannot create symlink {:?} to {:?}", &v1, &v5);
    v10 = v9;
    if v0 {
        v24 = v10;
        return struct40 {
            field_0: 3
            field_8: v24
            field_16: v11
            field_24: v12
            field_32: v0
        };
    }
    v10 = uucore::features::fs::FileInformation::from_path(a3, a4, 0);
    if !v10 {
        memcpy(&v13, &v10, 144);
        hashbrown::map::HashMap<K,V,S,A>::insert(a5, &v13);
    }
    return struct8 {
        field_0: 13
    };
}
