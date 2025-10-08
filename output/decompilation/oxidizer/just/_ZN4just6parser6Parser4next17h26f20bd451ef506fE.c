fn just::parser::Parser::next(a0: i64, a1: u64) -> int {
    let v0: struct16;  // [bp-0xd0]
    let v1: struct72;  // [bp-0xc0]
    let v2: struct89;  // [bp-0xc0]
    let v3: u8;  // [bp-0x80]
    let v4: u32;  // [bp-0x7c]
    let v5: u128;  // [bp-0x78]
    let v7: u64;  // rdx
    let v8: iNone;  // xmm1
    let v9: iNone;  // xmm2
    let v10: struct24;  // xmm3
    let v12: struct56;  // xmm0
    let v13: struct80;  // xmm1
    let v14: iNone;  // xmm2

    v0 = struct16 {
        field_0: just::parser::Parser::rest(a1)
        field_8: v7
    };
    v1 = core::iter::traits::iterator::Iterator::try_fold(&v0);
    if v3 != 37 {
        v12 = v1.field_0;
        v13 = v1.field_16;
        v14 = v1.field_32;
        return struct80 {
            field_0: v12
            field_16: v13
            field_32: v14
            field_48: v1.field_48
            field_64: v3
            field_65: v4
            field_68: 37
            field_72: <UNKNOWN>
        };
    }
    v2 = just::parser::Parser::internal_error(a1);
    v8 = v2.field_8;
    v9 = v2.field_24;
    v10 = v2.field_40;
    return struct80 {
        field_0: v8
        field_16: v9
        field_32: v10
        field_48: v2.field_56
        field_64: v5
    };
}
