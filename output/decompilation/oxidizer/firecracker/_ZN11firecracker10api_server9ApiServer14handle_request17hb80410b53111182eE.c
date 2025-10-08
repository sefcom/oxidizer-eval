fn firecracker::api_server::ApiServer::handle_request(a0: i64, a1: i64, a2: i64, a3: i64) {
    let v0: core::fmt::rt::Argument;  // [bp-0x168], Other Possible Types: struct24
    let v1: core::fmt::rt::Argument;  // [bp-0x158], Other Possible Types: u64
    let v2: struct40;  // [bp-0x150], Other Possible Types: u64
    let v3: u128;  // [bp-0x148]
    let v4: u64;  // [bp-0x138]
    let v5: core::fmt::rt::Argument;  // [bp-0x128]
    let v7: core::fmt::rt::Argument;  // [bp-0x118]
    let v8: &str;  // [bp-0x108], Other Possible Types: struct40
    let v14: struct16;  // [bp-0xc8], Other Possible Types: u64
    let v15: core::fmt::rt::Argument;  // [bp-0xb8]
    let v16: struct144;  // [bp-0xa8], Other Possible Types: struct41
    let v17: &str;  // [bp-0xa8]
    let v18: struct24;  // [bp-0xa8]
    let v19: u64;  // [bp-0xa0]
    let v20: u128;  // [bp-0x98]
    let v21: u64;  // [bp-0x90]
    let v22: u64;  // [bp-0x88]
    let v25: u64;  // rdx
    let v26: struct24;  // xmm0

    v16 = <firecracker::api_server::parsed_request::ParsedRequest as core::convert::TryFrom<&micro_http::request::Request>>::try_from(a2);
    if v16.field_0 as i32 == 1 {
        v0 = *(&v16.field_12 as &i128);
        v1 = v22;
        v2 = v19;
        v3 = *(&v16.field_12 as &i128);
        v4 = v1;
        if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hba2cad573e31d8baE, 0) as u64 {
            v8 = struct40 {
                field_0: "firecracker::api_server"
                field_16: "firecracker::api_server"
                field_32: log::__private_api::loc("src/firecracker/src/api_server/mod.rs")
            };
            log::__private_api::log_impl(&v17 as u64, 1, &v8);
        }
        v26 = *(&v2 as &i128);
        v20 = *((&v3 as &char + 8) as &i128);
        v18 = v26;
        firecracker::api_server::parsed_request::<impl core::convert::From<firecracker::api_server::parsed_request::RequestError> for micro_http::response::Response>::from(a0, &v18 as u8, v25);
        return;
    } else {
        v0 = *(&v16.field_8 as &i128);
        v1 = v21;
        v15 = v1;
        v14 = *(&v16.field_8 as &i128);
        v16 = firecracker::api_server::ApiServer::serve_vmm_action_request(a1, v22, a3);
        v14 = 0x8000000000000000;
        if !((((0 ^ v0.ty as i64) & (0 ^ -(v0.ty as i64))) >> 63) as char) {
            v7 = v1;
            v5 = v0;
            if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hba2cad573e31d8baE, 0) as u64 > 1 {
                v2 = struct40 {
                    field_0: "firecracker::api_server"
                    field_16: "firecracker::api_server"
                    field_32: log::__private_api::loc("src/firecracker/src/api_server/mod.rs")
                };
                log::__private_api::log_impl(&v8 as u64, 2, &v2);
            }
        }
        memcpy(a0, &v16, 144);
        return;
    }
}
