fn ruff_python_formatter::pattern::can_pattern_omit_optional_parentheses::has_parentheses_and_is_non_empty(a0: i64) -> int {
    let v0: struct24;  // [bp-0x18]
    let v1: u64;  // [bp-0x10]
    let v2: core::fmt::rt::Argument;  // [bp-0x8]
    let v4: core::fmt::rt::Argument;  // r14
    let v5: u64;  // rbx
    let v6: struct24;  // rax
    let v7: u64;  // rax

    v2 = v4;
    v1 = v5;
    v0 = v6;
    v7 = 0x8000000000000000 ^ *(a0 as &i64);
}
