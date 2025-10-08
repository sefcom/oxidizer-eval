fn firecracker::api_server::request::mmds::parse_put_mmds_config(a0: i64, a1: u64, a2: u64) -> long long {
    let v0: struct32;  // [bp-0x128]
    let v1: u64;  // [bp-0x128]
    let v2: u64;  // [bp-0x120]
    let v3: u64;  // [bp-0x118]
    let v4: i8;  // [bp-0x110]
    let v5: u32;  // [bp-0x10c]
    let v6: struct24;  // [bp-0x108]
    let v7: u8;  // [bp-0xf0]
    let v8: u128;  // [bp-0xe0]
    let v9: Result<struct32, struct16>;  // [bp-0xd0], Other Possible Types: struct16
    let v10: u64;  // [bp-0xc8]
    let v11: u64;  // [bp-0xc0]
    let v12: struct72;  // [bp-0xb8]
    let v13: struct32;  // [bp-0xb0]
    let v14: u32;  // [bp-0xaf]
    let v15: u32;  // [bp-0xac]
    let v17: struct12;  // rax
    let v18: u64;  // rax
    let v19: core::fmt::rt::Argument;  // rax

    v6 = struct24 {
        field_0: a1
        field_8: a2
        field_16: 0
    };
    v9 = serde_json::de::from_trait(&v6, a2);
    v0 = core::result::Result<T,E>::inspect_err(&v9);
    if (((0 ^ v0.field_0 as i64) & (0 ^ -(v1))) >> 63) as char {
        v17 = 1;
        return struct24 {
            field_0: v18
            field_8: 4
            field_16: v2
        };
    }
    v15 = v5;
    v14 = *((&v0.field_16 as &char + 9) as &i32);
    v10 = v0.field_0;
    v11 = v2;
    v12 = v3;
    v13 = v4;
    v9 = 26;
    firecracker::api_server::parsed_request::ParsedRequest::new_sync(&v7, &v9);
    if !(v4 & 1) {
        <vmm::logger::metrics::SharedIncMetric as vmm::logger::metrics::IncMetric>::add(&g_7c4980, 1);
        firecracker::api_server::parsed_request::ParsingInfo::append_deprecation_message(&v7, "PUT /mmds/config: V1 is deprecated. Use V2 instead.");
    }
    *((a0 + 24) as &u128) = v8;
    *((a0 + 8) as &u128) = v7;
    v19 = 0;
}
