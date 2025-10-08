fn firecracker::api_server::request::drive::parse_put_drive(a0: u64, a1: u64, a2: u64, a3: u64, a4: u64) -> int {
    let v0: struct24;  // [bp-0x248]
    let v1: struct17;  // [bp-0x230], Other Possible Types: u64
    let v2: Result<struct168, struct16>;  // [bp-0x230]
    let v3: u128;  // [bp-0x22a]
    let v4: u64;  // [bp-0x21a]
    let v5: struct16;  // [bp-0x178]
    let v6: u8;  // [bp-0x168]
    let v7: void*;  // [bp-0x130]
    let v8: u8;  // [bp-0x128]
    let v9: struct16;  // [bp-0xd0], Other Possible Types: struct24, u8
    let v10: u64;  // [bp-0xc8]
    let v11: u8;  // [bp-0xc0]
    let v13: struct16;  // rax
    let v15: u64;  // r14
    let v16: struct16;  // rax
    let v17: u64;  // r14
    let v18: u32;  // ecx
    let v19: u64;  // rcx
    let v20: iNone;  // xmm0

    <vmm::logger::metrics::SharedIncMetric as vmm::logger::metrics::IncMetric>::add(&g_7c4770, 1);
    if !a3 {
        <vmm::logger::metrics::SharedIncMetric as vmm::logger::metrics::IncMetric>::add(&g_7c4780, 1);
        return struct16 {
            field_0: 1
            field_8: 0
        };
    }
    v1 = firecracker::api_server::parsed_request::checked_id(a3, a4);
    v13 = v1.field_0;
    if v13 as u8 != 5 {
        v18 = *(&(&v1.field_0)[1] as &i32);
        v19 = v1.field_8;
        v20 = v3;
        return struct48 {
            field_0: 1
            field_8: v13 as u8
            field_9: *(&(&v1.field_0)[4] as &i32)
            field_12: v19
            field_16: v20
            field_24: <UNKNOWN>
        };
    }
    v0 = struct24 {
        field_0: a1
        field_8: a2
        field_16: 0
    };
    v1 = serde_json::de::from_trait(&v0, a2);
    core::result::Result<T,E>::inspect_err(&v9, &v1);
    if v9 == 4 {
        return struct24 {
            field_0: 1
            field_8: 4
            field_16: v10
        };
    }
    memcpy(&v6, &v11, 152);
    v5 = v9;
    if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(*((&v2 as &char + 8) as &i64), *((&v2 as &char + 16) as &i64), v7, *(&v8 as &i64)) {
        v15 = 1;
        <vmm::logger::metrics::SharedIncMetric as vmm::logger::metrics::IncMetric>::add(&g_7c4780, 1);
        v9 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("The id from the path does not match the id from the body!");
        v4 = v9.field_16;
        v3 = *(&v9.field_0 as &i128);
        v16 = *((&v3 as &char + 8) as &i64);
        return struct48 {
            field_0: v17
            field_8: 769
            field_10: <UNKNOWN>
            field_24: v4
            field_32: <UNKNOWN>
        };
    }
    memcpy(&v2 as u8, &v5, 168);
    v1 = 17;
    firecracker::api_server::parsed_request::ParsedRequest::new_sync(a0 + 8, &v1);
}
