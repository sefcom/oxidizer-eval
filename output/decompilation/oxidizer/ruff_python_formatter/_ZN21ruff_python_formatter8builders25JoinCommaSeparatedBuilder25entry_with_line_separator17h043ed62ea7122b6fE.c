fn ruff_python_formatter::builders::JoinCommaSeparatedBuilder::entry_with_line_separator(a0: void*, a1: u64, a2: u64) -> long long {
    let v0: u8;  // [bp-0x59]
    let v1: struct24;  // [bp-0x58]
    let v2: u32;  // [bp-0x58]
    let v3: u128;  // [bp-0x54]
    let v4: u32;  // [bp-0x4c]
    let v5: u32;  // [bp-0x44]
    let v6: struct48;  // [bp-0x40]
    let v8: u64;  // r14

    v0 = 0;
    v8 = a0 + 8;
    v6 = struct48 {
        field_0: a0[32] as i64
        field_8: a0
        field_16: &v0
        field_24: a1
        field_32: a2
        field_40: &g_97e6a0
    };
    if a0[8] as i32 == 4 {
        v1 = ruff_python_formatter::builders::JoinCommaSeparatedBuilder::entry_with_line_separator::{{closure}}(&v6);
    } else {
        v2 = a0[8] as i32;
        v3 = a0[12] as i128;
        v5 = a0[28] as i32;
    }
    *((v8 + 16) as &u64) = v1.field_16;
    *(v8 as &u32) = v2;
    *((v8 + 4) as &i64) = *((&v1.field_0 as &char + 4) as &i64);
    *((v8 + 12) as &u32) = v4;
    return a0;
}
