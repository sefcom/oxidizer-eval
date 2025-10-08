fn ruff_python_formatter::statement::stmt_function_def::format_function_header(a0: i64, a1: i64, a2: i64) -> int {
    let v0: i8;  // [bp-0xb1], Other Possible Types: u8
    let v1: u64;  // [bp-0xb0]
    let v2: &str;  // [bp-0xa8], Other Possible Types: struct21
    let v3: &str;  // [bp-0xa8], Other Possible Types: struct21
    let v4: struct24;  // [bp-0x90], Other Possible Types: struct32, u64
    let v5: u64;  // [bp-0x88]
    let v6: i64;  // [bp-0x80], Other Possible Types: unsigned long
    let v7: i64;  // [bp-0x78]
    let v8: struct16;  // [bp-0x70]
    let v9: struct16;  // [bp-0x68]
    let v10: i64;  // [bp-0x60]
    let v11: u64;  // [bp-0x58]
    let v12: struct16;  // [bp-0x50], Other Possible Types: u8
    let v13: u64;  // [bp-0x40]
    let v14: iNone;  // [bp-0x38], Other Possible Types: u8
    let v15: i8;  // [bp-0x28]
    let v17: i64;  // rax
    let v18: struct16;  // xmm0
    let v19: u128;  // xmm0
    let v20: iNone;  // xmm0
    let v21: iNone;  // xmm0

    v10 = a2;
    v17 = *((*((a1 + 8) as &i64) + 48) as &i64)(*(a1 as &i64)) as i64;
    alloc::rc::RcInnerPtr::inc_strong(*((v17 + 16) as &i64));
    v1 = *((v17 + 16) as &i64);
    if *((a2 + 124) as &i8) {
        v3 = "async";
        v4 = struct32 {
            field_0: &v3 as u64
            field_8: &g_97c890
            field_16: &v0
            field_24: &g_97cbf0
        };
        <ruff_formatter::formatter::Formatter<Context> as ruff_formatter::buffer::Buffer>::write_fmt(&v12, a1, &v4, 2);
        if *(&v12 as &i32) != 4 {
            v18 = v12;
            return struct24 {
                field_0: v19
                field_16: v13
            };
        }
    }
    v2 = "def";
    v11 = a2 + 48;
    v4 = struct32 {
        field_0: &v2 as u64
        field_8: &g_97c890
        field_16: &v0
        field_24: &g_97cbf0
    };
    v8 = &v11;
    v9 = &g_97a988.field_0;
    <ruff_formatter::formatter::Formatter<Context> as ruff_formatter::buffer::Buffer>::write_fmt(&v14, a1, &v4, 3);
    if *(&v14 as &i32) != 4 {
        *((a0 + 16) as &i64) = *(&v15 as &i64);
        v21 = v14;
    }
    if *((a2 + 104) as &i64) {
        v3 = *((a2 + 104) as &i64);
        v4 = ruff_python_formatter::FormatNodeRule::fmt(&v2 as u64, *((a2 + 104) as &i64), a1);
        if v4.field_0 as i32 != 4 {
            *((a0 + 16) as &unsigned long) = v6;
            v20 = v4.field_0;
        }
    }
    v4 = a2 + 88;
    v5 = a2 + 112;
    v6 = &v1;
    v7 = &v10;
    v2 = struct21 {
        field_0: &v4
        field_8: &g_97ed78
        field_16: 0
        field_20: 0
    };
    <ruff_formatter::builders::Group<Context> as ruff_formatter::Format<Context>>::fmt(a0, &v2, a1);
}
