fn ruff_python_formatter::string::normalize::StringNormalizer::normalize(a0: i64, a1: i64, a2: i64, a3: i64, a4: i64) -> double {
    let v0: u32;  // [bp-0x84]
    let v1: struct16;  // [bp-0x80]
    let v2: u8;  // [bp-0x80]
    let v3: struct16;  // [bp-0x78]
    let v4: struct24;  // [bp-0x70]
    let v5: struct16;  // [bp-0x68]
    let v6: u64;  // [bp-0x60]
    let v7: u64;  // [bp-0x58]
    let v8: u64;  // [bp-0x50]
    let v9: u8;  // [bp-0x48]
    let v10: u64;  // [bp-0x40]
    let v11: struct21;  // [bp-0x38]
    let v13: u32;  // edx
    let v14: u64;  // rdx
    let v16: u64;  // rbp
    let v17: struct21;  // r14b
    let v18: u32;  // eax

    v0 = a2;
    v6 = ruff_text_size::range::<impl core::convert::From<ruff_text_size::range::TextRange> for core::ops::range::Range<T>>::from(ruff_python_ast::expression::StringLikePart::content_range(a3, a4) as i32, v13);
    v5 = v14;
    v8 = *(a1 as &i64);
    v7 = *((a1 + 8) as &i64);
    v16 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(v6, v14, *(a1 as &i64), *((a1 + 8) as &i64)) as u64;
    ruff_python_formatter::string::normalize::StringNormalizer::choose_quotes(&v9, a1, v0, a3, a4);
    if (v9 & 1) {
        v17 = v11.field_0 as i8;
        ruff_python_formatter::string::normalize::normalize_string(&v2, v16, v14, v10, v11.field_0, 0);
    } else {
        v3 = v16;
        v4 = v14;
        v1 = 0x8000000000000000;
        v17 = v11.field_0 as i8;
    }
    v18 = ruff_python_ast::expression::StringLikePart::content_range(a3, a4);
    return struct40 {
        field_0: *(&v1.field_0 as &i128)
        field_16: v4
        field_24: v18
        field_28: v14 as u32
        field_32: v17
    };
}
