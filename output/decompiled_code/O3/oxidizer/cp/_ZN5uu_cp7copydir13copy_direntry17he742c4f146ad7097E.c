fn uu_cp::copydir::copy_direntry(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64, a5: i8) -> u64 {
    let v0: i64;  // [sp-0x228]
    let v1: i64;  // [sp-0x220]
    let v2: i64;  // [sp-0x218]
    let v3: i64;  // [sp-0x210]
    let v4: i64;  // [sp-0x208]
    let v5: i8;  // [bp-0x1f8]
    let v6: i8;  // [bp-0x1f0]
    let v7: i64;  // [sp-0x1e8]
    let v8: i128;  // [sp-0x1d8]
    let v9: i64;  // [sp-0x1c8]
    let v10: i64;  // [sp-0x1b8]
    let v11: i64;  // [sp-0x1a8]
    let v12: i128;  // [sp-0x1a0]
    let v13: i128;  // [bp-0x198]
    let v14: i8;  // [bp-0x190]
    let v15: i128;  // [sp-0x188]
    let v16: i64;  // [sp-0x178]
    let v17: i128;  // [sp-0x168]
    let v18: i64;  // [sp-0x158]
    let v19: i192;  // [sp-0x148], Other Possible Types: struct24, struct16
    let v20: i8;  // [bp-0x138]
    let v21: i8;  // [bp-0x128]
    let v22: i8;  // [bp-0x118]
    let v23: i64;  // [sp-0x108]
    let v24: i64;  // [sp-0x100]
    let v25: i64;  // [sp-0xf8], Other Possible Types: struct8, struct16, Result<struct176, struct16>, Option<struct8>
    let v26: i64;  // [sp-0xf0]
    let v27: i64;  // [sp-0xe8]
    let v28: i64;  // [sp-0xe0]
    let v29: i64;  // [bp-0xd8]
    let v30: i128;  // [sp-0xc8]
    let v31: i192;  // [sp-0x48]
    let v33: i8;  // r13b
    let v34: i64;  // rsi
    let v35: i64;  // rdx
    let v36: i64;  // rsi
    let v37: i64;  // rdx
    let v38: i64;  // rax
    let v39: i128;  // xmm0
    let v40: i128;  // xmm1
    let v41: i128;  // xmm2
    let v42: i64;  // rax
    let v43: i128;  // xmm0
    let v44: i128;  // xmm1
    let v45: i64;  // r14
    let v46: i128;  // xmm0
    let v47: i128;  // xmm1
    let v48: i128;  // xmm2
    let v49: i64;  // rax

    v7 = *((a2 + 16) as &i64);
    v18 = *((a2 + 40) as &i64);
    v17 = *((a2 + 24) as &i128);
    v9 = *((a2 + 64) as &i64);
    v8 = *((a2 + 48) as &i128);
    v33 = *((a2 + 72) as &i8);
    v34 = v6;
    v35 = v7;
    if (!*((a3 + 65) as &i8) & std::path::Path::is_symlink(v6, *((a2 + 16) as &i64)) as i8) {
        uu_cp::copy_link(a0, v34, v35, *((&v8 as &char + 8) as &i64), v9, a4);
        goto LABEL_50e0b5;
    }
    if !(std::path::Path::is_dir(v34, v35) as i8) || !(!uu_cp::copydir::ends_with_slash_dot(&v5, v36, v37) as i8) {
LABEL_50e151:
        if !std::path::Path::is_dir(v6, v7) as i8 {
            if !a5 {
                v4 = 0;
                v3 = v3;
                v2 = v2;
                v1 = a4;
                v0 = a3;
                v25 = uu_cp::copy_file(a1, v6, v7, *((&v8 as &char + 8) as &i64), v9);
                v42 = v25;
                if v42 == 3 {
                    v45 = *((&v25 as &char + 32) as &i64);
                    if !(v42 == 13) {
                        goto LABEL_50e459;
                    }
                    v11 = 1;
                    v12 = *((&v17 as &char + 8) as &i128);
                    v14 = 1;
                    v31 = format!("cannot open {:?} for reading", &v11);
                    v10 = uucore::mods::error::UIoError::new(std::io::error::Error::kind(v45) as i32, &v31);
                    *((v37 + 96) as &i64)();
                    uucore::mods::error::set_exit_code();
                    v23 = uucore::util_name();
                    v24 = v37;
                    eprintln!("{:?}: {:?}", &v23, &v10);
                    switch (v49) {
                    case 3:
                        break;
                    case 13:
                        break;
                    default:
                        break;
                    }
                } else if !(v42 == 13) {
                    goto LABEL_50e459;
                }
            } else {
                v4 = 0;
                v3 = v3;
                v2 = v2;
                v1 = a4;
                v0 = a3;
                v19 = uu_cp::copy_file(a1, v6, v7, *((&v8 as &char + 8) as &i64), v9);
                if v19 == 13 {
                    goto LABEL_50e165;
                }
                v43 = v19;
                v44 = v20;
                v30 = v22;
                v29 = v21;
                v27 = v44;
                v25 = v43;
                if std::path::Path::is_symlink(v6, v7) as i8 {
                    goto LABEL_50e165;
                } else {
                    v38 = v25;
                    v11 = *((&v25 as &char + 8) as &i128);
                    v13 = *((&v27 as &char + 8) as &i128);
                    v15 = *((&v29 as &char + 8) as &i128);
                    v16 = *((&v30 as &char + 8) as &i64);
                    if v38 == 13 {
                        goto LABEL_50e165;
                    }
                    *((a0 + 56) as &i64) = v16;
                }
LABEL_50e5f7:
                *((a0 + 40) as &i128) = v41;
                *((a0 + 24) as &i128) = v40;
                *((a0 + 8) as &i128) = v39;
                *(a0 as &i64) = v38;
                goto LABEL_50e0b5;
            }
        }
LABEL_50e165:
        *(a0 as &i64) = 13;
    } else {
        v25 = std::fs::metadata(*((&v8 as &char + 8) as &i64), v9);
        if v25 != 2 {
            goto LABEL_50e151;
        }
        if v33 {
            v25 = <uu_cp::Error as core::convert::From<&str>>::from("cannot overwrite non-directory with directory");
LABEL_50e459:
            v46 = v25;
            v47 = *((&v25 as &char + 16) as &i128);
            v48 = *((&v25 as &char + 32) as &i128);
            *((a0 + 48) as &i128) = v30;
            *((a0 + 32) as &i128) = v48;
            *((a0 + 16) as &i128) = v47;
            *(a0 as &i128) = v46;
        } else {
            v25 = uu_cp::copydir::build_dir(*((a3 + 48) as &i32), *((a3 + 50) as &i8), &v8, 0);
            v38 = v25;
            if v38 != 13 {
                *((a0 + 56) as &i64) = *((&v25 as &char + 56) as &i64);
                v39 = *((&v25 as &char + 8) as &i128);
                v40 = *((&v25 as &char + 24) as &i128);
                v41 = *((&v25 as &char + 40) as &i128);
                goto LABEL_50e5f7;
            } else {
                if *((a3 + 72) as &i8) {
                    v19 = uu_cp::context_for(*((&v17 as &char + 8) as &i64), v18, *((&v8 as &char + 8) as &i64), v9);
                    v11 = &v19;
                    v12 = <alloc::string::String as core::fmt::Display>::fmt;
                    v25 = &g_5b62c0;
                    v26 = 2;
                    v29 = 0;
                    v27 = &v11;
                    v28 = 1;
                    std::io::stdio::_print(&v25);
                }
                *(a0 as &i64) = 13;
            }
        }
LABEL_50e0b5:
    }
    return;
}
