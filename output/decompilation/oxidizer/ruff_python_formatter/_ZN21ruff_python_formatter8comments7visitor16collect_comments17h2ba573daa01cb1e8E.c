fn ruff_python_formatter::comments::visitor::collect_comments(a1: i64, a2: i64, a3: i64, a4: i64, a5: i64) -> : struct24 {
    let a0: i64;  // rdi
    let v0: void*;  // [bp-0x88]
    let v1: u64;  // [bp-0x80]
    let v2: void*;  // [bp-0x78]
    let v3: struct16;  // [bp-0x70]
    let v4: u64;  // [bp-0x60]
    let v5: u64;  // [bp-0x58]
    let v6: u64;  // [bp-0x50]
    let v7: void*;  // [bp-0x40]
    let v8: core::fmt::Arguments;  // [bp-0x38]
    let v9: void*;  // [bp-0x30]
    let v10: &mut [u8];  // [bp-0x28]
    let v11: u64;  // [bp-0x20]
    let v12: u64;  // [bp-0x18]
    let v13: u64;  // [bp-0x10]
    let v15: u64;  // rax

    v0 = 0;
    v1 = 8;
    v2 = 0;
    v10 = &v0;
    v11 = &g_97d438;
    v12 = a2;
    v13 = a3;
    v7 = 0;
    v8 = 8;
    v9 = 0;
    v6 = 94;
    v3 = 0;
    v4 = a4;
    v5 = a4 + a5 * 8;
    v15 = ((0 ^ *(a1 as &i64)) & (0 ^ -(*(a1 as &i64)))) >> 63 & 255;
    ruff_python_formatter::comments::visitor::CommentsVisitor::visit(&v3, v15, a1 + v15 * 8);
    return struct24 {
        field_0: *(&v0 as &i128)
        field_16: 0
    };
}
