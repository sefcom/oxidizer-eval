fn starship::utils::exec_timeout(a1: i64, a2: i64, a3: i32) -> Option<struct48> {
    let a0: i64;  // rdi
    let v0: core::fmt::rt::Argument;  // [bp-0x1f8], Other Possible Types: struct24, struct8, struct40, u64
    let v1: struct32;  // [bp-0x1f0], Other Possible Types: u64, unsigned long
    let v2: u128;  // [bp-0x1e8]
    let v3: struct40;  // [bp-0x1d8], Other Possible Types: u64
    let v4: alloc::string::String;  // [sp-0x1c8], Other Possible Types: core::fmt::Arguments, struct24, struct64, struct72, u64
    let v5: core::fmt::rt::Argument;  // [bp-0x1c0], Other Possible Types: struct16, struct32, struct92, u64
    let v6: core::fmt::Arguments;  // [sp-0x1b8], Other Possible Types: struct17, struct24, struct_5 *, Result<struct72, struct24>, struct40, u64
    let v7: Option<struct56>;  // [bp-0x1b0], Other Possible Types: Result<struct65, struct57>, struct40, u128
    let v8: Result<struct72, struct24>;  // [bp-0x1b0]
    let v9: struct40;  // [sp-0x1a8], Other Possible Types: struct72, void*, struct16
    let v10: struct16;  // [bp-0x1a0], Other Possible Types: struct40
    let v11: struct40;  // [bp-0x198], Other Possible Types: struct96
    let v12: struct40;  // [bp-0x190]
    let v13: u128;  // [bp-0x188]
    let v14: struct16;  // [bp-0x17c]
    let v15: struct72;  // [bp-0x16c]
    let v16: struct40;  // [bp-0x160], Other Possible Types: u64
    let v17: struct32;  // [bp-0x160]
    let v18: i64;  // [bp-0x160]
    let v19: u64;  // [bp-0x160]
    let v20: Option<struct56>;  // [bp-0x158], Other Possible Types: core::fmt::Arguments, u64
    let v21: struct92;  // [bp-0x150], Other Possible Types: struct_1 *
    let v22: Result<struct72, struct24>;  // [bp-0x148], Other Possible Types: u64
    let v23: void*;  // [bp-0x140]
    let v24: Result<struct40, struct32>;  // [bp-0x130], Other Possible Types: struct48, struct24
    let v25: Result<struct40, struct32>;  // [bp-0x130], Other Possible Types: u64
    let v26: struct32;  // [bp-0x128]
    let v27: u64;  // [bp-0x118]
    let v28: struct40;  // [bp-0x110], Other Possible Types: u64
    let v29: struct20;  // [bp-0x108], Other Possible Types: struct40
    let v30: struct24;  // [bp-0xf8]
    let v31: iNone;  // [bp-0xe8]
    let v32: u128;  // [bp-0xd8]
    let v33: Result<struct72, struct24>;  // [bp-0xd4]
    let v34: struct8;  // [bp-0xc8], Other Possible Types: u128
    let v35: struct32;  // [bp-0xc0]
    let v36: struct16;  // [bp-0xb8]
    let v37: struct56;  // [bp-0xa8], Other Possible Types: struct_3 *
    let v38: u64;  // [bp-0xa0]
    let v39: struct24;  // [bp-0x98]
    let v40: struct24;  // [bp-0x88]
    let v41: struct64;  // [bp-0x78], Other Possible Types: struct_2 *
    let v42: u64;  // [bp-0x78]
    let v43: struct24;  // [bp-0x70], Other Possible Types: unsigned long
    let v44: i64;  // [bp-0x68]
    let v45: u64;  // [bp-0x60]
    let v46: iNone;  // [bp-0x58]
    let v47: u128;  // [bp-0x48]
    let v48: Option<struct24>;  // [bp-0x38]
    let v49: struct48;  // [bp-0x30]
    let v51: u32;  // edx
    let v52: u64;  // rdx
    let v53: struct32;  // rdx
    let v54: struct20;  // xmm0
    let v55: struct24;  // xmm1
    let v56: struct16;  // bpl
    let v57: core::str::pattern::CharSearcher;  // rax
    let v58: struct40;  // xmm0
    let v60: struct8;  // xmm0
    let v62: core::fmt::Arguments;  // rdx

    v48 = std::time::Instant::now();
    v49 = v51;
    v18 as u256 = std::process::Command::spawn(a1);
    if v17.field_0 == 1 {
        v24 = v20;
        if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) as u64 >= 3 {
            v0 = std::process::Command::get_program(a1);
            v1 = v52;
            v41 = &v0;
            v43 = <&T as core::fmt::Debug>::fmt;
            v44 = &v24;
            v45 = <std::io::error::Error as core::fmt::Debug>::fmt;
            v4 = "Unable to run ";
            v5 = 2;
            v9 = 0;
            v6 = &v41;
            v7 = 2;
            v29 = struct40 {
                field_0: "starship::utils"
                field_16: "starship::utils"
                field_32: log::__private_api::loc("src/utils.rs")
            };
            log::__private_api::log(&v4, 3, &v29);
        }
    } else {
        v14 = *((&v17.field_4 as &char + 8) as &i128);
        v13 = *(&(&v17.field_0)[1] as &i128);
        v4 = 0;
        v6 = a2;
        v7 = a3;
        v9 = 0;
        v11 = 0;
        v15 = 0x100;
        v41 = <process_control::control::Buffer<P> as process_control::Control>::wait(&v4);
        if (((0 ^ v41.field_0 as i64) & (0 ^ -(v42))) >> 63) as char {
            if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) as u64 >= 2 {
                v16 = std::process::Command::get_program(a1);
                v20 = v62;
                v0 = &v18 as u256;
                v1 = <&T as core::fmt::Debug>::fmt;
                v4 = "Executing command ";
                v5 = 2;
                v9 = 0;
                v6 = &v0;
                v8 = 1;
                v29 = struct40 {
                    field_0: "starship::utils"
                    field_16: "starship::utils"
                    field_32: log::__private_api::loc("src/utils.rs")
                };
                log::__private_api::log(&v4, 2, &v29);
            }
            if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) as u64 < 2 {
                return struct8 {
                    field_0: 0x8000000000000000
                };
            }
            v4 = "You can set command_timeout in your config to a higher value to allow longer-running commands to keep executing.";
            v5 = 1;
            v6 = 8;
            v7 = 0;
            v29 = struct40 {
                field_0: "starship::utils"
                field_16: "starship::utils"
                field_32: log::__private_api::loc("src/utils.rs")
            };
            log::__private_api::log(&v4, 2, &v29);
            return struct8 {
                field_0: 0x8000000000000000
            };
        } else if v41.field_0 as i64 == 9223372036854775809 {
            v24 = v43;
            if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) as u64 >= 3 {
                v0 = std::process::Command::get_program(a1);
                v1 = v53;
                *(&v18 as &&struct24) = &v0;
                v20 = <&T as core::fmt::Debug>::fmt;
                v21 = &v24;
                v22 = <std::io::error::Error as core::fmt::Debug>::fmt;
                v4 = "Executing command ";
                v5 = 2;
                v9 = 0;
                v6 = &v18 as u256;
                v7 = 2;
                v29 = struct40 {
                    field_0: "starship::utils"
                    field_16: "starship::utils"
                    field_32: log::__private_api::loc("src/utils.rs")
                };
                log::__private_api::log(&v4, 3, &v29);
            }
        } else {
            v54 = v41.field_0;
            v55 = v41.field_16;
            v32 = v47;
            v31 = v46;
            v30 = v55;
            v29 = v54;
            v24 = alloc::string::String::from_utf8(&v41);
            if (((0 ^ v24 as i64) & (0 ^ -(v25))) >> 63) as char {
                v40 = v27;
                v39 = *((&v24 as &char + 8) as &i128);
                v25 = alloc::string::String::from_utf8(&v41 as u8);
                match v25 {
                    Err(_) => {
                        v36 = v27;
                        v34 = *((&v25 as &char + 8) as &i128) as u128;
                        if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) as u64 > 4 {
                            v37 = v57;
                            v24 = std::time::Instant::elapsed(&v48);
                            v26 = v51;
                            v4 = &v39;
                            v5 = <alloc::string::String as core::fmt::Debug>::fmt;
                            v6 = &v34 as u8;
                            v8 = <alloc::string::String as core::fmt::Debug>::fmt;
                            v9 = &v37;
                            v10 = <core::option::Option<T> as core::fmt::Debug>::fmt;
                            v11 = &v24;
                            v12 = <core::time::Duration as core::fmt::Debug>::fmt;
                            *(&v19 as &&str) = "stdout: ";
                            v20 = 4;
                            v23 = 0;
                            v21 = &v4;
                            v22 = 4;
                            v0 = struct40 {
                                field_0: "starship::utils"
                                field_16: "starship::utils"
                                field_32: log::__private_api::loc("src/utils.rs")
                            };
                            log::__private_api::log(&v18 as u256, 5, &v0);
                        }
                        if v56 != 2 || v33 {
                            return struct8 {
                                field_0: 0x8000000000000000
                            };
                        }
                        v6 = v40;
                        v4 = v39;
                        v10 = v36;
                        v7 = v34;
                        return Some(struct48 {
                            field_0: v39
                            field_16: v6
                            field_24: v8
                            field_32: v9
                            field_40: v10
                        });
                        return struct8 {
                            field_0: 0x8000000000000000
                        };
                    },
                    Ok(_) => {
                        v3 = v28;
                        v58 = v25 as i128;
                        v2 = *((&v25 as &char + 16) as &i128) as u128;
                        v0 = v58;
                        if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) as u64 < 2 {
                            return struct8 {
                                field_0: 0x8000000000000000
                            };
                        }
                        v37 = &v0 as u8;
                        v38 = <alloc::string::FromUtf8Error as core::fmt::Debug>::fmt;
                        v4 = "Unable to decode stderr: ";
                        v5 = 1;
                        v9 = 0;
                        v6 = &v37;
                        v7 = 1;
                        v16 = struct40 {
                            field_0: "starship::utils"
                            field_16: "starship::utils"
                            field_32: log::__private_api::loc("src/utils.rs")
                        };
                        log::__private_api::log(&v4, 2, &v16);
                        return struct8 {
                            field_0: 0x8000000000000000
                        };
                    },
                }
            } else {
                v3 = v28;
                v60 = v24 as i128;
                v2 = *((&v24 as &char + 16) as &i128);
                v0 = v60;
                if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hce4481ac8dff0d42E, 0) as u64 < 2 {
                    return struct8 {
                        field_0: 0x8000000000000000
                    };
                }
                v34 = &v0 as u8;
                v35 = <alloc::string::FromUtf8Error as core::fmt::Debug>::fmt;
                v4 = "Unable to decode stdout: ";
                v5 = 1;
                v9 = 0;
                v6 = &v34;
                v7 = 1;
                v16 = struct40 {
                    field_0: "starship::utils"
                    field_16: "starship::utils"
                    field_32: log::__private_api::loc("src/utils.rs")
                };
                log::__private_api::log(&v4, 2, &v16);
                return struct8 {
                    field_0: 0x8000000000000000
                };
            }
        }
    }
    return struct8 {
        field_0: 0x8000000000000000
    };
}
