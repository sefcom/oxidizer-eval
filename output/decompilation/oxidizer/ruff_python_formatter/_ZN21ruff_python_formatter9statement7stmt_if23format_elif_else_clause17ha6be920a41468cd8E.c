fn ruff_python_formatter::statement::stmt_if::format_elif_else_clause(a0: u64, a1: i128, a2: void*, a3: u64, a4: u64, a5: i128) -> int {
    let v0: struct16;  // [bp-0x120]
    let v1: core::fmt::rt::Argument;  // [bp-0x118]
    let v2: u32;  // [bp-0x110]
    let v4: struct41;  // [bp-0xe8]
    let v5: struct16;  // [bp-0xe0]
    let v6: i64;  // [bp-0xd8]
    let v7: struct16;  // [bp-0xd0]
    let v8: u64;  // [bp-0xd0]
    let v9: struct21;  // [bp-0xc8]
    let v10: u64;  // [bp-0xc0]
    let v11: u64;  // [bp-0xb8]
    let v12: u64;  // [bp-0xb0]
    let v13: u64;  // [bp-0xa8]
    let v14: struct21;  // [bp-0xa0]
    let v15: u64;  // [bp-0x98]
    let v16: struct16;  // [bp-0x90]
    let v17: u64;  // [bp-0x88]
    let v18: struct16;  // [bp-0x80]
    let v19: struct12;  // [bp-0x78]
    let v20: struct12;  // [bp-0x70]
    let v21: struct12;  // [bp-0x68]
    let v22: struct32;  // [bp-0x60]
    let v23: struct12;  // [bp-0x40]
    let v24: struct21;  // [bp-0x38]
    let v26: core::option::Option<&str>;  // rax
    let v27: core::fmt::rt::Argument;  // rbx
    let v28: struct21;  // r14
    let v29: u64;  // rdx
    let v30: u32;  // ecx

    v0 = a1;
    v4 = a1 + 24;
    v26 = *((a2[8] as i64 + 48) as &i64)(*(a2 as &i64)) as i64;
    alloc::rc::RcInnerPtr::inc_strong(*((v26 + 16) as &i64));
    v27 = *((v26 + 16) as &i64);
    v1 = v27;
    v28 = ruff_python_formatter::comments::Comments::dangling(v27, a1);
    v7 = struct16 {
        field_0: 87
        field_8: a1
    };
    v5 = &v0;
    v6 = &v4;
    v8 = 6;
    v9 = a1;
    v10 = ruff_python_formatter::comments::map::MultiMap<K,V>::leading(v27 + 16, &v8);
    v11 = v29;
    v12 = a3;
    v13 = a4;
    v14 = &v5;
    v15 = &g_97ee20;
    v16 = v28;
    v17 = v29;
    v18 = a1;
    v21 = a5;
    v19 = v16;
    v20 = v29;
    v2 = v30;
    v22 = struct32 {
        field_0: &v8
        field_8: &g_97e140
        field_16: &v18
        field_24: &g_97e160
    };
    v23 = &v2;
    v24 = &g_97e810.field_0;
    <ruff_formatter::formatter::Formatter<Context> as ruff_formatter::buffer::Buffer>::write_fmt(a0, a2, &v22, 3);
    return;
}
