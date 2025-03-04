fn uu_cp::symlink_file(a0: &Option<struct32>, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: i64;  // [sp-0x1d8]
    let v1: i64;  // [sp-0x1b0]
    let v2: i64;  // [sp-0x1a8]
    let v3: i64;  // [sp-0x1a0]
    let v4: i8;  // [sp-0x198]
    let v5: i64;  // [sp-0x190]
    let v6: i64;  // [sp-0x188]
    let v7: i64;  // [sp-0x180]
    let v8: i8;  // [sp-0x178]
    let v9: String;  // [sp-0x170]
    let v10: Option<struct8>;  // [sp-0x158], Other Possible Types: String, unsigned long
    let v13: i8;  // [bp-0xc0]
    let v15: i64;  // rax
    let v17: i64;  // rax

    v0 = std::os::unix::fs::symlink(a1, a2, a3, a4);
    v15 = uucore::features::fs::get_filename(a3, a4);
    if !v15 {
        v15 = &g_42d170;
    }
    v1 = 0;
    v2 = v15;
    v3 = 17;
    v4 = 1;
    v17 = uucore::features::fs::get_filename(a1, a2);
    v5 = 0;
    v6 = (v17 ? v17 : &g_42d170);
    v7 = 17;
    v8 = 1;
    v9 = format!("cannot create symlink {} to {}", &v1, &v5);
    v10 = v9;
    if v0 {
        return Some(struct32 {
            field_0: v20
            field_8: v11
            field_16: v12
            field_24: v0
        });
    }
    v10 = uucore::features::fs::FileInformation::from_path(a3, a4, 0);
    if v10 {
        return struct8 {
            field_0: 13
        };
    }
    memcpy(&v13, &v10, 144);
    hashbrown::map::HashMap<K,V,S,A>::insert(a5, &v13);
}
