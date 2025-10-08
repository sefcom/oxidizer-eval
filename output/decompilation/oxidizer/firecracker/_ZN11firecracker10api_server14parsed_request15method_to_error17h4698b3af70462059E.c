fn firecracker::api_server::parsed_request::method_to_error(a0: i64, a1: u8) -> long long {
    let v0: i8;  // [bp-0x46]
    let v1: iNone;  // [bp-0x40]
    let v2: u64;  // [bp-0x38]
    let v3: u64;  // [bp-0x30]
    let v4: u128;  // [bp-0x28]
    let v5: i8;  // [bp-0x18]
    let v7: u64;  // r14
    let v8: void*;  // rsi
    let v9: i64;  // rdi
    let v10: u64;  // rdx
    let v11: iNone;  // xmm0

    v7 = a0 + 10;
    <T as alloc::slice::<impl [T]>::to_vec_in::ConvertVec>::to_vec(v9, v8, v10);
    v3 = *(&v5 as &i64);
    *(&v1 as &u128) = v4;
    v11 = *(&v0 as &i128);
    *((v7 + 14) as &u64) = v2;
    *((v7 + 22) as &u64) = v3;
    *(v7 as void*) = v11;
    return struct16 {
        field_0: 1
        field_8: 769
    };
}
