fn firecracker::api_server::request::mmds::parse_put_mmds(a0: u64, a1: u64, a2: u64, a3: void*, a4: u64) -> long long {
    let v0: void*;  // [bp-0x150], Other Possible Types: struct32
    let v1: u32;  // [bp-0x14c]
    let v2: struct40;  // [bp-0x148], Other Possible Types: u64
    let v3: u128;  // [bp-0x140]
    let v4: struct24;  // [bp-0x130]
    let v5: Result<struct32, struct9>;  // [bp-0x118]
    let v6: u128;  // [bp-0xf8]
    let v7: struct16;  // [bp-0xe8]
    let v8: i8;  // [bp-0xe0], Other Possible Types: u64
    let v9: u128;  // [bp-0xda]
    let v10: struct10;  // [bp-0xd8]
    let v11: struct24;  // [bp-0xd7]
    let v12: u32;  // [bp-0xd4]
    let v13: u64;  // [bp-0xd0]
    let v14: struct16;  // [bp-0xca]
    let v15: u128;  // [bp-0xc8]
    let v17: core::fmt::rt::Argument;  // rax
    let v18: struct16;  // rcx
    let v19: core::fmt::rt::Argument;  // al
    let v20: struct24;  // ecx
    let v21: Result<struct72, struct16>;  // rax

    <vmm::logger::metrics::SharedIncMetric as vmm::logger::metrics::IncMetric>::add(&g_7c4830, 1);
    if !a3 {
        v4 = struct24 {
            field_0: a1
            field_8: a2
            field_16: 0
        };
        v5 = serde_json::de::from_trait(&v4, a2);
        v0 = core::result::Result<T,E>::inspect_err(&v5);
        v19 = v0.field_0 as i8;
        if v19 != 6 {
            v20 = *((&v0.field_0 as &char + 1) as &i32);
            v12 = v1;
            v11 = v20;
            v15 = v3;
            v10 = v19;
            v13 = v2;
            v8 = 22;
            v21 = firecracker::api_server::parsed_request::ParsedRequest::new_sync(a0 + 8, &v8);
            return struct8 {
                field_0: 0
            };
        }
        return struct24 {
            field_0: 1
            field_8: 4
            field_16: v2
        };
    } else if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a3, a4, "config") {
        v0 = a3;
        v2 = a4;
        <vmm::logger::metrics::SharedIncMetric as vmm::logger::metrics::IncMetric>::add(&g_7c4840, 1);
        format!("Unrecognized PUT request path `{}`.", &v0 as u8);
        v9 = v6;
        v14 = v7;
        v17 = *((&v9 as &char + 8) as &i64);
        v18 = v14.field_0;
        return struct48 {
            field_0: 1
            field_8: 769
            field_10: <UNKNOWN>
            field_24: v18
            field_32: <UNKNOWN>
        };
    } else {
        return firecracker::api_server::request::mmds::parse_put_mmds_config(a0, a1, a2);
    }
}
