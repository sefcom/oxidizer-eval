fn just::parser::Parser::parse_ast::pop_doc_comment(a0: i64, a1: i32) -> u64 {
    let v0: u8;  // [bp-0x128]
    let v2: u64;  // r12
    let v3: u64;  // rbx
    let v4: struct65;  // rax
    let v5: struct56;  // rax
    let v6: struct80;  // r14
    let v8: u64;  // rdx
    let v9: struct12;  // rax
    let v10: u64;  // r12

    if a1 {
        return 0;
    }
    v2 = *((a0 + 16) as &i64);
    if v2 {
        v3 = *((a0 + 8) as &i64);
        v4 = v2 * 0x100;
        if *((v3 + v4 - 0x100) as &i64) == 9223372036854775810 {
            v5 = v4 + v3;
            v6 = *((v5 - 240) as &i64);
            v9 = core::str::<impl str>::trim_start_matches(core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(1, *((v5 - 248) as &i64), v6) as u64, v8);
            v10 = v2 - 1;
            *((a0 + 16) as &u64) = v10;
            memcpy(&v0, v3 + v10 * 0x100, 0x100);
            return v9;
        }
    }
    return 0;
}
