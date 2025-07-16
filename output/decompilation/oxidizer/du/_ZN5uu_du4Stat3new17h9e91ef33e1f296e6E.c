fn uu_du::Stat::new(a1: i64, a2: i64, a3: i64, a4: i64) -> Result<struct113, struct16> {
    let a0: u64;  // rsi
    let v0: u64;  // [bp-0x1d0]
    let v1: u64;  // [bp-0x1c8]
    let v2: u64;  // [bp-0x1c0]
    let v3: std::path::PathBuf;  // [bp-0x1b8], Other Possible Types: u64
    let v4: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0x1b8]
    let v5: std::path::PathBuf;  // [bp-0x1b8]
    let v6: u64;  // [bp-0x1b0]
    let v7: u128;  // [bp-0x1a8]
    let v8: u64;  // [bp-0x198]
    let v9: u128;  // [bp-0x190]
    let v10: u32;  // [bp-0x180]
    let v11: u128;  // [bp-0x17c]
    let v12: u32;  // [bp-0x16c]
    let v13: u128;  // [bp-0x168]
    let v14: u64;  // [bp-0x158]
    let v15: u128;  // [bp-0x150]
    let v16: u64;  // [bp-0x140]
    let v17: u128;  // [bp-0x138]
    let v18: u128;  // [bp-0x128]
    let v19: u128;  // [bp-0x118]
    let v20: u128;  // [bp-0x108]
    let v21: u128;  // [bp-0xf8]
    let v22: u64;  // [bp-0xe0]
    let v23: u64;  // [bp-0xd8]
    let v24: u128;  // [bp-0xd0]
    let v25: u64;  // [bp-0xc0]
    let v26: u128;  // [bp-0xb8]
    let v27: u32;  // [bp-0xa8]
    let v28: u128;  // [bp-0xa4]
    let v29: u32;  // [bp-0x94]
    let v30: u128;  // [bp-0x90]
    let v31: u64;  // [bp-0x80]
    let v32: u128;  // [bp-0x78]
    let v33: u64;  // [bp-0x68]
    let v34: u128;  // [bp-0x60]
    let v35: u128;  // [bp-0x50]
    let v36: u128;  // [bp-0x40]
    let v38: u64;  // rdx
    let v40: i64;  // rdi
    let v41: i64;  // rdi
    let v42: u8;  // al
    let v43: u64;  // rax
    let v44: i64;  // rdi
    let v45: u64;  // rdx

    v38 = 0x8000000000000000 ^ *((a3 + 24) as &i64);
    if v38 {
        if v38 == 1 {
            v3 = std::sys::pal::unix::os::split_paths::bytes_to_path(a0, a1);
            if !(!<T as core::slice::cmp::SliceContains>::slice_contains(&v3, *((a3 + 32) as &i64), *((a3 + 40) as &i64))) {
                goto LABEL_4f1a75;
            }
        }
        v40 = &v3;
        if a2 {
            std::fs::DirEntry::metadata(v40, a2);
        } else {
            std::fs::symlink_metadata(v40, a0, a1);
        }
    } else {
LABEL_4f1a75:
        v4 = std::fs::metadata(a0, a1);
    }
    if v3 != 2 {
        v24 = v7;
        v28 = v11;
        v29 = v12;
        v34 = v17;
        v35 = v18;
        v36 = v19;
        v1 = *((&v4 as &char + 40) as &i64);
        v22 = v3;
        v23 = v6;
        v0 = v8;
        v25 = v0;
        v26 = v9;
        v27 = v10;
        v20 = v13;
        v30 = v20;
        v31 = v14;
        v21 = v15;
        v32 = v21;
        v2 = v16;
        v33 = v2;
        v5 = std::sys::pal::unix::os::split_paths::bytes_to_path(a0, a1);
        v42 = std::path::Path::is_dir(a0, a1);
        v43 = uu_du::birth_u64(&v22);
        *((v44 + 80) as &u64) = v5.inner.inner.inner.len;
        *((v44 + 64) as &i128) = *(&v5.inner.inner.inner.buf.cap as &i128);
        *((v44 + 8) as &i64) = 0;
        *(v44 as &i64) = 1;
        *((v44 + 16) as &u64) = v1;
        *((v44 + 24) as &i64) = 0;
        *((v44 + 32) as &u64) = v0;
        *((v44 + 48) as &u64) = v43;
        *((v44 + 56) as &u64) = v45;
        *((v44 + 88) as &i32) = (!v42 ? v20 : 0);
        *((v44 + 96) as &u64) = v14;
        *((v44 + 104) as &i64) = 1;
        *((v44 + 112) as &u64) = v21;
        *((v44 + 120) as &u64) = v2;
        *((v44 + 128) as &u8) = (v10 & 0xf000) == 0x4000;
        return;
    }
    *((v41 + 16) as &u64) = v6;
    *((v41 + 8) as &i64) = 0;
    *(v41 as &i64) = 2;
    return;
}
