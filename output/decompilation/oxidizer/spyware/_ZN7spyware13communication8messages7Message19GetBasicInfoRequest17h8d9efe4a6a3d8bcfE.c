fn spyware::communication::messages::Message::GetBasicInfoRequest(a0: i64, a1: i64) -> double {
    let v1: u128;  // xmm0

    v1 = *(a1 as &i128);
    return struct32 {
        field_0: 9223372036854775812
        field_8: v1
        field_24: *((a1 + 16) as &i64)
    };
}
