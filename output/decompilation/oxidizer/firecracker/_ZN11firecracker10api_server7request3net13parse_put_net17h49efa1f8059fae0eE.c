fn firecracker::api_server::request::net::parse_put_net(a0: i64, a1: u64, a2: u64, a3: u64, a4: u64) -> int {
    let v0: struct40;  // [bp-0x298]
    let v1: struct24;  // [bp-0x290]
    let v2: iNone;  // [bp-0x270]
    let v3: i64;  // [bp-0x260]
    let v4: struct17;  // [bp-0x258]
    let v5: Result<struct184, struct16>;  // [bp-0x258]
    let v6: u128;  // [bp-0x252]
    let v7: u64;  // [bp-0x242]
    let v8: struct16;  // [bp-0x1a0], Other Possible Types: struct24, u8
    let v9: struct32;  // [bp-0x198]
    let v10: u8;  // [bp-0x190]
    let v11: struct16;  // [bp-0xe8]
    let v12: u8;  // [bp-0xd8]
    let v13: void*;  // [bp-0x60]
    let v14: u8;  // [bp-0x58]
    let v16: u64;  // rax
    let v17: struct32;  // rax
    let v18: Result<struct32, struct16>;  // rcx
    let v19: u32;  // ecx
    let v20: u64;  // rcx
    let v21: iNone;  // xmm0

    <vmm::logger::metrics::SharedIncMetric as vmm::logger::metrics::IncMetric>::add(&g_7c4810, 1);
    if !a3 {
        <vmm::logger::metrics::SharedIncMetric as vmm::logger::metrics::IncMetric>::add(&g_7c4820, 1);
        *((a0 + 8) as &i8) = 0;
    }
    v4 = firecracker::api_server::parsed_request::checked_id(a3, a4);
    v16 = v4.field_0;
    if v16 != 5 {
        v19 = *(&(&v4.field_0)[1] as &i32);
        v20 = v4.field_8;
        v21 = v6;
        return struct48 {
            field_0: 1
            field_8: v16 as u8
            field_9: *(&(&v4.field_0)[4] as &i32)
            field_12: v20
            field_16: v21
            field_24: <UNKNOWN>
        };
    }
    v0 = struct40 {
        field_0: a1
        field_8: a2
        field_16: 0
        field_24: v4.field_8
        field_32: v4.field_16
    };
    v5 = serde_json::de::from_trait(&v0, a2);
    core::result::Result<T,E>::inspect_err(&v8, &v5);
    if v8 == 4 {
        *((a0 + 8) as &i8) = 4;
        *((a0 + 16) as &struct32) = v9;
    }
    memcpy(&v12, &v10, 168);
    v11 = v8;
    if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((&v5 as &char + 8) as &i64), *((&v5 as &char + 16) as &i64), v13, *(&v14 as &i64)) {
        <vmm::logger::metrics::SharedIncMetric as vmm::logger::metrics::IncMetric>::add(&g_7c4820, 1);
        v0 as u64 = v13;
        v1 = *(&v14 as &i64);
        format!("The id from the path [{}] does not match the id from the body [{}]!", &v0 as u64, &v0 as u64);
        *(&v6 as void*) = v2;
        *(&v7 as &unsigned long) = v3;
        v17 = *((&v6 as &char + 8) as &i64);
        v18 = v7;
        return struct48 {
            field_0: 1
            field_8: 769
            field_10: <UNKNOWN>
            field_24: v18
            field_32: <UNKNOWN>
        };
    }
    firecracker::api_server::parsed_request::ParsedRequest::new_sync(a0 + 8, &v11);
    return struct8 {
        field_0: 0
    };
}
