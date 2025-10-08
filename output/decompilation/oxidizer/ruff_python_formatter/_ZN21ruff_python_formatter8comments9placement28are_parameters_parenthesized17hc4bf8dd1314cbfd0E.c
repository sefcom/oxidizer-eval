fn ruff_python_formatter::comments::placement::are_parameters_parenthesized(a0: u64, a1: u32, a2: u64, a3: u64) -> long long {
    let v0: u64;  // [bp-0x38]
    let v1: struct12;  // [bp-0x34]
    let v3: u64;  // rax
    let v5: u64;  // rdx
    let v6: core::option::Option<&str>;  // rax
    let v7: &mut [u8];  // rax:rdx

    v0 = v3;
    v6 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(ruff_text_size::range::<impl core::convert::From<ruff_text_size::range::TextRange> for core::ops::range::Range<T>>::from(a0, a1), v5, a2, a3) as u64;
    v1 = 0;
    v7 = core::char::methods::encode_utf8_raw(40, &v1, a2);
    return core::slice::<impl [T]>::starts_with(v6, v5, v7.data_ptr, v7.length);
}
