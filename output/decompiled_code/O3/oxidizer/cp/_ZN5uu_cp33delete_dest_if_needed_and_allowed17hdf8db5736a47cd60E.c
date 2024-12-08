fn uu_cp::delete_dest_if_needed_and_allowed(a0: &u64, a1: u32, a2: u32, a3: u32, a4: u32, a5: &u64) -> u64 {
    let v0: i192;  // [sp-0x270]
    let v1: u128;  // [bp-0x258]
    let v2: u64;  // [sp-0x248]
    let v3: u128;  // [sp-0x218]
    let v4: u64;  // [sp-0x208]
    let v5: u64;  // [sp-0x1f8]
    let v6: u64;  // [sp-0x1f0]
    let v7: u64;  // [sp-0x1e8]
    let v8: u8;  // [sp-0x1e0]
    let v9: u128;  // [sp-0x1d8]
    let v10: u128;  // [sp-0x1c8]
    let v11: u128;  // [sp-0x1b8]
    let v12: u128;  // [sp-0x1a8]
    let v13: u128;  // [sp-0x198]
    let v14: u128;  // [sp-0x188]
    let v15: u128;  // [sp-0x178]
    let v16: u8;  // [bp-0x168], Other Possible Types: Option<struct8>
    let v17: u8;  // [bp-0x160], Other Possible Types: i8
    let v18: i8;  // [bp-0x150]
    let v19: i8;  // [bp-0x140]
    let v20: u8;  // [bp-0x130]
    let v21: i8;  // [bp-0x120]
    let v22: i8;  // [bp-0x110]
    let v23: i8;  // [bp-0x100]
    let v24: i8;  // [bp-0xf0]
    let v25: i8;  // [bp-0xe0]
    let v26: struct144;  // [bp-0xb8]
    let v28: i8;  // [bp+0x10]
    let v29: Result<struct176, struct16>;  // rax
    let v31: u64;  // r14

    if *((&a5[7] as &char + 4) as &i8) >= 2 {
        return struct8 {
            field_0: 13
        };
    }
    v29 = *((&a5[7] as &char + 5) as &i8);
    if v29 as u32 == 2 {
        if !a5[7] as i8 {
            return struct8 {
                field_0: 13
            };
        }
        v16 = uucore::features::fs::FileInformation::from_path(a1, a2, *((&a5[8] as &char + 1) as &i8));
        v5 = 1;
        v6 = a1;
        v7 = a2;
        v8 = 1;
        v0 = format!("cannot stat {:?}", &v5);
        v2 = *((&v0 as &char + 16) as &i64);
        *(&v1 as &i192) = v0;
        match v16 {
            Some(_) => {
                v29 = *(&v17 as &i64);
                return struct40 {
                    field_0: 3
                    field_8: v0
                    field_24: *((&v0 as &char + 16) as &i64)
                    field_32: v29
                };
            },
            None => {
                v31 = v28;
                v4 = v18;
                v3 = v17;
                v9 = v19;
                v10 = *(&v20 as &i128);
                v11 = v21;
                v12 = v22;
                v13 = v23;
                v14 = v24;
                v15 = v25;
                *(&v26 as &struct144) = struct144 {
                    field_0: v3
                    field_16: v4
                    field_24: v32
                    field_32: v9
                    field_48: v10
                    field_64: v11
                    field_80: v12
                    field_96: v13
                    field_112: v14
                    field_128: v15
                };
                v29 = hashbrown::map::HashMap<K,V,S,A>::get_inner(v31, &v26);
                if !v29 {
                    return struct8 {
                        field_0: 13
                    };
                }
            },
        }
    } else {
        if v29 as u32 != 1 && !uucore::features::fs::is_symlink_loop(a3, a4, a2, a3, a4, a5) as i8 {
            v29 = std::fs::metadata(a3, a4);
            if *(&v16 as &i32) == 2 {
                v29 = *(&v17 as &i64);
                return struct16 {
                    field_0: 2
                    field_8: v29
                };
            } else if (v20 & 146) {
                return struct8 {
                    field_0: 13
                };
            }
        }
    }
    v29 = std::fs::remove_file(a3, a4, a2);
    if v29 {
        return struct16 {
            field_0: 2
            field_8: v29
        };
    }
    return struct8 {
        field_0: 13
    };
}
