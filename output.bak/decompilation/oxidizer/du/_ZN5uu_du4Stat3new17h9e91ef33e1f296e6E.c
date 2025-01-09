fn uu_du::Stat::new(a0: &Result<struct113, struct16>, a1: u32, a2: u32, a3: u32, a4: &u64) -> u64 {
    let v0: i64;  // [bp-0x1d0]
    let v1: i64;  // [sp-0x1c8]
    let v2: i64;  // [sp-0x1c0]
    let v3: i1416;  // [sp-0x1b8], Other Possible Types: struct24, struct16, Result<struct176, struct8>
    let v4: i128;  // [sp-0x108]
    let v5: i128;  // [sp-0xf8]
    let v6: i64;  // [sp-0xe0]
    let v7: i64;  // [sp-0xd8]
    let v8: i128;  // [sp-0xd0]
    let v9: i64;  // [sp-0xc0]
    let v10: i128;  // [sp-0xb8]
    let v11: i32;  // [sp-0xa8]
    let v12: i128;  // [sp-0xa4]
    let v13: i32;  // [sp-0x94]
    let v14: i128;  // [sp-0x90]
    let v15: i64;  // [sp-0x80]
    let v16: i128;  // [sp-0x78]
    let v17: i64;  // [sp-0x68]
    let v18: i128;  // [sp-0x60]
    let v19: i128;  // [sp-0x50]
    let v20: i128;  // [sp-0x40]
    let v22: i64;  // rdx
    let v27: i128;  // xmm0
    let v28: i128;  // xmm0
    let v29: i128;  // xmm0
    let v30: i128;  // xmm0
    let v31: i128;  // xmm0
    let v32: i128;  // xmm0
    let v33: i64;  // rax
    let v34: i256;  // ymm0
    let v36: i64;  // rcx

    v22 = 0x8000000000000000 ^ *((a4 + 24) as &i64);
    if v22 >= 3 {
        v22 = 1;
    }
    if !v22 {
LABEL_4f1a75:
        v3 = std::fs::metadata(a1, a2);
    } else {
        if v22 == 1 {
            a3 = a3;
            v3 = std::sys::pal::unix::os::split_paths::bytes_to_path(a1, a2);
            if !(!<T as core::slice::cmp::SliceContains>::slice_contains(&v3, *((a4 + 32) as &i64), *((a4 + 40) as &i64))) {
                goto LABEL_4f1a75;
            }
        }
        if !a3 {
            v3 = std::fs::symlink_metadata(a1, a2);
        } else {
            v3 = std::fs::DirEntry::metadata(a3);
        }
    }
    match v3 {
        Err(_) => {
            return Err(struct16 {
                field_0: 0
                field_8: v7
            });
        },
        Ok(_) => {
            v27 = *((&v3 as &char + 16) as &i128);
            v8 = v27;
            v28 = *((&v3 as &char + 60) as &i128);
            v12 = v28;
            v13 = *((&v3 as &char + 76) as &i32);
            v29 = *((&v3 as &char + 128) as &i128);
            v18 = v29;
            v30 = *((&v3 as &char + 144) as &i128);
            v19 = v30;
            v31 = *((&v3 as &char + 160) as &i128);
            v20 = v31;
            v1 = *((&v3 as &char + 40) as &i64);
            v32 = *((&v3 as &char + 40) as &i128);
            v6 = v3;
            v7 = *((&v3 as &char + 8) as &i64);
            v0 = *((&v3 as &char + 32) as &i64);
            v9 = v0;
            v10 = v32;
            v11 = *((&v3 as &char + 56) as &i32);
            v4 = *((&v3 as &char + 80) as &i128);
            v14 = v4;
            v15 = *((&v3 as &char + 96) as &i64);
            v5 = *((&v3 as &char + 104) as &i128);
            v16 = v5;
            v2 = *((&v3 as &char + 120) as &i64);
            v17 = v2;
            v3 = std::sys::pal::unix::os::split_paths::bytes_to_path(a1, a2);
            v33 = uu_du::birth_u64(&v6);
        },
    }
    v36 = v34 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v27 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v28 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v29 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v30 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v31 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v32 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v4;
    if !std::path::Path::is_dir(a1, a2) as i32 {
        return Ok(struct113 {
            field_0: 0
            field_8: v1
            field_16: 0
            field_24: v0
            field_40: <UNKNOWN>
            field_48: v33
            field_56: v37
            field_72: <UNKNOWN>
            field_80: *((&v3 as &char + 16) as &i64)
            field_88: v36
            field_96: v15
            field_104: 1
            field_112: (v35 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v34 as u128 as u256 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v5 as u128 as u256) as u64
            field_120: v2
        });
    }
    v36 = 0;
}
