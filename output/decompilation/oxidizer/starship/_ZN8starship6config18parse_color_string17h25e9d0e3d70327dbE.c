fn starship::config::parse_color_string(a0: i64, a1: i64, a2: i64) -> u64 {
    let v0: u8;  // [sp-0xcb]
    let v1: alloc::string::String;  // [bp-0xc8], Other Possible Types: u64
    let v2: u64;  // [bp-0xc8]
    let v3: u64;  // [bp-0xc0]
    let v4: i64;  // [bp-0xb8], Other Possible Types: struct_13 *, struct_14 *, struct_8 *, struct_9 *, u64
    let v5: u64;  // [sp-0xb0]
    let v6: i64;  // [sp-0xa8], Other Possible Types: void*
    let v7: u64;  // [bp-0xa0]
    let v8: struct40;  // [bp-0x98]
    let v9: struct40;  // [bp-0x88], Other Possible Types: u64
    let v10: u64;  // [bp-0x80]
    let v11: i64;  // [bp-0x78]
    let v12: u64;  // [bp-0x70]
    let v13: void*;  // [bp-0x68]
    let v14: struct40;  // [bp-0x58], Other Possible Types: struct_0 *, struct_1 *, struct_16 *, struct_3 *, struct_5 *
    let v15: u64;  // [bp-0x50]
    let v16: i64;  // [bp-0x48]
    let v17: u64;  // [bp-0x40]
    let v18: i64;  // [bp-0x30]
    let v20: u64;  // 4096
    let v21: struct40;  // 4096
    let v26: u64;  // rdx
    let v27: struct40;  // r14
    let v34: u32;  // ebx
    let v35: struct40;  // ebp
    let v36: struct16;  // rdi
    let v37: struct40;  // r15
    let v39: i64;  // rax
    let v44: &mut [u8];  // rax:rdx
    let v45: core::result::Result<u8, core::num::error::ParseIntError>;  // rax:rax
    let v46: core::result::Result<u8, core::num::error::ParseIntError>;  // rax:rax
    let v47: core::result::Result<u8, core::num::error::ParseIntError>;  // rax:rax
    let v48: core::result::Result<u8, core::num::error::ParseIntError>;  // rax:rax

    v8 = a0;
    v20 = a1;
    v21 = a0;
    if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) as u64 >= 5 {
        v14 = &v8;
        v15 = <&T as core::fmt::Display>::fmt;
        v2 = "Parsing color_string: ";
        v3 = 1;
        v6 = 0;
        v4 = &v14;
        v5 = 1;
        v9 = struct40 {
            field_0: "starship::config"
            field_16: "starship::config"
            field_32: log::__private_api::loc("src/config.rs")
        };
        log::__private_api::log(&v2, 5, &v9);
        v20 = a1;
        v21 = v8;
    }
    v1 = 0;
    v44 = core::char::methods::encode_utf8_raw(35, &v1, 4);
    if core::slice::<impl [T]>::starts_with(v21, v20, v44.data_ptr, v44.length) {
        if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) as u64 > 4 {
            v14 = &v8;
            v15 = <&T as core::fmt::Display>::fmt;
            v1 = "Attempting to read hexadecimal color string: ";
            v3 = 1;
            v6 = 0;
            v4 = &v14;
            v5 = 1;
            v9 = struct40 {
                field_0: "starship::config"
                field_16: "starship::config"
                field_32: log::__private_api::loc("src/config.rs")
            };
            log::__private_api::log(&v1, 5, &v9);
        }
        if a1 == 7 {
            v27 = v8;
            v47 = core::num::<impl u8>::from_ascii_radix(core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(1, 3, v27, 7) as u64, v26, 16) as u128;
            if let Ok(_) = v47 {
                v45 = core::num::<impl u8>::from_ascii_radix(core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(3, 5, v27, 7) as u64, v26, 16) as u128;
                if let Ok(_) = v45 {
                    v48 = core::num::<impl u8>::from_ascii_radix(core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(5, 7, v27, 7) as u64, v26, 16) as u128;
                    if let Ok(_) = v48 {
                        v0 = v26 as u8;
                        if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) as u64 >= 5 {
                            v1 = &v26 as u8;
                            v3 = core::fmt::num::imp::<impl core::fmt::Display for u8>::fmt;
                            v4 = &v26 as u8;
                            v5 = core::fmt::num::imp::<impl core::fmt::Display for u8>::fmt;
                            v6 = &v0;
                            v7 = core::fmt::num::imp::<impl core::fmt::Display for u8>::fmt;
                            v9 = "Read RGB color string: ";
                            v10 = 3;
                            v13 = 0;
                            v11 = &v1;
                            v12 = 3;
                            v14 = struct40 {
                                field_0: "starship::config"
                                field_16: "starship::config"
                                field_32: log::__private_api::loc("src/config.rs")
                            };
                            log::__private_api::log(&v9, 5, &v14);
                        }
                    }
                }
            }
        } else {
            if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) as u64 <= 3 {
                return (v35 | v34 * 0x100) as u64;
            }
LABEL_b63480:
            v9 = struct40 {
                field_0: "starship::config"
                field_16: "starship::config"
                field_32: log::__private_api::loc(v36)
            };
            log::__private_api::log(&v1, 4, &v9);
        }
    } else {
        v37 = v8;
        v46 = core::num::<impl u8>::from_ascii_radix(v37, a1, 10) as u128;
        if !(v46 as i8 & 1) {
            v0 = v26;
            if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) as u64 < 5 {
                return (v35 | v34 * 0x100) as u64;
            }
            v14 = &v0;
            v15 = core::fmt::num::imp::<impl core::fmt::Display for u8>::fmt;
            v1 = "Read ANSI color string: ";
            v3 = 1;
            v6 = 0;
            v4 = &v14;
            v5 = 1;
            v9 = struct40 {
                field_0: "starship::config"
                field_16: "starship::config"
                field_32: log::__private_api::loc("src/config.rs")
            };
            log::__private_api::log(&v1, 5, &v9);
        } else if a2 {
            v39 = hashbrown::map::HashMap<K,V,S,A>::get_inner(a2, v37, a1);
            if v39 {
                v18 = v39 + 24;
                if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) as u64 > 4 {
                    v14 = &v8;
                    v15 = <&T as core::fmt::Display>::fmt;
                    v16 = &v18;
                    v17 = <&T as core::fmt::Display>::fmt;
                    v1 = "Read user-defined color string: ";
                    v3 = 2;
                    v6 = 0;
                    v4 = &v14;
                    v5 = 2;
                    v9 = struct40 {
                        field_0: "starship::config"
                        field_16: "starship::config"
                        field_32: log::__private_api::loc("src/config.rs")
                    };
                    log::__private_api::log(&v1, 5, &v9);
                }
                starship::config::parse_color_string(*((v18 + 8) as &i64), *((v18 + 16) as &i64), 0);
            } else {
                goto LABEL_b63595;
            }
        } else {
LABEL_b63595:
            v1 = alloc::str::<impl str>::to_lowercase(v37, a1);
            if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v1, "black") || <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v1, "red") || <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v1, "green") || <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v1, "yellow") || <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v1, "blue") || <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v1, "purple") || <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v1, "cyan") || <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v1, "white") || <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v1, "bright-black") || <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v1, "bright-red") || <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v1, "bright-green") || <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v1, "bright-yellow") || <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v1, "bright-blue") || <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v1, "bright-purple") || <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v1, "bright-cyan") {
LABEL_b637d7:
                if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) as u64 <= 4 {
                    return (v35 | v34 * 0x100) as u64;
                }
                v14 = &v8;
                v15 = <&T as core::fmt::Display>::fmt;
                v1 = "Read predefined color: ";
                v3 = 1;
                v6 = 0;
                v4 = &v14;
                v5 = 1;
                v9 = struct40 {
                    field_0: "starship::config"
                    field_16: "starship::config"
                    field_32: log::__private_api::loc("src/config.rs")
                };
                log::__private_api::log(&v1, 5, &v9);
            } else {
                if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v1, "bright-white") {
                    goto LABEL_b637d7;
                }
                if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) as u64 > 3 {
                    goto LABEL_b63480;
                }
            }
        }
    }
    return (v35 | v34 * 0x100) as u64;
}
