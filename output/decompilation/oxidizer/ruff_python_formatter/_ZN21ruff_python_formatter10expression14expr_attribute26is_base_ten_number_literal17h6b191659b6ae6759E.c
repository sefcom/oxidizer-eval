fn ruff_python_formatter::expression::expr_attribute::is_base_ten_number_literal(a0: i64, a1: u64, a2: u64) -> long long {
    let v0: u64;  // [bp-0x38]
    let v2: u64;  // rax
    let v3: u8;  // bl
    let v4: u32;  // ebx
    let v5: u32;  // ebx
    let v7: u64;  // rdx
    let v8: core::option::Option<&str>;  // rax

    v0 = v2;
    if *(a0 as &i32) == 21 {
        v3 = 1;
        v5 = v4 & -0x100 | 1;
        if !*((a0 + 8) as &i64) {
            v8 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(ruff_text_size::range::<impl core::convert::From<ruff_text_size::range::TextRange> for core::ops::range::Range<T>>::from(*((a0 + 32) as &i32), *((a0 + 36) as &i32)), v7, a1, a2) as u64;
        }
    }
    return v5 & -0x100 | v3 & 1;
}
