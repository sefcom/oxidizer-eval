fn ruff_python_formatter::statement::clause::ClauseHeader::range(a0: i64, a1: u32, a2: u32, a3: i64, a4: i64) -> long long {
    let v0: u32;  // [bp-0x58]
    let v1: struct12;  // [bp-0x50], Other Possible Types: u8
    let v2: u32;  // [bp-0x4c]
    let v3: struct16;  // [bp-0x48]
    let v4: struct26;  // [bp-0x44]
    let v5: i8;  // [bp-0x3c]
    let v6: u32;  // [bp-0x34]
    let v8: core::fmt::Arguments;  // rax

    ruff_python_formatter::statement::clause::ClauseHeader::first_keyword_range(&v1, a1);
    v8 = v1 as u64;
    if v8 as u32 != 4 {
        return struct32 {
            field_0: v8 as u32
            field_4: v2
            field_8: v3
            field_12: <UNKNOWN>
            field_20: <UNKNOWN>
        };
    }
    v6 = v2;
    v0 = 0;
    ruff_python_formatter::statement::clause::ClauseHeader::visit(a1, a2, &v0);
}
