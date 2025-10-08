fn bat::diff::get_git_diff(a1: &std::path::Path) -> Option<struct48> {
    let a0: i64;  // rdi
    let v0: u8;  // [bp-0x190]
    let v1: u8;  // [bp-0x179]
    let v2: Result<struct40, struct16>;  // [bp-0x178]
    let v3: u64;  // [bp-0x170]
    let v4: struct24;  // [bp-0x168]
    let v5: u128;  // [bp-0x168]
    let v6: u64;  // [bp-0x160]
    let v7: u128;  // [bp-0x158]
    let v8: u64;  // [bp-0x148]
    let v9: core::fmt::Arguments;  // [bp-0x140]
    let v10: struct24;  // [bp-0x138]
    let v11: u128;  // [bp-0x130]
    let v12: struct24;  // [bp-0x128]
    let v13: u64;  // [bp-0x120]
    let v14: iNone;  // [bp-0x118]
    let v15: Result<struct80, struct9>;  // [bp-0x108]
    let v16: struct81;  // [bp-0x100]
    let v17: struct24;  // [bp-0xf8]
    let v18: Result<struct24, struct16>;  // [bp-0xe0], Other Possible Types: struct16, struct176
    let v19: core::result::Result<std::path::PathBuf, std::io::error::Error>;  // [bp-0xe0]
    let v20: core::result::Result<std::path::PathBuf, std::io::error::Error>;  // [bp-0xe0], Other Possible Types: u64
    let v21: struct24;  // [bp-0x58]
    let v22: Option<struct24>;  // [bp-0x30]
    let v24: u64;  // rsi
    let v25: u64;  // rdx
    let v26: struct56;  // rax
    let v27: struct32;  // r14
    let v28: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // rax
    let v29: iNone;  // xmm0

    v18 = git2::repo::Repository::discover(v24, v25);
    match v18 {
        Ok(_) => {
            return struct8 {
                field_0: 0
            };
        },
        Err(_) => {
            v2 = *((&v18 as &char + 8) as &i64);
            v26 = git2::repo::Repository::workdir(&v2);
            if !v26 {
                return struct8 {
                    field_0: 0
                };
            }
            v19 = std::fs::canonicalize(v26, v25);
            if !((((0 ^ v19 as i64) & (0 ^ -(v20))) >> 63) as char) {
                v14 = *((&v19 as &char + 8) as &i128);
                v13 = v19 as i64;
                v20 = std::fs::canonicalize(a1);
                match v20 {
                    Err(_) => {
                        return struct8 {
                            field_0: 0
                        };
                    },
                    Ok(_) => {
                        v11 = *((&v20 as &char + 8) as &i128) as u128;
                        v10 = v20 as i64;
                        v27 = std::path::Path::strip_prefix(v11 as i64, v12, &v13) as u64;
                        if !v27 {
                            return struct8 {
                                field_0: 0
                            };
                        }
                        v15 = v27;
                        v16 = v25;
                        v18 = git2::diff::DiffOptions::new();
                        v4 = <&std::path::Path as git2::util::IntoCString>::into_c_string(v15, v25);
                        if v4.field_0 {
                            return struct8 {
                                field_0: 0
                            };
                        }
                        v18 = git2::diff::DiffOptions::pathspec(v6, v4.field_16);
                        v21 = 0;
                        v5 as u640 = git2::repo::Repository::diff_index_to_workdir(&v2, 0, &v18);
                        if let Err(_) = v5 as u640 {
                            v3 = v6;
                            v28 = std::thread::local::LocalKey<T>::with();
                            v7 = g_acbb90.field_0;
                            v5 = g_acbb80.field_0;
                            v8 = v28;
                            v9 = v25;
                            v17 = struct24 {
                                field_0: &v15
                                field_8: &v1
                                field_16: &v5 as u640
                            };
                            v22 = git2::diff::Diff::foreach(&v3, &v1, &g_ace3d8, 0, &v17, &v17, &g_ace400, 0, *(&v0 as &i64));
                            v29 = v5;
                            return Some(struct48 {
                                field_0: v29
                                field_16: v7
                                field_32: *(&v8 as &i128)
                            });
                        }
                        return struct8 {
                            field_0: 0
                        };
                    },
                }
            }
            return struct8 {
                field_0: 0
            };
        },
    }
}
