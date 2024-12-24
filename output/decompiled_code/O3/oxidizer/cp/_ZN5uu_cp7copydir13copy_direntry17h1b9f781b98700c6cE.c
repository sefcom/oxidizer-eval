fn uu_cp::copydir::copy_direntry(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64, a5: i8) -> u64 {
    let v0: i64;  // [sp-0x218]
    let v1: i64;  // [sp-0x210]
    let v2: i8;  // [bp-0x208]
    let v3: i8;  // [bp-0x1f8]
    let v4: i8;  // [bp-0x1f0]
    let v5: i64;  // [sp-0x1e8]
    let v6: i128;  // [sp-0x1d8]
    let v7: i64;  // [sp-0x1c8]
    let v8: i64;  // [sp-0x1b8]
    let v9: i64;  // [sp-0x1a8]
    let v10: i64;  // [sp-0x1a0]
    let v11: i128;  // [bp-0x198]
    let v12: i8;  // [bp-0x190]
    let v13: i128;  // [sp-0x188]
    let v14: i64;  // [sp-0x178]
    let v15: i128;  // [sp-0x168]
    let v16: i64;  // [sp-0x158]
    let v17: i512;  // [sp-0x148], Other Possible Types: struct24, struct64
    let v18: i64;  // [sp-0x108]
    let v19: i64;  // [sp-0x100]
    let v20: i512;  // [sp-0xf8], Other Possible Types: Option<struct8>, struct8, struct64, Result<struct176, struct16>
    let v21: i64;  // [sp-0xf0]
    let v22: i64;  // [sp-0xe8]
    let v23: i64;  // [sp-0xe0]
    let v24: i128;  // [bp-0xd8]
    let v25: i128;  // [sp-0xc8]
    let v26: i192;  // [sp-0x48]
    let v28: i8;  // r13b
    let v29: i64;  // rsi
    let v30: i64;  // rdx
    let v31: i64;  // rsi
    let v32: i64;  // rdx
    let v33: i64;  // rsi
    let v34: i64;  // rax
    let v35: i128;  // xmm0
    let v36: i128;  // xmm1
    let v37: i128;  // xmm2
    let v38: i64;  // rax
    let v39: i128;  // xmm0
    let v40: i128;  // xmm1
    let v41: i64;  // r14
    let v42: i128;  // xmm0
    let v43: i128;  // xmm1
    let v44: i128;  // xmm2
    let v45: i64;  // rax

    v5 = *((a2 + 16) as &i64);
    v16 = *((a2 + 40) as &i64);
    v15 = *((a2 + 24) as &i128);
    v7 = *((a2 + 64) as &i64);
    v6 = *((a2 + 48) as &i128);
    v28 = *((a2 + 72) as &i8);
    v29 = v4;
    v30 = v5;
    if (!*((a3 + 65) as &i8) & std::path::Path::is_symlink(v4, *((a2 + 16) as &i64)) as i8) {
        uu_cp::copy_link(a0, v29, v30, *((&v6 as &char + 8) as &i64), v7, a4);
        goto LABEL_50d6f5;
    }
    if !(std::path::Path::is_dir(v29, v30) as i8) || !(!uu_cp::copydir::ends_with_slash_dot(&v3, v31, v32) as i8) {
LABEL_50d791:
        if !std::path::Path::is_dir(v4, v5) as i8 {
            if !a5 {
                v1 = v1;
                v0 = v0;
                v20 = uu_cp::copy_file(a1, v4, v5, *((&v6 as &char + 8) as &i64), v7, a3, a4, v0, v1, v2);
                v38 = v20;
                if v38 == 3 {
                    v41 = *((&v20 as &char + 32) as &i64);
                    if !(v38 == 13) {
                        goto LABEL_50da99;
                    }
                    v9 = 1;
                    v10 = *((&v15 as &char + 8) as &i128);
                    v12 = 1;
                    v26 = format!("cannot open {:?} for reading", &v9);
                    v8 = uucore::mods::error::UIoError::new(std::io::error::Error::kind(v41) as i32, &v26);
                    *((v32 + 96) as &i64)();
                    uucore::mods::error::set_exit_code();
                    v18 = uucore::util_name();
                    v19 = v32;
                    eprintln!("{:?}: {:?}", &v18, &v8);
                    switch (v45) {
                    case 3:
                        break;
                    case 13:
                        break;
                    default:
                        break;
                    }
                } else if !(v38 == 13) {
                    goto LABEL_50da99;
                }
            } else {
                v1 = v1;
                v0 = v0;
                v17 = uu_cp::copy_file(a1, v4, v5, *((&v6 as &char + 8) as &i64), v7, a3, a4, v0, v1, v2);
                if v17 == 13 {
                    goto LABEL_50d7a5;
                }
                v39 = v17;
                v40 = *((&v17 as &char + 16) as &i128);
                v25 = *((&v17 as &char + 48) as &i128);
                v24 = *((&v17 as &char + 32) as &i128);
                v22 = v40;
                v20 = v39;
                if std::path::Path::is_symlink(v4, v5) as i8 {
                    goto LABEL_50d7a5;
                } else {
                    v34 = v20;
                    v9 = *((&v20 as &char + 8) as &i128);
                    v11 = *((&v22 as &char + 8) as &i128);
                    v13 = *((&v24 as &char + 8) as &i128);
                    v14 = *((&v25 as &char + 8) as &i64);
                    if v34 == 13 {
                        goto LABEL_50d7a5;
                    }
                    *((a0 + 56) as &i64) = v14;
                }
LABEL_50dc37:
                *((a0 + 40) as &i128) = v37;
                *((a0 + 24) as &i128) = v36;
                *((a0 + 8) as &i128) = v35;
                *(a0 as &i64) = v34;
                goto LABEL_50d6f5;
            }
        }
LABEL_50d7a5:
        *(a0 as &i64) = 13;
    } else {
        v20 = std::fs::metadata(*((&v6 as &char + 8) as &i64), v7);
        v33 = v21;
        if v20 != 2 {
            goto LABEL_50d791;
        }
        if v28 {
            v20 = <uu_cp::Error as core::convert::From<&str>>::from("cannot overwrite non-directory with directory");
LABEL_50da99:
            v42 = v20;
            v43 = *((&v20 as &char + 16) as &i128);
            v44 = *((&v20 as &char + 32) as &i128);
            *((a0 + 48) as &struct64) = v20.48;
            *((a0 + 32) as &i128) = v44;
            *((a0 + 16) as &i128) = v43;
            *(a0 as &i128) = v42;
        } else {
            v20 = uu_cp::copydir::build_dir(*((a3 + 48) as &i32), *((a3 + 50) as &i8), &v6, 0);
            v34 = v20;
            if v34 != 13 {
                *((a0 + 56) as &i64) = *((&v20 as &char + 56) as &i64);
                v35 = *((&v20 as &char + 8) as &i128);
                v36 = *((&v20 as &char + 24) as &i128);
                v37 = *((&v20 as &char + 40) as &i128);
                goto LABEL_50dc37;
            } else {
                if *((a3 + 72) as &i8) {
                    v17 = uu_cp::context_for(*((&v15 as &char + 8) as &i64), v16, *((&v6 as &char + 8) as &i64), v7);
                    v9 = &v17;
                    v10 = <alloc::string::String as core::fmt::Display>::fmt;
                    v20 = &g_5b5bf0;
                    v21 = 2;
                    v24 = 0;
                    v22 = &v9;
                    v23 = 1;
                    std::io::stdio::_print(&v20);
                }
                *(a0 as &i64) = 13;
            }
        }
LABEL_50d6f5:
    }
    return;
}
