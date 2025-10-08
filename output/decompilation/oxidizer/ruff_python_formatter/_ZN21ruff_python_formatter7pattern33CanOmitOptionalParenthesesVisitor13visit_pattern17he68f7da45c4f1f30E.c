fn ruff_python_formatter::pattern::CanOmitOptionalParenthesesVisitor::visit_pattern(a0: i64, a1: i64) -> int {
    let v0: struct16;  // [bp-0x28]
    let v1: u64;  // [bp-0x20]
    let v2: u64;  // [bp-0x18]
    let v3: core::fmt::Arguments;  // [bp-0x10]
    let v4: u64;  // [bp-0x8]
    let v6: u64;  // r15
    let v7: core::fmt::Arguments;  // r14
    let v8: u64;  // r12
    let v9: u64;  // rbx
    let v10: struct16;  // rax
    let v11: core::fmt::Arguments;  // rax

    v4 = v6;
    v3 = v7;
    v2 = v8;
    v1 = v9;
    v0 = v10;
    v11 = 0x8000000000000000 ^ *(a1 as &i64);
}
