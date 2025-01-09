fn uu_mv::rename(a0: u32, a1: u32, a2: u32, a3: u32, a4: &u64, a5: u32) -> u64 {
    let v0: i32;  // [sp-0x32c]
    let v1: i128;  // [bp-0x318]
    let v2: i64;  // [sp-0x308]
    let v3: i64;  // [sp-0x2f0], Other Possible Types: struct12
    let v4: i64;  // [sp-0x2e8]
    let v5: i64;  // [sp-0x2e0]
    let v6: i64;  // [bp-0x2d8]
    let v7: i32;  // [sp-0x2cc]
    let v8: i128;  // [sp-0x2c8], Other Possible Types: struct16
    let v9: i64;  // [sp-0x2c0]
    let v10: i64;  // [sp-0x2b8]
    let v11: i64;  // [sp-0x2b0]
    let v12: i64;  // [sp-0x2a8]
    let v13: i64;  // [sp-0x2a0]
    let v14: i64;  // [sp-0x218], Other Possible Types: struct16, struct12
    let v15: i64;  // [sp-0x210]
    let v16: i64;  // [sp-0x208]
    let v17: i8;  // [bp-0x200]
    let v18: i64;  // [sp-0x1f8]
    let v19: i128;  // [sp-0x168]
    let v20: i64;  // [sp-0x158]
    let v21: i64;  // [sp-0x150]
    let v22: i64;  // [bp-0x148], Other Possible Types: struct8
    let v23: i64;  // [sp-0x140]
    let v24: i64;  // [sp-0x138]
    let v25: i8;  // [sp-0x130]
    let v26: i64;  // [sp-0x128], Other Possible Types: struct16
    let v27: i64;  // [sp-0x120]
    let v28: i8;  // [bp-0x118]
    let v29: i8;  // [sp-0x110]
    let v30: i8;  // [bp-0x78]
    let v31: i8;  // [bp-0x68]
    let v32: i8;  // [bp-0x60]
    let v33: i8;  // [bp-0x50]
    let v34: i8;  // [bp-0x48]
    let v36: i64;  // r13
    let v37: i64;  // rax
    let v38: i64;  // r12
    let v39: i8;  // al
    let v40: i64;  // rax
    let v43: i32;  // eax
    let v44: i64;  // rcx
    let v45: i32;  // esi
    let v46: i8;  // sil
    let v47: i32;  // eax
    let v48: i64;  // rdx
    let v49: i64;  // rax
    let v52: i8;  // bl

    v36 = 0x8000000000000000;
    v1 = 0x8000000000000000;
    v0 = v37 | -0x100 | 1;
    v8 = std::fs::metadata(a2, a3);
    if v8 == 2 {
        goto LABEL_4ead3f;
    }
    v38 = *((a4 + 53) as &i8);
    v39 = *((a4 + 55) as &i8);
    if v39 == 2 && v38 == 1 {
        return v40;
    }
    if v39 == 1 {
        if !*((a4 + 52) as &i8) {
            return v40;
        }
        v14 = 1;
        v15 = a2;
        v16 = a3;
        v17 = 1;
        println!("skipped {:?}", &v14);
    }
    if v39 != 2 {
        if v39 == 3 {
            v14 = 1;
            v15 = a2;
            v16 = a3;
            v17 = 1;
            v26 = &v14;
            v27 = <os_display::Quoted as core::fmt::Display>::fmt;
            v8 = "not replacing ";
            v9 = 1;
            v12 = 0;
            v10 = &v26;
            v11 = 1;
            core::option::Option<T>::map_or_else();
            std::io::error::Error::new(39, &v34);
            return v40;
        }
LABEL_4eb40e:
        v47 = v38;
        if !v47 {
            if *((a4 + 52) as &i8) {
                v14 = 1;
                v15 = a2;
                v16 = a3;
                v17 = 1;
                println!("skipped {:?}", &v14);
                return v40;
            }
            return v40;
        }
        if v47 == 1 {
            v14 = uucore::util_name();
            v15 = v48;
            eprint!("{:?}: ", &v14);
            v14 = 1;
            v15 = a2;
            v16 = a3;
            v17 = 1;
            eprint!("overwrite {:?}?", &v14);
            eprint!(" ");
            v22 = struct8 {
                field_0: &_ZN3std2io5stdio6stderr8INSTANCE17ha28648ccba9ff424E
            };
            v49 = <std::io::stdio::Stderr as std::io::Write>::flush(&v22);
            if v49 {
                v3 = v49;
                v14 = uucore::util_name();
                v15 = v48;
                eprint!("{:?}: ", &v14);
                eprintln!("{:?}", &v3);
                std::process::exit(1); /* do not return */
            } else if !uucore::read_yes() as i8 {
                std::io::error::Error::new(39, &g_426c4c, 19);
                return v40;
            }
        }
        uucore::features::backup_control::get_backup_path(&v8, *((a4 + 54) as &i8));
        v2 = v10;
        if !(v1 != 0x8000000000000000) || !((v40 = uu_mv::rename_with_fallback(a2, a3, *((&v1 as &char + 8) as &i64), v2, a5), v40)) {
LABEL_4ead3f:
            v8 = std::fs::metadata(a2, a3);
            if v8 != 2 && std::path::Path::is_dir(a2, a3) as i8 && std::path::Path::is_dir(a0, a1) as i8 {
                if !uu_mv::is_empty_dir(a2, a3) as i8 {
                    std::io::error::Error::new(39, &g_426c4c, 19);
                    return v40;
                }
                v40 = std::fs::remove_dir(a2, a3);
                if v40 {
                    return v40;
                }
            }
            v40 = uu_mv::rename_with_fallback(a0, a1, a2, a3, a5);
            if v40 {
                return v40;
            }
            if !*((a4 + 49) as &i8) {
                v52 = 0;
            } else {
                v52 = v40 | -0x100 | v1 != v36;
                if v1 == v36 {
                    v26 = 1;
                    v27 = a0;
                    v28 = a1;
                    v29 = 1;
                    v14 = 1;
                    v15 = a2;
                    v16 = a3;
                    v17 = 1;
                    v3 = &v26;
                    v4 = <os_display::Quoted as core::fmt::Display>::fmt;
                    v5 = &v14;
                    v6 = <os_display::Quoted as core::fmt::Display>::fmt;
                    v8 = "renamed ";
                    v9 = 2;
                    v12 = 0;
                    v10 = &v3;
                    v11 = 2;
                    core::option::Option<T>::map_or_else();
                    v14 = v32;
                    v16 = v33;
                    v0 = v16 | -0x100 | 1;
                } else {
                    v20 = v2;
                    v19 = v1;
                    v22 = 1;
                    v23 = a0;
                    v24 = a1;
                    v25 = 1;
                    v3 = 1;
                    v4 = a2;
                    v5 = a3;
                    v6 = 1;
                    v26 = 1;
                    v27 = *((&v19 as &char + 8) as &i64);
                    v28 = v20;
                    v29 = 1;
                    v8 = &v22;
                    v9 = <os_display::Quoted as core::fmt::Display>::fmt;
                    v10 = &v3;
                    v11 = <os_display::Quoted as core::fmt::Display>::fmt;
                    v12 = &v26;
                    v13 = <os_display::Quoted as core::fmt::Display>::fmt;
                    v14 = "renamed ";
                    v15 = 4;
                    v18 = 0;
                    v16 = &v8;
                    v17 = 3;
                    core::option::Option<T>::map_or_else();
                    v14 = v30;
                    v16 = v31;
                    v0 = 0;
                    v0 = 0;
                }
                if !a5 {
                    println!("{:?}", &v14);
                } else {
                    indicatif::multi::MultiProgress::suspend(a5, &v14);
                }
            }
            return 0;
        }
    } else {
        v8 = std::fs::metadata(a0, a1);
        if v8 == 2 {
            return v40;
        }
        memcpy(&v28, &v10, 160);
        v26 = struct16 {
            field_0: v41
            field_8: v42
        };
        v14 = std::fs::Metadata::modified(&v26);
        v40 = v14;
        v7 = *((&v14 as &char + 8) as &i32);
        if v7 != 0x3b9aca00 {
            v8 = std::fs::metadata(a2, a3);
            if v8 == 2 {
                return v40;
            }
            v21 = v9;
            memcpy(&v16, &v10, 160);
            v14 = struct16 {
                field_0: v41
                field_8: v21
            };
            v36 = 0x8000000000000000;
            v3 = std::fs::Metadata::modified(&v14);
            v43 = *((&v3 as &char + 8) as &i32);
            if v43 == 0x3b9aca00 {
                return v40;
            }
            v44 = (v40 < v3 ? (-0x100 | v40 != v3) & 4294967295 & 4294967295 : 255);
            if v7 < v43 {
                v45 = 255;
            } else {
                v45 = -0x100 | v7 != v43;
            }
            v46 = ((v44 & 255 & 255) ? v44 & 4294967295 : v45);
            if v46 != 1 {
                return v40;
            }
            goto LABEL_4eb40e;
        }
    }
    return v40;
}
