fn just::parser::Parser::next_is(a0: void*, a1: u8) -> char {
    let v0: u64;  // [bp-0x8]
    let v1: u64;  // [bp-0x1]
    let v3: u64;  // rax

    v0 = v3;
    v1 = a1;
    return just::parser::Parser::next_are(a0, &v1, 1);
}
