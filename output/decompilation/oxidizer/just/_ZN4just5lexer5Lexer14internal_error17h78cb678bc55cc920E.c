fn just::lexer::Lexer::internal_error(a0: &struct80, a1: i64, a2: i64) -> u64 {
    let v0: struct24;  // [bp-0xb8]
    let v1: struct72;  // [bp-0xa8]
    let v2: u128;  // [bp-0xa0]
    let v3: void*;  // [bp-0x90]
    let v4: struct24;  // [bp-0x88]
    let v5: struct24;  // [bp-0x78]
    let v6: u64;  // [bp-0x70]
    let v7: struct24;  // [bp-0x68]

    v5 = 35;
    v3 = 0;
    v4 = *((a1 + 152) as &i128);
    v0 = *((a1 + 112) as &i128);
    v1 = *((a1 + 128) as &i64);
    v2 = *((a1 + 136) as &i128);
    v7 = core::ops::function::FnMut::call_mut(a2);
    v6 = 9223372036854775848;
    return just::compile_error::CompileError::new(a0, &v0, &v6);
}
