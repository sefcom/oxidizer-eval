fn ruff_python_formatter::expression::binary_like::BinaryLike::flatten(a0: u64, a1: u64, a2: &u64, a3: i64, a4: u64, a5: u64) -> long long {
    let v0: u8;  // [bp-0x110]
    let v1: struct12;  // [bp-0x10]
    let v3: core::result::Result<usize, std::io::error::Error>;  // r9

    v3 = a3;
    v1 = 0;
    if !a1 {
        ruff_python_formatter::expression::binary_like::BinaryLike::flatten::recurse_binary(a2, 4, 0, 4, 0, a3, a4, a5, &v0);
    } else if a1 == 1 {
        ruff_python_formatter::expression::binary_like::BinaryLike::flatten::recurse_compare(a2, 4, 0, 4, 0, a3, a4, a5, &v0);
    } else {
        ruff_python_formatter::expression::binary_like::BinaryLike::flatten::recurse_bool(a2, 4, 0, 4, 0, a3, a4, a5, &v0);
    }
    return memcpy(a0, &v0, 264);
}
