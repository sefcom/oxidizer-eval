fn ruff_python_formatter::comments::placement::handle_trailing_expression_starred_star_end_of_line_comment(a0: i64, a1: void*, a2: i64, a3: u64, a4: u32) -> long long {
    let v0: struct21;  // [bp-0x58]
    let v2: u32;  // ebp
    let v3: u64;  // rax
    let v4: struct80;  // rax
    let v6: u128;  // xmm0
    let v7: struct16;  // xmm1
    let v8: iNone;  // xmm2

    if a1[32] as i32 != 94 {
        v2 = a1[64] as i32;
        if *((a2 + 8) as &i32) > v2 {
            core::panicking::panic("assertion failed: start.raw <= end.raw"); /* do not return */
        }
        v0 = ruff_python_trivia::tokenizer::SimpleTokenizer::new(a3, a4, *((a2 + 8) as &i32), v2);
        v3 = <core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(core::iter::traits::iterator::Iterator::try_fold(&v0) as i32, 0x1);
        if !v3 {
            v4 = a1[72] as i8;
            return struct40 {
                field_0: 94
                field_8: 54
                field_16: a2
                field_24: v2
                field_28: a1[68] as i32
                field_32: 0
                field_33: v4 as u8
            };
        }
    }
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
