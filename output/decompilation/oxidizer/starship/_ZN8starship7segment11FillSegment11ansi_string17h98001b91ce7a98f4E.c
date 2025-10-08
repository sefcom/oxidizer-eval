fn starship::segment::FillSegment::ansi_string(a0: i64, a1: i64, a2: i8, a3: i320, a4: i64) -> long long {
    let v0: &str;  // [bp-0x278]
    let v1: struct24;  // [bp-0x270], Other Possible Types: u192
    let v2: Option<struct48>;  // [bp-0x270]
    let v3: struct16;  // [bp-0x260]
    let v4: struct24;  // [bp-0x250]
    let v5: Option<struct24>;  // [bp-0x240]
    let v6: core::fmt::rt::Argument;  // [bp-0x238]
    let v7: Result<struct40, struct32>;  // [bp-0x230]
    let v8: struct24;  // [bp-0x228]
    let v9: Result<struct24, struct24>;  // [bp-0x224]
    let v10: core::fmt::Arguments;  // [bp-0x220]
    let v11: core::fmt::rt::Argument;  // [bp-0x218]
    let v12: struct24;  // [bp-0x208]
    let v13: core::fmt::Arguments;  // [bp-0x1f8]
    let v14: core::fmt::rt::Argument;  // [bp-0x1e8]
    let v15: core::fmt::rt::Argument;  // [bp-0x1e0]
    let v16: core::fmt::Arguments;  // [bp-0x1d8]
    let v17: core::fmt::rt::Argument;  // [bp-0x1d0]
    let v18: struct24;  // [bp-0x1cc]
    let v19: &str;  // [bp-0x1c8]
    let v20: u64;  // [bp-0x1c0]
    let v21: core::fmt::rt::Argument;  // [bp-0x1b8]
    let v22: struct69;  // [bp-0x1b0]
    let v23: Option<struct161>;  // [bp-0x30]
    let v24: struct24;  // [bp-0x28]
    let v26: core::fmt::rt::Argument;  // rcx

    if (a2 & 1) {
        v0 = a3;
        v26 = *((a1 + 16) as &i64);
        v20 = *((a1 + 8) as &i64);
        v21 = v26;
        v2 = 0;
        v3 = 0;
        v4 = 0;
        v5 = 0;
        v6 = v26;
        v7 = 0;
        v8 = 2;
        v9 = 268566529;
        v10 = 16;
        v11 = 0;
        v12 = 0;
        v13 = 0;
        v14 = v26;
        v15 = v26;
        v16 = 0;
        v17 = 2;
        v18 = 268566529;
        v19 = 16;
        v22 = core::iter::adapters::cycle::Cycle<I>::new(&v2);
        v23 = &v0;
        v24 = 0;
        v1 = core::iter::traits::iterator::Iterator::collect(&v22);
        if *((a1 + 24) as &i8) == 2 {
            return struct56 {
                field_0: v1 as i128
                field_16: v3
                padding_24: <UNKNOWN>
                field_48: <UNKNOWN>
                padding_40: <UNKNOWN>
                field_56: <UNKNOWN>
                padding_48: <UNKNOWN>
                field_57: 0
            };
        }
    } else {
        v1 = <alloc::string::String as core::clone::Clone>::clone(a1);
        if *((a1 + 24) as &i8) == 2 {
            return struct56 {
                field_0: v1 as i128
                field_16: v3
                padding_24: <UNKNOWN>
                field_48: <UNKNOWN>
                padding_40: <UNKNOWN>
                field_56: <UNKNOWN>
                padding_48: <UNKNOWN>
                field_57: 0
            };
        }
    }
    starship::config::Style::to_ansi_style(a0 + 48, a1 + 24, a4);
    return struct32 {
        field_0: v1 as i128
        field_16: v3
        field_24: 9223372036854775810
    };
}
