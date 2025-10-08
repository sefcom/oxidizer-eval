fn ruff_python_formatter::comments::placement::handle_trailing_binary_like_comment(a0: i64, a1: i64, a2: u64) -> long long {
    let v0: u64;  // [bp-0x98]
    let v1: u64;  // [bp-0x90]
    let v2: u64;  // [bp-0x88]
    let v3: i8;  // [bp-0x80]
    let v4: core::option::Option<&str>;  // [bp-0x78]
    let v5: u64;  // [bp-0x70]
    let v6: struct21;  // [bp-0x68]
    let v7: u8;  // [bp-0x38]
    let v9: core::option::Option<&str>;  // rax
    let v10: u32;  // eax
    let v11: u32;  // edx
    let v12: u32;  // rcx
    let v13: struct16;  // cl
    let v14: struct9;  // edx
    let v15: u128;  // xmm0
    let v16: iNone;  // xmm1
    let v17: iNone;  // xmm2

    v9 = *((a1 + 32) as &i64);
    if (v9 != 94 & *((a1 + 16) as &i64) != 94) {
        v0 = *((a1 + 16) as &i64);
        v1 = *((a1 + 24) as &i64);
        v4 = v9;
        v5 = *((a1 + 40) as &i64);
        <ruff_python_ast::generated::AnyNodeRef as ruff_text_size::traits::Ranged>::range(&v0);
        v10 = <ruff_python_ast::generated::AnyNodeRef as ruff_text_size::traits::Ranged>::range(&v4) as u32;
        if v11 > v10 {
            core::panicking::panic("assertion failed: start.raw <= end.raw"); /* do not return */
        }
        v6 = ruff_python_trivia::tokenizer::SimpleTokenizer::new(a2, v12, v11, v10);
        v7 = 0;
        core::iter::traits::iterator::Iterator::try_fold(&v2, &v6, &v7);
        if &v3 == "Z" {
            core::option::expect_failed("Expected a token for the operator"); /* do not return */
        }
        v9 = *((a1 + 68) as &i32);
        if v9 as u32 < v2 {
            v13 = *((a1 + 72) as &i8);
            v14 = *((a1 + 64) as &i32);
            return struct40 {
                field_0: 95
                field_8: *(&v0 as &i128)
                field_24: v14
                field_28: v9 as u32
                field_32: 0
                field_33: v13
            };
        }
    }
    v15 = *(a1 as &i128);
    v16 = *((a1 + 16) as &i128);
    v17 = *((a1 + 32) as &i128);
    return struct80 {
        field_0: v15
        field_16: v16
        field_32: v17
        field_48: *((a1 + 48) as &i128)
        field_64: *((a1 + 64) as &i128)
    };
}
