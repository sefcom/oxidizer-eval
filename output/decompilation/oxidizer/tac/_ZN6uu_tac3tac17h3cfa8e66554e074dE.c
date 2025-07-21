fn uu_tac::tac(a0: i64, a1: i64, a2: i32, a3: i32, a4: i64, a5: i64) -> long long {
    let v0: void*;  // [bp-0x210], Other Possible Types: alloc::string::String, struct32, struct24, u64
    let v1: u64;  // [bp-0x210]
    let v2: u64;  // [bp-0x208]
    let v3: u64;  // [bp-0x200]
    let v4: u64;  // [bp-0x200]
    let v5: u8;  // [bp-0x1f8]
    let v7: u64;  // [bp-0x1f0]
    let v8: u64;  // [bp-0x1e8]
    let v9: u64;  // [bp-0x1e0]
    let v10: alloc::string::String;  // [bp-0x1d8], Other Possible Types: struct24, u64
    let v11: u64;  // [bp-0x1d0]
    let v12: struct16;  // [bp-0x1b0], Other Possible Types: u64
    let v13: u64;  // [bp-0x1a8]
    let v14: std::io::stdio::Stdin;  // [bp-0x1a0], Other Possible Types: struct16
    let v15: u64;  // [bp-0x190]
    let v16: Result<(), Error>;  // [bp-0x190]
    let v17: u64;  // [bp-0x188]
    let v19: u64;  // [bp-0x178]
    let v20: u64;  // [bp-0x170]
    let v21: u128;  // [bp-0x168]
    let v22: u64;  // [bp-0x160]
    let v23: void*;  // [bp-0x158], Other Possible Types: u64
    let v24: u64;  // [bp-0x148]
    let v25: u64;  // [bp-0x140]
    let v26: struct16;  // [bp-0x138], Other Possible Types: u64
    let v27: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0x138]
    let v28: u128;  // [bp-0x138]
    let v29: u64;  // [bp-0x138]
    let v30: u64;  // [bp-0x130]
    let v31: u128;  // [bp-0x130]
    let v32: u128;  // [bp-0x130]
    let v33: u64;  // [bp-0x130]
    let v34: u64;  // [bp-0x128]
    let v35: u64;  // [bp-0x120]
    let v36: void*;  // [bp-0x88], Other Possible Types: u128
    let v37: u64;  // [bp-0x80]
    let v38: u128;  // [bp-0x78]
    let v39: struct16;  // [bp-0x58]
    let v40: alloc::string::String;  // [bp-0x48]
    let v42: i64;  // rax
    let v43: i64;  // r12
    let v44: u64;  // rbp
    let v45: u64;  // r13
    let v46: u64;  // rbp
    let v48: u64;  // rdx
    let v49: u8;  // r14b
    let v50: void*;  // r13, Other Possible Types: u64
    let v51: i64;  // rax
    let v53: core::result::Result<usize, std::io::error::Error>;  // rax:rdx
    let v54: u64;  // [bp-0x210]

    if a3 {
        v0 = regex::regex::bytes::Regex::new(a4, a5);
        if !v0.field_0 {
            v35 = v5;
            v30 = *(&v0.field_8 as &i128);
            v26 = 0x8000000000000000;
            return alloc::boxed::Box<T>::new(&v26);
        }
        v25 = a5;
        v38 = *(&v0.field_16 as &i128);
        v36 = *(&v0.field_0 as &i128);
    } else {
        v25 = a5;
        v36 = 0;
    }
    v39 = struct16 {
        field_0: a0
        field_8: a1 * 16 + a0
    };
    v42 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v39);
    if !v42 {
        return 0;
    }
    do {
        v44 = *(v42 as &i64);
        v45 = *((v42 + 8) as &i64);
        if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v44, v45, "-") as i8 {
            uu_tac::try_mmap_stdin(v43);
            if !v7 {
                v10 = struct24 {
                    field_0: 0
                    field_8: 1
                    field_16: 0
                };
                v14 = std::io::stdio::Stdin {
                    inner: std::io::stdio::stdin()
                };
                v53 = <std::io::stdio::Stdin as std::io::Read>::read_to_end(&v14, &v10);
                match v53 {
                    Err(_) => {
                        v0 = <T as alloc::slice::hack::ConvertVec>::to_vec("stdin");
                        v34 = v3;
                        v28 = *(&v0.field_0 as &i128) as u128;
                        v35 = *((&v53 as &char + 8) as &i64);
                        v12 = struct16 {
                            field_0: alloc::boxed::Box<T>::new(&v26)
                            field_8: &g_6c8b70
                        };
                        uucore::mods::error::set_exit_code(1);
                        v15 = uucore::util_name();
                        v17 = v48;
                        eprintln!("{}: {}", &v15, &v12);
                        v0 = v1;
                        v3 = v4;
                        v30 = v33;
                        v26 = v29;
                    },
                    Ok(_) => {
                        v21 = *(&v10.field_0 as &i128) as u128;
                        v50 = 0;
                        v23 = 0;
                        v22 = v46;
                        goto LABEL_5a041d;
                    },
                }
            }
        } else {
            if std::path::Path::is_dir(v44, v45) {
                v0 = <T as alloc::slice::hack::ConvertVec>::to_vec(v44, v45);
                v35 = v3;
                v31 = *(&v0.field_0 as &i128);
                v26 = 9223372036854775809;
                v7 = alloc::boxed::Box<T>::new(&v26);
                v8 = &g_6c8b70;
                uucore::mods::error::set_exit_code(1);
                v10 = uucore::util_name();
                v11 = v48;
                eprintln!("{}: {}", &v10, v43);
                v0 = v1;
                v3 = v4;
                v30 = v33;
                v26 = v29;
                continue;
            }
            v27 = std::fs::metadata(v44, v45);
            if let Err(_) = v27 {
                v0 = <T as alloc::slice::hack::ConvertVec>::to_vec(v44, v45);
                v35 = v3;
                v32 = *(&v0.field_0 as &i128) as u128;
                v26 = 9223372036854775810;
                v7 = alloc::boxed::Box<T>::new(&v26);
                v8 = &g_6c8b70;
                uucore::mods::error::set_exit_code(1);
                v10 = uucore::util_name();
                v11 = v48;
                eprintln!("{}: {}", &v10, v43);
                v0 = v1;
                v3 = v4;
                v30 = v33;
                v26 = v29;
                continue;
            }
            v16 = uu_tac::try_mmap_path(v44, v45);
            match v16 {
                Err(_) => {
                    v19 = v46;
                    v20 = v50;
                    v49 = 1;
                    v22 = v46;
                    goto LABEL_5a041d;
                },
                Ok(_) => {
                    std::fs::read(v43, v44, v45);
                    if v7 == 0x8000000000000000 {
                        v24 = v8;
                        v0 = 0;
                        v2 = v44;
                        v3 = v45;
                        v5 = 1;
                        v40 = format!("{}", &v0);
                        v10 = alloc::string::String {
                            vec: alloc::vec::Vec<u8, alloc::alloc::Global> {
                                buf: alloc::raw_vec::RawVec<u8, alloc::alloc::Global> {
                                    cap: alloc::raw_vec::Cap {
                                        __0: *(&v40.vec.buf.cap as &i128)
                                    }
                                    ptr: core::ptr::unique::Unique<u8> {
                                        pointer: core::ptr::non_null::NonNull<u8> {
                                            pointer: <UNKNOWN>
                                        }
                                        _marker: core::marker::PhantomData<u8> { }
                                    }
                                    alloc: alloc::alloc::Global { }
                                }
                                len: v40.vec.len
                            }
                        };
                        v0 = <alloc::string::String as core::clone::Clone>::clone(&v10);
                        v34 = v3;
                        v29 = *(&v0.vec.buf.cap as &i128) as u128;
                        v35 = v24;
                        v14 = struct16 {
                            field_0: alloc::boxed::Box<T>::new(&v29 as u384)
                            field_8: &g_6c8b70
                        };
                        uucore::mods::error::set_exit_code(1);
                        v12 = uucore::util_name();
                        v13 = v48;
                        eprintln!("{}: {}", &v12, &v14);
                        v0 = v1;
                        v3 = v4;
                        v30 = v33;
                        v26 = v29;
                        continue;
                    } else {
                        v21 = *(&v7 as &i128) as u128;
                        v50 = v9;
                        v23 = v50;
                        v22 = v46;
                        if let Err(_) = v16 {
                            v22 = v46;
                        }
                    }
LABEL_5a041d:
                    v46 = v22;
                    v51 = (!v36 ? uu_tac::buffer_tac(v46 as u32, v50 as u32, a2, a4, v25) : uu_tac::buffer_tac_regex(v46, v50, v36, v37, a2 as u8));
                    if v37 {
                        v26 = struct16 {
                            field_0: 9223372036854775812
                            field_8: v37
                        };
                        return alloc::boxed::Box<T>::new(&v26);
                    }
                    v0 = v54;
                },
            }
        }
    } while ((v26 = v26, v30 = v30, v3 = v3, v54 = v0, v42 = <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::next(&v39), v42));
    return 0;
}
