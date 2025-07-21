fn uu_cp::delete_dest_if_needed_and_allowed(a1: i64, a2: i64, a3: i64, a4: i64, a5: i64, a6: i8, a7: i64) -> : struct40 {
    let a0: i64;  // rdi
    let v0: u128;  // [bp-0x270]
    let v1: u64;  // [bp-0x260]
    let v2: struct24;  // [bp-0x258], Other Possible Types: u128
    let v3: u64;  // [bp-0x250]
    let v4: i64;  // [bp-0x248], Other Possible Types: u64
    let v5: u64;  // [bp-0x240]
    let v6: void*;  // [bp-0x238]
    let v7: i64;  // [bp-0x228]
    let v8: u64;  // [bp-0x220]
    let v9: u128;  // [bp-0x218]
    let v10: u64;  // [bp-0x208]
    let v11: u64;  // [bp-0x1f8]
    let v12: u64;  // [bp-0x1f0]
    let v13: u64;  // [bp-0x1e8]
    let v14: u8;  // [bp-0x1e0]
    let v15: u128;  // [bp-0x1d8]
    let v16: u128;  // [bp-0x1c8]
    let v17: u128;  // [bp-0x1b8]
    let v18: u128;  // [bp-0x1a8]
    let v19: u128;  // [bp-0x198]
    let v20: u128;  // [bp-0x188]
    let v21: u128;  // [bp-0x178]
    let v22: struct16;  // [bp-0x168], Other Possible Types: char
    let v23: u128;  // [bp-0x160]
    let v24: u64;  // [bp-0x150]
    let v25: u64;  // [bp-0x148]
    let v26: u128;  // [bp-0x140]
    let v27: u8;  // [bp-0x130]
    let v28: u128;  // [bp-0x120]
    let v29: u128;  // [bp-0x110]
    let v30: u128;  // [bp-0x100]
    let v31: u128;  // [bp-0xf0]
    let v32: i8;  // [bp-0xe0]
    let v33: struct144;  // [bp-0xb8]
    let v34: core::result::Result<(), std::io::error::Error>;  // rax
    let v37: u8;  // al
    let v38: u64;  // rcx
    let v39: u64;  // r8

    if *((a5 + 60) as &i8) >= 2 {
        return struct8 {
            field_0: 13
        };
    }
    if v34 as u32 != 2 {
        if v34 as u32 == 1 || (v38 = a3, v39 = a4, uucore::features::fs::is_symlink_loop(a3, a4) as i8) {
            goto LABEL_506251;
        }
        std::fs::metadata(v38, v39);
        if *(&v22 as &i32) == 2 {
            return struct16 {
                field_0: 2
                field_8: v34
            };
        }
        if !(v27 & 146) {
            goto LABEL_506251;
        }
    } else if *((a5 + 56) as &i8) {
        v22 = uucore::features::fs::FileInformation::from_path(a1, a2, v37);
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
        v2 = core::option::Option<T>::map_or_else(a2);
        v4 = v1;
        v2 = v0;
        if v22.field_0 {
            return struct40 {
                field_0: 3
                field_8: v0
                field_24: v1
                field_32: v22.field_8
            };
        }
        v10 = v24;
        v9 = v23;
        v15 = v26;
        v16 = v27;
        v17 = v28;
        v18 = v29;
        v19 = v30;
        v20 = v31;
        v21 = *(&v32 as &i128);
        v33 = struct144 {
            field_0: v9
            field_16: v10
            field_24: v25
            field_32: v15
            field_48: v16
            field_64: v17
            field_80: v18
            field_96: v19
            field_112: v20
            field_128: v21
        };
        hashbrown::map::HashMap<K,V,S,A>::get_inner(a7, &v33, a2);
        if let Err(_) = v34 {
LABEL_506251:
            std::fs::remove_file(v38, v39);
            if let Err(_) = v34 {
                return struct16 {
                    field_0: 2
                    field_8: v34
                };
            }
        }
    }
    return struct8 {
        field_0: 13
    };
}
