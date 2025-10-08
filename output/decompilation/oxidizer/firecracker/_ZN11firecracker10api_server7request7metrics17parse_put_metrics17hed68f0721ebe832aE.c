fn firecracker::api_server::request::metrics::parse_put_metrics(a0: u64, a1: u64, a2: u64) -> long long {
    let v0: struct24;  // [bp-0x108]
    let v1: u64;  // [bp-0x108]
    let v2: u64;  // [bp-0x100]
    let v3: u64;  // [bp-0xf8]
    let v4: struct24;  // [bp-0xf0], Other Possible Types: u64
    let v5: u64;  // [bp-0xe8]
    let v6: u64;  // [bp-0xe0]
    let v7: u64;  // [bp-0xd8]
    let v8: Result<struct24, struct16>;  // [bp-0x38]
    let v10: u64;  // r12
    let v11: u64;  // rax
    let v12: u64;  // r12
    let v13: struct24;  // rax

    v10 = 1;
    <vmm::logger::metrics::SharedIncMetric as vmm::logger::metrics::IncMetric>::add(&g_7c47f0, 1);
    v4 = struct24 {
        field_0: a1
        field_8: a2
        field_16: 0
    };
    v8 = serde_json::de::from_trait(&v4, a2);
    v0 = core::result::Result<T,E>::inspect_err(&v8);
    v11 = v2;
    if !((((0 ^ v0.field_0) & (0 ^ -(v1))) >> 63) as char) {
        v5 = v0.field_0;
        v6 = v11;
        v7 = v3;
        v4 = 6;
        v13 = firecracker::api_server::parsed_request::ParsedRequest::new_sync(a0 + 8, &v4);
    }
    return struct24 {
        field_0: v12
        field_8: 4
        field_16: v6
    };
}
