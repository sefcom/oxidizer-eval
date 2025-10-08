fn firecracker::api_server::parsed_request::<impl core::convert::From<firecracker::api_server::parsed_request::RequestError> for micro_http::response::Response>::from(a0: u64, a1: i64, a2: i64) -> int {
    let v0: struct24;  // [bp-0x50]
    let v1: u64;  // [bp-0x38]

    format!("{}", a1);
    v0 = firecracker::api_server::ApiServer::json_fault_message(&v1);
    firecracker::api_server::ApiServer::json_response(a0, (*(a1 as &i8) == 1 ? *((a1 + 1) as &i8) : 3), &v0);
    return;
}
