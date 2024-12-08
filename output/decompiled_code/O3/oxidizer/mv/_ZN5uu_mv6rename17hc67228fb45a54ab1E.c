fn uu_mv::rename(a0: u32, a1: u32, a2: u32, a3: u32, a4: &u64, a5: u32) -> u64 {
    let v0: i32;  // [sp-0x32c]
    let v1: i64;  // [bp-0x318]
    let v2: i64;  // [sp-0x308]
    let v3: i64;  // [sp-0x2f0], Other Possible Types: struct12
    let v4: i64;  // [sp-0x2e0]
    let v5: i8;  // [bp-0x2d8]
    let v6: i32;  // [sp-0x2cc]
    let v7: i1408;  // [sp-0x2c8], Other Possible Types: Result<struct176, struct16>
    let v8: i64;  // [sp-0x2c0]
    let v9: i64;  // [sp-0x2b8]
    let v10: i128;  // [sp-0x218], Other Possible Types: struct12, struct16
    let v11: i64;  // [sp-0x210]
    let v12: i64;  // [sp-0x208]
    let v13: i8;  // [bp-0x200]
    let v14: i128;  // [sp-0x168]
    let v15: i64;  // [sp-0x158]
    let v16: i64;  // [sp-0x150]
    let v17: i64;  // [sp-0x148]
    let v18: i64;  // [sp-0x140]
    let v19: i64;  // [sp-0x138]
    let v20: i8;  // [sp-0x130]
    let v21: i64;  // [bp-0x128], Other Possible Types: struct16
    let v22: i64;  // [sp-0x120]
    let v23: i8;  // [bp-0x118]
    let v24: i8;  // [sp-0x110]
    let v25: i192;  // [sp-0x78]
    let v26: i192;  // [sp-0x60]
    let v27: i192;  // [sp-0x48]
    let v29: i64;  // r13
    let v30: i64;  // rax
    let v31: i32;  // eax
    let v32: i64;  // r12
    let v33: i64;  // rax
    let v36: i32;  // eax
    let v37: i64;  // rcx
    let v38: i32;  // esi
    let v39: i8;  // sil
    let v40: i64;  // rsi
    let v41: i64;  // rdx
    let v42: i64;  // rax
    let v43: i64;  // rdi
    let v46: i8;  // bl

    v29 = 0x8000000000000000;
    v1 = 0x8000000000000000;
    v0 = v30 | -0x100 | 1;
    v7 = std::fs::metadata(a2, a3);
    if v7 != 2 {
        v31 = *((a4 + 55) as &i8);
        if v31 != 1 {
            if v31 == 2 {
                v32 = *((a4 + 53) as &i8);
                if v32 == 1 {
                    return v33;
                }
                v7 = std::fs::metadata(a0, a1);
                if v7 == 2 {
                    return v33;
                }
                memcpy(&v23, &v7, 160);
                v21 = struct16 {
                    field_0: v34
                    field_8: v35
                };
                v10 = std::fs::Metadata::modified(&v21);
                v6 = *((&v10 as &char + 8) as &i32);
                if v6 == 0x3b9aca00 {
                    return v33;
                }
                v7 = std::fs::metadata(a2, a3);
                if v7 == 2 {
                    return v33;
                }
                v16 = v8;
                memcpy(&v12, &v7, 160);
                v10 = struct16 {
                    field_0: v34
                    field_8: v16
                };
                v29 = 0x8000000000000000;
                v3 = std::fs::Metadata::modified(&v10);
                v36 = *((&v3 as &char + 8) as &i32);
                if v36 == 0x3b9aca00 {
                    return v33;
                }
                v37 = (v10 < v3 ? 255 : (-0x100 | v10 != v3) & 4294967295 & 4294967295);
                if v6 < v36 {
                    v38 = 255;
                } else {
                    v38 = -0x100 | v6 != v36;
                }
                v39 = ((v37 & 255 & 255) ? v37 & 4294967295 : v38);
                if v39 != 1 {
                    return v33;
                }
            } else {
                if v31 != 3 {
                    v32 = *((a4 + 53) as &i8);
                } else {
                    v10 = 1;
                    v11 = a2;
                    v12 = a3;
                    v13 = 1;
                    v27 = format!("not replacing {:?}", &v10);
                    std::io::error::Error::new(39, &v27);
                    return v33;
                }
            }
            if !v32 {
                if !*((a4 + 52) as &i8) {
                    return v33;
                }
                v10 = 1;
                v10.field_8 = vvar_2;
                v12 = a3;
                v13 = 1;
                println!("skipped {:?}", &v10);
            } else {
                if v32 == 1 {
                    v10 = uucore::util_name();
                    v10.field_8 = vvar_365{reg 32};
                    eprint!("{:?}: ", &v10);
                    v10 = 1;
                    v10.field_8 = vvar_2;
                    v12 = a3;
                    v13 = 1;
                    eprint!("overwrite {:?}?", &v10);
                    eprint!(" ");
                    v17 = &_ZN3std2io5stdio6stderr8INSTANCE17ha28648ccba9ff424E;
                    v42 = <std::io::stdio::Stderr as std::io::Write>::flush(&v17, v40, v41);
                    if v42 {
                        v3 = v42;
                        v10 = uucore::util_name();
                        v11 = v41;
                        eprint!("{:?}: ", &v10);
                        eprintln!("{:?}", &v3);
                        std::process::exit(1); /* do not return */
                    }
                    if !uucore::read_yes(v43, v40, v41) as i8 {
                        std::io::error::Error::new(39, &g_426941, 19);
                        return v33;
                    }
                }
                uucore::features::backup_control::get_backup_path(&v7, *((a4 + 54) as &i8));
                v2 = v9;
                v1 = v7;
                if v1 != 0x8000000000000000 {
                    v33 = uu_mv::rename_with_fallback(a2, a3, *((&v1 as &char + 8) as &i64), v2, a5);
                    if v33 {
                        return v33;
                    }
                }
            }
        } else if *((a4 + 52) as &i8) {
            v10 = 1;
            v11 = a2;
            v12 = a3;
            v13 = 1;
            println!("skipped {:?}", &v10);
            return v33;
        } else {
            return v33;
        }
    }
    v7 = std::fs::metadata(a2, a3);
    if v7 != 2 && std::path::Path::is_dir(a2, a3) as i8 && std::path::Path::is_dir(a0, a1) as i8 {
        if !uu_mv::is_empty_dir(a2, a3) as i8 {
            std::io::error::Error::new(39, &g_426941, 19);
            return v33;
        }
        v33 = std::fs::remove_dir(a2, a3, v41);
        if v33 {
            return v33;
        }
    }
    v33 = uu_mv::rename_with_fallback(a0, a1, a2, a3, a5);
    if v33 {
        return v33;
    }
    if !*((a4 + 49) as &i8) {
        v46 = 0;
    } else {
        v46 = v33 | -0x100 | v1 != v29;
        if v1 == v29 {
            v21 = 1;
            v22 = a0;
            v23 = a1;
            v24 = 1;
            v10 = 1;
            v10.field_8 = vvar_2;
            v12 = a3;
            v13 = 1;
            v26 = format!("renamed {:?} -> {:?}", &v21, &v10);
            v10 = v26;
            v12 = *((&v26 as &char + 16) as &i64);
            v0 = v12 | -0x100 | 1;
        } else {
            v15 = v2;
            v14 = v1;
            v17 = 1;
            v18 = a0;
            v19 = a1;
            v20 = 1;
            v3 = 1;
            v3.field_8 = vvar_2;
            v4 = a3;
            v5 = 1;
            v21 = 1;
            v22 = *((&v14 as &char + 8) as &i64);
            v23 = v15;
            v24 = 1;
            v25 = format!("renamed {:?} -> {:?} (backup: {:?})", &v17, &v3, &v21);
            v10 = v25;
            v12 = *((&v25 as &char + 16) as &i64);
            v0 = 0;
            v0 = 0;
        }
        if !a5 {
            println!("{:?}", &v10);
        } else {
            indicatif::multi::MultiProgress::suspend(a5, &v10, v41);
        }
    }
    return 0;
}
