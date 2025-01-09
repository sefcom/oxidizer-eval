fn uu_cp::copydir::copy_direntry(a0: void*, a1: u32, a2: void*, a3: void*, a4: u32, a5: u8) -> u64 {
    let v0: &struct_0;  // [sp-0x228]
    let v1: u64;  // [sp-0x220]
    let v2: u64;  // [sp-0x218]
    let v3: u64;  // [sp-0x210]
    let v4: void*;  // [sp-0x208]
    let v5: u128;  // [sp-0x1f8]
    let v6: u64;  // [sp-0x1e8]
    let v7: u128;  // [sp-0x1d8]
    let v8: u64;  // [sp-0x1c8]
    let v9: u64;  // [sp-0x1b8]
    let v10: u64;  // [bp-0x1a8]
    let v11: u128;  // [bp-0x1a0]
    let v12: u128;  // [bp-0x198]
    let v13: u8;  // [bp-0x190]
    let v14: u128;  // [sp-0x188]
    let v15: u64;  // [sp-0x178]
    let v16: u128;  // [sp-0x168]
    let v17: u64;  // [sp-0x158]
    let v18: u8;  // [bp-0x148]
    let v19: u64;  // [sp-0x140]
    let v20: &&struct_3;  // [bp-0x138], Other Possible Types: u8
    let v21: u64;  // [sp-0x130]
    let v22: void*;  // [bp-0x128], Other Possible Types: u8
    let v23: i8;  // [bp-0x118]
    let v24: &u8;  // [sp-0x108]
    let v25: u64;  // [sp-0x100], Other Possible Types: &struct_2
    let v26: u64;  // [sp-0xf8], Other Possible Types: struct8, Option<struct8>, struct16
    let v27: u128;  // [bp-0xe8]
    let v28: u8;  // [bp-0xe0]
    let v29: u128;  // [bp-0xd8]
    let v30: u8;  // [bp-0xd0]
    let v31: u128;  // [sp-0xc8]
    let v32: u8;  // [bp-0xc0]
    let v33: u8;  // [bp-0x48]
    let v35: u8;  // r13b
    let v36: u64;  // rsi
    let v37: u64;  // rdx
    let v38: u64;  // rax
    let v39: u128;  // xmm0
    let v40: u128;  // xmm1
    let v41: u128;  // xmm2
    let v42: u64;  // rax
    let v43: u128;  // xmm0
    let v44: u128;  // xmm1
    let v46: u32;  // eax
    let v47: u128;  // xmm0
    let v48: u128;  // xmm1
    let v49: u128;  // xmm2
    let v50: &struct_2;  // rdx
    let v51: u64;  // rax

    v6 = *(&a2->field_10 as &i64);
    v5 = a2->field_0;
    v17 = *((&a2->field_18 as &char + 8) as &i64);
    v16 = *(&(&a2->padding_14)[1] as &i128);
    v8 = a2->field_30;
    v7 = *(&a2->field_28 as &i128);
    v35 = *((&a2->field_30 as &char + 8) as &i8);
    v36 = *((&v5 as &char + 8) as &i64);
    v37 = v6;
    if (!a3->field_41 & std::path::Path::is_symlink(*((&v5 as &char + 8) as &i64), *(&a2->field_10 as &i64)) as i8) {
        uu_cp::copy_link(a0, v36, v37, *((&v7 as &char + 8) as &i64), v8, a4);
        return;
    } else if !(std::path::Path::is_dir(v36, v37) as i8) || !(!uu_cp::copydir::ends_with_slash_dot(&v5) as i8) || !((v26 = std::fs::metadata(*((&v7 as &char + 8) as &i64), v8), v26 == 2)) {
        if std::path::Path::is_dir(*((&v5 as &char + 8) as &i64), v6) as i8 {
            return;
        }
        if a5 {
            v4 = 0;
            v3 = v3;
            v2 = v2;
            v1 = a4;
            v0 = a3;
            uu_cp::copy_file();
            if *(&v18 as &i32) == 13 {
                return;
            }
            v43 = *(&v18 as &i128);
            v44 = *(&v20 as &i128);
            v31 = v23;
            v29 = *(&v22 as &i128);
            v27 = v44;
            v26 = v43;
            if std::path::Path::is_symlink(*((&v5 as &char + 8) as &i64), v6) as i8 {
                return;
            }
            v38 = v26;
            v10 = *((&v26 as &char + 8) as &i128);
            v12 = *((&v27 as &char + 8) as &i128);
            v14 = *((&v29 as &char + 8) as &i128);
            v15 = *((&v31 as &char + 8) as &i64);
            if v38 != 13 {
                *((&a0->field_18 as &char + 8) as &u64) = v15;
                *((&a0->field_10 as &char + 8) as &u128) = v41;
                *((&a0->field_8 as &char + 8) as &u128) = v40;
                (&a0->field_0)[1] = v39;
                a0->field_0 = v38;
                return;
            }
            return;
        }
        v4 = 0;
        v3 = v3;
        v2 = v2;
        v1 = a4;
        v0 = a3;
        uu_cp::copy_file();
        v42 = v26;
        if v42 == 3 {
            if !(v42 == 13) {
                goto LABEL_50e459;
            }
            v46 = std::io::error::Error::kind(v29 as i64) as i32;
            v10 = 1;
            v11 = *((&v16 as &char + 8) as &i128);
            v13 = 1;
            v24 = &v10;
            v25 = <os_display::Quoted as core::fmt::Display>::fmt;
            v18 = "cannot open ";
            v19 = 2;
            v22 = 0;
            v20 = &v24;
            v21 = 1;
            core::option::Option<T>::map_or_else();
            v9 = uucore::mods::error::UIoError::new(v46, &v33);
            uucore::mods::error::set_exit_code(v50->field_60());
            v24 = uucore::util_name();
            v25 = v50;
            eprintln!("{}: {}", &v24, &v9);
            match (v51) {
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
        } else if !(v42 == 13) {
            goto LABEL_50e459;
        }
        return;
    } else {
        if !v35 {
            v26 = uu_cp::copydir::build_dir(a3->field_30, *((&a3->field_30 as &char + 2) as &i8), &v7, 0);
            v38 = v26;
            if v38 != 13 {
                *((&a0->field_18 as &char + 8) as &i64) = *(&v32 as &i64);
                v39 = v26;
                v40 = *(&v28 as &i128);
                v41 = *(&v30 as &i128);
                *((&a0->field_10 as &char + 8) as &u128) = v41;
                *((&a0->field_8 as &char + 8) as &u128) = v40;
                (&a0->field_0)[1] = v39;
                a0->field_0 = v38;
                return;
            }
            if a3->field_48 {
                uu_cp::context_for(&v18, *((&v16 as &char + 8) as &i64), v17, *((&v7 as &char + 8) as &i64), v8);
                println!("{}", &v18);
            }
            a0->field_0 = 13;
        } else {
            v26 = <uu_cp::Error as core::convert::From<&str>>::from("cannot overwrite non-directory with directory");
LABEL_50e459:
            v47 = v26;
            v48 = v27;
            v49 = v29;
            a0->field_18 = v31;
            a0->field_10 = v49;
            a0->field_8 = v48;
            a0->field_0 = v47;
        }
        return;
    }
}
