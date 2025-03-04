fn uu_cp::copydir::copy_direntry(a0: void*, a1: u32, a2: void*, a3: void*, a4: u32, a5: u8) -> u64 {
    let v0: i64;  // [sp-0x220]
    let v1: i64;  // [sp-0x218]
    let v2: i64;  // [sp-0x210]
    let v3: i64;  // [sp-0x208]
    let v4: iNone;  // [sp-0x1f8]
    let v5: i64;  // [sp-0x1e8]
    let v6: iNone;  // [sp-0x1d8]
    let v7: i64;  // [sp-0x1c8]
    let v9: i64;  // [bp-0x1a8], Other Possible Types: int
    let v10: iNone;  // [bp-0x1a0]
    let v11: iNone;  // [bp-0x198]
    let v12: i8;  // [bp-0x190]
    let v13: iNone;  // [sp-0x188]
    let v14: i64;  // [sp-0x178]
    let v15: iNone;  // [sp-0x168]
    let v16: i64;  // [sp-0x158]
    let v17: struct24;  // [sp-0x148], Other Possible Types: struct16
    let v18: i8;  // [bp-0x138]
    let v19: i8;  // [bp-0x128]
    let v20: i8;  // [bp-0x118]
    let v21: i64;  // [sp-0x100]
    let v22: i64;  // [sp-0xf8], Other Possible Types: int, Option<struct8>
    let v23: Result<struct176, struct8>;  // [sp-0xf8], Other Possible Types: struct16, struct8, int
    let v24: iNone;  // [bp-0xe8]
    let v25: iNone;  // [bp-0xd8]
    let v26: iNone;  // [sp-0xc8]
    let v27: String;  // [sp-0x48]
    let v29: i8;  // r13b
    let v30: i64;  // rsi
    let v31: i64;  // rdx
    let v32: i64;  // rax
    let v33: iNone;  // xmm0
    let v34: iNone;  // xmm1
    let v35: iNone;  // xmm2
    let v36: i64;  // rax
    let v37: iNone;  // xmm0
    let v38: iNone;  // xmm1
    let v40: iNone;  // xmm0
    let v41: iNone;  // xmm1
    let v42: iNone;  // xmm2
    let v43: i64;  // rdx
    let v44: i64;  // rax

    v5 = *((a2 + 16) as &i64);
    v4 = *(a2 as &i128);
    v16 = *((a2 + 40) as &i64);
    v15 = *((a2 + 24) as &i128);
    v7 = *((a2 + 64) as &i64);
    v6 = *((a2 + 48) as &i128);
    v29 = *((a2 + 72) as &i8);
    v30 = (&v4)[8] as i64;
    v31 = v5;
    if (!*((a3 + 65) as &i8) & std::path::Path::is_symlink((&v4)[8] as i64, *((a2 + 16) as &i64)) as i8) {
        uu_cp::copy_link(a0, v30, v31, (&v6)[8] as i64, v7, a4);
        return;
    } else if !(std::path::Path::is_dir(v30, v31) as i8) || !(!uu_cp::copydir::ends_with_slash_dot(&v4) as i8) || !((v23 = std::fs::metadata((&v6)[8] as i64, v7), v22 == 2)) {
        if std::path::Path::is_dir((&v4)[8] as i64, v5) as i8 {
            return;
        }
        if a5 {
            v3 = 0;
            v2 = v2;
            v1 = v1;
            v0 = a4;
            v17 = uu_cp::copy_file(a1, (&v4)[8] as i64, v5, (&v6)[8] as i64, v7, a3);
            if v17.field_0 as i32 == 13 {
                return;
            }
            v37 = *(&v17.field_0 as &i128);
            v38 = *(&v18 as &i128);
            v26 = *(&v20 as &i128);
            *(&v25 as &i128) = *(&v19 as &i128);
            v24 = v38;
            v22 = v37;
            if std::path::Path::is_symlink((&v4)[8] as i64, v5) as i8 {
                return;
            }
            v32 = v22;
            *(&v9 as &i128) = (&v22)[8] as i128;
            *(&v11 as &i128) = (&v24)[8] as i128;
            v13 = (&v25)[8] as i128;
            v14 = (&v26)[8] as i64;
            if v32 != 13 {
                *((a0 + 56) as &unsigned long) = v14;
                *((a0 + 40) as void*) = v35;
                *((a0 + 24) as void*) = v34;
                *((a0 + 8) as void*) = v33;
                *(a0 as &unsigned long) = v32;
                return;
            }
            return;
        }
        v3 = 0;
        v2 = v2;
        v1 = v1;
        v0 = a4;
        v23 = uu_cp::copy_file(a1, (&v4)[8] as i64, v5, (&v6)[8] as i64, v7, a3);
        v36 = v22;
        if v36 == 3 {
            if !(std::io::error::Error::kind(*((&v23 as &char + 32) as &i64)) as i8 == 1) {
                goto LABEL_50e459;
            }
            v9 = 1;
            *(&v10 as &i128) = (&v15)[8] as i128;
            *(&v12 as &i8) = 1;
            v27 = format!("cannot open {} for reading", &v9);
            v21 = v43;
            show!(&v8);
            match (v44) {
                3 => {
                    break;
                }
                13 => {
                    break;
                }
                _ => {
                    break;
                }
            }
        } else if !(v36 as u32 == 13) {
            goto LABEL_50e459;
        }
        return;
    } else {
        if !v29 {
            v22 = uu_cp::copydir::build_dir(*((a3 + 48) as &i32), *((a3 + 50) as &i8), &v6, 0);
            v32 = v22;
            if v32 != 13 {
                *((a0 + 56) as &i64) = *((&v23 as &char + 56) as &i64);
                v33 = *((&v23 as &char + 8) as &i128);
                v34 = *((&v23 as &char + 24) as &i128);
                v35 = *((&v23 as &char + 40) as &i128);
                *((a0 + 40) as void*) = v35;
                *((a0 + 24) as void*) = v34;
                *((a0 + 8) as void*) = v33;
                *(a0 as &unsigned long) = v32;
                return;
            }
            if *((a3 + 72) as &i8) {
                v17 = uu_cp::context_for((&v15)[8] as i64, v16, (&v6)[8] as i64, v7);
                println!("{}", &v17);
            }
            *(a0 as &i64) = 13;
        } else {
            v23 = <uu_cp::Error as core::convert::From<&str>>::from("cannot overwrite non-directory with directory");
LABEL_50e459:
            v40 = v23 as i128;
            v41 = *((&v23 as &char + 16) as &i128);
            v42 = *((&v23 as &char + 32) as &i128);
            *((a0 + 48) as void*) = v26;
            *((a0 + 32) as void*) = v42;
            *((a0 + 16) as void*) = v41;
            *(a0 as void*) = v40;
        }
        return;
    }
}
