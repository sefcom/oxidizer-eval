fn fuel_core_client::reqwest_ext::FuelOperation<Operation>::new(a0: i64, a1: i64, a2: u32, a3: u32) -> long long {
    let v1: u64;  // rax
    let v2: u128;  // xmm0
    let v3: iNone;  // xmm1
    let v4: iNone;  // xmm2

    v1 = *((a1 + 96) as &i64);
    v2 = *(a1 as &i128);
    v3 = *((a1 + 16) as &i128);
    v4 = *((a1 + 32) as &i128);
    return struct112 {
        field_0: v2
        field_16: v3
        field_32: v4
        field_48: *((a1 + 48) as &i128)
        field_64: *((a1 + 64) as &i128)
        field_80: *((a1 + 80) as &i128)
        field_96: v1
        field_104: a2
        field_108: a3
    };
}
