fn just::evaluator::Evaluator::evaluate_assignment(a1: i64, a2: i64) -> Result<struct105, struct17> {
    let a0: i64;  // rdi
    let v0: struct103;  // [bp-0xc8], Other Possible Types: u8
    let v1: i8;  // [bp-0xc0]
    let v2: i8;  // [bp-0xb0]
    let v3: i8;  // [bp-0xa8]
    let v4: i8;  // [bp-0x98]
    let v5: i8;  // [bp-0x88]
    let v6: i8;  // [bp-0x78]
    let v7: i8;  // [bp-0x68]
    let v8: u128;  // [bp-0x58]
    let v9: u128;  // [bp-0x51]
    let v10: u128;  // [bp-0x49]
    let v11: u64;  // [bp-0x41]
    let v13: core::option::Option<&str>;  // rbp
    let v14: u64;  // rax
    let v15: u64;  // r14
    let v16: u64;  // rdx
    let v17: u8;  // al
    let v18: u128;  // xmm0
    let v19: core::slice::iter::Iter<u8>;  // al
    let v20: core::option::Option<(&std::ffi::os_str::OsString, &core::option::Option<std::ffi::os_str::OsString>)>;  // xmm0
    let v21: struct24;  // xmm1
    let v22: u128;  // xmm2
    let v23: core::option::Option<(&std::ffi::os_str::OsString, &core::option::Option<std::ffi::os_str::OsString>)>;  // xmm0
    let v24: iNone;  // xmm2
    let v25: alloc::collections::btree::map::Iter<std::ffi::os_str::OsString, core::option::Option<std::ffi::os_str::OsString>>;  // xmm3
    let v26: u64;  // rax

    v13 = a2 + 128;
    v14 = just::token::Token::lexeme(v13);
    v15 = a1 + 40;
    if !just::scope::Scope::bound(*((a1 + 40) as &i64), *((a1 + 48) as &i64), v14, v16) {
        just::evaluator::Evaluator::evaluate_expression(&v0, a1, a2);
        v17 = v0;
        if v17 != 56 {
            v23 = v0.field_0;
            v24 = *(&v3 as &i128);
            v25 = *(&v4 as &i128);
            v10 = v0.field_0;
            *(&v8 as &core::option::Option<(&std::ffi::os_str::OsString, &core::option::Option<std::ffi::os_str::OsString>)>) = v23;
            return Ok(struct112 {
                field_0: v17
                field_1: <UNKNOWN>
                field_16: <UNKNOWN>
                field_32: <UNKNOWN>
                field_48: <UNKNOWN>
                field_64: <UNKNOWN>
                field_80: <UNKNOWN>
                field_96: <UNKNOWN>
            });
        }
        v11 = *(&v2 as &i64);
        v18 = *(&v1 as &i128);
        v9 = v18;
        v19 = *((a2 + 205) as &i8);
        v20 = *(v13 as &i128);
        v21 = *((v13 + 16) as &i128);
        v22 = *((v13 + 32) as &i128);
        v0 = struct103 {
            field_0: v18
            field_16: v11
            field_24: v20
            field_40: v21
            field_56: v22
            field_72: *((v13 + 48) as &i128)
            field_88: *((v13 + 64) as &i64)
            field_96: 0
            field_100: 0
            field_101: v19
            field_102: *((a2 + 206) as &i8)
        };
        just::scope::Scope::bind(v15, &v0);
    }
    v26 = just::scope::Scope::value(v15, v14, v16);
    core::option::unwrap(v26);
    return struct24 {
        field_0: 56
        padding_1: <UNKNOWN>
        field_8: v26
        field_16: v16
    };
}
