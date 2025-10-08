fn uu_tac::tac(a0: i64, a1: u64, a2: u32, a3: u32, a4: u64, a5: u64) -> long long {
    let v0: void*;  // [bp-0x1b8], Other Possible Types: alloc::string::String, struct32, struct24
    let v1: u64;  // [bp-0x1b0]
    let v2: u64;  // [bp-0x1a8]
    let v3: u64;  // [bp-0x1a8]
    let v4: u64;  // [bp-0x1a0]
    let v5: alloc::string::String;  // [bp-0x198], Other Possible Types: struct16, u64
    let v6: u64;  // [bp-0x190]
    let v7: void*;  // [bp-0x180], Other Possible Types: alloc::string::String
    let v8: alloc::string::String;  // [bp-0x180]
    let v9: u64;  // [sp-0x178]
    let v10: void*;  // [bp-0x170]
    let v11: u32;  // [bp-0x164]
    let v12: void*;  // [sp-0x160], Other Possible Types: u64
    let v13: u64;  // [sp-0x158]
    let v14: std::io::stdio::Stdin;  // [bp-0x150], Other Possible Types: struct16
    let v15: u64;  // [bp-0x140]
    let v16: Result<struct24, struct16>;  // [bp-0x140]
    let v17: u64;  // [bp-0x138]
    let v18: void*;  // [bp-0x130]
    let v19: u64;  // [bp-0x128]
    let v20: void*;  // [bp-0x120]
    let v21: u64;  // [bp-0x118]
    let v22: u64;  // [bp-0x110]
    let v23: struct16;  // [bp-0x108], Other Possible Types: u64
    let v24: Result<(), Error>;  // [bp-0x108]
    let v25: u128;  // [bp-0x108]
    let v26: u64;  // [bp-0x108]
    let v27: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0x108]
    let v28: u64;  // [bp-0x100]
    let v29: u64;  // [bp-0x100]
    let v30: u128;  // [bp-0x100]
    let v31: u128;  // [bp-0x100]
    let v32: void*;  // [bp-0xf8], Other Possible Types: unsigned long, u64
    let v33: void*;  // [bp-0xf8]
    let v34: u64;  // [bp-0xf0]
    let v35: void*;  // [bp-0x58], Other Possible Types: u128
    let v36: u64;  // [bp-0x50]
    let v37: iNone;  // [bp-0x48]
    let v39: i64;  // r12
    let v40: u64;  // r15
    let v41: i64;  // rax
    let v42: u64;  // r14
    let v43: u64;  // rbp
    let v45: u64;  // rbx
    let v46: void*;  // rsi
    let v47: void*;  // rdx
    let v48: u64;  // rdx, Other Possible Types: unsigned long
    let v49: u64;  // rax
    let v52: core::result::Result<usize, std::io::error::Error>;  // rax:rdx

    v11 = a2;
    v39 = a0;
    if a3 {
        v0 = regex::regex::bytes::Regex::new(a4, a5);
        if !v0.field_0 {
            v34 = v4;
            v23 = struct16 {
                field_0: 0x8000000000000000
                field_8: v0.field_8
            };
            return alloc::boxed::Box<T>::new(&v23) as u64;
        }
        v21 = a4;
        v22 = a5;
        v37 = *(&v0.field_16 as &i128);
        v35 = *(&v0.field_0 as &i128);
        if a1 {
            goto LABEL_512a37;
        }
    } else {
        v21 = a4;
        v22 = a5;
        v35 = 0;
        if a1 {
LABEL_512a37:
            v40 = a1 * 16 + a0;
            v41 = a0 + 16;
            loop {
                v42 = *(v39 as &i64);
                v43 = *((v39 + 8) as &i64);
                v39 = v41;
                if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v42, v43) {
                    v25 = uu_tac::try_mmap_stdin();
                    if let Err(_) = v25 as u192 {
                        goto LABEL_513003;
                    }
                    v7 = 0;
                    v9 = 1;
                    v10 = 0;
                    v14 = std::io::stdio::stdin();
                    v52 = <std::io::stdio::Stdin as std::io::Read>::read_to_end(&v14, &v7);
                    if (v52 as i64 & 1) {
                        v0 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("stdin");
                        v32 = v2;
                        v25 = *(&v0.field_0 as &i128);
                        v34 = *((&v52 as &char + 8) as &i64);
                        v15 = alloc::boxed::Box<T>::new(&v25) as u64;
                        v17 = &g_633b90;
                        uucore::mods::error::set_exit_code(1);
                        v5 = uucore::util_name();
                        v6 = v48;
                        eprintln!("{}: {}", &v5, &v15);
                        v41 = v39 + 16;
                        v2 = v3;
                        v28 = v29;
                        v32 = v33;
                        v23 = v26;
                        if v39 == v40 {
                            break;
                        }
                        continue;
                    }
                    v12 = v7;
                    v45 = 1;
                    v46 = v10;
                    v13 = 1;
                    v47 = v35;
                    if !v35 {
                        goto LABEL_5130aa;
                    }
                    goto LABEL_51306e;
                }
                if std::path::Path::is_dir(v42, v43) {
                    v0 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v42, v43);
                    v34 = v2;
                    v30 = *(&v0.field_0 as &i128);
                    v23 = 9223372036854775809;
                    v5 = struct16 {
                        field_0: alloc::boxed::Box<T>::new(&v23) as u64
                        field_8: &g_633b90
                    };
                    uucore::mods::error::set_exit_code(1);
                    v7 = uucore::util_name();
                    v9 = v48;
                    eprintln!("{}: {}", &v7, &v5);
                    v2 = v3;
                    v28 = v29;
                    v32 = v33;
                    v23 = v26;
                    goto LABEL_512ff0;
                }
                v27 = std::fs::metadata(v42, v43);
                match v27 {
                    Err(_) => {
                        v0 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v42, v43);
                        v34 = v2;
                        v31 = *(&v0.field_0 as &i128) as u128;
                        v23 = 9223372036854775810;
                        v5 = struct16 {
                            field_0: alloc::boxed::Box<T>::new(&v23) as u64
                            field_8: &g_633b90
                        };
                        uucore::mods::error::set_exit_code(1);
                        v7 = uucore::util_name();
                        v9 = v48;
                        eprintln!("{}: {}", &v7, &v5);
                        v2 = v3;
                        v28 = v29;
                        v32 = v33;
                        v23 = v26;
                        goto LABEL_512ff0;
                    },
                    Ok(_) => {
                        v24 = uu_tac::try_mmap_path(v42, v43);
                        if let Err(_) = v24 {
LABEL_513003:
                            v45 = v28;
                            v46 = v32;
                            v19 = v45;
                            v20 = v46;
                            v47 = v35;
                            if !v35 {
                                goto LABEL_5130aa;
                            }
                            goto LABEL_51306e;
                        }
                        v16 = std::fs::read(v42, v43);
                        v45 = v17;
                        match v16 {
                            Err(_) => {
                                v0 = 0;
                                v1 = v42;
                                v2 = v43;
                                v4 = 1;
                                v7 = format!("{}", &v0);
                                v5 = v8;
                                v0 = <alloc::string::String as core::clone::Clone>::clone(&v5);
                                v32 = v2;
                                v26 = *(&v0.vec.buf.inner.cap as &i128) as u128;
                                v34 = v45;
                                v14 = struct16 {
                                    field_0: alloc::boxed::Box<T>::new(&v26 as u384) as u64
                                    field_8: &g_633b90
                                };
                                uucore::mods::error::set_exit_code(1);
                                v7 = uucore::util_name();
                                v9 = v48;
                                eprintln!("{}: {}", &v7, &v14);
                                v2 = v3;
                                v28 = v29;
                                v32 = v33;
                                v23 = v26;
LABEL_512ff0:
                                v41 = v39 + 16;
                                if v39 == v40 {
                                    break;
                                }
                            },
                            Ok(_) => {
                                v46 = v18;
                                v13 = v45;
                                v12 = v16 as i64;
                                v47 = v35;
                                if v35 {
LABEL_51306e:
                                    v49 = uu_tac::buffer_tac_regex(v45, v46, v47, v36, v11 as i8 as u8 as u64);
                                    goto LABEL_5130c7;
                                } else {
LABEL_5130aa:
                                    v49 = uu_tac::buffer_tac(v45, v46, v11 as i8 as u8 as u64, v21, v22);
LABEL_5130c7:
                                    if v49 {
                                        v23 = struct16 {
                                            field_0: 9223372036854775812
                                            field_8: v49
                                        };
                                        return alloc::boxed::Box<T>::new(&v23) as u64;
                                    }
                                    v41 = ((v39 != v40) as u8 as u32 * 16) as u64 + v39;
                                    if v39 == v40 {
                                        break;
                                    }
                                }
                            },
                        }
                    },
                }
            }
        }
    }
    return 0;
}
