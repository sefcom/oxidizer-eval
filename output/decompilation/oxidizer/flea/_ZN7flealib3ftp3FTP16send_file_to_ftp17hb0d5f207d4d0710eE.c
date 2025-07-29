fn flealib::ftp::FTP::send_file_to_ftp(a0: u64, a1: i64, a2: u64, a3: u64, a4: u32, a5: u32, a6: u64, a7: u32, a8: u64, a9: u64, a10: u32, a11: u32) -> long long {
    let v0: u64;  // [bp-0xf8]
    let v1: Option<struct32>;  // [bp-0xf8], Other Possible Types: u256
    let v2: struct48;  // [bp-0xf8]
    let v3: core::result::Result<&str, core::str::error::Utf8Error>;  // [bp-0xf8]
    let v4: Option<struct32>;  // [bp-0xf8]
    let v5: Option<struct32>;  // [bp-0xf8]
    let v7: u64;  // [bp-0xf0]
    let v8: i64;  // [bp-0xe8], Other Possible Types: u64
    let v10: &str;  // [bp-0xe0], Other Possible Types: u128
    let v11: struct40;  // [bp-0xd8]
    let v12: u64;  // [bp-0xd0]
    let v13: core::result::Result<&str, core::str::error::Utf8Error>;  // [bp-0xc8], Other Possible Types: struct40, u128
    let v14: struct24;  // [bp-0xc0]
    let v15: alloc::string::String;  // [bp-0xb8], Other Possible Types: struct24, u128
    let v16: struct24;  // [bp-0xb8]
    let v17: alloc::borrow::Cow<str>;  // [bp-0xa0]
    let v18: struct18;  // [bp-0x98], Other Possible Types: struct24
    let v19: u128;  // [bp-0x98]
    let v20: u64;  // [bp-0x88]
    let v21: void*;  // [bp-0x80]
    let v22: struct48;  // [bp-0x70]
    let v23: Result<struct24, struct16>;  // [bp-0x40]
    let v24: u64;  // [bp-0x40]
    let v25: alloc::string::String;  // [bp-0x38]
    let v26: u64;  // [bp-0x30]
    let v27: struct149;  // [bp-0x28]
    let v28: core::str::pattern::StrSearcher;  // [bp-0x20]
    let v29: u64;  // rax
    let v30: u8;  // al
    let v31: core::result::Result<std::fs::Metadata, std::io::error::Error>;  // al
    let v34: u128;  // xmm0
    let v35: core::option::Option<&std::ffi::os_str::OsStr>;  // rax
    let v36: u8;  // al
    let v37: core::fmt::Arguments;  // xmm0
    let v38: u128;  // xmm0
    let v39: u128;  // xmm0

    v18 = struct18 {
        field_0: a2
        field_8: a3
        field_16: 21
    };
    v2 = ftp::ftp::FtpStream::connect(&v18, a2);
    v29 = v2.field_0;
    v13 = *((&v2.field_0 as &char + 8) as &i128);
    v15 = *((&v2.field_16 as &char + 8) as &i128);
    if !v29 {
        v39 = v13;
        return struct32 {
            field_0: v39
            field_16: v15
        };
    }
    v22 = struct48 {
        field_0: v29
        field_8: v13
        field_24: v15
        field_40: v12
    };
    v1 = ftp::ftp::FtpStream::login(&v22, a4, a5, a6, a7);
    v30 = v1 as i8;
    if v30 == 4 {
        if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hec4bd8d019e67a03E) >= 4 {
            *(&v0 as &&str) = "Connected to FTP server.";
            v7 = 1;
            v8 = 8;
            v10 = 0;
            v13 = struct40 {
                field_0: "flealib::ftp"
                field_16: "flealib::ftp"
                field_32: log::__private_api::loc("flealib/src/ftp.rs")
            };
            log::__private_api::log(&v1, 4, &v13);
        }
        v1 = ftp::ftp::FtpStream::cwd(&v22, a10, a11);
        v30 = v1 as i8;
        if v30 == 4 {
            v3 = std::ffi::os_str::<impl core::convert::TryFrom<&std::ffi::os_str::OsStr> for &str>::try_from(a8, a9);
            match v3 {
                Err(_) => {
                    core::option::unwrap_failed(); /* do not return */
                },
                Ok(_) => {
                    v23 = flealib::ftp::FTP::read_file_to_vec(*((&v3 as &char + 8) as &i64) as i32, *((&v3 as &char + 16) as &i64) as i32);
                    if (((0 ^ v23 as i64) & (0 ^ -(v24))) >> 63) as char {
                        v17 = v25;
                        v15 = v15;
                        if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hec4bd8d019e67a03E) {
                            v18 = <T as alloc::string::SpecToString>::spec_to_string(&v17);
                            v27 = &v18;
                            v28 = <alloc::string::String as core::fmt::Display>::fmt;
                            *(&v0 as &&str) = "Couldn't upload the file to FTP server:";
                            v7 = 1 as u64;
                            v11 = 0;
                            *(&v8 as &&struct149) = &v27;
                            v10 = 1;
                            v13 = struct40 {
                                field_0: "flealib::ftp"
                                field_16: "flealib::ftp"
                                field_32: log::__private_api::loc("flealib/src/ftp.rs")
                            };
                            log::__private_api::log(&v3, 1, &v13);
                            v15 = v16;
                        }
                        v4 = ftp::ftp::FtpStream::quit(&v22);
                        v31 = v4 as i8;
                        if let Ok(_) = v31 {
                            v34 = *((&v4 as &char + 1) as &i128);
                            return struct40 {
                                field_0: v31
                                field_1: <UNKNOWN>
                                field_16: <UNKNOWN>
                            };
                        }
                    } else {
                        v20 = v26;
                        v19 = v23 as i128 as u128;
                        v21 = 0;
                        v35 = std::path::Path::file_name(a8, a9) as u64;
                        if let Some(_) = v35 {
                            v13 = std::ffi::os_str::<impl core::convert::TryFrom<&std::ffi::os_str::OsStr> for &str>::try_from(v35, a2);
                            if let Ok(_) = v13 {
                                v0 as u256 = ftp::ftp::FtpStream::put(&v22, v14, v15, &v18);
                                v36 = v5 as i8;
                                if v36 != 4 {
                                    v37 = *((&v5 as &char + 1) as &i128);
                                    return struct40 {
                                        field_0: v36
                                        field_1: <UNKNOWN>
                                        field_16: <UNKNOWN>
                                    };
                                }
                                if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hec4bd8d019e67a03E) >= 4 {
                                    *(&v0 as &&str) = "File uploaded to FTP server.";
                                    v7 = 1 as u64;
                                    v8 = 8 as u64;
                                    v10 = 0 as u128;
                                    v13 = struct40 {
                                        field_0: "flealib::ftp"
                                        field_16: "flealib::ftp"
                                        field_32: log::__private_api::loc("flealib/src/ftp.rs")
                                    };
                                    log::__private_api::log(&v0 as u256, 4, &v13);
                                }
                                ftp::ftp::FtpStream::quit(a0, &v22);
                            }
                        }
                        core::option::unwrap_failed(); /* do not return */
                    }
                },
            }
        }
    }
    v38 = *((&v1 as &char + 1) as &i128);
    return struct40 {
        field_0: v30
        field_1: <UNKNOWN>
        field_16: <UNKNOWN>
    };
}
