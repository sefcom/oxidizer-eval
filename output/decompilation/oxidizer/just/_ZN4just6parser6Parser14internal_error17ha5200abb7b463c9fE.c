fn just::parser::Parser::internal_error(a0: u64, a1: u64) -> void {
    let v0: struct80;  // [bp-0x78]
    let v1: struct24;  // [bp-0x70]

    v1 = <T as core::convert::Into<U>>::into("`Parser::next()` called after end of token stream");
    v0 = 9223372036854775848;
    just::parser::Parser::error(a0, a1, &v0);
    return;
}
