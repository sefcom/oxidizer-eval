fn firecracker::api_server::request::drive::parse_patch_drive(a0: i64, a1: u64, a2: u64, a3: u64, a4: u64) -> int {
    let v0: struct24;  // [bp-0x1e0]
    let v1: u64;  // [bp-0x1c8]
    let v2: u64;  // [bp-0x1c0]
    let v3: iNone;  // [bp-0x1b8]
    let v4: iNone;  // [bp-0x1a8]
    let v5: iNone;  // [bp-0x198]
    let v6: u128;  // [bp-0x188]
    let v7: void*;  // [bp-0x180]
    let v8: u128;  // [bp-0x178]
    let v9: iNone;  // [bp-0x168]
    let v10: struct17;  // [bp-0x158]
    let v11: u64;  // [bp-0x158]
    let v12: Result<struct112, struct16>;  // [bp-0x158]
    let v13: u128;  // [bp-0x152]
    let v14: u128;  // [bp-0x150]
    let v15: u64;  // [bp-0x142]
    let v16: iNone;  // [bp-0x140]
    let v17: iNone;  // [bp-0x130]
    let v18: iNone;  // [bp-0x120]
    let v19: iNone;  // [bp-0x110]
    let v20: iNone;  // [bp-0x100]
    let v21: iNone;  // [bp-0xf0]
    let v22: struct24;  // [bp-0xa0]
    let v23: struct112;  // [bp-0xa0]
    let v24: u64;  // [bp-0x98]
    let v25: u128;  // [bp-0x90]
    let v26: iNone;  // [bp-0x80]
    let v27: iNone;  // [bp-0x70]
    let v28: iNone;  // [bp-0x60]
    let v29: iNone;  // [bp-0x50]
    let v31: u64;  // rax
    let v32: u64;  // r15
    let v33: u64;  // r12
    let v34: u64;  // rax
    let v35: struct16;  // rax
    let v36: struct40;  // rcx
    let v37: u32;  // ecx
    let v38: u64;  // rcx
    let v39: iNone;  // xmm0

    <vmm::logger::metrics::SharedIncMetric as vmm::logger::metrics::IncMetric>::add(&_ZN3vmm6logger7metrics7METRICS17h0c8a4aaa89fce6d9E, 1);
    if !a3 {
        <vmm::logger::metrics::SharedIncMetric as vmm::logger::metrics::IncMetric>::add(&g_7c4640, 1);
        return struct16 {
            field_0: 1
            field_8: 0
        };
    }
    v10 = firecracker::api_server::parsed_request::checked_id(a3, a4);
    v31 = v10.field_0;
    if v31 != 5 {
        v37 = *(&(&v10.field_0)[1] as &i32);
        *((a0 + 12) as &i32) = *(&(&v10.field_0)[4] as &i32);
        *((a0 + 9) as &u32) = v37;
        v38 = v10.field_8;
        v39 = v13;
        *((a0 + 8) as &u8) = v31;
        *((a0 + 16) as &u64) = v38;
        *((a0 + 24) as void*) = v39;
    }
    v32 = v10.field_8;
    v33 = v10.field_16;
    v0 = struct24 {
        field_0: a1
        field_8: a2
        field_16: 0
    };
    v11 = serde_json::de::from_trait(&v0, a2);
    v23 = core::result::Result<T,E>::inspect_err(&v11);
    v34 = v24;
    if v23.field_0 as i64 == 4 {
        *((a0 + 8) as &i8) = 4;
        *((a0 + 16) as &u64) = v2;
    }
    v9 = v23.field_96;
    v8 = v29;
    *(&v6 as void*) = v28;
    v5 = v27;
    v4 = v26;
    v3 = v25;
    v1 = v23.field_0;
    v2 = v34;
    if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(v32, v33, v7, v8 as i64) {
        <vmm::logger::metrics::SharedIncMetric as vmm::logger::metrics::IncMetric>::add(&g_7c4640, 1);
        v22 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("The id from the path does not match the id from the body!");
        v15 = v22.field_16;
        v13 = *(&v22.field_0 as &i128);
        v35 = *((&v13 as &char + 8) as &i64);
        v36 = v15;
        return struct48 {
            field_0: 1
            field_8: 769
            field_10: <UNKNOWN>
            field_24: v36
            field_32: <UNKNOWN>
        };
    }
    v21 = v9;
    v20 = v8;
    v19 = v6;
    v18 = v5;
    v17 = v4;
    v16 = v3;
    v14 = *(&v1 as &i128);
    v11 = 33;
    firecracker::api_server::parsed_request::ParsedRequest::new_sync(a0 + 8, &v11);
    return struct8 {
        field_0: 0
    };
}
