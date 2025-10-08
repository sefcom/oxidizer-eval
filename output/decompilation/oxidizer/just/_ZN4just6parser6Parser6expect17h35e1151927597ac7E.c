fn just::parser::Parser::expect(a0: i64, a1: i64, a2: i64) -> double {
    let v0: u32;  // [bp-0x108]
    let v1: struct24;  // [bp-0x105]
    let v2: struct81;  // [bp-0x100]
    let v3: struct89;  // [bp-0x100]
    let v4: struct80;  // [bp-0xc0]
    let v5: i32;  // [bp-0xbc]
    let v6: struct24;  // [bp-0xb8]
    let v7: struct16;  // [bp-0xa8]
    let v8: iNone;  // [bp-0x98]
    let v9: core::fmt::Arguments;  // [bp-0x88]
    let v10: core::fmt::rt::Argument;  // [bp-0x78]
    let v12: iNone;  // xmm0
    let v13: struct65;  // xmm1
    let v14: iNone;  // xmm2
    let v15: iNone;  // xmm3
    let v17: u32;  // edx
    let v18: struct80;  // edx

    v2 = just::parser::Parser::accept(a1, a2);
    v7 = v2.field_0;
    v8 = v2.field_16;
    v9 = v2.field_32;
    v10 = v2.field_48;
    v0 = *((&v2.field_64 as &char + 1) as &i32);
    v1 = v5;
    if v6 != 37 {
        v17 = *(&(&v2.field_72)[1] as &i32);
        v18 = v0;
        return struct88 {
            field_0: v7
            field_16: v8
            field_32: v9
            field_48: v10
            field_64: v4
            field_65: v1
            field_68: v6
            field_72: v2.field_73
            field_73: <UNKNOWN>
            field_76: <UNKNOWN>
        };
    } else if v4 == 37 {
        v3 = just::parser::Parser::unexpected_token(a1);
        v12 = *(&v3.field_72 as &i128);
        v13 = v3.field_8;
        v14 = v3.field_24;
        v15 = v3.field_40;
        return struct80 {
            field_0: v13
            field_16: v14
            field_32: v15
            field_48: v3.field_56
            field_64: v12
        };
    } else {
        return struct80 {
            field_0: v7
            field_16: v8
            field_32: v9
            field_48: v10
            field_64: v4
            field_65: v1
            field_68: 37
            field_72: <UNKNOWN>
        };
    }
}
