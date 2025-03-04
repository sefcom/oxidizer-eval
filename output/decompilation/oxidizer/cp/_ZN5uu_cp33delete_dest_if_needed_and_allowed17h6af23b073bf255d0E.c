fn uu_cp::delete_dest_if_needed_and_allowed(a0: &Option<Result<struct8, struct32>>, a1: u32, a2: u32, a3: u32, a4: u32, a5: &u64, a6: u8) -> u64 {
    let v0: String;  // [sp-0x270]
    let v1: String;  // [sp-0x258]
    let v2: i8;  // [bp-0x218]
    let v3: i64;  // [sp-0x1f8]
    let v4: i64;  // [sp-0x1f0]
    let v5: i64;  // [sp-0x1e8]
    let v6: i8;  // [sp-0x1e0]
    let v7: Option<struct8>;  // [bp-0x168], Other Possible Types: char
    let v9: i8;  // [bp-0x130]
    let v10: iNone;  // [sp-0xb8]
    let v11: i64;  // rax
    let v12: i64;  // 4096
    let v13: i64;  // 4096
    let v15: i64;  // rcx
    let v16: i64;  // r8
    let v17: i64;  // r14

    if *((a5 + 60) as &i8) >= 2 {
        return struct8 {
            field_0: 13
        };
    }
    v11 = *((a5 + 61) as &i8);
    if v11 as u32 != 2 {
        v12 = a3;
        v13 = a4;
        if v11 as u32 != 1 {
            v15 = a3;
            v16 = a4;
            if !uucore::features::fs::is_symlink_loop(a3, a4) as i8 {
                std::fs::metadata(v15, v16);
                if *(&v7 as &i32) == 2 {
                    return struct16 {
                        field_0: 2
                        field_8: v11
                    };
                }
                v13 = a4;
                v12 = a3;
                if (v9 & 146) {
                    return struct8 {
                        field_0: 13
                    };
                }
            }
        }
    } else if !*((a5 + 56) as &i8) {
        return struct8 {
            field_0: 13
        };
    } else {
        v7 = uucore::features::fs::FileInformation::from_path(a1, a2, *((a5 + 65) as &i8));
        v3 = 1;
        v4 = a1;
        v5 = a2;
        v6 = 1;
        v0 = format!("cannot stat {}", &v3);
        v1 = v0;
        match v7 {
            Some(v11) => {
                return struct40 {
                    field_0: 3
                    field_8: *(&v0.ptr as &i128)
                    field_24: v0.len
                    field_32: v11
                };
            },
            None => {
                v10 = *(&v2 as &i1152);
                v11 = hashbrown::map::HashMap<K,V,S,A>::get_inner(v17, &v10);
                v13 = a4;
                v12 = a3;
                if !v11 {
                    return struct8 {
                        field_0: 13
                    };
                }
            },
        }
    }
    v11 = std::fs::remove_file(v12, v13);
    if !v11 {
        return struct8 {
            field_0: 13
        };
    }
    return struct16 {
        field_0: 2
        field_8: v11
    };
}
