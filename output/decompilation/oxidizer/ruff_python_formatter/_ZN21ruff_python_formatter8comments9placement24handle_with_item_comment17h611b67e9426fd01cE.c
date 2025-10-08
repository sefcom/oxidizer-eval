fn ruff_python_formatter::comments::placement::handle_with_item_comment(a0: i64, a1: void*, a2: u64, a3: u64) -> long long {
    let v0: u64;  // [bp-0x68]
    let v1: i64;  // [bp-0x60]
    let v2: u64;  // [bp-0x50]
    let v3: i64;  // [bp-0x48]
    let v4: struct12;  // [bp-0x3c]
    let v6: u128;  // xmm0
    let v7: iNone;  // xmm1
    let v8: iNone;  // xmm2
    let v9: i64;  // r15
    let v10: u32;  // eax
    let v11: u32;  // edx
    let v12: u64;  // rax
    let v13: u8;  // cl
    let v14: u64;  // rdx
    let v15: struct21;  // r15
    let v17: u32;  // edi

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
    v2 = a1[16] as i64;
    v3 = a1[24] as i64;
    v0 = a1[32] as i64;
    v1 = a1[40] as i64;
    v9 = &v2;
    <ruff_python_ast::generated::AnyNodeRef as ruff_text_size::traits::Ranged>::range(&v2);
    v10 = <ruff_python_ast::generated::AnyNodeRef as ruff_text_size::traits::Ranged>::range(&v0) as u32;
    if v11 > v10 {
        core::panicking::panic("assertion failed: start.raw <= end.raw"); /* do not return */
    }
    v4 = ruff_python_trivia::tokenizer::find_only_token_in_range(v11, v10, 53, a2, a3);
    v12 = a1[68] as i32;
    v13 = a1[72] as i8;
    if v12 < v4.field_0 {
        v14 = 95;
        v15 = v9;
    } else if v13 {
        v14 = 94;
        v15 = &v0;
        v3 = v1;
    } else {
        v3 = a1[8] as i64;
        v14 = 96;
        v13 = 0;
        v15 = a1;
    }
    v17 = a1[64] as i32;
    return struct40 {
        field_0: v14
        field_8: *(v15 as &i64)
        field_16: v3
        field_24: v17
        field_28: v12 as u32
        field_32: 0
        field_33: v13
    };
}
