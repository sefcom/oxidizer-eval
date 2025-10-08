fn uu_cp::delete_dest_if_needed_and_allowed(a1: i64, a2: i64, a3: &std::path::Path, a4: i64, a5: i8, a6: i64) -> : struct40 {
    let a0: i64;  // rdi
    let v0: std::path::PathBuf;  // [bp-0x208]
    let v1: u64;  // [bp-0x1f8]
    let v2: u128;  // [bp-0x1f0]
    let v3: u64;  // [bp-0x1e0]
    let v4: u64;  // [bp-0x1d8]
    let v5: u64;  // [bp-0x1d0]
    let v6: u64;  // [bp-0x1c8]
    let v7: u8;  // [bp-0x1c0]
    let v8: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0x188]
    let v9: struct16;  // [bp-0x188]
    let v10: std::path::PathBuf;  // [bp-0x180]
    let v11: u64;  // [bp-0x170]
    let v12: struct8;  // [bp-0x168]
    let v13: u128;  // [bp-0x160]
    let v14: core::fmt::Arguments;  // [bp-0x150]
    let v15: iNone;  // [bp-0x140]
    let v16: u128;  // [bp-0x130]
    let v17: iNone;  // [bp-0x120]
    let v18: iNone;  // [bp-0x110]
    let v19: iNone;  // [bp-0xd8]
    let v20: u64;  // [bp-0xc8]
    let v21: struct32;  // [bp-0xb8]
    let v22: struct24;  // [bp-0x98]
    let v23: core::fmt::Arguments;  // [bp-0x88]
    let v24: iNone;  // [bp-0x78]
    let v25: core::fmt::rt::Argument;  // [bp-0x68]
    let v26: iNone;  // [bp-0x58]
    let v27: struct4;  // [bp-0x48]
    let v28: iNone;  // [bp-0x38]
    let v29: core::fmt::Arguments;  // eax
    let v30: struct32;  // rax
    let v31: core::fmt::Arguments;  // rax
    let v33: u64;  // rcx
    let v34: u64;  // r8

    if *((a4 + 84) as &i8) >= 2 {
        return struct8 {
            field_0: 9223372036854775820
        };
    }
    v29 = *((a4 + 85) as &i8);
    if v29 != 2 {
        if v29 == 1 || uucore::features::fs::is_symlink_loop(a3) {
            goto LABEL_4a2efc;
        }
        v8 = std::fs::metadata(a3);
        if let Err(_) = v8 {
            return struct16 {
                field_0: 9223372036854775809
                field_8: v30
            };
        }
        if !(*((&v8 as &char + 56) as &i8) & 146) {
            goto LABEL_4a2efc;
        }
    } else if *((a4 + 80) as &i8) {
        v9 = uucore::features::fs::FileInformation::from_path(a1, a2, v31 as u32);
        v4 = 1;
        v5 = a1;
        v6 = a2;
        v7 = 1;
        format!("cannot stat {}", &v4);
        if (v9.field_0 as i8 & 1) {
            return struct40 {
                field_0: 9223372036854775810
                field_8: v2
                field_24: v3
                field_32: v9.field_8
            };
        }
        v1 = v11;
        v0 = v10;
        v22 = v13;
        v23 = v14;
        v24 = v15;
        v25 = v16;
        v26 = v17;
        v27 = v18;
        v28 = v18 as i128;
        v20 = v1;
        v19 = v0;
        v21 = struct32 {
            field_0: v19
            field_16: v20
            field_24: v12
        };
        if hashbrown::map::HashMap<K,V,S,A>::get_inner(a6, &v21) {
LABEL_4a2efc:
            std::fs::remove_file(v33, v34);
            if v30 {
                return struct16 {
                    field_0: 9223372036854775809
                    field_8: v30
                };
            }
        }
    }
    return struct8 {
        field_0: 9223372036854775820
    };
}
