fn ruff_python_formatter::comments::placement::handle_bracketed_end_of_line_comment(a0: i64, a1: void*, a2: u64, a3: u32) -> long long {
    let v0: i8;  // [bp-0x74]
    let v1: struct16;  // [bp-0x70]
    let v2: struct21;  // [bp-0x60]
    let v4: u32;  // eax
    let v5: u32;  // ebp
    let v6: struct12;  // rax
    let v7: struct16;  // xmm0
    let v8: core::option::Option<&str>;  // xmm1
    let v9: struct21;  // xmm2
    let v10: struct12;  // rax
    let v12: struct16;  // xmm0
    let v13: core::option::Option<&str>;  // xmm1
    let v14: struct21;  // xmm2

    if !a1[72] as i8 {
        v1 = *(a1 as &i128);
        v4 = <ruff_python_ast::generated::AnyNodeRef as ruff_text_size::traits::Ranged>::range(&v1) as u32;
        v5 = a1[64] as i32;
        if v4 > v5 {
            core::panicking::panic("assertion failed: start.raw <= end.raw"); /* do not return */
        }
        v2 = ruff_python_trivia::tokenizer::SimpleTokenizer::new(a2, a3, v4, v5);
        v6 = core::iter::traits::iterator::Iterator::try_fold(&v2);
        if &v0 == "Z" {
            v7 = *(a1 as &i128);
            v8 = a1[16] as i128;
            v9 = a1[32] as i128;
            return struct80 {
                field_0: v7
                field_16: v8
                field_32: v9
                field_48: a1[48] as i128
                field_64: a1[64] as i128
            };
        }
        v10 = core::iter::traits::iterator::Iterator::try_fold(&v2);
        if &v0 == "Z" {
            return struct40 {
                field_0: 96
                field_8: v1
                field_24: v5
                field_28: a1[68] as i32
                field_32: 0
            };
        }
    }
    *((a0 + 64) as &i128) = a1[64] as i128;
    v12 = *(a1 as &i128);
    v13 = a1[16] as i128;
    v14 = a1[32] as i128;
    *((a0 + 48) as &i128) = a1[48] as i128;
    *((a0 + 32) as &struct21) = v14;
    *((a0 + 16) as &core::option::Option<&str>) = v13;
    *(a0 as &struct16) = v12;
    return v10;
}
