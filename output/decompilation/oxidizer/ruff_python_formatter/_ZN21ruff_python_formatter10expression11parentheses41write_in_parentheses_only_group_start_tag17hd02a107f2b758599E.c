fn ruff_python_formatter::expression::parentheses::write_in_parentheses_only_group_start_tag(a0: u64, a1: i64) -> long long {
    let v0: std::io::stdio::Stdin;  // [bp-0x28]
    let v1: u8;  // [bp-0x20]
    let v2: u32;  // [bp-0x1c]
    let v3: u8;  // [sp-0x18]
    let v4: u8;  // [bp-0x14]
    let v6: i64;  // rax
    let v7: u32;  // ecx

    v6 = *((a1 + 48) as &i64)() as i64;
    v7 = *((v6 + 32) as &i8);
    if v7 < 2 {
        return v6;
    }
    if v7 == 2 {
        if *((v6 + 36) as &i32) {
            v1 = 8;
            v2 = *((v6 + 36) as &i32);
            v3 = 1;
            v4 = 0;
        } else {
            return v2;
        }
    }
    v0 = 10;
    return *((a1 + 24) as &i64)(a0, &v0) as u64;
}
