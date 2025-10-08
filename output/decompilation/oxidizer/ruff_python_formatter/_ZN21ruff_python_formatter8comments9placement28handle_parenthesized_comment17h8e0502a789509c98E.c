fn ruff_python_formatter::comments::placement::handle_parenthesized_comment(a1: i64, a2: i64) -> : struct80 {
    let a0: i64;  // rdi
    let v0: u32;  // [bp-0xd4]
    let v1: void*;  // [bp-0xc8]
    let v2: u64;  // [bp-0xc0]
    let v3: u64;  // [bp-0xb8]
    let v4: u32;  // [bp-0xac]
    let v5: u32;  // [bp-0xa8]
    let v6: struct9;  // [bp-0xa4]
    let v7: u64;  // [bp-0xa0]
    let v8: u64;  // [bp-0x98]
    let v9: i64;  // [bp-0x90], Other Possible Types: unsigned long
    let v10: struct16;  // [bp-0x88]
    let v11: u64;  // [bp-0x78]
    let v12: u64;  // [bp-0x70]
    let v13: struct21;  // [bp-0x68]
    let v14: u8;  // [bp-0x38]
    let v16: u32;  // edx
    let v17: u8;  // al
    let v18: struct9;  // eax
    let v19: u8;  // al
    let v20: &mut [u8];  // xmm0
    let v21: u128;  // xmm1
    let v22: iNone;  // xmm2
    let v23: &mut [u8];  // xmm0
    let v24: u128;  // xmm1
    let v25: iNone;  // xmm2

    if *(a1 as &i32) != 44 && a1[16] as i64 != 94 {
        v10 = struct16 {
            field_0: a1[16] as i64
            field_8: a1[24] as i64
        };
        if a1[32] as i64 != 94 {
            v11 = a1[32] as i64;
            v12 = a1[40] as i64;
            <ruff_python_ast::generated::AnyNodeRef as ruff_text_size::traits::Ranged>::range(&v10);
            if v16 > a1[64] as i32 {
                core::panicking::panic("assertion failed: start.raw <= end.raw"); /* do not return */
            }
            v0 = a1[68] as i32;
            v4 = a1[64] as i32;
            v13 = ruff_python_trivia::tokenizer::SimpleTokenizer::new(v2, v3, v16, v4);
            v14 = 0;
            v7 = v2;
            v8 = v3;
            v9 = &vvar_68{reg 32};
            if <core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(<core::iter::adapters::take_while::TakeWhile<I,P> as core::iter::traits::iterator::Iterator>::try_fold(&v13, &v7) as i32, 0x1) {
                v17 = a1[72] as i8;
                *(&v1[8] as &u64) = v11;
                *(&v1[16] as &u64) = v12;
                *(&v1[24] as &u32) = v4;
                *(&v1[28] as &u32) = v0;
                *(&v1[32] as &i8) = 0;
                *(&v1[33] as &u8) = v17;
                *(v1 as &i64) = 94;
                return;
            }
            v18 = <ruff_python_ast::generated::AnyNodeRef as ruff_text_size::traits::Ranged>::range(&v11) as u32;
            if v0 > v18 {
                core::panicking::panic("assertion failed: start.raw <= end.raw"); /* do not return */
            }
            v5 = v0;
            v6 = v18;
            v13 = ruff_python_trivia::tokenizer::SimpleTokenizer::new(v2, v3, v0, v18 as u64);
            v14 = 0;
            v7 = v2;
            v8 = v3;
            v9 = &v5;
            if !<core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(<core::iter::adapters::take_while::TakeWhile<I,P> as core::iter::traits::iterator::Iterator>::try_fold(&v13, &v7) as i32, 0x1) {
                *(&v1[64] as &i128) = a1[64] as i128;
                v20 = *(a1 as &i128);
                v21 = a1[16] as i128;
                v22 = a1[32] as i128;
                *(&v1[48] as &i128) = a1[48] as i128;
                v1[32] = v22;
                *(&v1[16] as &u128) = v21;
                *(v1 as &&mut [u8]) = v20;
                return;
            }
            v19 = a1[72] as i8;
            *(&v1[8] as &i128) = *(&v10.field_0 as &i128);
            *(&v1[24] as &u32) = v4;
            *(&v1[28] as &u32) = v0;
            *(&v1[32] as &i8) = 0;
            *(&v1[33] as &u8) = v19;
            *(v1 as &i64) = 95;
            return;
        }
    }
    v23 = *(a1 as &i128);
    v24 = a1[16] as i128;
    v25 = a1[32] as i128;
    return struct80 {
        field_0: v23
        field_16: v24
        field_32: v25
        field_48: a1[48] as i128
        field_64: a1[64] as i128
    };
}
