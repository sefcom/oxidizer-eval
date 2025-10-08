fn uu_touch::touch_file(a0: &std::path::Path, a1: i32, a2: i64, a3: i64, a4: i32, a5: i64, a6: i32) -> u64 {
    let v0: Result<struct4, struct8>;  // [bp-0x1a8], Other Possible Types: struct16
    let v1: u64;  // [bp-0x1a0]
    let v2: struct28;  // [bp-0x198]
    let v3: u128;  // [bp-0x198]
    let v4: u64;  // [bp-0x190]
    let v5: u64;  // [bp-0x188]
    let v6: void*;  // [bp-0x160], Other Possible Types: core::slice::iter::Iter<u8>, struct24
    let v7: u128;  // [bp-0x158]
    let v8: u64;  // [bp-0x150]
    let v9: u8;  // [bp-0x148]
    let v10: u64;  // [bp-0x140]
    let v11: u64;  // [bp-0x138]
    let v12: core::fmt::Arguments;  // [bp-0x130]
    let v13: u64;  // [bp-0x128]
    let v14: struct8;  // [bp-0x120], Other Possible Types: u64
    let v15: struct24;  // [sp-0x118], Other Possible Types: u192
    let v16: u64;  // [bp-0x110]
    let v17: u64;  // [bp-0x108]
    let v18: struct712;  // [bp-0x100]
    let v19: alloc::string::String;  // [bp-0xf8]
    let v20: u64;  // [bp-0xe8]
    let v21: struct16;  // [bp-0xe0], Other Possible Types: core::result::Result<std::fs::Metadata, std::io::error::Error>
    let v22: u64;  // [bp-0xe0]
    let v23: u64;  // [bp-0xd8]
    let v24: struct712;  // rbp
    let v25: u8;  // r13b
    let v26: u64;  // rdi
    let v27: u8;  // rsi
    let v28: struct712;  // rbp
    let v29: u64;  // rbp
    let v31: u64;  // rdx
    let v32: u32;  // edx
    let v34: struct8;  // rdx
    let v35: core::fmt::Arguments;  // rbx, Other Possible Types: struct9
    let v36: core::option::Option<u32>;  // rax:rax

    v24 = a4;
    v11 = a3;
    if a1 {
        v15 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("-");
        v25 = *((a2 + 49) as &i8);
        if v25 {
            goto LABEL_539fdf;
        }
LABEL_539f9b:
        v21 = std::fs::metadata(a0);
    } else {
        v21 = struct16 {
            field_0: v26
            field_8: v27
        };
        v15 = <T as alloc::string::SpecToString>::spec_to_string(&v21);
        v25 = *((a2 + 49) as &i8);
        if !v25 {
            goto LABEL_539f9b;
        }
LABEL_539fdf:
        v21 = std::fs::symlink_metadata(a0);
    }
    v28 = v24;
    if v22 as i32 == 2 {
        v29 = v23;
        if std::io::error::Error::kind(v29) as u8 {
            v35 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(v29, v16, v17);
        } else {
            v10 = v29;
            if !*((a2 + 48) as &i8) {
                if v25 {
                    v6 = 0;
                    v7 = *((&v15 as &char + 8) as &i128);
                    v9 = 1;
                    v19 = format!("setting times of {}: No such file or directory", &v6);
                    v2 = struct28 {
                        field_0: *(&v19.vec.buf.inner.cap as &i128)
                        field_16: v20
                        field_24: 1
                    };
                    v35 = alloc::boxed::Box<T>::new(&v2) as u64;
                    if !*((a2 + 50) as &i8) {
                        v0 = struct16 {
                            field_0: v35
                            field_8: &g_679e10
                        };
                        uucore::mods::error::set_exit_code(<uucore::mods::error::USimpleError as uucore::mods::error::UError>::code(v35));
                        v13 = uucore::util_name();
                        v14 = v31;
                        eprintln!("{}: {}", &v13, &v0);
                    }
                } else {
                    v0 = std::fs::File::create(a0);
                    match v0 {
                        Err(_) => {
                            v3 as u768 = struct96 {
                                field_0: alloc::string::String::from_utf8_lossy(a0)
                                padding_88: <UNKNOWN>
                                field_96: <UNKNOWN>
                            };
                            v6 = core::slice::iter::Iter<u8> {
                                ptr: core::ptr::non_null::NonNull<u8> {
                                    pointer: v4
                                }
                                end_or_len: v5 + v4
                                _marker: core::marker::PhantomData<&u8> { }
                            };
                            v36 = core::str::validations::next_code_point_reverse(&v6) as u128;
                            if ((v32 != 0x110000) as u8 as u8 & v36 as i8) == 1 && v32 == 47 {
                                v6 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("No such file or directory");
                                v5 = v8;
                                v3 = *(&v6.field_0 as &i128) as u128;
                                v35 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(std::io::error::Error::_new(40, alloc::boxed::Box<T>::new(&v3 as u768), &g_679d98), v16, v17);
                            } else {
                                v35 = <std::io::error::Error as uucore::mods::error::FromIo<alloc::boxed::Box<uucore::mods::error::UIoError>>>::map_err_context(v1, a0);
                                if !*((a2 + 50) as &i8) {
                                    v12 = v35;
                                    uucore::mods::error::set_exit_code(1);
                                    v13 = uucore::util_name();
                                    v14 = v34;
                                    eprintln!("{}: {}", &v13, &v12);
                                }
                            }
                        },
                        Ok(_) => {
                            v28 = v18;
                            if !<uu_touch::Source as core::cmp::PartialEq>::eq(*((a2 + 24) as &i64)) as u8 {
                                goto LABEL_53a27e;
                            }
                            v28 = v18;
                            if !((((0 ^ *(a2 as &i64)) & (0 ^ -(*(a2 as &i64)))) >> 63) as char) {
                                goto LABEL_53a27e;
                            }
                        },
                    }
                }
            }
        }
    } else {
LABEL_53a27e:
        v35 = uu_touch::update_times(a0, v27, a1, v25, *((a2 + 51) as &i8), v11, v28 as u32, a5);
    }
    return v35;
}
