fn uu_tac::tac(a0: i64, a1: i64, a2: i32, a3: i32, a4: i64, a5: i64) -> long long {
    let v0: Result<struct32, struct32>;  // [bp-0x210]
    let v1: struct24;  // [bp-0x210], Other Possible Types: alloc::string::String, void*, u64
    let v2: u64;  // [bp-0x210]
    let v3: u64;  // [bp-0x208]
    let v4: u64;  // [bp-0x200]
    let v5: u64;  // [bp-0x200]
    let v6: u8;  // [bp-0x1f8]
    let v7: u64;  // [bp-0x1f0]
    let v8: u64;  // [bp-0x1e8]
    let v9: u64;  // [bp-0x1e0]
    let v10: u64;  // [bp-0x1d8], Other Possible Types: void*
    let v11: u64;  // [bp-0x1d0]
    let v12: void*;  // [bp-0x1c8]
    let v13: u64;  // [bp-0x1b0]
    let v14: u64;  // [bp-0x1a8]
    let v15: u64;  // [bp-0x1a0]
    let v16: u64;  // [bp-0x198]
    let v17: u64;  // [bp-0x190]
    let v18: Result<(), Error>;  // [bp-0x190]
    let v19: u64;  // [bp-0x188]
    let v21: u64;  // [bp-0x178]
    let v22: u64;  // [bp-0x170]
    let v23: u128;  // [bp-0x168]
    let v24: u64;  // [bp-0x160]
    let v25: void*;  // [bp-0x158], Other Possible Types: u64
    let v26: u64;  // [bp-0x148]
    let v27: u64;  // [bp-0x140]
    let v28: u64;  // [bp-0x138]
    let v29: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0x138]
    let v30: u128;  // [bp-0x138]
    let v31: u128;  // [bp-0x138]
    let v32: u64;  // [bp-0x130]
    let v33: u128;  // [bp-0x130]
    let v34: u128;  // [bp-0x130]
    let v35: u64;  // [bp-0x130]
    let v36: u64;  // [bp-0x128]
    let v37: u64;  // [bp-0x120]
    let v38: u128;  // [bp-0x88], Other Possible Types: void*
    let v39: u64;  // [bp-0x80]
    let v40: u8;  // [bp-0x78]
    let v41: u128;  // [bp-0x58]
    let v42: alloc::string::String;  // [bp-0x48]
    let v44: i64;  // rax
    let v45: i64;  // r12
    let v46: u64;  // rbp
    let v47: u64;  // r13
    let v48: u64;  // rbp
    let v50: u64;  // rdx
    let v51: u8;  // r14b
    let v52: u64;  // r13, Other Possible Types: void*
    let v53: i64;  // rax
    let v55: core::result::Result<usize, std::io::error::Error>;  // rax:rdx
    let v56: u64;  // [bp-0x210]

    if a3 {
        v0 = regex::regex::bytes::Regex::new(a4, a5);
        match v0 {
            Err(_) => {
                v37 = v6;
                memcpy(&v32, &v0 as u8, 16);
                v28 = 0x8000000000000000;
                return alloc::boxed::Box<T>::new(&v28);
            },
            Ok(_) => {
                v27 = a5;
                memcpy(&v40, &v0, 16);
                v38 = v0 as i128 as u128;
            },
        }
    } else {
        v27 = a5;
        v38 = 0;
    }
    v41 = struct16 {
        field_0: a0
        field_8: a1 * 16 + a0
    };
    v44 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v41);
    if !v44 {
        return 0;
    }
    do {
        v46 = *(v44 as &i64);
        v47 = *((v44 + 8) as &i64);
        if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v46, v47, "-") as i8 {
            uu_tac::try_mmap_stdin(v45);
            if !v7 {
                v10 = 0;
                v11 = 1;
                v12 = 0;
                v15 = std::io::stdio::Stdin {
                    inner: std::io::stdio::stdin()
                };
                v55 = <std::io::stdio::Stdin as std::io::Read>::read_to_end(&v15, &v10);
                match v55 {
                    Err(_) => {
                        v1 = <T as alloc::slice::hack::ConvertVec>::to_vec("stdin");
                        v36 = v4;
                        v30 = *(&v1.field_0 as &i128) as u128;
                        v37 = *((&v55 as &char + 8) as &i64);
                        v13 = alloc::boxed::Box<T>::new(&v28);
                        v14 = &g_6c8b70;
                        uucore::mods::error::set_exit_code(1);
                        v17 = uucore::util_name();
                        v19 = v50;
                        eprintln!("{}: {}", &v17, &v13);
                        v1 = v2;
                        v4 = v5;
                        v28 = v31;
                        v32 = v35;
                    },
                    Ok(_) => {
                        v23 = *(&v10 as &i128) as u128;
                        v52 = 0;
                        v25 = 0;
                        v24 = v48;
                        goto LABEL_5a041d;
                    },
                }
            }
        } else {
            if std::path::Path::is_dir(v46, v47) {
                v1 = <T as alloc::slice::hack::ConvertVec>::to_vec(v46, v47);
                v37 = v4;
                v33 = *(&v1.field_0 as &i128);
                v28 = 9223372036854775809;
                v7 = alloc::boxed::Box<T>::new(&v28);
                v8 = &g_6c8b70;
                uucore::mods::error::set_exit_code(1);
                v10 = uucore::util_name();
                v11 = v50;
                eprintln!("{}: {}", &v10, v45);
                v1 = v2;
                v4 = v5;
                v28 = v31;
                v32 = v35;
                continue;
            }
            v29 = std::fs::metadata(v46, v47);
            if let Err(_) = v29 {
                v1 = <T as alloc::slice::hack::ConvertVec>::to_vec(v46, v47);
                v37 = v4;
                v34 = *(&v1.field_0 as &i128) as u128;
                v28 = 9223372036854775810;
                v7 = alloc::boxed::Box<T>::new(&v28);
                v8 = &g_6c8b70;
                uucore::mods::error::set_exit_code(1);
                v10 = uucore::util_name();
                v11 = v50;
                eprintln!("{}: {}", &v10, v45);
                v1 = v2;
                v4 = v5;
                v28 = v31;
                v32 = v35;
                continue;
            }
            v18 = uu_tac::try_mmap_path(v46, v47);
            match v18 {
                Err(_) => {
                    v21 = v48;
                    v22 = v52;
                    v51 = 1;
                    v24 = v48;
                    goto LABEL_5a041d;
                },
                Ok(_) => {
                    std::fs::read(v45, v46, v47);
                    if v7 == 0x8000000000000000 {
                        v26 = v8;
                        v1 = 0;
                        v3 = v46;
                        v4 = v47;
                        v6 = 1;
                        v42 = format!("{}", &v1);
                        v10 = alloc::string::String {
                            vec: alloc::vec::Vec<u8, alloc::alloc::Global> {
                                buf: alloc::raw_vec::RawVec<u8, alloc::alloc::Global> {
                                    cap: alloc::raw_vec::Cap {
                                        __0: *(&v42.vec.buf.cap as &i128)
                                    }
                                    ptr: core::ptr::unique::Unique<u8> {
                                        pointer: core::ptr::non_null::NonNull<u8> {
                                            pointer: <UNKNOWN>
                                        }
                                        _marker: core::marker::PhantomData<u8> { }
                                    }
                                    alloc: alloc::alloc::Global { }
                                }
                                len: v42.vec.len
                            }
                        };
                        v1 = <alloc::string::String as core::clone::Clone>::clone(&v10);
                        v36 = v4;
                        v31 = *(&v1.vec.buf.cap as &i128) as u128;
                        v37 = v26;
                        v15 = alloc::boxed::Box<T>::new(&v31 as u384);
                        v16 = &g_6c8b70;
                        uucore::mods::error::set_exit_code(1);
                        v13 = uucore::util_name();
                        v14 = v50;
                        eprintln!("{}: {}", &v13, &v15);
                        v1 = v2;
                        v4 = v5;
                        v28 = v31;
                        v32 = v35;
                        continue;
                    } else {
                        v23 = *(&v7 as &i128) as u128;
                        v52 = v9;
                        v25 = v52;
                        v24 = v48;
                        if let Err(_) = v18 {
                            v24 = v48;
                        }
                    }
LABEL_5a041d:
                    v48 = v24;
                    v53 = (!v38 ? uu_tac::buffer_tac(v48 as u32, v52 as u32, a2, a4, v27) : uu_tac::buffer_tac_regex(v48, v52, v38, v39, a2 as u8));
                    if v39 {
                        v32 = v39;
                        v28 = 9223372036854775812;
                        return alloc::boxed::Box<T>::new(&v28);
                    }
                    v1 = v56;
                },
            }
        }
    } while ((v32 = v32, v28 = v28, v4 = v4, v56 = v1, v44 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v41), v44));
    return 0;
}
