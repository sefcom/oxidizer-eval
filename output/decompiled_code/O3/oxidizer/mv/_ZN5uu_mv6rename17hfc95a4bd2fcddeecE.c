fn uu_mv::rename(a0: u32, a1: u32, a2: u32, a3: u32, a4: &u64, a5: u32) -> u64 {
    let v0: i32;  // [sp-0x32c]
    let v1: i128;  // [bp-0x318]
    let v2: i64;  // [sp-0x308]
    let v3: i64;  // [sp-0x2f0], Other Possible Types: struct12
    let v4: i64;  // [sp-0x2e8]
    let v5: i64;  // [sp-0x2e0]
    let v6: i8;  // [bp-0x2d8]
    let v7: i32;  // [sp-0x2cc]
    let v8: i64;  // [sp-0x2c8], Other Possible Types: Result<struct176, struct16>
    let v9: i64;  // [sp-0x2c0]
    let v10: i64;  // [sp-0x2b8]
    let v11: i64;  // [sp-0x218], Other Possible Types: struct12, struct16
    let v12: i64;  // [sp-0x210]
    let v13: i8;  // [sp-0x208]
    let v14: i8;  // [bp-0x200]
    let v15: i128;  // [sp-0x168]
    let v16: i64;  // [sp-0x158]
    let v17: i64;  // [sp-0x150]
    let v18: i64;  // [bp-0x148], Other Possible Types: struct8
    let v19: i64;  // [sp-0x140]
    let v20: i64;  // [sp-0x138]
    let v21: i8;  // [sp-0x130]
    let v22: i64;  // [bp-0x128], Other Possible Types: struct16
    let v23: i64;  // [sp-0x120]
    let v24: i8;  // [bp-0x118]
    let v25: i8;  // [sp-0x110]
    let v26: i192;  // [sp-0x78]
    let v27: i192;  // [sp-0x60]
    let v28: i192;  // [sp-0x48]
    let v30: i64;  // r13
    let v31: i64;  // rax
    let v32: i64;  // r12
    let v33: i8;  // al
    let v34: i64;  // rax
    let v37: i32;  // eax
    let v38: i64;  // rcx
    let v39: i32;  // esi
    let v40: i8;  // sil
    let v41: i32;  // eax
    let v42: i64;  // rdx
    let v43: i64;  // rsi
    let v44: i64;  // rax
    let v45: i64;  // rdi
    let v48: i8;  // bl

    v30 = 0x8000000000000000;
    v1 = 0x8000000000000000;
    v0 = v31 | -0x100 | 1;
    v8 = std::fs::metadata(a2, a3);
    if v8 == 2 {
        goto LABEL_4ead3f;
    }
    v32 = *((a4 + 53) as &i8);
    v33 = *((a4 + 55) as &i8);
    if v33 == 2 && v32 == 1 {
        return v34;
    }
    if v33 == 1 {
        if !*((a4 + 52) as &i8) {
            return v34;
        }
        v11 = 1;
        v12 = a2;
        v13 = a3;
        v14 = 1;
        println!("skipped {:?}", &v11);
    }
    if v33 != 2 {
        if v33 == 3 {
            v11 = 1;
            v12 = a2;
            v13 = a3;
            v14 = 1;
            v28 = format!("not replacing {:?}", &v11);
            std::io::error::Error::new(39, &v28);
            return v34;
        }
LABEL_4eb40e:
        v41 = v32;
        if !v41 {
            if *((a4 + 52) as &i8) {
                v11 = 1;
                v12 = a2;
                v13 = a3;
                v14 = 1;
                println!("skipped {:?}", &v11);
                return v34;
            }
            return v34;
        }
        if v41 == 1 {
            v11 = uucore::util_name();
            v12 = v42;
            eprint!("{:?}: ", &v11);
            v11 = 1;
            v12 = a2;
            v13 = a3;
            v14 = 1;
            eprint!("overwrite {:?}?", &v11);
            eprint!(" ");
            v18 = struct8 {
                field_0: &_ZN3std2io5stdio6stderr8INSTANCE17ha28648ccba9ff424E
            };
            v44 = <std::io::stdio::Stderr as std::io::Write>::flush(&v18, v43, v42);
            if v44 {
                v3 = v44;
                v11 = uucore::util_name();
                v12 = v42;
                eprint!("{:?}: ", &v11);
                eprintln!("{:?}", &v3);
                std::process::exit(1); /* do not return */
            } else if !uucore::read_yes(v45, v43, v42) as i8 {
                std::io::error::Error::new(39, &g_426c4c, 19);
                return v34;
            }
        }
        uucore::features::backup_control::get_backup_path(&v8, *((a4 + 54) as &i8));
        v2 = v10;
        v1 = v8;
        if !(v1 != 0x8000000000000000) || !((v34 = uu_mv::rename_with_fallback(a2, a3, *((&v1 as &char + 8) as &i64), v2, a5), v34)) {
LABEL_4ead3f:
            v8 = std::fs::metadata(a2, a3);
            if v8 != 2 && std::path::Path::is_dir(a2, a3) as i8 && std::path::Path::is_dir(a0, a1) as i8 {
                if !uu_mv::is_empty_dir(a2, a3) as i8 {
                    std::io::error::Error::new(39, &g_426c4c, 19);
                    return v34;
                }
                v34 = std::fs::remove_dir(a2, a3, v42);
                if v34 {
                    return v34;
                }
            }
            v34 = uu_mv::rename_with_fallback(a0, a1, a2, a3, a5);
            if v34 {
                return v34;
            }
            if !*((a4 + 49) as &i8) {
                v48 = 0;
            } else {
                v48 = v34 | -0x100 | v1 != v30;
                if v1 == v30 {
                    v22 = 1;
                    v23 = a0;
                    v24 = a1;
                    v25 = 1;
                    v11 = 1;
                    v12 = a2;
                    v13 = a3;
                    v14 = 1;
                    v27 = format!("renamed {:?} -> {:?}", &v22, &v11);
                    v11 = v27;
                    v0 = v13 | -0x100 | 1;
                } else {
                    v16 = v2;
                    v15 = v1;
                    v18 = 1;
                    v19 = a0;
                    v20 = a1;
                    v21 = 1;
                    v3 = 1;
                    v4 = a2;
                    v5 = a3;
                    v6 = 1;
                    v22 = 1;
                    v23 = *((&v15 as &char + 8) as &i64);
                    v24 = v16;
                    v25 = 1;
                    v26 = format!("renamed {:?} -> {:?} (backup: {:?})", &v18, &v3, &v22);
                    v11 = v26;
                    v0 = 0;
                    v0 = 0;
                }
                if !a5 {
                    println!("{:?}", &v11);
                } else {
                    indicatif::multi::MultiProgress::suspend(a5, &v11, v42);
                }
            }
            return 0;
        }
    } else {
        v8 = std::fs::metadata(a0, a1);
        if v8 == 2 {
            return v34;
        }
        memcpy(&v24, &v8, 160);
        v22 = struct16 {
            field_0: v35
            field_8: v36
        };
        v11 = std::fs::Metadata::modified(&v22);
        v34 = v11;
        v7 = *((&v11 as &char + 8) as &i32);
        if v7 != 0x3b9aca00 {
            v8 = std::fs::metadata(a2, a3);
            if v8 == 2 {
                return v34;
            }
            v17 = v9;
            memcpy(&v13, &v8, 160);
            v11 = struct16 {
                field_0: v35
                field_8: v17
            };
            v30 = 0x8000000000000000;
            v3 = std::fs::Metadata::modified(&v11);
            v37 = *((&v3 as &char + 8) as &i32);
            if v37 == 0x3b9aca00 {
                return v34;
            }
            v38 = (v34 < v3 ? (-0x100 | v34 != v3) & 4294967295 & 4294967295 : 255);
            if v7 < v37 {
                v39 = 255;
            } else {
                v39 = -0x100 | v7 != v37;
            }
            v40 = ((v38 & 255 & 255) ? v38 & 4294967295 : v39);
            if v40 != 1 {
                return v34;
            }
            goto LABEL_4eb40e;
        }
    }
    return v34;
}
