fn uu_mv::assert_not_same_file(a0: i64, a1: i64, a2: i64, a3: i64, a4: i8, a5: i32, a6: i8) -> u64 {
    let v0: u64;  // [bp-0x1e0]
    let v1: struct25;  // [bp-0x1e0]
    let v2: u64;  // [bp-0x1c0]
    let v3: u32;  // [bp-0x1b4]
    let v4: u64;  // [bp-0x1b0]
    let v6: alloc::string::String;  // [bp-0x1a8], Other Possible Types: struct24
    let v7: u64;  // [bp-0x198]
    let v8: struct24;  // [bp-0x190], Other Possible Types: u64
    let v9: struct25;  // [bp-0x188]
    let v11: u64;  // [bp-0x180]
    let v12: struct20;  // [bp-0x178], Other Possible Types: struct24, struct25, u8
    let v13: struct25;  // [bp-0x170]
    let v14: u64;  // [bp-0x168]
    let v16: iNone;  // [bp-0x138], Other Possible Types: struct24
    let v17: u64;  // [bp-0x128]
    let v18: struct20;  // [bp-0x120], Other Possible Types: struct24, struct25, Result<struct24, struct16>, u64
    let v19: alloc::string::String;  // [bp-0x120], Other Possible Types: struct24, u64
    let v20: struct25;  // [bp-0x118], Other Possible Types: u128
    let v21: struct25;  // [bp-0x118]
    let v22: struct25;  // [bp-0x118]
    let v23: u64;  // [bp-0x110]
    let v24: u64;  // [bp-0x108]
    let v25: iNone;  // [bp-0x100]
    let v26: u64;  // [bp-0xf0]
    let v27: struct16;  // [bp-0x70]
    let v28: struct24;  // [bp-0x60]
    let v29: u64;  // [bp-0x58]
    let v30: struct24;  // [bp-0x48]
    let v31: u64;  // [bp-0x40]
    let v34: struct25;  // r15
    let v36: u32;  // ebp
    let v37: struct640;  // rax
    let v38: u64;  // rax
    let v39: void*;  // r8
    let v40: u64;  // r12
    let v41: u64;  // rbp
    let v42: u64;  // rdx
    let v43: u64;  // rax
    let v46: struct640;  // bpl
    let v47: u64;  // rax

    v18 = std::path::absolute(a0, a1);
    if (((0 ^ v18 as i64) & (0 ^ -(v19))) >> 63) as char {
        return uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v29);
    }
    v0 = a1;
    v28 = v19;
    uucore::features::fs::canonicalize(&v12, &v28);
    if v12 != 0x8000000000000000 {
        v4 = v14;
        v18 = std::fs::metadata(v13, v14);
        if v18 as i64 == 2 {
            goto LABEL_48b3d6;
        }
        if a4 {
            goto LABEL_48b449;
        }
    } else {
LABEL_48b3d6:
        v18 = std::path::absolute(a0, v0);
        if v12 == 0x8000000000000000 {
            return uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v34);
        }
        v4 = v23;
        if v12 == 0x8000000000000000 {
            if a4 {
                goto LABEL_48b449;
            }
        } else {
            if a4 {
LABEL_48b449:
                if !(a5 & 1) {
                    v18 = std::path::absolute(a2, a3);
                    match v18 {
                        Err(_) => {
                            uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v31);
                        },
                        Ok(v30) => {
                            uucore::features::fs::canonicalize(&v12, &v30);
                            if v12 == 0x8000000000000000 {
LABEL_48b4cc:
                                uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v20);
                            } else {
                                v3 = v36;
                                std::path::Path::file_name(a0, v0);
                                v8 = std::path::Path::join(v13, v14, v38, v39);
                                goto LABEL_48b6d4;
                            }
                        },
                    }
                    goto LABEL_0x48b9fb;
                }
            }
        }
    }
    v18 = std::path::absolute(a2, a3);
    v3 = v36;
    if let Err(_) = v18 {
        goto LABEL_48b4cc;
    }
    v41 = std::path::Path::parent(v13, v23);
    if !v41 {
LABEL_48b534:
        v18 = std::path::absolute(a2, a3);
        if let Err(_) = v18 {
            goto LABEL_48b5c3;
        }
        v8 = v18 as i64;
        v9 = v20;
        v11 = v23;
        goto LABEL_48b6d4;
    }
    v18 = core::str::converts::from_utf8(v41, a2);
    if let Ok(_) = v18 {
        if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v20, v23, 1, 0) as u8 {
            goto LABEL_48b534;
        }
    }
    uucore::features::fs::canonicalize(&v18, v41, v42);
    if v18 as i64 == 0x8000000000000000 {
LABEL_48b5c3:
        uucore::mods::error::<impl core::convert::From<std::io::error::Error> for alloc::boxed::Box<dyn uucore::mods::error::UError>>::from(v9);
    } else {
        v43 = std::path::Path::file_name(a2, a3);
        if v43 {
            if v43 {
                goto LABEL_48b6a5;
            }
LABEL_48b6a4:
        } else {
            if !v43 {
                goto LABEL_48b6a4;
            }
LABEL_48b6a5:
        }
        v8 = std::path::Path::join(v20, v23, v43, v43);
LABEL_48b6d4:
        v1 = v9;
        v2 = v11;
        v47 = std::path::Path::file_name(a0, v0);
        if v47 && (v3 as i8 & 1) {
            v27 = struct16 {
                field_0: a2
                field_8: a3
            };
            v12 = <T as alloc::string::SpecToString>::spec_to_string(&v27);
            v18 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(core::str::<impl str>::trim_end_matches(v13, v14), a2);
            v6 = v19;
            alloc::string::String::push(&v6, 47);
            v18 = alloc::string::String::from_utf8_lossy(v47, v42);
            <alloc::vec::Vec<T,A> as alloc::vec::spec_extend::SpecExtend<&T,core::slice::iter::Iter<T>>>::spec_extend(&v6, v20, v23 + v20);
            v18 = struct25 {
                field_0: 0
                field_8: v6.vec.buf.inner.ptr.pointer.pointer
                field_16: v6.vec.len
                field_24: 1
            };
            v16 = <T as alloc::string::SpecToString>::spec_to_string(&v18);
        } else {
            v18 = struct25 {
                field_0: 1
                field_8: a2
                field_16: a3
                field_24: 1
            };
            v16 = <T as alloc::string::SpecToString>::spec_to_string(&v18);
        }
        if v46 {
            if !<std::path::PathBuf as core::cmp::PartialEq>::eq(v34, v4) {
                v12 = std::path::Path::components(a0, v0);
                v18 = std::path::Path::components(".");
                if !<std::path::Components as core::cmp::PartialEq>::eq(&v12, &v18) && !std::path::Path::ends_with(a0, v0) {
                    v21 = v20;
                    if !std::path::Path::is_file(a0, v0) {
                        goto LABEL_48ba59;
                    }
                }
            }
            v12 = struct25 {
                field_0: 1
                field_8: a0
                field_16: v0
                field_24: 1
            };
            v6 = <T as alloc::string::SpecToString>::spec_to_string(&v12);
            v26 = v17;
            v25 = v16;
            v20 = *(&v6.field_0 as &i128);
            v24 = v7;
            v18 = 2;
            alloc::boxed::Box<T>::new(&v18);
        } else {
            v18 = struct24 {
                field_0: v40
                field_8: v34
                field_16: v4
            };
            if !std::path::Path::starts_with(v1, v2, &v18) {
                return 0;
            }
            v21 = v22;
LABEL_48ba59:
            if !std::path::Path::is_symlink(a0, v0) {
                v12 = struct25 {
                    field_0: 1
                    field_8: a0
                    field_16: v0
                    field_24: 1
                };
                v6 = <T as alloc::string::SpecToString>::spec_to_string(&v12);
                v26 = v17;
                v25 = v16;
                v20 = *(&v6.field_0 as &i128);
                v24 = v7;
                v18 = 3;
                alloc::boxed::Box<T>::new(&v18);
                return v37;
            }
            return 0;
        }
    }
    return v37;
}
