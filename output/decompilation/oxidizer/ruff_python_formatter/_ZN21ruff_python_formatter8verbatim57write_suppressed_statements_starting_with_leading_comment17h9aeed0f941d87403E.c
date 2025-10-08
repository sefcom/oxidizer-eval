fn ruff_python_formatter::verbatim::write_suppressed_statements_starting_with_leading_comment(a0: u32, a1: void*, a2: &u64, a3: i64) -> int {
    let v0: struct21;  // [bp-0x110]
    let v1: Option<struct56>;  // [bp-0x108], Other Possible Types: struct16, struct24, struct32
    let v2: u448;  // [bp-0x108]
    let v3: i64;  // [bp-0xf8]
    let v4: i64;  // [bp-0xc8]
    let v5: u64;  // [bp-0xc0]
    let v6: u64;  // [bp-0xb0]
    let v7: u64;  // [bp-0xa8]
    let v8: u8;  // [bp-0xa0]
    let v9: struct16;  // [bp-0x98], Other Possible Types: u8
    let v10: struct16;  // [bp-0x88]
    let v11: u64;  // [bp-0x80]
    let v12: iNone;  // [bp-0x78]
    let v13: struct56;  // [bp-0x68]
    let v15: struct104;  // rax
    let v16: i64;  // rax
    let v17: u32;  // rdx

    v15 = *((*((a3 + 8) as &i64) + 48) as &i64)(*(a3 as &i64)) as i64;
    alloc::rc::RcInnerPtr::inc_strong(*((v15 + 16) as &i64));
    v0 = *((v15 + 16) as &i64);
    v16 = *((*((a3 + 8) as &i64) + 48) as &i64)(*(a3 as &i64)) as i64;
    v1 = struct16 {
        field_0: ruff_python_formatter::statement::suite::<impl core::convert::From<ruff_python_formatter::statement::suite::SuiteChildStatement> for ruff_python_ast::generated::AnyNodeRef>::from(a1) as u64
        field_8: v17
    };
    v5 = ruff_python_formatter::comments::map::MultiMap<K,V>::leading(*((v15 + 16) as &i64) + 16, &v1);
    v6 = *(v16 as &i64);
    v7 = *((v16 + 8) as &i64);
    v8 = 0;
    v1 = <ruff_python_formatter::verbatim::CommentRangeIter as core::iter::traits::iterator::Iterator>::next(&v5);
    match v1 {
        None => {
            core::option::expect_failed("Suppressed node to have leading comments"); /* do not return */
        },
        Some(v13) => {
            v1 = ruff_python_formatter::verbatim::SuppressionComments::unwrap_suppression_starts(&v13);
            v12 = v1.field_0;
            v11 = 1;
            v4 = v3;
            v1 = struct32 {
                field_0: &v11
                field_8: &g_97cb70
                field_16: &v4
                field_24: &g_97cb30
            };
            <ruff_formatter::formatter::Formatter<Context> as ruff_formatter::buffer::Buffer>::write_fmt(&v9, a3, &v1, 2);
            if *(&v9 as &i32) != 4 {
                return struct24 {
                    field_0: v9
                    field_16: v10
                };
            }
            *((v3 + 8) as &i8) = 1;
            ruff_python_formatter::verbatim::write_suppressed_statements(a0, v3, a1, v5, v17, a2, a3);
        },
    }
}
