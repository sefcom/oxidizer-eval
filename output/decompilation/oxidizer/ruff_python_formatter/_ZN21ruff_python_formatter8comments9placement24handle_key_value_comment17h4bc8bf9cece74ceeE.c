fn ruff_python_formatter::comments::placement::handle_key_value_comment(a0: i64, a1: void*, a2: u64, a3: u32) -> long long {
    let v0: u64;  // [bp-0x80]
    let v1: u64;  // [bp-0x78]
    let v2: core::fmt::Arguments;  // [bp-0x70]
    let v3: u64;  // [bp-0x68]
    let v4: struct21;  // [bp-0x60]
    let v6: core::fmt::Arguments;  // rax
    let v7: u32;  // eax
    let v8: u32;  // edx
    let v9: struct16;  // rax
    let v10: u128;  // xmm0
    let v11: iNone;  // xmm1
    let v12: iNone;  // xmm2

    v6 = a1[16] as i64;
    if (v6 != 94 & a1[32] as i64 != 94) {
        v0 = a1[32] as i64;
        v1 = a1[40] as i64;
        v2 = v6;
        v3 = a1[24] as i64;
        <ruff_python_ast::generated::AnyNodeRef as ruff_text_size::traits::Ranged>::range(&v2);
        v7 = <ruff_python_ast::generated::AnyNodeRef as ruff_text_size::traits::Ranged>::range(&v0) as u32;
        if v8 > v7 {
            core::panicking::panic("assertion failed: start.raw <= end.raw"); /* do not return */
        }
        v4 = ruff_python_trivia::tokenizer::SimpleTokenizer::new(a2, a3, v8, v7);
        v6 = <core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(core::iter::traits::iterator::Iterator::try_fold(&v4) as i32, 0x1);
        if v6 as u8 {
            v9 = a1[72] as i8;
            return struct40 {
                field_0: 96
                field_8: *(a1 as &i128)
                field_24: a1[64] as i64
                field_32: 0
                field_33: v9 as u8
            };
        }
    }
    v10 = *(a1 as &i128);
    v11 = a1[16] as i128;
    v12 = a1[32] as i128;
    return struct80 {
        field_0: v10
        field_16: v11
        field_32: v12
        field_48: a1[48] as i128
        field_64: a1[64] as i128
    };
}
