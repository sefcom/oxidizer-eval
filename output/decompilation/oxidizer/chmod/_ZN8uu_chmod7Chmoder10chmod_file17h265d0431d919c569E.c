fn uu_chmod::Chmoder::chmod_file(a0: i64, a1: i64, a2: i64) -> u64 {
    let v0: core::fmt::rt::Argument;  // [bp-0x238], Other Possible Types: u64
    let v1: core::fmt::rt::Argument;  // [bp-0x238]
    let v2: Result<struct24, struct12>;  // [bp-0x238]
    let v3: struct24;  // [bp-0x230], Other Possible Types: u64
    let v4: struct24;  // [bp-0x230]
    let v5: struct24;  // [bp-0x22c]
    let v6: alloc::string::String;  // [bp-0x228], Other Possible Types: core::fmt::rt::Argument, u64
    let v7: u8;  // [bp-0x220]
    let v8: Result<struct24, struct12>;  // [bp-0x218], Other Possible Types: core::fmt::rt::Argument, struct28, u128
    let v9: Result<struct24, struct12>;  // [bp-0x218]
    let v10: core::fmt::rt::Argument;  // [bp-0x218]
    let v11: struct24;  // [bp-0x210], Other Possible Types: u64
    let v12: u64;  // [bp-0x210]
    let v13: struct24;  // [bp-0x20c]
    let v14: u64;  // [bp-0x208]
    let v15: u8;  // [bp-0x200]
    let v16: alloc::string::String;  // [bp-0x1e0]
    let v17: alloc::string::String;  // [bp-0x1d8], Other Possible Types: core::fmt::Arguments, struct28, u128
    let v18: core::fmt::rt::Argument;  // [bp-0x1d0]
    let v19: core::str::pattern::CharSearcher;  // [bp-0x1c8], Other Possible Types: u64
    let v20: u32;  // [bp-0x1c0]
    let v21: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // [bp-0x198]
    let v22: alloc::string::String;  // [bp-0x184]
    let v23: core::fmt::rt::Argument;  // [bp-0x178]
    let v24: core::fmt::rt::Argument;  // [bp-0x170]
    let v25: u128;  // [bp-0x168]
    let v26: core::fmt::rt::Argument;  // [bp-0x160]
    let v27: struct24;  // [bp-0x158], Other Possible Types: u64
    let v28: alloc::string::String;  // [bp-0x140]
    let v29: u64;  // [bp-0x130]
    let v30: alloc::string::String;  // [bp-0x128]
    let v31: u64;  // [bp-0x118]
    let v32: alloc::string::String;  // [bp-0x110]
    let v33: u64;  // [bp-0x100]
    let v34: struct24;  // [bp-0xf8]
    let v35: Result<struct176, struct16>;  // [bp-0xe0]
    let v38: u8;  // al
    let v39: core::fmt::rt::Argument;  // rbx
    let v40: struct24;  // ebp
    let v42: u64;  // rcx
    let v43: struct24;  // r13d
    let v44: u64;  // r12
    let v45: u32;  // rdx
    let v47: struct24;  // r13d
    let v48: struct24;  // r13d
    let v50: u32;  // eax
    let v54: u64;  // rbx
    let v55: u64;  // rax

    v35 = uucore::features::perms::get_metadata(a1, a2, *((a0 + 37) as &i8));
    if v35 as i32 == 2 {
        v27 = *((&v35 as &char + 8) as &i64);
        v38 = std::path::Path::is_symlink(a1, a2);
        if !*((a0 + 37) as &i8) && v38 == 1 {
            if *((a0 + 34) as &i8) == 1 {
                v8 = 1;
                v11 = a1;
                v14 = a2;
                v15 = 1;
                println!("neither symbolic link {} nor referent has been changed", &v8);
            }
        } else {
            if std::io::error::Error::kind(v27) as u8 == 1 {
                v8 = 1;
                v11 = a1;
                v14 = a2;
                v15 = 1;
                v28 = format!("{}: Permission denied", &v8);
                v20 = 1;
                v17 = *(&v28.vec.buf.inner.cap as &i128);
                v19 = v29;
                alloc::boxed::Box<T>::new(&v17);
            } else {
                v8 = 1;
                v11 = a1;
                v14 = a2;
                v15 = 1;
                v30 = format!("{}: {}", &v8, &v27);
                v20 = 1;
                v17 = *(&v30.vec.buf.inner.cap as &i128);
                v19 = v31;
                alloc::boxed::Box<T>::new(&v17);
            }
        }
        return v39;
    } else if *((a0 + 24) as &i32) == 1 {
        return (!(uu_chmod::Chmoder::change_file(a0, 4095 & *((&v35 as &char + 56) as &i32), *((a0 + 28) as &i32), a1, a2) & 1) ? 0 : uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(1));
    } else {
        v16 = a2;
        if !((((0 ^ *(a0 as &i64)) & (0 ^ -(*(a0 as &i64)))) >> 63) as char) {
            v17 = <alloc::string::String as core::clone::Clone>::clone(a0);
            v8 = *(&v17.vec.buf.inner.ptr as &i128);
            if v17.vec.buf.inner.cap.__0 != 0x8000000000000000 {
                v24 = v17.vec.buf.inner.cap.__0;
                v25 = v8;
                v19 = <char as core::str::pattern::Pattern>::into_searcher(v25, v26, v42);
                v17 = 0;
                v18 = v26;
                v21 = 1;
                v43 = v40;
                v22 = v40;
                do {
                    v3 = v4;
                    v0 = v1;
                    v44 = core::str::iter::SplitInternal<P>::next(&v17);
                    if !v44 {
                        if (uu_chmod::Chmoder::change_file(a0, v22 as u64, v40 as u64, a1, v16) & 1) {
                            uucore::mods::error::<impl core::convert::From<i32> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(1);
                            return v54;
                        } else if (~(v43) & v40) {
                            v0 = 1;
                            v3 = a1;
                            v6 = v16;
                            v7 = 0;
                            v34 = uucore::features::fs::display_permissions_unix(v40 as u64, 0);
                            v27 = uucore::features::fs::display_permissions_unix(v43 as u64, 0);
                            v32 = format!("{}: new permissions are {}, not {}", &v0, &v34, &v27);
                            v17 = struct28 {
                                field_0: *(&v32.vec.buf.inner.cap as &i128)
                                field_16: v33
                                field_24: 1
                            };
                            alloc::boxed::Box<T>::new(&v17);
                        } else {
                            return 0;
                        }
                    }
                    v8 = v44;
                    *(&v12 as &core::fmt::rt::Argument) = v8 + v45;
                    if <core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(core::iter::traits::iterator::Iterator::try_fold(&v8), a1) {
                        v9 = uucore::features::mode::parse_numeric(v40 as u64, v8, v45, std::path::Path::is_dir(a1, v16));
                        v47 = v11;
                        v48 = v47;
                        v43 = v47;
                        v10 = v8;
                        if let Ok(_) = v9 {
                            v23 = v14;
                            v48 = v47;
                            v43 = v13;
                            v10 = v8;
                        }
                    } else {
                        v50 = uucore::features::mode::get_umask();
                        v2 = uucore::features::mode::parse_symbolic(v40 as u64, v8, v45, v50, std::path::Path::is_dir(a1, v16));
                        match v2 {
                            Ok(_) => {
                                v43 = v5;
                                v23 = v6;
                                v48 = v3;
                                v10 = v0;
                            },
                            Err(_) => {
                                v8 = uucore::features::mode::parse_symbolic(v43 as u64, v8, v45, 0, std::path::Path::is_dir(a1, v16) as u32 as u64);
                                core::result::Result<T,E>::unwrap(&v8);
                                v48 = v3;
                                v10 = v0;
                            },
                        }
                    }
                    v40 = v48;
                    v3 = v4;
                    v0 = v1;
                } while (v10 == 0x8000000000000000);
                v0 = v10;
                v3 = v40;
                v5 = v43;
                v6 = v23;
                if *((a0 + 33) as &i8) {
                    uucore::mods::error::ExitCode::new(1);
                    return v54;
                }
                v8 = struct28 {
                    field_0: v0
                    field_16: v6
                    field_24: 1
                };
                alloc::boxed::Box<T>::new(&v8);
                v54 = v55;
                return v54;
            }
        }
        core::option::unwrap_failed(); /* do not return */
    }
}
