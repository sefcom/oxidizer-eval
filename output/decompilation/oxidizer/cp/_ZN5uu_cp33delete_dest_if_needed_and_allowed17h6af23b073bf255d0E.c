fn uu_cp::delete_dest_if_needed_and_allowed(a1: i64, a2: i64, a3: i64, a4: i64, a5: i64, a6: i8, a7: i64) -> : struct40 {
    let a0: u64;  // rsi
    let v0: u8;  // [bp-0x270]
    let v1: u64;  // [bp-0x260]
    let v2: struct24;  // [bp-0x258], Other Possible Types: u64
    let v3: u64;  // [bp-0x250]
    let v4: i64;  // [bp-0x248], Other Possible Types: u64
    let v5: u64;  // [bp-0x240]
    let v6: void*;  // [bp-0x238]
    let v7: i64;  // [bp-0x228]
    let v8: u64;  // [bp-0x220]
    let v9: u128;  // [bp-0x218]
    let v10: u64;  // [bp-0x208]
    let v11: struct24;  // [bp-0x1f8]
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
    let v22: u64;  // [bp-0x168], Other Possible Types: core::result::Result<std::fs::Metadata, std::io::error::Error>
    let v23: u128;  // [bp-0x160]
    let v24: u64;  // [bp-0x150]
    let v25: u64;  // [bp-0x148]
    let v26: u128;  // [bp-0x140]
    let v27: u128;  // [bp-0x130]
    let v28: u128;  // [bp-0x120]
    let v29: u128;  // [bp-0x110]
    let v30: u128;  // [bp-0x100]
    let v31: u128;  // [bp-0xf0]
    let v32: u64;  // [bp-0xa8]
    let v33: u64;  // [bp-0xa0]
    let v34: u128;  // [bp-0x98]
    let v35: u128;  // [bp-0x88]
    let v36: u128;  // [bp-0x78]
    let v37: u128;  // [bp-0x68]
    let v38: u8;  // [bp-0x58]
    let v39: u128;  // [bp-0x48]
    let v40: u128;  // [bp-0x38]
    let v41: u32;  // eax
    let v42: u8;  // al
    let v43: core::result::Result<(), std::io::error::Error>;  // rax
    let v44: u64;  // rax
    let v45: i64;  // rdi
    let v46: i64;  // rdi
    let v47: i64;  // rdi

    if *((a4 + 60) as &i8) < 2 {
        v41 = *((a4 + 61) as &i8);
        if v41 != 2 {
            if v41 == 1 || uucore::features::fs::is_symlink_loop(a2, a3) as i8 {
                goto LABEL_506251;
            }
            v22 = std::fs::metadata(a2, a3);
            if let Err(_) = v22 {
                *(v46 as &i64) = 2;
                *((v46 + 8) as &core::result::Result<(), std::io::error::Error>) = v43;
                return;
            }
            if !(*((&v22 as &char + 56) as &i8) & 146) {
                goto LABEL_506251;
            }
        } else if *((a4 + 56) as &i8) {
            uucore::features::fs::FileInformation::from_path(a0, a1, v42, a3);
            v11 = 1;
            v12 = a0;
            v13 = a1;
            v14 = 1;
            v7 = &v11;
            v8 = <os_display::Quoted as core::fmt::Display>::fmt;
            v2 = "cannot stat ";
            v3 = 1;
            v6 = 0;
            v4 = &v7;
            v5 = 1;
            v2 = core::option::Option<T>::map_or_else(a1);
            v4 = v1;
            memcpy(&v2, &v0, 16);
            if v22 {
                v44 = v22 as i64;
                *((v45 + 24) as &u64) = v1;
                *((v45 + 8) as &u128) = v0;
                *(v45 as &i64) = 3;
                *((v45 + 32) as &u64) = v44;
                return;
            }
            v10 = v24;
            v9 = v23;
            v15 = v26;
            v16 = v27;
            v17 = v28;
            v18 = v29;
            v19 = v30;
            v20 = v31;
            memcpy(&v21, &v30, 16);
            memcpy(&v26, &v9, 16);
            v32 = v10;
            v33 = v25;
            v34 = v15;
            v35 = v16;
            v36 = v17;
            v37 = v18;
            memcpy(&v38, &v19, 16);
            v39 = v20;
            v40 = v21;
            if hashbrown::map::HashMap<K,V,S,A>::get_inner(vvar_6, &v26, a1) {
LABEL_506251:
                v43 = std::fs::remove_file(a2, a3);
                if let Err(_) = v43 {
                    *(v46 as &i64) = 2;
                    *((v46 + 8) as &core::result::Result<(), std::io::error::Error>) = v43;
                    return;
                }
            }
        }
    }
    *(v47 as &i64) = 13;
    return;
}
