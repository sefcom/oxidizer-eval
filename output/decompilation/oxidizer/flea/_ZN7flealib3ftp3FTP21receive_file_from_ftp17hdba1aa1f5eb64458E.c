fn flealib::ftp::FTP::receive_file_from_ftp(a0: u64, a1: i64, a2: u64, a3: u64, a4: u32, a5: u32, a6: u64, a7: u32, a8: u64, a9: u64, a10: u32, a11: u32) -> long long {
    let v0: u64;  // [bp-0x158]
    let v1: Option<struct32>;  // [bp-0x158], Other Possible Types: u256
    let v2: struct48;  // [bp-0x158]
    let v3: Option<struct32>;  // [bp-0x158]
    let v4: u64;  // [bp-0x158]
    let v6: u128;  // [bp-0x151]
    let v7: u64;  // [bp-0x150]
    let v8: i64;  // [bp-0x148], Other Possible Types: u64
    let v9: struct24;  // [bp-0x141]
    let v10: u64;  // [bp-0x140]
    let v11: void*;  // [bp-0x138]
    let v12: u64;  // [bp-0x130]
    let v13: struct24;  // [bp-0x128], Other Possible Types: struct40, u128
    let v14: struct24;  // [bp-0x118], Other Possible Types: u128
    let v15: struct24;  // [bp-0x118]
    let v16: u64;  // [bp-0x100]
    let v17: i64;  // [bp-0xf8]
    let v18: u64;  // [bp-0xf0]
    let v19: struct32;  // [bp-0xe8], Other Possible Types: u128
    let v20: struct24;  // [bp-0xe8]
    let v21: u128;  // [bp-0xd8]
    let v22: struct48;  // [bp-0xc8]
    let v23: struct24;  // [bp-0x98]
    let v24: struct18;  // [bp-0x80]
    let v25: Result<struct32, struct32>;  // [bp-0x80]
    let v26: struct32;  // [bp-0x78]
    let v27: u128;  // [bp-0x68]
    let v28: struct24;  // [bp-0x58]
    let v29: std::path::PathBuf;  // [bp-0x38]
    let v30: struct208;  // rax
    let v31: u8;  // al
    let v32: struct24;  // al
    let v33: alloc::vec::Vec<u8, alloc::alloc::Global>;  // rax
    let v34: Result<struct4, struct8>;  // rcx
    let v35: alloc::string::String;  // xmm0
    let v36: Option<struct24>;  // rax
    let v37: struct88;  // al
    let v38: u64;  // rax
    let v39: u64;  // rcx
    let v40: u128;  // xmm0
    let v41: u128;  // xmm0
    let v42: u128;  // xmm0

    v24 = struct18 {
        field_0: a2
        field_8: a3
        field_16: 21
    };
    v2 = ftp::ftp::FtpStream::connect(&v24, a2);
    v30 = v2.field_0 as i64;
    v13 = *((&v2.field_0 as &char + 8) as &i128);
    v14 = *((&v2.field_16 as &char + 8) as &i128);
    if !v30 {
        v42 = v13;
        return struct32 {
            field_0: v42
            field_16: v14
        };
    }
    v22 = struct48 {
        field_0: v30
        field_8: v13
        field_24: v14
        field_40: v12
    };
    v0 = ftp::ftp::FtpStream::login(&v22, a4, a5, a6, a7);
    v31 = v1 as i8;
    if v31 == 4 {
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
            log::__private_api::log(&v0, 4, &v13);
        }
        v4 = ftp::ftp::FtpStream::cwd(&v22, a10, a11);
        v31 = v1 as i8;
        if v31 == 4 {
            v25 = ftp::ftp::FtpStream::simple_retr(&v22, a8, a9);
            match v25 {
                Err(v19) => {
                    v14 = v14;
                    if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hec4bd8d019e67a03E) {
                        v23 = <T as alloc::string::SpecToString>::spec_to_string(&v19);
                        v17 = &v23;
                        v18 = <alloc::string::String as core::fmt::Display>::fmt;
                        *(&v0 as &&str) = "Couldn't receive the file from FTP server:";
                        v7 = 1 as u64;
                        v11 = 0;
                        *(&v8 as &&struct_1 *) = &v17;
                        v10 = 1;
                        v13 = struct40 {
                            field_0: "flealib::ftp"
                            field_16: "flealib::ftp"
                            field_32: log::__private_api::loc("flealib/src/ftp.rs")
                        };
                        log::__private_api::log(&v4 as u256, 1, &v13);
                        v14 = v15;
                    }
                    v3 = ftp::ftp::FtpStream::quit(&v22);
                    v32 = v3 as i8;
                    if v32 != 4 {
                        v35 = *((&v3 as &char + 1) as &i128);
                        return struct40 {
                            field_0: v32
                            field_1: <UNKNOWN>
                            field_16: <UNKNOWN>
                        };
                    }
                    v13 = <T as alloc::string::SpecToString>::spec_to_string(&v19);
                    v9 = v14;
                    v6 = *(&v13.field_0 as &i128) as u128;
                    v33 = *((&v6 as &char + 8) as &i64);
                    v34 = v9.field_0;
                    return struct40 {
                        field_0: 2
                        field_1: <UNKNOWN>
                        field_16: v34
                        field_24: <UNKNOWN>
                    };
                },
                Ok(_) => {
                    v21 = v27;
                    v19 = *((&v25 as &char + 8) as &i128);
                    v29 = std::path::Path::join(*((a1 + 8) as &i64), *((a1 + 16) as &i64), a8, a9);
                    v28 = v20;
                    v36 = flealib::ftp::FTP::write_file(&v29, &v28);
                    if let None = v36 {
                        v16 = v36;
                        v14 = v14;
                        if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hec4bd8d019e67a03E) {
                            v23 = <T as alloc::string::SpecToString>::spec_to_string(&v16);
                            v17 = &v23;
                            v18 = <alloc::string::String as core::fmt::Display>::fmt;
                            *(&v4 as &&str) = "Couldn't write a file to disk:";
                            v7 = 1 as u64;
                            v11 = 0;
                            *(&v8 as &&struct_1 *) = &v17;
                            v10 = 1;
                            v13 = struct40 {
                                field_0: "flealib::ftp"
                                field_16: "flealib::ftp"
                                field_32: log::__private_api::loc("flealib/src/ftp.rs")
                            };
                            log::__private_api::log(&v4 as u256, 1, &v13);
                            v14 = v15;
                        }
                        v3 = ftp::ftp::FtpStream::quit(&v22);
                        v37 = v3 as i8;
                        if v37 != 4 {
                            v40 = *((&v3 as &char + 1) as &i128);
                            return struct40 {
                                field_0: v37
                                field_1: <UNKNOWN>
                                field_16: <UNKNOWN>
                            };
                        }
                        v13 = <T as alloc::string::SpecToString>::spec_to_string(&v16);
                        v9 = v14;
                        v6 = *(&v13.field_0 as &i128) as u128;
                        v38 = *((&v6 as &char + 8) as &i64);
                        v39 = v9.field_0;
                        return struct40 {
                            field_0: 2
                            field_1: <UNKNOWN>
                            field_16: v39
                            field_24: <UNKNOWN>
                        };
                    }
                },
            }
        }
    }
    v41 = *((&v1 as &char + 1) as &i128);
    return struct40 {
        field_0: v31
        field_1: <UNKNOWN>
        field_16: <UNKNOWN>
    };
}
