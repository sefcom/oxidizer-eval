fn firecracker::api_server::parsed_request::checked_id(a0: i64, a1: u64, a2: u64) -> char {
    let v0: struct16;  // [bp-0x28]
    let v2: u8;  // al
    let v4: u8;  // cl
    let v5: u8;  // cl

    v0 = struct16 {
        field_0: a1
        field_8: a1 + a2
    };
    v2 = <core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(core::iter::traits::iterator::Iterator::try_fold(&v0), a1);
    v4 = 5;
    return struct24 {
        field_0: v5
        padding_1: <UNKNOWN>
        field_8: a1
        field_16: a2
    };
}
