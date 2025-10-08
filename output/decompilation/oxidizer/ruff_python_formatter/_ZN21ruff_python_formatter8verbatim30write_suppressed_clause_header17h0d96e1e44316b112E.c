fn ruff_python_formatter::verbatim::write_suppressed_clause_header(a0: i64, a1: u64, a2: i64) -> long long {
    let v0: struct12;  // [bp-0x80]
    let v1: u8;  // [bp-0x7c]
    let v2: u32;  // [bp-0x78]
    let v3: struct16;  // [bp-0x74]
    let v4: struct24;  // [bp-0x70], Other Possible Types: struct32
    let v5: struct12;  // [bp-0x6c]
    let v6: u32;  // [bp-0x5c]
    let v7: i64;  // [bp-0x50]
    let v8: u64;  // [bp-0x48]
    let v9: u8;  // [bp-0x40]
    let v10: i8;  // [bp-0x30]
    let v12: struct24;  // rax
    let v13: core::option::Option<&str>;  // r15
    let v14: struct104;  // r12
    let v15: u64;  // rax
    let v16: u32;  // ebp
    let v17: struct16;  // edx
    let v18: struct16;  // rax

    v12 = *((*((a2 + 8) as &i64) + 48) as &i64)(*(a2 as &i64)) as i64;
    v13 = *(a1 as &i64);
    v14 = *((a1 + 8) as &i64);
    v4 = ruff_python_formatter::statement::clause::ClauseHeader::range(v13 as u32, v14 as u32, *(v12 as &i64), *((v12 + 8) as &i64));
    v15 = v4.field_0;
    v16 = v4.field_8;
    if v15 != 4 {
        return struct32 {
            field_0: v15 as u32
            field_4: v0
            field_8: v16
            field_12: <UNKNOWN>
            field_20: <UNKNOWN>
        };
    }
    v0 = v5;
    v2 = ruff_python_formatter::verbatim::verbatim_text(v0, v16);
    v3 = v17;
    v4 = struct32 {
        field_0: &v0
        field_8: &g_97fac8
        field_16: &v2
        field_24: &g_97e210
    };
    v7 = &v1;
    v8 = &g_97fac8;
    <ruff_formatter::formatter::Formatter<Context> as ruff_formatter::buffer::Buffer>::write_fmt(&v9, a2, &v4, 3);
    if *(&v9 as &i32) != 4 {
        return struct24 {
            field_0: v9
            field_16: *(&v10 as &i64)
        };
    }
    v18 = ruff_python_formatter::statement::clause::ClauseHeader::visit(v13, v14, *((*((a2 + 8) as &i64) + 48) as &i64)(*(a2 as &i64)) as i64 + 16) as u64;
    return struct4 {
        field_0: 4
    };
}
