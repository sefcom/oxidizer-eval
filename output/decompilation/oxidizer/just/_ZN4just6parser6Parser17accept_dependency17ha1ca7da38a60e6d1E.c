fn just::parser::Parser::accept_dependency(a0: i64, a1: void*) -> int {
    let v0: struct81;  // [bp-0x260], Other Possible Types: struct82
    let v1: struct82;  // [bp-0x260]
    let v2: struct81;  // [bp-0x260]
    let v3: struct24;  // [bp-0x220], Other Possible Types: struct80, u64
    let v4: struct24;  // [bp-0x218]
    let v5: iNone;  // [bp-0x208]
    let v6: iNone;  // [bp-0x1f8]
    let v7: u64;  // [bp-0x1e8]
    let v8: void*;  // [bp-0x1e0]
    let v9: struct16;  // [bp-0x1e0]
    let v10: u64;  // [bp-0x1d8]
    let v11: void*;  // [bp-0x1d0]
    let v12: iNone;  // [bp-0x1c8]
    let v13: iNone;  // [bp-0x1b8]
    let v14: iNone;  // [bp-0x1a8]
    let v15: iNone;  // [bp-0x198]
    let v16: iNone;  // [bp-0x188], Other Possible Types: u64
    let v17: struct80;  // [bp-0x188]
    let v18: u128;  // [bp-0x178]
    let v19: u64;  // [bp-0x168]
    let v20: iNone;  // [bp-0x158]
    let v21: iNone;  // [bp-0x148], Other Possible Types: u64
    let v22: u64;  // [bp-0x148]
    let v23: iNone;  // [bp-0x138]
    let v24: iNone;  // [bp-0x128]
    let v25: u64;  // [bp-0x118]
    let v26: u128;  // [bp-0x108]
    let v27: u64;  // [bp-0xf8]
    let v28: iNone;  // [bp-0xe8]
    let v29: alloc::string::String;  // [bp-0xd8]
    let v30: u128;  // [bp-0xd0]
    let v31: u64;  // [bp-0xc8]
    let v32: struct103;  // [bp-0xc0]
    let v33: struct128;  // [bp-0xb0]
    let v35: alloc::string::String;  // rax
    let v36: core::fmt::Arguments;  // xmm0
    let v37: struct24;  // xmm1
    let v38: alloc::string::String;  // xmm2
    let v39: core::fmt::rt::Argument;  // esi
    let v40: iNone;  // xmm0
    let v41: iNone;  // xmm1
    let v42: struct40;  // xmm2
    let v43: struct24;  // esi
    let v44: struct128;  // [bp-0x260]

    v0 = just::parser::Parser::accept_namepath(a1);
    v35 = v4 as u64;
    if v35 as u8 != 37 {
        v25 = v3;
        v24 = v0.field_48;
        v23 = v0.field_32;
        v21 = v0.field_16;
        v20 = v0.field_0;
        return struct88 {
            field_0: v20
            field_16: v21
            field_32: v23
            field_48: v24
            field_64: v25
            field_72: v35 as u8
            field_73: v0.field_73
            field_76: <UNKNOWN>
        };
    }
    v21 = v0.field_16;
    v20 = v0.field_0;
    v26 = v20;
    v27 = v0.field_16;
    if !((((0 ^ v26 as i64) & (0 ^ -(v26 as i64))) >> 63) as char) {
        return struct48 {
            field_0: 0
            field_8: 8
            field_16: 0
            field_24: v20
            field_40: v22
        };
    }
    v1 = just::parser::Parser::accepted(a1, 28);
    if v4 != 37 {
        v40 = *((&v1.field_0 as &char + 1) as &i128);
        v41 = *((&v1.field_16 as &char + 1) as &i128);
        v42 = *((&v1.field_32 as &char + 1) as &i128);
        v43 = *(&v1.field_72 as &i32);
        return struct96 {
            field_0: v1.field_0 as i8
            field_1: <UNKNOWN>
            field_17: <UNKNOWN>
            field_33: <UNKNOWN>
            field_49: <UNKNOWN>
            field_64: v4
            field_72: <UNKNOWN>
            field_73: <UNKNOWN>
            field_76: <UNKNOWN>
        };
    } else if (v1.field_0 as i8 & 1) {
        v2 = just::parser::Parser::parse_namepath(a1);
        if v4 != 37 {
            v16 = v3;
            v15 = v2.field_48;
            v14 = v2.field_32;
            v13 = v2.field_16;
            v12 = v2.field_0;
            return struct88 {
                field_0: v12
                field_16: v13
                field_32: v14
                field_48: v15
                field_64: v17
                field_72: v4
                field_73: v2.field_73
                field_76: <UNKNOWN>
            };
        }
        v18 = v2.field_0;
        v19 = v2.field_16;
        v8 = 0;
        v10 = 8;
        v11 = 0;
        loop {
            v0 = just::parser::Parser::accepted(a1, 29);
            if v4 != 37 {
                v36 = *((&v0.field_0 as &char + 1) as &i128);
                v37 = *((&v0.field_16 as &char + 1) as &i128);
                v38 = *((&v0.field_32 as &char + 1) as &i128);
                v39 = *(&v0.field_72 as &i32);
                return struct96 {
                    field_0: v0.field_0 as i8
                    field_1: <UNKNOWN>
                    field_17: <UNKNOWN>
                    field_33: <UNKNOWN>
                    field_49: <UNKNOWN>
                    field_64: v4
                    field_72: <UNKNOWN>
                    field_73: <UNKNOWN>
                    field_76: <UNKNOWN>
                };
            } else if !(v0.field_0 as i8 & 1) {
                v44 = just::parser::Parser::parse_expression(a1);
                v12 = *(&v44.field_8 as &i128);
                v13 = v44.field_24;
                v14 = v44.field_40;
                v15 = v44.field_56;
                v16 = v44.field_72;
                if v44.field_0 == 18 {
                    return struct80 {
                        field_0: v12
                        field_16: v13
                        field_32: v14
                        field_48: v15
                        field_64: v16
                    };
                }
                v33 = struct128 {
                    field_0: v44.field_0
                    field_8: v12
                    field_24: v13
                    field_40: v14
                    field_56: v15
                    field_72: v16
                    field_88: v5
                    field_104: v6
                    field_120: v7
                };
                v9 = alloc::vec::Vec<T,A>::push(&v33, "src/parser.rs");
            } else {
                v29 = 0;
                v28 = *(&v9.field_0 as &i128);
                v32 = v19;
                v30 = v18;
                return struct56 {
                    field_0: v28
                    field_16: 0
                    field_24: v30 as i64
                    field_32: v31
                    field_40: v32
                    padding_48: <UNKNOWN>
                    field_72: <UNKNOWN>
                };
            }
        }
    } else {
        return struct8 {
            field_0: 0x8000000000000000
        };
    }
}
