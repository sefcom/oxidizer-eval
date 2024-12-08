fn uu_cp::symlink_file(a0: &struct_0, a1: u64, a2: u64, a3: u64, a4: u64, a5: &u64) -> u64 {
    let v0: u64;  // [sp-0x1d8]
    let v1: i192;  // [sp-0x1d0]
    let v2: void*;  // [sp-0x198]
    let v3: u64;  // [sp-0x190]
    let v4: u64;  // [sp-0x188]
    let v5: u8;  // [sp-0x180]
    let v6: void*;  // [sp-0x178]
    let v7: u64;  // [sp-0x170]
    let v8: u64;  // [sp-0x168]
    let v9: u8;  // [sp-0x160]
    let v10: Option<struct8>;  // [bp-0x158], Other Possible Types: u128
    let v11: u64;  // [sp-0x148]
    let v12: u8;  // [bp-0xc0]
    let v14: u64;  // rdx
    let v15: u64;  // rcx
    let v16: u64;  // rax
    let v17: u64;  // rdx
    let v18: u64;  // rax
    let v20: &struct_0;  // rax
    let v21: &struct_0;  // rcx

    v0 = std::os::unix::fs::symlink(a1, a2, a3, a4);
    v16 = uucore::features::fs::get_filename(a3, a4, v14, v15);
    if !v16 {
        v17 = 17;
    }
    if !v16 {
        v16 = &g_42cf70;
    }
    v2 = 0;
    v3 = v16;
    v4 = v17;
    v5 = 1;
    v18 = uucore::features::fs::get_filename(a1, a2, v17, v15);
    if !v18 {
        v18 = &g_42cf70;
    }
    v6 = 0;
    v7 = v18;
    v8 = 17;
    v9 = 1;
    v1 = format!("cannot create symlink {:?} to {:?}", &v2, &v6);
    v11 = *((&v1 as &char + 16) as &i64);
    *(&v10 as &i192) = v1;
    if v0 {
        v20 = *((&v1 as &char + 16) as &i64);
        v21 = a0;
        *((&v21->field_8 as &char + 8) as &&struct_0) = v20;
        *(&(&v21->field_0)[1] as &i192) = v1;
        v21->field_0 = 3;
        v21->field_18 = v0;
        return v20;
    }
    v10 = uucore::features::fs::FileInformation::from_path(a3, a4, 0);
    if !v10 {
        memcpy(&v12, &v10, 144);
        hashbrown::map::HashMap<K,V,S,A>::insert(a5, &v12);
    }
    v20 = a0;
    v20->field_0 = 13;
    return v20;
}
