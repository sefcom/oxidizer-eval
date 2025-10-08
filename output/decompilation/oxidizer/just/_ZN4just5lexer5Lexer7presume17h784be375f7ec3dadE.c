fn just::lexer::Lexer::presume(a0: i64, a1: i64, a2: i640) -> long long {
    let v0: struct80;  // [bp-0x94]
    let v1: i8;  // [bp-0x80]
    let v2: i8;  // [bp-0x70]
    let v3: i8;  // [bp-0x60]
    let v4: iNone;  // [bp-0x50]
    let v5: i8;  // [bp-0x40]
    let v6: i8;  // [bp-0x38]
    let v7: alloc::string::String;  // [bp-0x30]
    let v9: struct80;  // rax
    let v10: iNone;  // xmm0
    let v11: iNone;  // xmm1
    let v12: struct64;  // xmm2

    v0 = a2;
    if *((a1 + 192) as &i32) != a2 {
        v7 = format!("Lexer presumed character `{}`", &v0);
        return just::lexer::Lexer::internal_error(a0, a1, &v7);
    }
    v9 = just::lexer::Lexer::advance(a1);
    if &v6 != "%" {
        v10 = *(&v1 as &i128);
        v11 = *(&v2 as &i128);
        v12 = *(&v3 as &i128);
        return struct80 {
            field_0: v10
            field_16: v11
            field_32: v12
            field_48: v4
            field_64: *(&v5 as &i128)
        };
    }
    *((a0 + 72) as &i8) = 37;
    return v9;
}
