fn just::parser::Parser::presume(a0: i64, a1: u64, a2: i192) -> long long {
    let v0: struct24;  // [bp-0x1a1]
    let v1: u32;  // [bp-0x1a0]
    let v2: core::fmt::rt::Argument;  // [bp-0x19d]
    let v3: u32;  // [bp-0x198]
    let v4: core::fmt::rt::Argument;  // [bp-0x195]
    let v5: struct80;  // [bp-0x178]
    let v6: u128;  // [bp-0x168]
    let v7: u128;  // [bp-0x158]
    let v8: u128;  // [bp-0x148]
    let v9: struct24;  // [bp-0x140]
    let v10: i8;  // [bp-0x130]
    let v11: struct73;  // [bp-0x118], Other Possible Types: struct80
    let v12: alloc::string::String;  // [bp-0x118]
    let v13: alloc::string::String;  // [bp-0x110]
    let v14: iNone;  // [bp-0x108], Other Possible Types: struct24
    let v15: struct40;  // [bp-0xf8], Other Possible Types: u128
    let v16: struct24;  // [bp-0xe8], Other Possible Types: u128
    let v17: struct80;  // [bp-0xd8]
    let v18: core::fmt::rt::Argument;  // [bp-0xd4]
    let v19: u8;  // [bp-0xd0]
    let v20: core::fmt::rt::Argument;  // [bp-0xa8]
    let v21: struct16;  // [bp-0x98]
    let v22: struct105;  // [bp-0x88]
    let v23: core::fmt::Arguments;  // [bp-0x78]
    let v24: iNone;  // [bp-0x68]
    let v25: iNone;  // [bp-0x58]
    let v26: iNone;  // [bp-0x48]
    let v27: iNone;  // [bp-0x38]
    let v28: u8;  // [bp-0x28]
    let v29: u32;  // [bp-0x27]
    let v30: core::fmt::rt::Argument;  // [bp-0x24]
    let v32: u8;  // al
    let v34: struct89;  // rax
    let v35: struct80;  // xmm0
    let v36: struct80;  // xmm1
    let v37: core::fmt::rt::Argument;  // edx
    let v38: struct72;  // xmm0
    let v39: core::option::Option<(&std::ffi::os_str::OsString, &core::option::Option<std::ffi::os_str::OsString>)>;  // xmm1
    let v40: struct89;  // xmm2
    let v41: core::fmt::rt::Argument;  // edx

    v0 = a2;
    v11 = just::parser::Parser::advance(a1);
    v5.field_0 = v11.field_0;
    *(&v6 as void*) = v14;
    v7 = v15;
    v8 = v16;
    v32 = v11.field_64;
    v3 = *((&v11.field_64 as &char + 1) as &i32);
    v4 = v18;
    if v19 != 37 {
        v37 = *(&(&v11.field_72)[1] as &i32);
        v38 = v5.field_0;
        v39 = v6;
        v40 = v7;
        v41 = v3;
        return struct88 {
            field_0: v38
            field_16: v39
            field_32: v40
            field_48: v8
            field_64: v28
            field_65: v4
            field_68: v19
            field_72: *(&(&v11.field_72)[4] as &i32)
            field_73: <UNKNOWN>
            field_76: <UNKNOWN>
        };
    }
    v20 = v5.field_0;
    v21 = v6;
    v22 = v7;
    v23 = v8;
    v1 = v3;
    v2 = v4;
    v24 = v20;
    v25 = v21;
    v26 = v22;
    v27 = v23;
    v28 = v32;
    v29 = v3;
    v30 = v4;
    if v28 != v0 {
        v13 = format!("Presumed next token would have kind {}, but found {}", &v0, &v28);
        v12 = 9223372036854775848;
        v34 = just::parser::Parser::error(a1, &v12);
        v35 = *(&v10 as &i128);
        v17 = v35;
        v36 = *((&v5.field_0 as &char + 8) as &i128);
        v16 = v9;
        v15 = *((&v7 as &char + 8) as &i128);
        v14 = *((&v6 as &char + 8) as &i128);
        v11 = v36;
        return struct80 {
            field_0: v36
            field_16: v14
            field_32: v15
            field_48: v9
            field_64: v35
        };
    }
    return struct80 {
        field_0: v20
        field_16: v21
        field_32: v22
        field_48: v23
        field_64: v0
        field_65: v2
        field_68: 37
        field_72: <UNKNOWN>
    };
}
