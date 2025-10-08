fn uu_du::Stat::new(a1: &[u8], a2: i64, a3: i64) -> Result<struct113, struct16> {
    let a0: i64;  // rdi
    let v0: u64;  // [bp-0x1b8]
    let v1: u64;  // [bp-0x1b0]
    let v2: u64;  // [bp-0x1a8]
    let v3: u64;  // [bp-0x1a0]
    let v4: u64;  // [bp-0x198]
    let v5: std::path::PathBuf;  // [bp-0x190], Other Possible Types: u64
    let v6: std::path::PathBuf;  // [bp-0x190]
    let v7: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0x190]
    let v8: u64;  // [bp-0x188]
    let v9: iNone;  // [bp-0x180]
    let v10: u64;  // [bp-0x170]
    let v11: iNone;  // [bp-0x168]
    let v12: u32;  // [bp-0x158]
    let v13: iNone;  // [bp-0x154]
    let v14: u32;  // [bp-0x144]
    let v15: iNone;  // [bp-0x140]
    let v16: u64;  // [bp-0x130]
    let v17: iNone;  // [bp-0x128]
    let v18: u64;  // [bp-0x118]
    let v19: iNone;  // [bp-0x110]
    let v20: iNone;  // [bp-0x100]
    let v21: iNone;  // [bp-0xf0]
    let v22: u64;  // [bp-0xe0]
    let v23: u64;  // [bp-0xd8]
    let v24: iNone;  // [bp-0xd0]
    let v25: u64;  // [bp-0xc0]
    let v26: iNone;  // [bp-0xb8]
    let v27: u32;  // [bp-0xa8]
    let v28: iNone;  // [bp-0xa4]
    let v29: u32;  // [bp-0x94]
    let v30: iNone;  // [bp-0x90]
    let v31: u64;  // [bp-0x80]
    let v32: iNone;  // [bp-0x78]
    let v33: u64;  // [bp-0x68]
    let v34: iNone;  // [bp-0x60]
    let v35: iNone;  // [bp-0x50]
    let v36: iNone;  // [bp-0x40]
    let v38: u64;  // rdx
    let v40: i64;  // rdi
    let v41: u64;  // r13
    let v42: u64;  // rax
    let v43: u64;  // rdx

    v38 = 0x8000000000000000 ^ *((a3 + 24) as &i64);
    if v38 {
        if v38 == 1 {
            v5 = std::sys::pal::unix::os::split_paths::bytes_to_path(a1);
            if <T as core::slice::cmp::SliceContains>::slice_contains(&v5, *((a3 + 32) as &i64), *((a3 + 40) as &i64)) {
                goto LABEL_496423;
            }
        }
        v40 = &v5;
        if a2 {
            std::fs::DirEntry::metadata(v40, a2);
            if v5 == 2 {
                return Err(struct16 {
                    field_0: 0
                    field_8: v8
                });
            }
        } else {
            std::fs::symlink_metadata(v40, a1);
            if v5 == 2 {
                return Err(struct16 {
                    field_0: 0
                    field_8: v8
                });
            }
        }
    } else {
LABEL_496423:
        v7 = std::fs::metadata(a1);
        if let Err(_) = v7 {
            return Err(struct16 {
                field_0: 0
                field_8: v8
            });
        }
    }
    v24 = v9;
    v28 = v13;
    v29 = v14;
    v34 = v19;
    v35 = v20;
    v36 = v21;
    v1 = *((&v7 as &char + 40) as &i64);
    v41 = *((&v7 as &char + 80) as &i64);
    v2 = *((&v7 as &char + 104) as &i64);
    v22 = v5;
    v23 = v8;
    v0 = v10;
    v25 = v0;
    v26 = v11;
    v27 = v12;
    v30 = v15;
    v3 = v16;
    v31 = v3;
    v32 = v17;
    v4 = v18;
    v33 = v4;
    v6 = std::sys::pal::unix::os::split_paths::bytes_to_path(a1);
    v42 = uu_du::birth_u64(&v22);
    return struct136 {
        field_0: 1
        field_8: 0
        field_16: v1
        field_24: 0
        field_32: v0
        padding_40: <UNKNOWN>
        field_48: v42
        field_56: v43
        field_64: *(&v6.inner.inner.inner.buf.inner.cap as &i128)
        field_80: v6.inner.inner.inner.len
        field_88: v41
        field_96: v3
        field_104: 1
        field_112: v2
        field_120: v4
        field_128: ((v27 & 0xf000) == 0x4000) as u8 as u8
    };
}
