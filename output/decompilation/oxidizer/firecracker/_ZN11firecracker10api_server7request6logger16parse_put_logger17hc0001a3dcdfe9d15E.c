fn firecracker::api_server::request::logger::parse_put_logger(a0: u64, a1: u64, a2: u64) -> long long {
    let v0: struct56;  // [bp-0x148]
    let v1: u64;  // [bp-0x140]
    let v2: core::fmt::rt::Argument;  // [bp-0x138]
    let v3: core::fmt::Arguments;  // [bp-0x128]
    let v4: u64;  // [bp-0x118]
    let v5: struct24;  // [bp-0x110], Other Possible Types: u64
    let v6: core::fmt::rt::Argument;  // [bp-0x108]
    let v7: core::fmt::rt::Argument;  // [bp-0x100]
    let v8: core::fmt::rt::Argument;  // [bp-0xf8]
    let v9: core::fmt::Arguments;  // [bp-0xe8]
    let v10: struct24;  // [bp-0xd8]
    let v11: Result<struct56, struct16>;  // [bp-0x58]
    let v13: u64;  // r12
    let v14: u64;  // rax
    let v15: u64;  // r12
    let v16: u64;  // rax

    v13 = 1;
    <vmm::logger::metrics::SharedIncMetric as vmm::logger::metrics::IncMetric>::add(&g_7c4790, 1);
    v5 = struct24 {
        field_0: a1
        field_8: a2
        field_16: 0
    };
    v11 = serde_json::de::from_trait(&v5, a2);
    v0 = core::result::Result<T,E>::inspect_err(&v11);
    v14 = v1;
    if v0.field_0 as i64 != 9223372036854775809 {
        v10 = v4;
        v9 = v3;
        v8 = v2;
        v6 = v0.field_0 as i64;
        v7 = v14;
        v5 = 5;
        v16 = firecracker::api_server::parsed_request::ParsedRequest::new_sync(a0 + 8, &v5);
    }
    return struct24 {
        field_0: v15
        field_8: 4
        field_16: v7
    };
}
