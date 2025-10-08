fn ruff_python_formatter::expression::expr_slice::leading_comments_spacing(a0: i64, a1: i64, a2: i64, a3: u64) -> long long {
    let v0: i8;  // [bp-0x41]
    let v1: struct32;  // [bp-0x40], Other Possible Types: u16
    let v2: u8;  // [bp-0x20]
    let v3: i8;  // [bp-0x10]
    let v5: u64;  // rax
    let v6: core::fmt::Arguments;  // rax

    if a3 {
        if *((a2 + 9) as &i8) {
            v1 = 513;
            v5 = *((*((a1 + 8) as &i64) + 24) as &i64)(*(a1 as &i64), &v1) as u64;
            return struct4 {
                field_0: 4
            };
        }
        v1 = struct32 {
            field_0: &v0
            field_8: &g_97cbf0
            field_16: &v0
            field_24: &g_97cbf0
        };
        v6 = <ruff_formatter::formatter::Formatter<Context> as ruff_formatter::buffer::Buffer>::write_fmt(&v2, a1, &v1, 2);
        if *(&v2 as &i32) != 4 {
            return struct24 {
                field_0: v2
                field_16: *(&v3 as &i64)
            };
        }
    }
    return struct4 {
        field_0: 4
    };
}
