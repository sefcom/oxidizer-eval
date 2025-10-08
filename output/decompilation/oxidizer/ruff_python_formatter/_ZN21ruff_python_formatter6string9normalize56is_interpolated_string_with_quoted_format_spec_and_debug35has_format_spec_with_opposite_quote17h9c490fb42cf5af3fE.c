fn ruff_python_formatter::string::normalize::is_interpolated_string_with_quoted_format_spec_and_debug::has_format_spec_with_opposite_quote(a0: i64, a1: u8, a2: u64, a3: i128) -> char {
    let v0: u8;  // [bp-0x2a]
    let v1: struct16;  // [bp-0x29]
    let v2: struct16;  // [bp-0x28]
    let v3: struct24;  // [bp-0x18]

    v0 = a1;
    v1 = a3;
    v2 = struct16 {
        field_0: *((a0 + 8) as &i64)
        field_8: *((a0 + 16) as &i64) * 80 + *((a0 + 8) as &i64)
    };
    v3 = struct24 {
        field_0: a2
        field_8: &v1
        field_16: &v0
    };
    return <core::slice::iter::Iter<T> as core::iter::traits::iterator::Iterator>::any(&v2, &v3);
}
