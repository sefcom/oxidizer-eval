fn firecracker::api_server::request::actions::parse_put_actions(a0: u64, a1: u64, a2: u64) -> long long {
    let v0: struct16;  // [bp-0xf8]
    let v1: u64;  // [bp-0xf0]
    let v2: struct9;  // [bp-0xe8]
    let v3: struct24;  // [bp-0xd8], Other Possible Types: u64
    let v5: u64;  // r12
    let v6: u64;  // rax
    let v7: u64;  // r12
    let v8: u32;  // eax
    let v9: u64;  // rax

    v5 = 1;
    <vmm::logger::metrics::SharedIncMetric as vmm::logger::metrics::IncMetric>::add(&g_7c4730, 1);
    v3 = struct24 {
        field_0: a1
        field_8: a2
        field_16: 0
    };
    v2 = serde_json::de::from_trait(&v3, a2);
    v0 = core::result::Result<T,E>::inspect_err(&v2);
    if v0.field_0 as i8 != 1 {
        v8 = *((&v0.field_0 as &char + 1) as &i8);
        v3 = (!v8 ? 16 : (v8 == 1 ? 29 : 30));
        v9 = firecracker::api_server::parsed_request::ParsedRequest::new_sync(a0 + 8, &v3);
    }
    v6 = v1;
    return struct24 {
        field_0: v7
        field_8: 4
        field_16: v1
    };
}
