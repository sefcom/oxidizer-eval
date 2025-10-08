fn ruff_python_formatter::string::normalize::CharIndicesWithOffset::new(a1: &str, a2: i64) -> : struct24 {
    let a0: i64;  // rdi
    let v0: struct16;  // [bp-0x28]
    let v2: struct16;  // rax
    let v3: u64;  // rsi
    let v4: u64;  // rdx
    let v5: core::option::Option<&str>;  // rax

    v0 = v2;
    v5 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::RangeFrom<usize>>::get(a2, v3, v4) as u64;
    return struct24 {
        field_0: v5
        field_8: v4 + v5
        field_16: a2
    };
}
