fn firecracker::api_server::request::mmds::parse_patch_mmds(a0: u64, a1: u64, a2: u64) -> long long {
    let v0: struct32;  // [bp-0x110]
    let v1: u32;  // [bp-0x10c]
    let v2: u64;  // [bp-0x108]
    let v3: iNone;  // [bp-0x100]
    let v4: struct24;  // [bp-0xf0]
    let v5: Result<struct32, struct9>;  // [bp-0xd8], Other Possible Types: core::fmt::rt::Argument
    let v6: u8;  // [bp-0xd0]
    let v7: u32;  // [bp-0xcf]
    let v8: struct9;  // [bp-0xcc]
    let v9: core::fmt::Arguments;  // [bp-0xc8]
    let v10: iNone;  // [bp-0xc0]
    let v12: u64;  // r12
    let v13: u64;  // rax
    let v14: u64;  // r12
    let v15: u64;  // rax

    v12 = 1;
    <vmm::logger::metrics::SharedIncMetric as vmm::logger::metrics::IncMetric>::add(&g_7c4690, 1);
    v4 = struct24 {
        field_0: a1
        field_8: a2
        field_16: 0
    };
    v5 = serde_json::de::from_trait(&v4, a2);
    v0 = core::result::Result<T,E>::inspect_err(&v5);
    if v0.field_0 as i8 != 6 {
        v8 = v1;
        v7 = *((&v0.field_0 as &char + 1) as &i32);
        v10 = v3;
        v6 = v0.field_0;
        v9 = v2;
        v5 = 20;
        v15 = firecracker::api_server::parsed_request::ParsedRequest::new_sync(a0 + 8, &v5);
    }
    v13 = v2;
    return struct24 {
        field_0: v14
        field_8: 4
        field_16: v2
    };
}
