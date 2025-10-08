fn firecracker::api_server::request::vsock::parse_put_vsock(a0: i64, a1: u64, a2: u64) -> long long {
    let v0: iNone;  // [bp-0x168]
    let v1: core::fmt::rt::Argument;  // [bp-0x158]
    let v2: struct24;  // [bp-0x150]
    let v3: struct56;  // [bp-0x138]
    let v4: u64;  // [bp-0x130]
    let v5: u64;  // [bp-0x128]
    let v6: u64;  // [bp-0x120]
    let v7: iNone;  // [bp-0x118]
    let v8: core::fmt::rt::Argument;  // [bp-0x108]
    let v9: struct16;  // [bp-0x100], Other Possible Types: u8
    let v10: struct24;  // [bp-0xf0]
    let v11: Result<struct56, struct16>;  // [bp-0xe0], Other Possible Types: struct64
    let v13: u64;  // r12
    let v14: u64;  // r15
    let v15: u64;  // r14
    let v16: struct16;  // rax
    let v17: struct24;  // rax
    let v18: u64;  // r12
    let v19: core::fmt::rt::Argument;  // rax
    let v20: void*;  // r12

    v13 = 1;
    <vmm::logger::metrics::SharedIncMetric as vmm::logger::metrics::IncMetric>::add(&g_7c4850, 1);
    v2 = struct24 {
        field_0: a1
        field_8: a2
        field_16: 0
    };
    v11 = serde_json::de::from_trait(&v2, a2);
    v3 = core::result::Result<T,E>::inspect_err(&v11);
    v14 = v3.field_0;
    v15 = v4;
    v16 = v14;
    v17 = -(v16);
    if (((0 ^ v16) & (0 ^ -(v16))) >> 63) as char {
        return struct24 {
            field_0: v18
            field_8: 4
            field_16: v15
        };
    }
    v0 = v7;
    v1 = v8;
    if v6 == 0x8000000000000000 {
        v11 = struct64 {
            field_0: 27
            field_8: v14
            field_16: v15
            field_24: v5
            field_32: 0x8000000000000000
            field_40: v0
            field_56: v1
        };
        v19 = firecracker::api_server::parsed_request::ParsedRequest::new_sync(&v9, &v11);
    } else {
        <vmm::logger::metrics::SharedIncMetric as vmm::logger::metrics::IncMetric>::add(&g_7c4980, 1);
        v11 = struct64 {
            field_0: 27
            field_8: v14
            field_16: v15
            padding_24: <UNKNOWN>
            field_32: v6
            field_40: v0
            field_56: v1
        };
        firecracker::api_server::parsed_request::ParsedRequest::new_sync(&v9, &v11);
        v19 = firecracker::api_server::parsed_request::ParsingInfo::append_deprecation_message(&v9, "PUT /vsock: vsock_id field is deprecated.");
    }
    *((a0 + 24) as &struct24) = v10;
    *((a0 + 8) as &struct16) = v9;
    v20 = 0;
}
