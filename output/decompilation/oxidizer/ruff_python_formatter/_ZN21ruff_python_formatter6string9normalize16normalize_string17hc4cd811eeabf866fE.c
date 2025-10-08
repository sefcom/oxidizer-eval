fn ruff_python_formatter::string::normalize::normalize_string(a0: i128, a1: &str, a2: i64, a3: i32, a4: i32) {
    let v1: u32;  // [bp-0x114]
    let v2: void*;  // [bp-0x110]
    let v3: u64;  // [bp-0x108]
    let v4: void*;  // [bp-0x100]
    let v7: iNone;  // [bp-0xf8]
    let v8: core::result::Result<usize, std::io::error::Error>;  // [bp-0xe0]
    let v13: u32;  // [bp-0xc0]
    let v14: u32;  // [bp-0xbc]
    let v22: struct24;  // [bp-0x80]
    let v31: core::option::Option<&str>;  // r12
    let v32: Option<struct80>;  // r13
    let v33: u64;  // rsi
    let v34: u64;  // rdx
    let v35: u32;  // r15d
    let v36: Option<struct80>;  // rbp

    v14 = a4;
    v31 = a3;
    v32 = a0;
    v2 = 0;
    v3 = 1;
    v4 = 0;
    v22 = ruff_python_formatter::string::normalize::CharIndicesWithOffset::new(v33, v34, a2);
    v1 = (!(v31 as u8 & 1)) * 5 + 34;
    v13 = (v31 as u32 & 1) * 5 + 34;
    v8 = v22.field_16;
    v7 = *(&v22.field_0 as &i128);
    v35 = 1114113;
    v36 = 0;
}
