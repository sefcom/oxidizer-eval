fn just::lexer::Lexer::token(a0: i64, a1: u8) -> long long {
    let v0: struct65;  // [bp-0x50]
    let v2: u64;  // rax

    v0 = struct65 {
        field_0: *((a0 + 112) as &i128)
        field_16: *((a0 + 128) as &i128)
        field_32: *((a0 + 168) as &i64)
        field_40: *((a0 + 160) as &i64) - *((a0 + 184) as &i64)
        field_48: *((a0 + 176) as &i128)
        field_64: a1
    };
    alloc::vec::Vec<T,A>::push(a0 + 72, &v0, "src/lexer.rs");
    v2 = *((a0 + 160) as &i64);
    *((a0 + 184) as &u64) = v2;
    *((a0 + 168) as &i128) = *((a0 + 144) as &i128);
    return v2;
}
