fn uu_tac::tac(a0: u32, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: i192;  // [bp-0x210], Other Possible Types: struct24
    let v1: i8;  // [bp-0x208]
    let v2: i64;  // [bp-0x200]
    let v3: i8;  // [bp-0x1f8]
    let v4: i64;  // [bp-0x1f0]
    let v5: i64;  // [sp-0x1e8]
    let v6: i8;  // [bp-0x1e0]
    let v7: i64;  // [sp-0x1d8], Other Possible Types: struct24
    let v8: i64;  // [sp-0x1d0]
    let v9: i64;  // [sp-0x1c8]
    let v10: i64;  // [sp-0x1b0]
    let v11: i64;  // [sp-0x1a8]
    let v12: i64;  // [sp-0x1a0]
    let v13: i64;  // [sp-0x198]
    let v14: Option<struct16>;  // [sp-0x190], Other Possible Types: i64
    let v15: i64;  // [sp-0x188]
    let v16: i8;  // [bp-0x180]
    let v17: i64;  // [sp-0x178]
    let v18: i64;  // [sp-0x170]
    let v19: i128;  // [sp-0x168]
    let v20: i64;  // [sp-0x158]
    let v21: i64;  // [sp-0x148]
    let v22: i64;  // [sp-0x140]
    let v23: i64;  // [sp-0x138], Other Possible Types: struct16, Result<struct176, struct16>
    let v24: i128;  // [bp-0x130]
    let v25: i64;  // [sp-0x128]
    let v26: i64;  // [sp-0x120]
    let v27: i64;  // [bp-0x88]
    let v28: i128;  // [sp-0x78]
    let v29: struct16;  // [bp-0x58]
    let v30: i192;  // [sp-0x48]
    let v32: i128;  // xmm0
    let v33: i256;  // ymm0
    let v34: i256;  // ymm0
    let v35: i64;  // rax
    let v36: i64;  // rax
    let v37: i64;  // r14
    let v38: i64;  // r12
    let v39: i64;  // rbx
    let v40: i64;  // rbp
    let v41: i64;  // r13
    let v42: i64;  // r13
    let v43: i128;  // xmm0
    let v44: i64;  // rdx
    let v45: i128;  // xmm0
    let v46: i128;  // xmm0
    let v47: i64;  // r13
    let v48: i64;  // rbp
    let v49: i128;  // xmm0
    let v50: i64;  // rbp
    let v51: i128;  // xmm0
    let v52: i128;  // xmm0
    let v53: i128;  // xmm0
    let v54: i64;  // r13
    let v55: i64;  // rax

    if !a3 {
        v22 = a5;
        v27 = 0;
    } else {
        regex::regex::bytes::Regex::new(&v0, a4, a5, a3, a4, a5);
        if !v0 {
            v26 = v3;
            v24 = v1;
            v23 = 0x8000000000000000;
            v35 = alloc::boxed::Box<T>::new(&v23);
            return v35;
        }
        v22 = a5;
        v32 = v0;
        v34 = v33 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v32;
        v28 = v2;
        v27 = v32;
    }
    v29 = struct16 {
        field_0: a0
        field_8: a1 * 16 + a0
    };
    v36 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v29);
    if !v36 {
        return 0;
    }
    v37 = &g_46d542;
    v38 = &v4;
    v39 = &g_6c9130;
    do {
        v40 = *(v36 as &i64);
        v41 = *((v36 + 8) as &i64);
        if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v40, v41, v37, 1) as i8 {
            uu_tac::try_mmap_stdin(v38);
            if v4 {
                v42 = v6;
                v5 = v5;
                goto LABEL_59fb69;
            } else {
                v7 = 0;
                v8 = 1;
                v9 = 0;
                v12 = std::io::stdio::stdin();
                if <std::io::stdio::Stdin as std::io::Read>::read_to_end(&v12, &v7, v44) != 1 {
                    v46 = v7;
                    v34 = v34 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v46;
                    v19 = v46;
                    v47 = v9;
                    v20 = v47;
                    v48 = *((&v19 as &char + 8) as &i64);
                    goto LABEL_59ff8a;
                } else {
                    v0 = <T as alloc::slice::hack::ConvertVec>::to_vec("stdin");
                    v25 = v0.field_16;
                    v45 = v0;
                    v34 = v34 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v45;
                    v23 = v45;
                    v26 = v44;
                    v10 = alloc::boxed::Box<T>::new(&v23);
                    v11 = v39;
                    uucore::mods::error::set_exit_code();
                    v14 = uucore::util_name();
                    v15 = v44;
                    eprintln!("{:?}: {:?}", &v14, &v10);
                    v23 = v23;
                }
            }
        } else {
            if std::path::Path::is_dir(v40, v41) as i8 {
                v0 = <T as alloc::slice::hack::ConvertVec>::to_vec(v40, v41);
                v26 = v0.field_16;
                v43 = v0;
                v34 = v34 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v43;
                v24 = v43;
                v23 = 9223372036854775809;
                v4 = alloc::boxed::Box<T>::new(&v23);
                v5 = v39;
                uucore::mods::error::set_exit_code();
                v7 = uucore::util_name();
                v8 = v44;
                eprintln!("{:?}: {:?}", &v7, v38);
                v23 = v23;
                continue;
            }
            v23 = std::fs::metadata(v40, v41);
            if v23 == 2 {
                v0 = <T as alloc::slice::hack::ConvertVec>::to_vec(v40, v41);
                v26 = v0.field_16;
                v49 = v0;
                v34 = v34 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v49;
                v24 = v49;
                v23 = 9223372036854775810;
                v4 = alloc::boxed::Box<T>::new(&v23);
                v5 = v39;
                uucore::mods::error::set_exit_code();
                v7 = uucore::util_name();
                v8 = v44;
                eprintln!("{:?}: {:?}", &v7, v38);
                v23 = v23;
                continue;
            }
            v14 = uu_tac::try_mmap_path(v40, v41);
            if !v14 {
                std::fs::read(v38, v40, v41);
                if v4 != 0x8000000000000000 {
                    v51 = v4;
                    v34 = v34 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v51;
                    v19 = v51;
                    v47 = v6;
                    v20 = v47;
                    v48 = *((&v19 as &char + 8) as &i64);
                } else {
                    v21 = v5;
                    v0 = 0;
                    v0.field_8 = vvar_208{reg 56};
                    v2 = v41;
                    v3 = 1;
                    v30 = format!("{:?}", &v0);
                    v52 = v30;
                    *(&v7.field_0 as &struct24) = struct24 {
                        field_0: v52
                        field_16: *((&v30 as &char + 16) as &i64)
                    };
                    v0 = <alloc::string::String as core::clone::Clone>::clone(&v7);
                    v39 = &g_6c9130;
                    v25 = v0.field_16;
                    v53 = v0;
                    v34 = v34 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v52 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v53;
                    v23 = v53;
                    v26 = v21;
                    v12 = alloc::boxed::Box<T>::new(&v23);
                    v13 = &g_6c9130;
                    uucore::mods::error::set_exit_code();
                    v10 = uucore::util_name();
                    v11 = v44;
                    eprintln!("{:?}: {:?}", &v10, &v12);
                    v23 = v23;
                    continue;
                }
LABEL_59ff8a:
LABEL_59ff8d:
                v55 = (!v27 ? uu_tac::buffer_tac(v50, v54, a2, a4, v22) : uu_tac::buffer_tac_regex(v50, v54, v27, *((&v27 as &char + 8) as &i64), a2));
                if v24 {
                    v23 = struct16 {
                        field_0: 9223372036854775812
                        field_8: v56
                    };
                    v35 = alloc::boxed::Box<T>::new(&v23);
                    return v35;
                }
                v38 = &v4;
                v37 = &g_46d542;
                v23 = v23;
            } else {
                v42 = v16;
                v5 = v15;
LABEL_59fb69:
                v50 = v5;
                v17 = v50;
                v18 = v42;
                goto LABEL_59ff8d;
            }
        }
    } while ((v23 = v23, v36 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v29), v36));
}
