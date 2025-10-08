fn firecracker::api_server::request::net::parse_patch_net(a0: i64, a1: u64, a2: u64, a3: u64, a4: u64) -> int {
    let v0: struct40;  // [bp-0x258]
    let v1: u64;  // [bp-0x250]
    let v2: iNone;  // [bp-0x230]
    let v3: i64;  // [bp-0x220]
    let v4: struct17;  // [bp-0x218]
    let v5: u64;  // [bp-0x218]
    let v6: Result<struct152, struct16>;  // [bp-0x218]
    let v7: u128;  // [bp-0x212]
    let v8: u64;  // [bp-0x202]
    let v9: struct22;  // [bp-0x160], Other Possible Types: u128
    let v10: u64;  // [bp-0x158]
    let v11: u8;  // [bp-0x150]
    let v12: struct16;  // [bp-0xc8]
    let v13: u8;  // [bp-0xb8]
    let v14: void*;  // [bp-0x40]
    let v15: u8;  // [bp-0x38]
    let v17: u64;  // rax
    let v18: struct32;  // rax
    let v19: Result<struct32, struct16>;  // rcx
    let v20: u32;  // ecx
    let v21: u64;  // rcx
    let v22: iNone;  // xmm0

    <vmm::logger::metrics::SharedIncMetric as vmm::logger::metrics::IncMetric>::add(&g_7c4650, 1);
    if !a3 {
        <vmm::logger::metrics::SharedIncMetric as vmm::logger::metrics::IncMetric>::add(&g_7c4650, 1);
        return struct16 {
            field_0: 1
            field_8: 0
        };
    }
    v4 = firecracker::api_server::parsed_request::checked_id(a3, a4);
    v17 = v4.field_0;
    if v17 != 5 {
        v20 = *(&(&v4.field_0)[1] as &i32);
        *((a0 + 12) as &i32) = *(&(&v4.field_0)[4] as &i32);
        *((a0 + 9) as &u32) = v20;
        v21 = v4.field_8;
        v22 = v7;
        *((a0 + 8) as &u8) = v17;
        *((a0 + 16) as &u64) = v21;
        *((a0 + 24) as void*) = v22;
    }
    v0 = struct40 {
        field_0: a1
        field_8: a2
        field_16: 0
        field_24: v4.field_8
        field_32: v4.field_16
    };
    v5 = serde_json::de::from_trait(&v0, a2);
    core::result::Result<T,E>::inspect_err(&v9, &v5);
    if v9 == 4 {
        *((a0 + 8) as &i8) = 4;
        *((a0 + 16) as &u64) = v10;
    }
    memcpy(&v13, &v11, 136);
    v12 = v9;
    if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((&v6 as &char + 8) as &i64), *((&v6 as &char + 16) as &i64), v14, *(&v15 as &i64)) {
        <vmm::logger::metrics::SharedIncMetric as vmm::logger::metrics::IncMetric>::add(&g_7c4650, 1);
        v0 as u64 = v14;
        v1 = *(&v15 as &i64);
        format!("The id from the path [{}] does not match the id from the body [{}]!", &v0 as u64, &v0 as u64);
        *(&v7 as void*) = v2;
        *(&v8 as &unsigned long) = v3;
        v18 = *((&v7 as &char + 8) as &i64);
        v19 = v8;
        return struct48 {
            field_0: 1
            field_8: 769
            field_10: <UNKNOWN>
            field_24: v19
            field_32: <UNKNOWN>
        };
    }
    memcpy(&v6 as u8, &v12, 152);
    v5 = 34;
    firecracker::api_server::parsed_request::ParsedRequest::new_sync(a0 + 8, &v5);
    return struct8 {
        field_0: 0
    };
}
