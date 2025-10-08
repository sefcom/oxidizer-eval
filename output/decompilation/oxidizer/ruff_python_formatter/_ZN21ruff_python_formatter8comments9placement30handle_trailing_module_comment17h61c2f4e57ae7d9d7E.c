fn ruff_python_formatter::comments::placement::handle_trailing_module_comment(a0: i64, a1: i64, a2: i64) -> double {
    let v0: u64;  // [bp-0x18]
    let v1: u64;  // [bp-0x10]
    let v2: u64;  // [bp-0x8]
    let v4: u64;  // r15
    let v5: u64;  // r14
    let v6: u64;  // rbx
    let v7: u8;  // bl
    let v8: u64;  // rdx
    let v9: core::fmt::Arguments;  // xmm0
    let v10: u8;  // al
    let v11: core::fmt::Arguments;  // xmm0
    let v12: u128;  // xmm1
    let v13: iNone;  // xmm2

    if a2[16] as i32 == 94 && a2[32] as i64 == 94 {
        if *((a1 + 16) as &i64) {
            v2 = v4;
            v1 = v5;
            v0 = v6;
            v7 = a2[72] as i8;
            return struct40 {
                field_0: 95
                field_8: <ruff_python_ast::generated::AnyNodeRef as core::convert::From<&ruff_python_ast::generated::Stmt>>::from(*((a1 + 16) as &i64) * 128 + *((a1 + 8) as &i64) - 128) as u64
                field_16: v8
                field_24: a2[64] as i64
                field_32: 0
                field_33: v7
            };
        }
        v9 = *(a2 as &i128);
        v10 = a2[72] as i8;
        return struct40 {
            field_0: 94
            field_8: v9
            field_24: a2[64] as i64
            field_32: 0
            field_33: v10
        };
    }
    v11 = *(a2 as &i128);
    v12 = a2[16] as i128;
    v13 = a2[32] as i128;
    return struct80 {
        field_0: v11
        field_16: v12
        field_32: v13
        field_48: a2[48] as i128
        field_64: a2[64] as i128
    };
}
