fn ruff_python_formatter::comments::placement::handle_keyword_comment(a0: i64, a1: void*, a2: i64, a3: u64, a4: u32) -> long long {
    let v0: struct21;  // [bp-0x60]
    let v2: i64;  // rax
    let v3: u32;  // eax
    let v4: u32;  // ebp
    let v6: u128;  // xmm0
    let v7: iNone;  // xmm1
    let v8: iNone;  // xmm2
    let v9: u64;  // rax
    let v10: u32;  // ecx

    v2 = a2 + 80;
    v3 = core::option::Option<T>::map_or(v2, *((a2 + 120) as &i32));
    v4 = a1[64] as i32;
    if v3 > v4 {
        core::panicking::panic("assertion failed: start.raw <= end.raw"); /* do not return */
    }
    v0 = ruff_python_trivia::tokenizer::SimpleTokenizer::new(a3, a4, v3, v4);
    if !<core::ops::control_flow::ControlFlow<B,C> as core::cmp::PartialEq>::eq(core::iter::traits::iterator::Iterator::try_fold(&v0) as i32, 0x1) {
        v9 = a1[72] as i8;
        v10 = a1[68] as i32;
        return struct40 {
            field_0: 94
            field_8: *(a1 as &i128)
            field_24: v4
            field_28: v10
            field_32: 0
            field_33: v9 as u8
        };
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
