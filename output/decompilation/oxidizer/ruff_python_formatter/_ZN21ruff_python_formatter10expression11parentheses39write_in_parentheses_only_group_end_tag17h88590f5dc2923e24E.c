fn ruff_python_formatter::expression::parentheses::write_in_parentheses_only_group_end_tag(a0: u64, a1: i64) -> void {
    let v0: u8;  // [bp-0x28]
    let v3: struct16;  // rax
    let v4: u32;  // ecx

    v3 = *((a1 + 48) as &i64)() as i64;
    v4 = *((v3 + 32) as &i8);
    if v4 < 2 {
        return;
    }
    if v4 == 2 && !*((v3 + 36) as &i32) {
        return;
    }
    v0 = 10;
    *((a1 + 24) as &i64)(a0, &v0);
    return;
}
