fn uu_tac::tac(a0: u32, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: i192;  // [sp-0x210], Other Possible Types: struct24, struct32
    let v1: i64;  // [sp-0x200]
    let v2: i8;  // [bp-0x1f8]
    let v3: i8;  // [bp-0x1f0]
    let v4: i64;  // [sp-0x1e8]
    let v5: i8;  // [bp-0x1e0]
    let v6: i64;  // [sp-0x1d8], Other Possible Types: struct24
    let v7: i64;  // [sp-0x1d0]
    let v8: i64;  // [sp-0x1c8]
    let v9: i64;  // [sp-0x1b0]
    let v10: i64;  // [sp-0x1a8]
    let v11: i64;  // [sp-0x1a0]
    let v12: i64;  // [sp-0x198]
    let v13: Option<struct16>;  // [sp-0x190], Other Possible Types: i64
    let v14: i64;  // [sp-0x188]
    let v15: i8;  // [bp-0x180]
    let v16: i64;  // [sp-0x178]
    let v17: i64;  // [sp-0x170]
    let v18: i128;  // [sp-0x168]
    let v19: i64;  // [sp-0x158]
    let v20: i64;  // [sp-0x148]
    let v21: i64;  // [sp-0x140]
    let v22: i64;  // [sp-0x138], Other Possible Types: struct16, Result<struct176, struct16>
    let v23: i128;  // [bp-0x130]
    let v24: i64;  // [sp-0x128]
    let v25: i64;  // [sp-0x120]
    let v26: i128;  // [bp-0x88]
    let v27: i128;  // [sp-0x78]
    let v28: struct16;  // [bp-0x58]
    let v29: i192;  // [sp-0x48]
    let v31: i128;  // xmm0
    let v32: i256;  // ymm0
    let v33: i256;  // ymm0
    let v34: i64;  // rax
    let v35: i64;  // rax
    let v36: i64;  // r14
    let v37: i64;  // r12
    let v38: i64;  // rbx
    let v39: i64;  // rbp
    let v40: i64;  // r13
    let v41: i64;  // r13
    let v42: i128;  // xmm0
    let v43: i64;  // rdx
    let v44: i128;  // xmm0
    let v45: i128;  // xmm0
    let v46: i64;  // r13
    let v47: i64;  // rbp
    let v48: i128;  // xmm0
    let v49: i64;  // rbp
    let v50: i128;  // xmm0
    let v51: i128;  // xmm0
    let v52: i128;  // xmm0
    let v53: i64;  // r13
    let v54: i64;  // rax

    if !a3 {
        v21 = a5;
        v26 = 0;
    } else {
        v0 = regex::regex::bytes::Regex::new(a4, a5, a3, a4, a5);
        if !v0 {
            v25 = *((&v0 as &char + 24) as &i64);
            v23 = *((&v0 as &char + 8) as &i128);
            v22 = 0x8000000000000000;
            v34 = alloc::boxed::Box<T>::new(&v22);
            return v34;
        }
        v21 = a5;
        v31 = v0;
        v33 = v32 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v31;
        v27 = *((&v0 as &char + 16) as &i128);
        v26 = v31;
    }
    v28 = struct16 {
        field_0: a0
        field_8: a1 * 16 + a0
    };
    v35 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v28);
    if !v35 {
        return 0;
    }
    v36 = &g_46d542;
    v37 = &v3;
    v38 = &g_6c9130;
    do {
        v39 = *(v35 as &i64);
        v40 = *((v35 + 8) as &i64);
        if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v39, v40, v36, 1) as i8 {
            uu_tac::try_mmap_stdin(v37);
            if v3 {
                v41 = v5;
                v4 = v4;
                goto LABEL_59fb69;
            } else {
                v6 = 0;
                v7 = 1;
                v8 = 0;
                v11 = std::io::stdio::stdin();
                if <std::io::stdio::Stdin as std::io::Read>::read_to_end(&v11, &v6, v43) != 1 {
                    v45 = v6;
                    v33 = v33 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v45;
                    v18 = v45;
                    v46 = v8;
                    v19 = v46;
                    v47 = *((&v18 as &char + 8) as &i64);
                    goto LABEL_59ff8a;
                } else {
                    v0 = <T as alloc::slice::hack::ConvertVec>::to_vec("stdin");
                    v24 = v0.field_16;
                    v44 = v0;
                    v33 = v33 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v44;
                    v22 = v44;
                    v25 = v43;
                    v9 = alloc::boxed::Box<T>::new(&v22);
                    v10 = v38;
                    uucore::mods::error::set_exit_code();
                    v13 = uucore::util_name();
                    v14 = v43;
                    eprintln!("{:?}: {:?}", &v13, &v9);
                    v22 = v22;
                }
            }
        } else {
            if std::path::Path::is_dir(v39, v40) as i8 {
                v0 = <T as alloc::slice::hack::ConvertVec>::to_vec(v39, v40);
                v25 = v0.field_16;
                v42 = v0;
                v33 = v33 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v42;
                v23 = v42;
                v22 = 9223372036854775809;
                v3 = alloc::boxed::Box<T>::new(&v22);
                v4 = v38;
                uucore::mods::error::set_exit_code();
                v6 = uucore::util_name();
                v7 = v43;
                eprintln!("{:?}: {:?}", &v6, v37);
                v22 = v22;
                continue;
            }
            v22 = std::fs::metadata(v39, v40);
            if v22 == 2 {
                v0 = <T as alloc::slice::hack::ConvertVec>::to_vec(v39, v40);
                v25 = v0.field_16;
                v48 = v0;
                v33 = v33 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v48;
                v23 = v48;
                v22 = 9223372036854775810;
                v3 = alloc::boxed::Box<T>::new(&v22);
                v4 = v38;
                uucore::mods::error::set_exit_code();
                v6 = uucore::util_name();
                v7 = v43;
                eprintln!("{:?}: {:?}", &v6, v37);
                v22 = v22;
                continue;
            }
            v13 = uu_tac::try_mmap_path(v39, v40);
            if !v13 {
                std::fs::read(v37, v39, v40);
                if v3 != 0x8000000000000000 {
                    v50 = v3;
                    v33 = v33 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v50;
                    v18 = v50;
                    v46 = v5;
                    v19 = v46;
                    v47 = *((&v18 as &char + 8) as &i64);
                } else {
                    v20 = v4;
                    v0 = 0;
                    v0.field_8 = vvar_208{reg 56};
                    v1 = v40;
                    v2 = 1;
                    v29 = format!("{:?}", &v0);
                    v51 = v29;
                    *(&v6.field_0 as &struct24) = struct24 {
                        field_0: v51
                        field_16: *((&v29 as &char + 16) as &i64)
                    };
                    v0 = <alloc::string::String as core::clone::Clone>::clone(&v6);
                    v38 = &g_6c9130;
                    v24 = v0.field_16;
                    v52 = v0;
                    v33 = v33 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v51 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v52;
                    v22 = v52;
                    v25 = v20;
                    v11 = alloc::boxed::Box<T>::new(&v22);
                    v12 = &g_6c9130;
                    uucore::mods::error::set_exit_code();
                    v9 = uucore::util_name();
                    v10 = v43;
                    eprintln!("{:?}: {:?}", &v9, &v11);
                    v22 = v22;
                    continue;
                }
LABEL_59ff8a:
LABEL_59ff8d:
                v54 = (!v26 ? uu_tac::buffer_tac(v49, v53, a2, a4, v21) : uu_tac::buffer_tac_regex(v49, v53, v26, *((&v26 as &char + 8) as &i64), a2));
                if v23 {
                    v22 = struct16 {
                        field_0: 9223372036854775812
                        field_8: v55
                    };
                    v34 = alloc::boxed::Box<T>::new(&v22);
                    return v34;
                }
                v37 = &v3;
                v36 = &g_46d542;
                v22 = v22;
            } else {
                v41 = v15;
                v4 = v14;
LABEL_59fb69:
                v49 = v4;
                v16 = v49;
                v17 = v41;
                goto LABEL_59ff8d;
            }
        }
    } while ((v22 = v22, v35 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v28), v35));
}
