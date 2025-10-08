fn starship::modules::directory::contract_path(a1: i64, a2: i64, a3: i64, a4: i64, a5: i192, a6: i64) -> : struct24 {
    let a0: u64;  // rdi
    let v0: struct24;  // [bp-0xf0]
    let v1: u64;  // [bp-0xe8]
    let v2: iNone;  // [bp-0xe0], Other Possible Types: u8
    let v3: i64;  // [bp-0xd0]
    let v4: u8;  // [bp-0xc8]
    let v5: struct20;  // [bp-0xb0], Other Possible Types: struct24
    let v6: Result<struct24, struct16>;  // [bp-0xa8]
    let v7: struct24;  // [bp-0xa0]
    let v8: struct24;  // [bp-0x98]
    let v9: core::option::Option<&str>;  // [bp-0x90]
    let v10: Result<struct32, struct16>;  // [bp-0x70], Other Possible Types: struct20
    let v11: core::result::Result<(), std::io::error::Error>;  // [bp-0x68]
    let v12: i64;  // [bp-0x60]
    let v13: u64;  // [bp-0x58]
    let v14: struct24;  // [bp-0x30]
    let v15: struct24;  // rbx
    let v16: struct24;  // rax
    let v17: core::option::Option<&str>;  // rdx, Other Possible Types: struct16
    let v18: i64;  // rdx
    let v19: alloc::string::String;  // rax

    v14 = v15;
    v0 = a5;
    v1 = a6;
    if !std::path::Path::starts_with(a1, a2, a3, a4) {
        <std::path::Path as path_slash::PathExt>::to_slash_lossy(a0, a1, a2);
        return;
    }
    v10 = std::path::Path::components(a1, a2);
    v5 = std::path::Path::components(a3, a4);
    if <std::path::Components as core::cmp::PartialEq>::eq(&v10, &v5) {
        return struct24 {
            field_0: 0x8000000000000000
            field_8: a5
            field_16: a6
        };
    }
    v16 = std::path::Path::strip_prefix(a1, a2, a3, a4);
    if !v16 {
        v17 = a2;
        if !v16 {
            goto LABEL_b8e63b;
        }
LABEL_b8e63a:
        v19 = v16;
    } else {
        v17 = v18;
        if v16 {
            goto LABEL_b8e63a;
        }
LABEL_b8e63b:
        v19 = a1;
    }
    <std::path::Path as path_slash::PathExt>::to_slash_lossy(&v4, v19, v17);
    v10 = &v0;
    v11 = <&T as core::fmt::Display>::fmt;
    v12 = &v4;
    v13 = <alloc::borrow::Cow<B> as core::fmt::Display>::fmt;
    v5 = &g_11f4318.field_0;
    v6 = 2;
    v9 = 0;
    v7 = &v10;
    v8 = 2;
    core::option::Option<T>::map_or_else(&v2, 0, a2, &v5);
    return struct24 {
        field_0: v2
        field_16: v3
    };
}
