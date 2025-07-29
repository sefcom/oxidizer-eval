fn spyware::communication::messages::Message::GetBasicInfoResponse(a0: i64, a1: i64) -> double {
    let v1: u128;  // xmm0
    let v2: u128;  // xmm1
    let v3: u128;  // xmm2

    v1 = *(a1 as &i128);
    v2 = *((a1 + 16) as &i128);
    v3 = *((a1 + 32) as &i128);
    return struct64 {
        field_0: v1
        field_16: v2
        field_32: v3
        field_48: *((a1 + 48) as &i128)
    };
}
