fn fuel_core_client::client::FuelClient::query(a0: i64, a1: i64, a2: i64) -> double {
    let v1: u128;  // xmm1
    let v2: iNone;  // xmm2
    let v3: iNone;  // xmm3
    let v4: iNone;  // xmm0

    v1 = *((a2 + 16) as &i128);
    v2 = *((a2 + 32) as &i128);
    v3 = *((a2 + 48) as &i128);
    v4 = *((a2 + 64) as &i128);
    return struct96 {
        field_0: *(a2 as &i128)
        field_16: v1
        field_32: v2
        field_48: v3
        field_64: v4
        field_80: a1
        padding_88: <UNKNOWN>
        field_112: <UNKNOWN>
    };
}
