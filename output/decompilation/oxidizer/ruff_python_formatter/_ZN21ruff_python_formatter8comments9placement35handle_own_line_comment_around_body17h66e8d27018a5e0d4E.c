fn ruff_python_formatter::comments::placement::handle_own_line_comment_around_body(a0: i64, a1: i64, a2: i64, a3: i64) -> long long {
    let v0: u64;  // [bp-0xf8]
    let v1: u64;  // [bp-0xf0]
    let v2: struct24;  // [bp-0xe8]
    let v3: Result<struct80, struct34>;  // [bp-0xd0]
    let v4: i8;  // [bp-0xc8]
    let v5: struct21;  // [bp-0x80], Other Possible Types: struct80
    let v7: u32;  // edx
    let v8: struct12;  // rax
    let v9: u128;  // xmm0
    let v10: iNone;  // xmm1
    let v11: iNone;  // xmm2
    let v12: u128;  // xmm0
    let v13: iNone;  // xmm1
    let v14: iNone;  // xmm2

    if a1[72] as i8 && a1[16] as i64 != 94 {
        v0 = a1[16] as i64;
        v1 = a1[24] as i64;
        <ruff_python_ast::generated::AnyNodeRef as ruff_text_size::traits::Ranged>::range(&v0);
        if v7 > a1[64] as i32 {
            core::panicking::panic("assertion failed: start.raw <= end.raw"); /* do not return */
        }
        v5 = ruff_python_trivia::tokenizer::SimpleTokenizer::new(a2, a3, v7, a1[64] as i32);
        v8 = core::iter::traits::iterator::Iterator::try_fold(&v5);
        if &v4 != "Z" {
            v9 = *(a1 as &i128);
            v10 = a1[16] as i128;
            v11 = a1[32] as i128;
            return struct80 {
                field_0: v9
                field_16: v10
                field_32: v11
                field_48: a1[48] as i128
                field_64: a1[64] as i128
            };
        }
        v5 = ruff_python_formatter::comments::placement::handle_own_line_comment_between_branches(a1, v0, v1, a2, a3);
        v2 = struct24 {
            field_0: &v0
            field_8: a2
            field_16: a3
        };
        v3 = ruff_python_formatter::comments::visitor::CommentPlacement::or_else(&v5, &v2);
        return ruff_python_formatter::comments::visitor::CommentPlacement::or_else(a0, &v3, a2, a3) as u64;
    }
    v12 = *(a1 as &i128);
    v13 = a1[16] as i128;
    v14 = a1[32] as i128;
    return struct80 {
        field_0: v12
        field_16: v13
        field_32: v14
        field_48: a1[48] as i128
        field_64: a1[64] as i128
    };
}
