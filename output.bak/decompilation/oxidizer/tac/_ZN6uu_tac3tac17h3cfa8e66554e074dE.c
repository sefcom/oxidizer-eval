fn uu_tac::tac(a0: u32, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: i192;  // [sp-0x210], Other Possible Types: struct24, struct32
    let v1: i64;  // [sp-0x208]
    let v2: i64;  // [sp-0x200]
    let v3: i8;  // [bp-0x1f8]
    let v4: i8;  // [bp-0x1f0]
    let v5: i64;  // [sp-0x1e8]
    let v6: i8;  // [bp-0x1e0]
    let v7: i64;  // [sp-0x1d8], Other Possible Types: struct24
    let v8: i64;  // [sp-0x1d0]
    let v9: i64;  // [sp-0x1c8]
    let v10: i64;  // [sp-0x1b0]
    let v11: i64;  // [sp-0x1a8]
    let v12: i64;  // [sp-0x1a0]
    let v13: i64;  // [sp-0x198]
    let v14: i64;  // [sp-0x190], Other Possible Types: Option<struct16>
    let v15: i64;  // [sp-0x188]
    let v16: i64;  // [bp-0x180]
    let v17: i64;  // [sp-0x178]
    let v18: i64;  // [sp-0x170]
    let v19: i128;  // [sp-0x168]
    let v20: i64;  // [sp-0x158]
    let v21: i64;  // [sp-0x148]
    let v22: i64;  // [sp-0x140]
    let v23: i64;  // [sp-0x138], Other Possible Types: struct16
    let v24: i128;  // [bp-0x130]
    let v25: i64;  // [sp-0x128]
    let v26: i64;  // [sp-0x120]
    let v27: i64;  // [sp-0x118]
    let v28: i64;  // [bp-0x88]
    let v29: i128;  // [sp-0x78]
    let v30: struct16;  // [bp-0x58]
    let v31: i8;  // [bp-0x48]
    let v34: i128;  // xmm0
    let v35: i256;  // ymm0
    let v36: i256;  // ymm0
    let v37: i64;  // rax
    let v38: i64;  // rax
    let v39: i64;  // r14
    let v40: i64;  // r12
    let v41: i64;  // rbx
    let v42: i64;  // rbp
    let v43: i64;  // r13
    let v44: i64;  // r13
    let v45: i128;  // xmm0
    let v46: i128;  // xmm0
    let v47: i64;  // rdx
    let v48: i128;  // xmm0
    let v49: i256;  // ymm0
    let v50: i64;  // r13
    let v51: i64;  // rbp
    let v52: i128;  // xmm0
    let v53: i64;  // rbp
    let v54: i128;  // xmm0
    let v55: i128;  // xmm0
    let v56: i128;  // xmm0
    let v57: i64;  // r13
    let v58: i64;  // rax

    if !a3 {
        v22 = a5;
        v28 = 0;
    } else {
        v0 = regex::regex::bytes::Regex::new(a4, a5);
        if !v0 {
            v26 = *((&v0 as &char + 24) as &i64);
            v24 = *((&v0 as &char + 8) as &i128);
            v23 = 0x8000000000000000;
            v37 = alloc::boxed::Box<T>::new(&v23);
            return v37;
        }
        v22 = a5;
        v34 = v0;
        v36 = v35 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v34;
        v29 = *((&v0 as &char + 16) as &i128);
        v28 = v34;
    }
    v30 = struct16 {
        field_0: a0
        field_8: a1 * 16 + a0
    };
    v38 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v30);
    if !v38 {
        return 0;
    }
    v39 = &g_46d2ca;
    v40 = &v4;
    v41 = &g_6c8b70;
    do {
        v42 = *(v38 as &i64);
        v43 = *((v38 + 8) as &i64);
        if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v42, v43, v39, 1) as i8 {
            uu_tac::try_mmap_stdin(v40);
            if v4 {
                v44 = v6;
                v5 = v5;
                goto LABEL_59fff9;
            } else {
                v7 = 0;
                v8 = 1;
                v9 = 0;
                v12 = std::io::stdio::stdin();
                if <std::io::stdio::Stdin as std::io::Read>::read_to_end(&v12, &v7) != 1 {
                    v48 = v7;
                    v49 = v36 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v48;
                    v19 = v48;
                    v50 = v9;
                    v20 = v50;
                    v51 = *((&v19 as &char + 8) as &i64);
                    goto LABEL_5a041a;
                } else {
                    v0 = <T as alloc::slice::hack::ConvertVec>::to_vec("stdin");
                    v25 = v2;
                    v46 = v0;
                    v36 = v36 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v46;
                    v23 = v46;
                    v26 = v47;
                    v10 = alloc::boxed::Box<T>::new(&v23);
                    v11 = v41;
                    uucore::mods::error::set_exit_code(1);
                    v14 = uucore::util_name();
                    v15 = v47;
                    eprintln!("{:?}: {:?}", &v14, &v10);
                    v23 = v23;
                    v2 = v2;
                }
            }
        } else {
            if std::path::Path::is_dir(v42, v43) as i8 {
                v0 = <T as alloc::slice::hack::ConvertVec>::to_vec(v42, v43);
                v26 = v2;
                v45 = v0;
                v36 = v36 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v45;
                v24 = v45;
                v23 = 9223372036854775809;
                v4 = alloc::boxed::Box<T>::new(&v23);
                v5 = v41;
                uucore::mods::error::set_exit_code(1);
                v7 = uucore::util_name();
                v8 = v47;
                eprintln!("{:?}: {:?}", &v7, v40);
                v23 = v23;
                v2 = v2;
                continue;
            }
            v23 = std::fs::metadata(v42, v43);
            if v23 == 2 {
                v0 = <T as alloc::slice::hack::ConvertVec>::to_vec(v42, v43);
                v26 = v2;
                v52 = v0;
                v36 = v36 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v52;
                v24 = v52;
                v23 = 9223372036854775810;
                v4 = alloc::boxed::Box<T>::new(&v23);
                v5 = v41;
                uucore::mods::error::set_exit_code(1);
                v7 = uucore::util_name();
                v8 = v47;
                eprintln!("{:?}: {:?}", &v7, v40);
                v23 = v23;
                v2 = v2;
                continue;
            }
            v14 = uu_tac::try_mmap_path(v42, v43);
            if !v14 {
                std::fs::read(v40, v42, v43);
                if v4 != 0x8000000000000000 {
                    v54 = v4;
                    v49 = v36 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v54;
                    v19 = v54;
                    v50 = v6;
                    v20 = v50;
                    v51 = *((&v19 as &char + 8) as &i64);
                } else {
                    v21 = v5;
                    v0 = 0;
                    v1 = v42;
                    v2 = v43;
                    v3 = 1;
                    v7 = &v0;
                    v8 = <os_display::Quoted as core::fmt::Display>::fmt;
                    v23 = &g_4636b0;
                    v24 = 1;
                    v27 = 0;
                    v25 = &v7;
                    v26 = 1;
                    core::option::Option<T>::map_or_else();
                    v55 = v31;
                    *(&v7.field_0 as &struct24) = struct24 {
                        field_0: v55
                        field_16: v32
                    };
                    v0 = <alloc::string::String as core::clone::Clone>::clone(&v7);
                    v41 = &g_6c8b70;
                    v25 = v2;
                    v56 = v0;
                    v36 = v36 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v55 | 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v56;
                    v23 = v56;
                    v26 = v21;
                    v12 = alloc::boxed::Box<T>::new(&v23);
                    v13 = &g_6c8b70;
                    uucore::mods::error::set_exit_code(1);
                    v10 = uucore::util_name();
                    v11 = v47;
                    eprintln!("{:?}: {:?}", &v10, &v12);
                    v23 = v23;
                    v2 = v2;
                    continue;
                }
LABEL_5a041a:
LABEL_5a041d:
                v58 = (!v28 ? uu_tac::buffer_tac(v53, v57, a2, a4, v22) : uu_tac::buffer_tac_regex(v53, v57, v28, *((&v28 as &char + 8) as &i64), a2));
                if v24 {
                    v23 = struct16 {
                        field_0: 9223372036854775812
                        field_8: v59
                    };
                    v37 = alloc::boxed::Box<T>::new(&v23);
                    return v37;
                }
                v40 = &v4;
                v39 = &g_46d2ca;
                v23 = v23;
                v2 = v2;
            } else {
                v44 = v16;
                v5 = v15;
LABEL_59fff9:
                v53 = v5;
                v17 = v53;
                v18 = v44;
                goto LABEL_5a041d;
            }
        }
    } while ((v2 = v2, v23 = v23, v38 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v30), v38));
}
