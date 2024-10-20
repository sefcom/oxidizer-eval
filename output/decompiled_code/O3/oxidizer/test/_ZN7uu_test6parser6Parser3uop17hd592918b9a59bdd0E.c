fn uu_test::parser::Parser::uop(a0: void*, a1: u32) -> u64 {
    let v0: i128;  // [sp-0x88]
    let v1: i128;  // [bp-0x80]
    let v2: i64;  // [sp-0x78]
    let v3: i320;  // [sp-0x48], Other Possible Types: Enum
    let v4: i64;  // [sp-0x20]
    let v5: i64;  // [sp-0x18]
    let v6: i64;  // [sp-0x10]
    let v7: i64;  // [sp-0x8]
    let v9: i64;  // r15
    let v10: i64;  // r14
    let v11: i64;  // r12
    let v12: i64;  // rbx
    let v13: i64;  // rcx
    let v14: i64;  // rcx

    v7 = v9;
    v6 = v10;
    v5 = v11;
    v4 = v12;
    v13 = *((a0 + 24) as &i64);
    *((a0 + 24) as &i64) = 9223372036854775809;
    if v0 != 9223372036854775809 {
        v1 = *((a0 + 32) as &i128);
        v0 = v13;
    } else {
        v14 = *((a0 + 56) as &i64);
        if v14 == *((a0 + 72) as &i64) {
            v0 = 0x8000000000000000;
        } else {
            *((a0 + 56) as &i64) = v14 + 24;
            v2 = *((v14 + 16) as &i64);
            v0 = *(v14 as &i128);
        }
    }
    v3 = uu_test::parser::Symbol::new(&v0);
    if v3 != 6 {
        goto *((4297404 + vvar_51{reg 24} * 4) as &i32) + 4297404;
    } else {
        goto *((4297428 + *(vvar_1 as &i64) * 4) as &i32) + 4297428;
    }
}
