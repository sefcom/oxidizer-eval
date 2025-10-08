fn firecracker::api_server::request::serial::parse_put_serial(a0: u64, a1: u64, a2: u64) -> long long {
    let v0: struct24;  // [bp-0xf0], Other Possible Types: u64
    let v1: u64;  // [bp-0xe8]
    let v2: core::fmt::Arguments;  // [bp-0xe0]
    let v3: core::fmt::rt::Argument;  // [bp-0xd8]
    let v4: Result<struct24, struct16>;  // [bp-0x38]
    let v6: u64;  // r12
    let v7: u64;  // rax
    let v8: u64;  // r12
    let v9: struct16;  // rax

    v6 = 1;
    <vmm::logger::metrics::SharedIncMetric as vmm::logger::metrics::IncMetric>::add(&g_7c4870, 1);
    v0 = struct24 {
        field_0: a1
        field_8: a2
        field_16: 0
    };
    v4 = serde_json::de::from_trait(&v0, a2);
    v0 = core::result::Result<T,E>::inspect_err(&v4);
    v7 = v1;
    if v0.field_0 != 9223372036854775809 {
        v1 = v0.field_0;
        v2 = v7;
        v3 = 0;
        v0 = 7;
        v9 = firecracker::api_server::parsed_request::ParsedRequest::new_sync(a0 + 8, &v0);
    }
    return struct24 {
        field_0: v8
        field_8: 4
        field_16: v2
    };
}
