fn just::parser::Parser::parse_parameter(a1: i64, a2: i8) -> : struct202 {
    let a0: void*;  // rdi
    let v0: iNone;  // [bp-0x1b8]
    let v1: iNone;  // [bp-0x1a8]
    let v2: iNone;  // [bp-0x198]
    let v3: iNone;  // [bp-0x188]
    let v4: struct64;  // [bp-0x178], Other Possible Types: u64
    let v5: u64;  // [bp-0x178]
    let v6: struct82;  // [bp-0x168]
    let v7: struct82;  // [bp-0x168]
    let v8: struct80;  // [bp-0x168]
    let v9: u64;  // [bp-0x128]
    let v10: u8;  // [bp-0x120]
    let v11: struct128;  // [bp-0x110]
    let v12: struct82;  // [bp-0x100]
    let v13: u64;  // [bp-0xf0]
    let v14: iNone;  // [bp-0xe8]
    let v15: iNone;  // [bp-0xd8]
    let v16: alloc::string::String;  // [bp-0xc8]
    let v17: Result<struct105, struct17>;  // [bp-0xb8]
    let v18: alloc::string::String;  // [bp-0xa8]
    let v19: struct128;  // [bp-0x98]
    let v20: struct24;  // [bp-0x88]
    let v21: struct24;  // [bp-0x78]
    let v22: struct24;  // [bp-0x68]
    let v23: Result<struct40, struct16>;  // [bp-0x58]
    let v24: struct128;  // [bp-0x48]
    let v25: struct82;  // [bp-0x38]
    let v26: u64;  // [bp-0x28]
    let v28: core::result::Result<&str, core::str::error::Utf8Error>;  // al
    let v29: struct89;  // al
    let v30: struct89;  // al
    let v31: struct24;  // rax
    let v32: alloc::collections::btree::map::Iter<std::ffi::os_str::OsString, core::option::Option<std::ffi::os_str::OsString>>;  // xmm0
    let v33: struct8;  // xmm1
    let v34: struct157;  // xmm2
    let v35: alloc::string::String;  // esi
    let v36: struct73;  // ecx
    let v37: iNone;  // xmm0
    let v38: core::fmt::rt::Argument;  // xmm1
    let v39: iNone;  // xmm2
    let v40: u32;  // edx
    let v41: u8;  // al

    v6 = just::parser::Parser::accepted(a1, 18);
    v28 = v10;
    if v10 != 37 {
        v37 = *((&v6.field_0 as &char + 1) as &i128);
        v38 = *((&v6.field_16 as &char + 1) as &i128);
        v39 = *((&v6.field_32 as &char + 1) as &i128);
        v40 = *(&v6.field_72 as &i32);
        return struct104 {
            field_0: 19
            field_8: v6.field_0 as i8
            field_9: <UNKNOWN>
            field_25: <UNKNOWN>
            field_41: <UNKNOWN>
            field_57: <UNKNOWN>
            field_72: v41
            field_80: <UNKNOWN>
            field_81: <UNKNOWN>
            field_84: <UNKNOWN>
        };
    }
    v8 = just::parser::Parser::parse_name(a1);
    v29 = v10;
    v0 = v8.field_0;
    v1 = v8.field_16;
    v2 = v8.field_32;
    v3 = v8.field_48;
    v5 = v9;
    if v10 != 37 {
        v36 = *((&v8.field_64 as &char + 9) as &i32);
        *(&a0[84] as &i32) = *((&v8.field_64 as &char + 12) as &i32);
        *(&a0[81] as &struct73) = v36;
        *(&a0[72] as &u64) = v4;
        a0[56] = v3;
        a0[40] = v2;
        a0[24] = v1;
        a0[8] = v0;
    }
    v14 = v0;
    v15 = v1;
    v16 = v2;
    v17 = v3;
    v18 = v4;
    v7 = just::parser::Parser::accepted(a1, 21);
    v30 = v10;
    if v10 != 37 {
        *(&a0[72] as &u64) = v9;
        v32 = *((&v7.field_0 as &char + 1) as &i128);
        v33 = *((&v7.field_16 as &char + 1) as &i128);
        v34 = *((&v7.field_32 as &char + 1) as &i128);
        *(&a0[57] as &i128) = *((&v7.field_48 as &char + 1) as &i128);
        *(&a0[41] as &struct157) = v34;
        *(&a0[25] as &struct8) = v33;
        *(&a0[9] as &alloc::collections::btree::map::Iter<std::ffi::os_str::OsString, core::option::Option<std::ffi::os_str::OsString>>) = v32;
        v35 = *(&v7.field_72 as &i32);
        *(&a0[81] as &i32) = *((&v7.field_68 as &char + 1) as &i32);
        *(&a0[84] as &alloc::string::String) = v35;
        *(&a0[8] as &i8) = v7.field_0;
    }
    v31 = 18;
    if !(v7.field_0 as i8 & 1) {
        return struct208 {
            field_0: v31
            field_8: v19
            field_24: v20
            field_40: v21
            field_56: v22
            field_72: v23
            field_88: v24
            field_104: v25
            field_120: v26
            field_128: v14
            field_144: v15
            field_160: v16
            field_176: v17
            field_192: v18
            field_200: v7.field_0 as i8
            field_201: a2
        };
    }
    just::parser::Parser::parse_value(&v7, a1);
    v31 = v7.field_0 as i64;
    v0 = *((&v7.field_0 as &char + 8) as &i128);
    v1 = *((&v7.field_16 as &char + 8) as &i128);
    v2 = *((&v7.field_32 as &char + 8) as &i128);
    v3 = *((&v7.field_48 as &char + 8) as &i128);
    v4 = *(&v7.field_68 as &i128);
    if v7.field_0 as i64 == 18 {
        *(&a0[72] as &struct64) = v4;
        a0[56] = v3;
        a0[40] = v2;
        a0[24] = v1;
        a0[8] = v0;
    }
    v26 = v13;
    v25 = v12;
    v24 = v11;
    v19 = v0;
    v20 = v1;
    v21 = v2;
    v22 = v3;
    v23 = v4;
    return struct208 {
        field_0: v31
        field_8: v19
        field_24: v20
        field_40: v21
        field_56: v22
        field_72: v23
        field_88: v24
        field_104: v25
        field_120: v26
        field_128: v14
        field_144: v15
        field_160: v16
        field_176: v17
        field_192: v18
        field_200: v7.field_0 as i8
        field_201: a2
    };
}
