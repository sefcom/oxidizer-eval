fn just::parser::Parser::presume_any(a0: i64, a1: u64) -> long long {
    let v0: u128;  // [bp-0x178]
    let v1: u128;  // [bp-0x168]
    let v2: alloc::collections::btree::map::Iter<std::ffi::os_str::OsString, core::option::Option<std::ffi::os_str::OsString>>;  // [bp-0x158]
    let v3: u128;  // [bp-0x148]
    let v4: u64;  // [bp-0x138]
    let v5: i8;  // [bp-0x130]
    let v6: struct73;  // [bp-0x118], Other Possible Types: struct80
    let v7: u64;  // [bp-0x118]
    let v8: alloc::string::String;  // [bp-0x110]
    let v9: iNone;  // [bp-0x108], Other Possible Types: alloc::collections::btree::map::Iter<std::ffi::os_str::OsString, core::option::Option<std::ffi::os_str::OsString>>
    let v10: alloc::collections::btree::map::Iter<std::ffi::os_str::OsString, core::option::Option<std::ffi::os_str::OsString>>;  // [bp-0xf8]
    let v11: iNone;  // [bp-0xe8], Other Possible Types: struct104
    let v12: struct80;  // [bp-0xd8]
    let v13: struct24;  // [bp-0xd0]
    let v14: &str;  // [bp-0x88]
    let v15: core::fmt::rt::Argument;  // [bp-0x78]
    let v16: struct16;  // [bp-0x70]
    let v17: iNone;  // [bp-0x68]
    let v18: core::result::Result<alloc::string::String, std::env::VarError>;  // [bp-0x58]
    let v19: alloc::string::String;  // [bp-0x48]
    let v20: iNone;  // [bp-0x38]
    let v21: struct32;  // [bp-0x28]
    let v23: struct24;  // rax
    let v24: struct89;  // rax
    let v25: struct80;  // xmm0
    let v26: struct80;  // xmm1
    let v27: core::fmt::rt::Argument;  // ecx
    let v28: struct24;  // xmm0
    let v29: struct24;  // xmm1
    let v30: alloc::string::String;  // xmm2

    v6 = just::parser::Parser::advance(a1);
    v23 = v13 as u64;
    v0 = v6.field_0;
    *(&v1 as void*) = v9;
    v2 = v10;
    *(&v3 as void*) = v11;
    v4 = v6.field_64;
    if v23 as u8 != 37 {
        v27 = *(&(&v6.field_72)[1] as &i32);
        v28 = v0;
        v29 = v1;
        v30 = v2.range.front as i128;
        return struct88 {
            field_0: v28
            field_16: v29
            field_32: v30
            field_48: v3
            field_64: v4
            field_72: v23 as u8
            field_73: *(&(&v6.field_72)[4] as &i32)
            field_76: <UNKNOWN>
        };
    }
    v17 = v0;
    v18 = v1;
    v19 = v2.range.front as i128;
    v20 = v3;
    v21 = v4;
    if !<T as core::slice::cmp::SliceContains>::slice_contains(&v21) {
        v14 = "or";
        v15 = &g_4715ee.ty;
        v16 = &g_4715f0.field_0;
        v8 = format!("Presumed next token would be {}, but found {}", &v14 as u64, &v21);
        v7 = 9223372036854775848;
        v24 = just::parser::Parser::error(a1, &v7);
        v25 = *(&v5 as &i128);
        v12 = v25;
        v26 = *((&v0 as &char + 8) as &i128);
        v11 = *((&v3 as &char + 8) as &i128);
        v10 = *((&v2.range.front as &char + 8) as &i128);
        v9 = *((&v1 as &char + 8) as &i128);
        v6 = v26;
        return struct80 {
            field_0: v26
            field_16: v9
            field_32: v10
            field_48: v11
            field_64: v25
        };
    }
    return struct80 {
        field_0: v17
        field_16: v18
        field_32: v19
        field_48: v20
        field_64: v21
        field_72: 37
    };
}
