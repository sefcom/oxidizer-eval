fn firecracker::api_server::request::boot_source::parse_put_boot_source(a0: u64, a1: u64, a2: u64) -> long long {
    let v0: struct24;  // [bp-0x138]
    let v1: struct72;  // [bp-0x120]
    let v2: u64;  // [bp-0x120]
    let v3: u64;  // [bp-0x118]
    let v4: iNone;  // [bp-0x110]
    let v5: iNone;  // [bp-0x100]
    let v6: iNone;  // [bp-0xf0]
    let v7: u64;  // [bp-0xe0]
    let v8: Result<struct72, struct16>;  // [bp-0xd8], Other Possible Types: u64
    let v9: u64;  // [bp-0xd0]
    let v10: u64;  // [bp-0xc8]
    let v11: iNone;  // [bp-0xc0]
    let v12: iNone;  // [bp-0xb0]
    let v13: iNone;  // [bp-0xa0]
    let v14: u64;  // [bp-0x90]
    let v16: u64;  // r12
    let v17: u64;  // rax
    let v18: u64;  // r12
    let v19: u64;  // rax

    v16 = 1;
    <vmm::logger::metrics::SharedIncMetric as vmm::logger::metrics::IncMetric>::add(&g_7c4750, 1);
    v0 = struct24 {
        field_0: a1
        field_8: a2
        field_16: 0
    };
    v8 = serde_json::de::from_trait(&v0, a2);
    v1 = core::result::Result<T,E>::inspect_err(&v8);
    v17 = v3;
    if !((((0 ^ v1.field_0 as i64) & (0 ^ -(v2))) >> 63) as char) {
        v14 = v7;
        v13 = v6;
        v12 = v5;
        v11 = v4;
        v9 = v1.field_0;
        v10 = v17;
        v8 = 4;
        v19 = firecracker::api_server::parsed_request::ParsedRequest::new_sync(a0 + 8, &v8);
    }
    return struct24 {
        field_0: v18
        field_8: 4
        field_16: v10
    };
}
