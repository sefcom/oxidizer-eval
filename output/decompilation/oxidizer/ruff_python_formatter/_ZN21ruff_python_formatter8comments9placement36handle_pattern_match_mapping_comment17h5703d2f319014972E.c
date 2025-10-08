fn ruff_python_formatter::comments::placement::handle_pattern_match_mapping_comment(a0: i64, a1: void*, a2: i64, a3: u64, a4: u32) -> long long {
    let v0: struct16;  // [bp-0x58], Other Possible Types: struct21, u64
    let v2: u32;  // ebx
    let v3: u64;  // rax
    let v4: u32;  // ecx
    let v5: struct12;  // eax
    let v7: u64;  // rax
    let v8: u32;  // ecx
    let v9: u128;  // xmm0
    let v10: struct12;  // xmm1
    let v11: u128;  // xmm2
    let v12: u128;  // xmm0
    let v13: struct12;  // xmm1
    let v14: u128;  // xmm2

    if a1[32] as i32 == 94 && *((a2 + 79) as &i8) != 218 {
        v2 = a1[64] as i32;
        if v2 > *((a2 + 52) as &i32) {
            v3 = a1[72] as i8;
            v4 = a1[68] as i32;
            return struct40 {
                field_0: 96
                field_8: *(a1 as &i128)
                field_24: v2
                field_28: v4
                field_32: 0
                field_33: v3 as u8
            };
        }
        if a1[16] as i64 == 94 {
            *(&v0 as &i128) = *(a1 as &i128);
            v5 = <ruff_python_ast::generated::AnyNodeRef as ruff_text_size::traits::Ranged>::range(&v0) as u32;
        } else {
            v0 = struct16 {
                field_0: a1[16] as i64
                field_8: a1[24] as i64
            };
            <ruff_python_ast::generated::AnyNodeRef as ruff_text_size::traits::Ranged>::range(&v0);
        }
        if v5 > v2 {
            core::panicking::panic("assertion failed: start.raw <= end.raw"); /* do not return */
        }
        v0 = ruff_python_trivia::tokenizer::SimpleTokenizer::new(a3, a4, v5, v2);
        if !<core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(core::iter::traits::iterator::Iterator::try_fold(&v0) as i32, 0x1) {
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
        v7 = a1[72] as i8;
        v8 = a1[68] as i32;
        return struct40 {
            field_0: 96
            field_8: *(a1 as &i128)
            field_24: v2
            field_28: v8
            field_32: 0
            field_33: v7 as u8
        };
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
