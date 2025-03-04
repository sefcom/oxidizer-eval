fn uu_tac::tac(a0: u32, a1: u32, a2: u32, a3: u32, a4: u32, a5: u32) -> u64 {
    let v0: struct24;  // [sp-0x210], Other Possible Types: unsigned long, struct32
    let v1: i64;  // [sp-0x208]
    let v2: i64;  // [sp-0x200]
    let v3: i8;  // [bp-0x1f8]
    let v4: i64;  // [bp-0x1f0], Other Possible Types: char
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
    let v16: i64;  // [sp-0x178]
    let v17: i64;  // [sp-0x170]
    let v18: iNone;  // [sp-0x168]
    let v19: i64;  // [sp-0x158]
    let v20: i64;  // [sp-0x148]
    let v21: i64;  // [sp-0x140]
    let v22: i64;  // [sp-0x138], Other Possible Types: int, Result<struct176, struct8>
    let v23: iNone;  // [bp-0x130], Other Possible Types: unsigned long
    let v24: i64;  // [sp-0x128]
    let v25: i64;  // [sp-0x120]
    let v26: iNone;  // [sp-0x88], Other Possible Types: unsigned long
    let v28: iNone;  // [sp-0x78]
    let v29: struct16;  // [bp-0x58]
    let v30: String;  // [sp-0x48]
    let v32: iNone;  // xmm0
    let v33: iNone;  // ymm0
    let v34: i64;  // rax
    let v35: i64;  // rbx
    let v36: i64;  // r14
    let v37: i64;  // r12
    let v38: i64;  // rbx
    let v39: i64;  // rbp
    let v40: i64;  // r13
    let v41: i64;  // rbp
    let v42: i64;  // r13
    let v43: iNone;  // xmm0
    let v44: iNone;  // xmm0
    let v45: iNone;  // ymm0
    let v46: iNone;  // xmm0
    let v47: iNone;  // xmm0
    let v48: i64;  // rdx
    let v49: iNone;  // xmm0
    let v50: iNone;  // xmm0
    let v51: iNone;  // xmm0
    let v52: i64;  // rax

    if !a3 {
        v21 = a5;
        *(&v26 as &i64) = 0;
    } else {
        v0 = regex::regex::bytes::Regex::new(a4, a5);
        if !v0 {
            v25 = v0.field_24;
            *(&v23 as &u128) = v0.field_8;
            v22 = 0x8000000000000000;
            v35 = alloc::boxed::Box<T>::new(&v22);
            return v35;
        }
        v21 = a5;
        v32 = *(&v0.field_0 as &i128);
        v45 = v33 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v32 as u256;
        v28 = *((&v0.field_8 as &char + 8) as &i128);
        v26 = v32;
    }
    v29 = struct16 {
        field_0: a0
        field_8: a1 * 16 + a0
    };
    v34 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v29);
    if !v34 {
        return 0;
    }
    v36 = &g_46d2ca;
    v37 = &v4;
    v38 = &g_6c8b70;
    do {
        v39 = *(v34 as &i64);
        v40 = *((v34 + 8) as &i64);
        if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v39, v40, v36, 1) as i8 {
            uu_tac::try_mmap_stdin(v37);
            if v4 {
                v41 = v5;
                v42 = *(&v6 as &i64);
                goto LABEL_59fff9;
            } else {
                v7 = 0;
                v8 = 1;
                v9 = 0;
                v12 = std::io::stdio::stdin();
                if <std::io::stdio::Stdin as std::io::Read>::read_to_end(&v12, &v7) != 1 {
                    v44 = *(&v7 as &i128);
                    v45 = v45 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v44 as u256;
                    v18 = v44;
                    v42 = v9;
                    v19 = v42;
                    v41 = (&v18)[8] as i64;
                    goto LABEL_5a041a;
                } else {
                    v0 = <T as alloc::slice::hack::ConvertVec>::to_vec("stdin");
                    v24 = v2;
                    v47 = *(&v0.field_0 as &i128);
                    v45 = v45 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v47 as u256;
                    v22 = v47;
                    v25 = v48;
                    v10 = alloc::boxed::Box<T>::new(&v22);
                    v11 = v38;
                    uucore::mods::error::set_exit_code(1);
                    v14 = uucore::util_name();
                    v15 = v48;
                    eprintln!("{}: {}", &v14, &v10);
                }
            }
        } else {
            if std::path::Path::is_dir(v39, v40) as i8 {
                v0 = <T as alloc::slice::hack::ConvertVec>::to_vec(v39, v40);
                v25 = v2;
                v43 = *(&v0.field_0 as &i128);
                v45 = v45 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v43 as u256;
                v23 = v43;
                v22 = 9223372036854775809;
                v4 = alloc::boxed::Box<T>::new(&v22);
                v5 = v38;
                uucore::mods::error::set_exit_code(1);
                v7 = uucore::util_name();
                v8 = v48;
                eprintln!("{}: {}", &v7, v37);
                continue;
            }
            v22 = std::fs::metadata(v39, v40);
            if v22 == 2 {
                v0 = <T as alloc::slice::hack::ConvertVec>::to_vec(v39, v40);
                v25 = v2;
                v46 = *(&v0.field_0 as &i128);
                v45 = v45 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v46 as u256;
                v23 = v46;
                v22 = 9223372036854775810;
                v4 = alloc::boxed::Box<T>::new(&v22);
                v5 = v38;
                uucore::mods::error::set_exit_code(1);
                v7 = uucore::util_name();
                v8 = v48;
                eprintln!("{}: {}", &v7, v37);
                continue;
            }
            v14 = uu_tac::try_mmap_path(v39, v40);
            if !v14 {
                std::fs::read(v37, v39, v40);
                if v4 != 0x8000000000000000 {
                    v49 = *(&v4 as &i128);
                    v45 = v45 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v49 as u256;
                    v18 = v49;
                    v42 = *(&v6 as &i64);
                    v19 = v42;
                    v41 = (&v18)[8] as i64;
                } else {
                    v20 = v5;
                    v0 = 0;
                    v1 = v39;
                    v2 = v40;
                    *(&v3 as &i8) = 1;
                    v30 = format!("{}", &v0);
                    v50 = *(&v30.ptr as &i128);
                    *(&v7.field_0 as &struct24) = struct24 {
                        field_0: v50
                        field_16: v30.len
                    };
                    v0 = <alloc::string::String as core::clone::Clone>::clone(&v7);
                    v38 = &g_6c8b70;
                    v24 = v2;
                    v51 = *(&v0.field_0 as &i128);
                    v45 = (v45 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v50 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v51 as u256;
                    v22 = v51;
                    v25 = v20;
                    v12 = alloc::boxed::Box<T>::new(&v22);
                    v13 = &g_6c8b70;
                    uucore::mods::error::set_exit_code(1);
                    v10 = uucore::util_name();
                    v11 = v48;
                    eprintln!("{}: {}", &v10, &v12);
                    continue;
                }
LABEL_5a041a:
LABEL_5a041d:
                v52 = (!v26 as i64 ? uu_tac::buffer_tac(v41, v42, a2 as u64, a4, v21) : uu_tac::buffer_tac_regex(v41, v42, v26 as i64, (&v26)[8] as i64, a2 as u64));
                if v52 {
                    v23 = v52;
                    v22 = 9223372036854775812;
                    v35 = alloc::boxed::Box<T>::new(&v22);
                    return v35;
                }
                v37 = &v4;
                v36 = &g_46d2ca;
            } else {
                v41 = v15;
                v42 = *((&v14 as &char + 16) as &i64);
LABEL_59fff9:
                v16 = v41;
                v17 = v42;
                goto LABEL_5a041d;
            }
        }
    } while ((v34 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v29), v34));
}
