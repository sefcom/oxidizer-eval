fn uu_cp::delete_dest_if_needed_and_allowed(a0: &u64, a1: u32, a2: u32, a3: u32, a4: u32, a5: &u64) -> u64 {
    let v0: i192;  // [sp-0x270]
    let v1: i192;  // [bp-0x258]
    let v2: i128;  // [sp-0x218]
    let v3: i64;  // [sp-0x208]
    let v4: i64;  // [sp-0x1f8]
    let v5: i64;  // [sp-0x1f0]
    let v6: i64;  // [sp-0x1e8]
    let v7: i8;  // [sp-0x1e0]
    let v8: i128;  // [sp-0x1d8]
    let v9: i128;  // [sp-0x1c8]
    let v10: i128;  // [sp-0x1b8]
    let v11: i128;  // [sp-0x1a8]
    let v12: i128;  // [sp-0x198]
    let v13: i128;  // [sp-0x188]
    let v14: i128;  // [sp-0x178]
    let v15: i8;  // [bp-0x168], Other Possible Types: Option<struct8>
    let v16: i8;  // [bp-0x160]
    let v17: i8;  // [bp-0x150]
    let v18: i8;  // [bp-0x140]
    let v19: i8;  // [bp-0x130]
    let v20: i8;  // [bp-0x120]
    let v21: i8;  // [bp-0x110]
    let v22: i8;  // [bp-0x100]
    let v23: i8;  // [bp-0xf0]
    let v24: i8;  // [bp-0xe0]
    let v25: i1152;  // [bp-0xb8]
    let v27: i8;  // [bp+0x10]
    let v28: Result<struct176, struct16>;  // rax
    let v30: i64;  // r14

    if *((a5 + 60) as &i8) >= 2 {
        return struct8 {
            field_0: 13
        };
    }
    v28 = *((a5 + 61) as &i8);
    if v28 as u32 == 2 {
        if !*((a5 + 56) as &i8) {
            return struct8 {
                field_0: 13
            };
        }
        v15 = uucore::features::fs::FileInformation::from_path(a1, a2, *((a5 + 65) as &i8));
        v4 = 1;
        v5 = a1;
        v6 = a2;
        v7 = 1;
        v0 = format!("cannot stat {:?}", &v4);
        v1 = v0;
        match v15 {
            Some(_) => {
                v28 = v16;
                return struct40 {
                    field_0: 3
                    field_8: v0
                    field_24: *((&v0 as &char + 16) as &i64)
                    field_32: v28
                };
            },
            None => {
                v30 = v27;
                v3 = v17;
                v2 = v16;
                v8 = v18;
                v9 = v19;
                v10 = v20;
                v11 = v21;
                v12 = v22;
                v13 = v23;
                v14 = v24;
                v25 = v2;
                v28 = hashbrown::map::HashMap<K,V,S,A>::get_inner(v30, &v25);
                if !v28 {
                    return struct8 {
                        field_0: 13
                    };
                }
            },
        }
    } else {
        if v28 as u32 != 1 && !uucore::features::fs::is_symlink_loop(a3, a4, a2, a3, a4, a5) as i8 {
            v28 = std::fs::metadata(a3, a4);
            if v15 == 2 {
                v28 = v16;
                return struct16 {
                    field_0: 2
                    field_8: v28
                };
            } else if (v19 & 146) {
                return struct8 {
                    field_0: 13
                };
            }
        }
    }
    v28 = std::fs::remove_file(a3, a4, a2);
    if v28 {
        return struct16 {
            field_0: 2
            field_8: v28
        };
    }
    return struct8 {
        field_0: 13
    };
}
