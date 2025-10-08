fn ruff_python_formatter::format_node(a0: i64, a1: u64, a2: void*, a3: u64, a4: u64, a5: i64) -> int {
    let v0: struct16;  // [bp-0xe0]
    let v1: u128;  // [bp-0xd8]
    let v2: struct34;  // [bp-0xd8]
    let v3: struct16;  // [bp-0xc8]
    let v4: struct12;  // [bp-0xb0]
    let v5: struct21;  // [bp-0xae]
    let v6: u128;  // [bp-0xac]
    let v7: struct12;  // [bp-0x9c]
    let v8: struct16;  // [bp-0x98]
    let v9: Result<struct88, struct32>;  // [bp-0x88]
    let v10: u128;  // [bp-0x80]
    let v11: struct16;  // [bp-0x70]
    let v12: u128;  // [bp-0x68]
    let v13: struct21;  // [bp-0x58]
    let v14: u128;  // [bp-0x48]
    let v16: struct16;  // r14
    let v17: u64;  // rdx
    let v18: core::fmt::Arguments;  // rax

    v16 = a1 + 72;
    v18 = ruff_python_formatter::comments::Comments::from_ast::collect_comments(<T as core::convert::Into<U>>::into(v16), v17, a3, a4, a2);
    v6 = *(a5 as &i128);
    v2 = struct34 {
        field_0: a3
        field_8: a4
        field_16: v18
        field_24: a1
        field_32: 0x100
    };
    v4 = 0;
    v7 = 2;
    v5 = 2;
    v0 = v16;
    v8 = struct16 {
        field_0: &v0
        field_8: &g_97f528
    };
    v9 = ruff_formatter::format(&v2, &v8);
    v1 = v10;
    v3 = v11;
    return struct88 {
        field_0: v9 as i64
        field_8: v1
        field_24: v3
        field_32: v12
        field_48: v13
        field_64: v14
        field_80: *((&v9 as &char + 80) as &i64)
    };
}
