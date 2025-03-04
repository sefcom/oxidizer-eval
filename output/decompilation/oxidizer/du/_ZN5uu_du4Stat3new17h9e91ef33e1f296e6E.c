fn uu_du::Stat::new(a0: &Result<struct113, struct16>, a1: u32, a2: u32, a3: u32, a4: &u64) -> u64 {
    let v0: i64;  // [sp-0x1d0]
    let v1: i64;  // [sp-0x1c8]
    let v2: i64;  // [sp-0x1c0]
    let v3: struct24;  // [sp-0x1b8]
    let v4: Result<struct176, struct8>;  // [sp-0x1b8], Other Possible Types: int
    let v5: iNone;  // [sp-0x108]
    let v6: iNone;  // [sp-0xf8]
    let v7: i64;  // [sp-0xe0]
    let v8: i64;  // [sp-0xd8]
    let v9: iNone;  // [sp-0xd0]
    let v10: i64;  // [sp-0xc0]
    let v11: iNone;  // [sp-0xb8]
    let v12: i32;  // [sp-0xa8]
    let v13: iNone;  // [sp-0xa4]
    let v14: i32;  // [sp-0x94]
    let v15: iNone;  // [sp-0x90]
    let v16: i64;  // [sp-0x80]
    let v17: iNone;  // [sp-0x78]
    let v18: i64;  // [sp-0x68]
    let v19: iNone;  // [sp-0x60]
    let v20: iNone;  // [sp-0x50]
    let v21: iNone;  // [sp-0x40]
    let v23: i64;  // rax
    let v24: i64;  // rax
    let v29: iNone;  // xmm0
    let v30: iNone;  // xmm0
    let v31: iNone;  // xmm0
    let v32: iNone;  // xmm0
    let v33: iNone;  // xmm0
    let v34: iNone;  // xmm0
    let v35: iNone;  // ymm0
    let v36: iNone;  // ymm0
    let v38: iNone;  // xmm0
    let v39: i64;  // rdx

    v24 = (v23 < 3 ? 0x8000000000000000 ^ *((a4 + 24) as &i64) : 1);
    if !v24 {
LABEL_4f1a75:
        v4 = std::fs::metadata(a1, a2);
    } else {
        if v24 == 1 {
            v0 = a3;
            v3 = std::sys::pal::unix::os::split_paths::bytes_to_path(a1, a2);
            a3 = v0;
            if !(!<T as core::slice::cmp::SliceContains>::slice_contains(&v3, *((a4 + 32) as &i64), *((a4 + 40) as &i64))) {
                goto LABEL_4f1a75;
            }
        }
        if !a3 {
            v4 = std::fs::symlink_metadata(a1, a2);
        } else {
            v4 = std::fs::DirEntry::metadata(a3);
        }
    }
    match v4 {
        Err(_) => {
            return Err(struct16 {
                field_0: 0
                field_8: v8
            });
        },
        Ok(_) => {
            v29 = (&v4)[16] as i128;
            v9 = v29;
            v30 = (&v4)[60] as i128;
            v13 = v30;
            v14 = (&v4)[76] as i32;
            v31 = (&v4)[128] as i128;
            v19 = v31;
            v32 = (&v4)[144] as i128;
            v20 = v32;
            v33 = (&v4)[160] as i128;
            v21 = v33;
            v1 = (&v4)[40] as i64;
            v34 = (&v4)[40] as i128;
            v7 = v4 as i64;
            v8 = (&v4)[8] as i64;
            v0 = (&v4)[32] as i64;
            v10 = v0;
            v11 = v34;
            v12 = (&v4)[56] as i32;
            v5 = (&v4)[80] as i128;
            v15 = v5;
            v16 = (&v4)[96] as i64;
            v6 = (&v4)[104] as i128;
            v17 = v6;
            v2 = (&v4)[120] as i64;
            v18 = v2;
            v3 = std::sys::pal::unix::os::split_paths::bytes_to_path(a1, a2);
        },
    }
    v36 = ((((((v35 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v29 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v30 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v31 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v32 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v33 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v34 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v5 as u256;
    *((a0 + 80) as &u64) = v3.field_16;
    v38 = *(&v3.field_0 as &i128);
    *((a0 + 64) as void*) = v38;
    *((a0 + 8) as &i64) = 0;
    *(a0 as &i64) = 1;
    *((a0 + 16) as &unsigned long) = v1;
    *((a0 + 24) as &i64) = 0;
    *((a0 + 32) as &unsigned long) = v0;
    *((a0 + 48) as &long long) = uu_du::birth_u64(&v7);
    *((a0 + 56) as &unsigned long) = v39;
    *((a0 + 88) as &i32) = (!(std::path::Path::is_dir(a1, a2) as i32 & 255 & 255 & 255) ? v36 as u64 : 0);
    *((a0 + 96) as &unsigned long) = v16;
    *((a0 + 104) as &i64) = 1;
    *((a0 + 112) as &u64) = ((v36 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v38 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v6 as u256) as u64;
    *((a0 + 120) as &unsigned long) = v2;
    *((a0 + 128) as &u8) = (v12 & 0xf000) == 0x4000;
}
