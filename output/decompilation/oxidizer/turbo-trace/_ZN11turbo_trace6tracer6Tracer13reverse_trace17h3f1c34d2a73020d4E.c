fn turbo_trace::tracer::Tracer::reverse_trace(a0: i64, a1: i64) -> double {
    let v1: u128;  // xmm0
    let v2: iNone;  // xmm1
    let v3: iNone;  // xmm2

    v1 = *(a1 as &i128);
    v2 = *((a1 + 16) as &i128);
    v3 = *((a1 + 32) as &i128);
    return struct144 {
        field_0: v1
        field_16: v2
        field_32: v3
        field_48: *((a1 + 48) as &i128)
        field_64: *((a1 + 64) as &i128)
        field_80: *((a1 + 80) as &i128)
        field_96: *((a1 + 96) as &i128)
        padding_112: <UNKNOWN>
        field_360: <UNKNOWN>
    };
}
