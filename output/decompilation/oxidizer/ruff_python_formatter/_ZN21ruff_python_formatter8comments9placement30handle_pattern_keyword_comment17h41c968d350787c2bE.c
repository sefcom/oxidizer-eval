fn ruff_python_formatter::comments::placement::handle_pattern_keyword_comment(a0: i64, a1: void*, a2: u32, a3: u64, a4: u32) -> long long {
    let v0: struct21;  // [bp-0x50]
    let v2: u32;  // ebp
    let v4: u128;  // xmm0
    let v5: iNone;  // xmm1
    let v6: iNone;  // xmm2
    let v7: u64;  // rax
    let v8: std::io::stdio::Stdin;  // ecx

    v2 = a1[64] as i32;
    if a2 > v2 {
        core::panicking::panic("assertion failed: start.raw <= end.raw"); /* do not return */
    }
    v0 = ruff_python_trivia::tokenizer::SimpleTokenizer::new(a3, a4, a2, v2);
    if !<core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(core::iter::traits::iterator::Iterator::try_fold(&v0) as i32, 0x1) {
        v7 = a1[72] as i8;
        v8 = a1[68] as i32;
        return struct40 {
            field_0: 94
            field_8: *(a1 as &i128)
            field_24: v2
            field_28: v8
            field_32: 0
            field_33: v7 as u8
        };
    }
    v4 = *(a1 as &i128);
    v5 = a1[16] as i128;
    v6 = a1[32] as i128;
    return struct80 {
        field_0: v4
        field_16: v5
        field_32: v6
        field_48: a1[48] as i128
        field_64: a1[64] as i128
    };
}
