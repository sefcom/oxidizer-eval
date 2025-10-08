fn just::parser::Parser::parse_namepath(a1: i64) -> : struct81 {
    let a0: i64;  // rdi
    let v0: iNone;  // [bp-0x178], Other Possible Types: alloc::string::String
    let v1: struct72;  // [bp-0x178]
    let v2: iNone;  // [bp-0x168], Other Possible Types: struct80
    let v3: iNone;  // [bp-0x158], Other Possible Types: struct24
    let v4: iNone;  // [bp-0x148]
    let v5: core::fmt::Arguments;  // [bp-0x138], Other Possible Types: u64
    let v6: struct80;  // [bp-0x130]
    let v7: struct82;  // [bp-0x130]
    let v8: struct80;  // [bp-0x130]
    let v9: u64;  // [bp-0xf0]
    let v10: u8;  // [bp-0xe8]
    let v11: core::fmt::rt::Argument;  // [bp-0xe4], Other Possible Types: struct32, u32
    let v12: struct24;  // [bp-0xe0]
    let v13: struct16;  // [bp-0xe0]
    let v14: u64;  // [bp-0xd0]
    let v15: struct72;  // [bp-0xc8]
    let v16: struct72;  // [bp-0x78]
    let v18: core::fmt::Arguments;  // xmm0
    let v19: struct16;  // xmm1
    let v20: iNone;  // xmm2

    v6 = just::parser::Parser::parse_name(a1);
    v0 = v6.field_0;
    v2 = v6.field_16;
    v3 = v6.field_32;
    v4 = v6.field_48;
    v5 = v9;
    if v10 != 37 {
        return struct88 {
            field_0: v0
            field_16: v2
            field_32: v3
            field_48: v4
            field_64: v5
            field_72: v10
            field_73: v11
            field_76: <UNKNOWN>
        };
    }
    v15 = v1;
    v12 = <just::namepath::Namepath as core::convert::From<just::name::Name>>::from(&v15);
    loop {
        v7 = just::parser::Parser::accepted(a1, 13);
        if v10 != 37 {
            v18 = *((&v7.field_0 as &char + 1) as &i128);
            v19 = *((&v7.field_16 as &char + 1) as &i128);
            v20 = *((&v7.field_32 as &char + 1) as &i128);
            return struct96 {
                field_0: v7.field_0 as i8
                field_1: <UNKNOWN>
                field_17: <UNKNOWN>
                field_33: <UNKNOWN>
                field_49: <UNKNOWN>
                field_64: v10
                field_72: <UNKNOWN>
                field_73: <UNKNOWN>
                field_76: <UNKNOWN>
            };
        } else if (v7.field_0 as i8 & 1) {
            v8 = just::parser::Parser::parse_name(a1);
            v0 = v8.field_0;
            v2 = v8.field_16;
            v3 = v8.field_32;
            v4 = v8.field_48;
            v5 = v9;
            if v10 != 37 {
                return struct88 {
                    field_0: v0
                    field_16: v2
                    field_32: v3
                    field_48: v4
                    field_64: v5
                    field_72: v10
                    field_73: v11
                    field_76: <UNKNOWN>
                };
            }
            v16 = v1;
            v13 = just::namepath::Namepath::push(&v16);
        } else {
            return struct32 {
                field_0: v13
                field_16: v14
                padding_24: <UNKNOWN>
                field_72: <UNKNOWN>
            };
        }
    }
}
