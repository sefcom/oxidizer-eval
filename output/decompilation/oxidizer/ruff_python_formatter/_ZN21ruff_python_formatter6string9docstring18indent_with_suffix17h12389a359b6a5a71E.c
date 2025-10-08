fn ruff_python_formatter::string::docstring::indent_with_suffix(a1: &str) -> : struct32 {
    let a0: i64;  // rdi
    let v0: struct21;  // [bp-0x38]
    let v2: struct21;  // rax
    let v3: struct16;  // rax
    let v4: u64;  // rdx

    v0 = v2;
    v3 = <str as ruff_python_trivia::whitespace::PythonWhitespace>::trim_whitespace_start(a1);
    if v4 < v4 {
        core::option::expect_failed("suffix <= line"); /* do not return */
    }
    return struct32 {
        field_0: core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeTo<usize>>::get(v4 - v4, a1) as u64
        field_8: v4
        field_16: v3
        field_24: v4
    };
}
