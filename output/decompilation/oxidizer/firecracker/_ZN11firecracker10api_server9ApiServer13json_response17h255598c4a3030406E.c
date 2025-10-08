fn firecracker::api_server::ApiServer::json_response(a1: i8, a2: i64) -> : struct144 {
    let a0: u64;  // rdi
    let v0: struct24;  // [bp-0xc8]
    let v1: struct32;  // [bp-0xb0], Other Possible Types: u8

    micro_http::response::Response::new(&v1, 1, a1);
    v0 = <T as core::convert::Into<U>>::into(a2);
    v1 = micro_http::response::Response::set_body(&v0);
    memcpy(a0, &v1, 144);
    return;
}
