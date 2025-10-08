fn fd::fmt::token_from_pattern_id(a0: &struct16, a1: i32) -> u64 {
    let v0: u64;  // [bp-0x8]
    let v2: u32;  // esi
    let v3: u64;  // rax

    v2 = a1 - 2;
    if v2 >= 5 {
        v0 = v3;
        core::panicking::panic("internal error: entered unreachable code"); /* do not return */
    }
    return struct8 {
        field_0: 0x8000000000000000 | v2 as u64
    };
}
