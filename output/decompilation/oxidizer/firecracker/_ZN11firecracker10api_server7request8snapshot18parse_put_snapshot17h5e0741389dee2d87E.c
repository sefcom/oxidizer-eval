fn firecracker::api_server::request::snapshot::parse_put_snapshot(a0: i64, a1: u64, a2: u64, a3: void*, a4: u32) -> long long {
    let v0: i8;  // [bp-0x98]
    let v1: u128;  // [bp-0x92]
    let v2: u64;  // [bp-0x82]
    let v3: struct24;  // [bp-0x68]
    let v4: u64;  // [bp-0x58]
    let v6: u128;  // [bp-0x40]
    let v7: i8;  // [bp-0x30]
    let v9: u64;  // rax
    let v10: u64;  // rcx

    if !a3 {
        v3 = <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec("Missing snapshot operation type.");
        v2 = v4;
        v1 = *(&v3.field_0 as &i128);
        *((a0 + 8) as &i16) = 769;
    } else if <[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a3, a4, "create") {
        return firecracker::api_server::request::snapshot::parse_put_snapshot_create(a0, a1, a2);
    } else if !<[A] as core::slice::cmp::SlicePartialEq<B>>::equal(a3, a4, "load") {
        format!("/snapshot/{}", &v5);
        v1 = v6;
        v2 = *(&v7 as &i64);
        return struct48 {
            field_0: 1
            field_8: 259
            field_10: <UNKNOWN>
            field_24: v10
            field_32: <UNKNOWN>
        };
    } else {
        return firecracker::api_server::request::snapshot::parse_put_snapshot_load(a0, a1, a2);
    }
}
