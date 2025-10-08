fn ruff_python_formatter::statement::suite::stub_suite_can_omit_empty_line(a0: i64, a1: i64, a2: i64, a3: i64) -> u64 {
    let v1: u64;  // 4115
    let v2: i64;  // rbx
    let v3: struct21;  // rbp
    let v4: u64;  // 4096
    let v5: u64;  // rdx
    let v6: struct16;  // r13b
    let v7: struct16;  // rax
    let v8: core::fmt::Arguments;  // al

    v1 = *(a0 as &i64);
    if (((0 ^ v1) & (0 ^ -(v1))) >> 63) as char {
        v3 = (!ruff_python_formatter::statement::suite::contains_only_an_ellipsis(a0[40] as i64, a0[48] as i64, *((*((a3 + 48) as &i64)(a2) as i64 + 16) as &i64)) ? 0 : (*(a1 as &i64) == 0x8000000000000000 ? ruff_python_formatter::statement::suite::stub_suite_can_omit_empty_line::{{closure}}(a2, a3, a1 + 8) : 0));
        v4 = a2;
    } else {
        v2 = *((a3 + 48) as &i64);
        v3 = 0;
        v4 = a2;
    }
    v5 = v4;
    if *((v2(v5) as i64 + 58) as &i8) {
        if *(a0 as &i64) > 9223372036854775831 {
            goto LABEL_721cb5;
        }
    } else {
        if *(a0 as &i64) > 9223372036854775831 {
LABEL_721cb5:
            v7 = v2(a2) as i64;
        }
    }
    return v3 as u32 & -0x100 | (v3 as u8 | v6 | v8) as u32;
}
