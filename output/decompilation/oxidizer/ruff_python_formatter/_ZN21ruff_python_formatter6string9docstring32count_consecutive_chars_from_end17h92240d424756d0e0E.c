fn ruff_python_formatter::string::docstring::count_consecutive_chars_from_end(a0: i64, a1: i64) -> u64 {
    let v0: u32;  // [bp-0x24]
    let v1: struct25;  // [bp-0x20]

    v0 = 92;
    v1 = struct25 {
        field_0: a0
        field_8: a1 + a0
        field_16: &v0
        field_24: 0
    };
    return <core::iter::adapters::take_while::TakeWhile<I,P> as core::iter::traits::iterator::Iterator>::fold(&v1);
}
