fn turbo_trace::tracer::Tracer::trace(a0: i64, a1: i64, a2: i64, a3: i64) -> double {
    let v1: u128;  // xmm0
    let v2: iNone;  // xmm1
    let v3: iNone;  // xmm2

    v1 = *(a1 as &i128);
    v2 = *((a1 + 16) as &i128);
    v3 = *((a1 + 32) as &i128);
    return struct304 {
        field_0: a2
        field_8: a3
        field_16: v1
        field_32: v2
        field_48: v3
        field_64: *((a1 + 48) as &i128)
        field_80: *((a1 + 64) as &i128)
        field_96: *((a1 + 80) as &i128)
        field_112: *((a1 + 96) as &i128)
        padding_128: <UNKNOWN>
        field_1512: <UNKNOWN>
    };
}
