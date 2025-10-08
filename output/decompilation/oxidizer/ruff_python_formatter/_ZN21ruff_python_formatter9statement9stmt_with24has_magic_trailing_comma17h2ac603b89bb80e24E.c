fn ruff_python_formatter::statement::stmt_with::has_magic_trailing_comma(a0: i64, a1: i64) -> u64 {
    let v0: struct16;  // [bp-0x8]
    let v2: u64;  // rax

    if !*((a0 + 16) as &i64) {
        return 0;
    }
    v2 = *((*((a0 + 8) as &i64) + *((a0 + 16) as &i64) * 104 - 20) as &i32);
    if v2 <= *((a0 + 52) as &i32) {
        return ruff_python_formatter::other::commas::has_magic_trailing_comma(v0 as u32, *((a0 + 52) as &i32), a1);
    }
    v0 = v2;
    core::panicking::panic("assertion failed: start.raw <= end.raw"); /* do not return */
}
