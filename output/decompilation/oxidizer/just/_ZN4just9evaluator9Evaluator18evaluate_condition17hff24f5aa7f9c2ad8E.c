fn just::evaluator::Evaluator::evaluate_condition(a0: i64, a1: u32, a2: i64) -> int {
    let v0: iNone;  // [bp-0x198]
    let v1: u64;  // [bp-0x188]
    let v4: struct56;  // [bp-0x160], Other Possible Types: u8
    let v5: i8;  // [bp-0x15f]
    let v6: i8;  // [bp-0x158]
    let v7: u128;  // [bp-0x150]
    let v8: u64;  // [bp-0x148]
    let v9: u128;  // [bp-0x140]
    let v10: iNone;  // [bp-0x130], Other Possible Types: u128
    let v11: u128;  // [bp-0x120]
    let v12: u128;  // [bp-0x110]
    let v13: i8;  // [bp-0x100]
    let v14: u128;  // [bp-0xd8]
    let v15: iNone;  // [bp-0xc9], Other Possible Types: struct24
    let v17: u64;  // rax

    just::evaluator::Evaluator::evaluate_expression(&v4, a1, *(a2 as &i64));
    v17 = v4 as u64;
    if v17 != 56 {
        v15 = v7;
        v14 = *(&v5 as &i128);
        return struct112 {
            field_0: v17 as u8
            field_1: <UNKNOWN>
            field_16: <UNKNOWN>
            field_32: <UNKNOWN>
            field_48: <UNKNOWN>
            field_64: <UNKNOWN>
            field_80: <UNKNOWN>
            field_96: <UNKNOWN>
        };
    }
    v0 = *(&v6 as &i128);
    v1 = v8;
    just::evaluator::Evaluator::evaluate_expression(&v4, a1, *((a2 + 8) as &i64));
    v15 = v7;
    v14 = *(&v5 as &i128);
    return struct112 {
        field_0: v4
        field_1: <UNKNOWN>
        field_16: <UNKNOWN>
        field_32: <UNKNOWN>
        field_48: <UNKNOWN>
        field_64: <UNKNOWN>
        field_80: <UNKNOWN>
        field_96: <UNKNOWN>
    };
}
