fn flealib::commandprocessor::CommandProcessor::get_camera_frame(a0: u64, a1: u64) -> void {
    let v0: core::result::Result<&str, core::str::error::Utf8Error>;  // [bp-0x178], Other Possible Types: struct24, u64
    let v1: u128;  // [bp-0x178]
    let v2: void*;  // [bp-0x170], Other Possible Types: u64
    let v3: i64;  // [bp-0x168], Other Possible Types: u64
    let v4: u128;  // [bp-0x160]
    let v5: void*;  // [bp-0x158]
    let v6: struct40;  // [bp-0x148]
    let v7: struct40;  // [bp-0x140]
    let v8: i64;  // [bp-0x120], Other Possible Types: u64
    let v9: u64;  // [bp-0x118]
    let v10: u64;  // [bp-0x110]
    let v11: struct24;  // [bp-0x108], Other Possible Types: struct_0 *, u64
    let v12: u64;  // [bp-0x100]
    let v13: u64;  // [bp-0xf8]
    let v14: u64;  // [bp-0xf0]
    let v15: std::path::PathBuf;  // [bp-0xe8]
    let v16: u64;  // [bp-0xe0]
    let v17: u64;  // [bp-0xd8]
    let v18: std::path::PathBuf;  // [bp-0xd0]
    let v19: u64;  // [bp-0xc0]
    let v20: u128;  // [bp-0xb8]
    let v21: u64;  // [bp-0xb0]
    let v22: u64;  // [bp-0xa8]
    let v23: u128;  // [bp-0x98]
    let v24: u64;  // [bp-0x90]
    let v25: u64;  // [bp-0x88]
    let v26: Result<struct24, struct16>;  // [bp-0x80]
    let v27: u64;  // [bp-0x78]
    let v28: u64;  // [bp-0x70]
    let v29: i64;  // [bp-0x68]
    let v30: u64;  // [bp-0x60]
    let v31: Option<struct24>;  // [bp-0x58]
    let v32: u64;  // [bp-0x48]
    let v33: std::sys::os_str::bytes::Buf;  // [bp-0x40]
    let v35: u64;  // rdx
    let v36: u64;  // rcx
    let v37: u64;  // r8
    let v39: core::result::Result<(), std::io::error::Error>;  // r15

    v15 = std::env::temp_dir();
    v0 = std::ffi::os_str::<impl core::convert::TryFrom<&std::ffi::os_str::OsStr> for &str>::try_from(v16, v17);
    match v0 {
        Err(_) => {
            core::option::unwrap_failed(); /* do not return */
        },
        Ok(_) => {
            v0 = <T as alloc::slice::hack::ConvertVec>::to_vec(v2, v3);
            v22 = v3;
            v20 = *(&v0.field_0 as &i128) as u128;
            v31 = flealib::camera::save_camera_frames(0x1, v21, v3);
            if (((0 ^ v31 as i64) & (0 ^ -(v31 as i64))) >> 63) as char {
                if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hec4bd8d019e67a03E) >= 4 {
                    v0 = "Frame captured";
                    v2 = 1;
                    v3 = 8;
                    v4 = 0 as u128;
                    v6 = struct40 {
                        field_0: "flealib::commandprocessor"
                        field_16: "flealib::commandprocessor"
                        field_32: log::__private_api::loc("flealib/src/commandprocessor.rs")
                    };
                    log::__private_api::log(&v0, 4, &v6);
                }
                v6 = "frame-";
                v7 = <&T as core::fmt::Display>::fmt;
                v0 = &g_b087f8;
                v2 = 2;
                v5 = 0;
                v3 = &v6;
                v4 = 1;
                v33 = core::option::Option<T>::map_or_else(&v0, v35, v36, v37);
                v18 = std::path::Path::join(v16, v17, &v33, v37);
                std::sync::mutex::Mutex<T>::lock(&v0, a1 + 16);
                v26 = flealib::fileserver::FileServer::read_binary_file_by_path(core::result::Result<T,E>::unwrap(&v0, "flealib/src/commandprocessor.rs") + 8, &v18);
                match v26 {
                    Err(_) => {
                        v8 = v27;
                        if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hec4bd8d019e67a03E) {
                            v11 = &v8;
                            v12 = <std::io::error::Error as core::fmt::Display>::fmt;
                            v0 = "Error (video couldn't be read or camera is not available): ";
                            v2 = 1;
                            v5 = 0;
                            v3 = &v11;
                            v4 = 1;
                            v6 = struct40 {
                                field_0: "flealib::commandprocessor"
                                field_16: "flealib::commandprocessor"
                                field_32: log::__private_api::loc("flealib/src/commandprocessor.rs")
                            };
                            log::__private_api::log(&v0, 1, &v6);
                        }
                        <T as alloc::string::SpecToString>::spec_to_string(a0, &v8);
                    },
                    Ok(_) => {
                        v25 = v28;
                        v23 = v26 as i128 as u128;
                        flealib::commandprocessor::CommandProcessor::bytes_to_string(&v8 as u8, v24, v28);
                        v3 = v19;
                        v1 = *(&v18.inner.inner.inner.buf.inner.cap as &i128) as u128;
                        v39 = std::fs::remove_file(&v0, a1);
                        match v39 {
                            Err(_) => {
                                v14 = v39;
                                if !core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hec4bd8d019e67a03E) {
                                    return struct24 {
                                        field_0: *(&v8 as &i128)
                                        field_16: v10
                                    };
                                }
                                v11 = <T as alloc::string::SpecToString>::spec_to_string(&v14);
                                v29 = &v11;
                                v30 = <alloc::string::String as core::fmt::Display>::fmt;
                                v0 = "Couldn't remove a file: ";
                                v2 = 1;
                                v5 = 0;
                                v3 = &v29;
                                v4 = 1;
                                v6 = struct40 {
                                    field_0: "flealib::commandprocessor"
                                    field_16: "flealib::commandprocessor"
                                    field_32: log::__private_api::loc("flealib/src/commandprocessor.rs")
                                };
                                log::__private_api::log(&v0, 1, &v6);
                                return struct24 {
                                    field_0: *(&v8 as &i128)
                                    field_16: v10
                                };
                            },
                            Ok(_) => {
                                if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hec4bd8d019e67a03E) < 4 {
                                    return struct24 {
                                        field_0: *(&v8 as &i128)
                                        field_16: v10
                                    };
                                }
                                v0 = "Captured frame removed";
                                v2 = 1;
                                v3 = 8;
                                v4 = 0 as u128;
                                v6 = struct40 {
                                    field_0: "flealib::commandprocessor"
                                    field_16: "flealib::commandprocessor"
                                    field_32: log::__private_api::loc("flealib/src/commandprocessor.rs")
                                };
                                log::__private_api::log(&v0, 4, &v6);
                                return struct24 {
                                    field_0: *(&v8 as &i128)
                                    field_16: v10
                                };
                            },
                        }
                    },
                }
            } else {
                v13 = v32;
                *(&v11 as &i128) = v31 as i128;
                if !core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hec4bd8d019e67a03E) {
                    return struct24 {
                        field_0: *(&v11 as &i128)
                        field_16: v13
                    };
                }
                v8 = &v11 as u8;
                v9 = <alloc::string::String as core::fmt::Display>::fmt;
                v0 = "Error: ";
                v2 = 1;
                v5 = 0;
                v3 = &v8;
                v4 = 1;
                v6 = struct40 {
                    field_0: "flealib::commandprocessor"
                    field_16: "flealib::commandprocessor"
                    field_32: log::__private_api::loc("flealib/src/commandprocessor.rs")
                };
                log::__private_api::log(&v0, 1, &v6);
                return struct24 {
                    field_0: *(&v11 as &i128)
                    field_16: v13
                };
            }
        },
    }
}
