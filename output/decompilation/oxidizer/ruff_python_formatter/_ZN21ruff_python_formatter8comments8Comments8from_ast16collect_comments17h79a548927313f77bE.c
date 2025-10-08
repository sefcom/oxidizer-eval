fn ruff_python_formatter::comments::Comments::from_ast::collect_comments(a0: u64, a1: u64, a2: u64, a3: u64, a4: i64) -> long long {
    let v0: struct16;  // [bp-0x100], Other Possible Types: struct80
    let v1: i64;  // [bp-0xf0]
    let v2: struct21;  // [bp-0xe8]
    let v3: u64;  // [bp-0xe0]
    let v4: void*;  // [bp-0xd0]
    let v5: u64;  // [bp-0xc8]
    let v6: void*;  // [bp-0xc0]
    let v7: i64;  // [bp-0xb8]
    let v8: u64;  // [bp-0xb0]
    let v9: u64;  // [bp-0xa8]
    let v10: struct21;  // [bp-0xa0]
    let v11: &mut [u8];  // [bp-0x98]
    let v12: struct12;  // [bp-0x88]
    let v13: void*;  // [bp-0x70]
    let v14: u64;  // [bp-0x68]
    let v15: u128;  // [bp-0x60]
    let v16: u64;  // [bp-0x50]
    let v17: void*;  // [bp-0x48]
    let v18: &mut [u8];  // [bp-0x40]
    let v19: struct12;  // [bp-0x30]
    let v20: i64;  // [bp-0x20]
    let v21: u64;  // [bp-0x18]
    let v22: u64;  // [bp-0x10]

    if *((a4 + 16) as &i64) {
        v13 = 0;
        v14 = 4;
        v15 = 0;
        v16 = 8;
        v17 = 0;
        v18 = *(&g_97c818 as &i128);
        v19 = *(&g_97c828 as &i128);
        v20 = a4;
        v21 = a2;
        v22 = a3;
        v7 = &v13;
        v8 = &g_97d488;
        v9 = a2;
        v10 = a3;
        v4 = 0;
        v5 = 8;
        v6 = 0;
        v3 = 94;
        v0 = 0;
        v1 = *((a4 + 8) as &i64);
        v2 = *((a4 + 8) as &i64) + *((a4 + 16) as &i64) * 8;
        ruff_python_formatter::comments::visitor::CommentsVisitor::visit(&v0, a0, a1);
        v11 = v18;
        v12 = v19;
    }
    v0 = struct80 {
        field_0: 0
        field_8: 4
        field_16: 0
        field_32: ""
        field_48: v11
        field_64: v12
    };
    return ruff_python_formatter::comments::Comments::new(&v0, a4);
}
