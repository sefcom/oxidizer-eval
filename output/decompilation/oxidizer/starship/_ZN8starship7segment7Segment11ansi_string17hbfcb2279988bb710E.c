fn starship::segment::Segment::ansi_string(a1: i64, a2: i64, a3: i64) -> : struct49 {
    let a0: u64;  // rdi

    if !*(a1 as &i64) {
        starship::segment::TextSegment::ansi_string(a0, a1 + 8, a2);
        return;
    } else if *(a1 as &i64) == 1 {
        starship::segment::FillSegment::ansi_string(a0, a1 + 8, 0, a3, a2);
        return;
    } else {
        return struct64 {
            field_0: 0x8000000000000000
            field_8: &g_52d3e7
            field_16: 1
            field_24: 9223372036854775810
            padding_32: <UNKNOWN>
            field_48: <UNKNOWN>
            padding_48: 0
            field_56: <UNKNOWN>
            padding_56: <UNKNOWN>
            field_57: 0
        };
    }
}
