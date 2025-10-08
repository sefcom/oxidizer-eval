fn bat::syntax_mapping::make_glob_matcher(a0: i64, a1: u64, a2: u64) -> int {
    let v0: struct96;  // [bp-0x108]
    let v1: struct76;  // [bp-0x108]
    let v2: u128;  // [bp-0x101]
    let v3: struct24;  // [bp-0xf1]
    let v4: u128;  // [bp-0xe1]
    let v5: struct32;  // [bp-0xc0]
    let v6: u128;  // [bp-0xb8]
    let v7: Result<struct80, struct9>;  // [bp-0xa8]
    let v8: struct24;  // [bp-0x98]
    let v9: iNone;  // [bp-0x88]
    let v10: struct20;  // [bp-0x70]
    let v11: struct80;  // [bp-0x58]
    let v13: iNone;  // xmm1
    let v14: struct24;  // xmm2
    let v15: core::result::Result<usize, core::num::error::ParseIntError>;  // xmm0
    let v16: struct24;  // xmm1
    let v17: Result<struct80, struct9>;  // xmm2

    v10 = struct20 {
        field_0: a1
        field_8: a2
        field_16: 65793
    };
    v1 = globset::glob::GlobBuilder::build(&v10);
    v7 = *((&v1.field_0 as &char + 8) as &i128);
    v8 = *(&v1.field_24 as &i128);
    v9 = *(&v1.field_40 as &i128);
    if !((((0 ^ v1.field_0 as i64) & (0 ^ -(v1.field_0 as i64))) >> 63) as char) {
        v11 = struct80 {
            field_0: v1.field_0 as i64
            field_8: v7
            field_24: v8
            field_40: v9
            field_56: *((&v1.field_48 as &char + 8) as &i128)
            field_72: v5
        };
        v0 = globset::glob::Glob::compile_matcher(&v11);
        v15 = v0.field_0;
        v16 = v0.field_16;
        v17 = v0.field_32;
        return Ok(struct96 {
            field_0: v15
            field_16: v16
            field_32: v17
            field_48: v0.field_48
            field_64: v0.field_64
            field_80: v6
        });
    }
    *(&v4 as void*) = v9;
    v3 = v8;
    *(&v2 as &Result<struct80, struct9>) = v7;
    v13 = *((&v2 as &char + 9) as &i128);
    v14 = *((&v3.field_0 as &char + 9) as &i128);
    return struct72 {
        field_0: 0x8000000000000000
        field_8: 5
        field_9: <UNKNOWN>
        field_25: <UNKNOWN>
        field_41: <UNKNOWN>
        field_56: <UNKNOWN>
    };
}
