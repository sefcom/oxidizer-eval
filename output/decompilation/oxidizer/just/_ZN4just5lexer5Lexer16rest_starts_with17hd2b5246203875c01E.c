fn just::lexer::Lexer::rest_starts_with(a0: void*, a1: u64, a2: u64) -> long long {
    let v0: core::option::Option<u32>;  // [bp-0x18]
    let v2: i64;  // rax
    let v3: u64;  // rdx

    v0 = v2;
    return core::slice::<impl [T]>::starts_with(just::lexer::Lexer::rest(a0), v3, a1, a2);
}
