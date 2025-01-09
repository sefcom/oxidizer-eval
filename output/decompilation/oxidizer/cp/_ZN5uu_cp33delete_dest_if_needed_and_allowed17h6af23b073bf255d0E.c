fn uu_cp::delete_dest_if_needed_and_allowed(a0: &Option<Result<struct8, struct32>>, a1: u32, a2: u32, a3: u32, a4: u32, a5: &u64) -> u64 {
    let v0: i8;  // [bp-0x270]
    let v1: i8;  // [bp-0x260]
    let v2: i64;  // [sp-0x258]
    let v3: i64;  // [sp-0x250]
    let v4: i64;  // [sp-0x248]
    let v5: i64;  // [sp-0x240]
    let v6: i64;  // [sp-0x238]
    let v7: i64;  // [sp-0x228]
    let v8: i64;  // [sp-0x220]
    let v9: i8;  // [bp-0x218]
    let v10: i64;  // [sp-0x1f8]
    let v11: i64;  // [sp-0x1f0]
    let v12: i64;  // [sp-0x1e8]
    let v13: i8;  // [sp-0x1e0]
    let v14: Option<struct8>;  // [bp-0x168], Other Possible Types: i8
    let v16: i8;  // [bp-0x130]
    let v17: i1152;  // [sp-0xb8]
    let v19: i64;  // rax
    let v21: i64;  // r14

    if *((a5 + 60) as &i8) >= 2 {
        return struct8 {
            field_0: 13
        };
    }
    v19 = *((a5 + 61) as &i8);
    if v19 == 2 {
        if !*((a5 + 56) as &i8) {
            return struct8 {
                field_0: 13
            };
        }
        v14 = uucore::features::fs::FileInformation::from_path(a1, a2, *((a5 + 65) as &i8));
        v10 = 1;
        v11 = a1;
        v12 = a2;
        v13 = 1;
        v7 = &v10;
        v8 = <os_display::Quoted as core::fmt::Display>::fmt;
        v2 = "cannot stat ";
        v3 = 1;
        v6 = 0;
        v4 = &v7;
        v5 = 1;
        core::option::Option<T>::map_or_else();
        v4 = v1;
        v2 = v0;
        match v14 {
            Some(v19) => {
                return struct40 {
                    field_0: 3
                    field_8: v0
                    field_24: v1
                    field_32: v19
                };
            },
            None => {
                v17 = v9;
                v19 = hashbrown::map::HashMap<K,V,S,A>::get_inner(v21, &v17);
                if !v19 {
                    return struct8 {
                        field_0: 13
                    };
                }
            },
        }
    } else {
        if v19 != 1 && !uucore::features::fs::is_symlink_loop(a3, a4) as i8 {
            std::fs::metadata(a3, a4);
            if v14 == 2 {
                return struct16 {
                    field_0: 2
                    field_8: v19
                };
            } else if (v16 & 146) {
                return struct8 {
                    field_0: 13
                };
            }
        }
    }
    v19 = std::fs::remove_file(a3, a4);
    if !v19 {
        return struct8 {
            field_0: 13
        };
    }
    return struct16 {
        field_0: 2
        field_8: v19
    };
}
