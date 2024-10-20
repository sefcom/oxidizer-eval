fn uu_dd::parseargs::Parser::parse(a0: void*, a1: void*, a2: void*, a3: u32) -> u64 {
    let v26: i128;  // [bp-0xa8]
    let v31: i128;  // [bp-0x98]
    let v138: i128;  // xmm0

    v138 = v26;
    *((a0 + 24) as &i128) = v31;
    *((a0 + 8) as &i128) = v138;
    *(a0 as &i64) = 3;
    return a0;
}
