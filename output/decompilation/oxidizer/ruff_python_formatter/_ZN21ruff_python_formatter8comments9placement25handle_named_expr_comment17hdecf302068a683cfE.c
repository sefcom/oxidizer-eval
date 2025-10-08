fn ruff_python_formatter::comments::placement::handle_named_expr_comment(a0: i64, a1: void*, a2: u64, a3: u64) -> long long {
    let v0: struct21;  // [bp-0x60]
    let v1: u64;  // [bp-0x58]
    let v2: u64;  // [bp-0x50]
    let v3: u64;  // [bp-0x48]
    let v4: struct12;  // [bp-0x3c]
    let v6: u128;  // xmm0
    let v7: iNone;  // xmm1
    let v8: iNone;  // xmm2
    let v9: i64;  // r13
    let v10: struct24;  // eax
    let v11: u32;  // edx
    let v12: u32;  // eax
    let v13: u32;  // ecx
    let v14: struct16;  // 4096
    let v15: i64;  // r13
    let v16: i64;  // rax
    let v17: u8;  // cl
    let v18: u64;  // rdi
    let v19: u64;  // rax

    if !(a1[32] as i64 != 94 & a1[16] as i64 != 94) {
        v6 = *(a1 as &i128);
        v7 = a1[16] as i128;
        v8 = a1[32] as i128;
        return struct80 {
            field_0: v6
            field_16: v7
            field_32: v8
            field_48: a1[48] as i128
            field_64: a1[64] as i128
        };
    }
    v0 = a1[16] as i64;
    v1 = a1[24] as i64;
    v2 = a1[32] as i64;
    v3 = a1[40] as i64;
    v9 = &v0;
    <ruff_python_ast::generated::AnyNodeRef as ruff_text_size::traits::Ranged>::range(&v0);
    v10 = <ruff_python_ast::generated::AnyNodeRef as ruff_text_size::traits::Ranged>::range(&v2) as u32;
    if v11 > v10 {
        core::panicking::panic("assertion failed: start.raw <= end.raw"); /* do not return */
    }
    v4 = ruff_python_trivia::tokenizer::find_only_token_in_range(v11, v10, 48, a2, a3);
    v12 = a1[68] as i32;
    v13 = v4.field_0;
    if v13 <= v12 {
        v14 = a1;
    } else {
        v14 = v9;
    }
    v15 = v14;
    v16 = &v1;
    v17 = a1[72] as i8;
    v18 = a1[64] as i64;
    v19 = *(v16 as &i64);
    return struct40 {
        field_0: 96 - (v12 < v13) as u8 as u64
        field_8: *(v15 as &i64)
        field_16: v19
        field_24: v18
        field_32: 0
        field_33: v17
    };
}
