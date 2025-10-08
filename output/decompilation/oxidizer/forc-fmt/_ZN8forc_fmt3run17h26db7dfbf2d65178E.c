fn forc_fmt::run() -> u64 {
    let v0: u64;  // [bp-0x368]
    let v1: void*;  // [bp-0x360]
    let v2: u64;  // [bp-0x358]
    let v3: Result<struct32, struct12>;  // [bp-0x348], Other Possible Types: u64
    let v4: u128;  // [bp-0x348]
    let v5: void*;  // [bp-0x340], Other Possible Types: u64
    let v6: iNone;  // [bp-0x338], Other Possible Types: u128
    let v7: iNone;  // [bp-0x328]
    let v8: iNone;  // [bp-0x318]
    let v9: iNone;  // [bp-0x308]
    let v10: u128;  // [bp-0x2f8]
    let v11: iNone;  // [bp-0x2e8]
    let v12: struct9;  // [bp-0x2d8], Other Possible Types: u64
    let v13: u64;  // [bp-0x2d0]
    let v14: std::path::PathBuf;  // [bp-0x2c8], Other Possible Types: struct40, struct24, u64
    let v15: Result<struct269, struct104>;  // [bp-0x2c8]
    let v16: core::result::Result<std::path::PathBuf, std::io::error::Error>;  // [bp-0x2c8]
    let v17: Result<struct112, struct16>;  // [bp-0x2c8]
    let v18: void*;  // [bp-0x2c0]
    let v19: iNone;  // [bp-0x2b8], Other Possible Types: u128
    let v20: iNone;  // [bp-0x2a8]
    let v21: iNone;  // [bp-0x298]
    let v22: iNone;  // [bp-0x288]
    let v23: u128;  // [bp-0x278]
    let v24: iNone;  // [bp-0x268]
    let v25: struct104;  // [bp-0x1a8]
    let v26: &u8;  // [bp-0x1a0]
    let v27: &u8;  // [bp-0x188]
    let v28: u32;  // [bp-0x180]
    let v29: u64;  // [bp-0x178]
    let v30: void*;  // [bp-0x170]
    let v31: u32;  // [bp-0x168]
    let v32: u64;  // [bp-0x160]
    let v33: void*;  // [bp-0x158]
    let v34: u32;  // [bp-0x150]
    let v35: alloc::string::String;  // [bp-0x140]
    let v36: struct32;  // [bp-0x128], Other Possible Types: u64
    let v37: u128;  // [bp-0x120]
    let v38: iNone;  // [bp-0x110]
    let v39: iNone;  // [bp-0x100]
    let v40: iNone;  // [bp-0xf0]
    let v41: iNone;  // [bp-0xe0]
    let v42: u128;  // [bp-0xd0]
    let v43: u8;  // [bp-0xc0]
    let v45: void*;  // rbx
    let v46: u64;  // rax
    let v47: u32;  // ebp
    let v48: u128;  // xmm0

    v25 = clap_builder::derive::Parser::parse();
    if (((0 ^ v29) & (0 ^ -(v29))) >> 63) as char {
        v16 = std::env::current_dir();
        match v16 {
            Err(_) => {
                v45 = anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(v1);
            },
            Ok(_) => {
                v0 = v16 as i64;
                v1 = v18;
                v2 = v19;
LABEL_7d2dbc:
                v46 = std::thread::local::LocalKey<T>::with();
                v14 = struct40 {
                    field_0: g_c0a2d0.field_0
                    field_16: g_c0a2e0.field_0
                    field_32: v46
                };
                v3 = sway_features::ExperimentalFeatures::new(&v14, v26, v25.field_16 as i64, v27, v28);
                match v3 {
                    Err(_) => {
                        v47 = *((&v3 as &char + 8) as &i32);
                        v14 as u2176 = swayfmt::formatter::Formatter::from_dir(v1, v2, v47 as u64);
                        v4 = *((&v15 as &char + 8) as &i128) as u128;
                        v6 = *((&v15 as &char + 24) as &i128);
                        v7 = vvar_169{reg 32};
                        v8 = *((&v15 as &char + 56) as &i128);
                        v9 = *((&v15 as &char + 72) as &i128);
                        v10 = *((&v15 as &char + 88) as &i128);
                        match v14 as u2176 {
                            Err(_) => {
                                v23 = v10;
                                v22 = v9;
                                v48 = v4;
                                v21 = v8;
                                v20 = v7;
                                v19 = v6;
                                v14 = v48;
                                v45 = anyhow::error::<impl core::convert::From<E> for anyhow::Error>::from(&v14 as u2176);
                            },
                            Ok(_) => {
                                memcpy(&v43, &v15 as u8, 168);
                                v37 = v4;
                                v38 = v6;
                                v39 = v7;
                                v40 = v8;
                                v41 = v9;
                                v42 = v10;
                                v36 = v15 as i64;
                                if v32 == 0x8000000000000000 {
                                    v17 = <forc_pkg::manifest::ManifestFile as forc_pkg::manifest::GenericManifestFile>::from_dir(&v0);
                                    v45 = v18;
                                    if let Ok(_) = v17 {
                                        v11 = *((&v17 as &char + 96) as &i128);
                                        v10 = *((&v17 as &char + 80) as &i128);
                                        v9 = *((&v17 as &char + 64) as &i128);
                                        v8 = *((&v17 as &char + 48) as &i128);
                                        v7 = *((&v17 as &char + 32) as &i128);
                                        v6 = *((&v17 as &char + 16) as &i128);
                                        v3 = v17 as i64;
                                        v5 = v45;
                                        if v17 as i64 == 2 {
                                            v45 = forc_fmt::format_pkg_at_dir(v25.field_96 as i32 as u32 as u64, v1, v2, &v36);
                                        } else {
                                            v24 = v11;
                                            v23 = v10;
                                            v22 = v9;
                                            v21 = v8;
                                            v20 = v7;
                                            v19 = v6;
                                            v14 = v3;
                                            v18 = v5;
                                            v45 = forc_fmt::format_workspace_at_dir(v25.field_96 as i32 as u32 as u64, &v14, v1, v2, v47 as u64);
                                        }
                                    }
                                } else {
                                    v14 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v33, v34);
                                    v6 = v19;
                                    v3 = *(&v14.field_0 as &i128) as u128;
                                    if sway_utils::helpers::is_sway_file(v5, v6) as u8 {
                                        v14 = std::sys::pal::unix::os::split_paths::bytes_to_path(v5, v6);
                                        v12 = forc_fmt::format_file(v25.field_96 as i32 as u32 as u64, &v14, &v36);
                                    } else {
                                        v12 = v5;
                                        v13 = v6;
                                        v35 = format!("Provided file '{}' is not a valid Sway file", &v12);
                                        v45 = anyhow::error::<impl anyhow::Error>::msg(&v35);
                                    }
                                }
                            },
                        }
                    },
                    Ok(_) => {
                        v36 = struct32 {
                            field_0: v3 as i128
                            field_16: v6
                        };
                        v45 = forc_fmt::run::{{closure}}(&v36);
                    },
                }
            },
        }
    } else {
        v14 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v30, v31);
        v2 = v19;
        v0 = *(&v14.field_0 as &i128);
        goto LABEL_7d2dbc;
    }
    return v45;
}
