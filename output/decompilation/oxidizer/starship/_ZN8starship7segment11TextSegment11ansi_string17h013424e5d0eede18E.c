fn starship::segment::TextSegment::ansi_string(a0: i64, a1: i64, a2: i64) -> long long {
    let v0: &str;  // [bp-0x18]
    let v2: &str;  // rax
    let v3: &mut [u8];  // rax
    let v4: &str;  // rcx
    let v5: u64;  // rcx

    v0 = v2;
    if *((a1 + 24) as &i8) != 2 {
        starship::config::Style::to_ansi_style(a0 + 48, a1 + 24, a2);
    }
    v3 = *((a1 + 8) as &i64);
    v4 = *((a1 + 16) as &i64);
    return struct64 {
        field_0: 0x8000000000000000
        field_8: v2
        field_16: v5
        field_24: 9223372036854775810
        padding_32: <UNKNOWN>
        field_48: <UNKNOWN>
        padding_48: 0
        field_56: <UNKNOWN>
        padding_56: <UNKNOWN>
        field_57: 0
    };
}
