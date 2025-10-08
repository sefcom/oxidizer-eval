fn just::justfile::Justfile::name(a0: i64) -> long long {
    let v0: struct64;  // [bp-0x48]
    let v1: u8;  // [bp-0x8]
    let v2: u32;  // [bp-0x7]
    let v3: core::option::Option<&str>;  // [bp-0x4]
    let v5: u8;  // al
    let v6: core::option::Option<&str>;  // edx

    v5 = *((a0 + 560) as &i8);
    if v5 != 37 {
        v0 = struct64 {
            field_0: *((a0 + 496) as &i128)
            field_16: *((a0 + 0x200) as &i128)
            field_32: *((a0 + 528) as &i128)
            field_48: *((a0 + 544) as &i128)
        };
        v6 = *((a0 + 564) as &i32);
        v2 = *((a0 + 561) as &i32);
        v3 = v6;
        v1 = v5;
        return just::token::Token::lexeme(&v0);
    }
    return 1;
}
