fn flealib::fleaserver::replay(a0: u64, a1: i64, a2: i64, a3: void*) -> long long {
    let v0: core::str::pattern::StrSearcher;  // [bp-0x3b8]
    let v1: struct149;  // [bp-0x3b0]
    let v2: struct24;  // [bp-0x3a8]
    let v3: u64;  // [bp-0x3a0]
    let v4: struct24;  // [bp-0x3a0]
    let v5: u64;  // [bp-0x398]
    let v6: u64;  // [bp-0x398]
    let v7: i64;  // [bp-0x388], Other Possible Types: struct40
    let v8: u64;  // [bp-0x380]
    let v9: i64;  // [bp-0x378]
    let v10: u64;  // [bp-0x370]
    let v11: struct40;  // [bp-0x360], Other Possible Types: core::result::Result<(), std::io::error::Error>, u64
    let v12: struct24;  // [bp-0x358], Other Possible Types: u64
    let v13: struct24;  // [bp-0x350], Other Possible Types: struct_2 *
    let v14: void*;  // [bp-0x340]
    let v15: u64;  // [bp-0x330]
    let v16: u64;  // [bp-0x318]
    let v17: u64;  // [bp-0x310]
    let v18: struct49;  // [bp-0x308]
    let v19: u64;  // [bp-0x300]
    let v20: i64;  // [bp-0x2f8]
    let v21: u64;  // [bp-0x2f0]
    let v22: void*;  // [bp-0x2e8]
    let v24: u32;  // ebx
    let v25: u32;  // ebx
    let v28: void*;  // r15
    let v29: core::option::Option<&str>;  // rax
    let v30: core::result::Result<std::path::PathBuf, std::io::error::Error>;  // r15
    let v31: u64;  // rdx
    let v35: core::result::Result<usize, std::io::error::Error>;  // rax:rdx
    let v36: u128;  // [bp-0x348]

    v15 = a0;
    if core::sync::atomic::atomic_load() >= 4 {
        v7 = a1;
        v8 = <alloc::string::String as core::fmt::Display>::fmt;
        v9 = a2;
        v10 = <alloc::string::String as core::fmt::Display>::fmt;
        v18 = "Received command: ";
        v19 = 2;
        v22 = 0;
        v20 = &v7;
        v21 = 2;
        v11 = struct40 {
            field_0: "flealib::fleaserver"
            field_16: "flealib::fleaserver"
            field_32: log::__private_api::loc("flealib/src/fleaserver.rs")
        };
        log::__private_api::log(&v18, 4, &v11);
    }
    <flealib::commandprocessor::CommandProcessor as flealib::commandprocessor::FleaCommand>::new(&v18);
    v2 = <flealib::commandprocessor::CommandProcessor as flealib::commandprocessor::FleaCommand>::process(&v18, *((a1 + 8) as &i64), *((a1 + 16) as &i64), *((a2 + 8) as &i64), *((a2 + 16) as &i64), a3);
    if !v5 {
        return v25;
    }
    v25 = v24 & -0x100 | 1;
    if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v3, v5, "quit") {
        v11 = std::os::unix::net::datagram::UnixDatagram::set_nonblocking(v15);
        if !v11 {
            v1 = a2;
            v0 = a1;
            v28 = 0;
            v29 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(None, v3, v5) as u64;
            loop {
                v35 = <&std::net::tcp::TcpStream as std::io::Write>::write(&v15, v29, v31);
                match v35 {
                    Err(_) => {
                        if std::io::error::Error::kind(*((&v35 as &char + 8) as &i64)) == 13 {
                            std::thread::sleep(None, 0x5f5e100);
                            v6 = v5;
                            v4 = v3;
                        } else {
                            if core::sync::atomic::atomic_load() {
                                v16 = &*((&v35 as &char + 8) as &i64);
                                v17 = <std::io::error::Error as core::fmt::Display>::fmt;
                                v11 = "Couldn't send response: ";
                                v12 = 1;
                                v14 = 0;
                                v13 = &v16;
                                v36 = 1;
                                v7 = struct40 {
                                    field_0: "flealib::fleaserver"
                                    field_16: "flealib::fleaserver"
                                    field_32: log::__private_api::loc("flealib/src/fleaserver.rs")
                                };
                                log::__private_api::log(&v11, 1, &v7);
                            }
                        }
                    },
                    Ok(_) => {
                        v30 += *((&v35 as &char + 8) as &i64);
                        if v30 == v5 {
                            break;
                        }
                        v6 = v5;
                        v4 = v3;
                    },
                }
                v29 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(v30, v4, v6) as u64;
            }
        } else if core::sync::atomic::atomic_load() {
            v11 = "Couldn't set non-blocking mode";
            v12 = 1;
            v13 = 8;
            v36 = 0;
            v7 = struct40 {
                field_0: "flealib::fleaserver"
                field_16: "flealib::fleaserver"
                field_32: log::__private_api::loc("flealib/src/fleaserver.rs")
            };
            log::__private_api::log(&v11, 1, &v7);
        }
    }
    return v25;
}
