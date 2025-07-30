fn flealib::fleaserver::handle_client(a0: u32, a1: u64, a2: i64) -> int {
    let v0: u32;  // [bp-0x530]
    let v1: u8;  // [bp-0x529]
    let v2: core::result::Result<core::net::socket_addr::SocketAddr, std::io::error::Error>;  // [bp-0x528], Other Possible Types: struct24, u64
    let v3: u64;  // [bp-0x528]
    let v4: struct24;  // [bp-0x528]
    let v5: core::result::Result<alloc::string::String, alloc::string::FromUtf8Error>;  // [bp-0x528]
    let v6: &str;  // [bp-0x528], Other Possible Types: u64
    let v7: struct40;  // [bp-0x520], Other Possible Types: u64
    let v8: void*;  // [bp-0x520]
    let v9: struct24;  // [bp-0x518], Other Possible Types: struct_0 *
    let v10: u32;  // [bp-0x518]
    let v11: u64;  // [bp-0x510]
    let v12: struct72;  // [bp-0x508], Other Possible Types: void*
    let v13: i64;  // [bp-0x4f8], Other Possible Types: u64
    let v14: u128;  // [bp-0x4f8]
    let v15: u128;  // [bp-0x4f8]
    let v16: u64;  // [bp-0x4f0]
    let v17: struct40;  // [bp-0x4e8], Other Possible Types: u64
    let v18: alloc::vec::Vec<u8, alloc::alloc::Global>;  // [bp-0x4e8], Other Possible Types: struct24, struct40, u64
    let v19: u64;  // [bp-0x4e8]
    let v20: Result<struct48, struct24>;  // [bp-0x4e8]
    let v21: struct40;  // [bp-0x4e0]
    let v22: struct40;  // [bp-0x4e0]
    let v23: struct40;  // [bp-0x4e0]
    let v24: u64;  // [bp-0x4d8]
    let v25: struct40;  // [bp-0x4d0]
    let v26: struct40;  // [bp-0x4d0]
    let v27: struct24;  // [bp-0x4d0], Other Possible Types: struct40
    let v28: struct40;  // [bp-0x4c8]
    let v29: struct40;  // [bp-0x4c8]
    let v30: struct40;  // [bp-0x4c8]
    let v31: struct24;  // [bp-0x4b8], Other Possible Types: u64
    let v32: struct40;  // [bp-0x4b0]
    let v33: struct24;  // [bp-0x4a8], Other Possible Types: u64
    let v34: core::result::Result<&str, core::str::error::Utf8Error>;  // [bp-0x498], Other Possible Types: struct_0 *
    let v35: struct24;  // [bp-0x498]
    let v36: u64;  // [bp-0x490]
    let v37: i64;  // [bp-0x488]
    let v38: u64;  // [bp-0x480]
    let v39: struct32;  // [bp-0x468], Other Possible Types: struct40, struct_0 *
    let v40: struct24;  // [bp-0x468]
    let v41: u64;  // [bp-0x460]
    let v42: struct40;  // [bp-0x458]
    let v43: struct40;  // [bp-0x458]
    let v44: u64;  // [bp-0x440]
    let v45: u8;  // [bp-0x430]
    let v47: struct64;  // ymm0, Other Possible Types: u256
    let v51: u128;  // xmm0
    let v52: u128;  // xmm0
    let v53: u256;  // ymm0
    let v54: u128;  // xmm0
    let v55: struct72;  // xmm2
    let v56: u8;  // r14b
    let v57: Option<struct24>;  // xmm0
    let v58: u8;  // al
    let v67: core::result::Result<usize, std::io::error::Error>;  // rax:rdx

    v0 = a0;
    memset(&v45, 0, 0x400);
    v44 = *(a2 as &i64) + 16;
    loop {
        v67 = std::net::udp::UdpSocket::recv(&v0, &v45, 0x400);
        if let Err(_) = v67 {
            if std::io::error::Error::kind(*((&v67 as &char + 8) as &i64)) == 13 {
                std::thread::sleep(None, 0x5f5e100);
            } else {
                v13 = *((&v67 as &char + 8) as &i64);
                if core::sync::atomic::atomic_load() {
                    v2 = std::net::tcp::TcpStream::peer_addr(&v0);
                    v39 = core::result::Result<T,E>::unwrap(&v2, "flealib/src/fleaserver.rs");
                    v31 = <T as alloc::string::SpecToString>::spec_to_string(&v13);
                    v34 = &v39;
                    v36 = <core::net::socket_addr::SocketAddr as core::fmt::Display>::fmt;
                    v37 = &v31;
                    v38 = <alloc::string::String as core::fmt::Display>::fmt;
                    v2 = "An error occurred, terminating connection with ";
                    v7 = 2;
                    v12 = 0;
                    v9 = &v34;
                    v11 = 2;
                    v17 = struct40 {
                        field_0: "flealib::fleaserver"
                        field_16: "flealib::fleaserver"
                        field_32: log::__private_api::loc("flealib/src/fleaserver.rs")
                    };
                    log::__private_api::log(&v2, 1, &v17);
                }
                core::result::Result<T,E>::unwrap(std::os::unix::net::datagram::UnixDatagram::shutdown(&v0, 2), "flealib/src/fleaserver.rs");
            }
        }
        v2 = <T as alloc::slice::hack::ConvertVec>::to_vec(0x1, 0);
        v33 = v9;
        v47 = v47 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *(&v2.field_0 as &i128);
        *(&v31 as &i128) = *(&v2.field_0 as &i128);
        if *((&v67 as &char + 8) as &i64) - 1023 <= -1023 {
            core::result::Result<T,E>::unwrap(std::os::unix::net::datagram::UnixDatagram::shutdown(&v0, 2), "flealib/src/fleaserver.rs");
            goto LABEL_79d84e;
        } else {
            (&v45)[*((&v67 as &char + 8) as &i64)] = 0;
            v34 = core::str::converts::from_utf8(&v45, 0x400);
            match v34 {
                Err(_) => {
                    core::result::Result<T,E>::unwrap(std::os::unix::net::datagram::UnixDatagram::shutdown(&v0, 2), "flealib/src/fleaserver.rs");
LABEL_79d84e:
                    v2 = v3;
                    goto LABEL_79d851;
                },
                Ok(v51) => {
                    v14 = v51;
                    v18 = v17;
                    v22 = v21;
                    v26 = v25;
                    v29 = v28;
                    if core::sync::atomic::atomic_load() >= 4 {
                        v39 = &v13;
                        v41 = <&T as core::fmt::Display>::fmt;
                        v2 = "Received command:";
                        v7 = 1;
                        v12 = 0;
                        v9 = &v39;
                        v11 = 1;
                        v18 = struct40 {
                            field_0: "flealib::fleaserver"
                            field_16: "flealib::fleaserver"
                            field_32: log::__private_api::loc("flealib/src/fleaserver.rs")
                        };
                        log::__private_api::log(&v2, 4, &v18);
                        v18 = v19;
                        v22 = v23;
                        v26 = v27;
                        v29 = v30;
                    }
                    v28 = v29;
                    v25 = v26;
                    v21 = v22;
                    v17 = v18;
                    vvar_654{stack -1320} = struct24 OrderedDict([(0, 𝜙@64b [((7985278, None), vvar_509{stack -1320}), ((7985381, None), vvar_554{stack -1320})]), (8, 𝜙@64b [((7985278, None), vvar_512{stack -1312}), ((7985381, None), vvar_555{stack -1312})]), (16, 𝜙@64b [((7985278, None), vvar_511{stack -1304}), ((7985381, None), vvar_559{stack -1304})])])
                    flealib::fleaserver::remove_newline_characters(&v4, v13, v16 as u32);
                    v40 = <T as alloc::slice::hack::ConvertVec>::to_vec(v8, v10);
                    v52 = *(&v40.field_0 as &i128);
                    v18 = alloc::vec::Vec<u8, alloc::alloc::Global> {
                        buf: alloc::raw_vec::RawVec<u8, alloc::alloc::Global> {
                            inner: alloc::raw_vec::RawVecInner<alloc::alloc::Global> {
                                cap: alloc::raw_vec::Cap {
                                    __0: v52
                                }
                                ptr: core::ptr::unique::Unique<u8> {
                                    pointer: core::ptr::non_null::NonNull<u8> {
                                        pointer: <UNKNOWN>
                                    }
                                    _marker: core::marker::PhantomData<u8> { }
                                }
                                alloc: alloc::alloc::Global { }
                            }
                            _marker: core::marker::PhantomData<u8> { }
                        }
                        len: v42
                    };
                    v5 = alloc::string::String::from_utf8(&v18);
                    v18 = core::result::Result<T,E>::unwrap(&v5);
                    v33 = v24;
                    v53 = ((v47 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v51 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v52 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *(&v18.field_0 as &i128) as u128 as u256;
                    *(&v31 as &i128) = *(&v18.field_0 as &i128);
                    v20 = flealib::commandparser::CommandParser::get_command(&v1, v32 as u32, v24 as u32);
                    if !((((0 ^ v20 as i64) & (0 ^ -(v17))) >> 63) as char) {
                        v54 = v20 as i128;
                        v47 = v53 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v54 as u256;
                        v55 = *((&v20 as &char + 32) as &i128);
                        v10 = *((&v20 as &char + 16) as &i128) as u128;
                        v12 = v55;
                        v2 = v54;
                        v56 = (!v10) as u8 as u8;
                        if v10 {
                            v57 = v20 as i128;
                            v35 = struct24 {
                                field_0: v57
                                field_16: v24
                            };
                            v47 = (v47 & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | v57 as u256) & 0xffffffffffffffffffffffffffffffff00000000000000000000000000000000 | *((&v20 as &char + 24) as &i128) as u128 as u256;
                            v40 = v27;
                            v58 = flealib::fleaserver::replay(&v0, &v35, &v40, a1) as u32 as u8;
                            core::result::Result<T,E>::unwrap(std::os::unix::net::datagram::UnixDatagram::shutdown(&v0, 2), "flealib/src/fleaserver.rs");
                            v2 = v6;
                            v9 = v10;
                            v7 = v8;
                            v42 = v43;
                            if (v58 & 1) {
                                core::sync::atomic::atomic_store(v44);
                                v2 = v6;
                                v9 = v10;
                                v7 = v8;
                                v42 = v43;
                            }
                        } else {
                            v2 = v6;
                            v9 = v10;
                            v7 = v8;
                        }
                    } else {
                        v15 = *(&v21.field_0 as &i128) as u128;
                        core::result::Result<T,E>::unwrap(std::os::unix::net::datagram::UnixDatagram::shutdown(&v0, 2), "flealib/src/fleaserver.rs");
                        if core::sync::atomic::atomic_load() {
                            v39 = struct40 {
                                field_0: "flealib::fleaserver"
                                field_16: "flealib::fleaserver"
                                field_32: log::__private_api::loc("flealib/src/fleaserver.rs")
                            };
                            log::__private_api::log(&v6 as u64, 1, &v39);
                        }
                    }
LABEL_79d851:
                    v3 = v2;
                    if !v56 {
                        break;
                    }
                },
            }
        }
    }
    return;
}
