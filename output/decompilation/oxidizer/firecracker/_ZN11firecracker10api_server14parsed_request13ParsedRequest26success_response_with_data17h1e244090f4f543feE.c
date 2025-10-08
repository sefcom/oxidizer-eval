fn firecracker::api_server::parsed_request::ParsedRequest::success_response_with_data(a0: u64, a1: u64) -> long long {
    let v0: struct24;  // [bp-0xf0], Other Possible Types: u64
    let v1: struct40;  // [bp-0xf0]
    let v2: Result<struct24, struct16>;  // [bp-0xf0]
    let v4: u64;  // [bp-0xe0]
    let v5: u128;  // [bp-0xc8]
    let v7: u64;  // [bp-0xb8]
    let v8: struct32;  // [bp-0xa8], Other Possible Types: struct40
    let v9: struct117;  // [bp-0xa8]

    if core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hba2cad573e31d8baE, 0) as u64 >= 3 {
        v8 = struct40 {
            field_0: "The request was executed successfully. Status code: 200 OK."
            field_8: 1
            field_16: 8
            field_24: 0
        };
        v1 = struct40 {
            field_0: "firecracker::api_server::parsed_request"
            field_16: "firecracker::api_server::parsed_request"
            field_32: log::__private_api::loc("src/firecracker/src/api_server/parsed_request.rs")
        };
        log::__private_api::log_impl(&v8, 3, &v1);
    }
    micro_http::response::Response::new(&v9, 1, 1);
    v2 = serde_json::ser::to_vec(a1);
    if !((((0 ^ v2 as i64) & (0 ^ -(v0))) >> 63) as char) {
        v7 = v4;
        v5 = v2 as i128;
    }
    core::result::Result<T,E>::unwrap(&v0, &v5, "src/firecracker/src/api_server/parsed_request.rs");
    v8 = micro_http::response::Response::set_body(&v0);
    return memcpy(a0, &v8, 144);
}
