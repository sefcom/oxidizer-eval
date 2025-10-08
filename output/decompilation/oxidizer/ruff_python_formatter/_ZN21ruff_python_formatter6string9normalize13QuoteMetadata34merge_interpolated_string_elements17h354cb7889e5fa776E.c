fn ruff_python_formatter::string::normalize::QuoteMetadata::merge_interpolated_string_elements(a1: i64, a2: i64, a3: i8, a4: i64, a5: i8) -> : struct16 {
    let a0: i64;  // rdi
    let v0: u32;  // [bp-0x8c]
    let v1: struct16;  // [bp-0x88]
    let v2: u64;  // [bp-0x68]
    let v3: u64;  // [bp-0x60]
    let v4: u64;  // [bp-0x58]
    let v5: struct11;  // [bp-0x50]
    let v6: struct13;  // [bp-0x40], Other Possible Types: struct16
    let v8: struct16;  // rbx
    let v9: struct12;  // r12
    let v11: struct16;  // xmm0
    let v12: u128;  // xmm0
    let v14: struct80;  // [bp-0x44]

    if !*((a2 + 16) as &i64) {
        return struct16 {
            field_0: v12
        };
    }
    v8 = *((a2 + 8) as &i64);
    v4 = *(a4 as &i64);
    v3 = *((a4 + 8) as &i64);
    v2 = v8 + 8;
    v9 = 0;
    v0 = a3;
    do {
        if *((v8 + v9) as &i64) == 9223372036854775809 {
            v6 = ruff_python_formatter::string::normalize::QuoteMetadata::from_str(<str as ruff_text_size::traits::TextSlice>::slice(v4, v3, v2 + v9), a2, v0, a5);
            v5 = ruff_python_formatter::string::normalize::QuoteMetadata::merge(&v1, &v6);
            if v14.field_0 as i8 == 2 {
                core::option::expect_failed("Merge to succeed because all parts have the same flags"); /* do not return */
            }
        } else {
            if *((v8 + v9) as &i64) != 0x8000000000000000 || !*((v8 + v9 + 64) as &i64) {
                continue;
            }
            v6 = ruff_python_formatter::string::normalize::QuoteMetadata::merge_interpolated_string_elements(&v1, *((v8 + v9 + 64) as &i64), v0, a4, a5);
        }
        v1 = v11;
        v9 += 80;
    } while (*((a2 + 16) as &i64) * 80 != v9);
    return struct16 {
        field_0: v12
    };
}
