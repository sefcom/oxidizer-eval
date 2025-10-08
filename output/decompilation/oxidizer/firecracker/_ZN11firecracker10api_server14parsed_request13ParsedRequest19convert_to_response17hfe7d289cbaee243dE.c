fn firecracker::api_server::parsed_request::ParsedRequest::convert_to_response(a0: u64, a1: i64) -> long long {
    let v0: struct24;  // [bp-0x110], Other Possible Types: struct40
    let v1: u64;  // [bp-0xe8]
    let v2: struct24;  // [bp-0xd0]
    let v4: struct117;  // [bp-0xb8], Other Possible Types: struct32
    let v10: struct32;  // rax
    let v11: u8;  // bpl
    let v12: u64;  // rdi

    v1 = a1 + 8;
    v10 = core::sync::atomic::atomic_load(&_ZN3log20MAX_LOG_LEVEL_FILTER17hba2cad573e31d8baE, 0) as u64;
    if *((a1 + 8) as &i8) == 14 {
        v11 = 7;
        if v10 {
            goto LABEL_5542b2;
        }
    } else {
        v11 = 3;
        if v10 {
LABEL_5542b2:
            v0 = struct40 {
                field_0: "firecracker::api_server::parsed_request"
                field_16: "firecracker::api_server::parsed_request"
                field_32: log::__private_api::loc(v12)
            };
            log::__private_api::log_impl(&v4, 1, &v0);
        }
    }
    micro_http::response::Response::new(&v4, 1, v11);
    v0 = <T as alloc::string::SpecToString>::spec_to_string(v1);
    v2 = firecracker::api_server::ApiServer::json_fault_message(&v0);
    v4 = micro_http::response::Response::set_body(&v2);
    return memcpy(a0, &v4, 144);
}
