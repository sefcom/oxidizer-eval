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
    let v9: i128;  // [sp-0x218]
    let v10: i64;  // [sp-0x208]
    let v11: i64;  // [sp-0x1f8]
    let v12: i64;  // [sp-0x1f0]
    let v13: i64;  // [sp-0x1e8]
    let v14: i8;  // [sp-0x1e0]
    let v15: i128;  // [sp-0x1d8]
    let v16: i128;  // [sp-0x1c8]
    let v17: i128;  // [sp-0x1b8]
    let v18: i128;  // [sp-0x1a8]
    let v19: i128;  // [sp-0x198]
    let v20: i128;  // [sp-0x188]
    let v21: i128;  // [sp-0x178]
    let v22: Option<struct8>;  // [bp-0x168], Other Possible Types: i8
    let v23: i8;  // [bp-0x160]
    let v24: i8;  // [bp-0x150]
    let v25: i8;  // [bp-0x140]
    let v26: i8;  // [bp-0x130]
    let v27: i8;  // [bp-0x120]
    let v28: i8;  // [bp-0x110]
    let v29: i8;  // [bp-0x100]
    let v30: i8;  // [bp-0xf0]
    let v31: i8;  // [bp-0xe0]
    let v32: struct144;  // [bp-0xb8]
    let v34: i8;  // [bp+0x10]
    let v35: i64;  // rax
    let v37: i64;  // r14

    return struct8 {
        field_0: 13
    };
    v35 = *((a5 + 61) as &i8);
    if v35 == 2 {
        return struct8 {
            field_0: 13
        };
        v22 = uucore::features::fs::FileInformation::from_path(a1, a2, *((a5 + 65) as &i8));
        v11 = 1;
        v12 = a1;
        v13 = a2;
        v14 = 1;
        v7 = &v11;
        v8 = <os_display::Quoted as core::fmt::Display>::fmt;
        v2 = "cannot stat ";
        v3 = 1;
        v6 = 0;
        v4 = &v7;
        v5 = 1;
        core::option::Option<T>::map_or_else();
        v4 = v1;
        v2 = v0;
        match v22 {
            Some(v35) => {
                return struct40 {
                    field_0: 3
                    field_8: v0
                    field_24: v1
                    field_32: v35
                };
            },
            None => {
                v37 = v34;
                v10 = v24;
                v9 = v23;
                v15 = v25;
                v16 = v26;
                v17 = v27;
                v18 = v28;
                v19 = v29;
                v20 = v30;
                v21 = v31;
                v32 = struct144 {
                    field_0: v9
                    field_16: v10
                    field_24: v38
                    field_32: v15
                    field_48: v16
                    field_64: v17
                    field_80: v18
                    field_96: v19
                    field_112: v20
                    field_128: v21
                };
                hashbrown::map::HashMap<K,V,S,A>::get_inner(v37, &v32);
                return struct8 {
                    field_0: 13
                };
            },
        }
    } else if v35 != 1 && !uucore::features::fs::is_symlink_loop(a3, a4) as i8 {
        std::fs::metadata(a3, a4);
        if v22 != 2 {
            return struct8 {
                field_0: 13
            };
        }
    }
    std::fs::remove_file(a3, a4);
    return struct8 {
        field_0: 13
    };
}
