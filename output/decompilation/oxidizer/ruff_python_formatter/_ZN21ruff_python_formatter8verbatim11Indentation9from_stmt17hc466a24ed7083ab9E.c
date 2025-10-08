fn ruff_python_formatter::verbatim::Indentation::from_stmt(a0: void*, a1: u64, a2: u32) -> long long {
    let v0: struct32;  // [bp-0x38]
    let v1: struct16;  // [bp-0x30]
    let v3: u32;  // ebp
    let v4: struct24;  // eax
    let v6: u64;  // rdx
    let v7: core::option::Option<&str>;  // rax
    let v9: core::option::Option<&str>;  // ebx
    let v10: u64;  // rdx
    let v11: u32;  // ebx
    let v12: i32;  // ebx
    let v13: struct8;  // rax:rax
    let v14: struct8;  // rax:rax

    v3 = <str as ruff_source_file::line_ranges::LineRanges>::line_start(a1, a2, <ruff_python_ast::generated::Stmt as ruff_text_size::traits::Ranged>::range(a0));
    v4 = <ruff_python_ast::generated::Stmt as ruff_text_size::traits::Ranged>::range(a0);
    if v3 > v4 {
        core::panicking::panic("assertion failed: start.raw <= end.raw"); /* do not return */
    }
    v7 = core::str::traits::<impl core::slice::index::SliceIndex<str> for core::ops::range::Range<usize>>::get(ruff_text_size::range::<impl core::convert::From<ruff_text_size::range::TextRange> for core::ops::range::Range<T>>::from(v3, v4), v6, a1, a2) as u64;
    v0 = v7;
    v1 = v6 + v7;
    v13 = core::str::validations::next_code_point();
    if !(v13.field_0 as i8 & 1) {
        return 0;
    }
    loop {
        v11 = v9;
        if v10 != 9 && v10 != 32 {
            return v11;
        }
        v12 = v11 + 1;
        v14 = core::str::validations::next_code_point();
        v9 = v12;
        if !(v14.field_0 as i8 & 1) {
            return v11 + 1;
        }
    }
}
